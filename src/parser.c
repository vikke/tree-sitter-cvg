#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 220
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 127
#define ALIAS_COUNT 0
#define TOKEN_COUNT 68
#define EXTERNAL_TOKEN_COUNT 2
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
  sym_scale_type = 20,
  sym_dash_divider = 21,
  anon_sym_use = 22,
  anon_sym_resolution = 23,
  sym_step_pattern = 24,
  anon_sym_GT = 25,
  anon_sym_COLON = 26,
  anon_sym_COLON_COLON = 27,
  anon_sym_r = 28,
  sym_octave = 29,
  anon_sym_1 = 30,
  anon_sym_2 = 31,
  anon_sym_4 = 32,
  anon_sym_4_DOT = 33,
  anon_sym_8 = 34,
  anon_sym_8_DOT = 35,
  anon_sym_16 = 36,
  anon_sym_32 = 37,
  anon_sym_SQUOTE = 38,
  anon_sym_g = 39,
  sym_chord_symbol = 40,
  anon_sym_arp = 41,
  anon_sym_LPAREN = 42,
  anon_sym_COMMA = 43,
  anon_sym_RPAREN = 44,
  anon_sym_up = 45,
  anon_sym_down = 46,
  anon_sym_updown = 47,
  anon_sym_random = 48,
  anon_sym_STAR = 49,
  anon_sym_scene = 50,
  sym_probability = 51,
  anon_sym_PIPE = 52,
  anon_sym_tempo = 53,
  sym_tempo_delta = 54,
  anon_sym_session = 55,
  anon_sym_repeat = 56,
  anon_sym_loop = 57,
  anon_sym_include = 58,
  anon_sym_play = 59,
  anon_sym_stop = 60,
  sym_note_name = 61,
  sym_number = 62,
  sym_port_value = 63,
  sym_include_path = 64,
  sym_comment = 65,
  sym_block_comment = 66,
  sym__scale_separator = 67,
  sym_source_file = 68,
  sym__top_level = 69,
  sym_device_def = 70,
  sym_device_property = 71,
  sym_instrument_def = 72,
  sym_instrument_property = 73,
  sym_kit_def = 74,
  sym__kit_member = 75,
  sym_kit_instrument = 76,
  sym_kit_instrument_property = 77,
  sym_clip_def = 78,
  sym_clip_header = 79,
  sym__clip_attr = 80,
  sym_bars_attr = 81,
  sym_time_attr = 82,
  sym_scale_attr = 83,
  sym__scale_spec = 84,
  sym__clip_content = 85,
  sym_use_stmt = 86,
  sym_resolution_stmt = 87,
  sym_drum_line = 88,
  sym_melody_line = 89,
  sym__melody_element = 90,
  sym_bar_jump = 91,
  sym_pitched_note = 92,
  sym__oct_dur_suffix = 93,
  sym_rest = 94,
  sym_duration = 95,
  sym_articulation = 96,
  sym_chord = 97,
  sym_chord_name = 98,
  sym_arp_expr = 99,
  sym_arp_direction = 100,
  sym_melody_group = 101,
  sym_scene_def = 102,
  sym__scene_content = 103,
  sym_scene_slot = 104,
  sym_shuffle_expr = 105,
  sym_weight = 106,
  sym_scene_tempo = 107,
  sym_session_def = 108,
  sym_session_entry = 109,
  sym_session_modifier = 110,
  sym_include_stmt = 111,
  sym_tempo_stmt = 112,
  sym_scale_stmt = 113,
  sym_play_stmt = 114,
  sym_stop_stmt = 115,
  aux_sym_source_file_repeat1 = 116,
  aux_sym_device_def_repeat1 = 117,
  aux_sym_instrument_def_repeat1 = 118,
  aux_sym_kit_def_repeat1 = 119,
  aux_sym_kit_instrument_repeat1 = 120,
  aux_sym_clip_def_repeat1 = 121,
  aux_sym_clip_def_repeat2 = 122,
  aux_sym_melody_line_repeat1 = 123,
  aux_sym_chord_repeat1 = 124,
  aux_sym_scene_def_repeat1 = 125,
  aux_sym_session_def_repeat1 = 126,
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
  [sym_scale_type] = "scale_type",
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
  [sym__scale_separator] = "_scale_separator",
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
  [sym__scale_spec] = "_scale_spec",
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
  [sym_scale_type] = sym_scale_type,
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
  [sym__scale_separator] = sym__scale_separator,
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
  [sym__scale_spec] = sym__scale_spec,
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
  [sym_scale_type] = {
    .visible = true,
    .named = true,
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
  [sym__scale_separator] = {
    .visible = false,
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
  [sym__scale_spec] = {
    .visible = false,
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
  [9] = 9,
  [10] = 10,
  [11] = 10,
  [12] = 4,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 13,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 6,
  [23] = 23,
  [24] = 18,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 21,
  [39] = 25,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 8,
  [49] = 49,
  [50] = 50,
  [51] = 7,
  [52] = 52,
  [53] = 23,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 18,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 21,
  [75] = 14,
  [76] = 23,
  [77] = 25,
  [78] = 78,
  [79] = 26,
  [80] = 80,
  [81] = 81,
  [82] = 78,
  [83] = 80,
  [84] = 19,
  [85] = 78,
  [86] = 80,
  [87] = 81,
  [88] = 81,
  [89] = 89,
  [90] = 90,
  [91] = 41,
  [92] = 92,
  [93] = 28,
  [94] = 94,
  [95] = 71,
  [96] = 63,
  [97] = 60,
  [98] = 98,
  [99] = 72,
  [100] = 56,
  [101] = 62,
  [102] = 66,
  [103] = 70,
  [104] = 104,
  [105] = 61,
  [106] = 106,
  [107] = 67,
  [108] = 73,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 57,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 118,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 120,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 41,
  [134] = 134,
  [135] = 135,
  [136] = 130,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 67,
  [144] = 144,
  [145] = 21,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 30,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 35,
  [159] = 151,
  [160] = 160,
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
  [198] = 164,
  [199] = 180,
  [200] = 197,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 163,
  [208] = 167,
  [209] = 206,
  [210] = 203,
  [211] = 211,
  [212] = 203,
  [213] = 166,
  [214] = 214,
  [215] = 215,
  [216] = 165,
  [217] = 190,
  [218] = 218,
  [219] = 192,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(37);
      ADVANCE_MAP(
        '\'', 69,
        '(', 77,
        ')', 79,
        '*', 80,
        '+', 33,
        ',', 78,
        '-', 7,
        '.', 45,
        '/', 12,
        '0', 54,
        '1', 55,
        '2', 58,
        '3', 53,
        '4', 60,
        '8', 63,
        ':', 48,
        '>', 46,
        '[', 41,
        ']', 42,
        'g', 85,
        'r', 51,
        '{', 38,
        '|', 82,
        '}', 39,
        'b', 86,
        'e', 86,
        'X', 111,
        'o', 111,
        'x', 111,
        'a', 85,
        'c', 85,
        'd', 85,
        'f', 85,
      );
      if (('5' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '/') ADVANCE(114);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(115);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\'', 69,
        '(', 77,
        ')', 79,
        '*', 80,
        '/', 12,
        ':', 48,
        '>', 46,
        '[', 41,
        'g', 92,
        'r', 50,
        'b', 90,
        'e', 90,
        'a', 92,
        'c', 92,
        'd', 92,
        'f', 92,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\'', 69,
        '(', 77,
        ')', 79,
        '-', 6,
        '/', 12,
        ':', 48,
        '>', 46,
        '[', 41,
        'g', 85,
        'r', 51,
        '}', 39,
        'b', 86,
        'e', 86,
        'a', 85,
        'c', 85,
        'd', 85,
        'f', 85,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '(', 77,
        ')', 79,
        '*', 80,
        '+', 33,
        '-', 7,
        '/', 12,
        ':', 48,
        '>', 46,
        '[', 41,
        'r', 51,
        '}', 39,
        'b', 86,
        'e', 86,
        'a', 85,
        'c', 85,
        'd', 85,
        'f', 85,
        'g', 85,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '(', 77,
        '/', 12,
        '>', 46,
        '[', 41,
        'r', 50,
        'b', 90,
        'e', 90,
        'a', 92,
        'c', 92,
        'd', 92,
        'f', 92,
        'g', 92,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead == ')' ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= '9') ||
          lookahead == 'X' ||
          lookahead == 'o' ||
          lookahead == 'x' ||
          lookahead == '|') ADVANCE(45);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(44);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '/', 12,
        ':', 47,
        ']', 42,
        'r', 50,
        'b', 93,
        'e', 93,
        'a', 94,
        'c', 94,
        'd', 94,
        'f', 94,
        'g', 94,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '|') ADVANCE(82);
      if (lookahead == '}') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'b' ||
          lookahead == 'e') ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'g')) ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(120);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(116);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '2') ADVANCE(67);
      END_STATE();
    case 16:
      if (lookahead == '5') ADVANCE(70);
      END_STATE();
    case 17:
      if (lookahead == '7') ADVANCE(70);
      END_STATE();
    case 18:
      if (lookahead == '7') ADVANCE(71);
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == '9') ADVANCE(70);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'j') ADVANCE(70);
      END_STATE();
    case 25:
      if (lookahead == 'j') ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == '#' ||
          lookahead == 'b') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == '1' ||
          lookahead == '3') ADVANCE(70);
      END_STATE();
    case 31:
      if (lookahead == '2' ||
          lookahead == '4') ADVANCE(70);
      END_STATE();
    case 32:
      if (lookahead == '#' ||
          lookahead == 'b' ||
          lookahead == 's') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 36:
      if (eof) ADVANCE(37);
      ADVANCE_MAP(
        ')', 79,
        '*', 80,
        '-', 6,
        '/', 12,
        '1', 56,
        '2', 57,
        '3', 15,
        '4', 59,
        '8', 62,
        '[', 41,
        ']', 42,
        '}', 39,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_note_literal);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_time_signature);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_dash_divider);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_step_pattern);
      if (('(' <= lookahead && lookahead <= '*') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          lookahead == 'X' ||
          lookahead == 'o' ||
          lookahead == 'x' ||
          lookahead == '|') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_r);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_octave);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_octave);
      if (lookahead == '2') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_octave);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '6') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '6') ADVANCE(65);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_4);
      if (lookahead == '.') ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_4);
      if (lookahead == '.') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_4_DOT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_8);
      if (lookahead == '.') ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_8);
      if (lookahead == '.') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_8_DOT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_32);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_chord_symbol);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_chord_symbol);
      if (lookahead == '#') ADVANCE(16);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_chord_symbol);
      if (lookahead == '1') ADVANCE(109);
      if (lookahead == '7') ADVANCE(76);
      if (lookahead == 'M') ADVANCE(97);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == '6' ||
          lookahead == '9') ADVANCE(70);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_chord_symbol);
      if (lookahead == '1') ADVANCE(30);
      if (lookahead == '7') ADVANCE(75);
      if (lookahead == 'M') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == '6' ||
          lookahead == '9') ADVANCE(70);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_chord_symbol);
      if (lookahead == '7') ADVANCE(70);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_chord_symbol);
      if (lookahead == 'b') ADVANCE(16);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_chord_symbol);
      if (lookahead == 'b') ADVANCE(96);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_probability);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_tempo_delta);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_note_name);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_note_name);
      ADVANCE_MAP(
        '#', 91,
        '1', 109,
        'M', 98,
        'a', 100,
        'b', 88,
        'd', 103,
        'm', 72,
        's', 87,
        '6', 70,
        '7', 70,
        '9', 70,
      );
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_note_name);
      ADVANCE_MAP(
        '#', 91,
        '1', 109,
        'M', 98,
        'a', 100,
        'b', 88,
        'd', 103,
        'm', 72,
        's', 108,
        '6', 70,
        '7', 70,
        '9', 70,
      );
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_note_name);
      ADVANCE_MAP(
        '1', 109,
        'M', 98,
        'a', 100,
        'd', 103,
        'm', 72,
        's', 108,
        'u', 107,
        '6', 70,
        '7', 70,
        '9', 70,
      );
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_note_name);
      ADVANCE_MAP(
        '1', 109,
        'M', 98,
        'a', 100,
        'd', 103,
        'm', 72,
        's', 108,
        '6', 70,
        '7', 70,
        '9', 70,
      );
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_note_name);
      ADVANCE_MAP(
        '1', 30,
        'M', 18,
        'a', 20,
        'd', 23,
        'm', 73,
        's', 28,
        'u', 27,
        '6', 70,
        '7', 70,
        '9', 70,
      );
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_note_name);
      ADVANCE_MAP(
        '1', 30,
        'M', 18,
        'a', 20,
        'd', 23,
        'm', 73,
        's', 28,
        '#', 91,
        'b', 91,
        '6', 70,
        '7', 70,
        '9', 70,
      );
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_note_name);
      ADVANCE_MAP(
        '1', 30,
        'M', 18,
        'a', 20,
        'd', 23,
        'm', 73,
        's', 28,
        '6', 70,
        '7', 70,
        '9', 70,
      );
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_note_name);
      ADVANCE_MAP(
        '1', 30,
        'M', 18,
        'a', 20,
        'd', 23,
        'm', 73,
        's', 89,
        '#', 91,
        'b', 91,
        '6', 70,
        '7', 70,
        '9', 70,
      );
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_note_name);
      if (lookahead == '#' ||
          lookahead == 'b') ADVANCE(84);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_note_name);
      if (lookahead == '#' ||
          lookahead == 'b' ||
          lookahead == 's') ADVANCE(84);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '5') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '7') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '7') ADVANCE(71);
      if (lookahead == 'a') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '9') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1' ||
          lookahead == '3') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2' ||
          lookahead == '4') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'X' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_port_value);
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '/') ADVANCE(114);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_port_value);
      if (lookahead == '/') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_port_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_include_path);
      if (lookahead == '/') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_include_path);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_include_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '}') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
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
          lookahead == ' ') SKIP(17);
      END_STATE();
    case 1:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == 'h') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == 'y') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == 'h') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 16:
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        'a', 1,
        'b', 2,
        'c', 3,
        'd', 46,
        'g', 5,
        'i', 7,
        'k', 8,
        'l', 47,
        'n', 11,
        'p', 48,
        'r', 13,
        's', 14,
        't', 15,
        'u', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      END_STATE();
    case 18:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 22:
      if (lookahead == 'v') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == 'w') ADVANCE(55);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(58);
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 30:
      if (lookahead == 'j') ADVANCE(64);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'x') ADVANCE(67);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 38:
      if (lookahead == 'p') ADVANCE(73);
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_up);
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_arp);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(87);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_kit);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 69:
      if (lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 70:
      if (lookahead == 'y') ADVANCE(104);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 78:
      if (lookahead == 'p') ADVANCE(112);
      END_STATE();
    case 79:
      if (lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 83:
      if (lookahead == 'w') ADVANCE(55);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_bars);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_clip);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_down);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(119);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 93:
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_loop);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(128);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_play);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_port);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_stop);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_time);
      END_STATE();
    case 115:
      if (lookahead == 'w') ADVANCE(136);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 121:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 122:
      if (lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_scale_type);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 127:
      if (lookahead == 'y') ADVANCE(146);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_scene);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_tempo);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_device);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(158);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 146:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_random);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_updown);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_channel);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 159:
      if (lookahead == '_') ADVANCE(168);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_session);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(171);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(172);
      END_STATE();
    case 166:
      if (lookahead == '_') ADVANCE(173);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(175);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 172:
      if (lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 173:
      if (lookahead == 'm') ADVANCE(180);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_instrument);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(187);
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
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_gate_staccato);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 36, .external_lex_state = 2},
  [2] = {.lex_state = 36, .external_lex_state = 2},
  [3] = {.lex_state = 36, .external_lex_state = 2},
  [4] = {.lex_state = 4, .external_lex_state = 2},
  [5] = {.lex_state = 4, .external_lex_state = 2},
  [6] = {.lex_state = 3, .external_lex_state = 2},
  [7] = {.lex_state = 4, .external_lex_state = 2},
  [8] = {.lex_state = 4, .external_lex_state = 2},
  [9] = {.lex_state = 5, .external_lex_state = 2},
  [10] = {.lex_state = 2, .external_lex_state = 2},
  [11] = {.lex_state = 2, .external_lex_state = 2},
  [12] = {.lex_state = 2, .external_lex_state = 2},
  [13] = {.lex_state = 5, .external_lex_state = 2},
  [14] = {.lex_state = 3, .external_lex_state = 2},
  [15] = {.lex_state = 36, .external_lex_state = 2},
  [16] = {.lex_state = 5, .external_lex_state = 2},
  [17] = {.lex_state = 36, .external_lex_state = 2},
  [18] = {.lex_state = 3, .external_lex_state = 2},
  [19] = {.lex_state = 4, .external_lex_state = 2},
  [20] = {.lex_state = 36, .external_lex_state = 2},
  [21] = {.lex_state = 3, .external_lex_state = 2},
  [22] = {.lex_state = 2, .external_lex_state = 2},
  [23] = {.lex_state = 3, .external_lex_state = 2},
  [24] = {.lex_state = 4, .external_lex_state = 2},
  [25] = {.lex_state = 3, .external_lex_state = 2},
  [26] = {.lex_state = 4, .external_lex_state = 2},
  [27] = {.lex_state = 36, .external_lex_state = 2},
  [28] = {.lex_state = 4, .external_lex_state = 2},
  [29] = {.lex_state = 36, .external_lex_state = 2},
  [30] = {.lex_state = 36, .external_lex_state = 2},
  [31] = {.lex_state = 36, .external_lex_state = 2},
  [32] = {.lex_state = 36, .external_lex_state = 2},
  [33] = {.lex_state = 36, .external_lex_state = 2},
  [34] = {.lex_state = 36, .external_lex_state = 2},
  [35] = {.lex_state = 36, .external_lex_state = 2},
  [36] = {.lex_state = 36, .external_lex_state = 2},
  [37] = {.lex_state = 36, .external_lex_state = 2},
  [38] = {.lex_state = 4, .external_lex_state = 2},
  [39] = {.lex_state = 4, .external_lex_state = 2},
  [40] = {.lex_state = 36, .external_lex_state = 2},
  [41] = {.lex_state = 4, .external_lex_state = 2},
  [42] = {.lex_state = 36, .external_lex_state = 2},
  [43] = {.lex_state = 36, .external_lex_state = 2},
  [44] = {.lex_state = 36, .external_lex_state = 2},
  [45] = {.lex_state = 36, .external_lex_state = 2},
  [46] = {.lex_state = 36, .external_lex_state = 2},
  [47] = {.lex_state = 36, .external_lex_state = 2},
  [48] = {.lex_state = 4, .external_lex_state = 2},
  [49] = {.lex_state = 36, .external_lex_state = 2},
  [50] = {.lex_state = 36, .external_lex_state = 2},
  [51] = {.lex_state = 4, .external_lex_state = 2},
  [52] = {.lex_state = 36, .external_lex_state = 2},
  [53] = {.lex_state = 4, .external_lex_state = 2},
  [54] = {.lex_state = 36, .external_lex_state = 2},
  [55] = {.lex_state = 36, .external_lex_state = 2},
  [56] = {.lex_state = 4, .external_lex_state = 2},
  [57] = {.lex_state = 4, .external_lex_state = 2},
  [58] = {.lex_state = 3, .external_lex_state = 2},
  [59] = {.lex_state = 36, .external_lex_state = 2},
  [60] = {.lex_state = 4, .external_lex_state = 2},
  [61] = {.lex_state = 4, .external_lex_state = 2},
  [62] = {.lex_state = 4, .external_lex_state = 2},
  [63] = {.lex_state = 4, .external_lex_state = 2},
  [64] = {.lex_state = 36, .external_lex_state = 2},
  [65] = {.lex_state = 36, .external_lex_state = 2},
  [66] = {.lex_state = 4, .external_lex_state = 2},
  [67] = {.lex_state = 4, .external_lex_state = 2},
  [68] = {.lex_state = 36, .external_lex_state = 2},
  [69] = {.lex_state = 36, .external_lex_state = 2},
  [70] = {.lex_state = 4, .external_lex_state = 2},
  [71] = {.lex_state = 4, .external_lex_state = 2},
  [72] = {.lex_state = 4, .external_lex_state = 2},
  [73] = {.lex_state = 4, .external_lex_state = 2},
  [74] = {.lex_state = 3, .external_lex_state = 2},
  [75] = {.lex_state = 2, .external_lex_state = 2},
  [76] = {.lex_state = 3, .external_lex_state = 2},
  [77] = {.lex_state = 3, .external_lex_state = 2},
  [78] = {.lex_state = 36, .external_lex_state = 2},
  [79] = {.lex_state = 4, .external_lex_state = 2},
  [80] = {.lex_state = 36, .external_lex_state = 2},
  [81] = {.lex_state = 36, .external_lex_state = 2},
  [82] = {.lex_state = 36, .external_lex_state = 2},
  [83] = {.lex_state = 36, .external_lex_state = 2},
  [84] = {.lex_state = 4, .external_lex_state = 2},
  [85] = {.lex_state = 36, .external_lex_state = 2},
  [86] = {.lex_state = 36, .external_lex_state = 2},
  [87] = {.lex_state = 36, .external_lex_state = 2},
  [88] = {.lex_state = 36, .external_lex_state = 2},
  [89] = {.lex_state = 36, .external_lex_state = 2},
  [90] = {.lex_state = 36, .external_lex_state = 2},
  [91] = {.lex_state = 2, .external_lex_state = 2},
  [92] = {.lex_state = 36, .external_lex_state = 2},
  [93] = {.lex_state = 2, .external_lex_state = 2},
  [94] = {.lex_state = 36, .external_lex_state = 2},
  [95] = {.lex_state = 2, .external_lex_state = 2},
  [96] = {.lex_state = 2, .external_lex_state = 2},
  [97] = {.lex_state = 2, .external_lex_state = 2},
  [98] = {.lex_state = 36, .external_lex_state = 2},
  [99] = {.lex_state = 2, .external_lex_state = 2},
  [100] = {.lex_state = 2, .external_lex_state = 2},
  [101] = {.lex_state = 2, .external_lex_state = 2},
  [102] = {.lex_state = 2, .external_lex_state = 2},
  [103] = {.lex_state = 2, .external_lex_state = 2},
  [104] = {.lex_state = 36, .external_lex_state = 2},
  [105] = {.lex_state = 2, .external_lex_state = 2},
  [106] = {.lex_state = 36, .external_lex_state = 2},
  [107] = {.lex_state = 2, .external_lex_state = 2},
  [108] = {.lex_state = 2, .external_lex_state = 2},
  [109] = {.lex_state = 36, .external_lex_state = 2},
  [110] = {.lex_state = 36, .external_lex_state = 2},
  [111] = {.lex_state = 36, .external_lex_state = 2},
  [112] = {.lex_state = 2, .external_lex_state = 2},
  [113] = {.lex_state = 36, .external_lex_state = 2},
  [114] = {.lex_state = 10, .external_lex_state = 2},
  [115] = {.lex_state = 36, .external_lex_state = 2},
  [116] = {.lex_state = 36, .external_lex_state = 2},
  [117] = {.lex_state = 36, .external_lex_state = 2},
  [118] = {.lex_state = 9, .external_lex_state = 2},
  [119] = {.lex_state = 9, .external_lex_state = 2},
  [120] = {.lex_state = 36, .external_lex_state = 2},
  [121] = {.lex_state = 9, .external_lex_state = 2},
  [122] = {.lex_state = 36, .external_lex_state = 2},
  [123] = {.lex_state = 36, .external_lex_state = 2},
  [124] = {.lex_state = 36, .external_lex_state = 2},
  [125] = {.lex_state = 36, .external_lex_state = 2},
  [126] = {.lex_state = 36, .external_lex_state = 2},
  [127] = {.lex_state = 36, .external_lex_state = 2},
  [128] = {.lex_state = 36, .external_lex_state = 2},
  [129] = {.lex_state = 36, .external_lex_state = 2},
  [130] = {.lex_state = 9, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 36, .external_lex_state = 2},
  [133] = {.lex_state = 9, .external_lex_state = 2},
  [134] = {.lex_state = 36, .external_lex_state = 2},
  [135] = {.lex_state = 0, .external_lex_state = 2},
  [136] = {.lex_state = 9, .external_lex_state = 2},
  [137] = {.lex_state = 36, .external_lex_state = 2},
  [138] = {.lex_state = 36, .external_lex_state = 2},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 36, .external_lex_state = 2},
  [141] = {.lex_state = 36, .external_lex_state = 2},
  [142] = {.lex_state = 36, .external_lex_state = 2},
  [143] = {.lex_state = 9, .external_lex_state = 2},
  [144] = {.lex_state = 36, .external_lex_state = 2},
  [145] = {.lex_state = 9, .external_lex_state = 2},
  [146] = {.lex_state = 36, .external_lex_state = 2},
  [147] = {.lex_state = 36, .external_lex_state = 2},
  [148] = {.lex_state = 36, .external_lex_state = 2},
  [149] = {.lex_state = 36, .external_lex_state = 2},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 36, .external_lex_state = 2},
  [152] = {.lex_state = 36, .external_lex_state = 2},
  [153] = {.lex_state = 36, .external_lex_state = 2},
  [154] = {.lex_state = 36, .external_lex_state = 2},
  [155] = {.lex_state = 9, .external_lex_state = 2},
  [156] = {.lex_state = 36, .external_lex_state = 2},
  [157] = {.lex_state = 4, .external_lex_state = 2},
  [158] = {.lex_state = 36, .external_lex_state = 2},
  [159] = {.lex_state = 36, .external_lex_state = 2},
  [160] = {.lex_state = 9, .external_lex_state = 2},
  [161] = {.lex_state = 36, .external_lex_state = 2},
  [162] = {.lex_state = 0, .external_lex_state = 1},
  [163] = {.lex_state = 4, .external_lex_state = 2},
  [164] = {.lex_state = 0, .external_lex_state = 2},
  [165] = {.lex_state = 4, .external_lex_state = 2},
  [166] = {.lex_state = 4, .external_lex_state = 2},
  [167] = {.lex_state = 36, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 3, .external_lex_state = 2},
  [170] = {.lex_state = 4, .external_lex_state = 2},
  [171] = {.lex_state = 4, .external_lex_state = 2},
  [172] = {.lex_state = 4, .external_lex_state = 2},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 36, .external_lex_state = 2},
  [176] = {.lex_state = 4, .external_lex_state = 2},
  [177] = {.lex_state = 11, .external_lex_state = 2},
  [178] = {.lex_state = 4, .external_lex_state = 2},
  [179] = {.lex_state = 36, .external_lex_state = 2},
  [180] = {.lex_state = 4, .external_lex_state = 2},
  [181] = {.lex_state = 1, .external_lex_state = 2},
  [182] = {.lex_state = 0, .external_lex_state = 2},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 36, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 2},
  [186] = {.lex_state = 36, .external_lex_state = 2},
  [187] = {.lex_state = 36, .external_lex_state = 2},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 36, .external_lex_state = 2},
  [192] = {.lex_state = 0, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 4, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 2},
  [201] = {.lex_state = 13, .external_lex_state = 2},
  [202] = {.lex_state = 36, .external_lex_state = 2},
  [203] = {.lex_state = 2, .external_lex_state = 2},
  [204] = {.lex_state = 4, .external_lex_state = 2},
  [205] = {.lex_state = 36, .external_lex_state = 2},
  [206] = {.lex_state = 4, .external_lex_state = 2},
  [207] = {.lex_state = 4, .external_lex_state = 2},
  [208] = {.lex_state = 36, .external_lex_state = 2},
  [209] = {.lex_state = 4, .external_lex_state = 2},
  [210] = {.lex_state = 2, .external_lex_state = 2},
  [211] = {.lex_state = 36, .external_lex_state = 2},
  [212] = {.lex_state = 2, .external_lex_state = 2},
  [213] = {.lex_state = 4, .external_lex_state = 2},
  [214] = {.lex_state = 11, .external_lex_state = 2},
  [215] = {.lex_state = 36, .external_lex_state = 2},
  [216] = {.lex_state = 4, .external_lex_state = 2},
  [217] = {.lex_state = 0, .external_lex_state = 2},
  [218] = {.lex_state = 36, .external_lex_state = 2},
  [219] = {.lex_state = 0, .external_lex_state = 2},
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
    [sym_scale_type] = ACTIONS(1),
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
    [sym__scale_separator] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(196),
    [sym__top_level] = STATE(3),
    [sym_device_def] = STATE(3),
    [sym_instrument_def] = STATE(3),
    [sym_kit_def] = STATE(3),
    [sym_clip_def] = STATE(3),
    [sym_scene_def] = STATE(3),
    [sym_session_def] = STATE(3),
    [sym_include_stmt] = STATE(3),
    [sym_tempo_stmt] = STATE(3),
    [sym_scale_stmt] = STATE(3),
    [sym_play_stmt] = STATE(3),
    [sym_stop_stmt] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
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
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_device,
    ACTIONS(34), 1,
      anon_sym_instrument,
    ACTIONS(37), 1,
      anon_sym_kit,
    ACTIONS(40), 1,
      anon_sym_clip,
    ACTIONS(43), 1,
      anon_sym_scale,
    ACTIONS(46), 1,
      anon_sym_scene,
    ACTIONS(49), 1,
      anon_sym_tempo,
    ACTIONS(52), 1,
      anon_sym_session,
    ACTIONS(55), 1,
      anon_sym_include,
    ACTIONS(58), 1,
      anon_sym_play,
    ACTIONS(61), 1,
      anon_sym_stop,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(2), 13,
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
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(2), 13,
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
    ACTIONS(73), 1,
      anon_sym_GT,
    ACTIONS(76), 1,
      anon_sym_r,
    ACTIONS(79), 1,
      sym_chord_symbol,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
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
    STATE(4), 8,
      sym__melody_element,
      sym_bar_jump,
      sym_pitched_note,
      sym_rest,
      sym_chord,
      sym_chord_name,
      sym_melody_group,
      aux_sym_melody_line_repeat1,
  [154] = 10,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(94), 1,
      anon_sym_GT,
    ACTIONS(96), 1,
      anon_sym_r,
    ACTIONS(98), 1,
      sym_chord_symbol,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(102), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(90), 2,
      anon_sym_RBRACE,
      sym_dash_divider,
    ACTIONS(88), 3,
      anon_sym_use,
      anon_sym_resolution,
      sym_identifier,
    STATE(4), 8,
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
    STATE(14), 1,
      sym__oct_dur_suffix,
    STATE(62), 1,
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
    STATE(56), 1,
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
    STATE(19), 1,
      sym__oct_dur_suffix,
    STATE(70), 1,
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
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(94), 1,
      anon_sym_GT,
    ACTIONS(98), 1,
      sym_chord_symbol,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(102), 1,
      sym_note_name,
    ACTIONS(130), 1,
      sym_step_pattern,
    ACTIONS(132), 1,
      anon_sym_r,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(5), 8,
      sym__melody_element,
      sym_bar_jump,
      sym_pitched_note,
      sym_rest,
      sym_chord,
      sym_chord_name,
      sym_melody_group,
      aux_sym_melody_line_repeat1,
  [340] = 9,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_GT,
    ACTIONS(138), 1,
      anon_sym_r,
    ACTIONS(140), 1,
      sym_chord_symbol,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    ACTIONS(146), 1,
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
  [376] = 9,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_GT,
    ACTIONS(138), 1,
      anon_sym_r,
    ACTIONS(140), 1,
      sym_chord_symbol,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      sym_note_name,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
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
  [412] = 9,
    ACTIONS(68), 1,
      anon_sym_RPAREN,
    ACTIONS(150), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      anon_sym_GT,
    ACTIONS(156), 1,
      anon_sym_r,
    ACTIONS(159), 1,
      sym_chord_symbol,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
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
  [448] = 8,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_GT,
    ACTIONS(138), 1,
      anon_sym_r,
    ACTIONS(140), 1,
      sym_chord_symbol,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(11), 8,
      sym__melody_element,
      sym_bar_jump,
      sym_pitched_note,
      sym_rest,
      sym_chord,
      sym_chord_name,
      sym_melody_group,
      aux_sym_melody_line_repeat1,
  [481] = 6,
    ACTIONS(112), 1,
      anon_sym_SQUOTE,
    ACTIONS(114), 1,
      anon_sym_g,
    STATE(61), 1,
      sym_articulation,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(168), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(170), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [510] = 4,
    ACTIONS(174), 1,
      anon_sym_LBRACK,
    STATE(45), 1,
      sym_session_modifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(172), 12,
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
  [535] = 8,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_GT,
    ACTIONS(138), 1,
      anon_sym_r,
    ACTIONS(140), 1,
      sym_chord_symbol,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
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
  [568] = 4,
    ACTIONS(174), 1,
      anon_sym_LBRACK,
    STATE(50), 1,
      sym_session_modifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(176), 12,
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
  [593] = 4,
    ACTIONS(182), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(178), 6,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      anon_sym_g,
      sym_note_name,
      sym_identifier,
    ACTIONS(180), 7,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      anon_sym_SQUOTE,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [618] = 5,
    ACTIONS(124), 1,
      anon_sym_arp,
    STATE(63), 1,
      sym_arp_expr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(184), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(186), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [644] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(188), 13,
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
  [664] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(190), 6,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      anon_sym_g,
      sym_note_name,
      sym_identifier,
    ACTIONS(192), 7,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      anon_sym_SQUOTE,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [686] = 9,
    ACTIONS(104), 1,
      sym_note_name,
    ACTIONS(194), 1,
      anon_sym_COLON,
    ACTIONS(196), 1,
      anon_sym_COLON_COLON,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_g,
    STATE(75), 1,
      sym__oct_dur_suffix,
    STATE(101), 1,
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
  [720] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(202), 6,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      anon_sym_g,
      sym_note_name,
      sym_identifier,
    ACTIONS(204), 7,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      anon_sym_SQUOTE,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [742] = 4,
    ACTIONS(206), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(178), 6,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      anon_sym_arp,
      sym_note_name,
      sym_identifier,
    ACTIONS(180), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [766] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(178), 6,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      anon_sym_g,
      sym_note_name,
      sym_identifier,
    ACTIONS(180), 7,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      anon_sym_SQUOTE,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [788] = 5,
    ACTIONS(124), 1,
      anon_sym_arp,
    STATE(72), 1,
      sym_arp_expr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(208), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(210), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [814] = 4,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(216), 11,
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
  [838] = 4,
    ACTIONS(222), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(218), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(220), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [861] = 2,
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
  [880] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(226), 12,
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
  [899] = 2,
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
  [918] = 2,
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
  [937] = 2,
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
  [956] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(234), 12,
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
  [975] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(236), 12,
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
  [994] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(238), 12,
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
  [1013] = 2,
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
  [1032] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(190), 6,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      anon_sym_arp,
      sym_note_name,
      sym_identifier,
    ACTIONS(192), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1053] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(178), 6,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      anon_sym_arp,
      sym_note_name,
      sym_identifier,
    ACTIONS(180), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1074] = 2,
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
  [1093] = 4,
    ACTIONS(248), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(244), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(246), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1116] = 2,
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
  [1135] = 2,
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
  [1154] = 2,
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
  [1173] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(176), 12,
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
  [1192] = 2,
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
  [1211] = 2,
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
  [1230] = 8,
    ACTIONS(126), 1,
      sym_note_name,
    ACTIONS(194), 1,
      anon_sym_COLON,
    ACTIONS(196), 1,
      anon_sym_COLON_COLON,
    ACTIONS(260), 1,
      anon_sym_arp,
    STATE(84), 1,
      sym__oct_dur_suffix,
    STATE(103), 1,
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
  [1261] = 2,
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
  [1280] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(264), 12,
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
  [1299] = 8,
    ACTIONS(116), 1,
      sym_note_name,
    ACTIONS(194), 1,
      anon_sym_COLON,
    ACTIONS(196), 1,
      anon_sym_COLON_COLON,
    ACTIONS(260), 1,
      anon_sym_arp,
    STATE(79), 1,
      sym__oct_dur_suffix,
    STATE(100), 1,
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
  [1330] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(266), 12,
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
  [1349] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(202), 6,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      anon_sym_arp,
      sym_note_name,
      sym_identifier,
    ACTIONS(204), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1370] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(268), 12,
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
  [1389] = 2,
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
  [1408] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(208), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(210), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1428] = 3,
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
  [1448] = 4,
    ACTIONS(276), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(178), 3,
      anon_sym_g,
      anon_sym_arp,
      sym_note_name,
    ACTIONS(180), 7,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      anon_sym_SQUOTE,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1470] = 7,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    ACTIONS(283), 1,
      sym_dash_divider,
    ACTIONS(286), 1,
      anon_sym_use,
    ACTIONS(289), 1,
      anon_sym_resolution,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(59), 6,
      sym__clip_content,
      sym_use_stmt,
      sym_resolution_stmt,
      sym_drum_line,
      sym_melody_line,
      aux_sym_clip_def_repeat2,
  [1498] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(292), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(294), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1518] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(296), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(298), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1538] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(168), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(170), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1558] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(300), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(302), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1578] = 7,
    ACTIONS(304), 1,
      sym_identifier,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    ACTIONS(308), 1,
      sym_dash_divider,
    ACTIONS(310), 1,
      anon_sym_use,
    ACTIONS(312), 1,
      anon_sym_resolution,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(59), 6,
      sym__clip_content,
      sym_use_stmt,
      sym_resolution_stmt,
      sym_drum_line,
      sym_melody_line,
      aux_sym_clip_def_repeat2,
  [1606] = 7,
    ACTIONS(304), 1,
      sym_identifier,
    ACTIONS(308), 1,
      sym_dash_divider,
    ACTIONS(310), 1,
      anon_sym_use,
    ACTIONS(312), 1,
      anon_sym_resolution,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(59), 6,
      sym__clip_content,
      sym_use_stmt,
      sym_resolution_stmt,
      sym_drum_line,
      sym_melody_line,
      aux_sym_clip_def_repeat2,
  [1634] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(316), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(318), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1654] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(320), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(322), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1674] = 7,
    ACTIONS(304), 1,
      sym_identifier,
    ACTIONS(310), 1,
      anon_sym_use,
    ACTIONS(312), 1,
      anon_sym_resolution,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
    ACTIONS(326), 1,
      sym_dash_divider,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(64), 6,
      sym__clip_content,
      sym_use_stmt,
      sym_resolution_stmt,
      sym_drum_line,
      sym_melody_line,
      aux_sym_clip_def_repeat2,
  [1702] = 7,
    ACTIONS(304), 1,
      sym_identifier,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    ACTIONS(310), 1,
      anon_sym_use,
    ACTIONS(312), 1,
      anon_sym_resolution,
    ACTIONS(328), 1,
      sym_dash_divider,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(65), 6,
      sym__clip_content,
      sym_use_stmt,
      sym_resolution_stmt,
      sym_drum_line,
      sym_melody_line,
      aux_sym_clip_def_repeat2,
  [1730] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(184), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(186), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1750] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(330), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(332), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1770] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(334), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(336), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1790] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(338), 5,
      anon_sym_use,
      anon_sym_resolution,
      anon_sym_r,
      sym_note_name,
      sym_identifier,
    ACTIONS(340), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_dash_divider,
      anon_sym_GT,
      sym_chord_symbol,
      anon_sym_LPAREN,
  [1810] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(190), 3,
      anon_sym_g,
      anon_sym_arp,
      sym_note_name,
    ACTIONS(192), 7,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      anon_sym_SQUOTE,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1829] = 6,
    ACTIONS(168), 1,
      sym_note_name,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_g,
    STATE(105), 1,
      sym_articulation,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(170), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1854] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(202), 3,
      anon_sym_g,
      anon_sym_arp,
      sym_note_name,
    ACTIONS(204), 7,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      anon_sym_SQUOTE,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1873] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(178), 3,
      anon_sym_g,
      anon_sym_arp,
      sym_note_name,
    ACTIONS(180), 7,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      anon_sym_SQUOTE,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1892] = 4,
    STATE(67), 1,
      sym_duration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(342), 3,
      anon_sym_1,
      anon_sym_4,
      anon_sym_8,
    ACTIONS(344), 5,
      anon_sym_2,
      anon_sym_4_DOT,
      anon_sym_8_DOT,
      anon_sym_16,
      anon_sym_32,
  [1912] = 5,
    ACTIONS(208), 1,
      sym_note_name,
    ACTIONS(260), 1,
      anon_sym_arp,
    STATE(99), 1,
      sym_arp_expr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(210), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1934] = 4,
    STATE(39), 1,
      sym_duration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(342), 3,
      anon_sym_1,
      anon_sym_4,
      anon_sym_8,
    ACTIONS(344), 5,
      anon_sym_2,
      anon_sym_4_DOT,
      anon_sym_8_DOT,
      anon_sym_16,
      anon_sym_32,
  [1954] = 4,
    STATE(53), 1,
      sym_duration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(342), 3,
      anon_sym_1,
      anon_sym_4,
      anon_sym_8,
    ACTIONS(344), 5,
      anon_sym_2,
      anon_sym_4_DOT,
      anon_sym_8_DOT,
      anon_sym_16,
      anon_sym_32,
  [1974] = 4,
    STATE(143), 1,
      sym_duration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(346), 3,
      anon_sym_1,
      anon_sym_4,
      anon_sym_8,
    ACTIONS(348), 5,
      anon_sym_2,
      anon_sym_4_DOT,
      anon_sym_8_DOT,
      anon_sym_16,
      anon_sym_32,
  [1994] = 4,
    STATE(25), 1,
      sym_duration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(350), 3,
      anon_sym_1,
      anon_sym_4,
      anon_sym_8,
    ACTIONS(352), 5,
      anon_sym_2,
      anon_sym_4_DOT,
      anon_sym_8_DOT,
      anon_sym_16,
      anon_sym_32,
  [2014] = 5,
    ACTIONS(184), 1,
      sym_note_name,
    ACTIONS(260), 1,
      anon_sym_arp,
    STATE(96), 1,
      sym_arp_expr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(186), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2036] = 4,
    STATE(107), 1,
      sym_duration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(354), 3,
      anon_sym_1,
      anon_sym_4,
      anon_sym_8,
    ACTIONS(356), 5,
      anon_sym_2,
      anon_sym_4_DOT,
      anon_sym_8_DOT,
      anon_sym_16,
      anon_sym_32,
  [2056] = 4,
    STATE(77), 1,
      sym_duration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(354), 3,
      anon_sym_1,
      anon_sym_4,
      anon_sym_8,
    ACTIONS(356), 5,
      anon_sym_2,
      anon_sym_4_DOT,
      anon_sym_8_DOT,
      anon_sym_16,
      anon_sym_32,
  [2076] = 4,
    STATE(23), 1,
      sym_duration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(350), 3,
      anon_sym_1,
      anon_sym_4,
      anon_sym_8,
    ACTIONS(352), 5,
      anon_sym_2,
      anon_sym_4_DOT,
      anon_sym_8_DOT,
      anon_sym_16,
      anon_sym_32,
  [2096] = 4,
    STATE(76), 1,
      sym_duration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(354), 3,
      anon_sym_1,
      anon_sym_4,
      anon_sym_8,
    ACTIONS(356), 5,
      anon_sym_2,
      anon_sym_4_DOT,
      anon_sym_8_DOT,
      anon_sym_16,
      anon_sym_32,
  [2116] = 6,
    ACTIONS(358), 1,
      anon_sym_device,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
    ACTIONS(364), 1,
      anon_sym_note,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(92), 2,
      sym_instrument_property,
      aux_sym_instrument_def_repeat1,
    ACTIONS(362), 3,
      anon_sym_channel,
      anon_sym_gate_normal,
      anon_sym_gate_staccato,
  [2139] = 6,
    ACTIONS(366), 1,
      anon_sym_device,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    ACTIONS(374), 1,
      anon_sym_note,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(90), 2,
      sym_instrument_property,
      aux_sym_instrument_def_repeat1,
    ACTIONS(371), 3,
      anon_sym_channel,
      anon_sym_gate_normal,
      anon_sym_gate_staccato,
  [2162] = 4,
    ACTIONS(244), 1,
      sym_note_name,
    ACTIONS(377), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(246), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2181] = 6,
    ACTIONS(358), 1,
      anon_sym_device,
    ACTIONS(364), 1,
      anon_sym_note,
    ACTIONS(379), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(90), 2,
      sym_instrument_property,
      aux_sym_instrument_def_repeat1,
    ACTIONS(362), 3,
      anon_sym_channel,
      anon_sym_gate_normal,
      anon_sym_gate_staccato,
  [2204] = 4,
    ACTIONS(218), 1,
      sym_note_name,
    ACTIONS(381), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(220), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2223] = 5,
    ACTIONS(383), 1,
      sym_identifier,
    ACTIONS(385), 1,
      anon_sym_RBRACE,
    ACTIONS(387), 1,
      anon_sym_tempo,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(109), 4,
      sym__scene_content,
      sym_scene_slot,
      sym_scene_tempo,
      aux_sym_scene_def_repeat1,
  [2243] = 3,
    ACTIONS(330), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(332), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2259] = 3,
    ACTIONS(300), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(302), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2275] = 3,
    ACTIONS(292), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(294), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2291] = 5,
    ACTIONS(389), 1,
      anon_sym_RBRACE,
    ACTIONS(394), 1,
      anon_sym_note,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(98), 2,
      sym_kit_instrument_property,
      aux_sym_kit_instrument_repeat1,
    ACTIONS(391), 3,
      anon_sym_channel,
      anon_sym_gate_normal,
      anon_sym_gate_staccato,
  [2311] = 3,
    ACTIONS(334), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(336), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2327] = 3,
    ACTIONS(208), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(210), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2343] = 3,
    ACTIONS(168), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(170), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2359] = 3,
    ACTIONS(316), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(318), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2375] = 3,
    ACTIONS(184), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(186), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2391] = 5,
    ACTIONS(397), 1,
      anon_sym_bars,
    ACTIONS(399), 1,
      anon_sym_time,
    ACTIONS(401), 1,
      anon_sym_scale,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(168), 4,
      sym__clip_attr,
      sym_bars_attr,
      sym_time_attr,
      sym_scale_attr,
  [2411] = 3,
    ACTIONS(296), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(298), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2427] = 5,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
    ACTIONS(408), 1,
      anon_sym_tempo,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(106), 4,
      sym__scene_content,
      sym_scene_slot,
      sym_scene_tempo,
      aux_sym_scene_def_repeat1,
  [2447] = 3,
    ACTIONS(320), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(322), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2463] = 3,
    ACTIONS(338), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(340), 6,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_r,
      sym_chord_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2479] = 5,
    ACTIONS(383), 1,
      sym_identifier,
    ACTIONS(387), 1,
      anon_sym_tempo,
    ACTIONS(411), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(106), 4,
      sym__scene_content,
      sym_scene_slot,
      sym_scene_tempo,
      aux_sym_scene_def_repeat1,
  [2499] = 5,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    ACTIONS(417), 1,
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
  [2519] = 5,
    ACTIONS(417), 1,
      anon_sym_note,
    ACTIONS(419), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(98), 2,
      sym_kit_instrument_property,
      aux_sym_kit_instrument_repeat1,
    ACTIONS(415), 3,
      anon_sym_channel,
      anon_sym_gate_normal,
      anon_sym_gate_staccato,
  [2539] = 3,
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
  [2555] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(421), 6,
      anon_sym_device,
      anon_sym_RBRACE,
      anon_sym_channel,
      anon_sym_note,
      anon_sym_gate_normal,
      anon_sym_gate_staccato,
  [2568] = 6,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
    ACTIONS(427), 1,
      sym_probability,
    ACTIONS(429), 1,
      anon_sym_PIPE,
    STATE(142), 1,
      sym_shuffle_expr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_tempo,
      sym_identifier,
  [2589] = 5,
    ACTIONS(431), 1,
      sym_identifier,
    ACTIONS(433), 1,
      anon_sym_device,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(117), 3,
      sym__kit_member,
      sym_kit_instrument,
      aux_sym_kit_def_repeat1,
  [2608] = 5,
    ACTIONS(437), 1,
      sym_identifier,
    ACTIONS(440), 1,
      anon_sym_device,
    ACTIONS(443), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(116), 3,
      sym__kit_member,
      sym_kit_instrument,
      aux_sym_kit_def_repeat1,
  [2627] = 5,
    ACTIONS(431), 1,
      sym_identifier,
    ACTIONS(433), 1,
      anon_sym_device,
    ACTIONS(445), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(116), 3,
      sym__kit_member,
      sym_kit_instrument,
      aux_sym_kit_def_repeat1,
  [2646] = 5,
    ACTIONS(447), 1,
      anon_sym_RBRACK,
    ACTIONS(449), 1,
      anon_sym_r,
    ACTIONS(451), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(121), 2,
      sym_rest,
      aux_sym_chord_repeat1,
  [2664] = 5,
    ACTIONS(449), 1,
      anon_sym_r,
    ACTIONS(451), 1,
      sym_note_name,
    ACTIONS(453), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(121), 2,
      sym_rest,
      aux_sym_chord_repeat1,
  [2682] = 4,
    ACTIONS(455), 1,
      anon_sym_up,
    STATE(217), 1,
      sym_arp_direction,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(457), 3,
      anon_sym_down,
      anon_sym_updown,
      anon_sym_random,
  [2698] = 5,
    ACTIONS(459), 1,
      anon_sym_RBRACK,
    ACTIONS(461), 1,
      anon_sym_r,
    ACTIONS(464), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(121), 2,
      sym_rest,
      aux_sym_chord_repeat1,
  [2716] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(469), 2,
      anon_sym_RBRACE,
      sym_dash_divider,
    ACTIONS(467), 3,
      anon_sym_use,
      anon_sym_resolution,
      sym_identifier,
  [2730] = 3,
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
  [2744] = 5,
    ACTIONS(477), 1,
      anon_sym_RBRACE,
    ACTIONS(479), 1,
      anon_sym_STAR,
    STATE(144), 1,
      sym_weight,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(475), 2,
      anon_sym_tempo,
      sym_identifier,
  [2762] = 4,
    ACTIONS(455), 1,
      anon_sym_up,
    STATE(190), 1,
      sym_arp_direction,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(457), 3,
      anon_sym_down,
      anon_sym_updown,
      anon_sym_random,
  [2778] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(481), 5,
      anon_sym_RBRACE,
      anon_sym_channel,
      anon_sym_note,
      anon_sym_gate_normal,
      anon_sym_gate_staccato,
  [2790] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(485), 2,
      anon_sym_RBRACE,
      sym_dash_divider,
    ACTIONS(483), 3,
      anon_sym_use,
      anon_sym_resolution,
      sym_identifier,
  [2804] = 4,
    ACTIONS(487), 1,
      sym_identifier,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(128), 2,
      sym_session_entry,
      aux_sym_session_def_repeat1,
  [2819] = 4,
    ACTIONS(492), 1,
      anon_sym_RBRACE,
    ACTIONS(494), 1,
      anon_sym_port,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(134), 2,
      sym_device_property,
      aux_sym_device_def_repeat1,
  [2834] = 4,
    ACTIONS(449), 1,
      anon_sym_r,
    ACTIONS(496), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(119), 2,
      sym_rest,
      aux_sym_chord_repeat1,
  [2849] = 4,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
    ACTIONS(500), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(131), 2,
      sym_clip_header,
      aux_sym_clip_def_repeat1,
  [2864] = 4,
    ACTIONS(505), 1,
      anon_sym_LBRACK,
    STATE(152), 1,
      sym_session_modifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(503), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [2879] = 3,
    ACTIONS(507), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(246), 3,
      anon_sym_RBRACK,
      anon_sym_r,
      sym_note_name,
  [2892] = 4,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
    ACTIONS(511), 1,
      anon_sym_port,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(134), 2,
      sym_device_property,
      aux_sym_device_def_repeat1,
  [2907] = 4,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    ACTIONS(516), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(139), 2,
      sym_clip_header,
      aux_sym_clip_def_repeat1,
  [2922] = 4,
    ACTIONS(449), 1,
      anon_sym_r,
    ACTIONS(518), 1,
      sym_note_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(118), 2,
      sym_rest,
      aux_sym_chord_repeat1,
  [2937] = 4,
    ACTIONS(494), 1,
      anon_sym_port,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(129), 2,
      sym_device_property,
      aux_sym_device_def_repeat1,
  [2952] = 4,
    ACTIONS(522), 1,
      sym_identifier,
    ACTIONS(524), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(128), 2,
      sym_session_entry,
      aux_sym_session_def_repeat1,
  [2967] = 4,
    ACTIONS(516), 1,
      anon_sym_LBRACK,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(131), 2,
      sym_clip_header,
      aux_sym_clip_def_repeat1,
  [2982] = 4,
    ACTIONS(522), 1,
      sym_identifier,
    ACTIONS(528), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(138), 2,
      sym_session_entry,
      aux_sym_session_def_repeat1,
  [2997] = 3,
    ACTIONS(532), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(530), 2,
      anon_sym_tempo,
      sym_identifier,
  [3009] = 3,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(534), 2,
      anon_sym_tempo,
      sym_identifier,
  [3021] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(322), 3,
      anon_sym_RBRACK,
      anon_sym_r,
      sym_note_name,
  [3031] = 3,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(538), 2,
      anon_sym_tempo,
      sym_identifier,
  [3043] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(192), 3,
      anon_sym_RBRACK,
      anon_sym_r,
      sym_note_name,
  [3053] = 3,
    ACTIONS(544), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(542), 2,
      anon_sym_device,
      sym_identifier,
  [3065] = 3,
    ACTIONS(548), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(546), 2,
      anon_sym_device,
      sym_identifier,
  [3077] = 3,
    ACTIONS(552), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(550), 2,
      anon_sym_device,
      sym_identifier,
  [3089] = 3,
    ACTIONS(556), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(554), 2,
      anon_sym_tempo,
      sym_identifier,
  [3101] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(558), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [3110] = 3,
    ACTIONS(560), 1,
      anon_sym_repeat,
    ACTIONS(562), 1,
      anon_sym_loop,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3121] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(564), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3130] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(226), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3139] = 3,
    ACTIONS(566), 1,
      sym_identifier,
    ACTIONS(568), 1,
      anon_sym_session,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3150] = 3,
    ACTIONS(570), 1,
      sym_note_name,
    STATE(44), 1,
      sym__scale_spec,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3161] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_RBRACE,
      anon_sym_port,
  [3170] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(574), 2,
      sym_tempo_delta,
      sym_number,
  [3179] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(236), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3188] = 3,
    ACTIONS(576), 1,
      anon_sym_repeat,
    ACTIONS(578), 1,
      anon_sym_loop,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3199] = 3,
    ACTIONS(570), 1,
      sym_note_name,
    STATE(185), 1,
      sym__scale_spec,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3210] = 2,
    ACTIONS(580), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3218] = 2,
    ACTIONS(582), 1,
      sym__scale_separator,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3226] = 2,
    ACTIONS(584), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3234] = 2,
    ACTIONS(586), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3242] = 2,
    ACTIONS(588), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3250] = 2,
    ACTIONS(590), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3258] = 2,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3266] = 2,
    ACTIONS(594), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3274] = 2,
    ACTIONS(596), 1,
      sym_time_signature,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3282] = 2,
    ACTIONS(598), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3290] = 2,
    ACTIONS(600), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3298] = 2,
    ACTIONS(602), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3306] = 2,
    ACTIONS(604), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3314] = 2,
    ACTIONS(606), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3322] = 2,
    ACTIONS(608), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3330] = 2,
    ACTIONS(610), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3338] = 2,
    ACTIONS(612), 1,
      sym_note_literal,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3346] = 2,
    ACTIONS(612), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3354] = 2,
    ACTIONS(612), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3362] = 2,
    ACTIONS(614), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3370] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(616), 1,
      sym_port_value,
    ACTIONS(618), 1,
      sym_comment,
  [3380] = 2,
    ACTIONS(620), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3388] = 2,
    ACTIONS(622), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3396] = 2,
    ACTIONS(624), 1,
      sym_scale_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3404] = 2,
    ACTIONS(626), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3412] = 2,
    ACTIONS(628), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3420] = 2,
    ACTIONS(630), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3428] = 2,
    ACTIONS(632), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3436] = 2,
    ACTIONS(634), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3444] = 2,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3452] = 2,
    ACTIONS(638), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3460] = 2,
    ACTIONS(640), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3468] = 2,
    ACTIONS(642), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3476] = 2,
    ACTIONS(644), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3484] = 2,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3492] = 2,
    ACTIONS(648), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3500] = 2,
    ACTIONS(650), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3508] = 2,
    ACTIONS(652), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3516] = 2,
    ACTIONS(654), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3524] = 2,
    ACTIONS(656), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3532] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(618), 1,
      sym_comment,
    ACTIONS(658), 1,
      sym_include_path,
  [3542] = 2,
    ACTIONS(660), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3550] = 2,
    ACTIONS(662), 1,
      sym_octave,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3558] = 2,
    ACTIONS(664), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3566] = 2,
    ACTIONS(666), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3574] = 2,
    ACTIONS(668), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3582] = 2,
    ACTIONS(670), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3590] = 2,
    ACTIONS(672), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3598] = 2,
    ACTIONS(674), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3606] = 2,
    ACTIONS(676), 1,
      sym_octave,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3614] = 2,
    ACTIONS(678), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3622] = 2,
    ACTIONS(680), 1,
      sym_octave,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3630] = 2,
    ACTIONS(682), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3638] = 2,
    ACTIONS(602), 1,
      sym_note_literal,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3646] = 2,
    ACTIONS(684), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3654] = 2,
    ACTIONS(686), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3662] = 2,
    ACTIONS(688), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3670] = 2,
    ACTIONS(690), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3678] = 2,
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
  [SMALL_STATE(14)] = 481,
  [SMALL_STATE(15)] = 510,
  [SMALL_STATE(16)] = 535,
  [SMALL_STATE(17)] = 568,
  [SMALL_STATE(18)] = 593,
  [SMALL_STATE(19)] = 618,
  [SMALL_STATE(20)] = 644,
  [SMALL_STATE(21)] = 664,
  [SMALL_STATE(22)] = 686,
  [SMALL_STATE(23)] = 720,
  [SMALL_STATE(24)] = 742,
  [SMALL_STATE(25)] = 766,
  [SMALL_STATE(26)] = 788,
  [SMALL_STATE(27)] = 814,
  [SMALL_STATE(28)] = 838,
  [SMALL_STATE(29)] = 861,
  [SMALL_STATE(30)] = 880,
  [SMALL_STATE(31)] = 899,
  [SMALL_STATE(32)] = 918,
  [SMALL_STATE(33)] = 937,
  [SMALL_STATE(34)] = 956,
  [SMALL_STATE(35)] = 975,
  [SMALL_STATE(36)] = 994,
  [SMALL_STATE(37)] = 1013,
  [SMALL_STATE(38)] = 1032,
  [SMALL_STATE(39)] = 1053,
  [SMALL_STATE(40)] = 1074,
  [SMALL_STATE(41)] = 1093,
  [SMALL_STATE(42)] = 1116,
  [SMALL_STATE(43)] = 1135,
  [SMALL_STATE(44)] = 1154,
  [SMALL_STATE(45)] = 1173,
  [SMALL_STATE(46)] = 1192,
  [SMALL_STATE(47)] = 1211,
  [SMALL_STATE(48)] = 1230,
  [SMALL_STATE(49)] = 1261,
  [SMALL_STATE(50)] = 1280,
  [SMALL_STATE(51)] = 1299,
  [SMALL_STATE(52)] = 1330,
  [SMALL_STATE(53)] = 1349,
  [SMALL_STATE(54)] = 1370,
  [SMALL_STATE(55)] = 1389,
  [SMALL_STATE(56)] = 1408,
  [SMALL_STATE(57)] = 1428,
  [SMALL_STATE(58)] = 1448,
  [SMALL_STATE(59)] = 1470,
  [SMALL_STATE(60)] = 1498,
  [SMALL_STATE(61)] = 1518,
  [SMALL_STATE(62)] = 1538,
  [SMALL_STATE(63)] = 1558,
  [SMALL_STATE(64)] = 1578,
  [SMALL_STATE(65)] = 1606,
  [SMALL_STATE(66)] = 1634,
  [SMALL_STATE(67)] = 1654,
  [SMALL_STATE(68)] = 1674,
  [SMALL_STATE(69)] = 1702,
  [SMALL_STATE(70)] = 1730,
  [SMALL_STATE(71)] = 1750,
  [SMALL_STATE(72)] = 1770,
  [SMALL_STATE(73)] = 1790,
  [SMALL_STATE(74)] = 1810,
  [SMALL_STATE(75)] = 1829,
  [SMALL_STATE(76)] = 1854,
  [SMALL_STATE(77)] = 1873,
  [SMALL_STATE(78)] = 1892,
  [SMALL_STATE(79)] = 1912,
  [SMALL_STATE(80)] = 1934,
  [SMALL_STATE(81)] = 1954,
  [SMALL_STATE(82)] = 1974,
  [SMALL_STATE(83)] = 1994,
  [SMALL_STATE(84)] = 2014,
  [SMALL_STATE(85)] = 2036,
  [SMALL_STATE(86)] = 2056,
  [SMALL_STATE(87)] = 2076,
  [SMALL_STATE(88)] = 2096,
  [SMALL_STATE(89)] = 2116,
  [SMALL_STATE(90)] = 2139,
  [SMALL_STATE(91)] = 2162,
  [SMALL_STATE(92)] = 2181,
  [SMALL_STATE(93)] = 2204,
  [SMALL_STATE(94)] = 2223,
  [SMALL_STATE(95)] = 2243,
  [SMALL_STATE(96)] = 2259,
  [SMALL_STATE(97)] = 2275,
  [SMALL_STATE(98)] = 2291,
  [SMALL_STATE(99)] = 2311,
  [SMALL_STATE(100)] = 2327,
  [SMALL_STATE(101)] = 2343,
  [SMALL_STATE(102)] = 2359,
  [SMALL_STATE(103)] = 2375,
  [SMALL_STATE(104)] = 2391,
  [SMALL_STATE(105)] = 2411,
  [SMALL_STATE(106)] = 2427,
  [SMALL_STATE(107)] = 2447,
  [SMALL_STATE(108)] = 2463,
  [SMALL_STATE(109)] = 2479,
  [SMALL_STATE(110)] = 2499,
  [SMALL_STATE(111)] = 2519,
  [SMALL_STATE(112)] = 2539,
  [SMALL_STATE(113)] = 2555,
  [SMALL_STATE(114)] = 2568,
  [SMALL_STATE(115)] = 2589,
  [SMALL_STATE(116)] = 2608,
  [SMALL_STATE(117)] = 2627,
  [SMALL_STATE(118)] = 2646,
  [SMALL_STATE(119)] = 2664,
  [SMALL_STATE(120)] = 2682,
  [SMALL_STATE(121)] = 2698,
  [SMALL_STATE(122)] = 2716,
  [SMALL_STATE(123)] = 2730,
  [SMALL_STATE(124)] = 2744,
  [SMALL_STATE(125)] = 2762,
  [SMALL_STATE(126)] = 2778,
  [SMALL_STATE(127)] = 2790,
  [SMALL_STATE(128)] = 2804,
  [SMALL_STATE(129)] = 2819,
  [SMALL_STATE(130)] = 2834,
  [SMALL_STATE(131)] = 2849,
  [SMALL_STATE(132)] = 2864,
  [SMALL_STATE(133)] = 2879,
  [SMALL_STATE(134)] = 2892,
  [SMALL_STATE(135)] = 2907,
  [SMALL_STATE(136)] = 2922,
  [SMALL_STATE(137)] = 2937,
  [SMALL_STATE(138)] = 2952,
  [SMALL_STATE(139)] = 2967,
  [SMALL_STATE(140)] = 2982,
  [SMALL_STATE(141)] = 2997,
  [SMALL_STATE(142)] = 3009,
  [SMALL_STATE(143)] = 3021,
  [SMALL_STATE(144)] = 3031,
  [SMALL_STATE(145)] = 3043,
  [SMALL_STATE(146)] = 3053,
  [SMALL_STATE(147)] = 3065,
  [SMALL_STATE(148)] = 3077,
  [SMALL_STATE(149)] = 3089,
  [SMALL_STATE(150)] = 3101,
  [SMALL_STATE(151)] = 3110,
  [SMALL_STATE(152)] = 3121,
  [SMALL_STATE(153)] = 3130,
  [SMALL_STATE(154)] = 3139,
  [SMALL_STATE(155)] = 3150,
  [SMALL_STATE(156)] = 3161,
  [SMALL_STATE(157)] = 3170,
  [SMALL_STATE(158)] = 3179,
  [SMALL_STATE(159)] = 3188,
  [SMALL_STATE(160)] = 3199,
  [SMALL_STATE(161)] = 3210,
  [SMALL_STATE(162)] = 3218,
  [SMALL_STATE(163)] = 3226,
  [SMALL_STATE(164)] = 3234,
  [SMALL_STATE(165)] = 3242,
  [SMALL_STATE(166)] = 3250,
  [SMALL_STATE(167)] = 3258,
  [SMALL_STATE(168)] = 3266,
  [SMALL_STATE(169)] = 3274,
  [SMALL_STATE(170)] = 3282,
  [SMALL_STATE(171)] = 3290,
  [SMALL_STATE(172)] = 3298,
  [SMALL_STATE(173)] = 3306,
  [SMALL_STATE(174)] = 3314,
  [SMALL_STATE(175)] = 3322,
  [SMALL_STATE(176)] = 3330,
  [SMALL_STATE(177)] = 3338,
  [SMALL_STATE(178)] = 3346,
  [SMALL_STATE(179)] = 3354,
  [SMALL_STATE(180)] = 3362,
  [SMALL_STATE(181)] = 3370,
  [SMALL_STATE(182)] = 3380,
  [SMALL_STATE(183)] = 3388,
  [SMALL_STATE(184)] = 3396,
  [SMALL_STATE(185)] = 3404,
  [SMALL_STATE(186)] = 3412,
  [SMALL_STATE(187)] = 3420,
  [SMALL_STATE(188)] = 3428,
  [SMALL_STATE(189)] = 3436,
  [SMALL_STATE(190)] = 3444,
  [SMALL_STATE(191)] = 3452,
  [SMALL_STATE(192)] = 3460,
  [SMALL_STATE(193)] = 3468,
  [SMALL_STATE(194)] = 3476,
  [SMALL_STATE(195)] = 3484,
  [SMALL_STATE(196)] = 3492,
  [SMALL_STATE(197)] = 3500,
  [SMALL_STATE(198)] = 3508,
  [SMALL_STATE(199)] = 3516,
  [SMALL_STATE(200)] = 3524,
  [SMALL_STATE(201)] = 3532,
  [SMALL_STATE(202)] = 3542,
  [SMALL_STATE(203)] = 3550,
  [SMALL_STATE(204)] = 3558,
  [SMALL_STATE(205)] = 3566,
  [SMALL_STATE(206)] = 3574,
  [SMALL_STATE(207)] = 3582,
  [SMALL_STATE(208)] = 3590,
  [SMALL_STATE(209)] = 3598,
  [SMALL_STATE(210)] = 3606,
  [SMALL_STATE(211)] = 3614,
  [SMALL_STATE(212)] = 3622,
  [SMALL_STATE(213)] = 3630,
  [SMALL_STATE(214)] = 3638,
  [SMALL_STATE(215)] = 3646,
  [SMALL_STATE(216)] = 3654,
  [SMALL_STATE(217)] = 3662,
  [SMALL_STATE(218)] = 3670,
  [SMALL_STATE(219)] = 3678,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(205),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(202),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_melody_line_repeat1, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_melody_line_repeat1, 2, 0, 0),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_melody_line_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_melody_line_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_melody_line_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_melody_line_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_melody_line_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_melody_line_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_melody_line, 2, 0, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_melody_line, 2, 0, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pitched_note, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pitched_note, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_name, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_name, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_melody_line_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_melody_line_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_melody_line_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_melody_line_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_melody_line_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_melody_line_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pitched_note, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pitched_note, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_play_stmt, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_play_stmt, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__oct_dur_suffix, 2, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__oct_dur_suffix, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_name, 2, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_name, 2, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scale_spec, 3, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration, 1, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 1, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__oct_dur_suffix, 4, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__oct_dur_suffix, 4, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord, 4, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 4, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stop_stmt, 1, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stop_stmt, 1, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_melody_group, 3, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_melody_group, 3, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_device_def, 5, 0, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_session_modifier, 4, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tempo_stmt, 2, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_stmt, 2, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip_def, 6, 0, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stop_stmt, 2, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_session_modifier, 3, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_session_def, 5, 0, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_def, 5, 0, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip_def, 5, 0, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest, 1, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest, 1, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kit_def, 5, 0, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instrument_def, 5, 0, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scale_stmt, 2, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_device_def, 4, 0, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_def, 4, 0, 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instrument_def, 4, 0, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_play_stmt, 4, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kit_def, 4, 0, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip_def, 4, 0, 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_session_def, 4, 0, 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_melody_group, 5, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_melody_group, 5, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_clip_def_repeat2, 2, 0, 0), SHIFT_REPEAT(9),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clip_def_repeat2, 2, 0, 0),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clip_def_repeat2, 2, 0, 0), SHIFT_REPEAT(59),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_clip_def_repeat2, 2, 0, 0), SHIFT_REPEAT(161),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_clip_def_repeat2, 2, 0, 0), SHIFT_REPEAT(171),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_articulation, 2, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_articulation, 2, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pitched_note, 3, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pitched_note, 3, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_name, 3, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_name, 3, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_articulation, 1, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_articulation, 1, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest, 3, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest, 3, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bar_jump, 2, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bar_jump, 2, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord, 5, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 5, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arp_expr, 6, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arp_expr, 6, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instrument_def_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instrument_def_repeat1, 2, 0, 0),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instrument_def_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instrument_def_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_kit_instrument_repeat1, 2, 0, 0),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_kit_instrument_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_kit_instrument_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_def_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scene_def_repeat1, 2, 0, 0),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_def_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instrument_property, 2, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_slot, 1, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_slot, 1, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_kit_def_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_kit_def_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_kit_def_repeat1, 2, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_stmt, 2, 0, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_stmt, 2, 0, 2),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resolution_stmt, 2, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resolution_stmt, 2, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shuffle_expr, 2, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shuffle_expr, 2, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kit_instrument_property, 2, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drum_line, 2, 0, 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drum_line, 2, 0, 3),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_session_def_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_session_def_repeat1, 2, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clip_def_repeat1, 2, 0, 0),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clip_def_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_session_entry, 1, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_device_def_repeat1, 2, 0, 0),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_device_def_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_tempo, 2, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_tempo, 2, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_slot, 2, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_slot, 2, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shuffle_expr, 3, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shuffle_expr, 3, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__kit_member, 2, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kit_member, 2, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kit_instrument, 4, 0, 4),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kit_instrument, 4, 0, 4),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kit_instrument, 3, 0, 4),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kit_instrument, 3, 0, 4),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_weight, 2, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_weight, 2, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip_header, 3, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_session_entry, 2, 0, 0),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_device_property, 2, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arp_direction, 1, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bars_attr, 2, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_attr, 2, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scale_attr, 2, 0, 0),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [648] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_block_comment = 0,
  ts_external_token__scale_separator = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_block_comment] = sym_block_comment,
  [ts_external_token__scale_separator] = sym__scale_separator,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_block_comment] = true,
    [ts_external_token__scale_separator] = true,
  },
  [2] = {
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
