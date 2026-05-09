/// <reference types="tree-sitter-cli/dsl" />

module.exports = grammar({
  name: 'cvg',

  externals: $ => [$.block_comment],

  extras: $ => [/\s/, $.comment, $.block_comment],

  word: $ => $.identifier,

  rules: {
    source_file: $ => repeat($._top_level),

    _top_level: $ => choice(
      $.device_def,
      $.instrument_def,
      $.kit_def,
      $.clip_def,
      $.scene_def,
      $.session_def,
      $.include_stmt,
      $.tempo_stmt,
      $.scale_stmt,
      $.play_stmt,
      $.stop_stmt,
    ),

    // ── device ──
    device_def: $ => seq(
      'device',
      field('name', $.identifier),
      '{',
      repeat($.device_property),
      '}',
    ),

    device_property: $ => seq(
      'port',
      $.port_value,
    ),

    // ── instrument ──
    instrument_def: $ => seq(
      'instrument',
      field('name', $.identifier),
      '{',
      repeat($.instrument_property),
      '}',
    ),

    instrument_property: $ => choice(
      seq('device', $.identifier),
      seq('channel', $.number),
      seq('note', $.note_literal),
      seq('gate_normal', $.number),
      seq('gate_staccato', $.number),
    ),

    // ── kit ──
    kit_def: $ => seq(
      'kit',
      field('name', $.identifier),
      '{',
      repeat($._kit_member),
      '}',
    ),

    _kit_member: $ => choice(
      seq('device', $.identifier),
      $.kit_instrument,
    ),

    kit_instrument: $ => seq(
      field('name', $.identifier),
      '{',
      repeat($.kit_instrument_property),
      '}',
    ),

    kit_instrument_property: $ => choice(
      seq('channel', $.number),
      seq('note', $.note_literal),
      seq('gate_normal', $.number),
      seq('gate_staccato', $.number),
    ),

    // note_literal: c2, eb3, f#5 etc (note name + octave number)
    note_literal: $ => token(seq(/[a-g][#b]?/, /[0-9]/)),

    // ── clip ──
    clip_def: $ => seq(
      'clip',
      field('name', $.identifier),
      repeat($.clip_header),
      '{',
      repeat($._clip_content),
      '}',
    ),

    clip_header: $ => seq(
      '[',
      $._clip_attr,
      ']',
    ),

    _clip_attr: $ => choice(
      $.bars_attr,
      $.time_attr,
      $.scale_attr,
    ),

    bars_attr: $ => seq('bars', $.number),
    time_attr: $ => seq('time', $.time_signature),
    scale_attr: $ => seq('scale', $.note_name, $.scale_type),

    time_signature: $ => /\d+\/\d+/,

    scale_type: $ => choice(
      'major', 'minor', 'harmonic_minor', 'melodic_minor',
      'dorian', 'phrygian', 'lydian', 'mixolydian', 'locrian',
    ),

    _clip_content: $ => choice(
      $.use_stmt,
      $.resolution_stmt,
      $.dash_divider,
      $.drum_line,
      $.melody_line,
    ),

    // ── dash divider (`---`) ──
    // Exactly three hyphens. Separates parallel layers within a clip body.
    // Higher precedence than `step_pattern` so a bare `---` is not
    // misinterpreted as a drum step pattern. Hyphens are no longer part of
    // `step_pattern` (see below), so 4+ hyphens become a parse ERROR which
    // matches the lcvgc engine's strict-3-hyphens specification.
    dash_divider: $ => token(prec(1, '---')),

    use_stmt: $ => seq('use', field('kit', $.identifier)),
    resolution_stmt: $ => seq('resolution', $.number),

    // ── drum line ──
    // The step_pattern is a token that captures the entire pattern as one lexeme
    drum_line: $ => prec.left(seq(
      field('instrument', $.identifier),
      $.step_pattern,
    )),

    // Step pattern: contiguous string of step characters (no whitespace).
    // Note: hyphens are NOT part of step_pattern. They are reserved for the
    // `---` dash_divider token (parallel layer separator).
    step_pattern: $ => token(prec(-1, /[xXo.|()>*0-9]+/)),

    // ── melody line ──
    melody_line: $ => prec.right(seq(
      field('instrument', $.identifier),
      repeat1($._melody_element),
    )),

    _melody_element: $ => choice(
      $.pitched_note,
      $.rest,
      $.chord,
      $.chord_name,
      $.melody_group,
      $.bar_jump,
    ),

    bar_jump: $ => seq('>', $.number),

    pitched_note: $ => seq(
      $.note_name,
      optional($._oct_dur_suffix),
      optional($.articulation),
    ),

    // オクターブ・音価の後置サフィックス。 lcvgc 仕様 §7 で定義される 4 形式:
    //   `:N:D`   (octave + duration)        例: c:3:8
    //   `:N`     (octave のみ)              例: c:3
    //   `::D`    (octave 省略, duration)    例: f::4
    //   (なし)   (両方引継ぎ)                例: c
    //
    // The trailing octave/duration suffix on a pitched note. Modeled as a
    // single rule so the parser can disambiguate `c:4:1` (octave=4,
    // duration=1) from `c:8` (octave=8 — a parse error in semantic terms,
    // but legal in the grammar) without GLR ambiguity.
    _oct_dur_suffix: $ => choice(
      seq(':', $.octave, ':', $.duration),
      seq(':', $.octave),
      seq('::', $.duration),
    ),

    rest: $ => seq('r', optional(seq(':', $.duration))),

    octave: $ => /[0-9]/,

    duration: $ => choice('1', '2', '4', '4.', '8', '8.', '16', '32'),

    articulation: $ => choice(
      "'",
      seq('g', $.number),
    ),

    chord: $ => seq(
      '[',
      repeat1(choice($.note_name, $.rest)),
      ']',
      optional($._oct_dur_suffix),
      optional($.arp_expr),
    ),

    chord_name: $ => seq(
      $.chord_symbol,
      optional($._oct_dur_suffix),
      optional($.arp_expr),
    ),

    // コードネーム: 音名 (オプショナルな # / b) + サフィックス。
    // lcvgc 仕様 §7.6 の全サフィックスを長い順から並べる (最長一致のため):
    //   M7#5, m7b5, mM7, m13, m11, m9, m7, m6, M7, Maj, sus4, sus2, dim7,
    //   maj7, add9, aug, dim, 13, 11, m, 9, 7, 6
    // (`6` `7` `9` 等の単独数字サフィックスは最後)
    //
    // Chord symbol token: note name (optional sharp/flat) followed by a
    // chord-quality suffix. Suffixes are listed longest-first to ensure the
    // regex prefers `mM7` over `m`, `m7` over `m`, `m13` over `m`, etc.
    chord_symbol: $ =>
      token(
        prec(
          2,
          /[a-g][#b]?(?:M7#5|m7b5|mM7|maj7|sus4|sus2|dim7|add9|m13|m11|M7|Maj|aug|dim|m9|m7|m6|13|11|m|9|7|6)/,
        ),
      ),

    arp_expr: $ => seq(
      'arp',
      '(',
      $.arp_direction,
      ',',
      $.number,
      ')',
    ),

    arp_direction: $ => choice('up', 'down', 'updown', 'random'),

    melody_group: $ => seq(
      '(',
      repeat1($._melody_element),
      ')',
      optional(seq('*', $.number)),
    ),

    // ── scene ──
    scene_def: $ => seq(
      'scene',
      field('name', $.identifier),
      '{',
      repeat($._scene_content),
      '}',
    ),

    _scene_content: $ => choice(
      $.scene_slot,
      $.scene_tempo,
    ),

    scene_slot: $ => seq(
      $.identifier,
      optional(choice(
        $.probability,
        $.shuffle_expr,
      )),
    ),

    probability: $ => /[1-9]/,

    shuffle_expr: $ => seq(
      '|',
      $.identifier,
      optional($.weight),
    ),

    weight: $ => seq('*', $.number),

    scene_tempo: $ => seq(
      'tempo',
      choice($.number, $.tempo_delta),
    ),

    tempo_delta: $ => /[+-]\d+/,

    // ── session ──
    session_def: $ => seq(
      'session',
      field('name', $.identifier),
      '{',
      repeat($.session_entry),
      '}',
    ),

    session_entry: $ => seq(
      $.identifier,
      optional($.session_modifier),
    ),

    session_modifier: $ => seq(
      '[',
      choice(
        seq('repeat', $.number),
        'loop',
      ),
      ']',
    ),

    // ── include ──
    include_stmt: $ => seq('include', $.include_path),

    // ── tempo (top-level) ──
    tempo_stmt: $ => seq('tempo', $.number),

    // ── scale (global) ──
    scale_stmt: $ => seq('scale', $.note_name, $.scale_type),

    // ── play / stop ──
    play_stmt: $ => seq(
      'play',
      optional('session'),
      $.identifier,
      optional($.session_modifier),
    ),

    stop_stmt: $ => seq(
      'stop',
      optional($.identifier),
    ),

    // ── primitives ──
    note_name: $ => token(prec(1, /[a-g][#b]?/)),
    number: $ => /\d+/,
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    // port_value: port name including spaces, up to newline or '}'
    port_value: $ => token(prec(-1, /[^\n}]+/)),
    // include_path: file path (no spaces)
    include_path: $ => /\S+/,
    comment: $ => /\/\/.*/,
  },
});
