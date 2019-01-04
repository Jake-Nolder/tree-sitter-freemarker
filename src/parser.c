#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 120
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_COMMA = 1,
  anon_sym_EQ = 2,
  aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH = 3,
  sym_operator = 4,
  anon_sym_LT_POUNDlist = 5,
  anon_sym_GT = 6,
  anon_sym_LT_SLASH_POUNDlist_GT = 7,
  sym_break = 8,
  sym_continue = 9,
  anon_sym_LT_POUNDelse_GT = 10,
  anon_sym_LT_POUNDitems = 11,
  anon_sym_LT_SLASH_POUNDitems_GT = 12,
  anon_sym_LT_POUNDsep_GT = 13,
  anon_sym_LT_SLASH_POUNDsep_GT = 14,
  anon_sym_LT_POUNDif = 15,
  anon_sym_LT_SLASH_POUNDif_GT = 16,
  anon_sym_LT_POUNDelseif = 17,
  anon_sym_LT_POUNDswitch = 18,
  anon_sym_LT_SLASH_POUNDswitch_GT = 19,
  anon_sym_LT_POUNDcase = 20,
  anon_sym_LT_POUNDdefault_GT = 21,
  anon_sym_LT_POUNDfunction = 22,
  anon_sym_LT_SLASH_POUNDfunction_GT = 23,
  anon_sym_LT_POUNDreturn = 24,
  anon_sym_LT_POUNDmacro = 25,
  anon_sym_LT_SLASH_POUNDmacro_GT = 26,
  anon_sym_LT_POUNDnested = 27,
  anon_sym_LT_POUNDattempt_GT = 28,
  anon_sym_LT_SLASH_POUNDattempt_GT = 29,
  sym_recover = 30,
  sym_source_file = 31,
  sym__definition = 32,
  sym_directive = 33,
  sym_parameter_pattern = 34,
  sym_paramPattern1 = 35,
  sym_paramPattern2 = 36,
  sym_paramPattern3 = 37,
  sym_unary_expression = 38,
  sym_binary_expression = 39,
  sym_expression = 40,
  sym_parameter = 41,
  sym_list = 42,
  sym_list_middle = 43,
  sym_items_middle = 44,
  sym_list_else = 45,
  sym_items = 46,
  sym_sep = 47,
  sym_sep_block = 48,
  sym_if = 49,
  sym_if_else = 50,
  sym_elseif = 51,
  sym_if_middle = 52,
  sym_switch = 53,
  sym_case = 54,
  sym_default = 55,
  sym_switch_middle = 56,
  sym_function = 57,
  sym_function_middle = 58,
  sym_return = 59,
  sym_macro = 60,
  sym_macro_middle = 61,
  sym_nested = 62,
  sym_attempt = 63,
  sym_attempt_middle = 64,
  aux_sym_source_file_repeat1 = 65,
  aux_sym_list_repeat1 = 66,
  aux_sym_items_repeat1 = 67,
  aux_sym_if_repeat1 = 68,
  aux_sym_switch_repeat1 = 69,
  aux_sym_case_repeat1 = 70,
  aux_sym_case_repeat2 = 71,
  aux_sym_function_repeat1 = 72,
  aux_sym_function_repeat2 = 73,
  aux_sym_macro_repeat1 = 74,
  aux_sym_attempt_repeat1 = 75,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ] = "=",
  [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = "/[a-zA-Z0-9\\_]+/",
  [sym_operator] = "operator",
  [anon_sym_LT_POUNDlist] = "<#list",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASH_POUNDlist_GT] = "</#list>",
  [sym_break] = "break",
  [sym_continue] = "continue",
  [anon_sym_LT_POUNDelse_GT] = "<#else>",
  [anon_sym_LT_POUNDitems] = "<#items",
  [anon_sym_LT_SLASH_POUNDitems_GT] = "</#items>",
  [anon_sym_LT_POUNDsep_GT] = "<#sep>",
  [anon_sym_LT_SLASH_POUNDsep_GT] = "</#sep>",
  [anon_sym_LT_POUNDif] = "<#if",
  [anon_sym_LT_SLASH_POUNDif_GT] = "</#if>",
  [anon_sym_LT_POUNDelseif] = "<#elseif",
  [anon_sym_LT_POUNDswitch] = "<#switch",
  [anon_sym_LT_SLASH_POUNDswitch_GT] = "</#switch>",
  [anon_sym_LT_POUNDcase] = "<#case",
  [anon_sym_LT_POUNDdefault_GT] = "<#default>",
  [anon_sym_LT_POUNDfunction] = "<#function",
  [anon_sym_LT_SLASH_POUNDfunction_GT] = "</#function>",
  [anon_sym_LT_POUNDreturn] = "<#return",
  [anon_sym_LT_POUNDmacro] = "<#macro",
  [anon_sym_LT_SLASH_POUNDmacro_GT] = "</#macro>",
  [anon_sym_LT_POUNDnested] = "<#nested",
  [anon_sym_LT_POUNDattempt_GT] = "<#attempt>",
  [anon_sym_LT_SLASH_POUNDattempt_GT] = "</#attempt>",
  [sym_recover] = "recover",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_directive] = "directive",
  [sym_parameter_pattern] = "parameter_pattern",
  [sym_paramPattern1] = "paramPattern1",
  [sym_paramPattern2] = "paramPattern2",
  [sym_paramPattern3] = "paramPattern3",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_expression] = "expression",
  [sym_parameter] = "parameter",
  [sym_list] = "list",
  [sym_list_middle] = "list_middle",
  [sym_items_middle] = "items_middle",
  [sym_list_else] = "list_else",
  [sym_items] = "items",
  [sym_sep] = "sep",
  [sym_sep_block] = "sep_block",
  [sym_if] = "if",
  [sym_if_else] = "if_else",
  [sym_elseif] = "elseif",
  [sym_if_middle] = "if_middle",
  [sym_switch] = "switch",
  [sym_case] = "case",
  [sym_default] = "default",
  [sym_switch_middle] = "switch_middle",
  [sym_function] = "function",
  [sym_function_middle] = "function_middle",
  [sym_return] = "return",
  [sym_macro] = "macro",
  [sym_macro_middle] = "macro_middle",
  [sym_nested] = "nested",
  [sym_attempt] = "attempt",
  [sym_attempt_middle] = "attempt_middle",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_items_repeat1] = "items_repeat1",
  [aux_sym_if_repeat1] = "if_repeat1",
  [aux_sym_switch_repeat1] = "switch_repeat1",
  [aux_sym_case_repeat1] = "case_repeat1",
  [aux_sym_case_repeat2] = "case_repeat2",
  [aux_sym_function_repeat1] = "function_repeat1",
  [aux_sym_function_repeat2] = "function_repeat2",
  [aux_sym_macro_repeat1] = "macro_repeat1",
  [aux_sym_attempt_repeat1] = "attempt_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_POUNDlist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH_POUNDlist_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_break] = {
    .visible = true,
    .named = true,
  },
  [sym_continue] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_POUNDelse_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDitems] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH_POUNDitems_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDsep_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH_POUNDsep_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH_POUNDif_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDelseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDswitch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH_POUNDswitch_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDcase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDdefault_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDfunction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH_POUNDfunction_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDreturn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDmacro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH_POUNDmacro_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDnested] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDattempt_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH_POUNDattempt_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_recover] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_paramPattern1] = {
    .visible = true,
    .named = true,
  },
  [sym_paramPattern2] = {
    .visible = true,
    .named = true,
  },
  [sym_paramPattern3] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_list_middle] = {
    .visible = true,
    .named = true,
  },
  [sym_items_middle] = {
    .visible = true,
    .named = true,
  },
  [sym_list_else] = {
    .visible = true,
    .named = true,
  },
  [sym_items] = {
    .visible = true,
    .named = true,
  },
  [sym_sep] = {
    .visible = true,
    .named = true,
  },
  [sym_sep_block] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_if_else] = {
    .visible = true,
    .named = true,
  },
  [sym_elseif] = {
    .visible = true,
    .named = true,
  },
  [sym_if_middle] = {
    .visible = true,
    .named = true,
  },
  [sym_switch] = {
    .visible = true,
    .named = true,
  },
  [sym_case] = {
    .visible = true,
    .named = true,
  },
  [sym_default] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_middle] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_function_middle] = {
    .visible = true,
    .named = true,
  },
  [sym_return] = {
    .visible = true,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_middle] = {
    .visible = true,
    .named = true,
  },
  [sym_nested] = {
    .visible = true,
    .named = true,
  },
  [sym_attempt] = {
    .visible = true,
    .named = true,
  },
  [sym_attempt_middle] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_items_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_switch_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_macro_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attempt_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(3);
      if (lookahead == '=')
        ADVANCE(144);
      if (lookahead == '>')
        ADVANCE(145);
      if (lookahead == 'a')
        ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(148);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 3:
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(96);
      END_STATE();
    case 4:
      if (lookahead == 'a')
        ADVANCE(5);
      if (lookahead == 'b')
        ADVANCE(13);
      if (lookahead == 'c')
        ADVANCE(19);
      if (lookahead == 'd')
        ADVANCE(31);
      if (lookahead == 'e')
        ADVANCE(39);
      if (lookahead == 'f')
        ADVANCE(46);
      if (lookahead == 'i')
        ADVANCE(54);
      if (lookahead == 'l')
        ADVANCE(60);
      if (lookahead == 'm')
        ADVANCE(64);
      if (lookahead == 'n')
        ADVANCE(69);
      if (lookahead == 'r')
        ADVANCE(75);
      if (lookahead == 's')
        ADVANCE(87);
      END_STATE();
    case 5:
      if (lookahead == 't')
        ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 't')
        ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'e')
        ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'm')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'p')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 't')
        ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '>')
        ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LT_POUNDattempt_GT);
      END_STATE();
    case 13:
      if (lookahead == 'r')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'e')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'a')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'k')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '>')
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_break);
      END_STATE();
    case 19:
      if (lookahead == 'a')
        ADVANCE(20);
      if (lookahead == 'o')
        ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 's')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'e')
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LT_POUNDcase);
      END_STATE();
    case 23:
      if (lookahead == 'n')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 't')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'i')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'n')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'u')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'e')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '>')
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_continue);
      END_STATE();
    case 31:
      if (lookahead == 'e')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'f')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'a')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'u')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'l')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 't')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '>')
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LT_POUNDdefault_GT);
      END_STATE();
    case 39:
      if (lookahead == 'l')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 's')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'e')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == '>')
        ADVANCE(43);
      if (lookahead == 'i')
        ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LT_POUNDelse_GT);
      END_STATE();
    case 44:
      if (lookahead == 'f')
        ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LT_POUNDelseif);
      END_STATE();
    case 46:
      if (lookahead == 'u')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'n')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'c')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 't')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'i')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'o')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'n')
        ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT_POUNDfunction);
      END_STATE();
    case 54:
      if (lookahead == 'f')
        ADVANCE(55);
      if (lookahead == 't')
        ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LT_POUNDif);
      END_STATE();
    case 56:
      if (lookahead == 'e')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'm')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 's')
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT_POUNDitems);
      END_STATE();
    case 60:
      if (lookahead == 'i')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 's')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 't')
        ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT_POUNDlist);
      END_STATE();
    case 64:
      if (lookahead == 'a')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'c')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'r')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'o')
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LT_POUNDmacro);
      END_STATE();
    case 69:
      if (lookahead == 'e')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 's')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 't')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'e')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'd')
        ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT_POUNDnested);
      END_STATE();
    case 75:
      if (lookahead == 'e')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'c')
        ADVANCE(77);
      if (lookahead == 't')
        ADVANCE(83);
      END_STATE();
    case 77:
      if (lookahead == 'o')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'v')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'e')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'r')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == '>')
        ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_recover);
      END_STATE();
    case 83:
      if (lookahead == 'u')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'r')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'n')
        ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LT_POUNDreturn);
      END_STATE();
    case 87:
      if (lookahead == 'e')
        ADVANCE(88);
      if (lookahead == 'w')
        ADVANCE(91);
      END_STATE();
    case 88:
      if (lookahead == 'p')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == '>')
        ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LT_POUNDsep_GT);
      END_STATE();
    case 91:
      if (lookahead == 'i')
        ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 't')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'c')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'h')
        ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LT_POUNDswitch);
      END_STATE();
    case 96:
      if (lookahead == '#')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'a')
        ADVANCE(98);
      if (lookahead == 'f')
        ADVANCE(106);
      if (lookahead == 'i')
        ADVANCE(115);
      if (lookahead == 'l')
        ADVANCE(123);
      if (lookahead == 'm')
        ADVANCE(128);
      if (lookahead == 's')
        ADVANCE(134);
      END_STATE();
    case 98:
      if (lookahead == 't')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 't')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'e')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'm')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'p')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 't')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == '>')
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDattempt_GT);
      END_STATE();
    case 106:
      if (lookahead == 'u')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'n')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'c')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 't')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'i')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'o')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'n')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == '>')
        ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDfunction_GT);
      END_STATE();
    case 115:
      if (lookahead == 'f')
        ADVANCE(116);
      if (lookahead == 't')
        ADVANCE(118);
      END_STATE();
    case 116:
      if (lookahead == '>')
        ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDif_GT);
      END_STATE();
    case 118:
      if (lookahead == 'e')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'm')
        ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 's')
        ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == '>')
        ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDitems_GT);
      END_STATE();
    case 123:
      if (lookahead == 'i')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 's')
        ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == 't')
        ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == '>')
        ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDlist_GT);
      END_STATE();
    case 128:
      if (lookahead == 'a')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'c')
        ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 'r')
        ADVANCE(131);
      END_STATE();
    case 131:
      if (lookahead == 'o')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == '>')
        ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDmacro_GT);
      END_STATE();
    case 134:
      if (lookahead == 'e')
        ADVANCE(135);
      if (lookahead == 'w')
        ADVANCE(138);
      END_STATE();
    case 135:
      if (lookahead == 'p')
        ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == '>')
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDsep_GT);
      END_STATE();
    case 138:
      if (lookahead == 'i')
        ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 't')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == 'c')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == 'h')
        ADVANCE(142);
      END_STATE();
    case 142:
      if (lookahead == '>')
        ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDswitch_GT);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_operator);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(148);
      END_STATE();
    case 149:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(149);
      END_STATE();
    case 150:
      if (lookahead == '#')
        ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == 'a')
        ADVANCE(5);
      if (lookahead == 'f')
        ADVANCE(46);
      if (lookahead == 'i')
        ADVANCE(152);
      if (lookahead == 'l')
        ADVANCE(60);
      if (lookahead == 'm')
        ADVANCE(64);
      if (lookahead == 's')
        ADVANCE(153);
      END_STATE();
    case 152:
      if (lookahead == 'f')
        ADVANCE(55);
      END_STATE();
    case 153:
      if (lookahead == 'w')
        ADVANCE(91);
      END_STATE();
    case 154:
      if (lookahead == ',')
        ADVANCE(2);
      if (lookahead == '=')
        ADVANCE(144);
      if (lookahead == '>')
        ADVANCE(145);
      if (lookahead == 'a')
        ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(148);
      END_STATE();
    case 155:
      if (lookahead == '<')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(155);
      END_STATE();
    case 156:
      if (lookahead == '#')
        ADVANCE(157);
      if (lookahead == '/')
        ADVANCE(160);
      END_STATE();
    case 157:
      if (lookahead == 'a')
        ADVANCE(5);
      if (lookahead == 'f')
        ADVANCE(46);
      if (lookahead == 'i')
        ADVANCE(152);
      if (lookahead == 'l')
        ADVANCE(60);
      if (lookahead == 'm')
        ADVANCE(64);
      if (lookahead == 'r')
        ADVANCE(158);
      if (lookahead == 's')
        ADVANCE(153);
      END_STATE();
    case 158:
      if (lookahead == 'e')
        ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 'c')
        ADVANCE(77);
      END_STATE();
    case 160:
      if (lookahead == '#')
        ADVANCE(161);
      END_STATE();
    case 161:
      if (lookahead == 'a')
        ADVANCE(98);
      END_STATE();
    case 162:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(162);
      END_STATE();
    case 163:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(163);
      END_STATE();
    case 164:
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == '#')
        ADVANCE(166);
      END_STATE();
    case 166:
      if (lookahead == 'a')
        ADVANCE(98);
      if (lookahead == 'f')
        ADVANCE(106);
      if (lookahead == 'i')
        ADVANCE(115);
      if (lookahead == 'l')
        ADVANCE(123);
      if (lookahead == 'm')
        ADVANCE(128);
      if (lookahead == 's')
        ADVANCE(167);
      END_STATE();
    case 167:
      if (lookahead == 'w')
        ADVANCE(138);
      END_STATE();
    case 168:
      if (lookahead == ',')
        ADVANCE(2);
      if (lookahead == '=')
        ADVANCE(144);
      if (lookahead == '>')
        ADVANCE(145);
      if (lookahead == 'a')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(168);
      END_STATE();
    case 169:
      if (lookahead == 's')
        ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_operator);
      END_STATE();
    case 171:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(148);
      END_STATE();
    case 172:
      if (lookahead == '<')
        ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(172);
      END_STATE();
    case 173:
      if (lookahead == '#')
        ADVANCE(174);
      if (lookahead == '/')
        ADVANCE(177);
      END_STATE();
    case 174:
      if (lookahead == 'a')
        ADVANCE(5);
      if (lookahead == 'f')
        ADVANCE(46);
      if (lookahead == 'i')
        ADVANCE(152);
      if (lookahead == 'l')
        ADVANCE(60);
      if (lookahead == 'm')
        ADVANCE(64);
      if (lookahead == 'r')
        ADVANCE(175);
      if (lookahead == 's')
        ADVANCE(153);
      END_STATE();
    case 175:
      if (lookahead == 'e')
        ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 't')
        ADVANCE(83);
      END_STATE();
    case 177:
      if (lookahead == '#')
        ADVANCE(178);
      END_STATE();
    case 178:
      if (lookahead == 'f')
        ADVANCE(106);
      END_STATE();
    case 179:
      if (lookahead == '<')
        ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(179);
      END_STATE();
    case 180:
      if (lookahead == '#')
        ADVANCE(181);
      if (lookahead == '/')
        ADVANCE(182);
      END_STATE();
    case 181:
      if (lookahead == 'a')
        ADVANCE(5);
      if (lookahead == 'f')
        ADVANCE(46);
      if (lookahead == 'i')
        ADVANCE(152);
      if (lookahead == 'l')
        ADVANCE(60);
      if (lookahead == 'm')
        ADVANCE(64);
      if (lookahead == 'n')
        ADVANCE(69);
      if (lookahead == 'r')
        ADVANCE(175);
      if (lookahead == 's')
        ADVANCE(153);
      END_STATE();
    case 182:
      if (lookahead == '#')
        ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == 'm')
        ADVANCE(128);
      END_STATE();
    case 184:
      if (lookahead == '<')
        ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(184);
      END_STATE();
    case 185:
      if (lookahead == '#')
        ADVANCE(186);
      if (lookahead == '/')
        ADVANCE(192);
      END_STATE();
    case 186:
      if (lookahead == 'a')
        ADVANCE(5);
      if (lookahead == 'b')
        ADVANCE(13);
      if (lookahead == 'c')
        ADVANCE(187);
      if (lookahead == 'e')
        ADVANCE(188);
      if (lookahead == 'f')
        ADVANCE(46);
      if (lookahead == 'i')
        ADVANCE(54);
      if (lookahead == 'l')
        ADVANCE(60);
      if (lookahead == 'm')
        ADVANCE(64);
      if (lookahead == 's')
        ADVANCE(87);
      END_STATE();
    case 187:
      if (lookahead == 'o')
        ADVANCE(23);
      END_STATE();
    case 188:
      if (lookahead == 'l')
        ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == 's')
        ADVANCE(190);
      END_STATE();
    case 190:
      if (lookahead == 'e')
        ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == '>')
        ADVANCE(43);
      END_STATE();
    case 192:
      if (lookahead == '#')
        ADVANCE(193);
      END_STATE();
    case 193:
      if (lookahead == 'l')
        ADVANCE(123);
      END_STATE();
    case 194:
      if (lookahead == '<')
        ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(194);
      END_STATE();
    case 195:
      if (lookahead == '#')
        ADVANCE(196);
      if (lookahead == '/')
        ADVANCE(197);
      END_STATE();
    case 196:
      if (lookahead == 'a')
        ADVANCE(5);
      if (lookahead == 'e')
        ADVANCE(39);
      if (lookahead == 'f')
        ADVANCE(46);
      if (lookahead == 'i')
        ADVANCE(152);
      if (lookahead == 'l')
        ADVANCE(60);
      if (lookahead == 'm')
        ADVANCE(64);
      if (lookahead == 's')
        ADVANCE(153);
      END_STATE();
    case 197:
      if (lookahead == '#')
        ADVANCE(198);
      END_STATE();
    case 198:
      if (lookahead == 'i')
        ADVANCE(199);
      END_STATE();
    case 199:
      if (lookahead == 'f')
        ADVANCE(116);
      END_STATE();
    case 200:
      if (lookahead == '<')
        ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(200);
      END_STATE();
    case 201:
      if (lookahead == '#')
        ADVANCE(202);
      if (lookahead == '/')
        ADVANCE(204);
      END_STATE();
    case 202:
      if (lookahead == 'a')
        ADVANCE(5);
      if (lookahead == 'b')
        ADVANCE(13);
      if (lookahead == 'c')
        ADVANCE(203);
      if (lookahead == 'd')
        ADVANCE(31);
      if (lookahead == 'f')
        ADVANCE(46);
      if (lookahead == 'i')
        ADVANCE(152);
      if (lookahead == 'l')
        ADVANCE(60);
      if (lookahead == 'm')
        ADVANCE(64);
      if (lookahead == 's')
        ADVANCE(153);
      END_STATE();
    case 203:
      if (lookahead == 'a')
        ADVANCE(20);
      END_STATE();
    case 204:
      if (lookahead == '#')
        ADVANCE(205);
      END_STATE();
    case 205:
      if (lookahead == 's')
        ADVANCE(167);
      END_STATE();
    case 206:
      if (lookahead == '<')
        ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(206);
      END_STATE();
    case 207:
      if (lookahead == '#')
        ADVANCE(186);
      if (lookahead == '/')
        ADVANCE(208);
      END_STATE();
    case 208:
      if (lookahead == '#')
        ADVANCE(209);
      END_STATE();
    case 209:
      if (lookahead == 'i')
        ADVANCE(210);
      if (lookahead == 'l')
        ADVANCE(123);
      if (lookahead == 's')
        ADVANCE(211);
      END_STATE();
    case 210:
      if (lookahead == 't')
        ADVANCE(118);
      END_STATE();
    case 211:
      if (lookahead == 'e')
        ADVANCE(135);
      END_STATE();
    case 212:
      if (lookahead == '<')
        ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(212);
      END_STATE();
    case 213:
      if (lookahead == '#')
        ADVANCE(181);
      if (lookahead == '/')
        ADVANCE(214);
      END_STATE();
    case 214:
      if (lookahead == '#')
        ADVANCE(215);
      END_STATE();
    case 215:
      if (lookahead == 'f')
        ADVANCE(106);
      if (lookahead == 'm')
        ADVANCE(128);
      END_STATE();
    case 216:
      if (lookahead == '<')
        ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(216);
      END_STATE();
    case 217:
      if (lookahead == '#')
        ADVANCE(218);
      if (lookahead == '/')
        ADVANCE(219);
      END_STATE();
    case 218:
      if (lookahead == 'a')
        ADVANCE(5);
      if (lookahead == 'b')
        ADVANCE(13);
      if (lookahead == 'c')
        ADVANCE(187);
      if (lookahead == 'f')
        ADVANCE(46);
      if (lookahead == 'i')
        ADVANCE(152);
      if (lookahead == 'l')
        ADVANCE(60);
      if (lookahead == 'm')
        ADVANCE(64);
      if (lookahead == 's')
        ADVANCE(87);
      END_STATE();
    case 219:
      if (lookahead == '#')
        ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead == 'i')
        ADVANCE(210);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 149},
  [2] = {.lex_state = 154},
  [3] = {.lex_state = 154},
  [4] = {.lex_state = 154},
  [5] = {.lex_state = 154},
  [6] = {.lex_state = 154},
  [7] = {.lex_state = 155},
  [8] = {.lex_state = 162},
  [9] = {.lex_state = 163},
  [10] = {.lex_state = 149},
  [11] = {.lex_state = 168},
  [12] = {.lex_state = 171},
  [13] = {.lex_state = 154},
  [14] = {.lex_state = 154},
  [15] = {.lex_state = 168},
  [16] = {.lex_state = 154},
  [17] = {.lex_state = 154},
  [18] = {.lex_state = 154},
  [19] = {.lex_state = 154},
  [20] = {.lex_state = 172},
  [21] = {.lex_state = 154},
  [22] = {.lex_state = 179},
  [23] = {.lex_state = 154},
  [24] = {.lex_state = 163},
  [25] = {.lex_state = 155},
  [26] = {.lex_state = 155},
  [27] = {.lex_state = 149},
  [28] = {.lex_state = 154},
  [29] = {.lex_state = 154},
  [30] = {.lex_state = 184},
  [31] = {.lex_state = 171},
  [32] = {.lex_state = 154},
  [33] = {.lex_state = 171},
  [34] = {.lex_state = 194},
  [35] = {.lex_state = 200},
  [36] = {.lex_state = 163},
  [37] = {.lex_state = 154},
  [38] = {.lex_state = 172},
  [39] = {.lex_state = 172},
  [40] = {.lex_state = 172},
  [41] = {.lex_state = 154},
  [42] = {.lex_state = 163},
  [43] = {.lex_state = 154},
  [44] = {.lex_state = 179},
  [45] = {.lex_state = 179},
  [46] = {.lex_state = 179},
  [47] = {.lex_state = 163},
  [48] = {.lex_state = 155},
  [49] = {.lex_state = 163},
  [50] = {.lex_state = 184},
  [51] = {.lex_state = 184},
  [52] = {.lex_state = 154},
  [53] = {.lex_state = 206},
  [54] = {.lex_state = 184},
  [55] = {.lex_state = 206},
  [56] = {.lex_state = 184},
  [57] = {.lex_state = 154},
  [58] = {.lex_state = 154},
  [59] = {.lex_state = 194},
  [60] = {.lex_state = 163},
  [61] = {.lex_state = 154},
  [62] = {.lex_state = 194},
  [63] = {.lex_state = 194},
  [64] = {.lex_state = 194},
  [65] = {.lex_state = 163},
  [66] = {.lex_state = 154},
  [67] = {.lex_state = 200},
  [68] = {.lex_state = 200},
  [69] = {.lex_state = 200},
  [70] = {.lex_state = 200},
  [71] = {.lex_state = 212},
  [72] = {.lex_state = 154},
  [73] = {.lex_state = 163},
  [74] = {.lex_state = 172},
  [75] = {.lex_state = 172},
  [76] = {.lex_state = 179},
  [77] = {.lex_state = 154},
  [78] = {.lex_state = 163},
  [79] = {.lex_state = 179},
  [80] = {.lex_state = 179},
  [81] = {.lex_state = 184},
  [82] = {.lex_state = 154},
  [83] = {.lex_state = 206},
  [84] = {.lex_state = 163},
  [85] = {.lex_state = 184},
  [86] = {.lex_state = 184},
  [87] = {.lex_state = 194},
  [88] = {.lex_state = 154},
  [89] = {.lex_state = 163},
  [90] = {.lex_state = 194},
  [91] = {.lex_state = 194},
  [92] = {.lex_state = 154},
  [93] = {.lex_state = 200},
  [94] = {.lex_state = 163},
  [95] = {.lex_state = 200},
  [96] = {.lex_state = 200},
  [97] = {.lex_state = 212},
  [98] = {.lex_state = 163},
  [99] = {.lex_state = 179},
  [100] = {.lex_state = 163},
  [101] = {.lex_state = 184},
  [102] = {.lex_state = 216},
  [103] = {.lex_state = 163},
  [104] = {.lex_state = 194},
  [105] = {.lex_state = 194},
  [106] = {.lex_state = 163},
  [107] = {.lex_state = 200},
  [108] = {.lex_state = 200},
  [109] = {.lex_state = 163},
  [110] = {.lex_state = 216},
  [111] = {.lex_state = 184},
  [112] = {.lex_state = 216},
  [113] = {.lex_state = 200},
  [114] = {.lex_state = 200},
  [115] = {.lex_state = 184},
  [116] = {.lex_state = 216},
  [117] = {.lex_state = 200},
  [118] = {.lex_state = 200},
  [119] = {.lex_state = 200},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(3),
    [sym_operator] = ACTIONS(3),
    [anon_sym_LT_POUNDlist] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1),
    [sym_break] = ACTIONS(1),
    [sym_continue] = ACTIONS(1),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1),
    [anon_sym_LT_POUNDitems] = ACTIONS(1),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH_POUNDsep_GT] = ACTIONS(1),
    [anon_sym_LT_POUNDif] = ACTIONS(1),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1),
    [anon_sym_LT_POUNDcase] = ACTIONS(1),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1),
    [anon_sym_LT_POUNDnested] = ACTIONS(1),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1),
    [sym_recover] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(8),
    [sym__definition] = STATE(10),
    [sym_directive] = STATE(10),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
  },
  [2] = {
    [sym_parameter_pattern] = STATE(13),
    [sym_paramPattern1] = STATE(14),
    [sym_paramPattern2] = STATE(14),
    [sym_paramPattern3] = STATE(14),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_expression] = STATE(15),
    [sym_parameter] = STATE(16),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(19),
    [sym_operator] = ACTIONS(21),
  },
  [3] = {
    [sym_parameter_pattern] = STATE(17),
    [sym_paramPattern1] = STATE(14),
    [sym_paramPattern2] = STATE(14),
    [sym_paramPattern3] = STATE(14),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_expression] = STATE(15),
    [sym_parameter] = STATE(16),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(19),
    [sym_operator] = ACTIONS(21),
  },
  [4] = {
    [sym_parameter_pattern] = STATE(18),
    [sym_paramPattern1] = STATE(14),
    [sym_paramPattern2] = STATE(14),
    [sym_paramPattern3] = STATE(14),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_expression] = STATE(15),
    [sym_parameter] = STATE(16),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(19),
    [sym_operator] = ACTIONS(21),
  },
  [5] = {
    [sym_parameter_pattern] = STATE(21),
    [sym_paramPattern1] = STATE(14),
    [sym_paramPattern2] = STATE(14),
    [sym_paramPattern3] = STATE(14),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_expression] = STATE(15),
    [sym_parameter] = STATE(16),
    [aux_sym_function_repeat1] = STATE(21),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(23),
    [sym_operator] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(25),
  },
  [6] = {
    [sym_parameter_pattern] = STATE(23),
    [sym_paramPattern1] = STATE(14),
    [sym_paramPattern2] = STATE(14),
    [sym_paramPattern3] = STATE(14),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_expression] = STATE(15),
    [sym_parameter] = STATE(16),
    [aux_sym_function_repeat1] = STATE(23),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(23),
    [sym_operator] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(27),
  },
  [7] = {
    [sym_directive] = STATE(25),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_attempt_middle] = STATE(26),
    [aux_sym_attempt_repeat1] = STATE(26),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(29),
    [sym_recover] = ACTIONS(31),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(33),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_LT_POUNDlist] = ACTIONS(35),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(35),
    [sym_break] = ACTIONS(35),
    [sym_continue] = ACTIONS(35),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(35),
    [anon_sym_LT_POUNDitems] = ACTIONS(35),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(35),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(35),
    [anon_sym_LT_POUNDif] = ACTIONS(35),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(35),
    [anon_sym_LT_POUNDelseif] = ACTIONS(35),
    [anon_sym_LT_POUNDswitch] = ACTIONS(35),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(35),
    [anon_sym_LT_POUNDcase] = ACTIONS(35),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(35),
    [anon_sym_LT_POUNDfunction] = ACTIONS(35),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(35),
    [anon_sym_LT_POUNDreturn] = ACTIONS(35),
    [anon_sym_LT_POUNDmacro] = ACTIONS(35),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(35),
    [anon_sym_LT_POUNDnested] = ACTIONS(35),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(35),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(35),
    [sym_recover] = ACTIONS(35),
  },
  [10] = {
    [sym__definition] = STATE(27),
    [sym_directive] = STATE(27),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
  },
  [11] = {
    [anon_sym_COMMA] = ACTIONS(39),
    [anon_sym_EQ] = ACTIONS(39),
    [sym_operator] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(39),
  },
  [12] = {
    [sym_expression] = STATE(29),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(43),
  },
  [13] = {
    [anon_sym_GT] = ACTIONS(45),
  },
  [14] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [sym_operator] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(49),
  },
  [15] = {
    [sym_operator] = ACTIONS(51),
  },
  [16] = {
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(55),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(57),
    [sym_operator] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(59),
  },
  [17] = {
    [anon_sym_GT] = ACTIONS(61),
  },
  [18] = {
    [anon_sym_GT] = ACTIONS(63),
  },
  [19] = {
    [anon_sym_COMMA] = ACTIONS(39),
    [anon_sym_EQ] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(65),
    [sym_operator] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(39),
  },
  [20] = {
    [sym_directive] = STATE(38),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_function_middle] = STATE(39),
    [sym_return] = STATE(38),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [aux_sym_function_repeat2] = STATE(39),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(67),
    [anon_sym_LT_POUNDreturn] = ACTIONS(69),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
  },
  [21] = {
    [sym_parameter_pattern] = STATE(41),
    [sym_paramPattern1] = STATE(14),
    [sym_paramPattern2] = STATE(14),
    [sym_paramPattern3] = STATE(14),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_expression] = STATE(15),
    [sym_parameter] = STATE(16),
    [aux_sym_function_repeat1] = STATE(41),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(23),
    [sym_operator] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(71),
  },
  [22] = {
    [sym_directive] = STATE(44),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_return] = STATE(44),
    [sym_macro] = STATE(9),
    [sym_macro_middle] = STATE(45),
    [sym_nested] = STATE(44),
    [sym_attempt] = STATE(9),
    [aux_sym_macro_repeat1] = STATE(45),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDreturn] = ACTIONS(69),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(73),
    [anon_sym_LT_POUNDnested] = ACTIONS(75),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
  },
  [23] = {
    [sym_parameter_pattern] = STATE(41),
    [sym_paramPattern1] = STATE(14),
    [sym_paramPattern2] = STATE(14),
    [sym_paramPattern3] = STATE(14),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_expression] = STATE(15),
    [sym_parameter] = STATE(16),
    [aux_sym_function_repeat1] = STATE(41),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(23),
    [sym_operator] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(77),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_LT_POUNDlist] = ACTIONS(79),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(79),
    [sym_break] = ACTIONS(79),
    [sym_continue] = ACTIONS(79),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(79),
    [anon_sym_LT_POUNDitems] = ACTIONS(79),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(79),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(79),
    [anon_sym_LT_POUNDif] = ACTIONS(79),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(79),
    [anon_sym_LT_POUNDelseif] = ACTIONS(79),
    [anon_sym_LT_POUNDswitch] = ACTIONS(79),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(79),
    [anon_sym_LT_POUNDcase] = ACTIONS(79),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(79),
    [anon_sym_LT_POUNDfunction] = ACTIONS(79),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(79),
    [anon_sym_LT_POUNDreturn] = ACTIONS(79),
    [anon_sym_LT_POUNDmacro] = ACTIONS(79),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(79),
    [anon_sym_LT_POUNDnested] = ACTIONS(79),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(79),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(79),
    [sym_recover] = ACTIONS(79),
  },
  [25] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(81),
    [anon_sym_LT_POUNDif] = ACTIONS(81),
    [anon_sym_LT_POUNDswitch] = ACTIONS(81),
    [anon_sym_LT_POUNDfunction] = ACTIONS(81),
    [anon_sym_LT_POUNDmacro] = ACTIONS(81),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(81),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(81),
    [sym_recover] = ACTIONS(81),
  },
  [26] = {
    [sym_directive] = STATE(25),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_attempt_middle] = STATE(48),
    [aux_sym_attempt_repeat1] = STATE(48),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(83),
    [sym_recover] = ACTIONS(31),
  },
  [27] = {
    [sym__definition] = STATE(27),
    [sym_directive] = STATE(27),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_LT_POUNDlist] = ACTIONS(87),
    [anon_sym_LT_POUNDif] = ACTIONS(90),
    [anon_sym_LT_POUNDswitch] = ACTIONS(93),
    [anon_sym_LT_POUNDfunction] = ACTIONS(96),
    [anon_sym_LT_POUNDmacro] = ACTIONS(99),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(102),
  },
  [28] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(105),
    [sym_operator] = ACTIONS(105),
    [anon_sym_GT] = ACTIONS(41),
  },
  [29] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(107),
    [sym_operator] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(109),
  },
  [30] = {
    [sym_directive] = STATE(50),
    [sym_list] = STATE(9),
    [sym_list_middle] = STATE(56),
    [sym_list_else] = STATE(54),
    [sym_items] = STATE(50),
    [sym_sep] = STATE(50),
    [sym_sep_block] = STATE(55),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [aux_sym_list_repeat1] = STATE(56),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(111),
    [sym_break] = ACTIONS(113),
    [sym_continue] = ACTIONS(113),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(115),
    [anon_sym_LT_POUNDitems] = ACTIONS(117),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(119),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
  },
  [31] = {
    [sym_expression] = STATE(57),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(43),
  },
  [32] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(121),
    [sym_operator] = ACTIONS(121),
    [anon_sym_GT] = ACTIONS(123),
  },
  [33] = {
    [sym_expression] = STATE(58),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(43),
  },
  [34] = {
    [sym_directive] = STATE(62),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_if_else] = STATE(63),
    [sym_elseif] = STATE(62),
    [sym_if_middle] = STATE(64),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [aux_sym_if_repeat1] = STATE(64),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(125),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(127),
    [anon_sym_LT_POUNDelseif] = ACTIONS(129),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
  },
  [35] = {
    [sym_case] = STATE(68),
    [sym_default] = STATE(69),
    [sym_switch_middle] = STATE(70),
    [aux_sym_switch_repeat1] = STATE(70),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(131),
    [anon_sym_LT_POUNDcase] = ACTIONS(133),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(135),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_LT_POUNDlist] = ACTIONS(137),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(137),
    [sym_break] = ACTIONS(137),
    [sym_continue] = ACTIONS(137),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(137),
    [anon_sym_LT_POUNDitems] = ACTIONS(137),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(137),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(137),
    [anon_sym_LT_POUNDif] = ACTIONS(137),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(137),
    [anon_sym_LT_POUNDelseif] = ACTIONS(137),
    [anon_sym_LT_POUNDswitch] = ACTIONS(137),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(137),
    [anon_sym_LT_POUNDcase] = ACTIONS(137),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(137),
    [anon_sym_LT_POUNDfunction] = ACTIONS(137),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(137),
    [anon_sym_LT_POUNDreturn] = ACTIONS(137),
    [anon_sym_LT_POUNDmacro] = ACTIONS(137),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(137),
    [anon_sym_LT_POUNDnested] = ACTIONS(137),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(137),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(137),
    [sym_recover] = ACTIONS(137),
  },
  [37] = {
    [sym_parameter_pattern] = STATE(72),
    [sym_paramPattern1] = STATE(14),
    [sym_paramPattern2] = STATE(14),
    [sym_paramPattern3] = STATE(14),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_expression] = STATE(15),
    [sym_parameter] = STATE(16),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(19),
    [sym_operator] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(139),
  },
  [38] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(141),
    [anon_sym_LT_POUNDif] = ACTIONS(141),
    [anon_sym_LT_POUNDswitch] = ACTIONS(141),
    [anon_sym_LT_POUNDfunction] = ACTIONS(141),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(141),
    [anon_sym_LT_POUNDreturn] = ACTIONS(141),
    [anon_sym_LT_POUNDmacro] = ACTIONS(141),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(141),
  },
  [39] = {
    [sym_directive] = STATE(38),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_function_middle] = STATE(74),
    [sym_return] = STATE(38),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [aux_sym_function_repeat2] = STATE(74),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(143),
    [anon_sym_LT_POUNDreturn] = ACTIONS(69),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
  },
  [40] = {
    [sym_directive] = STATE(38),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_function_middle] = STATE(75),
    [sym_return] = STATE(38),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [aux_sym_function_repeat2] = STATE(75),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(143),
    [anon_sym_LT_POUNDreturn] = ACTIONS(69),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
  },
  [41] = {
    [sym_parameter_pattern] = STATE(41),
    [sym_paramPattern1] = STATE(14),
    [sym_paramPattern2] = STATE(14),
    [sym_paramPattern3] = STATE(14),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_expression] = STATE(15),
    [sym_parameter] = STATE(16),
    [aux_sym_function_repeat1] = STATE(41),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(145),
    [sym_operator] = ACTIONS(148),
    [anon_sym_GT] = ACTIONS(151),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [anon_sym_LT_POUNDlist] = ACTIONS(153),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(153),
    [sym_break] = ACTIONS(153),
    [sym_continue] = ACTIONS(153),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(153),
    [anon_sym_LT_POUNDitems] = ACTIONS(153),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(153),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(153),
    [anon_sym_LT_POUNDif] = ACTIONS(153),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(153),
    [anon_sym_LT_POUNDelseif] = ACTIONS(153),
    [anon_sym_LT_POUNDswitch] = ACTIONS(153),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(153),
    [anon_sym_LT_POUNDcase] = ACTIONS(153),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(153),
    [anon_sym_LT_POUNDfunction] = ACTIONS(153),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(153),
    [anon_sym_LT_POUNDreturn] = ACTIONS(153),
    [anon_sym_LT_POUNDmacro] = ACTIONS(153),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(153),
    [anon_sym_LT_POUNDnested] = ACTIONS(153),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(153),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(153),
    [sym_recover] = ACTIONS(153),
  },
  [43] = {
    [sym_parameter_pattern] = STATE(77),
    [sym_paramPattern1] = STATE(14),
    [sym_paramPattern2] = STATE(14),
    [sym_paramPattern3] = STATE(14),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_expression] = STATE(15),
    [sym_parameter] = STATE(16),
    [aux_sym_function_repeat1] = STATE(77),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(23),
    [sym_operator] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(155),
  },
  [44] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(157),
    [anon_sym_LT_POUNDif] = ACTIONS(157),
    [anon_sym_LT_POUNDswitch] = ACTIONS(157),
    [anon_sym_LT_POUNDfunction] = ACTIONS(157),
    [anon_sym_LT_POUNDreturn] = ACTIONS(157),
    [anon_sym_LT_POUNDmacro] = ACTIONS(157),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(157),
    [anon_sym_LT_POUNDnested] = ACTIONS(157),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(157),
  },
  [45] = {
    [sym_directive] = STATE(44),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_return] = STATE(44),
    [sym_macro] = STATE(9),
    [sym_macro_middle] = STATE(79),
    [sym_nested] = STATE(44),
    [sym_attempt] = STATE(9),
    [aux_sym_macro_repeat1] = STATE(79),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDreturn] = ACTIONS(69),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(159),
    [anon_sym_LT_POUNDnested] = ACTIONS(75),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
  },
  [46] = {
    [sym_directive] = STATE(44),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_return] = STATE(44),
    [sym_macro] = STATE(9),
    [sym_macro_middle] = STATE(80),
    [sym_nested] = STATE(44),
    [sym_attempt] = STATE(9),
    [aux_sym_macro_repeat1] = STATE(80),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDreturn] = ACTIONS(69),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(159),
    [anon_sym_LT_POUNDnested] = ACTIONS(75),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_LT_POUNDlist] = ACTIONS(161),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(161),
    [sym_break] = ACTIONS(161),
    [sym_continue] = ACTIONS(161),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(161),
    [anon_sym_LT_POUNDitems] = ACTIONS(161),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(161),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(161),
    [anon_sym_LT_POUNDif] = ACTIONS(161),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(161),
    [anon_sym_LT_POUNDelseif] = ACTIONS(161),
    [anon_sym_LT_POUNDswitch] = ACTIONS(161),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(161),
    [anon_sym_LT_POUNDcase] = ACTIONS(161),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(161),
    [anon_sym_LT_POUNDfunction] = ACTIONS(161),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(161),
    [anon_sym_LT_POUNDreturn] = ACTIONS(161),
    [anon_sym_LT_POUNDmacro] = ACTIONS(161),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(161),
    [anon_sym_LT_POUNDnested] = ACTIONS(161),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(161),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(161),
    [sym_recover] = ACTIONS(161),
  },
  [48] = {
    [sym_directive] = STATE(25),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_attempt_middle] = STATE(48),
    [aux_sym_attempt_repeat1] = STATE(48),
    [anon_sym_LT_POUNDlist] = ACTIONS(163),
    [anon_sym_LT_POUNDif] = ACTIONS(166),
    [anon_sym_LT_POUNDswitch] = ACTIONS(169),
    [anon_sym_LT_POUNDfunction] = ACTIONS(172),
    [anon_sym_LT_POUNDmacro] = ACTIONS(175),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(178),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(181),
    [sym_recover] = ACTIONS(183),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(186),
    [anon_sym_LT_POUNDlist] = ACTIONS(186),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(186),
    [sym_break] = ACTIONS(186),
    [sym_continue] = ACTIONS(186),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(186),
    [anon_sym_LT_POUNDitems] = ACTIONS(186),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(186),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(186),
    [anon_sym_LT_POUNDif] = ACTIONS(186),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(186),
    [anon_sym_LT_POUNDelseif] = ACTIONS(186),
    [anon_sym_LT_POUNDswitch] = ACTIONS(186),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(186),
    [anon_sym_LT_POUNDcase] = ACTIONS(186),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(186),
    [anon_sym_LT_POUNDfunction] = ACTIONS(186),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(186),
    [anon_sym_LT_POUNDreturn] = ACTIONS(186),
    [anon_sym_LT_POUNDmacro] = ACTIONS(186),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(186),
    [anon_sym_LT_POUNDnested] = ACTIONS(186),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(186),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(186),
    [sym_recover] = ACTIONS(186),
  },
  [50] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(188),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(188),
    [sym_break] = ACTIONS(188),
    [sym_continue] = ACTIONS(188),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(188),
    [anon_sym_LT_POUNDitems] = ACTIONS(188),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(188),
    [anon_sym_LT_POUNDif] = ACTIONS(188),
    [anon_sym_LT_POUNDswitch] = ACTIONS(188),
    [anon_sym_LT_POUNDfunction] = ACTIONS(188),
    [anon_sym_LT_POUNDmacro] = ACTIONS(188),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(188),
  },
  [51] = {
    [sym_directive] = STATE(50),
    [sym_list] = STATE(9),
    [sym_list_middle] = STATE(81),
    [sym_items] = STATE(50),
    [sym_sep] = STATE(50),
    [sym_sep_block] = STATE(55),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [aux_sym_list_repeat1] = STATE(81),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(190),
    [sym_break] = ACTIONS(113),
    [sym_continue] = ACTIONS(113),
    [anon_sym_LT_POUNDitems] = ACTIONS(117),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(119),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
  },
  [52] = {
    [sym_parameter_pattern] = STATE(82),
    [sym_paramPattern1] = STATE(14),
    [sym_paramPattern2] = STATE(14),
    [sym_paramPattern3] = STATE(14),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_expression] = STATE(15),
    [sym_parameter] = STATE(16),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(19),
    [sym_operator] = ACTIONS(21),
  },
  [53] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(192),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(192),
    [sym_break] = ACTIONS(192),
    [sym_continue] = ACTIONS(192),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(192),
    [anon_sym_LT_POUNDitems] = ACTIONS(192),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(192),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(192),
    [anon_sym_LT_SLASH_POUNDsep_GT] = ACTIONS(194),
    [anon_sym_LT_POUNDif] = ACTIONS(192),
    [anon_sym_LT_POUNDswitch] = ACTIONS(192),
    [anon_sym_LT_POUNDfunction] = ACTIONS(192),
    [anon_sym_LT_POUNDmacro] = ACTIONS(192),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(192),
  },
  [54] = {
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(196),
  },
  [55] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(192),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(192),
    [sym_break] = ACTIONS(192),
    [sym_continue] = ACTIONS(192),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(192),
    [anon_sym_LT_POUNDitems] = ACTIONS(192),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(192),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(192),
    [anon_sym_LT_POUNDif] = ACTIONS(192),
    [anon_sym_LT_POUNDswitch] = ACTIONS(192),
    [anon_sym_LT_POUNDfunction] = ACTIONS(192),
    [anon_sym_LT_POUNDmacro] = ACTIONS(192),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(192),
  },
  [56] = {
    [sym_directive] = STATE(50),
    [sym_list] = STATE(9),
    [sym_list_middle] = STATE(86),
    [sym_list_else] = STATE(85),
    [sym_items] = STATE(50),
    [sym_sep] = STATE(50),
    [sym_sep_block] = STATE(55),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [aux_sym_list_repeat1] = STATE(86),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(196),
    [sym_break] = ACTIONS(113),
    [sym_continue] = ACTIONS(113),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(115),
    [anon_sym_LT_POUNDitems] = ACTIONS(117),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(119),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
  },
  [57] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(198),
    [sym_operator] = ACTIONS(198),
    [anon_sym_GT] = ACTIONS(200),
  },
  [58] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(202),
    [sym_operator] = ACTIONS(202),
    [anon_sym_GT] = ACTIONS(204),
  },
  [59] = {
    [sym_directive] = STATE(62),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_elseif] = STATE(62),
    [sym_if_middle] = STATE(87),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [aux_sym_if_repeat1] = STATE(87),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(206),
    [anon_sym_LT_POUNDelseif] = ACTIONS(129),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(208),
    [anon_sym_LT_POUNDlist] = ACTIONS(208),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(208),
    [sym_break] = ACTIONS(208),
    [sym_continue] = ACTIONS(208),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(208),
    [anon_sym_LT_POUNDitems] = ACTIONS(208),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(208),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(208),
    [anon_sym_LT_POUNDif] = ACTIONS(208),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(208),
    [anon_sym_LT_POUNDelseif] = ACTIONS(208),
    [anon_sym_LT_POUNDswitch] = ACTIONS(208),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(208),
    [anon_sym_LT_POUNDcase] = ACTIONS(208),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(208),
    [anon_sym_LT_POUNDfunction] = ACTIONS(208),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(208),
    [anon_sym_LT_POUNDreturn] = ACTIONS(208),
    [anon_sym_LT_POUNDmacro] = ACTIONS(208),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(208),
    [anon_sym_LT_POUNDnested] = ACTIONS(208),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(208),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(208),
    [sym_recover] = ACTIONS(208),
  },
  [61] = {
    [sym_parameter_pattern] = STATE(88),
    [sym_paramPattern1] = STATE(14),
    [sym_paramPattern2] = STATE(14),
    [sym_paramPattern3] = STATE(14),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_expression] = STATE(15),
    [sym_parameter] = STATE(16),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(19),
    [sym_operator] = ACTIONS(21),
  },
  [62] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(210),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(210),
    [anon_sym_LT_POUNDif] = ACTIONS(210),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(210),
    [anon_sym_LT_POUNDelseif] = ACTIONS(210),
    [anon_sym_LT_POUNDswitch] = ACTIONS(210),
    [anon_sym_LT_POUNDfunction] = ACTIONS(210),
    [anon_sym_LT_POUNDmacro] = ACTIONS(210),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(210),
  },
  [63] = {
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(212),
  },
  [64] = {
    [sym_directive] = STATE(62),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_if_else] = STATE(90),
    [sym_elseif] = STATE(62),
    [sym_if_middle] = STATE(91),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [aux_sym_if_repeat1] = STATE(91),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(125),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(212),
    [anon_sym_LT_POUNDelseif] = ACTIONS(129),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(214),
    [anon_sym_LT_POUNDlist] = ACTIONS(214),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(214),
    [sym_break] = ACTIONS(214),
    [sym_continue] = ACTIONS(214),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(214),
    [anon_sym_LT_POUNDitems] = ACTIONS(214),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(214),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(214),
    [anon_sym_LT_POUNDif] = ACTIONS(214),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(214),
    [anon_sym_LT_POUNDelseif] = ACTIONS(214),
    [anon_sym_LT_POUNDswitch] = ACTIONS(214),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(214),
    [anon_sym_LT_POUNDcase] = ACTIONS(214),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(214),
    [anon_sym_LT_POUNDfunction] = ACTIONS(214),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(214),
    [anon_sym_LT_POUNDreturn] = ACTIONS(214),
    [anon_sym_LT_POUNDmacro] = ACTIONS(214),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(214),
    [anon_sym_LT_POUNDnested] = ACTIONS(214),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(214),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(214),
    [sym_recover] = ACTIONS(214),
  },
  [66] = {
    [sym_parameter_pattern] = STATE(92),
    [sym_paramPattern1] = STATE(14),
    [sym_paramPattern2] = STATE(14),
    [sym_paramPattern3] = STATE(14),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_expression] = STATE(15),
    [sym_parameter] = STATE(16),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(19),
    [sym_operator] = ACTIONS(21),
  },
  [67] = {
    [sym_directive] = STATE(93),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [aux_sym_case_repeat1] = STATE(93),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(216),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
  },
  [68] = {
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(218),
    [anon_sym_LT_POUNDcase] = ACTIONS(218),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(218),
  },
  [69] = {
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(220),
  },
  [70] = {
    [sym_case] = STATE(68),
    [sym_default] = STATE(95),
    [sym_switch_middle] = STATE(96),
    [aux_sym_switch_repeat1] = STATE(96),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(220),
    [anon_sym_LT_POUNDcase] = ACTIONS(133),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(135),
  },
  [71] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(222),
    [anon_sym_LT_POUNDif] = ACTIONS(222),
    [anon_sym_LT_POUNDswitch] = ACTIONS(222),
    [anon_sym_LT_POUNDfunction] = ACTIONS(222),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(222),
    [anon_sym_LT_POUNDreturn] = ACTIONS(222),
    [anon_sym_LT_POUNDmacro] = ACTIONS(222),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(222),
    [anon_sym_LT_POUNDnested] = ACTIONS(222),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(222),
  },
  [72] = {
    [anon_sym_GT] = ACTIONS(224),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(226),
    [anon_sym_LT_POUNDlist] = ACTIONS(226),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(226),
    [sym_break] = ACTIONS(226),
    [sym_continue] = ACTIONS(226),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(226),
    [anon_sym_LT_POUNDitems] = ACTIONS(226),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(226),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(226),
    [anon_sym_LT_POUNDif] = ACTIONS(226),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(226),
    [anon_sym_LT_POUNDelseif] = ACTIONS(226),
    [anon_sym_LT_POUNDswitch] = ACTIONS(226),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(226),
    [anon_sym_LT_POUNDcase] = ACTIONS(226),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(226),
    [anon_sym_LT_POUNDfunction] = ACTIONS(226),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(226),
    [anon_sym_LT_POUNDreturn] = ACTIONS(226),
    [anon_sym_LT_POUNDmacro] = ACTIONS(226),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(226),
    [anon_sym_LT_POUNDnested] = ACTIONS(226),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(226),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(226),
    [sym_recover] = ACTIONS(226),
  },
  [74] = {
    [sym_directive] = STATE(38),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_function_middle] = STATE(74),
    [sym_return] = STATE(38),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [aux_sym_function_repeat2] = STATE(74),
    [anon_sym_LT_POUNDlist] = ACTIONS(228),
    [anon_sym_LT_POUNDif] = ACTIONS(231),
    [anon_sym_LT_POUNDswitch] = ACTIONS(234),
    [anon_sym_LT_POUNDfunction] = ACTIONS(237),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(240),
    [anon_sym_LT_POUNDreturn] = ACTIONS(242),
    [anon_sym_LT_POUNDmacro] = ACTIONS(245),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(248),
  },
  [75] = {
    [sym_directive] = STATE(38),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_function_middle] = STATE(74),
    [sym_return] = STATE(38),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [aux_sym_function_repeat2] = STATE(74),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(251),
    [anon_sym_LT_POUNDreturn] = ACTIONS(69),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
  },
  [76] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(253),
    [anon_sym_LT_POUNDif] = ACTIONS(253),
    [anon_sym_LT_POUNDswitch] = ACTIONS(253),
    [anon_sym_LT_POUNDfunction] = ACTIONS(253),
    [anon_sym_LT_POUNDreturn] = ACTIONS(253),
    [anon_sym_LT_POUNDmacro] = ACTIONS(253),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(253),
    [anon_sym_LT_POUNDnested] = ACTIONS(253),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(253),
  },
  [77] = {
    [sym_parameter_pattern] = STATE(41),
    [sym_paramPattern1] = STATE(14),
    [sym_paramPattern2] = STATE(14),
    [sym_paramPattern3] = STATE(14),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_expression] = STATE(15),
    [sym_parameter] = STATE(16),
    [aux_sym_function_repeat1] = STATE(41),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(23),
    [sym_operator] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(255),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(257),
    [anon_sym_LT_POUNDlist] = ACTIONS(257),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(257),
    [sym_break] = ACTIONS(257),
    [sym_continue] = ACTIONS(257),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(257),
    [anon_sym_LT_POUNDitems] = ACTIONS(257),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(257),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(257),
    [anon_sym_LT_POUNDif] = ACTIONS(257),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(257),
    [anon_sym_LT_POUNDelseif] = ACTIONS(257),
    [anon_sym_LT_POUNDswitch] = ACTIONS(257),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(257),
    [anon_sym_LT_POUNDcase] = ACTIONS(257),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(257),
    [anon_sym_LT_POUNDfunction] = ACTIONS(257),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(257),
    [anon_sym_LT_POUNDreturn] = ACTIONS(257),
    [anon_sym_LT_POUNDmacro] = ACTIONS(257),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(257),
    [anon_sym_LT_POUNDnested] = ACTIONS(257),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(257),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(257),
    [sym_recover] = ACTIONS(257),
  },
  [79] = {
    [sym_directive] = STATE(44),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_return] = STATE(44),
    [sym_macro] = STATE(9),
    [sym_macro_middle] = STATE(79),
    [sym_nested] = STATE(44),
    [sym_attempt] = STATE(9),
    [aux_sym_macro_repeat1] = STATE(79),
    [anon_sym_LT_POUNDlist] = ACTIONS(259),
    [anon_sym_LT_POUNDif] = ACTIONS(262),
    [anon_sym_LT_POUNDswitch] = ACTIONS(265),
    [anon_sym_LT_POUNDfunction] = ACTIONS(268),
    [anon_sym_LT_POUNDreturn] = ACTIONS(271),
    [anon_sym_LT_POUNDmacro] = ACTIONS(274),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(277),
    [anon_sym_LT_POUNDnested] = ACTIONS(279),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(282),
  },
  [80] = {
    [sym_directive] = STATE(44),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_return] = STATE(44),
    [sym_macro] = STATE(9),
    [sym_macro_middle] = STATE(79),
    [sym_nested] = STATE(44),
    [sym_attempt] = STATE(9),
    [aux_sym_macro_repeat1] = STATE(79),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDreturn] = ACTIONS(69),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(285),
    [anon_sym_LT_POUNDnested] = ACTIONS(75),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
  },
  [81] = {
    [sym_directive] = STATE(50),
    [sym_list] = STATE(9),
    [sym_list_middle] = STATE(101),
    [sym_items] = STATE(50),
    [sym_sep] = STATE(50),
    [sym_sep_block] = STATE(55),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [aux_sym_list_repeat1] = STATE(101),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(287),
    [sym_break] = ACTIONS(113),
    [sym_continue] = ACTIONS(113),
    [anon_sym_LT_POUNDitems] = ACTIONS(117),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(119),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
  },
  [82] = {
    [anon_sym_GT] = ACTIONS(289),
  },
  [83] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(291),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(291),
    [sym_break] = ACTIONS(291),
    [sym_continue] = ACTIONS(291),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(291),
    [anon_sym_LT_POUNDitems] = ACTIONS(291),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(291),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(291),
    [anon_sym_LT_POUNDif] = ACTIONS(291),
    [anon_sym_LT_POUNDswitch] = ACTIONS(291),
    [anon_sym_LT_POUNDfunction] = ACTIONS(291),
    [anon_sym_LT_POUNDmacro] = ACTIONS(291),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(291),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(293),
    [anon_sym_LT_POUNDlist] = ACTIONS(293),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(293),
    [sym_break] = ACTIONS(293),
    [sym_continue] = ACTIONS(293),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(293),
    [anon_sym_LT_POUNDitems] = ACTIONS(293),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(293),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(293),
    [anon_sym_LT_POUNDif] = ACTIONS(293),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(293),
    [anon_sym_LT_POUNDelseif] = ACTIONS(293),
    [anon_sym_LT_POUNDswitch] = ACTIONS(293),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(293),
    [anon_sym_LT_POUNDcase] = ACTIONS(293),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(293),
    [anon_sym_LT_POUNDfunction] = ACTIONS(293),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(293),
    [anon_sym_LT_POUNDreturn] = ACTIONS(293),
    [anon_sym_LT_POUNDmacro] = ACTIONS(293),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(293),
    [anon_sym_LT_POUNDnested] = ACTIONS(293),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(293),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(293),
    [sym_recover] = ACTIONS(293),
  },
  [85] = {
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(295),
  },
  [86] = {
    [sym_directive] = STATE(50),
    [sym_list] = STATE(9),
    [sym_list_middle] = STATE(86),
    [sym_items] = STATE(50),
    [sym_sep] = STATE(50),
    [sym_sep_block] = STATE(55),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [aux_sym_list_repeat1] = STATE(86),
    [anon_sym_LT_POUNDlist] = ACTIONS(297),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(300),
    [sym_break] = ACTIONS(302),
    [sym_continue] = ACTIONS(302),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(300),
    [anon_sym_LT_POUNDitems] = ACTIONS(305),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(308),
    [anon_sym_LT_POUNDif] = ACTIONS(311),
    [anon_sym_LT_POUNDswitch] = ACTIONS(314),
    [anon_sym_LT_POUNDfunction] = ACTIONS(317),
    [anon_sym_LT_POUNDmacro] = ACTIONS(320),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(323),
  },
  [87] = {
    [sym_directive] = STATE(62),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_elseif] = STATE(62),
    [sym_if_middle] = STATE(104),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [aux_sym_if_repeat1] = STATE(104),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(326),
    [anon_sym_LT_POUNDelseif] = ACTIONS(129),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
  },
  [88] = {
    [anon_sym_GT] = ACTIONS(328),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(330),
    [anon_sym_LT_POUNDlist] = ACTIONS(330),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(330),
    [sym_break] = ACTIONS(330),
    [sym_continue] = ACTIONS(330),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(330),
    [anon_sym_LT_POUNDitems] = ACTIONS(330),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(330),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(330),
    [anon_sym_LT_POUNDif] = ACTIONS(330),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(330),
    [anon_sym_LT_POUNDelseif] = ACTIONS(330),
    [anon_sym_LT_POUNDswitch] = ACTIONS(330),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(330),
    [anon_sym_LT_POUNDcase] = ACTIONS(330),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(330),
    [anon_sym_LT_POUNDfunction] = ACTIONS(330),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(330),
    [anon_sym_LT_POUNDreturn] = ACTIONS(330),
    [anon_sym_LT_POUNDmacro] = ACTIONS(330),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(330),
    [anon_sym_LT_POUNDnested] = ACTIONS(330),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(330),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(330),
    [sym_recover] = ACTIONS(330),
  },
  [90] = {
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(332),
  },
  [91] = {
    [sym_directive] = STATE(62),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_elseif] = STATE(62),
    [sym_if_middle] = STATE(91),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [aux_sym_if_repeat1] = STATE(91),
    [anon_sym_LT_POUNDlist] = ACTIONS(334),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(337),
    [anon_sym_LT_POUNDif] = ACTIONS(339),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(337),
    [anon_sym_LT_POUNDelseif] = ACTIONS(342),
    [anon_sym_LT_POUNDswitch] = ACTIONS(345),
    [anon_sym_LT_POUNDfunction] = ACTIONS(348),
    [anon_sym_LT_POUNDmacro] = ACTIONS(351),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(354),
  },
  [92] = {
    [anon_sym_GT] = ACTIONS(357),
  },
  [93] = {
    [sym_directive] = STATE(108),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [aux_sym_case_repeat1] = STATE(108),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(359),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(361),
    [anon_sym_LT_POUNDlist] = ACTIONS(361),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(361),
    [sym_break] = ACTIONS(361),
    [sym_continue] = ACTIONS(361),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(361),
    [anon_sym_LT_POUNDitems] = ACTIONS(361),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(361),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(361),
    [anon_sym_LT_POUNDif] = ACTIONS(361),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(361),
    [anon_sym_LT_POUNDelseif] = ACTIONS(361),
    [anon_sym_LT_POUNDswitch] = ACTIONS(361),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(361),
    [anon_sym_LT_POUNDcase] = ACTIONS(361),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(361),
    [anon_sym_LT_POUNDfunction] = ACTIONS(361),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(361),
    [anon_sym_LT_POUNDreturn] = ACTIONS(361),
    [anon_sym_LT_POUNDmacro] = ACTIONS(361),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(361),
    [anon_sym_LT_POUNDnested] = ACTIONS(361),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(361),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(361),
    [sym_recover] = ACTIONS(361),
  },
  [95] = {
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(363),
  },
  [96] = {
    [sym_case] = STATE(68),
    [sym_switch_middle] = STATE(96),
    [aux_sym_switch_repeat1] = STATE(96),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(365),
    [anon_sym_LT_POUNDcase] = ACTIONS(367),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(365),
  },
  [97] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(370),
    [anon_sym_LT_POUNDif] = ACTIONS(370),
    [anon_sym_LT_POUNDswitch] = ACTIONS(370),
    [anon_sym_LT_POUNDfunction] = ACTIONS(370),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(370),
    [anon_sym_LT_POUNDreturn] = ACTIONS(370),
    [anon_sym_LT_POUNDmacro] = ACTIONS(370),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(370),
    [anon_sym_LT_POUNDnested] = ACTIONS(370),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(370),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(372),
    [anon_sym_LT_POUNDlist] = ACTIONS(372),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(372),
    [sym_break] = ACTIONS(372),
    [sym_continue] = ACTIONS(372),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(372),
    [anon_sym_LT_POUNDitems] = ACTIONS(372),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(372),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(372),
    [anon_sym_LT_POUNDif] = ACTIONS(372),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(372),
    [anon_sym_LT_POUNDelseif] = ACTIONS(372),
    [anon_sym_LT_POUNDswitch] = ACTIONS(372),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(372),
    [anon_sym_LT_POUNDcase] = ACTIONS(372),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(372),
    [anon_sym_LT_POUNDfunction] = ACTIONS(372),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(372),
    [anon_sym_LT_POUNDreturn] = ACTIONS(372),
    [anon_sym_LT_POUNDmacro] = ACTIONS(372),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(372),
    [anon_sym_LT_POUNDnested] = ACTIONS(372),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(372),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(372),
    [sym_recover] = ACTIONS(372),
  },
  [99] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(374),
    [anon_sym_LT_POUNDif] = ACTIONS(374),
    [anon_sym_LT_POUNDswitch] = ACTIONS(374),
    [anon_sym_LT_POUNDfunction] = ACTIONS(374),
    [anon_sym_LT_POUNDreturn] = ACTIONS(374),
    [anon_sym_LT_POUNDmacro] = ACTIONS(374),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(374),
    [anon_sym_LT_POUNDnested] = ACTIONS(374),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(374),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(376),
    [anon_sym_LT_POUNDlist] = ACTIONS(376),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(376),
    [sym_break] = ACTIONS(376),
    [sym_continue] = ACTIONS(376),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(376),
    [anon_sym_LT_POUNDitems] = ACTIONS(376),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(376),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(376),
    [anon_sym_LT_POUNDif] = ACTIONS(376),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(376),
    [anon_sym_LT_POUNDelseif] = ACTIONS(376),
    [anon_sym_LT_POUNDswitch] = ACTIONS(376),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(376),
    [anon_sym_LT_POUNDcase] = ACTIONS(376),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(376),
    [anon_sym_LT_POUNDfunction] = ACTIONS(376),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(376),
    [anon_sym_LT_POUNDreturn] = ACTIONS(376),
    [anon_sym_LT_POUNDmacro] = ACTIONS(376),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(376),
    [anon_sym_LT_POUNDnested] = ACTIONS(376),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(376),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(376),
    [sym_recover] = ACTIONS(376),
  },
  [101] = {
    [sym_directive] = STATE(50),
    [sym_list] = STATE(9),
    [sym_list_middle] = STATE(101),
    [sym_items] = STATE(50),
    [sym_sep] = STATE(50),
    [sym_sep_block] = STATE(55),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [aux_sym_list_repeat1] = STATE(101),
    [anon_sym_LT_POUNDlist] = ACTIONS(297),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(300),
    [sym_break] = ACTIONS(302),
    [sym_continue] = ACTIONS(302),
    [anon_sym_LT_POUNDitems] = ACTIONS(305),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(308),
    [anon_sym_LT_POUNDif] = ACTIONS(311),
    [anon_sym_LT_POUNDswitch] = ACTIONS(314),
    [anon_sym_LT_POUNDfunction] = ACTIONS(317),
    [anon_sym_LT_POUNDmacro] = ACTIONS(320),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(323),
  },
  [102] = {
    [sym_directive] = STATE(110),
    [sym_list] = STATE(9),
    [sym_items_middle] = STATE(112),
    [sym_sep] = STATE(110),
    [sym_sep_block] = STATE(55),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [aux_sym_items_repeat1] = STATE(112),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [sym_break] = ACTIONS(378),
    [sym_continue] = ACTIONS(378),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(380),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(119),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(382),
    [anon_sym_LT_POUNDlist] = ACTIONS(382),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(382),
    [sym_break] = ACTIONS(382),
    [sym_continue] = ACTIONS(382),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(382),
    [anon_sym_LT_POUNDitems] = ACTIONS(382),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(382),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(382),
    [anon_sym_LT_POUNDif] = ACTIONS(382),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(382),
    [anon_sym_LT_POUNDelseif] = ACTIONS(382),
    [anon_sym_LT_POUNDswitch] = ACTIONS(382),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(382),
    [anon_sym_LT_POUNDcase] = ACTIONS(382),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(382),
    [anon_sym_LT_POUNDfunction] = ACTIONS(382),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(382),
    [anon_sym_LT_POUNDreturn] = ACTIONS(382),
    [anon_sym_LT_POUNDmacro] = ACTIONS(382),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(382),
    [anon_sym_LT_POUNDnested] = ACTIONS(382),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(382),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(382),
    [sym_recover] = ACTIONS(382),
  },
  [104] = {
    [sym_directive] = STATE(62),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_elseif] = STATE(62),
    [sym_if_middle] = STATE(104),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [aux_sym_if_repeat1] = STATE(104),
    [anon_sym_LT_POUNDlist] = ACTIONS(334),
    [anon_sym_LT_POUNDif] = ACTIONS(339),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(337),
    [anon_sym_LT_POUNDelseif] = ACTIONS(342),
    [anon_sym_LT_POUNDswitch] = ACTIONS(345),
    [anon_sym_LT_POUNDfunction] = ACTIONS(348),
    [anon_sym_LT_POUNDmacro] = ACTIONS(351),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(354),
  },
  [105] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(384),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(384),
    [anon_sym_LT_POUNDif] = ACTIONS(384),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(384),
    [anon_sym_LT_POUNDelseif] = ACTIONS(384),
    [anon_sym_LT_POUNDswitch] = ACTIONS(384),
    [anon_sym_LT_POUNDfunction] = ACTIONS(384),
    [anon_sym_LT_POUNDmacro] = ACTIONS(384),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(384),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(386),
    [anon_sym_LT_POUNDlist] = ACTIONS(386),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(386),
    [sym_break] = ACTIONS(386),
    [sym_continue] = ACTIONS(386),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(386),
    [anon_sym_LT_POUNDitems] = ACTIONS(386),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(386),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(386),
    [anon_sym_LT_POUNDif] = ACTIONS(386),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(386),
    [anon_sym_LT_POUNDelseif] = ACTIONS(386),
    [anon_sym_LT_POUNDswitch] = ACTIONS(386),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(386),
    [anon_sym_LT_POUNDcase] = ACTIONS(386),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(386),
    [anon_sym_LT_POUNDfunction] = ACTIONS(386),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(386),
    [anon_sym_LT_POUNDreturn] = ACTIONS(386),
    [anon_sym_LT_POUNDmacro] = ACTIONS(386),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(386),
    [anon_sym_LT_POUNDnested] = ACTIONS(386),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(386),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(386),
    [sym_recover] = ACTIONS(386),
  },
  [107] = {
    [sym_directive] = STATE(113),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [aux_sym_case_repeat1] = STATE(113),
    [aux_sym_case_repeat2] = STATE(114),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [sym_break] = ACTIONS(388),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(390),
    [anon_sym_LT_POUNDcase] = ACTIONS(390),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(390),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
  },
  [108] = {
    [sym_directive] = STATE(108),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [aux_sym_case_repeat1] = STATE(108),
    [anon_sym_LT_POUNDlist] = ACTIONS(392),
    [anon_sym_LT_POUNDif] = ACTIONS(395),
    [anon_sym_LT_POUNDswitch] = ACTIONS(398),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(401),
    [anon_sym_LT_POUNDfunction] = ACTIONS(403),
    [anon_sym_LT_POUNDmacro] = ACTIONS(406),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(409),
  },
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(412),
    [anon_sym_LT_POUNDlist] = ACTIONS(412),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(412),
    [sym_break] = ACTIONS(412),
    [sym_continue] = ACTIONS(412),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(412),
    [anon_sym_LT_POUNDitems] = ACTIONS(412),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(412),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(412),
    [anon_sym_LT_POUNDif] = ACTIONS(412),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(412),
    [anon_sym_LT_POUNDelseif] = ACTIONS(412),
    [anon_sym_LT_POUNDswitch] = ACTIONS(412),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(412),
    [anon_sym_LT_POUNDcase] = ACTIONS(412),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(412),
    [anon_sym_LT_POUNDfunction] = ACTIONS(412),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(412),
    [anon_sym_LT_POUNDreturn] = ACTIONS(412),
    [anon_sym_LT_POUNDmacro] = ACTIONS(412),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(412),
    [anon_sym_LT_POUNDnested] = ACTIONS(412),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(412),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(412),
    [sym_recover] = ACTIONS(412),
  },
  [110] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(414),
    [sym_break] = ACTIONS(414),
    [sym_continue] = ACTIONS(414),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(414),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(414),
    [anon_sym_LT_POUNDif] = ACTIONS(414),
    [anon_sym_LT_POUNDswitch] = ACTIONS(414),
    [anon_sym_LT_POUNDfunction] = ACTIONS(414),
    [anon_sym_LT_POUNDmacro] = ACTIONS(414),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(414),
  },
  [111] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(416),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(416),
    [sym_break] = ACTIONS(416),
    [sym_continue] = ACTIONS(416),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(416),
    [anon_sym_LT_POUNDitems] = ACTIONS(416),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(416),
    [anon_sym_LT_POUNDif] = ACTIONS(416),
    [anon_sym_LT_POUNDswitch] = ACTIONS(416),
    [anon_sym_LT_POUNDfunction] = ACTIONS(416),
    [anon_sym_LT_POUNDmacro] = ACTIONS(416),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(416),
  },
  [112] = {
    [sym_directive] = STATE(110),
    [sym_list] = STATE(9),
    [sym_items_middle] = STATE(116),
    [sym_sep] = STATE(110),
    [sym_sep_block] = STATE(55),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [aux_sym_items_repeat1] = STATE(116),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [sym_break] = ACTIONS(378),
    [sym_continue] = ACTIONS(378),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(418),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(119),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
  },
  [113] = {
    [sym_directive] = STATE(117),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [aux_sym_case_repeat1] = STATE(117),
    [aux_sym_case_repeat2] = STATE(118),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [sym_break] = ACTIONS(420),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(422),
    [anon_sym_LT_POUNDcase] = ACTIONS(422),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(422),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
  },
  [114] = {
    [aux_sym_case_repeat2] = STATE(119),
    [sym_break] = ACTIONS(424),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(422),
    [anon_sym_LT_POUNDcase] = ACTIONS(422),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(422),
  },
  [115] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(426),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(426),
    [sym_break] = ACTIONS(426),
    [sym_continue] = ACTIONS(426),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(426),
    [anon_sym_LT_POUNDitems] = ACTIONS(426),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(426),
    [anon_sym_LT_POUNDif] = ACTIONS(426),
    [anon_sym_LT_POUNDswitch] = ACTIONS(426),
    [anon_sym_LT_POUNDfunction] = ACTIONS(426),
    [anon_sym_LT_POUNDmacro] = ACTIONS(426),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(426),
  },
  [116] = {
    [sym_directive] = STATE(110),
    [sym_list] = STATE(9),
    [sym_items_middle] = STATE(116),
    [sym_sep] = STATE(110),
    [sym_sep_block] = STATE(55),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [aux_sym_items_repeat1] = STATE(116),
    [anon_sym_LT_POUNDlist] = ACTIONS(428),
    [sym_break] = ACTIONS(431),
    [sym_continue] = ACTIONS(431),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(434),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(436),
    [anon_sym_LT_POUNDif] = ACTIONS(439),
    [anon_sym_LT_POUNDswitch] = ACTIONS(442),
    [anon_sym_LT_POUNDfunction] = ACTIONS(445),
    [anon_sym_LT_POUNDmacro] = ACTIONS(448),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(451),
  },
  [117] = {
    [sym_directive] = STATE(117),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [aux_sym_case_repeat1] = STATE(117),
    [anon_sym_LT_POUNDlist] = ACTIONS(392),
    [sym_break] = ACTIONS(401),
    [anon_sym_LT_POUNDif] = ACTIONS(395),
    [anon_sym_LT_POUNDswitch] = ACTIONS(398),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(401),
    [anon_sym_LT_POUNDcase] = ACTIONS(401),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(401),
    [anon_sym_LT_POUNDfunction] = ACTIONS(403),
    [anon_sym_LT_POUNDmacro] = ACTIONS(406),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(409),
  },
  [118] = {
    [aux_sym_case_repeat2] = STATE(119),
    [sym_break] = ACTIONS(424),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(454),
    [anon_sym_LT_POUNDcase] = ACTIONS(454),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(454),
  },
  [119] = {
    [aux_sym_case_repeat2] = STATE(119),
    [sym_break] = ACTIONS(456),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(459),
    [anon_sym_LT_POUNDcase] = ACTIONS(459),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(459),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = true}, SHIFT(6),
  [17] = {.count = 1, .reusable = true}, SHIFT(7),
  [19] = {.count = 1, .reusable = false}, SHIFT(11),
  [21] = {.count = 1, .reusable = false}, SHIFT(12),
  [23] = {.count = 1, .reusable = false}, SHIFT(19),
  [25] = {.count = 1, .reusable = true}, SHIFT(20),
  [27] = {.count = 1, .reusable = true}, SHIFT(22),
  [29] = {.count = 1, .reusable = true}, SHIFT(24),
  [31] = {.count = 1, .reusable = true}, SHIFT(25),
  [33] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_directive, 1),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 1),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [43] = {.count = 1, .reusable = true}, SHIFT(28),
  [45] = {.count = 1, .reusable = true}, SHIFT(30),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_pattern, 1),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_pattern, 1),
  [51] = {.count = 1, .reusable = true}, SHIFT(31),
  [53] = {.count = 1, .reusable = true}, SHIFT(32),
  [55] = {.count = 1, .reusable = true}, SHIFT(33),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym_paramPattern1, 1),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_paramPattern1, 1),
  [61] = {.count = 1, .reusable = true}, SHIFT(34),
  [63] = {.count = 1, .reusable = true}, SHIFT(35),
  [65] = {.count = 1, .reusable = false}, REDUCE(sym_parameter, 1),
  [67] = {.count = 1, .reusable = true}, SHIFT(36),
  [69] = {.count = 1, .reusable = true}, SHIFT(37),
  [71] = {.count = 1, .reusable = true}, SHIFT(40),
  [73] = {.count = 1, .reusable = true}, SHIFT(42),
  [75] = {.count = 1, .reusable = true}, SHIFT(43),
  [77] = {.count = 1, .reusable = true}, SHIFT(46),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_attempt, 2),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_attempt_middle, 1),
  [83] = {.count = 1, .reusable = true}, SHIFT(47),
  [85] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 1),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2),
  [111] = {.count = 1, .reusable = true}, SHIFT(49),
  [113] = {.count = 1, .reusable = true}, SHIFT(50),
  [115] = {.count = 1, .reusable = true}, SHIFT(51),
  [117] = {.count = 1, .reusable = true}, SHIFT(52),
  [119] = {.count = 1, .reusable = true}, SHIFT(53),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_paramPattern2, 2),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_paramPattern2, 2),
  [125] = {.count = 1, .reusable = true}, SHIFT(59),
  [127] = {.count = 1, .reusable = true}, SHIFT(60),
  [129] = {.count = 1, .reusable = true}, SHIFT(61),
  [131] = {.count = 1, .reusable = true}, SHIFT(65),
  [133] = {.count = 1, .reusable = true}, SHIFT(66),
  [135] = {.count = 1, .reusable = true}, SHIFT(67),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_function, 3),
  [139] = {.count = 1, .reusable = true}, SHIFT(71),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_function_middle, 1),
  [143] = {.count = 1, .reusable = true}, SHIFT(73),
  [145] = {.count = 2, .reusable = false}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(19),
  [148] = {.count = 2, .reusable = false}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(12),
  [151] = {.count = 1, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_macro, 3),
  [155] = {.count = 1, .reusable = true}, SHIFT(76),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_macro_middle, 1),
  [159] = {.count = 1, .reusable = true}, SHIFT(78),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_attempt, 3),
  [163] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(2),
  [166] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(3),
  [169] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(4),
  [172] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(5),
  [175] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(6),
  [178] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(7),
  [181] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2),
  [183] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(25),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_list, 4),
  [188] = {.count = 1, .reusable = true}, REDUCE(sym_list_middle, 1),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_list_else, 1),
  [192] = {.count = 1, .reusable = true}, REDUCE(sym_sep, 1),
  [194] = {.count = 1, .reusable = true}, SHIFT(83),
  [196] = {.count = 1, .reusable = true}, SHIFT(84),
  [198] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [202] = {.count = 1, .reusable = false}, REDUCE(sym_paramPattern3, 3),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym_paramPattern3, 3),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_if_else, 1),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym_if_middle, 1),
  [212] = {.count = 1, .reusable = true}, SHIFT(89),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym_switch, 4),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym_default, 1),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym_switch_middle, 1),
  [220] = {.count = 1, .reusable = true}, SHIFT(94),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_return, 2),
  [224] = {.count = 1, .reusable = true}, SHIFT(97),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym_function, 4),
  [228] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat2, 2), SHIFT_REPEAT(2),
  [231] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat2, 2), SHIFT_REPEAT(3),
  [234] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat2, 2), SHIFT_REPEAT(4),
  [237] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat2, 2), SHIFT_REPEAT(5),
  [240] = {.count = 1, .reusable = true}, REDUCE(aux_sym_function_repeat2, 2),
  [242] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat2, 2), SHIFT_REPEAT(37),
  [245] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat2, 2), SHIFT_REPEAT(6),
  [248] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat2, 2), SHIFT_REPEAT(7),
  [251] = {.count = 1, .reusable = true}, SHIFT(98),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_nested, 2),
  [255] = {.count = 1, .reusable = true}, SHIFT(99),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_macro, 4),
  [259] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(2),
  [262] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(3),
  [265] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(4),
  [268] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(5),
  [271] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(37),
  [274] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(6),
  [277] = {.count = 1, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2),
  [279] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(43),
  [282] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(7),
  [285] = {.count = 1, .reusable = true}, SHIFT(100),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_list_else, 2),
  [289] = {.count = 1, .reusable = true}, SHIFT(102),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_sep_block, 2),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_list, 5),
  [295] = {.count = 1, .reusable = true}, SHIFT(103),
  [297] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [300] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2),
  [302] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(50),
  [305] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(52),
  [308] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(53),
  [311] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(3),
  [314] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(4),
  [317] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(5),
  [320] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(6),
  [323] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(7),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym_if_else, 2),
  [328] = {.count = 1, .reusable = true}, SHIFT(105),
  [330] = {.count = 1, .reusable = true}, REDUCE(sym_if, 5),
  [332] = {.count = 1, .reusable = true}, SHIFT(106),
  [334] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(2),
  [337] = {.count = 1, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2),
  [339] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(3),
  [342] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(61),
  [345] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(4),
  [348] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(5),
  [351] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(6),
  [354] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(7),
  [357] = {.count = 1, .reusable = true}, SHIFT(107),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym_default, 2),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_switch, 5),
  [363] = {.count = 1, .reusable = true}, SHIFT(109),
  [365] = {.count = 1, .reusable = true}, REDUCE(aux_sym_switch_repeat1, 2),
  [367] = {.count = 2, .reusable = true}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(66),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym_return, 3),
  [372] = {.count = 1, .reusable = true}, REDUCE(sym_function, 5),
  [374] = {.count = 1, .reusable = true}, REDUCE(sym_nested, 3),
  [376] = {.count = 1, .reusable = true}, REDUCE(sym_macro, 5),
  [378] = {.count = 1, .reusable = true}, SHIFT(110),
  [380] = {.count = 1, .reusable = true}, SHIFT(111),
  [382] = {.count = 1, .reusable = true}, REDUCE(sym_list, 6),
  [384] = {.count = 1, .reusable = true}, REDUCE(sym_elseif, 3),
  [386] = {.count = 1, .reusable = true}, REDUCE(sym_if, 6),
  [388] = {.count = 1, .reusable = true}, SHIFT(114),
  [390] = {.count = 1, .reusable = true}, REDUCE(sym_case, 3),
  [392] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(2),
  [395] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(3),
  [398] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(4),
  [401] = {.count = 1, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2),
  [403] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(5),
  [406] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(6),
  [409] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(7),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym_switch, 6),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_items_middle, 1),
  [416] = {.count = 1, .reusable = true}, REDUCE(sym_items, 4),
  [418] = {.count = 1, .reusable = true}, SHIFT(115),
  [420] = {.count = 1, .reusable = true}, SHIFT(118),
  [422] = {.count = 1, .reusable = true}, REDUCE(sym_case, 4),
  [424] = {.count = 1, .reusable = true}, SHIFT(119),
  [426] = {.count = 1, .reusable = true}, REDUCE(sym_items, 5),
  [428] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(2),
  [431] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(110),
  [434] = {.count = 1, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2),
  [436] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(53),
  [439] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(3),
  [442] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(4),
  [445] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(5),
  [448] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(6),
  [451] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(7),
  [454] = {.count = 1, .reusable = true}, REDUCE(sym_case, 5),
  [456] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat2, 2), SHIFT_REPEAT(119),
  [459] = {.count = 1, .reusable = true}, REDUCE(aux_sym_case_repeat2, 2),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_freemarker() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
