#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 220
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 134
#define ALIAS_COUNT 0
#define TOKEN_COUNT 75
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_device = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_port = 5,
  anon_sym_instrument = 6,
  anon_sym_channel = 7,
  anon_sym_note = 8,
  anon_sym_gate_normal = 9,
  anon_sym_gate_staccato = 10,
  anon_sym_kit = 11,
  sym_note_literal = 12,
  anon_sym_clip = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  anon_sym_bars = 16,
  anon_sym_time = 17,
  anon_sym_scale = 18,
  sym_time_signature = 19,
  anon_sym_major = 20,
  anon_sym_minor = 21,
  anon_sym_harmonic_minor = 22,
  anon_sym_melodic_minor = 23,
  anon_sym_dorian = 24,
  anon_sym_phrygian = 25,
  anon_sym_lydian = 26,
  anon_sym_mixolydian = 27,
  anon_sym_locrian = 28,
  sym_dash_divider = 29,
  anon_sym_use = 30,
  anon_sym_resolution = 31,
  sym_step_pattern = 32,
  anon_sym_GT = 33,
  anon_sym_COLON = 34,
  anon_sym_COLON_COLON = 35,
  anon_sym_r = 36,
  sym_octave = 37,
  anon_sym_1 = 38,
  anon_sym_2 = 39,
  anon_sym_4 = 40,
  anon_sym_4_DOT = 41,
  anon_sym_8 = 42,
  anon_sym_8_DOT = 43,
  anon_sym_16 = 44,
  anon_sym_32 = 45,
  anon_sym_SQUOTE = 46,
  anon_sym_g = 47,
  sym_chord_symbol = 48,
  anon_sym_arp = 49,
  anon_sym_LPAREN = 50,
  anon_sym_COMMA = 51,
  anon_sym_RPAREN = 52,
  anon_sym_up = 53,
  anon_sym_down = 54,
  anon_sym_updown = 55,
  anon_sym_random = 56,
  anon_sym_STAR = 57,
  anon_sym_scene = 58,
  sym_probability = 59,
  anon_sym_PIPE = 60,
  anon_sym_tempo = 61,
  sym_tempo_delta = 62,
  anon_sym_session = 63,
  anon_sym_repeat = 64,
  anon_sym_loop = 65,
  anon_sym_include = 66,
  anon_sym_play = 67,
  anon_sym_stop = 68,
  sym_note_name = 69,
  sym_number = 70,
  sym_port_value = 71,
  sym_include_path = 72,
  sym_comment = 73,
  sym_block_comment = 74,
  sym_source_file = 75,
  sym__top_level = 76,
  sym_device_def = 77,
  sym_device_property = 78,
  sym_instrument_def = 79,
  sym_instrument_property = 80,
  sym_kit_def = 81,
  sym__kit_member = 82,
  sym_kit_instrument = 83,
  sym_kit_instrument_property = 84,
  sym_clip_def = 85,
  sym_clip_header = 86,
  sym__clip_attr = 87,
  sym_bars_attr = 88,
  sym_time_attr = 89,
  sym_scale_attr = 90,
  sym_scale_type = 91,
  sym__clip_content = 92,
  sym_use_stmt = 93,
  sym_resolution_stmt = 94,
  sym_drum_line = 95,
  sym_melody_line = 96,
  sym__melody_element = 97,
  sym_bar_jump = 98,
  sym_pitched_note = 99,
  sym__oct_dur_suffix = 100,
  sym_rest = 101,
  sym_duration = 102,
  sym_articulation = 103,
  sym_chord = 104,
  sym_chord_name = 105,
  sym_arp_expr = 106,
  sym_arp_direction = 107,
  sym_melody_group = 108,
  sym_scene_def = 109,
  sym__scene_content = 110,
  sym_scene_slot = 111,
  sym_shuffle_expr = 112,
  sym_weight = 113,
  sym_scene_tempo = 114,
  sym_session_def = 115,
  sym_session_entry = 116,
  sym_session_modifier = 117,
  sym_include_stmt = 118,
  sym_tempo_stmt = 119,
  sym_scale_stmt = 120,
  sym_play_stmt = 121,
  sym_stop_stmt = 122,
  aux_sym_source_file_repeat1 = 123,
  aux_sym_device_def_repeat1 = 124,
  aux_sym_instrument_def_repeat1 = 125,
  aux_sym_kit_def_repeat1 = 126,
  aux_sym_kit_instrument_repeat1 = 127,
  aux_sym_clip_def_repeat1 = 128,
  aux_sym_clip_def_repeat2 = 129,
  aux_sym_melody_line_repeat1 = 130,
  aux_sym_chord_repeat1 = 131,
  aux_sym_scene_def_repeat1 = 132,
  aux_sym_session_def_repeat1 = 133,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_device] = "device",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_port] = "port",
  [anon_sym_instrument] = "instrument",
  [anon_sym_channel] = "channel",
  [anon_sym_note] = "note",
  [anon_sym_gate_normal] = "gate_normal",
  [anon_sym_gate_staccato] = "gate_staccato",
  [anon_sym_kit] = "kit",
  [sym_note_literal] = "note_literal",
  [anon_sym_clip] = "clip",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_bars] = "bars",
  [anon_sym_time] = "time",
  [anon_sym_scale] = "scale",
  [sym_time_signature] = "time_signature",
  [anon_sym_major] = "major",
  [anon_sym_minor] = "minor",
  [anon_sym_harmonic_minor] = "harmonic_minor",
  [anon_sym_melodic_minor] = "melodic_minor",
  [anon_sym_dorian] = "dorian",
  [anon_sym_phrygian] = "phrygian",
  [anon_sym_lydian] = "lydian",
  [anon_sym_mixolydian] = "mixolydian",
  [anon_sym_locrian] = "locrian",
  [sym_dash_divider] = "dash_divider",
  [anon_sym_use] = "use",
  [anon_sym_resolution] = "resolution",
  [sym_step_pattern] = "step_pattern",
  [anon_sym_GT] = ">",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_r] = "r",
  [sym_octave] = "octave",
  [anon_sym_1] = "1",
  [anon_sym_2] = "2",
  [anon_sym_4] = "4",
  [anon_sym_4_DOT] = "4.",
  [anon_sym_8] = "8",
  [anon_sym_8_DOT] = "8.",
  [anon_sym_16] = "16",
  [anon_sym_32] = "32",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_g] = "g",
  [sym_chord_symbol] = "chord_symbol",
  [anon_sym_arp] = "arp",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_up] = "up",
  [anon_sym_down] = "down",
  [anon_sym_updown] = "updown",
  [anon_sym_random] = "random",
  [anon_sym_STAR] = "*",
  [anon_sym_scene] = "scene",
  [sym_probability] = "probability",
  [anon_sym_PIPE] = "|",
  [anon_sym_tempo] = "tempo",
  [sym_tempo_delta] = "tempo_delta",
  [anon_sym_session] = "session",
  [anon_sym_repeat] = "repeat",
  [anon_sym_loop] = "loop",
  [anon_sym_include] = "include",
  [anon_sym_play] = "play",
  [anon_sym_stop] = "stop",
  [sym_note_name] = "note_name",
  [sym_number] = "number",
  [sym_port_value] = "port_value",
  [sym_include_path] = "include_path",
  [sym_comment] = "comment",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym__top_level] = "_top_level",
  [sym_device_def] = "device_def",
  [sym_device_property] = "device_property",
  [sym_instrument_def] = "instrument_def",
  [sym_instrument_property] = "instrument_property",
  [sym_kit_def] = "kit_def",
  [sym__kit_member] = "_kit_member",
  [sym_kit_instrument] = "kit_instrument",
  [sym_kit_instrument_property] = "kit_instrument_property",
  [sym_clip_def] = "clip_def",
  [sym_clip_header] = "clip_header",
  [sym__clip_attr] = "_clip_attr",
  [sym_bars_attr] = "bars_attr",
  [sym_time_attr] = "time_attr",
  [sym_scale_attr] = "scale_attr",
  [sym_scale_type] = "scale_type",
  [sym__clip_content] = "_clip_content",
  [sym_use_stmt] = "use_stmt",
  [sym_resolution_stmt] = "resolution_stmt",
  [sym_drum_line] = "drum_line",
  [sym_melody_line] = "melody_line",
  [sym__melody_element] = "_melody_element",
  [sym_bar_jump] = "bar_jump",
  [sym_pitched_note] = "pitched_note",
  [sym__oct_dur_suffix] = "_oct_dur_suffix",
  [sym_rest] = "rest",
  [sym_duration] = "duration",
  [sym_articulation] = "articulation",
  [sym_chord] = "chord",
  [sym_chord_name] = "chord_name",
  [sym_arp_expr] = "arp_expr",
  [sym_arp_direction] = "arp_direction",
  [sym_melody_group] = "melody_group",
  [sym_scene_def] = "scene_def",
  [sym__scene_content] = "_scene_content",
  [sym_scene_slot] = "scene_slot",
  [sym_shuffle_expr] = "shuffle_expr",
  [sym_weight] = "weight",
  [sym_scene_tempo] = "scene_tempo",
  [sym_session_def] = "session_def",
  [sym_session_entry] = "session_entry",
  [sym_session_modifier] = "session_modifier",
  [sym_include_stmt] = "include_stmt",
  [sym_tempo_stmt] = "tempo_stmt",
  [sym_scale_stmt] = "scale_stmt",
  [sym_play_stmt] = "play_stmt",
  [sym_stop_stmt] = "stop_stmt",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_device_def_repeat1] = "device_def_repeat1",
  [aux_sym_instrument_def_repeat1] = "instrument_def_repeat1",
  [aux_sym_kit_def_repeat1] = "kit_def_repeat1",
  [aux_sym_kit_instrument_repeat1] = "kit_instrument_repeat1",
  [aux_sym_clip_def_repeat1] = "clip_def_repeat1",
  [aux_sym_clip_def_repeat2] = "clip_def_repeat2",
  [aux_sym_melody_line_repeat1] = "melody_line_repeat1",
  [aux_sym_chord_repeat1] = "chord_repeat1",
  [aux_sym_scene_def_repeat1] = "scene_def_repeat1",
  [aux_sym_session_def_repeat1] = "session_def_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_device] = anon_sym_device,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_port] = anon_sym_port,
  [anon_sym_instrument] = anon_sym_instrument,
  [anon_sym_channel] = anon_sym_channel,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_gate_normal] = anon_sym_gate_normal,
  [anon_sym_gate_staccato] = anon_sym_gate_staccato,
  [anon_sym_kit] = anon_sym_kit,
  [sym_note_literal] = sym_note_literal,
  [anon_sym_clip] = anon_sym_clip,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_bars] = anon_sym_bars,
  [anon_sym_time] = anon_sym_time,
  [anon_sym_scale] = anon_sym_scale,
  [sym_time_signature] = sym_time_signature,
  [anon_sym_major] = anon_sym_major,
  [anon_sym_minor] = anon_sym_minor,
  [anon_sym_harmonic_minor] = anon_sym_harmonic_minor,
  [anon_sym_melodic_minor] = anon_sym_melodic_minor,
  [anon_sym_dorian] = anon_sym_dorian,
  [anon_sym_phrygian] = anon_sym_phrygian,
  [anon_sym_lydian] = anon_sym_lydian,
  [anon_sym_mixolydian] = anon_sym_mixolydian,
  [anon_sym_locrian] = anon_sym_locrian,
  [sym_dash_divider] = sym_dash_divider,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_resolution] = anon_sym_resolution,
  [sym_step_pattern] = sym_step_pattern,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_r] = anon_sym_r,
  [sym_octave] = sym_octave,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_4_DOT] = anon_sym_4_DOT,
  [anon_sym_8] = anon_sym_8,
  [anon_sym_8_DOT] = anon_sym_8_DOT,
  [anon_sym_16] = anon_sym_16,
  [anon_sym_32] = anon_sym_32,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_g] = anon_sym_g,
  [sym_chord_symbol] = sym_chord_symbol,
  [anon_sym_arp] = anon_sym_arp,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_up] = anon_sym_up,
  [anon_sym_down] = anon_sym_down,
  [anon_sym_updown] = anon_sym_updown,
  [anon_sym_random] = anon_sym_random,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_scene] = anon_sym_scene,
  [sym_probability] = sym_probability,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_tempo] = anon_sym_tempo,
  [sym_tempo_delta] = sym_tempo_delta,
  [anon_sym_session] = anon_sym_session,
  [anon_sym_repeat] = anon_sym_repeat,
  [anon_sym_loop] = anon_sym_loop,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_play] = anon_sym_play,
  [anon_sym_stop] = anon_sym_stop,
  [sym_note_name] = sym_note_name,
  [sym_number] = sym_number,
  [sym_port_value] = sym_port_value,
  [sym_include_path] = sym_include_path,
  [sym_comment] = sym_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym__top_level] = sym__top_level,
  [sym_device_def] = sym_device_def,
  [sym_device_property] = sym_device_property,
  [sym_instrument_def] = sym_instrument_def,
  [sym_instrument_property] = sym_instrument_property,
  [sym_kit_def] = sym_kit_def,
  [sym__kit_member] = sym__kit_member,
  [sym_kit_instrument] = sym_kit_instrument,
  [sym_kit_instrument_property] = sym_kit_instrument_property,
  [sym_clip_def] = sym_clip_def,
  [sym_clip_header] = sym_clip_header,
  [sym__clip_attr] = sym__clip_attr,
  [sym_bars_attr] = sym_bars_attr,
  [sym_time_attr] = sym_time_attr,
  [sym_scale_attr] = sym_scale_attr,
  [sym_scale_type] = sym_scale_type,
  [sym__clip_content] = sym__clip_content,
  [sym_use_stmt] = sym_use_stmt,
  [sym_resolution_stmt] = sym_resolution_stmt,
  [sym_drum_line] = sym_drum_line,
  [sym_melody_line] = sym_melody_line,
  [sym__melody_element] = sym__melody_element,
  [sym_bar_jump] = sym_bar_jump,
  [sym_pitched_note] = sym_pitched_note,
  [sym__oct_dur_suffix] = sym__oct_dur_suffix,
  [sym_rest] = sym_rest,
  [sym_duration] = sym_duration,
  [sym_articulation] = sym_articulation,
  [sym_chord] = sym_chord,
  [sym_chord_name] = sym_chord_name,
  [sym_arp_expr] = sym_arp_expr,
  [sym_arp_direction] = sym_arp_direction,
  [sym_melody_group] = sym_melody_group,
  [sym_scene_def] = sym_scene_def,
  [sym__scene_content] = sym__scene_content,
  [sym_scene_slot] = sym_scene_slot,
  [sym_shuffle_expr] = sym_shuffle_expr,
  [sym_weight] = sym_weight,
  [sym_scene_tempo] = sym_scene_tempo,
  [sym_session_def] = sym_session_def,
  [sym_session_entry] = sym_session_entry,
  [sym_session_modifier] = sym_session_modifier,
  [sym_include_stmt] = sym_include_stmt,
  [sym_tempo_stmt] = sym_tempo_stmt,
  [sym_scale_stmt] = sym_scale_stmt,
  [sym_play_stmt] = sym_play_stmt,
  [sym_stop_stmt] = sym_stop_stmt,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_device_def_repeat1] = aux_sym_device_def_repeat1,
  [aux_sym_instrument_def_repeat1] = aux_sym_instrument_def_repeat1,
  [aux_sym_kit_def_repeat1] = aux_sym_kit_def_repeat1,
  [aux_sym_kit_instrument_repeat1] = aux_sym_kit_instrument_repeat1,
  [aux_sym_clip_def_repeat1] = aux_sym_clip_def_repeat1,
  [aux_sym_clip_def_repeat2] = aux_sym_clip_def_repeat2,
  [aux_sym_melody_line_repeat1] = aux_sym_melody_line_repeat1,
  [aux_sym_chord_repeat1] = aux_sym_chord_repeat1,
  [aux_sym_scene_def_repeat1] = aux_sym_scene_def_repeat1,
  [aux_sym_session_def_repeat1] = aux_sym_session_def_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_device] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_port] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_instrument] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_channel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gate_normal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gate_staccato] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kit] = {
    .visible = true,
    .named = false,
  },
  [sym_note_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_clip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bars] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scale] = {
    .visible = true,
    .named = false,
  },
  [sym_time_signature] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_major] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_harmonic_minor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_melodic_minor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dorian] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_phrygian] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lydian] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mixolydian] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_locrian] = {
    .visible = true,
    .named = false,
  },
  [sym_dash_divider] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resolution] = {
    .visible = true,
    .named = false,
  },
  [sym_step_pattern] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r] = {
    .visible = true,
    .named = false,
  },
  [sym_octave] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_8_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_g] = {
    .visible = true,
    .named = false,
  },
  [sym_chord_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_arp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_up] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_down] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_updown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_random] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scene] = {
    .visible = true,
    .named = false,
  },
  [sym_probability] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tempo] = {
    .visible = true,
    .named = false,
  },
  [sym_tempo_delta] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_session] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_play] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stop] = {
    .visible = true,
    .named = false,
  },
  [sym_note_name] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_port_value] = {
    .visible = true,
    .named = true,
  },
  [sym_include_path] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level] = {
    .visible = false,
    .named = true,
  },
  [sym_device_def] = {
    .visible = true,
    .named = true,
  },
  [sym_device_property] = {
    .visible = true,
    .named = true,
  },
  [sym_instrument_def] = {
    .visible = true,
    .named = true,
  },
  [sym_instrument_property] = {
    .visible = true,
    .named = true,
  },
  [sym_kit_def] = {
    .visible = true,
    .named = true,
  },
  [sym__kit_member] = {
    .visible = false,
    .named = true,
  },
  [sym_kit_instrument] = {
    .visible = true,
    .named = true,
  },
  [sym_kit_instrument_property] = {
    .visible = true,
    .named = true,
  },
  [sym_clip_def] = {
    .visible = true,
    .named = true,
  },
  [sym_clip_header] = {
    .visible = true,
    .named = true,
  },
  [sym__clip_attr] = {
    .visible = false,
    .named = true,
  },
  [sym_bars_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_time_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_scale_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_scale_type] = {
    .visible = true,
    .named = true,
  },
  [sym__clip_content] = {
    .visible = false,
    .named = true,
  },
  [sym_use_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_resolution_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_drum_line] = {
    .visible = true,
    .named = true,
  },
  [sym_melody_line] = {
    .visible = true,
    .named = true,
  },
  [sym__melody_element] = {
    .visible = false,
    .named = true,
  },
  [sym_bar_jump] = {
    .visible = true,
    .named = true,
  },
  [sym_pitched_note] = {
    .visible = true,
    .named = true,
  },
  [sym__oct_dur_suffix] = {
    .visible = false,
    .named = true,
  },
  [sym_rest] = {
    .visible = true,
    .named = true,
  },
  [sym_duration] = {
    .visible = true,
    .named = true,
  },
  [sym_articulation] = {
    .visible = true,
    .named = true,
  },
  [sym_chord] = {
    .visible = true,
    .named = true,
  },
  [sym_chord_name] = {
    .visible = true,
    .named = true,
  },
  [sym_arp_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_arp_direction] = {
    .visible = true,
    .named = true,
  },
  [sym_melody_group] = {
    .visible = true,
    .named = true,
  },
  [sym_scene_def] = {
    .visible = true,
    .named = true,
  },
  [sym__scene_content] = {
    .visible = false,
    .named = true,
  },
  [sym_scene_slot] = {
    .visible = true,
    .named = true,
  },
  [sym_shuffle_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_weight] = {
    .visible = true,
    .named = true,
  },
  [sym_scene_tempo] = {
    .visible = true,
    .named = true,
  },
  [sym_session_def] = {
    .visible = true,
    .named = true,
  },
  [sym_session_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_session_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_include_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_tempo_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_scale_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_play_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_stop_stmt] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_device_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instrument_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_kit_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_kit_instrument_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_clip_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_clip_def_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_melody_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_chord_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scene_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_session_def_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_instrument = 1,
  field_kit = 2,
  field_name = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_instrument] = "instrument",
  [field_kit] = "kit",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_kit, 1},
  [2] =
    {field_instrument, 0},
  [3] =
    {field_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 5,
  [10] = 10,
  [11] = 11,
  [12] = 10,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 15,
  [18] = 18,
  [19] = 6,
  [20] = 14,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 7,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 21,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 22,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 23,
  [55] = 8,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 14,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 21,
  [76] = 18,
  [77] = 77,
  [78] = 22,
  [79] = 23,
  [80] = 80,
  [81] = 80,
  [82] = 82,
  [83] = 80,
  [84] = 84,
  [85] = 84,
  [86] = 82,
  [87] = 82,
  [88] = 26,
  [89] = 84,
  [90] = 27,
  [91] = 91,
  [92] = 52,
  [93] = 93,
  [94] = 94,
  [95] = 37,
  [96] = 62,
  [97] = 97,
  [98] = 98,
  [99] = 59,
  [100] = 100,
  [101] = 69,
  [102] = 60,
  [103] = 70,
  [104] = 58,
  [105] = 66,
  [106] = 106,
  [107] = 107,
  [108] = 71,
  [109] = 61,
  [110] = 64,
  [111] = 111,
  [112] = 112,
  [113] = 68,
  [114] = 56,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 123,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 121,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 37,
  [138] = 138,
  [139] = 139,
  [140] = 135,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 21,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 62,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 153,
  [156] = 156,
  [157] = 38,
  [158] = 158,
  [159] = 159,
  [160] = 33,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 175,
  [199] = 174,
  [200] = 169,
  [201] = 201,
  [202] = 202,
  [203] = 191,
  [204] = 204,
  [205] = 205,
  [206] = 189,
  [207] = 165,
  [208] = 170,
  [209] = 209,
  [210] = 191,
  [211] = 211,
  [212] = 212,
  [213] = 176,
  [214] = 214,
  [215] = 215,
  [216] = 168,
  [217] = 164,
  [218] = 218,
  [219] = 182,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(36);
      ADVANCE_MAP(
        '\'', 68,
        '(', 76,
        ')', 78,
        '*', 79,
        '+', 32,
        ',', 77,
        '-', 7,
        '.', 44,
        '/', 12,
        '0', 53,
        '1', 54,
        '2', 57,
        '3', 52,
        '4', 59,
        '8', 62,
        ':', 47,
        '>', 45,
        '[', 40,
        ']', 41,
        'g', 84,
        'r', 50,
        '{', 37,
        '|', 81,
        '}', 38,
        'X', 105,
        'o', 105,
        'x', 105,
      );
      if (('5' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '/') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(109);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\'', 68,
        '(', 76,
        ')', 78,
        '*', 79,
        '/', 12,
        ':', 47,
        '>', 45,
        '[', 40,
        'g', 86,
        'r', 49,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\'', 68,
        '(', 76,
        ')', 78,
        '-', 6,
        '/', 12,
        ':', 47,
        '>', 45,
        '[', 40,
        'g', 84,
        'r', 50,
        '}', 38,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '(', 76,
        ')', 78,
        '*', 79,
        '+', 32,
        '-', 7,
        '/', 12,
        ':', 47,
        '>', 45,
        '[', 40,
        'r', 50,
        '}', 38,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('a' <= lookahead && lookahead <= 'g')) ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('a' <= lookahead && lookahead <= 'g')) ADVANCE(86);
      if (lookahead == ')' ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= '9') ||
          lookahead == 'X' ||
          lookahead == 'o' ||
          lookahead == 'x' ||
          lookahead == '|') ADVANCE(44);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == ']') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('a' <= lookahead && lookahead <= 'g')) ADVANCE(88);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '|') ADVANCE(81);
      if (lookahead == '}') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('a' <= lookahead && lookahead <= 'g')) ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(114);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '2') ADVANCE(66);
      END_STATE();
    case 16:
      if (lookahead == '5') ADVANCE(69);
      END_STATE();
    case 17:
      if (lookahead == '7') ADVANCE(69);
      END_STATE();
    case 18:
      if (lookahead == '7') ADVANCE(70);
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == '9') ADVANCE(69);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'j') ADVANCE(69);
      END_STATE();
    case 25:
      if (lookahead == 'j') ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == '#' ||
          lookahead == 'b') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 30:
      if (lookahead == '1' ||
          lookahead == '3') ADVANCE(69);
      END_STATE();
    case 31:
      if (lookahead == '2' ||
          lookahead == '4') ADVANCE(69);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      ADVANCE_MAP(
        ')', 78,
        '*', 79,
        '-', 6,
        '/', 12,
        '1', 55,
        '2', 56,
        '3', 15,
        '4', 58,
        '8', 61,
        '[', 40,
        ']', 41,
        '}', 38,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_note_literal);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_time_signature);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_dash_divider);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_step_pattern);
      if (('(' <= lookahead && lookahead <= '*') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          lookahead == 'X' ||
          lookahead == 'o' ||
          lookahead == 'x' ||
          lookahead == '|') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_r);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_octave);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_octave);
      if (lookahead == '2') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_octave);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '6') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '6') ADVANCE(64);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_4);
      if (lookahead == '.') ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_4);
      if (lookahead == '.') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_4_DOT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_8);
      if (lookahead == '.') ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_8);
      if (lookahead == '.') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_8_DOT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_32);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_chord_symbol);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_chord_symbol);
      if (lookahead == '#') ADVANCE(16);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_chord_symbol);
      if (lookahead == '1') ADVANCE(103);
      if (lookahead == '7') ADVANCE(75);
      if (lookahead == 'M') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == '6' ||
          lookahead == '9') ADVANCE(69);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_chord_symbol);
      if (lookahead == '1') ADVANCE(30);
      if (lookahead == '7') ADVANCE(74);
      if (lookahead == 'M') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == '6' ||
          lookahead == '9') ADVANCE(69);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_chord_symbol);
      if (lookahead == '7') ADVANCE(69);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_chord_symbol);
      if (lookahead == 'b') ADVANCE(16);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_chord_symbol);
      if (lookahead == 'b') ADVANCE(90);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_probability);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_tempo_delta);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_note_name);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_note_name);
      ADVANCE_MAP(
        '#', 87,
        '1', 103,
        'M', 92,
        'a', 94,
        'b', 85,
        'd', 97,
        'm', 71,
        's', 102,
        '6', 69,
        '7', 69,
        '9', 69,
      );
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_note_name);
      ADVANCE_MAP(
        '1', 103,
        'M', 92,
        'a', 94,
        'd', 97,
        'm', 71,
        's', 102,
        '6', 69,
        '7', 69,
        '9', 69,
      );
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_note_name);
      ADVANCE_MAP(
        '1', 30,
        'M', 18,
        'a', 20,
        'd', 23,
        'm', 72,
        's', 28,
        '#', 87,
        'b', 87,
        '6', 69,
        '7', 69,
        '9', 69,
      );
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_note_name);
      ADVANCE_MAP(
        '1', 30,
        'M', 18,
        'a', 20,
        'd', 23,
        'm', 72,
        's', 28,
        '6', 69,
        '7', 69,
        '9', 69,
      );
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_note_name);
      if (lookahead == '#' ||
          lookahead == 'b') ADVANCE(83);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '5') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '7') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '7') ADVANCE(70);
      if (lookahead == 'a') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '9') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1' ||
          lookahead == '3') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2' ||
          lookahead == '4') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'X' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_port_value);
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '/') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(109);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_port_value);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_port_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_include_path);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(112);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_include_path);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_include_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '}') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(114);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'a', 1,
        'b', 2,
        'c', 3,
        'd', 4,
        'g', 5,
        'h', 6,
        'i', 7,
        'k', 8,
        'l', 9,
        'm', 10,
        'n', 11,
        'p', 12,
        'r', 13,
        's', 14,
        't', 15,
        'u', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == 'h') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == 'y') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'h') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == 'p') ADVANCE(43);
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 17:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 21:
      if (lookahead == 'v') ADVANCE(49);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(50);
      if (lookahead == 'w') ADVANCE(51);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(54);
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 29:
      if (lookahead == 'j') ADVANCE(60);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'x') ADVANCE(63);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(69);
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_up);
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_arp);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_kit);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(90);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 65:
      if (lookahead == 'y') ADVANCE(97);
      END_STATE();
    case 66:
      if (lookahead == 'y') ADVANCE(98);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 74:
      if (lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 75:
      if (lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_bars);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_clip);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_down);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(113);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 87:
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_loop);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(123);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_play);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_port);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_stop);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_time);
      END_STATE();
    case 109:
      if (lookahead == 'w') ADVANCE(131);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 115:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_major);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_minor);
      END_STATE();
    case 122:
      if (lookahead == 'y') ADVANCE(143);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 124:
      if (lookahead == 'm') ADVANCE(145);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 126:
      if (lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_scene);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_tempo);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_device);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_dorian);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_lydian);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(157);
      END_STATE();
    case 143:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_random);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_updown);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_channel);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_locrian);
      END_STATE();
    case 157:
      if (lookahead == '_') ADVANCE(166);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_session);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(171);
      END_STATE();
    case 164:
      if (lookahead == '_') ADVANCE(172);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(174);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_phrygian);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 171:
      if (lookahead == 'c') ADVANCE(178);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(179);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_instrument);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_mixolydian);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_resolution);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_gate_normal);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_gate_staccato);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_melodic_minor);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_harmonic_minor);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 35, .external_lex_state = 1},
  [2] = {.lex_state = 35, .external_lex_state = 1},
  [3] = {.lex_state = 35, .external_lex_state = 1},
  [4] = {.lex_state = 4, .external_lex_state = 1},
  [5] = {.lex_state = 4, .external_lex_state = 1},
  [6] = {.lex_state = 3, .external_lex_state = 1},
  [7] = {.lex_state = 4, .external_lex_state = 1},
  [8] = {.lex_state = 4, .external_lex_state = 1},
  [9] = {.lex_state = 2, .external_lex_state = 1},
  [10] = {.lex_state = 2, .external_lex_state = 1},
  [11] = {.lex_state = 5, .external_lex_state = 1},
  [12] = {.lex_state = 2, .external_lex_state = 1},
  [13] = {.lex_state = 35, .external_lex_state = 1},
  [14] = {.lex_state = 3, .external_lex_state = 1},
  [15] = {.lex_state = 2, .external_lex_state = 1},
  [16] = {.lex_state = 35, .external_lex_state = 1},
  [17] = {.lex_state = 2, .external_lex_state = 1},
  [18] = {.lex_state = 3, .external_lex_state = 1},
  [19] = {.lex_state = 2, .external_lex_state = 1},
  [20] = {.lex_state = 4, .external_lex_state = 1},
  [21] = {.lex_state = 3, .external_lex_state = 1},
  [22] = {.lex_state = 3, .external_lex_state = 1},
  [23] = {.lex_state = 3, .external_lex_state = 1},
  [24] = {.lex_state = 35, .external_lex_state = 1},
  [25] = {.lex_state = 35, .external_lex_state = 1},
  [26] = {.lex_state = 4, .external_lex_state = 1},
  [27] = {.lex_state = 4, .external_lex_state = 1},
  [28] = {.lex_state = 35, .external_lex_state = 1},
  [29] = {.lex_state = 35, .external_lex_state = 1},
  [30] = {.lex_state = 35, .external_lex_state = 1},
  [31] = {.lex_state = 35, .external_lex_state = 1},
  [32] = {.lex_state = 4, .external_lex_state = 1},
  [33] = {.lex_state = 35, .external_lex_state = 1},
  [34] = {.lex_state = 35, .external_lex_state = 1},
  [35] = {.lex_state = 35, .external_lex_state = 1},
  [36] = {.lex_state = 4, .external_lex_state = 1},
  [37] = {.lex_state = 4, .external_lex_state = 1},
  [38] = {.lex_state = 35, .external_lex_state = 1},
  [39] = {.lex_state = 35, .external_lex_state = 1},
  [40] = {.lex_state = 35, .external_lex_state = 1},
  [41] = {.lex_state = 35, .external_lex_state = 1},
  [42] = {.lex_state = 35, .external_lex_state = 1},
  [43] = {.lex_state = 35, .external_lex_state = 1},
  [44] = {.lex_state = 35, .external_lex_state = 1},
  [45] = {.lex_state = 35, .external_lex_state = 1},
  [46] = {.lex_state = 4, .external_lex_state = 1},
  [47] = {.lex_state = 35, .external_lex_state = 1},
  [48] = {.lex_state = 35, .external_lex_state = 1},
  [49] = {.lex_state = 35, .external_lex_state = 1},
  [50] = {.lex_state = 35, .external_lex_state = 1},
  [51] = {.lex_state = 35, .external_lex_state = 1},
  [52] = {.lex_state = 4, .external_lex_state = 1},
  [53] = {.lex_state = 35, .external_lex_state = 1},
  [54] = {.lex_state = 4, .external_lex_state = 1},
  [55] = {.lex_state = 4, .external_lex_state = 1},
  [56] = {.lex_state = 4, .external_lex_state = 1},
  [57] = {.lex_state = 35, .external_lex_state = 1},
  [58] = {.lex_state = 4, .external_lex_state = 1},
  [59] = {.lex_state = 4, .external_lex_state = 1},
  [60] = {.lex_state = 4, .external_lex_state = 1},
  [61] = {.lex_state = 4, .external_lex_state = 1},
  [62] = {.lex_state = 4, .external_lex_state = 1},
  [63] = {.lex_state = 35, .external_lex_state = 1},
  [64] = {.lex_state = 4, .external_lex_state = 1},
  [65] = {.lex_state = 35, .external_lex_state = 1},
  [66] = {.lex_state = 4, .external_lex_state = 1},
  [67] = {.lex_state = 3, .external_lex_state = 1},
  [68] = {.lex_state = 4, .external_lex_state = 1},
  [69] = {.lex_state = 4, .external_lex_state = 1},
  [70] = {.lex_state = 4, .external_lex_state = 1},
  [71] = {.lex_state = 4, .external_lex_state = 1},
  [72] = {.lex_state = 35, .external_lex_state = 1},
  [73] = {.lex_state = 35, .external_lex_state = 1},
  [74] = {.lex_state = 35, .external_lex_state = 1},
  [75] = {.lex_state = 3, .external_lex_state = 1},
  [76] = {.lex_state = 2, .external_lex_state = 1},
  [77] = {.lex_state = 35, .external_lex_state = 1},
  [78] = {.lex_state = 3, .external_lex_state = 1},
  [79] = {.lex_state = 3, .external_lex_state = 1},
  [80] = {.lex_state = 35, .external_lex_state = 1},
  [81] = {.lex_state = 35, .external_lex_state = 1},
  [82] = {.lex_state = 35, .external_lex_state = 1},
  [83] = {.lex_state = 35, .external_lex_state = 1},
  [84] = {.lex_state = 35, .external_lex_state = 1},
  [85] = {.lex_state = 35, .external_lex_state = 1},
  [86] = {.lex_state = 35, .external_lex_state = 1},
  [87] = {.lex_state = 35, .external_lex_state = 1},
  [88] = {.lex_state = 4, .external_lex_state = 1},
  [89] = {.lex_state = 35, .external_lex_state = 1},
  [90] = {.lex_state = 4, .external_lex_state = 1},
  [91] = {.lex_state = 35, .external_lex_state = 1},
  [92] = {.lex_state = 2, .external_lex_state = 1},
  [93] = {.lex_state = 35, .external_lex_state = 1},
  [94] = {.lex_state = 35, .external_lex_state = 1},
  [95] = {.lex_state = 2, .external_lex_state = 1},
  [96] = {.lex_state = 2, .external_lex_state = 1},
  [97] = {.lex_state = 35, .external_lex_state = 1},
  [98] = {.lex_state = 35, .external_lex_state = 1},
  [99] = {.lex_state = 2, .external_lex_state = 1},
  [100] = {.lex_state = 35, .external_lex_state = 1},
  [101] = {.lex_state = 2, .external_lex_state = 1},
  [102] = {.lex_state = 2, .external_lex_state = 1},
  [103] = {.lex_state = 2, .external_lex_state = 1},
  [104] = {.lex_state = 2, .external_lex_state = 1},
  [105] = {.lex_state = 2, .external_lex_state = 1},
  [106] = {.lex_state = 35, .external_lex_state = 1},
  [107] = {.lex_state = 35, .external_lex_state = 1},
  [108] = {.lex_state = 2, .external_lex_state = 1},
  [109] = {.lex_state = 2, .external_lex_state = 1},
  [110] = {.lex_state = 2, .external_lex_state = 1},
  [111] = {.lex_state = 35, .external_lex_state = 1},
  [112] = {.lex_state = 35, .external_lex_state = 1},
  [113] = {.lex_state = 2, .external_lex_state = 1},
  [114] = {.lex_state = 2, .external_lex_state = 1},
  [115] = {.lex_state = 35, .external_lex_state = 1},
  [116] = {.lex_state = 35, .external_lex_state = 1},
  [117] = {.lex_state = 35, .external_lex_state = 1},
  [118] = {.lex_state = 10, .external_lex_state = 1},
  [119] = {.lex_state = 35, .external_lex_state = 1},
  [120] = {.lex_state = 9, .external_lex_state = 1},
  [121] = {.lex_state = 9, .external_lex_state = 1},
  [122] = {.lex_state = 35, .external_lex_state = 1},
  [123] = {.lex_state = 35, .external_lex_state = 1},
  [124] = {.lex_state = 35, .external_lex_state = 1},
  [125] = {.lex_state = 35, .external_lex_state = 1},
  [126] = {.lex_state = 35, .external_lex_state = 1},
  [127] = {.lex_state = 35, .external_lex_state = 1},
  [128] = {.lex_state = 35, .external_lex_state = 1},
  [129] = {.lex_state = 9, .external_lex_state = 1},
  [130] = {.lex_state = 0, .external_lex_state = 1},
  [131] = {.lex_state = 0, .external_lex_state = 1},
  [132] = {.lex_state = 35, .external_lex_state = 1},
  [133] = {.lex_state = 35, .external_lex_state = 1},
  [134] = {.lex_state = 35, .external_lex_state = 1},
  [135] = {.lex_state = 9, .external_lex_state = 1},
  [136] = {.lex_state = 35, .external_lex_state = 1},
  [137] = {.lex_state = 9, .external_lex_state = 1},
  [138] = {.lex_state = 35, .external_lex_state = 1},
  [139] = {.lex_state = 35, .external_lex_state = 1},
  [140] = {.lex_state = 9, .external_lex_state = 1},
  [141] = {.lex_state = 0, .external_lex_state = 1},
  [142] = {.lex_state = 35, .external_lex_state = 1},
  [143] = {.lex_state = 35, .external_lex_state = 1},
  [144] = {.lex_state = 9, .external_lex_state = 1},
  [145] = {.lex_state = 35, .external_lex_state = 1},
  [146] = {.lex_state = 35, .external_lex_state = 1},
  [147] = {.lex_state = 35, .external_lex_state = 1},
  [148] = {.lex_state = 35, .external_lex_state = 1},
  [149] = {.lex_state = 35, .external_lex_state = 1},
  [150] = {.lex_state = 9, .external_lex_state = 1},
  [151] = {.lex_state = 35, .external_lex_state = 1},
  [152] = {.lex_state = 35, .external_lex_state = 1},
  [153] = {.lex_state = 35, .external_lex_state = 1},
  [154] = {.lex_state = 35, .external_lex_state = 1},
  [155] = {.lex_state = 35, .external_lex_state = 1},
  [156] = {.lex_state = 35, .external_lex_state = 1},
  [157] = {.lex_state = 35, .external_lex_state = 1},
  [158] = {.lex_state = 0, .external_lex_state = 1},
  [159] = {.lex_state = 4, .external_lex_state = 1},
  [160] = {.lex_state = 35, .external_lex_state = 1},
  [161] = {.lex_state = 35, .external_lex_state = 1},
  [162] = {.lex_state = 35, .external_lex_state = 1},
  [163] = {.lex_state = 0, .external_lex_state = 1},
  [164] = {.lex_state = 0, .external_lex_state = 1},
  [165] = {.lex_state = 4, .external_lex_state = 1},
  [166] = {.lex_state = 0, .external_lex_state = 1},
  [167] = {.lex_state = 35, .external_lex_state = 1},
  [168] = {.lex_state = 4, .external_lex_state = 1},
  [169] = {.lex_state = 0, .external_lex_state = 1},
  [170] = {.lex_state = 35, .external_lex_state = 1},
  [171] = {.lex_state = 35, .external_lex_state = 1},
  [172] = {.lex_state = 0, .external_lex_state = 1},
  [173] = {.lex_state = 0, .external_lex_state = 1},
  [174] = {.lex_state = 4, .external_lex_state = 1},
  [175] = {.lex_state = 0, .external_lex_state = 1},
  [176] = {.lex_state = 4, .external_lex_state = 1},
  [177] = {.lex_state = 0, .external_lex_state = 1},
  [178] = {.lex_state = 9, .external_lex_state = 1},
  [179] = {.lex_state = 3, .external_lex_state = 1},
  [180] = {.lex_state = 4, .external_lex_state = 1},
  [181] = {.lex_state = 4, .external_lex_state = 1},
  [182] = {.lex_state = 0, .external_lex_state = 1},
  [183] = {.lex_state = 0, .external_lex_state = 1},
  [184] = {.lex_state = 35, .external_lex_state = 1},
  [185] = {.lex_state = 11, .external_lex_state = 1},
  [186] = {.lex_state = 4, .external_lex_state = 1},
  [187] = {.lex_state = 35, .external_lex_state = 1},
  [188] = {.lex_state = 1, .external_lex_state = 1},
  [189] = {.lex_state = 4, .external_lex_state = 1},
  [190] = {.lex_state = 4, .external_lex_state = 1},
  [191] = {.lex_state = 2, .external_lex_state = 1},
  [192] = {.lex_state = 0, .external_lex_state = 1},
  [193] = {.lex_state = 0, .external_lex_state = 1},
  [194] = {.lex_state = 0, .external_lex_state = 1},
  [195] = {.lex_state = 0, .external_lex_state = 1},
  [196] = {.lex_state = 0, .external_lex_state = 1},
  [197] = {.lex_state = 0, .external_lex_state = 1},
  [198] = {.lex_state = 0, .external_lex_state = 1},
  [199] = {.lex_state = 4, .external_lex_state = 1},
  [200] = {.lex_state = 0, .external_lex_state = 1},
  [201] = {.lex_state = 4, .external_lex_state = 1},
  [202] = {.lex_state = 13, .external_lex_state = 1},
  [203] = {.lex_state = 2, .external_lex_state = 1},
  [204] = {.lex_state = 35, .external_lex_state = 1},
  [205] = {.lex_state = 4, .external_lex_state = 1},
  [206] = {.lex_state = 4, .external_lex_state = 1},
  [207] = {.lex_state = 4, .external_lex_state = 1},
  [208] = {.lex_state = 35, .external_lex_state = 1},
  [209] = {.lex_state = 35, .external_lex_state = 1},
  [210] = {.lex_state = 2, .external_lex_state = 1},
  [211] = {.lex_state = 9, .external_lex_state = 1},
  [212] = {.lex_state = 11, .external_lex_state = 1},
  [213] = {.lex_state = 4, .external_lex_state = 1},
  [214] = {.lex_state = 35, .external_lex_state = 1},
  [215] = {.lex_state = 35, .external_lex_state = 1},
  [216] = {.lex_state = 4, .external_lex_state = 1},
  [217] = {.lex_state = 0, .external_lex_state = 1},
  [218] = {.lex_state = 35, .external_lex_state = 1},
  [219] = {.lex_state = 0, .external_lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_device] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_port] = ACTIONS(1),
    [anon_sym_instrument] = ACTIONS(1),
    [anon_sym_channel] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_gate_normal] = ACTIONS(1),
    [anon_sym_gate_staccato] = ACTIONS(1),
    [anon_sym_kit] = ACTIONS(1),
    [anon_sym_clip] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_bars] = ACTIONS(1),
    [anon_sym_time] = ACTIONS(1),
    [anon_sym_scale] = ACTIONS(1),
    [anon_sym_major] = ACTIONS(1),
    [anon_sym_minor] = ACTIONS(1),
    [anon_sym_harmonic_minor] = ACTIONS(1),
    [anon_sym_melodic_minor] = ACTIONS(1),
    [anon_sym_dorian] = ACTIONS(1),
    [anon_sym_phrygian] = ACTIONS(1),
    [anon_sym_lydian] = ACTIONS(1),
    [anon_sym_mixolydian] = ACTIONS(1),
    [anon_sym_locrian] = ACTIONS(1),
    [sym_dash_divider] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_resolution] = ACTIONS(1),
    [sym_step_pattern] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_r] = ACTIONS(1),
    [sym_octave] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_4_DOT] = ACTIONS(1),
    [anon_sym_8] = ACTIONS(1),
    [anon_sym_8_DOT] = ACTIONS(1),
    [anon_sym_16] = ACTIONS(1),
    [anon_sym_32] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_g] = ACTIONS(1),
    [sym_chord_symbol] = ACTIONS(1),
    [anon_sym_arp] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_up] = ACTIONS(1),
    [anon_sym_down] = ACTIONS(1),
    [anon_sym_updown] = ACTIONS(1),
    [anon_sym_random] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_scene] = ACTIONS(1),
    [sym_probability] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_tempo] = ACTIONS(1),
    [sym_tempo_delta] = ACTIONS(1),
    [anon_sym_session] = ACTIONS(1),
    [anon_sym_repeat] = ACTIONS(1),
    [anon_sym_loop] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_play] = ACTIONS(1),
    [anon_sym_stop] = ACTIONS(1),
    [sym_note_name] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(197),
    [sym__top_level] = STATE(2),
    [sym_device_def] = STATE(2),
    [sym_instrument_def] = STATE(2),
    [sym_kit_def] = STATE(2),
    [sym_clip_def] = STATE(2),
    [sym_scene_def] = STATE(2),
    [sym_session_def] = STATE(2),
    [sym_include_stmt] = STATE(2),
    [sym_tempo_stmt] = STATE(2),
    [sym_scale_stmt] = STATE(2),
    [sym_play_stmt] = STATE(2),
    [sym_stop_stmt] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_device] = ACTIONS(7),
    [anon_sym_instrument] = ACTIONS(9),
    [anon_sym_kit] = ACTIONS(11),
    [anon_sym_clip] = ACTIONS(13),
    [anon_sym_scale] = ACTIONS(15),
    [anon_sym_scene] = ACTIONS(17),
    [anon_sym_tempo] = ACTIONS(19),
    [anon_sym_session] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(23),
    [anon_sym_play] = ACTIONS(25),
    [anon_sym_stop] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(7), 1,
      anon_sym_device,
    ACTIONS(9), 1,
      anon_sym_instrument,
    ACTIONS(11), 1,
      anon_sym_kit,
    ACTIONS(13), 1,
      anon_sym_clip,
    ACTIONS(15), 1,
      anon_sym_scale,
    ACTIONS(17), 1,
      anon_sym_scene,
    ACTIONS(19), 1,
      anon_sym_tempo,
    ACTIONS(21), 1,
      anon_sym_session,
    ACTIONS(23), 1,
      anon_sym_include,
    ACTIONS(25), 1,
      anon_sym_play,
    ACTIONS(27), 1,
      anon_sym_stop,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(3), 13,
      sym__top_level,
      sym_device_def,
      sym_instrument_def,
      sym_kit_def,
      sym_clip_def,
      sym_scene_def,
      sym_session_def,
      sym_include_stmt,
      sym_tempo_stmt,
      sym_scale_stmt,
      sym_play_stmt,
      sym_stop_stmt,
      aux_sym_source_file_repeat1,
  [56] = 14,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_device,
    ACTIONS(36), 1,
      anon_sym_instrument,
    ACTIONS(39), 1,
      anon_sym_kit,
    ACTIONS(42), 1,
      anon_sym_clip,
    ACTIONS(45), 1,
      anon_sym_scale,
    ACTIONS(48), 1,
      anon_sym_scene,
    ACTIONS(51), 1,
      anon_sym_tempo,
    ACTIONS(54), 1,
      anon_sym_session,
    ACTIONS(57), 1,
      anon_sym_include,
    ACTIONS(60), 1,
      anon_sym_play,
    ACTIONS(63), 1,
      anon_sym_stop,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(3), 13,
      sym__top_level,
      sym_device_def,
      sym_instrument_def,
      sym_kit_def,
      sym_clip_def,
      sym_scene_def,
      sym_session_def,
      sym_include_stmt,
      sym_tempo_stmt,
      sym_scale_stmt,
      sym_play_stmt,
      sym_stop_stmt,
      aux_sym_source_file_repeat1,
  [112] = 10,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(72), 1,
      anon_sym_GT,
    ACTIONS(74), 1,
      anon_sym_r,
    ACTIONS(76), 1,
      sym_chord_symbol,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(68), 2,
      anon_sym_RBRACE,
      sym_dash_divider,
    ACTIONS(66), 3,
      anon_sym_use,
      anon_sym_resolution,
      sym_identifier,
    STATE(5), 8,
      sym__melody_element,
      sym_bar_jump,
      sym_pitched_note,
      sym_rest,
      sym_chord,
      sym_chord_name,
      sym_melody_group,
      aux_sym_melody_line_repeat1,
  [154] = 10,
    ACTIONS(86), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_GT,
    ACTIONS(92), 1,
      anon_sym_r,
    ACTIONS(95), 1,
      sym_chord_symbol,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(84), 2,
      anon_sym_RBRACE,
      sym_dash_divider,
    ACTIONS(82), 3,
      anon_sym_use,
      anon_sym_resolution,
      sym_identifier,
    STATE(5), 8,
      sym__melody_element,
      sym_bar_jump,
      sym_pitched_note,
      sym_rest,
      sym_chord,
      sym_chord_name,
      sym_melody_group,
      aux_sym_melody_line_repeat1,
  [196] = 9,
    ACTIONS(108), 1,
      anon_sym_COLON,
    ACTIONS(110), 1,
      anon_sym_COLON_COLON,
    ACTIONS(112), 1,
      anon_sym_SQUOTE,
    ACTIONS(114), 1,
      anon_sym_g,
    STATE(18), 1,
      sym__oct_dur_suffix,
    STATE(64), 1,
      sym_articulation,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(104), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(106), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [234] = 8,
    ACTIONS(120), 1,
      anon_sym_COLON,
    ACTIONS(122), 1,
      anon_sym_COLON_COLON,
    ACTIONS(124), 1,
      anon_sym_arp,
    STATE(26), 1,
      sym__oct_dur_suffix,
    STATE(68), 1,
      sym_arp_expr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(116), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(118), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [269] = 8,
    ACTIONS(120), 1,
      anon_sym_COLON,
    ACTIONS(122), 1,
      anon_sym_COLON_COLON,
    ACTIONS(124), 1,
      anon_sym_arp,
    STATE(27), 1,
      sym__oct_dur_suffix,
    STATE(58), 1,
      sym_arp_expr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(126), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(128), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [304] = 9,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      anon_sym_GT,
    ACTIONS(136), 1,
      anon_sym_r,
    ACTIONS(139), 1,
      sym_chord_symbol,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(9), 8,
      sym__melody_element,
      sym_bar_jump,
      sym_pitched_note,
      sym_rest,
      sym_chord,
      sym_chord_name,
      sym_melody_group,
      aux_sym_melody_line_repeat1,
  [340] = 9,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      anon_sym_GT,
    ACTIONS(152), 1,
      anon_sym_r,
    ACTIONS(154), 1,
      sym_chord_symbol,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    ACTIONS(160), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(9), 8,
      sym__melody_element,
      sym_bar_jump,
      sym_pitched_note,
      sym_rest,
      sym_chord,
      sym_chord_name,
      sym_melody_group,
      aux_sym_melody_line_repeat1,
  [376] = 9,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(72), 1,
      anon_sym_GT,
    ACTIONS(76), 1,
      sym_chord_symbol,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      sym_note_name,
    ACTIONS(162), 1,
      sym_step_pattern,
    ACTIONS(164), 1,
      anon_sym_r,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(4), 8,
      sym__melody_element,
      sym_bar_jump,
      sym_pitched_note,
      sym_rest,
      sym_chord,
      sym_chord_name,
      sym_melody_group,
      aux_sym_melody_line_repeat1,
  [412] = 9,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      anon_sym_GT,
    ACTIONS(152), 1,
      anon_sym_r,
    ACTIONS(154), 1,
      sym_chord_symbol,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      sym_note_name,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(9), 8,
      sym__melody_element,
      sym_bar_jump,
      sym_pitched_note,
      sym_rest,
      sym_chord,
      sym_chord_name,
      sym_melody_group,
      aux_sym_melody_line_repeat1,
  [448] = 4,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      sym_session_modifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(168), 12,
      ts_builtin_sym_end,
      anon_sym_device,
      anon_sym_instrument,
      anon_sym_kit,
      anon_sym_clip,
      anon_sym_scale,
      anon_sym_scene,
      anon_sym_tempo,
      anon_sym_session,
      anon_sym_include,
      anon_sym_play,
      anon_sym_stop,
  [473] = 4,
    ACTIONS(176), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(172), 6,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      anon_sym_g,
      sym_note_name,
      sym_identifier,
    ACTIONS(174), 7,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      anon_sym_SQUOTE,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [498] = 8,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      anon_sym_GT,
    ACTIONS(152), 1,
      anon_sym_r,
    ACTIONS(154), 1,
      sym_chord_symbol,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(10), 8,
      sym__melody_element,
      sym_bar_jump,
      sym_pitched_note,
      sym_rest,
      sym_chord,
      sym_chord_name,
      sym_melody_group,
      aux_sym_melody_line_repeat1,
  [531] = 4,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym_session_modifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(178), 12,
      ts_builtin_sym_end,
      anon_sym_device,
      anon_sym_instrument,
      anon_sym_kit,
      anon_sym_clip,
      anon_sym_scale,
      anon_sym_scene,
      anon_sym_tempo,
      anon_sym_session,
      anon_sym_include,
      anon_sym_play,
      anon_sym_stop,
  [556] = 8,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      anon_sym_GT,
    ACTIONS(152), 1,
      anon_sym_r,
    ACTIONS(154), 1,
      sym_chord_symbol,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(12), 8,
      sym__melody_element,
      sym_bar_jump,
      sym_pitched_note,
      sym_rest,
      sym_chord,
      sym_chord_name,
      sym_melody_group,
      aux_sym_melody_line_repeat1,
  [589] = 6,
    ACTIONS(112), 1,
      anon_sym_SQUOTE,
    ACTIONS(114), 1,
      anon_sym_g,
    STATE(59), 1,
      sym_articulation,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(180), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(182), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [618] = 9,
    ACTIONS(104), 1,
      sym_note_name,
    ACTIONS(184), 1,
      anon_sym_COLON,
    ACTIONS(186), 1,
      anon_sym_COLON_COLON,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    ACTIONS(190), 1,
      anon_sym_g,
    STATE(76), 1,
      sym__oct_dur_suffix,
    STATE(110), 1,
      sym_articulation,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(106), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [652] = 4,
    ACTIONS(192), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(172), 6,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      anon_sym_arp,
      sym_note_name,
      sym_identifier,
    ACTIONS(174), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [676] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(194), 6,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      anon_sym_g,
      sym_note_name,
      sym_identifier,
    ACTIONS(196), 7,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      anon_sym_SQUOTE,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [698] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(172), 6,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      anon_sym_g,
      sym_note_name,
      sym_identifier,
    ACTIONS(174), 7,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      anon_sym_SQUOTE,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [720] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(198), 6,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      anon_sym_g,
      sym_note_name,
      sym_identifier,
    ACTIONS(200), 7,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      anon_sym_SQUOTE,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [742] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(202), 13,
      ts_builtin_sym_end,
      anon_sym_device,
      anon_sym_instrument,
      anon_sym_kit,
      anon_sym_clip,
      anon_sym_RBRACK,
      anon_sym_scale,
      anon_sym_scene,
      anon_sym_tempo,
      anon_sym_session,
      anon_sym_include,
      anon_sym_play,
      anon_sym_stop,
  [762] = 4,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(208), 11,
      anon_sym_device,
      anon_sym_instrument,
      anon_sym_kit,
      anon_sym_clip,
      anon_sym_scale,
      anon_sym_scene,
      anon_sym_tempo,
      anon_sym_session,
      anon_sym_include,
      anon_sym_play,
      anon_sym_stop,
  [786] = 5,
    ACTIONS(124), 1,
      anon_sym_arp,
    STATE(61), 1,
      sym_arp_expr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(210), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(212), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [812] = 5,
    ACTIONS(124), 1,
      anon_sym_arp,
    STATE(70), 1,
      sym_arp_expr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(214), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(216), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [838] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(218), 12,
      ts_builtin_sym_end,
      anon_sym_device,
      anon_sym_instrument,
      anon_sym_kit,
      anon_sym_clip,
      anon_sym_scale,
      anon_sym_scene,
      anon_sym_tempo,
      anon_sym_session,
      anon_sym_include,
      anon_sym_play,
      anon_sym_stop,
  [857] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(220), 12,
      ts_builtin_sym_end,
      anon_sym_device,
      anon_sym_instrument,
      anon_sym_kit,
      anon_sym_clip,
      anon_sym_scale,
      anon_sym_scene,
      anon_sym_tempo,
      anon_sym_session,
      anon_sym_include,
      anon_sym_play,
      anon_sym_stop,
  [876] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(222), 12,
      ts_builtin_sym_end,
      anon_sym_device,
      anon_sym_instrument,
      anon_sym_kit,
      anon_sym_clip,
      anon_sym_scale,
      anon_sym_scene,
      anon_sym_tempo,
      anon_sym_session,
      anon_sym_include,
      anon_sym_play,
      anon_sym_stop,
  [895] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(224), 12,
      ts_builtin_sym_end,
      anon_sym_device,
      anon_sym_instrument,
      anon_sym_kit,
      anon_sym_clip,
      anon_sym_scale,
      anon_sym_scene,
      anon_sym_tempo,
      anon_sym_session,
      anon_sym_include,
      anon_sym_play,
      anon_sym_stop,
  [914] = 8,
    ACTIONS(116), 1,
      sym_note_name,
    ACTIONS(184), 1,
      anon_sym_COLON,
    ACTIONS(186), 1,
      anon_sym_COLON_COLON,
    ACTIONS(226), 1,
      anon_sym_arp,
    STATE(88), 1,
      sym__oct_dur_suffix,
    STATE(113), 1,
      sym_arp_expr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(118), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [945] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(228), 12,
      ts_builtin_sym_end,
      anon_sym_device,
      anon_sym_instrument,
      anon_sym_kit,
      anon_sym_clip,
      anon_sym_scale,
      anon_sym_scene,
      anon_sym_tempo,
      anon_sym_session,
      anon_sym_include,
      anon_sym_play,
      anon_sym_stop,
  [964] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(230), 12,
      ts_builtin_sym_end,
      anon_sym_device,
      anon_sym_instrument,
      anon_sym_kit,
      anon_sym_clip,
      anon_sym_scale,
      anon_sym_scene,
      anon_sym_tempo,
      anon_sym_session,
      anon_sym_include,
      anon_sym_play,
      anon_sym_stop,
  [983] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(232), 12,
      ts_builtin_sym_end,
      anon_sym_device,
      anon_sym_instrument,
      anon_sym_kit,
      anon_sym_clip,
      anon_sym_scale,
      anon_sym_scene,
      anon_sym_tempo,
      anon_sym_session,
      anon_sym_include,
      anon_sym_play,
      anon_sym_stop,
  [1002] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(194), 6,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      anon_sym_arp,
      sym_note_name,
      sym_identifier,
    ACTIONS(196), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1023] = 4,
    ACTIONS(238), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(234), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(236), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1046] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(240), 12,
      ts_builtin_sym_end,
      anon_sym_device,
      anon_sym_instrument,
      anon_sym_kit,
      anon_sym_clip,
      anon_sym_scale,
      anon_sym_scene,
      anon_sym_tempo,
      anon_sym_session,
      anon_sym_include,
      anon_sym_play,
      anon_sym_stop,
  [1065] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(242), 12,
      ts_builtin_sym_end,
      anon_sym_device,
      anon_sym_instrument,
      anon_sym_kit,
      anon_sym_clip,
      anon_sym_scale,
      anon_sym_scene,
      anon_sym_tempo,
      anon_sym_session,
      anon_sym_include,
      anon_sym_play,
      anon_sym_stop,
  [1084] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(244), 12,
      ts_builtin_sym_end,
      anon_sym_device,
      anon_sym_instrument,
      anon_sym_kit,
      anon_sym_clip,
      anon_sym_scale,
      anon_sym_scene,
      anon_sym_tempo,
      anon_sym_session,
      anon_sym_include,
      anon_sym_play,
      anon_sym_stop,
  [1103] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(178), 12,
      ts_builtin_sym_end,
      anon_sym_device,
      anon_sym_instrument,
      anon_sym_kit,
      anon_sym_clip,
      anon_sym_scale,
      anon_sym_scene,
      anon_sym_tempo,
      anon_sym_session,
      anon_sym_include,
      anon_sym_play,
      anon_sym_stop,
  [1122] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(246), 12,
      ts_builtin_sym_end,
      anon_sym_device,
      anon_sym_instrument,
      anon_sym_kit,
      anon_sym_clip,
      anon_sym_scale,
      anon_sym_scene,
      anon_sym_tempo,
      anon_sym_session,
      anon_sym_include,
      anon_sym_play,
      anon_sym_stop,
  [1141] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(248), 12,
      ts_builtin_sym_end,
      anon_sym_device,
      anon_sym_instrument,
      anon_sym_kit,
      anon_sym_clip,
      anon_sym_scale,
      anon_sym_scene,
      anon_sym_tempo,
      anon_sym_session,
      anon_sym_include,
      anon_sym_play,
      anon_sym_stop,
  [1160] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(250), 12,
      ts_builtin_sym_end,
      anon_sym_device,
      anon_sym_instrument,
      anon_sym_kit,
      anon_sym_clip,
      anon_sym_scale,
      anon_sym_scene,
      anon_sym_tempo,
      anon_sym_session,
      anon_sym_include,
      anon_sym_play,
      anon_sym_stop,
  [1179] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(252), 12,
      ts_builtin_sym_end,
      anon_sym_device,
      anon_sym_instrument,
      anon_sym_kit,
      anon_sym_clip,
      anon_sym_scale,
      anon_sym_scene,
      anon_sym_tempo,
      anon_sym_session,
      anon_sym_include,
      anon_sym_play,
      anon_sym_stop,
  [1198] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(172), 6,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      anon_sym_arp,
      sym_note_name,
      sym_identifier,
    ACTIONS(174), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1219] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(254), 12,
      ts_builtin_sym_end,
      anon_sym_device,
      anon_sym_instrument,
      anon_sym_kit,
      anon_sym_clip,
      anon_sym_scale,
      anon_sym_scene,
      anon_sym_tempo,
      anon_sym_session,
      anon_sym_include,
      anon_sym_play,
      anon_sym_stop,
  [1238] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(256), 12,
      ts_builtin_sym_end,
      anon_sym_device,
      anon_sym_instrument,
      anon_sym_kit,
      anon_sym_clip,
      anon_sym_scale,
      anon_sym_scene,
      anon_sym_tempo,
      anon_sym_session,
      anon_sym_include,
      anon_sym_play,
      anon_sym_stop,
  [1257] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(258), 12,
      ts_builtin_sym_end,
      anon_sym_device,
      anon_sym_instrument,
      anon_sym_kit,
      anon_sym_clip,
      anon_sym_scale,
      anon_sym_scene,
      anon_sym_tempo,
      anon_sym_session,
      anon_sym_include,
      anon_sym_play,
      anon_sym_stop,
  [1276] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(260), 12,
      ts_builtin_sym_end,
      anon_sym_device,
      anon_sym_instrument,
      anon_sym_kit,
      anon_sym_clip,
      anon_sym_scale,
      anon_sym_scene,
      anon_sym_tempo,
      anon_sym_session,
      anon_sym_include,
      anon_sym_play,
      anon_sym_stop,
  [1295] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(262), 12,
      ts_builtin_sym_end,
      anon_sym_device,
      anon_sym_instrument,
      anon_sym_kit,
      anon_sym_clip,
      anon_sym_scale,
      anon_sym_scene,
      anon_sym_tempo,
      anon_sym_session,
      anon_sym_include,
      anon_sym_play,
      anon_sym_stop,
  [1314] = 4,
    ACTIONS(268), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(264), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(266), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1337] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(270), 12,
      ts_builtin_sym_end,
      anon_sym_device,
      anon_sym_instrument,
      anon_sym_kit,
      anon_sym_clip,
      anon_sym_scale,
      anon_sym_scene,
      anon_sym_tempo,
      anon_sym_session,
      anon_sym_include,
      anon_sym_play,
      anon_sym_stop,
  [1356] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(198), 6,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      anon_sym_arp,
      sym_note_name,
      sym_identifier,
    ACTIONS(200), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1377] = 8,
    ACTIONS(126), 1,
      sym_note_name,
    ACTIONS(184), 1,
      anon_sym_COLON,
    ACTIONS(186), 1,
      anon_sym_COLON_COLON,
    ACTIONS(226), 1,
      anon_sym_arp,
    STATE(90), 1,
      sym__oct_dur_suffix,
    STATE(104), 1,
      sym_arp_expr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(128), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1408] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(272), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(274), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1428] = 7,
    ACTIONS(276), 1,
      sym_identifier,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    ACTIONS(280), 1,
      sym_dash_divider,
    ACTIONS(282), 1,
      anon_sym_use,
    ACTIONS(284), 1,
      anon_sym_resolution,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(63), 6,
      sym__clip_content,
      sym_use_stmt,
      sym_resolution_stmt,
      sym_drum_line,
      sym_melody_line,
      aux_sym_clip_def_repeat2,
  [1456] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(214), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(216), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1476] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(286), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(288), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1496] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(290), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(292), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1516] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(294), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(296), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1536] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(298), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(300), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1556] = 7,
    ACTIONS(276), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_use,
    ACTIONS(284), 1,
      anon_sym_resolution,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
    ACTIONS(304), 1,
      sym_dash_divider,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(73), 6,
      sym__clip_content,
      sym_use_stmt,
      sym_resolution_stmt,
      sym_drum_line,
      sym_melody_line,
      aux_sym_clip_def_repeat2,
  [1584] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(180), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(182), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1604] = 7,
    ACTIONS(276), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_use,
    ACTIONS(284), 1,
      anon_sym_resolution,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
    ACTIONS(306), 1,
      sym_dash_divider,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(72), 6,
      sym__clip_content,
      sym_use_stmt,
      sym_resolution_stmt,
      sym_drum_line,
      sym_melody_line,
      aux_sym_clip_def_repeat2,
  [1632] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(308), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(310), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1652] = 4,
    ACTIONS(312), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(172), 3,
      anon_sym_g,
      anon_sym_arp,
      sym_note_name,
    ACTIONS(174), 7,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      anon_sym_SQUOTE,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1674] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(210), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(212), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1694] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(314), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(316), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1714] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(318), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(320), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1734] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(322), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(324), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1754] = 7,
    ACTIONS(276), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_use,
    ACTIONS(284), 1,
      anon_sym_resolution,
    ACTIONS(304), 1,
      sym_dash_divider,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(73), 6,
      sym__clip_content,
      sym_use_stmt,
      sym_resolution_stmt,
      sym_drum_line,
      sym_melody_line,
      aux_sym_clip_def_repeat2,
  [1782] = 7,
    ACTIONS(328), 1,
      sym_identifier,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
    ACTIONS(333), 1,
      sym_dash_divider,
    ACTIONS(336), 1,
      anon_sym_use,
    ACTIONS(339), 1,
      anon_sym_resolution,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(73), 6,
      sym__clip_content,
      sym_use_stmt,
      sym_resolution_stmt,
      sym_drum_line,
      sym_melody_line,
      aux_sym_clip_def_repeat2,
  [1810] = 3,
    STATE(166), 1,
      sym_scale_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(342), 9,
      anon_sym_major,
      anon_sym_minor,
      anon_sym_harmonic_minor,
      anon_sym_melodic_minor,
      anon_sym_dorian,
      anon_sym_phrygian,
      anon_sym_lydian,
      anon_sym_mixolydian,
      anon_sym_locrian,
  [1829] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(194), 3,
      anon_sym_g,
      anon_sym_arp,
      sym_note_name,
    ACTIONS(196), 7,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      anon_sym_SQUOTE,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1848] = 6,
    ACTIONS(180), 1,
      sym_note_name,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    ACTIONS(190), 1,
      anon_sym_g,
    STATE(99), 1,
      sym_articulation,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(182), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1873] = 3,
    STATE(35), 1,
      sym_scale_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(342), 9,
      anon_sym_major,
      anon_sym_minor,
      anon_sym_harmonic_minor,
      anon_sym_melodic_minor,
      anon_sym_dorian,
      anon_sym_phrygian,
      anon_sym_lydian,
      anon_sym_mixolydian,
      anon_sym_locrian,
  [1892] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(172), 3,
      anon_sym_g,
      anon_sym_arp,
      sym_note_name,
    ACTIONS(174), 7,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      anon_sym_SQUOTE,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1911] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(198), 3,
      anon_sym_g,
      anon_sym_arp,
      sym_note_name,
    ACTIONS(200), 7,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      anon_sym_SQUOTE,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1930] = 4,
    STATE(62), 1,
      sym_duration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(344), 3,
      anon_sym_1,
      anon_sym_4,
      anon_sym_8,
    ACTIONS(346), 5,
      anon_sym_2,
      anon_sym_4_DOT,
      anon_sym_8_DOT,
      anon_sym_16,
      anon_sym_32,
  [1950] = 4,
    STATE(96), 1,
      sym_duration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(348), 3,
      anon_sym_1,
      anon_sym_4,
      anon_sym_8,
    ACTIONS(350), 5,
      anon_sym_2,
      anon_sym_4_DOT,
      anon_sym_8_DOT,
      anon_sym_16,
      anon_sym_32,
  [1970] = 4,
    STATE(22), 1,
      sym_duration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(352), 3,
      anon_sym_1,
      anon_sym_4,
      anon_sym_8,
    ACTIONS(354), 5,
      anon_sym_2,
      anon_sym_4_DOT,
      anon_sym_8_DOT,
      anon_sym_16,
      anon_sym_32,
  [1990] = 4,
    STATE(150), 1,
      sym_duration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(356), 3,
      anon_sym_1,
      anon_sym_4,
      anon_sym_8,
    ACTIONS(358), 5,
      anon_sym_2,
      anon_sym_4_DOT,
      anon_sym_8_DOT,
      anon_sym_16,
      anon_sym_32,
  [2010] = 4,
    STATE(23), 1,
      sym_duration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(352), 3,
      anon_sym_1,
      anon_sym_4,
      anon_sym_8,
    ACTIONS(354), 5,
      anon_sym_2,
      anon_sym_4_DOT,
      anon_sym_8_DOT,
      anon_sym_16,
      anon_sym_32,
  [2030] = 4,
    STATE(79), 1,
      sym_duration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(348), 3,
      anon_sym_1,
      anon_sym_4,
      anon_sym_8,
    ACTIONS(350), 5,
      anon_sym_2,
      anon_sym_4_DOT,
      anon_sym_8_DOT,
      anon_sym_16,
      anon_sym_32,
  [2050] = 4,
    STATE(78), 1,
      sym_duration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(348), 3,
      anon_sym_1,
      anon_sym_4,
      anon_sym_8,
    ACTIONS(350), 5,
      anon_sym_2,
      anon_sym_4_DOT,
      anon_sym_8_DOT,
      anon_sym_16,
      anon_sym_32,
  [2070] = 4,
    STATE(46), 1,
      sym_duration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(344), 3,
      anon_sym_1,
      anon_sym_4,
      anon_sym_8,
    ACTIONS(346), 5,
      anon_sym_2,
      anon_sym_4_DOT,
      anon_sym_8_DOT,
      anon_sym_16,
      anon_sym_32,
  [2090] = 5,
    ACTIONS(210), 1,
      sym_note_name,
    ACTIONS(226), 1,
      anon_sym_arp,
    STATE(109), 1,
      sym_arp_expr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(212), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2112] = 4,
    STATE(54), 1,
      sym_duration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(344), 3,
      anon_sym_1,
      anon_sym_4,
      anon_sym_8,
    ACTIONS(346), 5,
      anon_sym_2,
      anon_sym_4_DOT,
      anon_sym_8_DOT,
      anon_sym_16,
      anon_sym_32,
  [2132] = 5,
    ACTIONS(214), 1,
      sym_note_name,
    ACTIONS(226), 1,
      anon_sym_arp,
    STATE(103), 1,
      sym_arp_expr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(216), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2154] = 6,
    ACTIONS(360), 1,
      anon_sym_device,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    ACTIONS(368), 1,
      anon_sym_note,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(91), 2,
      sym_instrument_property,
      aux_sym_instrument_def_repeat1,
    ACTIONS(365), 3,
      anon_sym_channel,
      anon_sym_gate_normal,
      anon_sym_gate_staccato,
  [2177] = 4,
    ACTIONS(264), 1,
      sym_note_name,
    ACTIONS(371), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(266), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2196] = 6,
    ACTIONS(373), 1,
      anon_sym_device,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
    ACTIONS(379), 1,
      anon_sym_note,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(94), 2,
      sym_instrument_property,
      aux_sym_instrument_def_repeat1,
    ACTIONS(377), 3,
      anon_sym_channel,
      anon_sym_gate_normal,
      anon_sym_gate_staccato,
  [2219] = 6,
    ACTIONS(373), 1,
      anon_sym_device,
    ACTIONS(379), 1,
      anon_sym_note,
    ACTIONS(381), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(91), 2,
      sym_instrument_property,
      aux_sym_instrument_def_repeat1,
    ACTIONS(377), 3,
      anon_sym_channel,
      anon_sym_gate_normal,
      anon_sym_gate_staccato,
  [2242] = 4,
    ACTIONS(234), 1,
      sym_note_name,
    ACTIONS(383), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(236), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2261] = 3,
    ACTIONS(298), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(300), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2277] = 5,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
    ACTIONS(389), 1,
      anon_sym_tempo,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(106), 4,
      sym__scene_content,
      sym_scene_slot,
      sym_scene_tempo,
      aux_sym_scene_def_repeat1,
  [2297] = 5,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(389), 1,
      anon_sym_tempo,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(97), 4,
      sym__scene_content,
      sym_scene_slot,
      sym_scene_tempo,
      aux_sym_scene_def_repeat1,
  [2317] = 3,
    ACTIONS(286), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(288), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2333] = 5,
    ACTIONS(393), 1,
      anon_sym_bars,
    ACTIONS(395), 1,
      anon_sym_time,
    ACTIONS(397), 1,
      anon_sym_scale,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(177), 4,
      sym__clip_attr,
      sym_bars_attr,
      sym_time_attr,
      sym_scale_attr,
  [2353] = 3,
    ACTIONS(314), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(316), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2369] = 3,
    ACTIONS(290), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(292), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2385] = 3,
    ACTIONS(318), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(320), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2401] = 3,
    ACTIONS(214), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(216), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2417] = 3,
    ACTIONS(308), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(310), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2433] = 5,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(402), 1,
      anon_sym_RBRACE,
    ACTIONS(404), 1,
      anon_sym_tempo,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(106), 4,
      sym__scene_content,
      sym_scene_slot,
      sym_scene_tempo,
      aux_sym_scene_def_repeat1,
  [2453] = 5,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    ACTIONS(411), 1,
      anon_sym_note,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(112), 2,
      sym_kit_instrument_property,
      aux_sym_kit_instrument_repeat1,
    ACTIONS(409), 3,
      anon_sym_channel,
      anon_sym_gate_normal,
      anon_sym_gate_staccato,
  [2473] = 3,
    ACTIONS(322), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(324), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2489] = 3,
    ACTIONS(294), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(296), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2505] = 3,
    ACTIONS(180), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(182), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2521] = 5,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    ACTIONS(418), 1,
      anon_sym_note,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(111), 2,
      sym_kit_instrument_property,
      aux_sym_kit_instrument_repeat1,
    ACTIONS(415), 3,
      anon_sym_channel,
      anon_sym_gate_normal,
      anon_sym_gate_staccato,
  [2541] = 5,
    ACTIONS(411), 1,
      anon_sym_note,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(111), 2,
      sym_kit_instrument_property,
      aux_sym_kit_instrument_repeat1,
    ACTIONS(409), 3,
      anon_sym_channel,
      anon_sym_gate_normal,
      anon_sym_gate_staccato,
  [2561] = 3,
    ACTIONS(210), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(212), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2577] = 3,
    ACTIONS(272), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(274), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2593] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(423), 6,
      anon_sym_device,
      anon_sym_RBRACE,
      anon_sym_channel,
      anon_sym_note,
      anon_sym_gate_normal,
      anon_sym_gate_staccato,
  [2606] = 5,
    ACTIONS(425), 1,
      sym_identifier,
    ACTIONS(427), 1,
      anon_sym_device,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(119), 3,
      sym__kit_member,
      sym_kit_instrument,
      aux_sym_kit_def_repeat1,
  [2625] = 5,
    ACTIONS(425), 1,
      sym_identifier,
    ACTIONS(427), 1,
      anon_sym_device,
    ACTIONS(431), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(116), 3,
      sym__kit_member,
      sym_kit_instrument,
      aux_sym_kit_def_repeat1,
  [2644] = 6,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
    ACTIONS(437), 1,
      sym_probability,
    ACTIONS(439), 1,
      anon_sym_PIPE,
    STATE(147), 1,
      sym_shuffle_expr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(433), 2,
      anon_sym_tempo,
      sym_identifier,
  [2665] = 5,
    ACTIONS(441), 1,
      sym_identifier,
    ACTIONS(444), 1,
      anon_sym_device,
    ACTIONS(447), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(119), 3,
      sym__kit_member,
      sym_kit_instrument,
      aux_sym_kit_def_repeat1,
  [2684] = 5,
    ACTIONS(449), 1,
      anon_sym_RBRACK,
    ACTIONS(451), 1,
      anon_sym_r,
    ACTIONS(454), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(120), 2,
      sym_rest,
      aux_sym_chord_repeat1,
  [2702] = 5,
    ACTIONS(457), 1,
      anon_sym_RBRACK,
    ACTIONS(459), 1,
      anon_sym_r,
    ACTIONS(461), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(120), 2,
      sym_rest,
      aux_sym_chord_repeat1,
  [2720] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(465), 2,
      anon_sym_RBRACE,
      sym_dash_divider,
    ACTIONS(463), 3,
      anon_sym_use,
      anon_sym_resolution,
      sym_identifier,
  [2734] = 4,
    ACTIONS(467), 1,
      anon_sym_up,
    STATE(164), 1,
      sym_arp_direction,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(469), 3,
      anon_sym_down,
      anon_sym_updown,
      anon_sym_random,
  [2750] = 4,
    ACTIONS(467), 1,
      anon_sym_up,
    STATE(217), 1,
      sym_arp_direction,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(469), 3,
      anon_sym_down,
      anon_sym_updown,
      anon_sym_random,
  [2766] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(473), 2,
      anon_sym_RBRACE,
      sym_dash_divider,
    ACTIONS(471), 3,
      anon_sym_use,
      anon_sym_resolution,
      sym_identifier,
  [2780] = 5,
    ACTIONS(477), 1,
      anon_sym_RBRACE,
    ACTIONS(479), 1,
      anon_sym_STAR,
    STATE(145), 1,
      sym_weight,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(475), 2,
      anon_sym_tempo,
      sym_identifier,
  [2798] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(483), 2,
      anon_sym_RBRACE,
      sym_dash_divider,
    ACTIONS(481), 3,
      anon_sym_use,
      anon_sym_resolution,
      sym_identifier,
  [2812] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(485), 5,
      anon_sym_RBRACE,
      anon_sym_channel,
      anon_sym_note,
      anon_sym_gate_normal,
      anon_sym_gate_staccato,
  [2824] = 5,
    ACTIONS(459), 1,
      anon_sym_r,
    ACTIONS(461), 1,
      sym_note_name,
    ACTIONS(487), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(120), 2,
      sym_rest,
      aux_sym_chord_repeat1,
  [2842] = 4,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    ACTIONS(491), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(130), 2,
      sym_clip_header,
      aux_sym_clip_def_repeat1,
  [2857] = 4,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
    ACTIONS(496), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(141), 2,
      sym_clip_header,
      aux_sym_clip_def_repeat1,
  [2872] = 4,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(132), 2,
      sym_session_entry,
      aux_sym_session_def_repeat1,
  [2887] = 4,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
    ACTIONS(505), 1,
      anon_sym_port,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(134), 2,
      sym_device_property,
      aux_sym_device_def_repeat1,
  [2902] = 4,
    ACTIONS(507), 1,
      anon_sym_RBRACE,
    ACTIONS(509), 1,
      anon_sym_port,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(134), 2,
      sym_device_property,
      aux_sym_device_def_repeat1,
  [2917] = 4,
    ACTIONS(459), 1,
      anon_sym_r,
    ACTIONS(512), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(121), 2,
      sym_rest,
      aux_sym_chord_repeat1,
  [2932] = 4,
    ACTIONS(505), 1,
      anon_sym_port,
    ACTIONS(514), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(133), 2,
      sym_device_property,
      aux_sym_device_def_repeat1,
  [2947] = 3,
    ACTIONS(516), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(236), 3,
      anon_sym_RBRACK,
      anon_sym_r,
      sym_note_name,
  [2960] = 4,
    ACTIONS(518), 1,
      sym_identifier,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(132), 2,
      sym_session_entry,
      aux_sym_session_def_repeat1,
  [2975] = 4,
    ACTIONS(518), 1,
      sym_identifier,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(138), 2,
      sym_session_entry,
      aux_sym_session_def_repeat1,
  [2990] = 4,
    ACTIONS(459), 1,
      anon_sym_r,
    ACTIONS(524), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(129), 2,
      sym_rest,
      aux_sym_chord_repeat1,
  [3005] = 4,
    ACTIONS(496), 1,
      anon_sym_LBRACK,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(130), 2,
      sym_clip_header,
      aux_sym_clip_def_repeat1,
  [3020] = 4,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    STATE(152), 1,
      sym_session_modifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(528), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3035] = 3,
    ACTIONS(534), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(532), 2,
      anon_sym_device,
      sym_identifier,
  [3047] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(196), 3,
      anon_sym_RBRACK,
      anon_sym_r,
      sym_note_name,
  [3057] = 3,
    ACTIONS(538), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(536), 2,
      anon_sym_tempo,
      sym_identifier,
  [3069] = 3,
    ACTIONS(542), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(540), 2,
      anon_sym_device,
      sym_identifier,
  [3081] = 3,
    ACTIONS(546), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(544), 2,
      anon_sym_tempo,
      sym_identifier,
  [3093] = 3,
    ACTIONS(550), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(548), 2,
      anon_sym_tempo,
      sym_identifier,
  [3105] = 3,
    ACTIONS(554), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(552), 2,
      anon_sym_tempo,
      sym_identifier,
  [3117] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(300), 3,
      anon_sym_RBRACK,
      anon_sym_r,
      sym_note_name,
  [3127] = 3,
    ACTIONS(558), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(556), 2,
      anon_sym_device,
      sym_identifier,
  [3139] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(560), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3148] = 3,
    ACTIONS(562), 1,
      anon_sym_repeat,
    ACTIONS(564), 1,
      anon_sym_loop,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3159] = 3,
    ACTIONS(566), 1,
      sym_identifier,
    ACTIONS(568), 1,
      anon_sym_session,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3170] = 3,
    ACTIONS(570), 1,
      anon_sym_repeat,
    ACTIONS(572), 1,
      anon_sym_loop,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3181] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(574), 2,
      anon_sym_RBRACE,
      anon_sym_port,
  [3190] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(240), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3199] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(576), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [3208] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(578), 2,
      sym_tempo_delta,
      sym_number,
  [3217] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3226] = 2,
    ACTIONS(580), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3234] = 2,
    ACTIONS(582), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3242] = 2,
    ACTIONS(584), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3250] = 2,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3258] = 2,
    ACTIONS(588), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3266] = 2,
    ACTIONS(590), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3274] = 2,
    ACTIONS(592), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3282] = 2,
    ACTIONS(594), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3290] = 2,
    ACTIONS(596), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3298] = 2,
    ACTIONS(598), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3306] = 2,
    ACTIONS(600), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3314] = 2,
    ACTIONS(602), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3322] = 2,
    ACTIONS(604), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3330] = 2,
    ACTIONS(606), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3338] = 2,
    ACTIONS(608), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3346] = 2,
    ACTIONS(610), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3354] = 2,
    ACTIONS(612), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3362] = 2,
    ACTIONS(614), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3370] = 2,
    ACTIONS(616), 1,
      sym_time_signature,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3378] = 2,
    ACTIONS(618), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3386] = 2,
    ACTIONS(620), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3394] = 2,
    ACTIONS(622), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3402] = 2,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3410] = 2,
    ACTIONS(626), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3418] = 2,
    ACTIONS(628), 1,
      sym_note_literal,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3426] = 2,
    ACTIONS(628), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3434] = 2,
    ACTIONS(628), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3442] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(630), 1,
      sym_port_value,
    ACTIONS(632), 1,
      sym_comment,
  [3452] = 2,
    ACTIONS(634), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3460] = 2,
    ACTIONS(636), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3468] = 2,
    ACTIONS(638), 1,
      sym_octave,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3476] = 2,
    ACTIONS(640), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3484] = 2,
    ACTIONS(642), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3492] = 2,
    ACTIONS(644), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3500] = 2,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3508] = 2,
    ACTIONS(648), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3516] = 2,
    ACTIONS(650), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3524] = 2,
    ACTIONS(652), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3532] = 2,
    ACTIONS(654), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3540] = 2,
    ACTIONS(656), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3548] = 2,
    ACTIONS(658), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3556] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(632), 1,
      sym_comment,
    ACTIONS(660), 1,
      sym_include_path,
  [3566] = 2,
    ACTIONS(662), 1,
      sym_octave,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3574] = 2,
    ACTIONS(664), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3582] = 2,
    ACTIONS(666), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3590] = 2,
    ACTIONS(668), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3598] = 2,
    ACTIONS(670), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3606] = 2,
    ACTIONS(672), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3614] = 2,
    ACTIONS(674), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3622] = 2,
    ACTIONS(676), 1,
      sym_octave,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3630] = 2,
    ACTIONS(678), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3638] = 2,
    ACTIONS(636), 1,
      sym_note_literal,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3646] = 2,
    ACTIONS(680), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3654] = 2,
    ACTIONS(682), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3662] = 2,
    ACTIONS(684), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3670] = 2,
    ACTIONS(686), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3678] = 2,
    ACTIONS(688), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3686] = 2,
    ACTIONS(690), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3694] = 2,
    ACTIONS(692), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 56,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 154,
  [SMALL_STATE(6)] = 196,
  [SMALL_STATE(7)] = 234,
  [SMALL_STATE(8)] = 269,
  [SMALL_STATE(9)] = 304,
  [SMALL_STATE(10)] = 340,
  [SMALL_STATE(11)] = 376,
  [SMALL_STATE(12)] = 412,
  [SMALL_STATE(13)] = 448,
  [SMALL_STATE(14)] = 473,
  [SMALL_STATE(15)] = 498,
  [SMALL_STATE(16)] = 531,
  [SMALL_STATE(17)] = 556,
  [SMALL_STATE(18)] = 589,
  [SMALL_STATE(19)] = 618,
  [SMALL_STATE(20)] = 652,
  [SMALL_STATE(21)] = 676,
  [SMALL_STATE(22)] = 698,
  [SMALL_STATE(23)] = 720,
  [SMALL_STATE(24)] = 742,
  [SMALL_STATE(25)] = 762,
  [SMALL_STATE(26)] = 786,
  [SMALL_STATE(27)] = 812,
  [SMALL_STATE(28)] = 838,
  [SMALL_STATE(29)] = 857,
  [SMALL_STATE(30)] = 876,
  [SMALL_STATE(31)] = 895,
  [SMALL_STATE(32)] = 914,
  [SMALL_STATE(33)] = 945,
  [SMALL_STATE(34)] = 964,
  [SMALL_STATE(35)] = 983,
  [SMALL_STATE(36)] = 1002,
  [SMALL_STATE(37)] = 1023,
  [SMALL_STATE(38)] = 1046,
  [SMALL_STATE(39)] = 1065,
  [SMALL_STATE(40)] = 1084,
  [SMALL_STATE(41)] = 1103,
  [SMALL_STATE(42)] = 1122,
  [SMALL_STATE(43)] = 1141,
  [SMALL_STATE(44)] = 1160,
  [SMALL_STATE(45)] = 1179,
  [SMALL_STATE(46)] = 1198,
  [SMALL_STATE(47)] = 1219,
  [SMALL_STATE(48)] = 1238,
  [SMALL_STATE(49)] = 1257,
  [SMALL_STATE(50)] = 1276,
  [SMALL_STATE(51)] = 1295,
  [SMALL_STATE(52)] = 1314,
  [SMALL_STATE(53)] = 1337,
  [SMALL_STATE(54)] = 1356,
  [SMALL_STATE(55)] = 1377,
  [SMALL_STATE(56)] = 1408,
  [SMALL_STATE(57)] = 1428,
  [SMALL_STATE(58)] = 1456,
  [SMALL_STATE(59)] = 1476,
  [SMALL_STATE(60)] = 1496,
  [SMALL_STATE(61)] = 1516,
  [SMALL_STATE(62)] = 1536,
  [SMALL_STATE(63)] = 1556,
  [SMALL_STATE(64)] = 1584,
  [SMALL_STATE(65)] = 1604,
  [SMALL_STATE(66)] = 1632,
  [SMALL_STATE(67)] = 1652,
  [SMALL_STATE(68)] = 1674,
  [SMALL_STATE(69)] = 1694,
  [SMALL_STATE(70)] = 1714,
  [SMALL_STATE(71)] = 1734,
  [SMALL_STATE(72)] = 1754,
  [SMALL_STATE(73)] = 1782,
  [SMALL_STATE(74)] = 1810,
  [SMALL_STATE(75)] = 1829,
  [SMALL_STATE(76)] = 1848,
  [SMALL_STATE(77)] = 1873,
  [SMALL_STATE(78)] = 1892,
  [SMALL_STATE(79)] = 1911,
  [SMALL_STATE(80)] = 1930,
  [SMALL_STATE(81)] = 1950,
  [SMALL_STATE(82)] = 1970,
  [SMALL_STATE(83)] = 1990,
  [SMALL_STATE(84)] = 2010,
  [SMALL_STATE(85)] = 2030,
  [SMALL_STATE(86)] = 2050,
  [SMALL_STATE(87)] = 2070,
  [SMALL_STATE(88)] = 2090,
  [SMALL_STATE(89)] = 2112,
  [SMALL_STATE(90)] = 2132,
  [SMALL_STATE(91)] = 2154,
  [SMALL_STATE(92)] = 2177,
  [SMALL_STATE(93)] = 2196,
  [SMALL_STATE(94)] = 2219,
  [SMALL_STATE(95)] = 2242,
  [SMALL_STATE(96)] = 2261,
  [SMALL_STATE(97)] = 2277,
  [SMALL_STATE(98)] = 2297,
  [SMALL_STATE(99)] = 2317,
  [SMALL_STATE(100)] = 2333,
  [SMALL_STATE(101)] = 2353,
  [SMALL_STATE(102)] = 2369,
  [SMALL_STATE(103)] = 2385,
  [SMALL_STATE(104)] = 2401,
  [SMALL_STATE(105)] = 2417,
  [SMALL_STATE(106)] = 2433,
  [SMALL_STATE(107)] = 2453,
  [SMALL_STATE(108)] = 2473,
  [SMALL_STATE(109)] = 2489,
  [SMALL_STATE(110)] = 2505,
  [SMALL_STATE(111)] = 2521,
  [SMALL_STATE(112)] = 2541,
  [SMALL_STATE(113)] = 2561,
  [SMALL_STATE(114)] = 2577,
  [SMALL_STATE(115)] = 2593,
  [SMALL_STATE(116)] = 2606,
  [SMALL_STATE(117)] = 2625,
  [SMALL_STATE(118)] = 2644,
  [SMALL_STATE(119)] = 2665,
  [SMALL_STATE(120)] = 2684,
  [SMALL_STATE(121)] = 2702,
  [SMALL_STATE(122)] = 2720,
  [SMALL_STATE(123)] = 2734,
  [SMALL_STATE(124)] = 2750,
  [SMALL_STATE(125)] = 2766,
  [SMALL_STATE(126)] = 2780,
  [SMALL_STATE(127)] = 2798,
  [SMALL_STATE(128)] = 2812,
  [SMALL_STATE(129)] = 2824,
  [SMALL_STATE(130)] = 2842,
  [SMALL_STATE(131)] = 2857,
  [SMALL_STATE(132)] = 2872,
  [SMALL_STATE(133)] = 2887,
  [SMALL_STATE(134)] = 2902,
  [SMALL_STATE(135)] = 2917,
  [SMALL_STATE(136)] = 2932,
  [SMALL_STATE(137)] = 2947,
  [SMALL_STATE(138)] = 2960,
  [SMALL_STATE(139)] = 2975,
  [SMALL_STATE(140)] = 2990,
  [SMALL_STATE(141)] = 3005,
  [SMALL_STATE(142)] = 3020,
  [SMALL_STATE(143)] = 3035,
  [SMALL_STATE(144)] = 3047,
  [SMALL_STATE(145)] = 3057,
  [SMALL_STATE(146)] = 3069,
  [SMALL_STATE(147)] = 3081,
  [SMALL_STATE(148)] = 3093,
  [SMALL_STATE(149)] = 3105,
  [SMALL_STATE(150)] = 3117,
  [SMALL_STATE(151)] = 3127,
  [SMALL_STATE(152)] = 3139,
  [SMALL_STATE(153)] = 3148,
  [SMALL_STATE(154)] = 3159,
  [SMALL_STATE(155)] = 3170,
  [SMALL_STATE(156)] = 3181,
  [SMALL_STATE(157)] = 3190,
  [SMALL_STATE(158)] = 3199,
  [SMALL_STATE(159)] = 3208,
  [SMALL_STATE(160)] = 3217,
  [SMALL_STATE(161)] = 3226,
  [SMALL_STATE(162)] = 3234,
  [SMALL_STATE(163)] = 3242,
  [SMALL_STATE(164)] = 3250,
  [SMALL_STATE(165)] = 3258,
  [SMALL_STATE(166)] = 3266,
  [SMALL_STATE(167)] = 3274,
  [SMALL_STATE(168)] = 3282,
  [SMALL_STATE(169)] = 3290,
  [SMALL_STATE(170)] = 3298,
  [SMALL_STATE(171)] = 3306,
  [SMALL_STATE(172)] = 3314,
  [SMALL_STATE(173)] = 3322,
  [SMALL_STATE(174)] = 3330,
  [SMALL_STATE(175)] = 3338,
  [SMALL_STATE(176)] = 3346,
  [SMALL_STATE(177)] = 3354,
  [SMALL_STATE(178)] = 3362,
  [SMALL_STATE(179)] = 3370,
  [SMALL_STATE(180)] = 3378,
  [SMALL_STATE(181)] = 3386,
  [SMALL_STATE(182)] = 3394,
  [SMALL_STATE(183)] = 3402,
  [SMALL_STATE(184)] = 3410,
  [SMALL_STATE(185)] = 3418,
  [SMALL_STATE(186)] = 3426,
  [SMALL_STATE(187)] = 3434,
  [SMALL_STATE(188)] = 3442,
  [SMALL_STATE(189)] = 3452,
  [SMALL_STATE(190)] = 3460,
  [SMALL_STATE(191)] = 3468,
  [SMALL_STATE(192)] = 3476,
  [SMALL_STATE(193)] = 3484,
  [SMALL_STATE(194)] = 3492,
  [SMALL_STATE(195)] = 3500,
  [SMALL_STATE(196)] = 3508,
  [SMALL_STATE(197)] = 3516,
  [SMALL_STATE(198)] = 3524,
  [SMALL_STATE(199)] = 3532,
  [SMALL_STATE(200)] = 3540,
  [SMALL_STATE(201)] = 3548,
  [SMALL_STATE(202)] = 3556,
  [SMALL_STATE(203)] = 3566,
  [SMALL_STATE(204)] = 3574,
  [SMALL_STATE(205)] = 3582,
  [SMALL_STATE(206)] = 3590,
  [SMALL_STATE(207)] = 3598,
  [SMALL_STATE(208)] = 3606,
  [SMALL_STATE(209)] = 3614,
  [SMALL_STATE(210)] = 3622,
  [SMALL_STATE(211)] = 3630,
  [SMALL_STATE(212)] = 3638,
  [SMALL_STATE(213)] = 3646,
  [SMALL_STATE(214)] = 3654,
  [SMALL_STATE(215)] = 3662,
  [SMALL_STATE(216)] = 3670,
  [SMALL_STATE(217)] = 3678,
  [SMALL_STATE(218)] = 3686,
  [SMALL_STATE(219)] = 3694,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(209),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(205),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(202),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_melody_line, 2, 0, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_melody_line, 2, 0, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_melody_line_repeat1, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_melody_line_repeat1, 2, 0, 0),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_melody_line_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_melody_line_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_melody_line_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_melody_line_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_melody_line_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_melody_line_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pitched_note, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pitched_note, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_name, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_name, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 3, 0, 0),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_melody_line_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_melody_line_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_melody_line_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_melody_line_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_melody_line_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_melody_line_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_play_stmt, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__oct_dur_suffix, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__oct_dur_suffix, 2, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_play_stmt, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pitched_note, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pitched_note, 2, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration, 1, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 1, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__oct_dur_suffix, 4, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__oct_dur_suffix, 4, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scale_type, 1, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stop_stmt, 1, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stop_stmt, 1, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_name, 2, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_name, 2, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord, 4, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 4, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_session_def, 5, 0, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tempo_stmt, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip_def, 5, 0, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_def, 5, 0, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_session_modifier, 4, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_stmt, 2, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scale_stmt, 3, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest, 1, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest, 1, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_session_modifier, 3, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kit_def, 5, 0, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stop_stmt, 2, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip_def, 6, 0, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instrument_def, 5, 0, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_device_def, 5, 0, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instrument_def, 4, 0, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_play_stmt, 4, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_session_def, 4, 0, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_def, 4, 0, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kit_def, 4, 0, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_device_def, 4, 0, 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_melody_group, 3, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_melody_group, 3, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip_def, 4, 0, 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_melody_group, 5, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_melody_group, 5, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pitched_note, 3, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pitched_note, 3, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_articulation, 2, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_articulation, 2, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_name, 3, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_name, 3, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest, 3, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest, 3, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_articulation, 1, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_articulation, 1, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bar_jump, 2, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bar_jump, 2, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord, 5, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 5, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arp_expr, 6, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arp_expr, 6, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_clip_def_repeat2, 2, 0, 0), SHIFT_REPEAT(11),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clip_def_repeat2, 2, 0, 0),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clip_def_repeat2, 2, 0, 0), SHIFT_REPEAT(73),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_clip_def_repeat2, 2, 0, 0), SHIFT_REPEAT(161),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_clip_def_repeat2, 2, 0, 0), SHIFT_REPEAT(181),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instrument_def_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instrument_def_repeat1, 2, 0, 0),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instrument_def_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instrument_def_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_def_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scene_def_repeat1, 2, 0, 0),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_def_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_kit_instrument_repeat1, 2, 0, 0),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_kit_instrument_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_kit_instrument_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instrument_property, 2, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_slot, 1, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_slot, 1, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_kit_def_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_kit_def_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_kit_def_repeat1, 2, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drum_line, 2, 0, 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drum_line, 2, 0, 3),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resolution_stmt, 2, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resolution_stmt, 2, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shuffle_expr, 2, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shuffle_expr, 2, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_stmt, 2, 0, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_stmt, 2, 0, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kit_instrument_property, 2, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clip_def_repeat1, 2, 0, 0),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clip_def_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_session_def_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_session_def_repeat1, 2, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_device_def_repeat1, 2, 0, 0),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_device_def_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_session_entry, 1, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kit_instrument, 3, 0, 4),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kit_instrument, 3, 0, 4),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shuffle_expr, 3, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shuffle_expr, 3, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kit_instrument, 4, 0, 4),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kit_instrument, 4, 0, 4),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_slot, 2, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_slot, 2, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_tempo, 2, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_tempo, 2, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_weight, 2, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_weight, 2, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__kit_member, 2, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kit_member, 2, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_session_entry, 2, 0, 0),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_device_property, 2, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip_header, 3, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arp_direction, 1, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scale_attr, 3, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_attr, 2, 0, 0),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bars_attr, 2, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [650] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_block_comment = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_block_comment] = sym_block_comment,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_block_comment] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_cvg_external_scanner_create(void);
void tree_sitter_cvg_external_scanner_destroy(void *);
bool tree_sitter_cvg_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_cvg_external_scanner_serialize(void *, char *);
void tree_sitter_cvg_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_cvg(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_cvg_external_scanner_create,
      tree_sitter_cvg_external_scanner_destroy,
      tree_sitter_cvg_external_scanner_scan,
      tree_sitter_cvg_external_scanner_serialize,
      tree_sitter_cvg_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
