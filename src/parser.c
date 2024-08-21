#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 98
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 1,
  anon_sym_DQUOTE_DQUOTE_DQUOTE_LF = 2,
  sym_top_summary = 3,
  aux_sym_summary_line_token1 = 4,
  anon_sym_Args_COLON_LF = 5,
  anon_sym_COLON = 6,
  sym_arg_name = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  aux_sym_type_name_token1 = 10,
  anon_sym_COMMAoptional = 11,
  anon_sym_LF = 12,
  aux_sym_element_description_token1 = 13,
  aux_sym_element_description_continuation_token1 = 14,
  anon_sym_Returns_COLON_LF = 15,
  aux_sym_return_line_token1 = 16,
  anon_sym_Raises_COLON_LF = 17,
  anon_sym_Examples_COLON_LF = 18,
  aux_sym_example_line_token1 = 19,
  anon_sym_Notes_COLON_LF = 20,
  anon_sym_Attributes_COLON_LF = 21,
  sym_docstring = 22,
  sym_summary = 23,
  sym_summary_line = 24,
  sym_args_section = 25,
  sym_arg = 26,
  sym_type_annotation = 27,
  sym_type_name = 28,
  sym_element_description = 29,
  sym_return_section = 30,
  sym_return_line = 31,
  sym_raises_section = 32,
  sym_raise_info = 33,
  sym_raise_description = 34,
  sym_examples_section = 35,
  sym_example_line = 36,
  sym_notes_section = 37,
  sym_note_line = 38,
  sym_attributes_section = 39,
  sym_attribute_line = 40,
  aux_sym_summary_repeat1 = 41,
  aux_sym_args_section_repeat1 = 42,
  aux_sym_element_description_repeat1 = 43,
  aux_sym_return_section_repeat1 = 44,
  aux_sym_raises_section_repeat1 = 45,
  aux_sym_raise_description_repeat1 = 46,
  aux_sym_examples_section_repeat1 = 47,
  aux_sym_notes_section_repeat1 = 48,
  aux_sym_attributes_section_repeat1 = 49,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE_LF] = "\"\"\"\n",
  [sym_top_summary] = "top_summary",
  [aux_sym_summary_line_token1] = "summary_line_token1",
  [anon_sym_Args_COLON_LF] = "Args:\n",
  [anon_sym_COLON] = ":",
  [sym_arg_name] = "arg_name",
  [anon_sym_LPAREN] = " (",
  [anon_sym_RPAREN] = ")",
  [aux_sym_type_name_token1] = "type_name_token1",
  [anon_sym_COMMAoptional] = ", optional",
  [anon_sym_LF] = "\n",
  [aux_sym_element_description_token1] = "element_description_token1",
  [aux_sym_element_description_continuation_token1] = "element_description_continuation_token1",
  [anon_sym_Returns_COLON_LF] = "Returns:\n",
  [aux_sym_return_line_token1] = "return_line_token1",
  [anon_sym_Raises_COLON_LF] = "Raises:\n",
  [anon_sym_Examples_COLON_LF] = "Examples:\n",
  [aux_sym_example_line_token1] = "example_line_token1",
  [anon_sym_Notes_COLON_LF] = "Notes:\n",
  [anon_sym_Attributes_COLON_LF] = "Attributes:\n",
  [sym_docstring] = "docstring",
  [sym_summary] = "summary",
  [sym_summary_line] = "summary_line",
  [sym_args_section] = "args_section",
  [sym_arg] = "arg",
  [sym_type_annotation] = "type_annotation",
  [sym_type_name] = "type_name",
  [sym_element_description] = "element_description",
  [sym_return_section] = "return_section",
  [sym_return_line] = "return_line",
  [sym_raises_section] = "raises_section",
  [sym_raise_info] = "raise_info",
  [sym_raise_description] = "raise_description",
  [sym_examples_section] = "examples_section",
  [sym_example_line] = "example_line",
  [sym_notes_section] = "notes_section",
  [sym_note_line] = "note_line",
  [sym_attributes_section] = "attributes_section",
  [sym_attribute_line] = "attribute_line",
  [aux_sym_summary_repeat1] = "summary_repeat1",
  [aux_sym_args_section_repeat1] = "args_section_repeat1",
  [aux_sym_element_description_repeat1] = "element_description_repeat1",
  [aux_sym_return_section_repeat1] = "return_section_repeat1",
  [aux_sym_raises_section_repeat1] = "raises_section_repeat1",
  [aux_sym_raise_description_repeat1] = "raise_description_repeat1",
  [aux_sym_examples_section_repeat1] = "examples_section_repeat1",
  [aux_sym_notes_section_repeat1] = "notes_section_repeat1",
  [aux_sym_attributes_section_repeat1] = "attributes_section_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE_LF] = anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
  [sym_top_summary] = sym_top_summary,
  [aux_sym_summary_line_token1] = aux_sym_summary_line_token1,
  [anon_sym_Args_COLON_LF] = anon_sym_Args_COLON_LF,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_arg_name] = sym_arg_name,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_type_name_token1] = aux_sym_type_name_token1,
  [anon_sym_COMMAoptional] = anon_sym_COMMAoptional,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_element_description_token1] = aux_sym_element_description_token1,
  [aux_sym_element_description_continuation_token1] = aux_sym_element_description_continuation_token1,
  [anon_sym_Returns_COLON_LF] = anon_sym_Returns_COLON_LF,
  [aux_sym_return_line_token1] = aux_sym_return_line_token1,
  [anon_sym_Raises_COLON_LF] = anon_sym_Raises_COLON_LF,
  [anon_sym_Examples_COLON_LF] = anon_sym_Examples_COLON_LF,
  [aux_sym_example_line_token1] = aux_sym_example_line_token1,
  [anon_sym_Notes_COLON_LF] = anon_sym_Notes_COLON_LF,
  [anon_sym_Attributes_COLON_LF] = anon_sym_Attributes_COLON_LF,
  [sym_docstring] = sym_docstring,
  [sym_summary] = sym_summary,
  [sym_summary_line] = sym_summary_line,
  [sym_args_section] = sym_args_section,
  [sym_arg] = sym_arg,
  [sym_type_annotation] = sym_type_annotation,
  [sym_type_name] = sym_type_name,
  [sym_element_description] = sym_element_description,
  [sym_return_section] = sym_return_section,
  [sym_return_line] = sym_return_line,
  [sym_raises_section] = sym_raises_section,
  [sym_raise_info] = sym_raise_info,
  [sym_raise_description] = sym_raise_description,
  [sym_examples_section] = sym_examples_section,
  [sym_example_line] = sym_example_line,
  [sym_notes_section] = sym_notes_section,
  [sym_note_line] = sym_note_line,
  [sym_attributes_section] = sym_attributes_section,
  [sym_attribute_line] = sym_attribute_line,
  [aux_sym_summary_repeat1] = aux_sym_summary_repeat1,
  [aux_sym_args_section_repeat1] = aux_sym_args_section_repeat1,
  [aux_sym_element_description_repeat1] = aux_sym_element_description_repeat1,
  [aux_sym_return_section_repeat1] = aux_sym_return_section_repeat1,
  [aux_sym_raises_section_repeat1] = aux_sym_raises_section_repeat1,
  [aux_sym_raise_description_repeat1] = aux_sym_raise_description_repeat1,
  [aux_sym_examples_section_repeat1] = aux_sym_examples_section_repeat1,
  [aux_sym_notes_section_repeat1] = aux_sym_notes_section_repeat1,
  [aux_sym_attributes_section_repeat1] = aux_sym_attributes_section_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_top_summary] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_summary_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Args_COLON_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_arg_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMAoptional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_element_description_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_element_description_continuation_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Returns_COLON_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_return_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Raises_COLON_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Examples_COLON_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_example_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Notes_COLON_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Attributes_COLON_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_docstring] = {
    .visible = true,
    .named = true,
  },
  [sym_summary] = {
    .visible = true,
    .named = true,
  },
  [sym_summary_line] = {
    .visible = true,
    .named = true,
  },
  [sym_args_section] = {
    .visible = true,
    .named = true,
  },
  [sym_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_type_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_element_description] = {
    .visible = true,
    .named = true,
  },
  [sym_return_section] = {
    .visible = true,
    .named = true,
  },
  [sym_return_line] = {
    .visible = true,
    .named = true,
  },
  [sym_raises_section] = {
    .visible = true,
    .named = true,
  },
  [sym_raise_info] = {
    .visible = true,
    .named = true,
  },
  [sym_raise_description] = {
    .visible = true,
    .named = true,
  },
  [sym_examples_section] = {
    .visible = true,
    .named = true,
  },
  [sym_example_line] = {
    .visible = true,
    .named = true,
  },
  [sym_notes_section] = {
    .visible = true,
    .named = true,
  },
  [sym_note_line] = {
    .visible = true,
    .named = true,
  },
  [sym_attributes_section] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_line] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_summary_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_args_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_element_description_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_return_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_raises_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_raise_description_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_examples_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_notes_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attributes_section_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
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
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
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
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(201);
      ADVANCE_MAP(
        ' ', 81,
        '"', 85,
        ')', 354,
        ',', 74,
        ':', 256,
        'A', 374,
        'E', 377,
        'N', 366,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(82);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(392);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(392);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(392);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(392);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(390);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(390);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(390);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(390);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(393);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13);
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == 'A') ADVANCE(236);
      if (lookahead == 'E') ADVANCE(252);
      if (lookahead == 'N') ADVANCE(234);
      if (lookahead == 'R') ADVANCE(221);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(203);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(389);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(387);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(387);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(387);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(381);
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == 'A') ADVANCE(194);
      if (lookahead == 'E') ADVANCE(198);
      if (lookahead == 'N') ADVANCE(179);
      if (lookahead == 'R') ADVANCE(162);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(70);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'b') ADVANCE(56);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'i') ADVANCE(51);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'm') ADVANCE(45);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 53:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 55:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 56:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'u') ADVANCE(55);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 57:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'x') ADVANCE(34);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 59:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == 'A') ADVANCE(287);
      if (lookahead == 'E') ADVANCE(291);
      if (lookahead == 'N') ADVANCE(274);
      if (lookahead == 'R') ADVANCE(262);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(65);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 60:
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '"') ADVANCE(61);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 61:
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 62:
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '*') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 63:
      if (lookahead == '\n') ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 65:
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == 'A') ADVANCE(287);
      if (lookahead == 'E') ADVANCE(291);
      if (lookahead == 'N') ADVANCE(274);
      if (lookahead == 'R') ADVANCE(262);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(65);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 66:
      if (lookahead == '\n') SKIP(66);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 67:
      if (lookahead == '\n') ADVANCE(380);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(67);
      END_STATE();
    case 68:
      if (lookahead == '\n') SKIP(69);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'A') ADVANCE(137);
      if (lookahead == 'E') ADVANCE(153);
      if (lookahead == 'N') ADVANCE(135);
      if (lookahead == 'R') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 69:
      if (lookahead == '\n') SKIP(69);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == 'A') ADVANCE(137);
      if (lookahead == 'E') ADVANCE(153);
      if (lookahead == 'N') ADVANCE(135);
      if (lookahead == 'R') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 70:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == 'A') ADVANCE(194);
      if (lookahead == 'E') ADVANCE(198);
      if (lookahead == 'N') ADVANCE(179);
      if (lookahead == 'R') ADVANCE(162);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 71:
      if (lookahead == '\n') ADVANCE(382);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'E') ADVANCE(57);
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == 'R') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 72:
      if (lookahead == '\n') ADVANCE(382);
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == 'A') ADVANCE(194);
      if (lookahead == 'E') ADVANCE(198);
      if (lookahead == 'N') ADVANCE(179);
      if (lookahead == 'R') ADVANCE(162);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 73:
      if (lookahead == '\n') ADVANCE(382);
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == 'A') ADVANCE(194);
      if (lookahead == 'E') ADVANCE(198);
      if (lookahead == 'N') ADVANCE(179);
      if (lookahead == 'R') ADVANCE(162);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 74:
      if (lookahead == ' ') ADVANCE(177);
      END_STATE();
    case 75:
      ADVANCE_MAP(
        ' ', 75,
        '"', 85,
        '(', 353,
        ')', 354,
        '*', 115,
        ',', 74,
        ':', 256,
        'A', 312,
        'E', 315,
        'N', 304,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(77);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 76:
      ADVANCE_MAP(
        ' ', 75,
        '"', 85,
        '(', 353,
        ')', 354,
        ',', 74,
        ':', 256,
        'A', 374,
        'E', 377,
        'N', 366,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(77);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 77:
      ADVANCE_MAP(
        ' ', 75,
        '"', 85,
        ')', 354,
        '*', 115,
        ',', 74,
        ':', 256,
        'A', 312,
        'E', 315,
        'N', 304,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(77);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 78:
      ADVANCE_MAP(
        ' ', 75,
        '"', 85,
        ')', 354,
        ',', 74,
        ':', 256,
        'A', 374,
        'E', 377,
        'N', 366,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(77);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 79:
      ADVANCE_MAP(
        ' ', 76,
        '"', 85,
        '(', 353,
        ')', 354,
        ',', 74,
        ':', 256,
        'A', 374,
        'E', 377,
        'N', 366,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(78);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 80:
      ADVANCE_MAP(
        ' ', 76,
        '"', 85,
        ')', 354,
        ',', 74,
        ':', 256,
        'A', 374,
        'E', 377,
        'N', 366,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(78);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 81:
      ADVANCE_MAP(
        ' ', 79,
        '"', 85,
        '(', 353,
        ')', 354,
        ',', 74,
        ':', 256,
        'A', 374,
        'E', 377,
        'N', 366,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(80);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 82:
      ADVANCE_MAP(
        ' ', 79,
        '"', 85,
        ')', 354,
        ',', 74,
        ':', 256,
        'A', 374,
        'E', 377,
        'N', 366,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(80);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 83:
      if (lookahead == '"') ADVANCE(202);
      END_STATE();
    case 84:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 85:
      if (lookahead == '"') ADVANCE(83);
      END_STATE();
    case 86:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 87:
      if (lookahead == '"') ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == '"') ADVANCE(14);
      END_STATE();
    case 89:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == 'A') ADVANCE(347);
      if (lookahead == 'E') ADVANCE(351);
      if (lookahead == 'N') ADVANCE(334);
      if (lookahead == 'R') ADVANCE(322);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(59);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 90:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == 'A') ADVANCE(347);
      if (lookahead == 'E') ADVANCE(351);
      if (lookahead == 'N') ADVANCE(334);
      if (lookahead == 'R') ADVANCE(322);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(89);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 91:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == 'A') ADVANCE(347);
      if (lookahead == 'E') ADVANCE(351);
      if (lookahead == 'N') ADVANCE(334);
      if (lookahead == 'R') ADVANCE(322);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(90);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 92:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == 'A') ADVANCE(347);
      if (lookahead == 'E') ADVANCE(351);
      if (lookahead == 'N') ADVANCE(334);
      if (lookahead == 'R') ADVANCE(322);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(91);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 93:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == 'A') ADVANCE(347);
      if (lookahead == 'E') ADVANCE(351);
      if (lookahead == 'N') ADVANCE(334);
      if (lookahead == 'R') ADVANCE(322);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(93);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 94:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == 'A') ADVANCE(374);
      if (lookahead == 'E') ADVANCE(377);
      if (lookahead == 'N') ADVANCE(366);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(94);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 95:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == 'A') ADVANCE(374);
      if (lookahead == 'E') ADVANCE(377);
      if (lookahead == 'N') ADVANCE(366);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(386);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 96:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == 'A') ADVANCE(374);
      if (lookahead == 'E') ADVANCE(377);
      if (lookahead == 'N') ADVANCE(366);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 97:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == 'A') ADVANCE(374);
      if (lookahead == 'E') ADVANCE(377);
      if (lookahead == 'N') ADVANCE(366);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(96);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 98:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == 'A') ADVANCE(374);
      if (lookahead == 'E') ADVANCE(377);
      if (lookahead == 'N') ADVANCE(366);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(97);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 99:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == 'A') ADVANCE(374);
      if (lookahead == 'E') ADVANCE(377);
      if (lookahead == 'N') ADVANCE(366);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(98);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 100:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == 'A') ADVANCE(374);
      if (lookahead == 'E') ADVANCE(377);
      if (lookahead == 'N') ADVANCE(366);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(99);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 101:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == 'A') ADVANCE(374);
      if (lookahead == 'E') ADVANCE(377);
      if (lookahead == 'N') ADVANCE(366);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(100);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 102:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == 'A') ADVANCE(374);
      if (lookahead == 'E') ADVANCE(377);
      if (lookahead == 'N') ADVANCE(366);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 103:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == 'A') ADVANCE(194);
      if (lookahead == 'E') ADVANCE(198);
      if (lookahead == 'N') ADVANCE(179);
      if (lookahead == 'R') ADVANCE(163);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 104:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == 'A') ADVANCE(194);
      if (lookahead == 'E') ADVANCE(198);
      if (lookahead == 'N') ADVANCE(179);
      if (lookahead == 'R') ADVANCE(163);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 105:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == 'A') ADVANCE(194);
      if (lookahead == 'E') ADVANCE(198);
      if (lookahead == 'N') ADVANCE(179);
      if (lookahead == 'R') ADVANCE(163);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(104);
      END_STATE();
    case 106:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == 'A') ADVANCE(194);
      if (lookahead == 'E') ADVANCE(198);
      if (lookahead == 'N') ADVANCE(179);
      if (lookahead == 'R') ADVANCE(163);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 107:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == 'A') ADVANCE(194);
      if (lookahead == 'E') ADVANCE(198);
      if (lookahead == 'N') ADVANCE(179);
      if (lookahead == 'R') ADVANCE(163);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 108:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == 'A') ADVANCE(194);
      if (lookahead == 'E') ADVANCE(198);
      if (lookahead == 'N') ADVANCE(179);
      if (lookahead == 'R') ADVANCE(163);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 109:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == 'A') ADVANCE(194);
      if (lookahead == 'E') ADVANCE(198);
      if (lookahead == 'N') ADVANCE(179);
      if (lookahead == 'R') ADVANCE(163);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 110:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == 'A') ADVANCE(194);
      if (lookahead == 'E') ADVANCE(198);
      if (lookahead == 'N') ADVANCE(179);
      if (lookahead == 'R') ADVANCE(163);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(109);
      END_STATE();
    case 111:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == 'A') ADVANCE(194);
      if (lookahead == 'N') ADVANCE(179);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(391);
      END_STATE();
    case 112:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == 'A') ADVANCE(194);
      if (lookahead == 'N') ADVANCE(179);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 113:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == 'A') ADVANCE(194);
      if (lookahead == 'N') ADVANCE(179);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(112);
      END_STATE();
    case 114:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == 'A') ADVANCE(194);
      if (lookahead == 'N') ADVANCE(179);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 115:
      if (lookahead == '*') ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 116:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 117:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 118:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 119:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 120:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 121:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 122:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 123:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 124:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'b') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 125:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 126:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 127:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 128:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 129:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'g') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 130:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 131:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 132:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 133:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'm') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 134:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 135:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 136:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'p') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 137:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead == 't') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 138:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 139:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 140:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 141:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 142:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 143:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 144:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 145:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 's') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 146:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 147:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 148:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 149:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 150:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 151:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'u') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 152:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'u') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 153:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == 'x') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 155:
      if (lookahead == ':') ADVANCE(1);
      END_STATE();
    case 156:
      if (lookahead == ':') ADVANCE(5);
      END_STATE();
    case 157:
      if (lookahead == ':') ADVANCE(9);
      END_STATE();
    case 158:
      if (lookahead == ':') ADVANCE(19);
      END_STATE();
    case 159:
      if (lookahead == ':') ADVANCE(23);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 164:
      if (lookahead == 'b') ADVANCE(197);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(379);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 174:
      if (lookahead == 'm') ADVANCE(181);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 180:
      if (lookahead == 'p') ADVANCE(190);
      END_STATE();
    case 181:
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 186:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 188:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 196:
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 197:
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 198:
      if (lookahead == 'x') ADVANCE(161);
      END_STATE();
    case 199:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 200:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE_LF);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_top_summary);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == '\n') ADVANCE(392);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == '\n') ADVANCE(390);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == '\n') ADVANCE(387);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == 'A') ADVANCE(236);
      if (lookahead == 'E') ADVANCE(252);
      if (lookahead == 'N') ADVANCE(234);
      if (lookahead == 'R') ADVANCE(221);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(254);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == '"') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == ':') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 'a') ADVANCE(230);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 'b') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 'e') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 'g') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 'l') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 'm') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 'n') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 'o') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 'p') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 'r') ADVANCE(228);
      if (lookahead == 't') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 'r') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 'r') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 's') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 's') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 's') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 's') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 's') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 's') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 't') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 't') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 't') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 'u') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 'u') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == 'x') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_summary_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_Args_COLON_LF);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == ':') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == ':') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == ':') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == ':') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == ':') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'e') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == 'a') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == 'b') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == 'e') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == 'e') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == 'e') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == 'i') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == 'i') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == 'l') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == 'm') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == 'n') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == 'o') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == 'p') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == 'r') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == 'r') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == 's') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == 's') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == 's') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == 's') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == 's') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == 's') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == 't') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == 't') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == 't') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == 't') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == 't') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == 'u') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == 'u') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == 'x') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '\n') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == ':') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == ':') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == ':') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == 'a') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == 'b') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == 'e') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == 'e') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == 'e') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == 'i') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == 'l') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == 'm') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == 'o') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == 'p') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == 'r') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == 's') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == 's') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == 's') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == 't') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == 't') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == 't') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == 't') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == 'u') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == 'x') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '.') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == ':') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == ':') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == ':') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == ':') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == ':') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'a') ADVANCE(329);
      if (lookahead == 'e') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'a') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'b') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'e') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'e') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'e') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'e') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'i') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'i') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'l') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'm') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'n') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'o') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'p') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'r') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'r') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 's') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 's') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 's') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 's') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 's') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 's') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 't') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 't') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 't') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 't') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 't') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'u') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'u') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'x') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_arg_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == ':') ADVANCE(1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 'a') ADVANCE(365);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 'b') ADVANCE(376);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 'e') ADVANCE(369);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 'e') ADVANCE(370);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 'e') ADVANCE(371);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 'i') ADVANCE(359);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 'l') ADVANCE(361);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 'm') ADVANCE(367);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 'o') ADVANCE(373);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 'r') ADVANCE(363);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 's') ADVANCE(355);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 's') ADVANCE(356);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 's') ADVANCE(357);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 't') ADVANCE(368);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 't') ADVANCE(360);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 't') ADVANCE(372);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 't') ADVANCE(362);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 'u') ADVANCE(375);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 'x') ADVANCE(358);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_COMMAoptional);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(383);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(382);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(382);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_element_description_token1);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_element_description_token1);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == 'A') ADVANCE(287);
      if (lookahead == 'E') ADVANCE(291);
      if (lookahead == 'N') ADVANCE(274);
      if (lookahead == 'R') ADVANCE(262);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(65);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_element_description_continuation_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_Returns_COLON_LF);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_return_line_token1);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_Raises_COLON_LF);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_Examples_COLON_LF);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_example_line_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_Notes_COLON_LF);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_Attributes_COLON_LF);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 13},
  [3] = {.lex_state = 69},
  [4] = {.lex_state = 69},
  [5] = {.lex_state = 69},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 26},
  [10] = {.lex_state = 26},
  [11] = {.lex_state = 69},
  [12] = {.lex_state = 106},
  [13] = {.lex_state = 69},
  [14] = {.lex_state = 110},
  [15] = {.lex_state = 106},
  [16] = {.lex_state = 69},
  [17] = {.lex_state = 106},
  [18] = {.lex_state = 110},
  [19] = {.lex_state = 110},
  [20] = {.lex_state = 26},
  [21] = {.lex_state = 94},
  [22] = {.lex_state = 94},
  [23] = {.lex_state = 94},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 26},
  [26] = {.lex_state = 69},
  [27] = {.lex_state = 110},
  [28] = {.lex_state = 102},
  [29] = {.lex_state = 102},
  [30] = {.lex_state = 69},
  [31] = {.lex_state = 69},
  [32] = {.lex_state = 69},
  [33] = {.lex_state = 110},
  [34] = {.lex_state = 102},
  [35] = {.lex_state = 114},
  [36] = {.lex_state = 114},
  [37] = {.lex_state = 102},
  [38] = {.lex_state = 114},
  [39] = {.lex_state = 114},
  [40] = {.lex_state = 69},
  [41] = {.lex_state = 94},
  [42] = {.lex_state = 69},
  [43] = {.lex_state = 114},
  [44] = {.lex_state = 69},
  [45] = {.lex_state = 69},
  [46] = {.lex_state = 114},
  [47] = {.lex_state = 69},
  [48] = {.lex_state = 114},
  [49] = {.lex_state = 114},
  [50] = {.lex_state = 114},
  [51] = {.lex_state = 114},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 114},
  [55] = {.lex_state = 69},
  [56] = {.lex_state = 69},
  [57] = {.lex_state = 69},
  [58] = {.lex_state = 69},
  [59] = {.lex_state = 69},
  [60] = {.lex_state = 69},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 114},
  [63] = {.lex_state = 66},
  [64] = {.lex_state = 199},
  [65] = {.lex_state = 66},
  [66] = {.lex_state = 66},
  [67] = {.lex_state = 69},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 69},
  [71] = {.lex_state = 67},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 69},
  [74] = {.lex_state = 67},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 69},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 67},
  [80] = {.lex_state = 67},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 67},
  [83] = {.lex_state = 66},
  [84] = {.lex_state = 69},
  [85] = {.lex_state = 66},
  [86] = {.lex_state = 66},
  [87] = {.lex_state = 66},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 69},
  [91] = {.lex_state = 69},
  [92] = {.lex_state = 67},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 69},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_arg_name] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_type_name_token1] = ACTIONS(1),
    [anon_sym_COMMAoptional] = ACTIONS(1),
    [anon_sym_Examples_COLON_LF] = ACTIONS(1),
    [anon_sym_Notes_COLON_LF] = ACTIONS(1),
    [anon_sym_Attributes_COLON_LF] = ACTIONS(1),
  },
  [1] = {
    [sym_docstring] = STATE(96),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(5), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
    ACTIONS(7), 1,
      aux_sym_summary_line_token1,
    ACTIONS(9), 1,
      anon_sym_Args_COLON_LF,
    ACTIONS(11), 1,
      anon_sym_Returns_COLON_LF,
    ACTIONS(13), 1,
      anon_sym_Raises_COLON_LF,
    ACTIONS(15), 1,
      anon_sym_Examples_COLON_LF,
    ACTIONS(17), 1,
      anon_sym_Notes_COLON_LF,
    ACTIONS(19), 1,
      anon_sym_Attributes_COLON_LF,
    STATE(3), 1,
      sym_summary,
    STATE(4), 1,
      sym_args_section,
    STATE(8), 1,
      sym_summary_line,
    STATE(13), 1,
      sym_return_section,
    STATE(32), 1,
      sym_raises_section,
    STATE(45), 1,
      sym_examples_section,
    STATE(59), 1,
      sym_notes_section,
    STATE(91), 1,
      sym_attributes_section,
  [49] = 13,
    ACTIONS(21), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
    ACTIONS(23), 1,
      anon_sym_Args_COLON_LF,
    ACTIONS(25), 1,
      anon_sym_Returns_COLON_LF,
    ACTIONS(27), 1,
      anon_sym_Raises_COLON_LF,
    ACTIONS(29), 1,
      anon_sym_Examples_COLON_LF,
    ACTIONS(31), 1,
      anon_sym_Notes_COLON_LF,
    ACTIONS(33), 1,
      anon_sym_Attributes_COLON_LF,
    STATE(5), 1,
      sym_args_section,
    STATE(16), 1,
      sym_return_section,
    STATE(26), 1,
      sym_raises_section,
    STATE(42), 1,
      sym_examples_section,
    STATE(56), 1,
      sym_notes_section,
    STATE(67), 1,
      sym_attributes_section,
  [89] = 11,
    ACTIONS(21), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
    ACTIONS(25), 1,
      anon_sym_Returns_COLON_LF,
    ACTIONS(27), 1,
      anon_sym_Raises_COLON_LF,
    ACTIONS(29), 1,
      anon_sym_Examples_COLON_LF,
    ACTIONS(31), 1,
      anon_sym_Notes_COLON_LF,
    ACTIONS(33), 1,
      anon_sym_Attributes_COLON_LF,
    STATE(16), 1,
      sym_return_section,
    STATE(26), 1,
      sym_raises_section,
    STATE(42), 1,
      sym_examples_section,
    STATE(56), 1,
      sym_notes_section,
    STATE(67), 1,
      sym_attributes_section,
  [123] = 11,
    ACTIONS(25), 1,
      anon_sym_Returns_COLON_LF,
    ACTIONS(27), 1,
      anon_sym_Raises_COLON_LF,
    ACTIONS(29), 1,
      anon_sym_Examples_COLON_LF,
    ACTIONS(31), 1,
      anon_sym_Notes_COLON_LF,
    ACTIONS(33), 1,
      anon_sym_Attributes_COLON_LF,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
    STATE(11), 1,
      sym_return_section,
    STATE(30), 1,
      sym_raises_section,
    STATE(40), 1,
      sym_examples_section,
    STATE(57), 1,
      sym_notes_section,
    STATE(70), 1,
      sym_attributes_section,
  [157] = 3,
    ACTIONS(39), 1,
      aux_sym_summary_line_token1,
    STATE(6), 2,
      sym_summary_line,
      aux_sym_summary_repeat1,
    ACTIONS(37), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      anon_sym_Args_COLON_LF,
      anon_sym_Returns_COLON_LF,
      anon_sym_Raises_COLON_LF,
      anon_sym_Examples_COLON_LF,
      anon_sym_Notes_COLON_LF,
      anon_sym_Attributes_COLON_LF,
  [174] = 3,
    ACTIONS(7), 1,
      aux_sym_summary_line_token1,
    STATE(6), 2,
      sym_summary_line,
      aux_sym_summary_repeat1,
    ACTIONS(42), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      anon_sym_Args_COLON_LF,
      anon_sym_Returns_COLON_LF,
      anon_sym_Raises_COLON_LF,
      anon_sym_Examples_COLON_LF,
      anon_sym_Notes_COLON_LF,
      anon_sym_Attributes_COLON_LF,
  [191] = 3,
    ACTIONS(7), 1,
      aux_sym_summary_line_token1,
    STATE(7), 2,
      sym_summary_line,
      aux_sym_summary_repeat1,
    ACTIONS(44), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      anon_sym_Args_COLON_LF,
      anon_sym_Returns_COLON_LF,
      anon_sym_Raises_COLON_LF,
      anon_sym_Examples_COLON_LF,
      anon_sym_Notes_COLON_LF,
      anon_sym_Attributes_COLON_LF,
  [208] = 3,
    ACTIONS(48), 2,
      anon_sym_LF,
      aux_sym_return_line_token1,
    STATE(9), 2,
      sym_return_line,
      aux_sym_return_section_repeat1,
    ACTIONS(46), 5,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      anon_sym_Raises_COLON_LF,
      anon_sym_Examples_COLON_LF,
      anon_sym_Notes_COLON_LF,
      anon_sym_Attributes_COLON_LF,
  [224] = 3,
    ACTIONS(53), 2,
      anon_sym_LF,
      aux_sym_return_line_token1,
    STATE(20), 2,
      sym_return_line,
      aux_sym_return_section_repeat1,
    ACTIONS(51), 5,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      anon_sym_Raises_COLON_LF,
      anon_sym_Examples_COLON_LF,
      anon_sym_Notes_COLON_LF,
      anon_sym_Attributes_COLON_LF,
  [240] = 9,
    ACTIONS(27), 1,
      anon_sym_Raises_COLON_LF,
    ACTIONS(29), 1,
      anon_sym_Examples_COLON_LF,
    ACTIONS(31), 1,
      anon_sym_Notes_COLON_LF,
    ACTIONS(33), 1,
      anon_sym_Attributes_COLON_LF,
    ACTIONS(55), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
    STATE(31), 1,
      sym_raises_section,
    STATE(44), 1,
      sym_examples_section,
    STATE(55), 1,
      sym_notes_section,
    STATE(76), 1,
      sym_attributes_section,
  [268] = 3,
    ACTIONS(59), 1,
      aux_sym_element_description_token1,
    STATE(12), 1,
      aux_sym_element_description_repeat1,
    ACTIONS(57), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      sym_arg_name,
      anon_sym_Returns_COLON_LF,
      anon_sym_Raises_COLON_LF,
      anon_sym_Examples_COLON_LF,
      anon_sym_Notes_COLON_LF,
      anon_sym_Attributes_COLON_LF,
  [284] = 9,
    ACTIONS(21), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
    ACTIONS(27), 1,
      anon_sym_Raises_COLON_LF,
    ACTIONS(29), 1,
      anon_sym_Examples_COLON_LF,
    ACTIONS(31), 1,
      anon_sym_Notes_COLON_LF,
    ACTIONS(33), 1,
      anon_sym_Attributes_COLON_LF,
    STATE(26), 1,
      sym_raises_section,
    STATE(42), 1,
      sym_examples_section,
    STATE(56), 1,
      sym_notes_section,
    STATE(67), 1,
      sym_attributes_section,
  [312] = 3,
    ACTIONS(64), 1,
      sym_arg_name,
    STATE(14), 2,
      sym_arg,
      aux_sym_args_section_repeat1,
    ACTIONS(62), 6,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      anon_sym_Returns_COLON_LF,
      anon_sym_Raises_COLON_LF,
      anon_sym_Examples_COLON_LF,
      anon_sym_Notes_COLON_LF,
      anon_sym_Attributes_COLON_LF,
  [328] = 3,
    ACTIONS(69), 1,
      aux_sym_element_description_token1,
    STATE(17), 1,
      aux_sym_element_description_repeat1,
    ACTIONS(67), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      sym_arg_name,
      anon_sym_Returns_COLON_LF,
      anon_sym_Raises_COLON_LF,
      anon_sym_Examples_COLON_LF,
      anon_sym_Notes_COLON_LF,
      anon_sym_Attributes_COLON_LF,
  [344] = 9,
    ACTIONS(27), 1,
      anon_sym_Raises_COLON_LF,
    ACTIONS(29), 1,
      anon_sym_Examples_COLON_LF,
    ACTIONS(31), 1,
      anon_sym_Notes_COLON_LF,
    ACTIONS(33), 1,
      anon_sym_Attributes_COLON_LF,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
    STATE(30), 1,
      sym_raises_section,
    STATE(40), 1,
      sym_examples_section,
    STATE(57), 1,
      sym_notes_section,
    STATE(70), 1,
      sym_attributes_section,
  [372] = 3,
    ACTIONS(73), 1,
      aux_sym_element_description_token1,
    STATE(12), 1,
      aux_sym_element_description_repeat1,
    ACTIONS(71), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      sym_arg_name,
      anon_sym_Returns_COLON_LF,
      anon_sym_Raises_COLON_LF,
      anon_sym_Examples_COLON_LF,
      anon_sym_Notes_COLON_LF,
      anon_sym_Attributes_COLON_LF,
  [388] = 3,
    ACTIONS(77), 1,
      sym_arg_name,
    STATE(14), 2,
      sym_arg,
      aux_sym_args_section_repeat1,
    ACTIONS(75), 6,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      anon_sym_Returns_COLON_LF,
      anon_sym_Raises_COLON_LF,
      anon_sym_Examples_COLON_LF,
      anon_sym_Notes_COLON_LF,
      anon_sym_Attributes_COLON_LF,
  [404] = 3,
    ACTIONS(77), 1,
      sym_arg_name,
    STATE(18), 2,
      sym_arg,
      aux_sym_args_section_repeat1,
    ACTIONS(79), 6,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      anon_sym_Returns_COLON_LF,
      anon_sym_Raises_COLON_LF,
      anon_sym_Examples_COLON_LF,
      anon_sym_Notes_COLON_LF,
      anon_sym_Attributes_COLON_LF,
  [420] = 3,
    ACTIONS(53), 2,
      anon_sym_LF,
      aux_sym_return_line_token1,
    STATE(9), 2,
      sym_return_line,
      aux_sym_return_section_repeat1,
    ACTIONS(81), 5,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      anon_sym_Raises_COLON_LF,
      anon_sym_Examples_COLON_LF,
      anon_sym_Notes_COLON_LF,
      anon_sym_Attributes_COLON_LF,
  [436] = 4,
    ACTIONS(85), 1,
      aux_sym_type_name_token1,
    STATE(89), 1,
      sym_type_name,
    STATE(23), 2,
      sym_raise_info,
      aux_sym_raises_section_repeat1,
    ACTIONS(83), 4,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      anon_sym_Examples_COLON_LF,
      anon_sym_Notes_COLON_LF,
      anon_sym_Attributes_COLON_LF,
  [453] = 4,
    ACTIONS(85), 1,
      aux_sym_type_name_token1,
    STATE(89), 1,
      sym_type_name,
    STATE(21), 2,
      sym_raise_info,
      aux_sym_raises_section_repeat1,
    ACTIONS(87), 4,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      anon_sym_Examples_COLON_LF,
      anon_sym_Notes_COLON_LF,
      anon_sym_Attributes_COLON_LF,
  [470] = 4,
    ACTIONS(91), 1,
      aux_sym_type_name_token1,
    STATE(89), 1,
      sym_type_name,
    STATE(23), 2,
      sym_raise_info,
      aux_sym_raises_section_repeat1,
    ACTIONS(89), 4,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      anon_sym_Examples_COLON_LF,
      anon_sym_Notes_COLON_LF,
      anon_sym_Attributes_COLON_LF,
  [487] = 1,
    ACTIONS(94), 8,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      aux_sym_summary_line_token1,
      anon_sym_Args_COLON_LF,
      anon_sym_Returns_COLON_LF,
      anon_sym_Raises_COLON_LF,
      anon_sym_Examples_COLON_LF,
      anon_sym_Notes_COLON_LF,
      anon_sym_Attributes_COLON_LF,
  [498] = 1,
    ACTIONS(96), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      anon_sym_LF,
      aux_sym_return_line_token1,
      anon_sym_Raises_COLON_LF,
      anon_sym_Examples_COLON_LF,
      anon_sym_Notes_COLON_LF,
      anon_sym_Attributes_COLON_LF,
  [508] = 7,
    ACTIONS(29), 1,
      anon_sym_Examples_COLON_LF,
    ACTIONS(31), 1,
      anon_sym_Notes_COLON_LF,
    ACTIONS(33), 1,
      anon_sym_Attributes_COLON_LF,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
    STATE(40), 1,
      sym_examples_section,
    STATE(57), 1,
      sym_notes_section,
    STATE(70), 1,
      sym_attributes_section,
  [530] = 2,
    ACTIONS(100), 1,
      sym_arg_name,
    ACTIONS(98), 6,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      anon_sym_Returns_COLON_LF,
      anon_sym_Raises_COLON_LF,
      anon_sym_Examples_COLON_LF,
      anon_sym_Notes_COLON_LF,
      anon_sym_Attributes_COLON_LF,
  [542] = 3,
    ACTIONS(104), 1,
      aux_sym_element_description_continuation_token1,
    STATE(29), 1,
      aux_sym_raise_description_repeat1,
    ACTIONS(102), 5,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      aux_sym_type_name_token1,
      anon_sym_Examples_COLON_LF,
      anon_sym_Notes_COLON_LF,
      anon_sym_Attributes_COLON_LF,
  [556] = 3,
    ACTIONS(108), 1,
      aux_sym_element_description_continuation_token1,
    STATE(29), 1,
      aux_sym_raise_description_repeat1,
    ACTIONS(106), 5,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      aux_sym_type_name_token1,
      anon_sym_Examples_COLON_LF,
      anon_sym_Notes_COLON_LF,
      anon_sym_Attributes_COLON_LF,
  [570] = 7,
    ACTIONS(29), 1,
      anon_sym_Examples_COLON_LF,
    ACTIONS(31), 1,
      anon_sym_Notes_COLON_LF,
    ACTIONS(33), 1,
      anon_sym_Attributes_COLON_LF,
    ACTIONS(55), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
    STATE(44), 1,
      sym_examples_section,
    STATE(55), 1,
      sym_notes_section,
    STATE(76), 1,
      sym_attributes_section,
  [592] = 7,
    ACTIONS(29), 1,
      anon_sym_Examples_COLON_LF,
    ACTIONS(31), 1,
      anon_sym_Notes_COLON_LF,
    ACTIONS(33), 1,
      anon_sym_Attributes_COLON_LF,
    ACTIONS(111), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
    STATE(47), 1,
      sym_examples_section,
    STATE(58), 1,
      sym_notes_section,
    STATE(84), 1,
      sym_attributes_section,
  [614] = 7,
    ACTIONS(21), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
    ACTIONS(29), 1,
      anon_sym_Examples_COLON_LF,
    ACTIONS(31), 1,
      anon_sym_Notes_COLON_LF,
    ACTIONS(33), 1,
      anon_sym_Attributes_COLON_LF,
    STATE(42), 1,
      sym_examples_section,
    STATE(56), 1,
      sym_notes_section,
    STATE(67), 1,
      sym_attributes_section,
  [636] = 2,
    ACTIONS(115), 1,
      sym_arg_name,
    ACTIONS(113), 6,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      anon_sym_Returns_COLON_LF,
      anon_sym_Raises_COLON_LF,
      anon_sym_Examples_COLON_LF,
      anon_sym_Notes_COLON_LF,
      anon_sym_Attributes_COLON_LF,
  [648] = 3,
    ACTIONS(104), 1,
      aux_sym_element_description_continuation_token1,
    STATE(28), 1,
      aux_sym_raise_description_repeat1,
    ACTIONS(117), 5,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      aux_sym_type_name_token1,
      anon_sym_Examples_COLON_LF,
      anon_sym_Notes_COLON_LF,
      anon_sym_Attributes_COLON_LF,
  [662] = 3,
    ACTIONS(121), 1,
      aux_sym_example_line_token1,
    STATE(35), 2,
      sym_example_line,
      aux_sym_examples_section_repeat1,
    ACTIONS(119), 3,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      anon_sym_Notes_COLON_LF,
      anon_sym_Attributes_COLON_LF,
  [675] = 3,
    ACTIONS(126), 1,
      aux_sym_example_line_token1,
    STATE(35), 2,
      sym_example_line,
      aux_sym_examples_section_repeat1,
    ACTIONS(124), 3,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      anon_sym_Notes_COLON_LF,
      anon_sym_Attributes_COLON_LF,
  [688] = 2,
    ACTIONS(130), 1,
      aux_sym_element_description_continuation_token1,
    ACTIONS(128), 5,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      aux_sym_type_name_token1,
      anon_sym_Examples_COLON_LF,
      anon_sym_Notes_COLON_LF,
      anon_sym_Attributes_COLON_LF,
  [699] = 3,
    ACTIONS(126), 1,
      aux_sym_example_line_token1,
    STATE(36), 2,
      sym_example_line,
      aux_sym_examples_section_repeat1,
    ACTIONS(132), 3,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      anon_sym_Notes_COLON_LF,
      anon_sym_Attributes_COLON_LF,
  [712] = 3,
    ACTIONS(136), 1,
      aux_sym_example_line_token1,
    ACTIONS(134), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      anon_sym_Attributes_COLON_LF,
    STATE(46), 2,
      sym_note_line,
      aux_sym_notes_section_repeat1,
  [724] = 5,
    ACTIONS(31), 1,
      anon_sym_Notes_COLON_LF,
    ACTIONS(33), 1,
      anon_sym_Attributes_COLON_LF,
    ACTIONS(55), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
    STATE(55), 1,
      sym_notes_section,
    STATE(76), 1,
      sym_attributes_section,
  [740] = 2,
    ACTIONS(140), 1,
      aux_sym_type_name_token1,
    ACTIONS(138), 4,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      anon_sym_Examples_COLON_LF,
      anon_sym_Notes_COLON_LF,
      anon_sym_Attributes_COLON_LF,
  [750] = 5,
    ACTIONS(31), 1,
      anon_sym_Notes_COLON_LF,
    ACTIONS(33), 1,
      anon_sym_Attributes_COLON_LF,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
    STATE(57), 1,
      sym_notes_section,
    STATE(70), 1,
      sym_attributes_section,
  [766] = 3,
    ACTIONS(136), 1,
      aux_sym_example_line_token1,
    ACTIONS(142), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      anon_sym_Attributes_COLON_LF,
    STATE(39), 2,
      sym_note_line,
      aux_sym_notes_section_repeat1,
  [778] = 5,
    ACTIONS(31), 1,
      anon_sym_Notes_COLON_LF,
    ACTIONS(33), 1,
      anon_sym_Attributes_COLON_LF,
    ACTIONS(111), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
    STATE(58), 1,
      sym_notes_section,
    STATE(84), 1,
      sym_attributes_section,
  [794] = 5,
    ACTIONS(21), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
    ACTIONS(31), 1,
      anon_sym_Notes_COLON_LF,
    ACTIONS(33), 1,
      anon_sym_Attributes_COLON_LF,
    STATE(56), 1,
      sym_notes_section,
    STATE(67), 1,
      sym_attributes_section,
  [810] = 3,
    ACTIONS(146), 1,
      aux_sym_example_line_token1,
    ACTIONS(144), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      anon_sym_Attributes_COLON_LF,
    STATE(46), 2,
      sym_note_line,
      aux_sym_notes_section_repeat1,
  [822] = 5,
    ACTIONS(31), 1,
      anon_sym_Notes_COLON_LF,
    ACTIONS(33), 1,
      anon_sym_Attributes_COLON_LF,
    ACTIONS(149), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
    STATE(60), 1,
      sym_notes_section,
    STATE(90), 1,
      sym_attributes_section,
  [838] = 3,
    ACTIONS(151), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
    ACTIONS(153), 1,
      aux_sym_example_line_token1,
    STATE(50), 2,
      sym_attribute_line,
      aux_sym_attributes_section_repeat1,
  [849] = 3,
    ACTIONS(155), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
    ACTIONS(157), 1,
      aux_sym_example_line_token1,
    STATE(49), 2,
      sym_attribute_line,
      aux_sym_attributes_section_repeat1,
  [860] = 3,
    ACTIONS(153), 1,
      aux_sym_example_line_token1,
    ACTIONS(160), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
    STATE(49), 2,
      sym_attribute_line,
      aux_sym_attributes_section_repeat1,
  [871] = 2,
    ACTIONS(164), 1,
      aux_sym_example_line_token1,
    ACTIONS(162), 3,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      anon_sym_Notes_COLON_LF,
      anon_sym_Attributes_COLON_LF,
  [880] = 2,
    ACTIONS(168), 1,
      anon_sym_COMMAoptional,
    ACTIONS(166), 2,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [888] = 3,
    ACTIONS(170), 1,
      anon_sym_COLON,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym_type_annotation,
  [898] = 2,
    ACTIONS(176), 1,
      aux_sym_example_line_token1,
    ACTIONS(174), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
      anon_sym_Attributes_COLON_LF,
  [906] = 3,
    ACTIONS(33), 1,
      anon_sym_Attributes_COLON_LF,
    ACTIONS(111), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
    STATE(84), 1,
      sym_attributes_section,
  [916] = 3,
    ACTIONS(33), 1,
      anon_sym_Attributes_COLON_LF,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
    STATE(70), 1,
      sym_attributes_section,
  [926] = 3,
    ACTIONS(33), 1,
      anon_sym_Attributes_COLON_LF,
    ACTIONS(55), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
    STATE(76), 1,
      sym_attributes_section,
  [936] = 3,
    ACTIONS(33), 1,
      anon_sym_Attributes_COLON_LF,
    ACTIONS(149), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
    STATE(90), 1,
      sym_attributes_section,
  [946] = 3,
    ACTIONS(21), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
    ACTIONS(33), 1,
      anon_sym_Attributes_COLON_LF,
    STATE(67), 1,
      sym_attributes_section,
  [956] = 3,
    ACTIONS(33), 1,
      anon_sym_Attributes_COLON_LF,
    ACTIONS(178), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
    STATE(95), 1,
      sym_attributes_section,
  [966] = 1,
    ACTIONS(180), 2,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [971] = 2,
    ACTIONS(182), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
    ACTIONS(184), 1,
      aux_sym_example_line_token1,
  [978] = 2,
    ACTIONS(186), 1,
      aux_sym_summary_line_token1,
    STATE(27), 1,
      sym_element_description,
  [985] = 2,
    ACTIONS(188), 1,
      aux_sym_type_name_token1,
    STATE(77), 1,
      sym_type_name,
  [992] = 2,
    ACTIONS(190), 1,
      aux_sym_summary_line_token1,
    STATE(41), 1,
      sym_raise_description,
  [999] = 2,
    ACTIONS(186), 1,
      aux_sym_summary_line_token1,
    STATE(33), 1,
      sym_element_description,
  [1006] = 1,
    ACTIONS(35), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
  [1010] = 1,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
  [1014] = 1,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
  [1018] = 1,
    ACTIONS(55), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
  [1022] = 1,
    ACTIONS(196), 1,
      anon_sym_LF,
  [1026] = 1,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
  [1030] = 1,
    ACTIONS(200), 1,
      sym_top_summary,
  [1034] = 1,
    ACTIONS(202), 1,
      anon_sym_LF,
  [1038] = 1,
    ACTIONS(204), 1,
      anon_sym_COLON,
  [1042] = 1,
    ACTIONS(111), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
  [1046] = 1,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
  [1050] = 1,
    ACTIONS(208), 1,
      anon_sym_COLON,
  [1054] = 1,
    ACTIONS(210), 1,
      anon_sym_LF,
  [1058] = 1,
    ACTIONS(212), 1,
      anon_sym_LF,
  [1062] = 1,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
  [1066] = 1,
    ACTIONS(216), 1,
      anon_sym_LF,
  [1070] = 1,
    ACTIONS(218), 1,
      aux_sym_summary_line_token1,
  [1074] = 1,
    ACTIONS(149), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
  [1078] = 1,
    ACTIONS(220), 1,
      aux_sym_summary_line_token1,
  [1082] = 1,
    ACTIONS(222), 1,
      aux_sym_summary_line_token1,
  [1086] = 1,
    ACTIONS(224), 1,
      aux_sym_summary_line_token1,
  [1090] = 1,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
  [1094] = 1,
    ACTIONS(228), 1,
      anon_sym_COLON,
  [1098] = 1,
    ACTIONS(178), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
  [1102] = 1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
  [1106] = 1,
    ACTIONS(230), 1,
      anon_sym_LF,
  [1110] = 1,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
  [1114] = 1,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
  [1118] = 1,
    ACTIONS(236), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE_LF,
  [1122] = 1,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
  [1126] = 1,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 89,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 157,
  [SMALL_STATE(7)] = 174,
  [SMALL_STATE(8)] = 191,
  [SMALL_STATE(9)] = 208,
  [SMALL_STATE(10)] = 224,
  [SMALL_STATE(11)] = 240,
  [SMALL_STATE(12)] = 268,
  [SMALL_STATE(13)] = 284,
  [SMALL_STATE(14)] = 312,
  [SMALL_STATE(15)] = 328,
  [SMALL_STATE(16)] = 344,
  [SMALL_STATE(17)] = 372,
  [SMALL_STATE(18)] = 388,
  [SMALL_STATE(19)] = 404,
  [SMALL_STATE(20)] = 420,
  [SMALL_STATE(21)] = 436,
  [SMALL_STATE(22)] = 453,
  [SMALL_STATE(23)] = 470,
  [SMALL_STATE(24)] = 487,
  [SMALL_STATE(25)] = 498,
  [SMALL_STATE(26)] = 508,
  [SMALL_STATE(27)] = 530,
  [SMALL_STATE(28)] = 542,
  [SMALL_STATE(29)] = 556,
  [SMALL_STATE(30)] = 570,
  [SMALL_STATE(31)] = 592,
  [SMALL_STATE(32)] = 614,
  [SMALL_STATE(33)] = 636,
  [SMALL_STATE(34)] = 648,
  [SMALL_STATE(35)] = 662,
  [SMALL_STATE(36)] = 675,
  [SMALL_STATE(37)] = 688,
  [SMALL_STATE(38)] = 699,
  [SMALL_STATE(39)] = 712,
  [SMALL_STATE(40)] = 724,
  [SMALL_STATE(41)] = 740,
  [SMALL_STATE(42)] = 750,
  [SMALL_STATE(43)] = 766,
  [SMALL_STATE(44)] = 778,
  [SMALL_STATE(45)] = 794,
  [SMALL_STATE(46)] = 810,
  [SMALL_STATE(47)] = 822,
  [SMALL_STATE(48)] = 838,
  [SMALL_STATE(49)] = 849,
  [SMALL_STATE(50)] = 860,
  [SMALL_STATE(51)] = 871,
  [SMALL_STATE(52)] = 880,
  [SMALL_STATE(53)] = 888,
  [SMALL_STATE(54)] = 898,
  [SMALL_STATE(55)] = 906,
  [SMALL_STATE(56)] = 916,
  [SMALL_STATE(57)] = 926,
  [SMALL_STATE(58)] = 936,
  [SMALL_STATE(59)] = 946,
  [SMALL_STATE(60)] = 956,
  [SMALL_STATE(61)] = 966,
  [SMALL_STATE(62)] = 971,
  [SMALL_STATE(63)] = 978,
  [SMALL_STATE(64)] = 985,
  [SMALL_STATE(65)] = 992,
  [SMALL_STATE(66)] = 999,
  [SMALL_STATE(67)] = 1006,
  [SMALL_STATE(68)] = 1010,
  [SMALL_STATE(69)] = 1014,
  [SMALL_STATE(70)] = 1018,
  [SMALL_STATE(71)] = 1022,
  [SMALL_STATE(72)] = 1026,
  [SMALL_STATE(73)] = 1030,
  [SMALL_STATE(74)] = 1034,
  [SMALL_STATE(75)] = 1038,
  [SMALL_STATE(76)] = 1042,
  [SMALL_STATE(77)] = 1046,
  [SMALL_STATE(78)] = 1050,
  [SMALL_STATE(79)] = 1054,
  [SMALL_STATE(80)] = 1058,
  [SMALL_STATE(81)] = 1062,
  [SMALL_STATE(82)] = 1066,
  [SMALL_STATE(83)] = 1070,
  [SMALL_STATE(84)] = 1074,
  [SMALL_STATE(85)] = 1078,
  [SMALL_STATE(86)] = 1082,
  [SMALL_STATE(87)] = 1086,
  [SMALL_STATE(88)] = 1090,
  [SMALL_STATE(89)] = 1094,
  [SMALL_STATE(90)] = 1098,
  [SMALL_STATE(91)] = 1102,
  [SMALL_STATE(92)] = 1106,
  [SMALL_STATE(93)] = 1110,
  [SMALL_STATE(94)] = 1114,
  [SMALL_STATE(95)] = 1118,
  [SMALL_STATE(96)] = 1122,
  [SMALL_STATE(97)] = 1126,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_summary_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_summary_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_summary, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_summary, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_return_section_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_return_section_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_section, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_element_description_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_description_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_section_repeat1, 2, 0, 0),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_args_section_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_description, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_description, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args_section, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args_section, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_section, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raises_section, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raises_section, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raises_section_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_raises_section_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_summary_line, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_line, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raise_description, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_raise_description_repeat1, 2, 0, 0),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raise_description_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 4, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg, 4, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raise_description, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_examples_section_repeat1, 2, 0, 0),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_examples_section_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_examples_section, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_raise_description_repeat1, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raise_description_repeat1, 3, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_examples_section, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_notes_section, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raise_info, 3, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raise_info, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_notes_section, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_notes_section_repeat1, 2, 0, 0),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_notes_section_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes_section, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attributes_section_repeat1, 2, 0, 0),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_section_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes_section, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_example_line, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_example_line, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_line, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_line, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_line, 3, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_line, 3, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docstring, 4, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docstring, 5, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docstring, 6, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 3, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docstring, 7, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docstring, 8, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docstring, 3, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docstring, 9, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [238] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docstring, 10, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_python_docstring(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
