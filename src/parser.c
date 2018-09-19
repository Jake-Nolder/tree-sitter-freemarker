#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 13
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_LT_POUNDfunction = 1,
  anon_sym_GT = 2,
  anon_sym_LT_SLASH_POUNDfunction_GT = 3,
  anon_sym_LT_POUND = 4,
  anon_sym_LT_SLASH_POUND = 5,
  anon_sym_SLASH_GT = 6,
  anon_sym_assign = 7,
  anon_sym_attempt = 8,
  anon_sym_autoesc = 9,
  anon_sym_break = 10,
  anon_sym_case = 11,
  anon_sym_compress = 12,
  anon_sym_continue = 13,
  anon_sym_default = 14,
  anon_sym_else = 15,
  anon_sym_elseif = 16,
  anon_sym_escape = 17,
  anon_sym_fallback = 18,
  anon_sym_function = 19,
  anon_sym_flush = 20,
  anon_sym_ftl = 21,
  anon_sym_global = 22,
  anon_sym_if = 23,
  anon_sym_import = 24,
  anon_sym_include = 25,
  anon_sym_items = 26,
  anon_sym_list = 27,
  anon_sym_local = 28,
  anon_sym_lt = 29,
  anon_sym_macro = 30,
  anon_sym_nested = 31,
  anon_sym_noautoesc = 32,
  anon_sym_noescape = 33,
  anon_sym_noparse = 34,
  anon_sym_nt = 35,
  anon_sym_outputformat = 36,
  anon_sym_recover = 37,
  anon_sym_recurse = 38,
  anon_sym_return = 39,
  anon_sym_rt = 40,
  anon_sym_sep = 41,
  anon_sym_setting = 42,
  anon_sym_stop = 43,
  anon_sym_switch = 44,
  anon_sym_t = 45,
  anon_sym_visit = 46,
  sym_source_file = 47,
  sym__definition = 48,
  sym_function_definition = 49,
  sym_directive_definition = 50,
  sym__name = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_directive_definition_repeat1 = 53,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_LT_POUNDfunction] = "<#function",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASH_POUNDfunction_GT] = "</#function>",
  [anon_sym_LT_POUND] = "<#",
  [anon_sym_LT_SLASH_POUND] = "</#",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_assign] = "assign",
  [anon_sym_attempt] = "attempt",
  [anon_sym_autoesc] = "autoesc",
  [anon_sym_break] = "break",
  [anon_sym_case] = "case",
  [anon_sym_compress] = "compress",
  [anon_sym_continue] = "continue",
  [anon_sym_default] = "default",
  [anon_sym_else] = "else",
  [anon_sym_elseif] = "elseif",
  [anon_sym_escape] = "escape",
  [anon_sym_fallback] = "fallback",
  [anon_sym_function] = "function",
  [anon_sym_flush] = "flush",
  [anon_sym_ftl] = "ftl",
  [anon_sym_global] = "global",
  [anon_sym_if] = "if",
  [anon_sym_import] = "import",
  [anon_sym_include] = "include",
  [anon_sym_items] = "items",
  [anon_sym_list] = "list",
  [anon_sym_local] = "local",
  [anon_sym_lt] = "lt",
  [anon_sym_macro] = "macro",
  [anon_sym_nested] = "nested",
  [anon_sym_noautoesc] = "noautoesc",
  [anon_sym_noescape] = "noescape",
  [anon_sym_noparse] = "noparse",
  [anon_sym_nt] = "nt",
  [anon_sym_outputformat] = "outputformat",
  [anon_sym_recover] = "recover",
  [anon_sym_recurse] = "recurse",
  [anon_sym_return] = "return",
  [anon_sym_rt] = "rt",
  [anon_sym_sep] = "sep",
  [anon_sym_setting] = "setting",
  [anon_sym_stop] = "stop",
  [anon_sym_switch] = "switch",
  [anon_sym_t] = "t",
  [anon_sym_visit] = "visit",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_directive_definition] = "directive_definition",
  [sym__name] = "_name",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_directive_definition_repeat1] = "directive_definition_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_POUNDfunction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH_POUNDfunction_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attempt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_autoesc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_escape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fallback] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flush] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ftl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_items] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nested] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noautoesc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noescape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noparse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_outputformat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_recover] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_recurse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sep] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setting] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_visit] = {
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
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_definition_repeat1] = {
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
      if (lookahead == '/')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(26);
      if (lookahead == 'b')
        ADVANCE(44);
      if (lookahead == 'c')
        ADVANCE(49);
      if (lookahead == 'd')
        ADVANCE(66);
      if (lookahead == 'e')
        ADVANCE(73);
      if (lookahead == 'f')
        ADVANCE(84);
      if (lookahead == 'g')
        ADVANCE(105);
      if (lookahead == 'i')
        ADVANCE(111);
      if (lookahead == 'l')
        ADVANCE(128);
      if (lookahead == 'm')
        ADVANCE(137);
      if (lookahead == 'n')
        ADVANCE(142);
      if (lookahead == 'o')
        ADVANCE(168);
      if (lookahead == 'r')
        ADVANCE(180);
      if (lookahead == 's')
        ADVANCE(196);
      if (lookahead == 't')
        ADVANCE(212);
      if (lookahead == 'v')
        ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '>')
        ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 4:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(14);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LT_POUND);
      if (lookahead == 'f')
        ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'u')
        ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'n')
        ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'c')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 't')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'i')
        ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'o')
        ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'n')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LT_POUNDfunction);
      END_STATE();
    case 14:
      if (lookahead == '#')
        ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUND);
      if (lookahead == 'f')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'u')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'n')
        ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'c')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 't')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'i')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'o')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'n')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '>')
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDfunction_GT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 26:
      if (lookahead == 's')
        ADVANCE(27);
      if (lookahead == 't')
        ADVANCE(32);
      if (lookahead == 'u')
        ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == 's')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'i')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'g')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'n')
        ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_assign);
      END_STATE();
    case 32:
      if (lookahead == 't')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'e')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'm')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'p')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 't')
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_attempt);
      END_STATE();
    case 38:
      if (lookahead == 't')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'o')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'e')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 's')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'c')
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_autoesc);
      END_STATE();
    case 44:
      if (lookahead == 'r')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'e')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'a')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'k')
        ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 49:
      if (lookahead == 'a')
        ADVANCE(50);
      if (lookahead == 'o')
        ADVANCE(53);
      END_STATE();
    case 50:
      if (lookahead == 's')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'e')
        ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 53:
      if (lookahead == 'm')
        ADVANCE(54);
      if (lookahead == 'n')
        ADVANCE(60);
      END_STATE();
    case 54:
      if (lookahead == 'p')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'r')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'e')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 's')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 's')
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_compress);
      END_STATE();
    case 60:
      if (lookahead == 't')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'i')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'n')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'u')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'e')
        ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 66:
      if (lookahead == 'e')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'f')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'a')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'u')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'l')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 't')
        ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 73:
      if (lookahead == 'l')
        ADVANCE(74);
      if (lookahead == 's')
        ADVANCE(79);
      END_STATE();
    case 74:
      if (lookahead == 's')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 'e')
        ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 'f')
        ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 79:
      if (lookahead == 'c')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'a')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'p')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'e')
        ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_escape);
      END_STATE();
    case 84:
      if (lookahead == 'a')
        ADVANCE(85);
      if (lookahead == 'l')
        ADVANCE(92);
      if (lookahead == 't')
        ADVANCE(96);
      if (lookahead == 'u')
        ADVANCE(98);
      END_STATE();
    case 85:
      if (lookahead == 'l')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 'l')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 'b')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'a')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'c')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'k')
        ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_fallback);
      END_STATE();
    case 92:
      if (lookahead == 'u')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 's')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'h')
        ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_flush);
      END_STATE();
    case 96:
      if (lookahead == 'l')
        ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_ftl);
      END_STATE();
    case 98:
      if (lookahead == 'n')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'c')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 't')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'i')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'o')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'n')
        ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 105:
      if (lookahead == 'l')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'o')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'b')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'a')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'l')
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 111:
      if (lookahead == 'f')
        ADVANCE(112);
      if (lookahead == 'm')
        ADVANCE(113);
      if (lookahead == 'n')
        ADVANCE(118);
      if (lookahead == 't')
        ADVANCE(124);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 113:
      if (lookahead == 'p')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'o')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'r')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 't')
        ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 118:
      if (lookahead == 'c')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'l')
        ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 'u')
        ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 'd')
        ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 'e')
        ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 124:
      if (lookahead == 'e')
        ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == 'm')
        ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == 's')
        ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_items);
      END_STATE();
    case 128:
      if (lookahead == 'i')
        ADVANCE(129);
      if (lookahead == 'o')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(136);
      END_STATE();
    case 129:
      if (lookahead == 's')
        ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 't')
        ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 132:
      if (lookahead == 'c')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'a')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == 'l')
        ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_lt);
      END_STATE();
    case 137:
      if (lookahead == 'a')
        ADVANCE(138);
      END_STATE();
    case 138:
      if (lookahead == 'c')
        ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'r')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == 'o')
        ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_macro);
      END_STATE();
    case 142:
      if (lookahead == 'e')
        ADVANCE(143);
      if (lookahead == 'o')
        ADVANCE(148);
      if (lookahead == 't')
        ADVANCE(167);
      END_STATE();
    case 143:
      if (lookahead == 's')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 't')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'e')
        ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'd')
        ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_nested);
      END_STATE();
    case 148:
      if (lookahead == 'a')
        ADVANCE(149);
      if (lookahead == 'e')
        ADVANCE(156);
      if (lookahead == 'p')
        ADVANCE(162);
      END_STATE();
    case 149:
      if (lookahead == 'u')
        ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 't')
        ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == 'o')
        ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 'e')
        ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == 's')
        ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == 'c')
        ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_noautoesc);
      END_STATE();
    case 156:
      if (lookahead == 's')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'c')
        ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == 'a')
        ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 'p')
        ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 'e')
        ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_noescape);
      END_STATE();
    case 162:
      if (lookahead == 'a')
        ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == 'r')
        ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 's')
        ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == 'e')
        ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_noparse);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_nt);
      END_STATE();
    case 168:
      if (lookahead == 'u')
        ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 't')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 'p')
        ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == 'u')
        ADVANCE(172);
      END_STATE();
    case 172:
      if (lookahead == 't')
        ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == 'f')
        ADVANCE(174);
      END_STATE();
    case 174:
      if (lookahead == 'o')
        ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead == 'r')
        ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 'm')
        ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == 'a')
        ADVANCE(178);
      END_STATE();
    case 178:
      if (lookahead == 't')
        ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_outputformat);
      END_STATE();
    case 180:
      if (lookahead == 'e')
        ADVANCE(181);
      if (lookahead == 't')
        ADVANCE(195);
      END_STATE();
    case 181:
      if (lookahead == 'c')
        ADVANCE(182);
      if (lookahead == 't')
        ADVANCE(191);
      END_STATE();
    case 182:
      if (lookahead == 'o')
        ADVANCE(183);
      if (lookahead == 'u')
        ADVANCE(187);
      END_STATE();
    case 183:
      if (lookahead == 'v')
        ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead == 'e')
        ADVANCE(185);
      END_STATE();
    case 185:
      if (lookahead == 'r')
        ADVANCE(186);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_recover);
      END_STATE();
    case 187:
      if (lookahead == 'r')
        ADVANCE(188);
      END_STATE();
    case 188:
      if (lookahead == 's')
        ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == 'e')
        ADVANCE(190);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_recurse);
      END_STATE();
    case 191:
      if (lookahead == 'u')
        ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == 'r')
        ADVANCE(193);
      END_STATE();
    case 193:
      if (lookahead == 'n')
        ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_rt);
      END_STATE();
    case 196:
      if (lookahead == 'e')
        ADVANCE(197);
      if (lookahead == 't')
        ADVANCE(204);
      if (lookahead == 'w')
        ADVANCE(207);
      END_STATE();
    case 197:
      if (lookahead == 'p')
        ADVANCE(198);
      if (lookahead == 't')
        ADVANCE(199);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_sep);
      END_STATE();
    case 199:
      if (lookahead == 't')
        ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead == 'i')
        ADVANCE(201);
      END_STATE();
    case 201:
      if (lookahead == 'n')
        ADVANCE(202);
      END_STATE();
    case 202:
      if (lookahead == 'g')
        ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_setting);
      END_STATE();
    case 204:
      if (lookahead == 'o')
        ADVANCE(205);
      END_STATE();
    case 205:
      if (lookahead == 'p')
        ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_stop);
      END_STATE();
    case 207:
      if (lookahead == 'i')
        ADVANCE(208);
      END_STATE();
    case 208:
      if (lookahead == 't')
        ADVANCE(209);
      END_STATE();
    case 209:
      if (lookahead == 'c')
        ADVANCE(210);
      END_STATE();
    case 210:
      if (lookahead == 'h')
        ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 213:
      if (lookahead == 'i')
        ADVANCE(214);
      END_STATE();
    case 214:
      if (lookahead == 's')
        ADVANCE(215);
      END_STATE();
    case 215:
      if (lookahead == 'i')
        ADVANCE(216);
      END_STATE();
    case 216:
      if (lookahead == 't')
        ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_visit);
      END_STATE();
    case 218:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(218);
      END_STATE();
    case 219:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead == '#')
        ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUND);
      END_STATE();
    case 222:
      if (lookahead == '/')
        ADVANCE(2);
      if (lookahead == '>')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(26);
      if (lookahead == 'b')
        ADVANCE(44);
      if (lookahead == 'c')
        ADVANCE(49);
      if (lookahead == 'd')
        ADVANCE(66);
      if (lookahead == 'e')
        ADVANCE(73);
      if (lookahead == 'f')
        ADVANCE(84);
      if (lookahead == 'g')
        ADVANCE(105);
      if (lookahead == 'i')
        ADVANCE(111);
      if (lookahead == 'l')
        ADVANCE(128);
      if (lookahead == 'm')
        ADVANCE(137);
      if (lookahead == 'n')
        ADVANCE(142);
      if (lookahead == 'o')
        ADVANCE(168);
      if (lookahead == 'r')
        ADVANCE(180);
      if (lookahead == 's')
        ADVANCE(196);
      if (lookahead == 't')
        ADVANCE(212);
      if (lookahead == 'v')
        ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(222);
      END_STATE();
    case 223:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(223);
      END_STATE();
    case 224:
      if (lookahead == '<')
        ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(224);
      END_STATE();
    case 225:
      if (lookahead == '/')
        ADVANCE(226);
      END_STATE();
    case 226:
      if (lookahead == '#')
        ADVANCE(227);
      END_STATE();
    case 227:
      if (lookahead == 'f')
        ADVANCE(16);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 218},
  [2] = {.lex_state = 222},
  [3] = {.lex_state = 222},
  [4] = {.lex_state = 223},
  [5] = {.lex_state = 218},
  [6] = {.lex_state = 224},
  [7] = {.lex_state = 218},
  [8] = {.lex_state = 222},
  [9] = {.lex_state = 218},
  [10] = {.lex_state = 218},
  [11] = {.lex_state = 218},
  [12] = {.lex_state = 222},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1),
    [anon_sym_LT_POUND] = ACTIONS(3),
    [anon_sym_LT_SLASH_POUND] = ACTIONS(3),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_assign] = ACTIONS(1),
    [anon_sym_attempt] = ACTIONS(1),
    [anon_sym_autoesc] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_compress] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(3),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_escape] = ACTIONS(1),
    [anon_sym_fallback] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_flush] = ACTIONS(1),
    [anon_sym_ftl] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_items] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_lt] = ACTIONS(1),
    [anon_sym_macro] = ACTIONS(1),
    [anon_sym_nested] = ACTIONS(1),
    [anon_sym_noautoesc] = ACTIONS(1),
    [anon_sym_noescape] = ACTIONS(1),
    [anon_sym_noparse] = ACTIONS(1),
    [anon_sym_nt] = ACTIONS(1),
    [anon_sym_outputformat] = ACTIONS(1),
    [anon_sym_recover] = ACTIONS(1),
    [anon_sym_recurse] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_rt] = ACTIONS(1),
    [anon_sym_sep] = ACTIONS(1),
    [anon_sym_setting] = ACTIONS(1),
    [anon_sym_stop] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(1),
    [anon_sym_visit] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(4),
    [sym__definition] = STATE(5),
    [sym_function_definition] = STATE(5),
    [sym_directive_definition] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LT_POUNDfunction] = ACTIONS(7),
    [anon_sym_LT_POUND] = ACTIONS(9),
    [anon_sym_LT_SLASH_POUND] = ACTIONS(11),
  },
  [2] = {
    [anon_sym_GT] = ACTIONS(13),
  },
  [3] = {
    [sym__name] = STATE(8),
    [aux_sym_directive_definition_repeat1] = STATE(8),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_SLASH_GT] = ACTIONS(15),
    [anon_sym_assign] = ACTIONS(17),
    [anon_sym_attempt] = ACTIONS(17),
    [anon_sym_autoesc] = ACTIONS(17),
    [anon_sym_break] = ACTIONS(17),
    [anon_sym_case] = ACTIONS(17),
    [anon_sym_compress] = ACTIONS(17),
    [anon_sym_continue] = ACTIONS(17),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_else] = ACTIONS(19),
    [anon_sym_elseif] = ACTIONS(17),
    [anon_sym_escape] = ACTIONS(17),
    [anon_sym_fallback] = ACTIONS(17),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_flush] = ACTIONS(17),
    [anon_sym_ftl] = ACTIONS(17),
    [anon_sym_global] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(17),
    [anon_sym_include] = ACTIONS(17),
    [anon_sym_items] = ACTIONS(17),
    [anon_sym_list] = ACTIONS(17),
    [anon_sym_local] = ACTIONS(17),
    [anon_sym_lt] = ACTIONS(17),
    [anon_sym_macro] = ACTIONS(17),
    [anon_sym_nested] = ACTIONS(17),
    [anon_sym_noautoesc] = ACTIONS(17),
    [anon_sym_noescape] = ACTIONS(17),
    [anon_sym_noparse] = ACTIONS(17),
    [anon_sym_nt] = ACTIONS(17),
    [anon_sym_outputformat] = ACTIONS(17),
    [anon_sym_recover] = ACTIONS(17),
    [anon_sym_recurse] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(17),
    [anon_sym_rt] = ACTIONS(17),
    [anon_sym_sep] = ACTIONS(17),
    [anon_sym_setting] = ACTIONS(17),
    [anon_sym_stop] = ACTIONS(17),
    [anon_sym_switch] = ACTIONS(17),
    [anon_sym_t] = ACTIONS(17),
    [anon_sym_visit] = ACTIONS(17),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(21),
  },
  [5] = {
    [sym__definition] = STATE(9),
    [sym_function_definition] = STATE(9),
    [sym_directive_definition] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_LT_POUNDfunction] = ACTIONS(7),
    [anon_sym_LT_POUND] = ACTIONS(9),
    [anon_sym_LT_SLASH_POUND] = ACTIONS(11),
  },
  [6] = {
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(25),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_LT_POUNDfunction] = ACTIONS(27),
    [anon_sym_LT_POUND] = ACTIONS(29),
    [anon_sym_LT_SLASH_POUND] = ACTIONS(27),
  },
  [8] = {
    [sym__name] = STATE(12),
    [aux_sym_directive_definition_repeat1] = STATE(12),
    [anon_sym_GT] = ACTIONS(31),
    [anon_sym_SLASH_GT] = ACTIONS(31),
    [anon_sym_assign] = ACTIONS(33),
    [anon_sym_attempt] = ACTIONS(33),
    [anon_sym_autoesc] = ACTIONS(33),
    [anon_sym_break] = ACTIONS(33),
    [anon_sym_case] = ACTIONS(33),
    [anon_sym_compress] = ACTIONS(33),
    [anon_sym_continue] = ACTIONS(33),
    [anon_sym_default] = ACTIONS(33),
    [anon_sym_else] = ACTIONS(35),
    [anon_sym_elseif] = ACTIONS(33),
    [anon_sym_escape] = ACTIONS(33),
    [anon_sym_fallback] = ACTIONS(33),
    [anon_sym_function] = ACTIONS(33),
    [anon_sym_flush] = ACTIONS(33),
    [anon_sym_ftl] = ACTIONS(33),
    [anon_sym_global] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_import] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(33),
    [anon_sym_items] = ACTIONS(33),
    [anon_sym_list] = ACTIONS(33),
    [anon_sym_local] = ACTIONS(33),
    [anon_sym_lt] = ACTIONS(33),
    [anon_sym_macro] = ACTIONS(33),
    [anon_sym_nested] = ACTIONS(33),
    [anon_sym_noautoesc] = ACTIONS(33),
    [anon_sym_noescape] = ACTIONS(33),
    [anon_sym_noparse] = ACTIONS(33),
    [anon_sym_nt] = ACTIONS(33),
    [anon_sym_outputformat] = ACTIONS(33),
    [anon_sym_recover] = ACTIONS(33),
    [anon_sym_recurse] = ACTIONS(33),
    [anon_sym_return] = ACTIONS(33),
    [anon_sym_rt] = ACTIONS(33),
    [anon_sym_sep] = ACTIONS(33),
    [anon_sym_setting] = ACTIONS(33),
    [anon_sym_stop] = ACTIONS(33),
    [anon_sym_switch] = ACTIONS(33),
    [anon_sym_t] = ACTIONS(33),
    [anon_sym_visit] = ACTIONS(33),
  },
  [9] = {
    [sym__definition] = STATE(9),
    [sym_function_definition] = STATE(9),
    [sym_directive_definition] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_LT_POUNDfunction] = ACTIONS(39),
    [anon_sym_LT_POUND] = ACTIONS(42),
    [anon_sym_LT_SLASH_POUND] = ACTIONS(45),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(48),
    [anon_sym_LT_POUNDfunction] = ACTIONS(48),
    [anon_sym_LT_POUND] = ACTIONS(50),
    [anon_sym_LT_SLASH_POUND] = ACTIONS(48),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_LT_POUNDfunction] = ACTIONS(52),
    [anon_sym_LT_POUND] = ACTIONS(54),
    [anon_sym_LT_SLASH_POUND] = ACTIONS(52),
  },
  [12] = {
    [sym__name] = STATE(12),
    [aux_sym_directive_definition_repeat1] = STATE(12),
    [anon_sym_GT] = ACTIONS(56),
    [anon_sym_SLASH_GT] = ACTIONS(56),
    [anon_sym_assign] = ACTIONS(58),
    [anon_sym_attempt] = ACTIONS(58),
    [anon_sym_autoesc] = ACTIONS(58),
    [anon_sym_break] = ACTIONS(58),
    [anon_sym_case] = ACTIONS(58),
    [anon_sym_compress] = ACTIONS(58),
    [anon_sym_continue] = ACTIONS(58),
    [anon_sym_default] = ACTIONS(58),
    [anon_sym_else] = ACTIONS(61),
    [anon_sym_elseif] = ACTIONS(58),
    [anon_sym_escape] = ACTIONS(58),
    [anon_sym_fallback] = ACTIONS(58),
    [anon_sym_function] = ACTIONS(58),
    [anon_sym_flush] = ACTIONS(58),
    [anon_sym_ftl] = ACTIONS(58),
    [anon_sym_global] = ACTIONS(58),
    [anon_sym_if] = ACTIONS(58),
    [anon_sym_import] = ACTIONS(58),
    [anon_sym_include] = ACTIONS(58),
    [anon_sym_items] = ACTIONS(58),
    [anon_sym_list] = ACTIONS(58),
    [anon_sym_local] = ACTIONS(58),
    [anon_sym_lt] = ACTIONS(58),
    [anon_sym_macro] = ACTIONS(58),
    [anon_sym_nested] = ACTIONS(58),
    [anon_sym_noautoesc] = ACTIONS(58),
    [anon_sym_noescape] = ACTIONS(58),
    [anon_sym_noparse] = ACTIONS(58),
    [anon_sym_nt] = ACTIONS(58),
    [anon_sym_outputformat] = ACTIONS(58),
    [anon_sym_recover] = ACTIONS(58),
    [anon_sym_recurse] = ACTIONS(58),
    [anon_sym_return] = ACTIONS(58),
    [anon_sym_rt] = ACTIONS(58),
    [anon_sym_sep] = ACTIONS(58),
    [anon_sym_setting] = ACTIONS(58),
    [anon_sym_stop] = ACTIONS(58),
    [anon_sym_switch] = ACTIONS(58),
    [anon_sym_t] = ACTIONS(58),
    [anon_sym_visit] = ACTIONS(58),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = true}, SHIFT(3),
  [13] = {.count = 1, .reusable = true}, SHIFT(6),
  [15] = {.count = 1, .reusable = true}, SHIFT(7),
  [17] = {.count = 1, .reusable = true}, SHIFT(8),
  [19] = {.count = 1, .reusable = false}, SHIFT(8),
  [21] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [25] = {.count = 1, .reusable = true}, SHIFT(10),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_directive_definition, 2),
  [29] = {.count = 1, .reusable = false}, REDUCE(sym_directive_definition, 2),
  [31] = {.count = 1, .reusable = true}, SHIFT(11),
  [33] = {.count = 1, .reusable = true}, SHIFT(12),
  [35] = {.count = 1, .reusable = false}, SHIFT(12),
  [37] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [39] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [42] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [45] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [48] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 3),
  [50] = {.count = 1, .reusable = false}, REDUCE(sym_function_definition, 3),
  [52] = {.count = 1, .reusable = true}, REDUCE(sym_directive_definition, 3),
  [54] = {.count = 1, .reusable = false}, REDUCE(sym_directive_definition, 3),
  [56] = {.count = 1, .reusable = true}, REDUCE(aux_sym_directive_definition_repeat1, 2),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym_directive_definition_repeat1, 2), SHIFT_REPEAT(12),
  [61] = {.count = 2, .reusable = false}, REDUCE(aux_sym_directive_definition_repeat1, 2), SHIFT_REPEAT(12),
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
