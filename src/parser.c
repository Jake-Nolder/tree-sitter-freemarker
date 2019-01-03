#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 84
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
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
  sym_source_file = 22,
  sym__definition = 23,
  sym_directive = 24,
  sym_parameter_pattern = 25,
  sym_paramPattern1 = 26,
  sym_paramPattern2 = 27,
  sym_paramPattern3 = 28,
  sym_unary_expression = 29,
  sym_binary_expression = 30,
  sym_expression = 31,
  sym_parameter = 32,
  sym_list = 33,
  sym_list_middle = 34,
  sym_items_middle = 35,
  sym_else = 36,
  sym_items = 37,
  sym_sep = 38,
  sym_sep_block = 39,
  sym_if = 40,
  sym_elseif = 41,
  sym_if_middle = 42,
  sym_switch = 43,
  sym_case = 44,
  sym_default = 45,
  sym_switch_middle = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym_list_repeat1 = 48,
  aux_sym_else_repeat1 = 49,
  aux_sym_items_repeat1 = 50,
  aux_sym_if_repeat1 = 51,
  aux_sym_switch_repeat1 = 52,
  aux_sym_case_repeat1 = 53,
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
  [sym_else] = "else",
  [sym_items] = "items",
  [sym_sep] = "sep",
  [sym_sep_block] = "sep_block",
  [sym_if] = "if",
  [sym_elseif] = "elseif",
  [sym_if_middle] = "if_middle",
  [sym_switch] = "switch",
  [sym_case] = "case",
  [sym_default] = "default",
  [sym_switch_middle] = "switch_middle",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_else_repeat1] = "else_repeat1",
  [aux_sym_items_repeat1] = "items_repeat1",
  [aux_sym_if_repeat1] = "if_repeat1",
  [aux_sym_switch_repeat1] = "switch_repeat1",
  [aux_sym_case_repeat1] = "case_repeat1",
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
  [sym_else] = {
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_else_repeat1] = {
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
        ADVANCE(82);
      if (lookahead == '>')
        ADVANCE(83);
      if (lookahead == 'a')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(86);
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
        ADVANCE(57);
      END_STATE();
    case 4:
      if (lookahead == 'b')
        ADVANCE(5);
      if (lookahead == 'c')
        ADVANCE(11);
      if (lookahead == 'd')
        ADVANCE(23);
      if (lookahead == 'e')
        ADVANCE(31);
      if (lookahead == 'i')
        ADVANCE(38);
      if (lookahead == 'l')
        ADVANCE(44);
      if (lookahead == 's')
        ADVANCE(48);
      END_STATE();
    case 5:
      if (lookahead == 'r')
        ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'e')
        ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'a')
        ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'k')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '>')
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_break);
      END_STATE();
    case 11:
      if (lookahead == 'a')
        ADVANCE(12);
      if (lookahead == 'o')
        ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 's')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'e')
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LT_POUNDcase);
      END_STATE();
    case 15:
      if (lookahead == 'n')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 't')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'i')
        ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'n')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'u')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'e')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '>')
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_continue);
      END_STATE();
    case 23:
      if (lookahead == 'e')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'f')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'a')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'u')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'l')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 't')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '>')
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LT_POUNDdefault_GT);
      END_STATE();
    case 31:
      if (lookahead == 'l')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 's')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'e')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == 'i')
        ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT_POUNDelse_GT);
      END_STATE();
    case 36:
      if (lookahead == 'f')
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LT_POUNDelseif);
      END_STATE();
    case 38:
      if (lookahead == 'f')
        ADVANCE(39);
      if (lookahead == 't')
        ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LT_POUNDif);
      END_STATE();
    case 40:
      if (lookahead == 'e')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'm')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 's')
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LT_POUNDitems);
      END_STATE();
    case 44:
      if (lookahead == 'i')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 's')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 't')
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT_POUNDlist);
      END_STATE();
    case 48:
      if (lookahead == 'e')
        ADVANCE(49);
      if (lookahead == 'w')
        ADVANCE(52);
      END_STATE();
    case 49:
      if (lookahead == 'p')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == '>')
        ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT_POUNDsep_GT);
      END_STATE();
    case 52:
      if (lookahead == 'i')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 't')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'c')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'h')
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT_POUNDswitch);
      END_STATE();
    case 57:
      if (lookahead == '#')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'i')
        ADVANCE(59);
      if (lookahead == 'l')
        ADVANCE(67);
      if (lookahead == 's')
        ADVANCE(72);
      END_STATE();
    case 59:
      if (lookahead == 'f')
        ADVANCE(60);
      if (lookahead == 't')
        ADVANCE(62);
      END_STATE();
    case 60:
      if (lookahead == '>')
        ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDif_GT);
      END_STATE();
    case 62:
      if (lookahead == 'e')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'm')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 's')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == '>')
        ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDitems_GT);
      END_STATE();
    case 67:
      if (lookahead == 'i')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 's')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 't')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == '>')
        ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDlist_GT);
      END_STATE();
    case 72:
      if (lookahead == 'e')
        ADVANCE(73);
      if (lookahead == 'w')
        ADVANCE(76);
      END_STATE();
    case 73:
      if (lookahead == 'p')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == '>')
        ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDsep_GT);
      END_STATE();
    case 76:
      if (lookahead == 'i')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 't')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'c')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'h')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == '>')
        ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDswitch_GT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_operator);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(86);
      END_STATE();
    case 87:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(87);
      END_STATE();
    case 88:
      if (lookahead == '#')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'i')
        ADVANCE(90);
      if (lookahead == 'l')
        ADVANCE(44);
      if (lookahead == 's')
        ADVANCE(91);
      END_STATE();
    case 90:
      if (lookahead == 'f')
        ADVANCE(39);
      END_STATE();
    case 91:
      if (lookahead == 'w')
        ADVANCE(52);
      END_STATE();
    case 92:
      if (lookahead == 'a')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(86);
      END_STATE();
    case 93:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(93);
      END_STATE();
    case 94:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(94);
      END_STATE();
    case 95:
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == '#')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'i')
        ADVANCE(59);
      if (lookahead == 'l')
        ADVANCE(67);
      if (lookahead == 's')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'w')
        ADVANCE(76);
      END_STATE();
    case 99:
      if (lookahead == ',')
        ADVANCE(2);
      if (lookahead == '=')
        ADVANCE(82);
      if (lookahead == '>')
        ADVANCE(83);
      if (lookahead == 'a')
        ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(99);
      END_STATE();
    case 100:
      if (lookahead == 's')
        ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_operator);
      END_STATE();
    case 102:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(86);
      END_STATE();
    case 103:
      if (lookahead == '<')
        ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(103);
      END_STATE();
    case 104:
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '/')
        ADVANCE(111);
      END_STATE();
    case 105:
      if (lookahead == 'b')
        ADVANCE(5);
      if (lookahead == 'c')
        ADVANCE(106);
      if (lookahead == 'e')
        ADVANCE(107);
      if (lookahead == 'i')
        ADVANCE(38);
      if (lookahead == 'l')
        ADVANCE(44);
      if (lookahead == 's')
        ADVANCE(48);
      END_STATE();
    case 106:
      if (lookahead == 'o')
        ADVANCE(15);
      END_STATE();
    case 107:
      if (lookahead == 'l')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 's')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'e')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == '>')
        ADVANCE(35);
      END_STATE();
    case 111:
      if (lookahead == '#')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'l')
        ADVANCE(67);
      END_STATE();
    case 113:
      if (lookahead == '<')
        ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(113);
      END_STATE();
    case 114:
      if (lookahead == '#')
        ADVANCE(115);
      if (lookahead == '/')
        ADVANCE(116);
      END_STATE();
    case 115:
      if (lookahead == 'e')
        ADVANCE(31);
      if (lookahead == 'i')
        ADVANCE(90);
      if (lookahead == 'l')
        ADVANCE(44);
      if (lookahead == 's')
        ADVANCE(91);
      END_STATE();
    case 116:
      if (lookahead == '#')
        ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == 'i')
        ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 'f')
        ADVANCE(60);
      END_STATE();
    case 119:
      if (lookahead == '<')
        ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(119);
      END_STATE();
    case 120:
      if (lookahead == '#')
        ADVANCE(121);
      if (lookahead == '/')
        ADVANCE(123);
      END_STATE();
    case 121:
      if (lookahead == 'b')
        ADVANCE(5);
      if (lookahead == 'c')
        ADVANCE(122);
      if (lookahead == 'd')
        ADVANCE(23);
      if (lookahead == 'i')
        ADVANCE(90);
      if (lookahead == 'l')
        ADVANCE(44);
      if (lookahead == 's')
        ADVANCE(91);
      END_STATE();
    case 122:
      if (lookahead == 'a')
        ADVANCE(12);
      END_STATE();
    case 123:
      if (lookahead == '#')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 's')
        ADVANCE(98);
      END_STATE();
    case 125:
      if (lookahead == '<')
        ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(125);
      END_STATE();
    case 126:
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '/')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == '#')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'i')
        ADVANCE(129);
      if (lookahead == 'l')
        ADVANCE(67);
      if (lookahead == 's')
        ADVANCE(130);
      END_STATE();
    case 129:
      if (lookahead == 't')
        ADVANCE(62);
      END_STATE();
    case 130:
      if (lookahead == 'e')
        ADVANCE(73);
      END_STATE();
    case 131:
      if (lookahead == '<')
        ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(131);
      END_STATE();
    case 132:
      if (lookahead == '#')
        ADVANCE(133);
      if (lookahead == '/')
        ADVANCE(134);
      END_STATE();
    case 133:
      if (lookahead == 'b')
        ADVANCE(5);
      if (lookahead == 'c')
        ADVANCE(106);
      if (lookahead == 'i')
        ADVANCE(90);
      if (lookahead == 'l')
        ADVANCE(44);
      if (lookahead == 's')
        ADVANCE(48);
      END_STATE();
    case 134:
      if (lookahead == '#')
        ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 'i')
        ADVANCE(129);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 87},
  [2] = {.lex_state = 92},
  [3] = {.lex_state = 92},
  [4] = {.lex_state = 92},
  [5] = {.lex_state = 93},
  [6] = {.lex_state = 94},
  [7] = {.lex_state = 87},
  [8] = {.lex_state = 99},
  [9] = {.lex_state = 102},
  [10] = {.lex_state = 99},
  [11] = {.lex_state = 99},
  [12] = {.lex_state = 99},
  [13] = {.lex_state = 99},
  [14] = {.lex_state = 99},
  [15] = {.lex_state = 99},
  [16] = {.lex_state = 87},
  [17] = {.lex_state = 99},
  [18] = {.lex_state = 99},
  [19] = {.lex_state = 103},
  [20] = {.lex_state = 102},
  [21] = {.lex_state = 99},
  [22] = {.lex_state = 102},
  [23] = {.lex_state = 113},
  [24] = {.lex_state = 119},
  [25] = {.lex_state = 94},
  [26] = {.lex_state = 103},
  [27] = {.lex_state = 103},
  [28] = {.lex_state = 92},
  [29] = {.lex_state = 125},
  [30] = {.lex_state = 103},
  [31] = {.lex_state = 125},
  [32] = {.lex_state = 103},
  [33] = {.lex_state = 99},
  [34] = {.lex_state = 99},
  [35] = {.lex_state = 113},
  [36] = {.lex_state = 94},
  [37] = {.lex_state = 92},
  [38] = {.lex_state = 113},
  [39] = {.lex_state = 113},
  [40] = {.lex_state = 113},
  [41] = {.lex_state = 94},
  [42] = {.lex_state = 92},
  [43] = {.lex_state = 119},
  [44] = {.lex_state = 119},
  [45] = {.lex_state = 119},
  [46] = {.lex_state = 119},
  [47] = {.lex_state = 103},
  [48] = {.lex_state = 99},
  [49] = {.lex_state = 125},
  [50] = {.lex_state = 94},
  [51] = {.lex_state = 103},
  [52] = {.lex_state = 103},
  [53] = {.lex_state = 113},
  [54] = {.lex_state = 99},
  [55] = {.lex_state = 94},
  [56] = {.lex_state = 113},
  [57] = {.lex_state = 113},
  [58] = {.lex_state = 99},
  [59] = {.lex_state = 119},
  [60] = {.lex_state = 94},
  [61] = {.lex_state = 119},
  [62] = {.lex_state = 119},
  [63] = {.lex_state = 103},
  [64] = {.lex_state = 131},
  [65] = {.lex_state = 94},
  [66] = {.lex_state = 113},
  [67] = {.lex_state = 113},
  [68] = {.lex_state = 94},
  [69] = {.lex_state = 119},
  [70] = {.lex_state = 119},
  [71] = {.lex_state = 94},
  [72] = {.lex_state = 131},
  [73] = {.lex_state = 103},
  [74] = {.lex_state = 131},
  [75] = {.lex_state = 113},
  [76] = {.lex_state = 119},
  [77] = {.lex_state = 119},
  [78] = {.lex_state = 103},
  [79] = {.lex_state = 131},
  [80] = {.lex_state = 113},
  [81] = {.lex_state = 119},
  [82] = {.lex_state = 119},
  [83] = {.lex_state = 119},
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
  },
  [1] = {
    [sym_source_file] = STATE(5),
    [sym__definition] = STATE(7),
    [sym_directive] = STATE(7),
    [sym_list] = STATE(6),
    [sym_if] = STATE(6),
    [sym_switch] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
  },
  [2] = {
    [sym_parameter_pattern] = STATE(10),
    [sym_paramPattern1] = STATE(11),
    [sym_paramPattern2] = STATE(11),
    [sym_paramPattern3] = STATE(11),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_expression] = STATE(12),
    [sym_parameter] = STATE(13),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(13),
    [sym_operator] = ACTIONS(15),
  },
  [3] = {
    [sym_parameter_pattern] = STATE(14),
    [sym_paramPattern1] = STATE(11),
    [sym_paramPattern2] = STATE(11),
    [sym_paramPattern3] = STATE(11),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_expression] = STATE(12),
    [sym_parameter] = STATE(13),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(13),
    [sym_operator] = ACTIONS(15),
  },
  [4] = {
    [sym_parameter_pattern] = STATE(15),
    [sym_paramPattern1] = STATE(11),
    [sym_paramPattern2] = STATE(11),
    [sym_paramPattern3] = STATE(11),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_expression] = STATE(12),
    [sym_parameter] = STATE(13),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(13),
    [sym_operator] = ACTIONS(15),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(17),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LT_POUNDlist] = ACTIONS(19),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(19),
    [sym_break] = ACTIONS(19),
    [sym_continue] = ACTIONS(19),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(19),
    [anon_sym_LT_POUNDitems] = ACTIONS(19),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(19),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(19),
    [anon_sym_LT_POUNDif] = ACTIONS(19),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(19),
    [anon_sym_LT_POUNDelseif] = ACTIONS(19),
    [anon_sym_LT_POUNDswitch] = ACTIONS(19),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(19),
    [anon_sym_LT_POUNDcase] = ACTIONS(19),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(19),
  },
  [7] = {
    [sym__definition] = STATE(16),
    [sym_directive] = STATE(16),
    [sym_list] = STATE(6),
    [sym_if] = STATE(6),
    [sym_switch] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
  },
  [8] = {
    [anon_sym_COMMA] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(23),
    [sym_operator] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(23),
  },
  [9] = {
    [sym_expression] = STATE(18),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(27),
  },
  [10] = {
    [anon_sym_GT] = ACTIONS(29),
  },
  [11] = {
    [anon_sym_GT] = ACTIONS(31),
  },
  [12] = {
    [sym_operator] = ACTIONS(33),
  },
  [13] = {
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_EQ] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(39),
  },
  [14] = {
    [anon_sym_GT] = ACTIONS(41),
  },
  [15] = {
    [anon_sym_GT] = ACTIONS(43),
  },
  [16] = {
    [sym__definition] = STATE(16),
    [sym_directive] = STATE(16),
    [sym_list] = STATE(6),
    [sym_if] = STATE(6),
    [sym_switch] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_LT_POUNDlist] = ACTIONS(47),
    [anon_sym_LT_POUNDif] = ACTIONS(50),
    [anon_sym_LT_POUNDswitch] = ACTIONS(53),
  },
  [17] = {
    [anon_sym_GT] = ACTIONS(25),
  },
  [18] = {
    [anon_sym_GT] = ACTIONS(56),
  },
  [19] = {
    [sym_directive] = STATE(26),
    [sym_list] = STATE(6),
    [sym_list_middle] = STATE(32),
    [sym_else] = STATE(30),
    [sym_items] = STATE(26),
    [sym_sep] = STATE(26),
    [sym_sep_block] = STATE(31),
    [sym_if] = STATE(6),
    [sym_switch] = STATE(6),
    [aux_sym_list_repeat1] = STATE(32),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(58),
    [sym_break] = ACTIONS(60),
    [sym_continue] = ACTIONS(60),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(62),
    [anon_sym_LT_POUNDitems] = ACTIONS(64),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(66),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
  },
  [20] = {
    [sym_expression] = STATE(33),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(27),
  },
  [21] = {
    [anon_sym_GT] = ACTIONS(68),
  },
  [22] = {
    [sym_expression] = STATE(34),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(27),
  },
  [23] = {
    [sym_else] = STATE(38),
    [sym_elseif] = STATE(39),
    [sym_if_middle] = STATE(40),
    [aux_sym_if_repeat1] = STATE(40),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(70),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(72),
    [anon_sym_LT_POUNDelseif] = ACTIONS(74),
  },
  [24] = {
    [sym_case] = STATE(44),
    [sym_default] = STATE(45),
    [sym_switch_middle] = STATE(46),
    [aux_sym_switch_repeat1] = STATE(46),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(76),
    [anon_sym_LT_POUNDcase] = ACTIONS(78),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(80),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_LT_POUNDlist] = ACTIONS(82),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(82),
    [sym_break] = ACTIONS(82),
    [sym_continue] = ACTIONS(82),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(82),
    [anon_sym_LT_POUNDitems] = ACTIONS(82),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(82),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(82),
    [anon_sym_LT_POUNDif] = ACTIONS(82),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(82),
    [anon_sym_LT_POUNDelseif] = ACTIONS(82),
    [anon_sym_LT_POUNDswitch] = ACTIONS(82),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(82),
    [anon_sym_LT_POUNDcase] = ACTIONS(82),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(82),
  },
  [26] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(84),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(84),
    [sym_break] = ACTIONS(84),
    [sym_continue] = ACTIONS(84),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(84),
    [anon_sym_LT_POUNDitems] = ACTIONS(84),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(84),
    [anon_sym_LT_POUNDif] = ACTIONS(84),
    [anon_sym_LT_POUNDswitch] = ACTIONS(84),
  },
  [27] = {
    [sym_directive] = STATE(47),
    [sym_list] = STATE(6),
    [sym_if] = STATE(6),
    [sym_switch] = STATE(6),
    [aux_sym_else_repeat1] = STATE(47),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(86),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
  },
  [28] = {
    [sym_parameter_pattern] = STATE(48),
    [sym_paramPattern1] = STATE(11),
    [sym_paramPattern2] = STATE(11),
    [sym_paramPattern3] = STATE(11),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_expression] = STATE(12),
    [sym_parameter] = STATE(13),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(13),
    [sym_operator] = ACTIONS(15),
  },
  [29] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(88),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(88),
    [sym_break] = ACTIONS(88),
    [sym_continue] = ACTIONS(88),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(88),
    [anon_sym_LT_POUNDitems] = ACTIONS(88),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(88),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(88),
    [anon_sym_LT_SLASH_POUNDsep_GT] = ACTIONS(90),
    [anon_sym_LT_POUNDif] = ACTIONS(88),
    [anon_sym_LT_POUNDswitch] = ACTIONS(88),
  },
  [30] = {
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(92),
  },
  [31] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(88),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(88),
    [sym_break] = ACTIONS(88),
    [sym_continue] = ACTIONS(88),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(88),
    [anon_sym_LT_POUNDitems] = ACTIONS(88),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(88),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(88),
    [anon_sym_LT_POUNDif] = ACTIONS(88),
    [anon_sym_LT_POUNDswitch] = ACTIONS(88),
  },
  [32] = {
    [sym_directive] = STATE(26),
    [sym_list] = STATE(6),
    [sym_list_middle] = STATE(52),
    [sym_else] = STATE(51),
    [sym_items] = STATE(26),
    [sym_sep] = STATE(26),
    [sym_sep_block] = STATE(31),
    [sym_if] = STATE(6),
    [sym_switch] = STATE(6),
    [aux_sym_list_repeat1] = STATE(52),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(92),
    [sym_break] = ACTIONS(60),
    [sym_continue] = ACTIONS(60),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(62),
    [anon_sym_LT_POUNDitems] = ACTIONS(64),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(66),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
  },
  [33] = {
    [anon_sym_GT] = ACTIONS(94),
  },
  [34] = {
    [anon_sym_GT] = ACTIONS(96),
  },
  [35] = {
    [sym_directive] = STATE(53),
    [sym_list] = STATE(6),
    [sym_if] = STATE(6),
    [sym_switch] = STATE(6),
    [aux_sym_else_repeat1] = STATE(53),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(86),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_LT_POUNDlist] = ACTIONS(98),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(98),
    [sym_break] = ACTIONS(98),
    [sym_continue] = ACTIONS(98),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(98),
    [anon_sym_LT_POUNDitems] = ACTIONS(98),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(98),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(98),
    [anon_sym_LT_POUNDif] = ACTIONS(98),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(98),
    [anon_sym_LT_POUNDelseif] = ACTIONS(98),
    [anon_sym_LT_POUNDswitch] = ACTIONS(98),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(98),
    [anon_sym_LT_POUNDcase] = ACTIONS(98),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(98),
  },
  [37] = {
    [sym_parameter_pattern] = STATE(54),
    [sym_paramPattern1] = STATE(11),
    [sym_paramPattern2] = STATE(11),
    [sym_paramPattern3] = STATE(11),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_expression] = STATE(12),
    [sym_parameter] = STATE(13),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(13),
    [sym_operator] = ACTIONS(15),
  },
  [38] = {
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(100),
  },
  [39] = {
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(102),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(102),
    [anon_sym_LT_POUNDelseif] = ACTIONS(102),
  },
  [40] = {
    [sym_else] = STATE(56),
    [sym_elseif] = STATE(39),
    [sym_if_middle] = STATE(57),
    [aux_sym_if_repeat1] = STATE(57),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(70),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(100),
    [anon_sym_LT_POUNDelseif] = ACTIONS(74),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [anon_sym_LT_POUNDlist] = ACTIONS(104),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(104),
    [sym_break] = ACTIONS(104),
    [sym_continue] = ACTIONS(104),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(104),
    [anon_sym_LT_POUNDitems] = ACTIONS(104),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(104),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(104),
    [anon_sym_LT_POUNDif] = ACTIONS(104),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(104),
    [anon_sym_LT_POUNDelseif] = ACTIONS(104),
    [anon_sym_LT_POUNDswitch] = ACTIONS(104),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(104),
    [anon_sym_LT_POUNDcase] = ACTIONS(104),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(104),
  },
  [42] = {
    [sym_parameter_pattern] = STATE(58),
    [sym_paramPattern1] = STATE(11),
    [sym_paramPattern2] = STATE(11),
    [sym_paramPattern3] = STATE(11),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_expression] = STATE(12),
    [sym_parameter] = STATE(13),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(13),
    [sym_operator] = ACTIONS(15),
  },
  [43] = {
    [sym_directive] = STATE(59),
    [sym_list] = STATE(6),
    [sym_if] = STATE(6),
    [sym_switch] = STATE(6),
    [aux_sym_else_repeat1] = STATE(59),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(106),
  },
  [44] = {
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(108),
    [anon_sym_LT_POUNDcase] = ACTIONS(108),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(108),
  },
  [45] = {
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(110),
  },
  [46] = {
    [sym_case] = STATE(44),
    [sym_default] = STATE(61),
    [sym_switch_middle] = STATE(62),
    [aux_sym_switch_repeat1] = STATE(62),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(110),
    [anon_sym_LT_POUNDcase] = ACTIONS(78),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(80),
  },
  [47] = {
    [sym_directive] = STATE(63),
    [sym_list] = STATE(6),
    [sym_if] = STATE(6),
    [sym_switch] = STATE(6),
    [aux_sym_else_repeat1] = STATE(63),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(112),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
  },
  [48] = {
    [anon_sym_GT] = ACTIONS(114),
  },
  [49] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(116),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(116),
    [sym_break] = ACTIONS(116),
    [sym_continue] = ACTIONS(116),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(116),
    [anon_sym_LT_POUNDitems] = ACTIONS(116),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(116),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(116),
    [anon_sym_LT_POUNDif] = ACTIONS(116),
    [anon_sym_LT_POUNDswitch] = ACTIONS(116),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_LT_POUNDlist] = ACTIONS(118),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(118),
    [sym_break] = ACTIONS(118),
    [sym_continue] = ACTIONS(118),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(118),
    [anon_sym_LT_POUNDitems] = ACTIONS(118),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(118),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(118),
    [anon_sym_LT_POUNDif] = ACTIONS(118),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(118),
    [anon_sym_LT_POUNDelseif] = ACTIONS(118),
    [anon_sym_LT_POUNDswitch] = ACTIONS(118),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(118),
    [anon_sym_LT_POUNDcase] = ACTIONS(118),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(118),
  },
  [51] = {
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(120),
  },
  [52] = {
    [sym_directive] = STATE(26),
    [sym_list] = STATE(6),
    [sym_list_middle] = STATE(52),
    [sym_items] = STATE(26),
    [sym_sep] = STATE(26),
    [sym_sep_block] = STATE(31),
    [sym_if] = STATE(6),
    [sym_switch] = STATE(6),
    [aux_sym_list_repeat1] = STATE(52),
    [anon_sym_LT_POUNDlist] = ACTIONS(122),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(125),
    [sym_break] = ACTIONS(127),
    [sym_continue] = ACTIONS(127),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(125),
    [anon_sym_LT_POUNDitems] = ACTIONS(130),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(133),
    [anon_sym_LT_POUNDif] = ACTIONS(136),
    [anon_sym_LT_POUNDswitch] = ACTIONS(139),
  },
  [53] = {
    [sym_directive] = STATE(66),
    [sym_list] = STATE(6),
    [sym_if] = STATE(6),
    [sym_switch] = STATE(6),
    [aux_sym_else_repeat1] = STATE(66),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(112),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
  },
  [54] = {
    [anon_sym_GT] = ACTIONS(142),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_LT_POUNDlist] = ACTIONS(144),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(144),
    [sym_break] = ACTIONS(144),
    [sym_continue] = ACTIONS(144),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(144),
    [anon_sym_LT_POUNDitems] = ACTIONS(144),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(144),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(144),
    [anon_sym_LT_POUNDif] = ACTIONS(144),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(144),
    [anon_sym_LT_POUNDelseif] = ACTIONS(144),
    [anon_sym_LT_POUNDswitch] = ACTIONS(144),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(144),
    [anon_sym_LT_POUNDcase] = ACTIONS(144),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(144),
  },
  [56] = {
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(146),
  },
  [57] = {
    [sym_elseif] = STATE(39),
    [sym_if_middle] = STATE(57),
    [aux_sym_if_repeat1] = STATE(57),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(148),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(148),
    [anon_sym_LT_POUNDelseif] = ACTIONS(150),
  },
  [58] = {
    [anon_sym_GT] = ACTIONS(153),
  },
  [59] = {
    [sym_directive] = STATE(70),
    [sym_list] = STATE(6),
    [sym_if] = STATE(6),
    [sym_switch] = STATE(6),
    [aux_sym_else_repeat1] = STATE(70),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(155),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [anon_sym_LT_POUNDlist] = ACTIONS(157),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(157),
    [sym_break] = ACTIONS(157),
    [sym_continue] = ACTIONS(157),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(157),
    [anon_sym_LT_POUNDitems] = ACTIONS(157),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(157),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(157),
    [anon_sym_LT_POUNDif] = ACTIONS(157),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(157),
    [anon_sym_LT_POUNDelseif] = ACTIONS(157),
    [anon_sym_LT_POUNDswitch] = ACTIONS(157),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(157),
    [anon_sym_LT_POUNDcase] = ACTIONS(157),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(157),
  },
  [61] = {
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(159),
  },
  [62] = {
    [sym_case] = STATE(44),
    [sym_switch_middle] = STATE(62),
    [aux_sym_switch_repeat1] = STATE(62),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(161),
    [anon_sym_LT_POUNDcase] = ACTIONS(163),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(161),
  },
  [63] = {
    [sym_directive] = STATE(63),
    [sym_list] = STATE(6),
    [sym_if] = STATE(6),
    [sym_switch] = STATE(6),
    [aux_sym_else_repeat1] = STATE(63),
    [anon_sym_LT_POUNDlist] = ACTIONS(166),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(169),
    [anon_sym_LT_POUNDif] = ACTIONS(171),
    [anon_sym_LT_POUNDswitch] = ACTIONS(174),
  },
  [64] = {
    [sym_directive] = STATE(72),
    [sym_list] = STATE(6),
    [sym_items_middle] = STATE(74),
    [sym_sep] = STATE(72),
    [sym_sep_block] = STATE(31),
    [sym_if] = STATE(6),
    [sym_switch] = STATE(6),
    [aux_sym_items_repeat1] = STATE(74),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [sym_break] = ACTIONS(177),
    [sym_continue] = ACTIONS(177),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(179),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(66),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_LT_POUNDlist] = ACTIONS(181),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(181),
    [sym_break] = ACTIONS(181),
    [sym_continue] = ACTIONS(181),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(181),
    [anon_sym_LT_POUNDitems] = ACTIONS(181),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(181),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(181),
    [anon_sym_LT_POUNDif] = ACTIONS(181),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(181),
    [anon_sym_LT_POUNDelseif] = ACTIONS(181),
    [anon_sym_LT_POUNDswitch] = ACTIONS(181),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(181),
    [anon_sym_LT_POUNDcase] = ACTIONS(181),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(181),
  },
  [66] = {
    [sym_directive] = STATE(66),
    [sym_list] = STATE(6),
    [sym_if] = STATE(6),
    [sym_switch] = STATE(6),
    [aux_sym_else_repeat1] = STATE(66),
    [anon_sym_LT_POUNDlist] = ACTIONS(166),
    [anon_sym_LT_POUNDif] = ACTIONS(171),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(169),
    [anon_sym_LT_POUNDswitch] = ACTIONS(174),
  },
  [67] = {
    [sym_directive] = STATE(75),
    [sym_list] = STATE(6),
    [sym_if] = STATE(6),
    [sym_switch] = STATE(6),
    [aux_sym_else_repeat1] = STATE(75),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(183),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(183),
    [anon_sym_LT_POUNDelseif] = ACTIONS(183),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [anon_sym_LT_POUNDlist] = ACTIONS(185),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(185),
    [sym_break] = ACTIONS(185),
    [sym_continue] = ACTIONS(185),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(185),
    [anon_sym_LT_POUNDitems] = ACTIONS(185),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(185),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(185),
    [anon_sym_LT_POUNDif] = ACTIONS(185),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(185),
    [anon_sym_LT_POUNDelseif] = ACTIONS(185),
    [anon_sym_LT_POUNDswitch] = ACTIONS(185),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(185),
    [anon_sym_LT_POUNDcase] = ACTIONS(185),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(185),
  },
  [69] = {
    [sym_directive] = STATE(76),
    [sym_list] = STATE(6),
    [sym_if] = STATE(6),
    [sym_switch] = STATE(6),
    [aux_sym_else_repeat1] = STATE(76),
    [aux_sym_case_repeat1] = STATE(77),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [sym_break] = ACTIONS(187),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(189),
    [anon_sym_LT_POUNDcase] = ACTIONS(189),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(189),
  },
  [70] = {
    [sym_directive] = STATE(70),
    [sym_list] = STATE(6),
    [sym_if] = STATE(6),
    [sym_switch] = STATE(6),
    [aux_sym_else_repeat1] = STATE(70),
    [anon_sym_LT_POUNDlist] = ACTIONS(166),
    [anon_sym_LT_POUNDif] = ACTIONS(171),
    [anon_sym_LT_POUNDswitch] = ACTIONS(174),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(169),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [anon_sym_LT_POUNDlist] = ACTIONS(191),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(191),
    [sym_break] = ACTIONS(191),
    [sym_continue] = ACTIONS(191),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(191),
    [anon_sym_LT_POUNDitems] = ACTIONS(191),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(191),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(191),
    [anon_sym_LT_POUNDif] = ACTIONS(191),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(191),
    [anon_sym_LT_POUNDelseif] = ACTIONS(191),
    [anon_sym_LT_POUNDswitch] = ACTIONS(191),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(191),
    [anon_sym_LT_POUNDcase] = ACTIONS(191),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(191),
  },
  [72] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(193),
    [sym_break] = ACTIONS(193),
    [sym_continue] = ACTIONS(193),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(193),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(193),
    [anon_sym_LT_POUNDif] = ACTIONS(193),
    [anon_sym_LT_POUNDswitch] = ACTIONS(193),
  },
  [73] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(195),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(195),
    [sym_break] = ACTIONS(195),
    [sym_continue] = ACTIONS(195),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(195),
    [anon_sym_LT_POUNDitems] = ACTIONS(195),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(195),
    [anon_sym_LT_POUNDif] = ACTIONS(195),
    [anon_sym_LT_POUNDswitch] = ACTIONS(195),
  },
  [74] = {
    [sym_directive] = STATE(72),
    [sym_list] = STATE(6),
    [sym_items_middle] = STATE(79),
    [sym_sep] = STATE(72),
    [sym_sep_block] = STATE(31),
    [sym_if] = STATE(6),
    [sym_switch] = STATE(6),
    [aux_sym_items_repeat1] = STATE(79),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [sym_break] = ACTIONS(177),
    [sym_continue] = ACTIONS(177),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(197),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(66),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
  },
  [75] = {
    [sym_directive] = STATE(80),
    [sym_list] = STATE(6),
    [sym_if] = STATE(6),
    [sym_switch] = STATE(6),
    [aux_sym_else_repeat1] = STATE(80),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(199),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(199),
    [anon_sym_LT_POUNDelseif] = ACTIONS(199),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
  },
  [76] = {
    [sym_directive] = STATE(81),
    [sym_list] = STATE(6),
    [sym_if] = STATE(6),
    [sym_switch] = STATE(6),
    [aux_sym_else_repeat1] = STATE(81),
    [aux_sym_case_repeat1] = STATE(82),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [sym_break] = ACTIONS(201),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(203),
    [anon_sym_LT_POUNDcase] = ACTIONS(203),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(203),
  },
  [77] = {
    [aux_sym_case_repeat1] = STATE(83),
    [sym_break] = ACTIONS(205),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(203),
    [anon_sym_LT_POUNDcase] = ACTIONS(203),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(203),
  },
  [78] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(207),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(207),
    [sym_break] = ACTIONS(207),
    [sym_continue] = ACTIONS(207),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(207),
    [anon_sym_LT_POUNDitems] = ACTIONS(207),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(207),
    [anon_sym_LT_POUNDif] = ACTIONS(207),
    [anon_sym_LT_POUNDswitch] = ACTIONS(207),
  },
  [79] = {
    [sym_directive] = STATE(72),
    [sym_list] = STATE(6),
    [sym_items_middle] = STATE(79),
    [sym_sep] = STATE(72),
    [sym_sep_block] = STATE(31),
    [sym_if] = STATE(6),
    [sym_switch] = STATE(6),
    [aux_sym_items_repeat1] = STATE(79),
    [anon_sym_LT_POUNDlist] = ACTIONS(209),
    [sym_break] = ACTIONS(212),
    [sym_continue] = ACTIONS(212),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(215),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(217),
    [anon_sym_LT_POUNDif] = ACTIONS(220),
    [anon_sym_LT_POUNDswitch] = ACTIONS(223),
  },
  [80] = {
    [sym_directive] = STATE(80),
    [sym_list] = STATE(6),
    [sym_if] = STATE(6),
    [sym_switch] = STATE(6),
    [aux_sym_else_repeat1] = STATE(80),
    [anon_sym_LT_POUNDlist] = ACTIONS(166),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(169),
    [anon_sym_LT_POUNDif] = ACTIONS(171),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(169),
    [anon_sym_LT_POUNDelseif] = ACTIONS(169),
    [anon_sym_LT_POUNDswitch] = ACTIONS(174),
  },
  [81] = {
    [sym_directive] = STATE(81),
    [sym_list] = STATE(6),
    [sym_if] = STATE(6),
    [sym_switch] = STATE(6),
    [aux_sym_else_repeat1] = STATE(81),
    [anon_sym_LT_POUNDlist] = ACTIONS(166),
    [sym_break] = ACTIONS(169),
    [anon_sym_LT_POUNDif] = ACTIONS(171),
    [anon_sym_LT_POUNDswitch] = ACTIONS(174),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(169),
    [anon_sym_LT_POUNDcase] = ACTIONS(169),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(169),
  },
  [82] = {
    [aux_sym_case_repeat1] = STATE(83),
    [sym_break] = ACTIONS(205),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(226),
    [anon_sym_LT_POUNDcase] = ACTIONS(226),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(226),
  },
  [83] = {
    [aux_sym_case_repeat1] = STATE(83),
    [sym_break] = ACTIONS(228),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(231),
    [anon_sym_LT_POUNDcase] = ACTIONS(231),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(231),
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
  [13] = {.count = 1, .reusable = false}, SHIFT(8),
  [15] = {.count = 1, .reusable = false}, SHIFT(9),
  [17] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_directive, 1),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 1),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [27] = {.count = 1, .reusable = true}, SHIFT(17),
  [29] = {.count = 1, .reusable = true}, SHIFT(19),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_pattern, 1),
  [33] = {.count = 1, .reusable = true}, SHIFT(20),
  [35] = {.count = 1, .reusable = true}, SHIFT(21),
  [37] = {.count = 1, .reusable = true}, SHIFT(22),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_paramPattern1, 1),
  [41] = {.count = 1, .reusable = true}, SHIFT(23),
  [43] = {.count = 1, .reusable = true}, SHIFT(24),
  [45] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [47] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [50] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [53] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [56] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2),
  [58] = {.count = 1, .reusable = true}, SHIFT(25),
  [60] = {.count = 1, .reusable = true}, SHIFT(26),
  [62] = {.count = 1, .reusable = true}, SHIFT(27),
  [64] = {.count = 1, .reusable = true}, SHIFT(28),
  [66] = {.count = 1, .reusable = true}, SHIFT(29),
  [68] = {.count = 1, .reusable = true}, REDUCE(sym_paramPattern2, 2),
  [70] = {.count = 1, .reusable = true}, SHIFT(35),
  [72] = {.count = 1, .reusable = true}, SHIFT(36),
  [74] = {.count = 1, .reusable = true}, SHIFT(37),
  [76] = {.count = 1, .reusable = true}, SHIFT(41),
  [78] = {.count = 1, .reusable = true}, SHIFT(42),
  [80] = {.count = 1, .reusable = true}, SHIFT(43),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym_list, 4),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_list_middle, 1),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym_else, 1),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym_sep, 1),
  [90] = {.count = 1, .reusable = true}, SHIFT(49),
  [92] = {.count = 1, .reusable = true}, SHIFT(50),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym_paramPattern3, 3),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4),
  [100] = {.count = 1, .reusable = true}, SHIFT(55),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_if_middle, 1),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym_switch, 4),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_default, 1),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_switch_middle, 1),
  [110] = {.count = 1, .reusable = true}, SHIFT(60),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_else, 2),
  [114] = {.count = 1, .reusable = true}, SHIFT(64),
  [116] = {.count = 1, .reusable = true}, REDUCE(sym_sep_block, 2),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_list, 5),
  [120] = {.count = 1, .reusable = true}, SHIFT(65),
  [122] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [125] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2),
  [127] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(26),
  [130] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(28),
  [133] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(29),
  [136] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(3),
  [139] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(4),
  [142] = {.count = 1, .reusable = true}, SHIFT(67),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_if, 5),
  [146] = {.count = 1, .reusable = true}, SHIFT(68),
  [148] = {.count = 1, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2),
  [150] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(37),
  [153] = {.count = 1, .reusable = true}, SHIFT(69),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_default, 2),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_switch, 5),
  [159] = {.count = 1, .reusable = true}, SHIFT(71),
  [161] = {.count = 1, .reusable = true}, REDUCE(aux_sym_switch_repeat1, 2),
  [163] = {.count = 2, .reusable = true}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(42),
  [166] = {.count = 2, .reusable = true}, REDUCE(aux_sym_else_repeat1, 2), SHIFT_REPEAT(2),
  [169] = {.count = 1, .reusable = true}, REDUCE(aux_sym_else_repeat1, 2),
  [171] = {.count = 2, .reusable = true}, REDUCE(aux_sym_else_repeat1, 2), SHIFT_REPEAT(3),
  [174] = {.count = 2, .reusable = true}, REDUCE(aux_sym_else_repeat1, 2), SHIFT_REPEAT(4),
  [177] = {.count = 1, .reusable = true}, SHIFT(72),
  [179] = {.count = 1, .reusable = true}, SHIFT(73),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_list, 6),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_elseif, 3),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_if, 6),
  [187] = {.count = 1, .reusable = true}, SHIFT(77),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_case, 3),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_switch, 6),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_items_middle, 1),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_items, 4),
  [197] = {.count = 1, .reusable = true}, SHIFT(78),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_elseif, 4),
  [201] = {.count = 1, .reusable = true}, SHIFT(82),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_case, 4),
  [205] = {.count = 1, .reusable = true}, SHIFT(83),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_items, 5),
  [209] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(2),
  [212] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(72),
  [215] = {.count = 1, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2),
  [217] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(29),
  [220] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(3),
  [223] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(4),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym_case, 5),
  [228] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(83),
  [231] = {.count = 1, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2),
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
