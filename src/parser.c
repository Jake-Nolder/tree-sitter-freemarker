#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 64
#define SYMBOL_COUNT 77
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_DOLLAR_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_LT_POUND_DASH_DASH = 3,
  anon_sym_DASH_DASH_GT = 4,
  anon_sym_LT_POUND = 5,
  anon_sym_LT_SLASH_POUND = 6,
  anon_sym_GT = 7,
  anon_sym_SLASH_GT = 8,
  anon_sym_EQ = 9,
  anon_sym_as = 10,
  anon_sym_using = 11,
  anon_sym_in = 12,
  anon_sym_COMMA = 13,
  sym_identifier = 14,
  sym_alphnumerical = 15,
  sym_asciiSymbol = 16,
  sym_number = 17,
  anon_sym_assign = 18,
  anon_sym_attempt = 19,
  anon_sym_autoesc = 20,
  anon_sym_break = 21,
  anon_sym_case = 22,
  anon_sym_compress = 23,
  anon_sym_continue = 24,
  anon_sym_default = 25,
  anon_sym_else = 26,
  anon_sym_elseif = 27,
  anon_sym_escape = 28,
  anon_sym_fallback = 29,
  anon_sym_flush = 30,
  anon_sym_ftl = 31,
  anon_sym_global = 32,
  anon_sym_if = 33,
  anon_sym_import = 34,
  anon_sym_include = 35,
  anon_sym_items = 36,
  anon_sym_list = 37,
  anon_sym_local = 38,
  anon_sym_lt = 39,
  anon_sym_macro = 40,
  anon_sym_nested = 41,
  anon_sym_noautoesc = 42,
  anon_sym_noescape = 43,
  anon_sym_noparse = 44,
  anon_sym_nt = 45,
  anon_sym_outputformat = 46,
  anon_sym_recover = 47,
  anon_sym_recurse = 48,
  anon_sym_return = 49,
  anon_sym_rt = 50,
  anon_sym_sep = 51,
  anon_sym_setting = 52,
  anon_sym_stop = 53,
  anon_sym_switch = 54,
  anon_sym_t = 55,
  anon_sym_visit = 56,
  sym_source_file = 57,
  sym__definition = 58,
  sym_interpolation_definition = 59,
  sym_comments_definition = 60,
  sym_ftlTag_definition = 61,
  sym_ftlTag_start = 62,
  sym_ftlTag_end = 63,
  sym__parameters = 64,
  sym__expression = 65,
  sym_binary_expression = 66,
  sym_unary_expression = 67,
  sym__block = 68,
  sym_directive_definition = 69,
  sym__name = 70,
  aux_sym_source_file_repeat1 = 71,
  aux_sym_interpolation_definition_repeat1 = 72,
  aux_sym_comments_definition_repeat1 = 73,
  aux_sym_ftlTag_definition_repeat1 = 74,
  aux_sym_ftlTag_start_repeat1 = 75,
  aux_sym_ftlTag_start_repeat2 = 76,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LT_POUND_DASH_DASH] = "<#--",
  [anon_sym_DASH_DASH_GT] = "-->",
  [anon_sym_LT_POUND] = "<#",
  [anon_sym_LT_SLASH_POUND] = "</#",
  [anon_sym_GT] = ">",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_EQ] = "=",
  [anon_sym_as] = "as",
  [anon_sym_using] = "using",
  [anon_sym_in] = "in",
  [anon_sym_COMMA] = ",",
  [sym_identifier] = "identifier",
  [sym_alphnumerical] = "alphnumerical",
  [sym_asciiSymbol] = "asciiSymbol",
  [sym_number] = "number",
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
  [sym_interpolation_definition] = "interpolation_definition",
  [sym_comments_definition] = "comments_definition",
  [sym_ftlTag_definition] = "ftlTag_definition",
  [sym_ftlTag_start] = "ftlTag_start",
  [sym_ftlTag_end] = "ftlTag_end",
  [sym__parameters] = "_parameters",
  [sym__expression] = "_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym__block] = "_block",
  [sym_directive_definition] = "directive_definition",
  [sym__name] = "_name",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_interpolation_definition_repeat1] = "interpolation_definition_repeat1",
  [aux_sym_comments_definition_repeat1] = "comments_definition_repeat1",
  [aux_sym_ftlTag_definition_repeat1] = "ftlTag_definition_repeat1",
  [aux_sym_ftlTag_start_repeat1] = "ftlTag_start_repeat1",
  [aux_sym_ftlTag_start_repeat2] = "ftlTag_start_repeat2",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUND_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_GT] = {
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
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_alphnumerical] = {
    .visible = true,
    .named = true,
  },
  [sym_asciiSymbol] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
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
  [sym_interpolation_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_comments_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_ftlTag_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_ftlTag_start] = {
    .visible = true,
    .named = true,
  },
  [sym_ftlTag_end] = {
    .visible = true,
    .named = true,
  },
  [sym__parameters] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
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
  [aux_sym_interpolation_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comments_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ftlTag_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ftlTag_start_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ftlTag_start_repeat2] = {
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
      if (lookahead == '$')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(17);
      if (lookahead == 'a')
        ADVANCE(18);
      if (lookahead == 'b')
        ADVANCE(34);
      if (lookahead == 'c')
        ADVANCE(39);
      if (lookahead == 'd')
        ADVANCE(56);
      if (lookahead == 'e')
        ADVANCE(63);
      if (lookahead == 'f')
        ADVANCE(74);
      if (lookahead == 'g')
        ADVANCE(88);
      if (lookahead == 'i')
        ADVANCE(94);
      if (lookahead == 'l')
        ADVANCE(111);
      if (lookahead == 'm')
        ADVANCE(120);
      if (lookahead == 'n')
        ADVANCE(125);
      if (lookahead == 'o')
        ADVANCE(151);
      if (lookahead == 'r')
        ADVANCE(163);
      if (lookahead == 's')
        ADVANCE(179);
      if (lookahead == 't')
        ADVANCE(195);
      if (lookahead == 'u')
        ADVANCE(196);
      if (lookahead == 'v')
        ADVANCE(201);
      if (lookahead == '}')
        ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(207);
      if (('!' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '~'))
        ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_asciiSymbol);
      if (lookahead == '{')
        ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_asciiSymbol);
      if (lookahead == '-')
        ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '>')
        ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_asciiSymbol);
      if (lookahead == '>')
        ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_asciiSymbol);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(14);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LT_POUND);
      if (lookahead == '-')
        ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '-')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LT_POUND_DASH_DASH);
      END_STATE();
    case 14:
      if (lookahead == '#')
        ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUND);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(19);
      if (lookahead == 't')
        ADVANCE(22);
      if (lookahead == 'u')
        ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_as);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_alphnumerical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(27);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_attempt);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(31);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(32);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(33);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_autoesc);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(37);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k')
        ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_break);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(40);
      if (lookahead == 'o')
        ADVANCE(43);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(41);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_case);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(44);
      if (lookahead == 'n')
        ADVANCE(50);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(45);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(48);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_compress);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(51);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(54);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(55);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_continue);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(59);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(60);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(61);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(62);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_default);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(64);
      if (lookahead == 's')
        ADVANCE(69);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(65);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i')
        ADVANCE(67);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(68);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(70);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(71);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(72);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(73);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_escape);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(75);
      if (lookahead == 'l')
        ADVANCE(82);
      if (lookahead == 't')
        ADVANCE(86);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(76);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(78);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(79);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(80);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k')
        ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_fallback);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(83);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(84);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_flush);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_ftl);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(90);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(91);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(92);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(93);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_global);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(95);
      if (lookahead == 'm')
        ADVANCE(96);
      if (lookahead == 'n')
        ADVANCE(101);
      if (lookahead == 't')
        ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_if);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(97);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(98);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(99);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(100);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_import);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c')
        ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(103);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(104);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_include);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(108);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(110);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_items);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(112);
      if (lookahead == 'o')
        ADVANCE(115);
      if (lookahead == 't')
        ADVANCE(119);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(114);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_list);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(117);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(118);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_local);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_lt);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(121);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(122);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(123);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_macro);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(126);
      if (lookahead == 'o')
        ADVANCE(131);
      if (lookahead == 't')
        ADVANCE(150);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(127);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(128);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(129);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(130);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_nested);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(132);
      if (lookahead == 'e')
        ADVANCE(139);
      if (lookahead == 'p')
        ADVANCE(145);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(133);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(134);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(135);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(136);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(137);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(138);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_noautoesc);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(140);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(141);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(142);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(143);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(144);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_noescape);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(146);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(147);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(149);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_noparse);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_nt);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(153);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(154);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(156);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(157);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(158);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(159);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(160);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(161);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_outputformat);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(164);
      if (lookahead == 't')
        ADVANCE(178);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(174);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(166);
      if (lookahead == 'u')
        ADVANCE(170);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(168);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(169);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_recover);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(171);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(172);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(173);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_recurse);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(175);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(176);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_return);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_rt);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(180);
      if (lookahead == 't')
        ADVANCE(187);
      if (lookahead == 'w')
        ADVANCE(190);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(181);
      if (lookahead == 't')
        ADVANCE(182);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_sep);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(183);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(184);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(185);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(186);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_setting);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(188);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(189);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_stop);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(191);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(192);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(193);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(194);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_switch);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_t);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(197);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(198);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(200);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_using);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(202);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(203);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(204);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(205);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_visit);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_alphnumerical);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_asciiSymbol);
      END_STATE();
    case 209:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == 'i')
        ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(209);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(207);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      if (('!' <= lookahead && lookahead <= '~'))
        ADVANCE(208);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_in);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 212:
      if (lookahead == '<')
        ADVANCE(213);
      if (lookahead == '}')
        ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(212);
      END_STATE();
    case 213:
      if (lookahead == '#')
        ADVANCE(214);
      if (lookahead == '/')
        ADVANCE(14);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LT_POUND);
      END_STATE();
    case 215:
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == 'i')
        ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(215);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(207);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      if (('!' <= lookahead && lookahead <= '~'))
        ADVANCE(208);
      END_STATE();
    case 216:
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(217);
      if (lookahead == '>')
        ADVANCE(17);
      if (lookahead == 'a')
        ADVANCE(218);
      if (lookahead == 'b')
        ADVANCE(34);
      if (lookahead == 'c')
        ADVANCE(39);
      if (lookahead == 'd')
        ADVANCE(56);
      if (lookahead == 'e')
        ADVANCE(63);
      if (lookahead == 'f')
        ADVANCE(74);
      if (lookahead == 'g')
        ADVANCE(88);
      if (lookahead == 'i')
        ADVANCE(94);
      if (lookahead == 'l')
        ADVANCE(111);
      if (lookahead == 'm')
        ADVANCE(120);
      if (lookahead == 'n')
        ADVANCE(125);
      if (lookahead == 'o')
        ADVANCE(151);
      if (lookahead == 'r')
        ADVANCE(163);
      if (lookahead == 's')
        ADVANCE(179);
      if (lookahead == 't')
        ADVANCE(195);
      if (lookahead == 'v')
        ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(216);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(207);
      if (('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      if (('!' <= lookahead && lookahead <= '~'))
        ADVANCE(208);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_asciiSymbol);
      if (lookahead == '#')
        ADVANCE(214);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(219);
      if (lookahead == 't')
        ADVANCE(22);
      if (lookahead == 'u')
        ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(220);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(221);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(222);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(223);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_assign);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 224:
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(224);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(207);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      if (('!' <= lookahead && lookahead <= '~'))
        ADVANCE(208);
      END_STATE();
    case 225:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(225);
      END_STATE();
    case 226:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == 'a')
        ADVANCE(227);
      if (lookahead == 'i')
        ADVANCE(210);
      if (lookahead == 'u')
        ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(226);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(207);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      if (('!' <= lookahead && lookahead <= '~'))
        ADVANCE(208);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 228:
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == 'a')
        ADVANCE(227);
      if (lookahead == 'i')
        ADVANCE(210);
      if (lookahead == 'u')
        ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(228);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(207);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      if (('!' <= lookahead && lookahead <= '~'))
        ADVANCE(208);
      END_STATE();
    case 229:
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(217);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(17);
      if (lookahead == 'a')
        ADVANCE(227);
      if (lookahead == 'i')
        ADVANCE(210);
      if (lookahead == 'u')
        ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(229);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(207);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      if (('!' <= lookahead && lookahead <= '~'))
        ADVANCE(208);
      END_STATE();
    case 230:
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(217);
      if (lookahead == '>')
        ADVANCE(17);
      if (lookahead == 'i')
        ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(230);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(207);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      if (('!' <= lookahead && lookahead <= '~'))
        ADVANCE(208);
      END_STATE();
    case 231:
      if (lookahead == '/')
        ADVANCE(232);
      if (lookahead == '>')
        ADVANCE(17);
      if (lookahead == 'a')
        ADVANCE(233);
      if (lookahead == 'b')
        ADVANCE(251);
      if (lookahead == 'c')
        ADVANCE(256);
      if (lookahead == 'd')
        ADVANCE(273);
      if (lookahead == 'e')
        ADVANCE(280);
      if (lookahead == 'f')
        ADVANCE(291);
      if (lookahead == 'g')
        ADVANCE(305);
      if (lookahead == 'i')
        ADVANCE(311);
      if (lookahead == 'l')
        ADVANCE(328);
      if (lookahead == 'm')
        ADVANCE(337);
      if (lookahead == 'n')
        ADVANCE(342);
      if (lookahead == 'o')
        ADVANCE(368);
      if (lookahead == 'r')
        ADVANCE(380);
      if (lookahead == 's')
        ADVANCE(396);
      if (lookahead == 't')
        ADVANCE(412);
      if (lookahead == 'v')
        ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(231);
      END_STATE();
    case 232:
      if (lookahead == '>')
        ADVANCE(9);
      END_STATE();
    case 233:
      if (lookahead == 's')
        ADVANCE(234);
      if (lookahead == 't')
        ADVANCE(239);
      if (lookahead == 'u')
        ADVANCE(245);
      END_STATE();
    case 234:
      if (lookahead == 's')
        ADVANCE(235);
      END_STATE();
    case 235:
      if (lookahead == 'i')
        ADVANCE(236);
      END_STATE();
    case 236:
      if (lookahead == 'g')
        ADVANCE(237);
      END_STATE();
    case 237:
      if (lookahead == 'n')
        ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_assign);
      END_STATE();
    case 239:
      if (lookahead == 't')
        ADVANCE(240);
      END_STATE();
    case 240:
      if (lookahead == 'e')
        ADVANCE(241);
      END_STATE();
    case 241:
      if (lookahead == 'm')
        ADVANCE(242);
      END_STATE();
    case 242:
      if (lookahead == 'p')
        ADVANCE(243);
      END_STATE();
    case 243:
      if (lookahead == 't')
        ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_attempt);
      END_STATE();
    case 245:
      if (lookahead == 't')
        ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead == 'o')
        ADVANCE(247);
      END_STATE();
    case 247:
      if (lookahead == 'e')
        ADVANCE(248);
      END_STATE();
    case 248:
      if (lookahead == 's')
        ADVANCE(249);
      END_STATE();
    case 249:
      if (lookahead == 'c')
        ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_autoesc);
      END_STATE();
    case 251:
      if (lookahead == 'r')
        ADVANCE(252);
      END_STATE();
    case 252:
      if (lookahead == 'e')
        ADVANCE(253);
      END_STATE();
    case 253:
      if (lookahead == 'a')
        ADVANCE(254);
      END_STATE();
    case 254:
      if (lookahead == 'k')
        ADVANCE(255);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 256:
      if (lookahead == 'a')
        ADVANCE(257);
      if (lookahead == 'o')
        ADVANCE(260);
      END_STATE();
    case 257:
      if (lookahead == 's')
        ADVANCE(258);
      END_STATE();
    case 258:
      if (lookahead == 'e')
        ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 260:
      if (lookahead == 'm')
        ADVANCE(261);
      if (lookahead == 'n')
        ADVANCE(267);
      END_STATE();
    case 261:
      if (lookahead == 'p')
        ADVANCE(262);
      END_STATE();
    case 262:
      if (lookahead == 'r')
        ADVANCE(263);
      END_STATE();
    case 263:
      if (lookahead == 'e')
        ADVANCE(264);
      END_STATE();
    case 264:
      if (lookahead == 's')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 's')
        ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_compress);
      END_STATE();
    case 267:
      if (lookahead == 't')
        ADVANCE(268);
      END_STATE();
    case 268:
      if (lookahead == 'i')
        ADVANCE(269);
      END_STATE();
    case 269:
      if (lookahead == 'n')
        ADVANCE(270);
      END_STATE();
    case 270:
      if (lookahead == 'u')
        ADVANCE(271);
      END_STATE();
    case 271:
      if (lookahead == 'e')
        ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 273:
      if (lookahead == 'e')
        ADVANCE(274);
      END_STATE();
    case 274:
      if (lookahead == 'f')
        ADVANCE(275);
      END_STATE();
    case 275:
      if (lookahead == 'a')
        ADVANCE(276);
      END_STATE();
    case 276:
      if (lookahead == 'u')
        ADVANCE(277);
      END_STATE();
    case 277:
      if (lookahead == 'l')
        ADVANCE(278);
      END_STATE();
    case 278:
      if (lookahead == 't')
        ADVANCE(279);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 280:
      if (lookahead == 'l')
        ADVANCE(281);
      if (lookahead == 's')
        ADVANCE(286);
      END_STATE();
    case 281:
      if (lookahead == 's')
        ADVANCE(282);
      END_STATE();
    case 282:
      if (lookahead == 'e')
        ADVANCE(283);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i')
        ADVANCE(284);
      END_STATE();
    case 284:
      if (lookahead == 'f')
        ADVANCE(285);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 286:
      if (lookahead == 'c')
        ADVANCE(287);
      END_STATE();
    case 287:
      if (lookahead == 'a')
        ADVANCE(288);
      END_STATE();
    case 288:
      if (lookahead == 'p')
        ADVANCE(289);
      END_STATE();
    case 289:
      if (lookahead == 'e')
        ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_escape);
      END_STATE();
    case 291:
      if (lookahead == 'a')
        ADVANCE(292);
      if (lookahead == 'l')
        ADVANCE(299);
      if (lookahead == 't')
        ADVANCE(303);
      END_STATE();
    case 292:
      if (lookahead == 'l')
        ADVANCE(293);
      END_STATE();
    case 293:
      if (lookahead == 'l')
        ADVANCE(294);
      END_STATE();
    case 294:
      if (lookahead == 'b')
        ADVANCE(295);
      END_STATE();
    case 295:
      if (lookahead == 'a')
        ADVANCE(296);
      END_STATE();
    case 296:
      if (lookahead == 'c')
        ADVANCE(297);
      END_STATE();
    case 297:
      if (lookahead == 'k')
        ADVANCE(298);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_fallback);
      END_STATE();
    case 299:
      if (lookahead == 'u')
        ADVANCE(300);
      END_STATE();
    case 300:
      if (lookahead == 's')
        ADVANCE(301);
      END_STATE();
    case 301:
      if (lookahead == 'h')
        ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_flush);
      END_STATE();
    case 303:
      if (lookahead == 'l')
        ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_ftl);
      END_STATE();
    case 305:
      if (lookahead == 'l')
        ADVANCE(306);
      END_STATE();
    case 306:
      if (lookahead == 'o')
        ADVANCE(307);
      END_STATE();
    case 307:
      if (lookahead == 'b')
        ADVANCE(308);
      END_STATE();
    case 308:
      if (lookahead == 'a')
        ADVANCE(309);
      END_STATE();
    case 309:
      if (lookahead == 'l')
        ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 311:
      if (lookahead == 'f')
        ADVANCE(312);
      if (lookahead == 'm')
        ADVANCE(313);
      if (lookahead == 'n')
        ADVANCE(318);
      if (lookahead == 't')
        ADVANCE(324);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 313:
      if (lookahead == 'p')
        ADVANCE(314);
      END_STATE();
    case 314:
      if (lookahead == 'o')
        ADVANCE(315);
      END_STATE();
    case 315:
      if (lookahead == 'r')
        ADVANCE(316);
      END_STATE();
    case 316:
      if (lookahead == 't')
        ADVANCE(317);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 318:
      if (lookahead == 'c')
        ADVANCE(319);
      END_STATE();
    case 319:
      if (lookahead == 'l')
        ADVANCE(320);
      END_STATE();
    case 320:
      if (lookahead == 'u')
        ADVANCE(321);
      END_STATE();
    case 321:
      if (lookahead == 'd')
        ADVANCE(322);
      END_STATE();
    case 322:
      if (lookahead == 'e')
        ADVANCE(323);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 324:
      if (lookahead == 'e')
        ADVANCE(325);
      END_STATE();
    case 325:
      if (lookahead == 'm')
        ADVANCE(326);
      END_STATE();
    case 326:
      if (lookahead == 's')
        ADVANCE(327);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_items);
      END_STATE();
    case 328:
      if (lookahead == 'i')
        ADVANCE(329);
      if (lookahead == 'o')
        ADVANCE(332);
      if (lookahead == 't')
        ADVANCE(336);
      END_STATE();
    case 329:
      if (lookahead == 's')
        ADVANCE(330);
      END_STATE();
    case 330:
      if (lookahead == 't')
        ADVANCE(331);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 332:
      if (lookahead == 'c')
        ADVANCE(333);
      END_STATE();
    case 333:
      if (lookahead == 'a')
        ADVANCE(334);
      END_STATE();
    case 334:
      if (lookahead == 'l')
        ADVANCE(335);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_lt);
      END_STATE();
    case 337:
      if (lookahead == 'a')
        ADVANCE(338);
      END_STATE();
    case 338:
      if (lookahead == 'c')
        ADVANCE(339);
      END_STATE();
    case 339:
      if (lookahead == 'r')
        ADVANCE(340);
      END_STATE();
    case 340:
      if (lookahead == 'o')
        ADVANCE(341);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_macro);
      END_STATE();
    case 342:
      if (lookahead == 'e')
        ADVANCE(343);
      if (lookahead == 'o')
        ADVANCE(348);
      if (lookahead == 't')
        ADVANCE(367);
      END_STATE();
    case 343:
      if (lookahead == 's')
        ADVANCE(344);
      END_STATE();
    case 344:
      if (lookahead == 't')
        ADVANCE(345);
      END_STATE();
    case 345:
      if (lookahead == 'e')
        ADVANCE(346);
      END_STATE();
    case 346:
      if (lookahead == 'd')
        ADVANCE(347);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_nested);
      END_STATE();
    case 348:
      if (lookahead == 'a')
        ADVANCE(349);
      if (lookahead == 'e')
        ADVANCE(356);
      if (lookahead == 'p')
        ADVANCE(362);
      END_STATE();
    case 349:
      if (lookahead == 'u')
        ADVANCE(350);
      END_STATE();
    case 350:
      if (lookahead == 't')
        ADVANCE(351);
      END_STATE();
    case 351:
      if (lookahead == 'o')
        ADVANCE(352);
      END_STATE();
    case 352:
      if (lookahead == 'e')
        ADVANCE(353);
      END_STATE();
    case 353:
      if (lookahead == 's')
        ADVANCE(354);
      END_STATE();
    case 354:
      if (lookahead == 'c')
        ADVANCE(355);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_noautoesc);
      END_STATE();
    case 356:
      if (lookahead == 's')
        ADVANCE(357);
      END_STATE();
    case 357:
      if (lookahead == 'c')
        ADVANCE(358);
      END_STATE();
    case 358:
      if (lookahead == 'a')
        ADVANCE(359);
      END_STATE();
    case 359:
      if (lookahead == 'p')
        ADVANCE(360);
      END_STATE();
    case 360:
      if (lookahead == 'e')
        ADVANCE(361);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_noescape);
      END_STATE();
    case 362:
      if (lookahead == 'a')
        ADVANCE(363);
      END_STATE();
    case 363:
      if (lookahead == 'r')
        ADVANCE(364);
      END_STATE();
    case 364:
      if (lookahead == 's')
        ADVANCE(365);
      END_STATE();
    case 365:
      if (lookahead == 'e')
        ADVANCE(366);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_noparse);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_nt);
      END_STATE();
    case 368:
      if (lookahead == 'u')
        ADVANCE(369);
      END_STATE();
    case 369:
      if (lookahead == 't')
        ADVANCE(370);
      END_STATE();
    case 370:
      if (lookahead == 'p')
        ADVANCE(371);
      END_STATE();
    case 371:
      if (lookahead == 'u')
        ADVANCE(372);
      END_STATE();
    case 372:
      if (lookahead == 't')
        ADVANCE(373);
      END_STATE();
    case 373:
      if (lookahead == 'f')
        ADVANCE(374);
      END_STATE();
    case 374:
      if (lookahead == 'o')
        ADVANCE(375);
      END_STATE();
    case 375:
      if (lookahead == 'r')
        ADVANCE(376);
      END_STATE();
    case 376:
      if (lookahead == 'm')
        ADVANCE(377);
      END_STATE();
    case 377:
      if (lookahead == 'a')
        ADVANCE(378);
      END_STATE();
    case 378:
      if (lookahead == 't')
        ADVANCE(379);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_outputformat);
      END_STATE();
    case 380:
      if (lookahead == 'e')
        ADVANCE(381);
      if (lookahead == 't')
        ADVANCE(395);
      END_STATE();
    case 381:
      if (lookahead == 'c')
        ADVANCE(382);
      if (lookahead == 't')
        ADVANCE(391);
      END_STATE();
    case 382:
      if (lookahead == 'o')
        ADVANCE(383);
      if (lookahead == 'u')
        ADVANCE(387);
      END_STATE();
    case 383:
      if (lookahead == 'v')
        ADVANCE(384);
      END_STATE();
    case 384:
      if (lookahead == 'e')
        ADVANCE(385);
      END_STATE();
    case 385:
      if (lookahead == 'r')
        ADVANCE(386);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_recover);
      END_STATE();
    case 387:
      if (lookahead == 'r')
        ADVANCE(388);
      END_STATE();
    case 388:
      if (lookahead == 's')
        ADVANCE(389);
      END_STATE();
    case 389:
      if (lookahead == 'e')
        ADVANCE(390);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_recurse);
      END_STATE();
    case 391:
      if (lookahead == 'u')
        ADVANCE(392);
      END_STATE();
    case 392:
      if (lookahead == 'r')
        ADVANCE(393);
      END_STATE();
    case 393:
      if (lookahead == 'n')
        ADVANCE(394);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_rt);
      END_STATE();
    case 396:
      if (lookahead == 'e')
        ADVANCE(397);
      if (lookahead == 't')
        ADVANCE(404);
      if (lookahead == 'w')
        ADVANCE(407);
      END_STATE();
    case 397:
      if (lookahead == 'p')
        ADVANCE(398);
      if (lookahead == 't')
        ADVANCE(399);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_sep);
      END_STATE();
    case 399:
      if (lookahead == 't')
        ADVANCE(400);
      END_STATE();
    case 400:
      if (lookahead == 'i')
        ADVANCE(401);
      END_STATE();
    case 401:
      if (lookahead == 'n')
        ADVANCE(402);
      END_STATE();
    case 402:
      if (lookahead == 'g')
        ADVANCE(403);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_setting);
      END_STATE();
    case 404:
      if (lookahead == 'o')
        ADVANCE(405);
      END_STATE();
    case 405:
      if (lookahead == 'p')
        ADVANCE(406);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_stop);
      END_STATE();
    case 407:
      if (lookahead == 'i')
        ADVANCE(408);
      END_STATE();
    case 408:
      if (lookahead == 't')
        ADVANCE(409);
      END_STATE();
    case 409:
      if (lookahead == 'c')
        ADVANCE(410);
      END_STATE();
    case 410:
      if (lookahead == 'h')
        ADVANCE(411);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 413:
      if (lookahead == 'i')
        ADVANCE(414);
      END_STATE();
    case 414:
      if (lookahead == 's')
        ADVANCE(415);
      END_STATE();
    case 415:
      if (lookahead == 'i')
        ADVANCE(416);
      END_STATE();
    case 416:
      if (lookahead == 't')
        ADVANCE(417);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_visit);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 209},
  [2] = {.lex_state = 212},
  [3] = {.lex_state = 215},
  [4] = {.lex_state = 216},
  [5] = {.lex_state = 224},
  [6] = {.lex_state = 225},
  [7] = {.lex_state = 216},
  [8] = {.lex_state = 226},
  [9] = {.lex_state = 209},
  [10] = {.lex_state = 209},
  [11] = {.lex_state = 216},
  [12] = {.lex_state = 212},
  [13] = {.lex_state = 209},
  [14] = {.lex_state = 224},
  [15] = {.lex_state = 228},
  [16] = {.lex_state = 215},
  [17] = {.lex_state = 224},
  [18] = {.lex_state = 229},
  [19] = {.lex_state = 216},
  [20] = {.lex_state = 230},
  [21] = {.lex_state = 226},
  [22] = {.lex_state = 231},
  [23] = {.lex_state = 209},
  [24] = {.lex_state = 209},
  [25] = {.lex_state = 216},
  [26] = {.lex_state = 224},
  [27] = {.lex_state = 224},
  [28] = {.lex_state = 224},
  [29] = {.lex_state = 209},
  [30] = {.lex_state = 212},
  [31] = {.lex_state = 212},
  [32] = {.lex_state = 216},
  [33] = {.lex_state = 209},
  [34] = {.lex_state = 212},
  [35] = {.lex_state = 228},
  [36] = {.lex_state = 224},
  [37] = {.lex_state = 224},
  [38] = {.lex_state = 224},
  [39] = {.lex_state = 209},
  [40] = {.lex_state = 215},
  [41] = {.lex_state = 229},
  [42] = {.lex_state = 224},
  [43] = {.lex_state = 224},
  [44] = {.lex_state = 224},
  [45] = {.lex_state = 216},
  [46] = {.lex_state = 230},
  [47] = {.lex_state = 230},
  [48] = {.lex_state = 216},
  [49] = {.lex_state = 231},
  [50] = {.lex_state = 209},
  [51] = {.lex_state = 216},
  [52] = {.lex_state = 226},
  [53] = {.lex_state = 226},
  [54] = {.lex_state = 226},
  [55] = {.lex_state = 212},
  [56] = {.lex_state = 228},
  [57] = {.lex_state = 228},
  [58] = {.lex_state = 228},
  [59] = {.lex_state = 229},
  [60] = {.lex_state = 229},
  [61] = {.lex_state = 229},
  [62] = {.lex_state = 216},
  [63] = {.lex_state = 231},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LT_POUND_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_POUND] = ACTIONS(3),
    [anon_sym_LT_SLASH_POUND] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(3),
    [anon_sym_using] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_identifier] = ACTIONS(3),
    [sym_alphnumerical] = ACTIONS(3),
    [sym_asciiSymbol] = ACTIONS(3),
    [sym_number] = ACTIONS(3),
    [anon_sym_attempt] = ACTIONS(3),
    [anon_sym_autoesc] = ACTIONS(3),
    [anon_sym_break] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(3),
    [anon_sym_compress] = ACTIONS(3),
    [anon_sym_continue] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(3),
    [anon_sym_elseif] = ACTIONS(3),
    [anon_sym_escape] = ACTIONS(3),
    [anon_sym_fallback] = ACTIONS(3),
    [anon_sym_flush] = ACTIONS(3),
    [anon_sym_ftl] = ACTIONS(3),
    [anon_sym_global] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(3),
    [anon_sym_include] = ACTIONS(3),
    [anon_sym_items] = ACTIONS(3),
    [anon_sym_list] = ACTIONS(3),
    [anon_sym_local] = ACTIONS(3),
    [anon_sym_lt] = ACTIONS(3),
    [anon_sym_macro] = ACTIONS(3),
    [anon_sym_nested] = ACTIONS(3),
    [anon_sym_noautoesc] = ACTIONS(3),
    [anon_sym_noescape] = ACTIONS(3),
    [anon_sym_noparse] = ACTIONS(3),
    [anon_sym_nt] = ACTIONS(3),
    [anon_sym_outputformat] = ACTIONS(3),
    [anon_sym_recover] = ACTIONS(3),
    [anon_sym_recurse] = ACTIONS(3),
    [anon_sym_return] = ACTIONS(3),
    [anon_sym_rt] = ACTIONS(3),
    [anon_sym_sep] = ACTIONS(3),
    [anon_sym_setting] = ACTIONS(3),
    [anon_sym_stop] = ACTIONS(3),
    [anon_sym_switch] = ACTIONS(3),
    [anon_sym_t] = ACTIONS(3),
    [anon_sym_visit] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(6),
    [sym__definition] = STATE(9),
    [sym_interpolation_definition] = STATE(9),
    [sym_comments_definition] = STATE(9),
    [sym_ftlTag_definition] = STATE(9),
    [sym_ftlTag_start] = STATE(7),
    [sym__parameters] = STATE(9),
    [sym__expression] = STATE(8),
    [sym_binary_expression] = STATE(8),
    [sym_unary_expression] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(7),
    [anon_sym_LT_POUND_DASH_DASH] = ACTIONS(9),
    [anon_sym_LT_POUND] = ACTIONS(11),
    [anon_sym_LT_SLASH_POUND] = ACTIONS(13),
    [anon_sym_in] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_alphnumerical] = ACTIONS(19),
    [sym_asciiSymbol] = ACTIONS(19),
    [sym_number] = ACTIONS(19),
  },
  [2] = {
    [sym_ftlTag_definition] = STATE(12),
    [sym_ftlTag_start] = STATE(11),
    [aux_sym_interpolation_definition_repeat1] = STATE(12),
    [anon_sym_RBRACE] = ACTIONS(21),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUND] = ACTIONS(13),
  },
  [3] = {
    [sym__expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_unary_expression] = STATE(15),
    [aux_sym_comments_definition_repeat1] = STATE(16),
    [anon_sym_DASH_DASH_GT] = ACTIONS(23),
    [anon_sym_in] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [sym_alphnumerical] = ACTIONS(29),
    [sym_asciiSymbol] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
  },
  [4] = {
    [sym__parameters] = STATE(20),
    [sym__expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_unary_expression] = STATE(18),
    [sym__name] = STATE(19),
    [aux_sym_ftlTag_start_repeat1] = STATE(19),
    [aux_sym_ftlTag_start_repeat2] = STATE(20),
    [anon_sym_LT_POUND] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(31),
    [anon_sym_SLASH_GT] = ACTIONS(31),
    [anon_sym_in] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_alphnumerical] = ACTIONS(37),
    [sym_asciiSymbol] = ACTIONS(37),
    [sym_number] = ACTIONS(37),
    [anon_sym_assign] = ACTIONS(39),
    [anon_sym_attempt] = ACTIONS(39),
    [anon_sym_autoesc] = ACTIONS(39),
    [anon_sym_break] = ACTIONS(39),
    [anon_sym_case] = ACTIONS(39),
    [anon_sym_compress] = ACTIONS(39),
    [anon_sym_continue] = ACTIONS(39),
    [anon_sym_default] = ACTIONS(39),
    [anon_sym_else] = ACTIONS(39),
    [anon_sym_elseif] = ACTIONS(39),
    [anon_sym_escape] = ACTIONS(39),
    [anon_sym_fallback] = ACTIONS(39),
    [anon_sym_flush] = ACTIONS(39),
    [anon_sym_ftl] = ACTIONS(39),
    [anon_sym_global] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_import] = ACTIONS(39),
    [anon_sym_include] = ACTIONS(39),
    [anon_sym_items] = ACTIONS(39),
    [anon_sym_list] = ACTIONS(39),
    [anon_sym_local] = ACTIONS(39),
    [anon_sym_lt] = ACTIONS(39),
    [anon_sym_macro] = ACTIONS(39),
    [anon_sym_nested] = ACTIONS(39),
    [anon_sym_noautoesc] = ACTIONS(39),
    [anon_sym_noescape] = ACTIONS(39),
    [anon_sym_noparse] = ACTIONS(39),
    [anon_sym_nt] = ACTIONS(39),
    [anon_sym_outputformat] = ACTIONS(39),
    [anon_sym_recover] = ACTIONS(39),
    [anon_sym_recurse] = ACTIONS(39),
    [anon_sym_return] = ACTIONS(39),
    [anon_sym_rt] = ACTIONS(39),
    [anon_sym_sep] = ACTIONS(39),
    [anon_sym_setting] = ACTIONS(39),
    [anon_sym_stop] = ACTIONS(39),
    [anon_sym_switch] = ACTIONS(39),
    [anon_sym_t] = ACTIONS(39),
    [anon_sym_visit] = ACTIONS(39),
  },
  [5] = {
    [sym__expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_unary_expression] = STATE(21),
    [anon_sym_in] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [sym_identifier] = ACTIONS(41),
    [sym_alphnumerical] = ACTIONS(41),
    [sym_asciiSymbol] = ACTIONS(41),
    [sym_number] = ACTIONS(41),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(43),
  },
  [7] = {
    [sym_ftlTag_end] = STATE(24),
    [sym__block] = STATE(25),
    [sym_directive_definition] = STATE(25),
    [aux_sym_ftlTag_definition_repeat1] = STATE(25),
    [anon_sym_LT_POUND] = ACTIONS(45),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_SLASH_GT] = ACTIONS(47),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(49),
    [anon_sym_LT_POUND_DASH_DASH] = ACTIONS(49),
    [anon_sym_LT_POUND] = ACTIONS(51),
    [anon_sym_LT_SLASH_POUND] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(53),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_using] = ACTIONS(57),
    [anon_sym_in] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(49),
    [sym_identifier] = ACTIONS(51),
    [sym_alphnumerical] = ACTIONS(51),
    [sym_asciiSymbol] = ACTIONS(51),
    [sym_number] = ACTIONS(51),
  },
  [9] = {
    [sym__definition] = STATE(29),
    [sym_interpolation_definition] = STATE(29),
    [sym_comments_definition] = STATE(29),
    [sym_ftlTag_definition] = STATE(29),
    [sym_ftlTag_start] = STATE(7),
    [sym__parameters] = STATE(29),
    [sym__expression] = STATE(8),
    [sym_binary_expression] = STATE(8),
    [sym_unary_expression] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(7),
    [anon_sym_LT_POUND_DASH_DASH] = ACTIONS(9),
    [anon_sym_LT_POUND] = ACTIONS(11),
    [anon_sym_LT_SLASH_POUND] = ACTIONS(13),
    [anon_sym_in] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_alphnumerical] = ACTIONS(19),
    [sym_asciiSymbol] = ACTIONS(19),
    [sym_number] = ACTIONS(19),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(61),
    [anon_sym_LT_POUND_DASH_DASH] = ACTIONS(61),
    [anon_sym_LT_POUND] = ACTIONS(63),
    [anon_sym_LT_SLASH_POUND] = ACTIONS(61),
    [anon_sym_in] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(61),
    [sym_identifier] = ACTIONS(63),
    [sym_alphnumerical] = ACTIONS(63),
    [sym_asciiSymbol] = ACTIONS(63),
    [sym_number] = ACTIONS(63),
  },
  [11] = {
    [sym_ftlTag_end] = STATE(31),
    [sym__block] = STATE(32),
    [sym_directive_definition] = STATE(32),
    [aux_sym_ftlTag_definition_repeat1] = STATE(32),
    [anon_sym_LT_POUND] = ACTIONS(45),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_SLASH_GT] = ACTIONS(65),
  },
  [12] = {
    [sym_ftlTag_definition] = STATE(34),
    [sym_ftlTag_start] = STATE(11),
    [aux_sym_interpolation_definition_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(67),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUND] = ACTIONS(13),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(69),
    [anon_sym_LT_POUND_DASH_DASH] = ACTIONS(69),
    [anon_sym_LT_POUND] = ACTIONS(71),
    [anon_sym_LT_SLASH_POUND] = ACTIONS(69),
    [anon_sym_in] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(69),
    [sym_identifier] = ACTIONS(71),
    [sym_alphnumerical] = ACTIONS(71),
    [sym_asciiSymbol] = ACTIONS(71),
    [sym_number] = ACTIONS(71),
  },
  [14] = {
    [sym__expression] = STATE(35),
    [sym_binary_expression] = STATE(35),
    [sym_unary_expression] = STATE(35),
    [anon_sym_in] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(27),
    [sym_identifier] = ACTIONS(73),
    [sym_alphnumerical] = ACTIONS(73),
    [sym_asciiSymbol] = ACTIONS(73),
    [sym_number] = ACTIONS(73),
  },
  [15] = {
    [anon_sym_DASH_DASH_GT] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(77),
    [anon_sym_as] = ACTIONS(79),
    [anon_sym_using] = ACTIONS(81),
    [anon_sym_in] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(75),
    [sym_identifier] = ACTIONS(83),
    [sym_alphnumerical] = ACTIONS(83),
    [sym_asciiSymbol] = ACTIONS(83),
    [sym_number] = ACTIONS(83),
  },
  [16] = {
    [sym__expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_unary_expression] = STATE(15),
    [aux_sym_comments_definition_repeat1] = STATE(40),
    [anon_sym_DASH_DASH_GT] = ACTIONS(85),
    [anon_sym_in] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [sym_alphnumerical] = ACTIONS(29),
    [sym_asciiSymbol] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
  },
  [17] = {
    [sym__expression] = STATE(41),
    [sym_binary_expression] = STATE(41),
    [sym_unary_expression] = STATE(41),
    [anon_sym_in] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [sym_identifier] = ACTIONS(87),
    [sym_alphnumerical] = ACTIONS(87),
    [sym_asciiSymbol] = ACTIONS(87),
    [sym_number] = ACTIONS(87),
  },
  [18] = {
    [anon_sym_LT_POUND] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_SLASH_GT] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(89),
    [anon_sym_as] = ACTIONS(91),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_in] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(49),
    [sym_identifier] = ACTIONS(51),
    [sym_alphnumerical] = ACTIONS(51),
    [sym_asciiSymbol] = ACTIONS(51),
    [sym_number] = ACTIONS(51),
  },
  [19] = {
    [sym__parameters] = STATE(46),
    [sym__expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_unary_expression] = STATE(18),
    [sym__name] = STATE(45),
    [aux_sym_ftlTag_start_repeat1] = STATE(45),
    [aux_sym_ftlTag_start_repeat2] = STATE(46),
    [anon_sym_LT_POUND] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_SLASH_GT] = ACTIONS(95),
    [anon_sym_in] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_alphnumerical] = ACTIONS(37),
    [sym_asciiSymbol] = ACTIONS(37),
    [sym_number] = ACTIONS(37),
    [anon_sym_assign] = ACTIONS(97),
    [anon_sym_attempt] = ACTIONS(97),
    [anon_sym_autoesc] = ACTIONS(97),
    [anon_sym_break] = ACTIONS(97),
    [anon_sym_case] = ACTIONS(97),
    [anon_sym_compress] = ACTIONS(97),
    [anon_sym_continue] = ACTIONS(97),
    [anon_sym_default] = ACTIONS(97),
    [anon_sym_else] = ACTIONS(97),
    [anon_sym_elseif] = ACTIONS(97),
    [anon_sym_escape] = ACTIONS(97),
    [anon_sym_fallback] = ACTIONS(97),
    [anon_sym_flush] = ACTIONS(97),
    [anon_sym_ftl] = ACTIONS(97),
    [anon_sym_global] = ACTIONS(97),
    [anon_sym_if] = ACTIONS(97),
    [anon_sym_import] = ACTIONS(97),
    [anon_sym_include] = ACTIONS(97),
    [anon_sym_items] = ACTIONS(97),
    [anon_sym_list] = ACTIONS(97),
    [anon_sym_local] = ACTIONS(97),
    [anon_sym_lt] = ACTIONS(97),
    [anon_sym_macro] = ACTIONS(97),
    [anon_sym_nested] = ACTIONS(97),
    [anon_sym_noautoesc] = ACTIONS(97),
    [anon_sym_noescape] = ACTIONS(97),
    [anon_sym_noparse] = ACTIONS(97),
    [anon_sym_nt] = ACTIONS(97),
    [anon_sym_outputformat] = ACTIONS(97),
    [anon_sym_recover] = ACTIONS(97),
    [anon_sym_recurse] = ACTIONS(97),
    [anon_sym_return] = ACTIONS(97),
    [anon_sym_rt] = ACTIONS(97),
    [anon_sym_sep] = ACTIONS(97),
    [anon_sym_setting] = ACTIONS(97),
    [anon_sym_stop] = ACTIONS(97),
    [anon_sym_switch] = ACTIONS(97),
    [anon_sym_t] = ACTIONS(97),
    [anon_sym_visit] = ACTIONS(97),
  },
  [20] = {
    [sym__parameters] = STATE(47),
    [sym__expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_unary_expression] = STATE(18),
    [aux_sym_ftlTag_start_repeat2] = STATE(47),
    [anon_sym_LT_POUND] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_SLASH_GT] = ACTIONS(95),
    [anon_sym_in] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_alphnumerical] = ACTIONS(37),
    [sym_asciiSymbol] = ACTIONS(37),
    [sym_number] = ACTIONS(37),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(99),
    [anon_sym_LT_POUND_DASH_DASH] = ACTIONS(99),
    [anon_sym_LT_POUND] = ACTIONS(101),
    [anon_sym_LT_SLASH_POUND] = ACTIONS(99),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_as] = ACTIONS(101),
    [anon_sym_using] = ACTIONS(57),
    [anon_sym_in] = ACTIONS(101),
    [anon_sym_COMMA] = ACTIONS(99),
    [sym_identifier] = ACTIONS(101),
    [sym_alphnumerical] = ACTIONS(101),
    [sym_asciiSymbol] = ACTIONS(101),
    [sym_number] = ACTIONS(101),
  },
  [22] = {
    [sym__name] = STATE(49),
    [aux_sym_ftlTag_start_repeat1] = STATE(49),
    [anon_sym_GT] = ACTIONS(103),
    [anon_sym_SLASH_GT] = ACTIONS(103),
    [anon_sym_assign] = ACTIONS(105),
    [anon_sym_attempt] = ACTIONS(105),
    [anon_sym_autoesc] = ACTIONS(105),
    [anon_sym_break] = ACTIONS(105),
    [anon_sym_case] = ACTIONS(105),
    [anon_sym_compress] = ACTIONS(105),
    [anon_sym_continue] = ACTIONS(105),
    [anon_sym_default] = ACTIONS(105),
    [anon_sym_else] = ACTIONS(107),
    [anon_sym_elseif] = ACTIONS(105),
    [anon_sym_escape] = ACTIONS(105),
    [anon_sym_fallback] = ACTIONS(105),
    [anon_sym_flush] = ACTIONS(105),
    [anon_sym_ftl] = ACTIONS(105),
    [anon_sym_global] = ACTIONS(105),
    [anon_sym_if] = ACTIONS(105),
    [anon_sym_import] = ACTIONS(105),
    [anon_sym_include] = ACTIONS(105),
    [anon_sym_items] = ACTIONS(105),
    [anon_sym_list] = ACTIONS(105),
    [anon_sym_local] = ACTIONS(105),
    [anon_sym_lt] = ACTIONS(105),
    [anon_sym_macro] = ACTIONS(105),
    [anon_sym_nested] = ACTIONS(105),
    [anon_sym_noautoesc] = ACTIONS(105),
    [anon_sym_noescape] = ACTIONS(105),
    [anon_sym_noparse] = ACTIONS(105),
    [anon_sym_nt] = ACTIONS(105),
    [anon_sym_outputformat] = ACTIONS(105),
    [anon_sym_recover] = ACTIONS(105),
    [anon_sym_recurse] = ACTIONS(105),
    [anon_sym_return] = ACTIONS(105),
    [anon_sym_rt] = ACTIONS(105),
    [anon_sym_sep] = ACTIONS(105),
    [anon_sym_setting] = ACTIONS(105),
    [anon_sym_stop] = ACTIONS(105),
    [anon_sym_switch] = ACTIONS(105),
    [anon_sym_t] = ACTIONS(105),
    [anon_sym_visit] = ACTIONS(105),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(109),
    [anon_sym_LT_POUND_DASH_DASH] = ACTIONS(109),
    [anon_sym_LT_POUND] = ACTIONS(111),
    [anon_sym_LT_SLASH_POUND] = ACTIONS(109),
    [anon_sym_in] = ACTIONS(111),
    [anon_sym_COMMA] = ACTIONS(109),
    [sym_identifier] = ACTIONS(111),
    [sym_alphnumerical] = ACTIONS(111),
    [sym_asciiSymbol] = ACTIONS(111),
    [sym_number] = ACTIONS(111),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(113),
    [anon_sym_LT_POUND_DASH_DASH] = ACTIONS(113),
    [anon_sym_LT_POUND] = ACTIONS(115),
    [anon_sym_LT_SLASH_POUND] = ACTIONS(113),
    [anon_sym_in] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(113),
    [sym_identifier] = ACTIONS(115),
    [sym_alphnumerical] = ACTIONS(115),
    [sym_asciiSymbol] = ACTIONS(115),
    [sym_number] = ACTIONS(115),
  },
  [25] = {
    [sym_ftlTag_end] = STATE(50),
    [sym__block] = STATE(51),
    [sym_directive_definition] = STATE(51),
    [aux_sym_ftlTag_definition_repeat1] = STATE(51),
    [anon_sym_LT_POUND] = ACTIONS(45),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_SLASH_GT] = ACTIONS(47),
  },
  [26] = {
    [sym__expression] = STATE(52),
    [sym_binary_expression] = STATE(52),
    [sym_unary_expression] = STATE(52),
    [anon_sym_in] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [sym_identifier] = ACTIONS(117),
    [sym_alphnumerical] = ACTIONS(117),
    [sym_asciiSymbol] = ACTIONS(117),
    [sym_number] = ACTIONS(117),
  },
  [27] = {
    [sym__expression] = STATE(53),
    [sym_binary_expression] = STATE(53),
    [sym_unary_expression] = STATE(53),
    [anon_sym_in] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [sym_identifier] = ACTIONS(119),
    [sym_alphnumerical] = ACTIONS(119),
    [sym_asciiSymbol] = ACTIONS(119),
    [sym_number] = ACTIONS(119),
  },
  [28] = {
    [sym__expression] = STATE(54),
    [sym_binary_expression] = STATE(54),
    [sym_unary_expression] = STATE(54),
    [anon_sym_in] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [sym_identifier] = ACTIONS(121),
    [sym_alphnumerical] = ACTIONS(121),
    [sym_asciiSymbol] = ACTIONS(121),
    [sym_number] = ACTIONS(121),
  },
  [29] = {
    [sym__definition] = STATE(29),
    [sym_interpolation_definition] = STATE(29),
    [sym_comments_definition] = STATE(29),
    [sym_ftlTag_definition] = STATE(29),
    [sym_ftlTag_start] = STATE(7),
    [sym__parameters] = STATE(29),
    [sym__expression] = STATE(8),
    [sym_binary_expression] = STATE(8),
    [sym_unary_expression] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(125),
    [anon_sym_LT_POUND_DASH_DASH] = ACTIONS(128),
    [anon_sym_LT_POUND] = ACTIONS(131),
    [anon_sym_LT_SLASH_POUND] = ACTIONS(134),
    [anon_sym_in] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(140),
    [sym_identifier] = ACTIONS(143),
    [sym_alphnumerical] = ACTIONS(143),
    [sym_asciiSymbol] = ACTIONS(143),
    [sym_number] = ACTIONS(143),
  },
  [30] = {
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_LT_POUND] = ACTIONS(109),
    [anon_sym_LT_SLASH_POUND] = ACTIONS(109),
  },
  [31] = {
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_LT_POUND] = ACTIONS(113),
    [anon_sym_LT_SLASH_POUND] = ACTIONS(113),
  },
  [32] = {
    [sym_ftlTag_end] = STATE(55),
    [sym__block] = STATE(51),
    [sym_directive_definition] = STATE(51),
    [aux_sym_ftlTag_definition_repeat1] = STATE(51),
    [anon_sym_LT_POUND] = ACTIONS(45),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_SLASH_GT] = ACTIONS(65),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(146),
    [anon_sym_LT_POUND_DASH_DASH] = ACTIONS(146),
    [anon_sym_LT_POUND] = ACTIONS(148),
    [anon_sym_LT_SLASH_POUND] = ACTIONS(146),
    [anon_sym_in] = ACTIONS(148),
    [anon_sym_COMMA] = ACTIONS(146),
    [sym_identifier] = ACTIONS(148),
    [sym_alphnumerical] = ACTIONS(148),
    [sym_asciiSymbol] = ACTIONS(148),
    [sym_number] = ACTIONS(148),
  },
  [34] = {
    [sym_ftlTag_definition] = STATE(34),
    [sym_ftlTag_start] = STATE(11),
    [aux_sym_interpolation_definition_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(150),
    [anon_sym_LT_POUND] = ACTIONS(152),
    [anon_sym_LT_SLASH_POUND] = ACTIONS(152),
  },
  [35] = {
    [anon_sym_DASH_DASH_GT] = ACTIONS(99),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_as] = ACTIONS(101),
    [anon_sym_using] = ACTIONS(81),
    [anon_sym_in] = ACTIONS(101),
    [anon_sym_COMMA] = ACTIONS(99),
    [sym_identifier] = ACTIONS(101),
    [sym_alphnumerical] = ACTIONS(101),
    [sym_asciiSymbol] = ACTIONS(101),
    [sym_number] = ACTIONS(101),
  },
  [36] = {
    [sym__expression] = STATE(56),
    [sym_binary_expression] = STATE(56),
    [sym_unary_expression] = STATE(56),
    [anon_sym_in] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(27),
    [sym_identifier] = ACTIONS(155),
    [sym_alphnumerical] = ACTIONS(155),
    [sym_asciiSymbol] = ACTIONS(155),
    [sym_number] = ACTIONS(155),
  },
  [37] = {
    [sym__expression] = STATE(57),
    [sym_binary_expression] = STATE(57),
    [sym_unary_expression] = STATE(57),
    [anon_sym_in] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(27),
    [sym_identifier] = ACTIONS(157),
    [sym_alphnumerical] = ACTIONS(157),
    [sym_asciiSymbol] = ACTIONS(157),
    [sym_number] = ACTIONS(157),
  },
  [38] = {
    [sym__expression] = STATE(58),
    [sym_binary_expression] = STATE(58),
    [sym_unary_expression] = STATE(58),
    [anon_sym_in] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(27),
    [sym_identifier] = ACTIONS(159),
    [sym_alphnumerical] = ACTIONS(159),
    [sym_asciiSymbol] = ACTIONS(159),
    [sym_number] = ACTIONS(159),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(161),
    [anon_sym_LT_POUND_DASH_DASH] = ACTIONS(161),
    [anon_sym_LT_POUND] = ACTIONS(163),
    [anon_sym_LT_SLASH_POUND] = ACTIONS(161),
    [anon_sym_in] = ACTIONS(163),
    [anon_sym_COMMA] = ACTIONS(161),
    [sym_identifier] = ACTIONS(163),
    [sym_alphnumerical] = ACTIONS(163),
    [sym_asciiSymbol] = ACTIONS(163),
    [sym_number] = ACTIONS(163),
  },
  [40] = {
    [sym__expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_unary_expression] = STATE(15),
    [aux_sym_comments_definition_repeat1] = STATE(40),
    [anon_sym_DASH_DASH_GT] = ACTIONS(165),
    [anon_sym_in] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(170),
    [sym_identifier] = ACTIONS(173),
    [sym_alphnumerical] = ACTIONS(173),
    [sym_asciiSymbol] = ACTIONS(173),
    [sym_number] = ACTIONS(173),
  },
  [41] = {
    [anon_sym_LT_POUND] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_SLASH_GT] = ACTIONS(99),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_as] = ACTIONS(101),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_in] = ACTIONS(101),
    [anon_sym_COMMA] = ACTIONS(99),
    [sym_identifier] = ACTIONS(101),
    [sym_alphnumerical] = ACTIONS(101),
    [sym_asciiSymbol] = ACTIONS(101),
    [sym_number] = ACTIONS(101),
  },
  [42] = {
    [sym__expression] = STATE(59),
    [sym_binary_expression] = STATE(59),
    [sym_unary_expression] = STATE(59),
    [anon_sym_in] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [sym_identifier] = ACTIONS(176),
    [sym_alphnumerical] = ACTIONS(176),
    [sym_asciiSymbol] = ACTIONS(176),
    [sym_number] = ACTIONS(176),
  },
  [43] = {
    [sym__expression] = STATE(60),
    [sym_binary_expression] = STATE(60),
    [sym_unary_expression] = STATE(60),
    [anon_sym_in] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [sym_identifier] = ACTIONS(178),
    [sym_alphnumerical] = ACTIONS(178),
    [sym_asciiSymbol] = ACTIONS(178),
    [sym_number] = ACTIONS(178),
  },
  [44] = {
    [sym__expression] = STATE(61),
    [sym_binary_expression] = STATE(61),
    [sym_unary_expression] = STATE(61),
    [anon_sym_in] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [sym_identifier] = ACTIONS(180),
    [sym_alphnumerical] = ACTIONS(180),
    [sym_asciiSymbol] = ACTIONS(180),
    [sym_number] = ACTIONS(180),
  },
  [45] = {
    [sym__name] = STATE(45),
    [aux_sym_ftlTag_start_repeat1] = STATE(45),
    [anon_sym_LT_POUND] = ACTIONS(182),
    [anon_sym_GT] = ACTIONS(182),
    [anon_sym_SLASH_GT] = ACTIONS(182),
    [anon_sym_in] = ACTIONS(184),
    [anon_sym_COMMA] = ACTIONS(182),
    [sym_identifier] = ACTIONS(184),
    [sym_alphnumerical] = ACTIONS(184),
    [sym_asciiSymbol] = ACTIONS(184),
    [sym_number] = ACTIONS(184),
    [anon_sym_assign] = ACTIONS(186),
    [anon_sym_attempt] = ACTIONS(186),
    [anon_sym_autoesc] = ACTIONS(186),
    [anon_sym_break] = ACTIONS(186),
    [anon_sym_case] = ACTIONS(186),
    [anon_sym_compress] = ACTIONS(186),
    [anon_sym_continue] = ACTIONS(186),
    [anon_sym_default] = ACTIONS(186),
    [anon_sym_else] = ACTIONS(186),
    [anon_sym_elseif] = ACTIONS(186),
    [anon_sym_escape] = ACTIONS(186),
    [anon_sym_fallback] = ACTIONS(186),
    [anon_sym_flush] = ACTIONS(186),
    [anon_sym_ftl] = ACTIONS(186),
    [anon_sym_global] = ACTIONS(186),
    [anon_sym_if] = ACTIONS(186),
    [anon_sym_import] = ACTIONS(186),
    [anon_sym_include] = ACTIONS(186),
    [anon_sym_items] = ACTIONS(186),
    [anon_sym_list] = ACTIONS(186),
    [anon_sym_local] = ACTIONS(186),
    [anon_sym_lt] = ACTIONS(186),
    [anon_sym_macro] = ACTIONS(186),
    [anon_sym_nested] = ACTIONS(186),
    [anon_sym_noautoesc] = ACTIONS(186),
    [anon_sym_noescape] = ACTIONS(186),
    [anon_sym_noparse] = ACTIONS(186),
    [anon_sym_nt] = ACTIONS(186),
    [anon_sym_outputformat] = ACTIONS(186),
    [anon_sym_recover] = ACTIONS(186),
    [anon_sym_recurse] = ACTIONS(186),
    [anon_sym_return] = ACTIONS(186),
    [anon_sym_rt] = ACTIONS(186),
    [anon_sym_sep] = ACTIONS(186),
    [anon_sym_setting] = ACTIONS(186),
    [anon_sym_stop] = ACTIONS(186),
    [anon_sym_switch] = ACTIONS(186),
    [anon_sym_t] = ACTIONS(186),
    [anon_sym_visit] = ACTIONS(186),
  },
  [46] = {
    [sym__parameters] = STATE(47),
    [sym__expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_unary_expression] = STATE(18),
    [aux_sym_ftlTag_start_repeat2] = STATE(47),
    [anon_sym_LT_POUND] = ACTIONS(189),
    [anon_sym_GT] = ACTIONS(189),
    [anon_sym_SLASH_GT] = ACTIONS(189),
    [anon_sym_in] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_alphnumerical] = ACTIONS(37),
    [sym_asciiSymbol] = ACTIONS(37),
    [sym_number] = ACTIONS(37),
  },
  [47] = {
    [sym__parameters] = STATE(47),
    [sym__expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_unary_expression] = STATE(18),
    [aux_sym_ftlTag_start_repeat2] = STATE(47),
    [anon_sym_LT_POUND] = ACTIONS(191),
    [anon_sym_GT] = ACTIONS(191),
    [anon_sym_SLASH_GT] = ACTIONS(191),
    [anon_sym_in] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(196),
    [sym_identifier] = ACTIONS(199),
    [sym_alphnumerical] = ACTIONS(199),
    [sym_asciiSymbol] = ACTIONS(199),
    [sym_number] = ACTIONS(199),
  },
  [48] = {
    [anon_sym_LT_POUND] = ACTIONS(202),
    [anon_sym_GT] = ACTIONS(202),
    [anon_sym_SLASH_GT] = ACTIONS(202),
  },
  [49] = {
    [sym__name] = STATE(63),
    [aux_sym_ftlTag_start_repeat1] = STATE(63),
    [anon_sym_GT] = ACTIONS(204),
    [anon_sym_SLASH_GT] = ACTIONS(204),
    [anon_sym_assign] = ACTIONS(206),
    [anon_sym_attempt] = ACTIONS(206),
    [anon_sym_autoesc] = ACTIONS(206),
    [anon_sym_break] = ACTIONS(206),
    [anon_sym_case] = ACTIONS(206),
    [anon_sym_compress] = ACTIONS(206),
    [anon_sym_continue] = ACTIONS(206),
    [anon_sym_default] = ACTIONS(206),
    [anon_sym_else] = ACTIONS(208),
    [anon_sym_elseif] = ACTIONS(206),
    [anon_sym_escape] = ACTIONS(206),
    [anon_sym_fallback] = ACTIONS(206),
    [anon_sym_flush] = ACTIONS(206),
    [anon_sym_ftl] = ACTIONS(206),
    [anon_sym_global] = ACTIONS(206),
    [anon_sym_if] = ACTIONS(206),
    [anon_sym_import] = ACTIONS(206),
    [anon_sym_include] = ACTIONS(206),
    [anon_sym_items] = ACTIONS(206),
    [anon_sym_list] = ACTIONS(206),
    [anon_sym_local] = ACTIONS(206),
    [anon_sym_lt] = ACTIONS(206),
    [anon_sym_macro] = ACTIONS(206),
    [anon_sym_nested] = ACTIONS(206),
    [anon_sym_noautoesc] = ACTIONS(206),
    [anon_sym_noescape] = ACTIONS(206),
    [anon_sym_noparse] = ACTIONS(206),
    [anon_sym_nt] = ACTIONS(206),
    [anon_sym_outputformat] = ACTIONS(206),
    [anon_sym_recover] = ACTIONS(206),
    [anon_sym_recurse] = ACTIONS(206),
    [anon_sym_return] = ACTIONS(206),
    [anon_sym_rt] = ACTIONS(206),
    [anon_sym_sep] = ACTIONS(206),
    [anon_sym_setting] = ACTIONS(206),
    [anon_sym_stop] = ACTIONS(206),
    [anon_sym_switch] = ACTIONS(206),
    [anon_sym_t] = ACTIONS(206),
    [anon_sym_visit] = ACTIONS(206),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(210),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(210),
    [anon_sym_LT_POUND_DASH_DASH] = ACTIONS(210),
    [anon_sym_LT_POUND] = ACTIONS(212),
    [anon_sym_LT_SLASH_POUND] = ACTIONS(210),
    [anon_sym_in] = ACTIONS(212),
    [anon_sym_COMMA] = ACTIONS(210),
    [sym_identifier] = ACTIONS(212),
    [sym_alphnumerical] = ACTIONS(212),
    [sym_asciiSymbol] = ACTIONS(212),
    [sym_number] = ACTIONS(212),
  },
  [51] = {
    [sym__block] = STATE(51),
    [sym_directive_definition] = STATE(51),
    [aux_sym_ftlTag_definition_repeat1] = STATE(51),
    [anon_sym_LT_POUND] = ACTIONS(214),
    [anon_sym_GT] = ACTIONS(217),
    [anon_sym_SLASH_GT] = ACTIONS(217),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(219),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(219),
    [anon_sym_LT_POUND_DASH_DASH] = ACTIONS(219),
    [anon_sym_LT_POUND] = ACTIONS(221),
    [anon_sym_LT_SLASH_POUND] = ACTIONS(219),
    [anon_sym_EQ] = ACTIONS(219),
    [anon_sym_as] = ACTIONS(55),
    [anon_sym_using] = ACTIONS(57),
    [anon_sym_in] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(219),
    [sym_identifier] = ACTIONS(221),
    [sym_alphnumerical] = ACTIONS(221),
    [sym_asciiSymbol] = ACTIONS(221),
    [sym_number] = ACTIONS(221),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(219),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(219),
    [anon_sym_LT_POUND_DASH_DASH] = ACTIONS(219),
    [anon_sym_LT_POUND] = ACTIONS(221),
    [anon_sym_LT_SLASH_POUND] = ACTIONS(219),
    [anon_sym_EQ] = ACTIONS(219),
    [anon_sym_as] = ACTIONS(221),
    [anon_sym_using] = ACTIONS(57),
    [anon_sym_in] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(219),
    [sym_identifier] = ACTIONS(221),
    [sym_alphnumerical] = ACTIONS(221),
    [sym_asciiSymbol] = ACTIONS(221),
    [sym_number] = ACTIONS(221),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(219),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(219),
    [anon_sym_LT_POUND_DASH_DASH] = ACTIONS(219),
    [anon_sym_LT_POUND] = ACTIONS(221),
    [anon_sym_LT_SLASH_POUND] = ACTIONS(219),
    [anon_sym_EQ] = ACTIONS(219),
    [anon_sym_as] = ACTIONS(221),
    [anon_sym_using] = ACTIONS(221),
    [anon_sym_in] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(219),
    [sym_identifier] = ACTIONS(221),
    [sym_alphnumerical] = ACTIONS(221),
    [sym_asciiSymbol] = ACTIONS(221),
    [sym_number] = ACTIONS(221),
  },
  [55] = {
    [anon_sym_RBRACE] = ACTIONS(210),
    [anon_sym_LT_POUND] = ACTIONS(210),
    [anon_sym_LT_SLASH_POUND] = ACTIONS(210),
  },
  [56] = {
    [anon_sym_DASH_DASH_GT] = ACTIONS(219),
    [anon_sym_EQ] = ACTIONS(219),
    [anon_sym_as] = ACTIONS(79),
    [anon_sym_using] = ACTIONS(81),
    [anon_sym_in] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(219),
    [sym_identifier] = ACTIONS(221),
    [sym_alphnumerical] = ACTIONS(221),
    [sym_asciiSymbol] = ACTIONS(221),
    [sym_number] = ACTIONS(221),
  },
  [57] = {
    [anon_sym_DASH_DASH_GT] = ACTIONS(219),
    [anon_sym_EQ] = ACTIONS(219),
    [anon_sym_as] = ACTIONS(221),
    [anon_sym_using] = ACTIONS(81),
    [anon_sym_in] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(219),
    [sym_identifier] = ACTIONS(221),
    [sym_alphnumerical] = ACTIONS(221),
    [sym_asciiSymbol] = ACTIONS(221),
    [sym_number] = ACTIONS(221),
  },
  [58] = {
    [anon_sym_DASH_DASH_GT] = ACTIONS(219),
    [anon_sym_EQ] = ACTIONS(219),
    [anon_sym_as] = ACTIONS(221),
    [anon_sym_using] = ACTIONS(221),
    [anon_sym_in] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(219),
    [sym_identifier] = ACTIONS(221),
    [sym_alphnumerical] = ACTIONS(221),
    [sym_asciiSymbol] = ACTIONS(221),
    [sym_number] = ACTIONS(221),
  },
  [59] = {
    [anon_sym_LT_POUND] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_SLASH_GT] = ACTIONS(219),
    [anon_sym_EQ] = ACTIONS(219),
    [anon_sym_as] = ACTIONS(91),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_in] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(219),
    [sym_identifier] = ACTIONS(221),
    [sym_alphnumerical] = ACTIONS(221),
    [sym_asciiSymbol] = ACTIONS(221),
    [sym_number] = ACTIONS(221),
  },
  [60] = {
    [anon_sym_LT_POUND] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_SLASH_GT] = ACTIONS(219),
    [anon_sym_EQ] = ACTIONS(219),
    [anon_sym_as] = ACTIONS(221),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_in] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(219),
    [sym_identifier] = ACTIONS(221),
    [sym_alphnumerical] = ACTIONS(221),
    [sym_asciiSymbol] = ACTIONS(221),
    [sym_number] = ACTIONS(221),
  },
  [61] = {
    [anon_sym_LT_POUND] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_SLASH_GT] = ACTIONS(219),
    [anon_sym_EQ] = ACTIONS(219),
    [anon_sym_as] = ACTIONS(221),
    [anon_sym_using] = ACTIONS(221),
    [anon_sym_in] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(219),
    [sym_identifier] = ACTIONS(221),
    [sym_alphnumerical] = ACTIONS(221),
    [sym_asciiSymbol] = ACTIONS(221),
    [sym_number] = ACTIONS(221),
  },
  [62] = {
    [anon_sym_LT_POUND] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(223),
    [anon_sym_SLASH_GT] = ACTIONS(223),
  },
  [63] = {
    [sym__name] = STATE(63),
    [aux_sym_ftlTag_start_repeat1] = STATE(63),
    [anon_sym_GT] = ACTIONS(182),
    [anon_sym_SLASH_GT] = ACTIONS(182),
    [anon_sym_assign] = ACTIONS(225),
    [anon_sym_attempt] = ACTIONS(225),
    [anon_sym_autoesc] = ACTIONS(225),
    [anon_sym_break] = ACTIONS(225),
    [anon_sym_case] = ACTIONS(225),
    [anon_sym_compress] = ACTIONS(225),
    [anon_sym_continue] = ACTIONS(225),
    [anon_sym_default] = ACTIONS(225),
    [anon_sym_else] = ACTIONS(228),
    [anon_sym_elseif] = ACTIONS(225),
    [anon_sym_escape] = ACTIONS(225),
    [anon_sym_fallback] = ACTIONS(225),
    [anon_sym_flush] = ACTIONS(225),
    [anon_sym_ftl] = ACTIONS(225),
    [anon_sym_global] = ACTIONS(225),
    [anon_sym_if] = ACTIONS(225),
    [anon_sym_import] = ACTIONS(225),
    [anon_sym_include] = ACTIONS(225),
    [anon_sym_items] = ACTIONS(225),
    [anon_sym_list] = ACTIONS(225),
    [anon_sym_local] = ACTIONS(225),
    [anon_sym_lt] = ACTIONS(225),
    [anon_sym_macro] = ACTIONS(225),
    [anon_sym_nested] = ACTIONS(225),
    [anon_sym_noautoesc] = ACTIONS(225),
    [anon_sym_noescape] = ACTIONS(225),
    [anon_sym_noparse] = ACTIONS(225),
    [anon_sym_nt] = ACTIONS(225),
    [anon_sym_outputformat] = ACTIONS(225),
    [anon_sym_recover] = ACTIONS(225),
    [anon_sym_recurse] = ACTIONS(225),
    [anon_sym_return] = ACTIONS(225),
    [anon_sym_rt] = ACTIONS(225),
    [anon_sym_sep] = ACTIONS(225),
    [anon_sym_setting] = ACTIONS(225),
    [anon_sym_stop] = ACTIONS(225),
    [anon_sym_switch] = ACTIONS(225),
    [anon_sym_t] = ACTIONS(225),
    [anon_sym_visit] = ACTIONS(225),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = false}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT(4),
  [15] = {.count = 1, .reusable = false}, SHIFT(5),
  [17] = {.count = 1, .reusable = true}, SHIFT(5),
  [19] = {.count = 1, .reusable = false}, SHIFT(8),
  [21] = {.count = 1, .reusable = true}, SHIFT(10),
  [23] = {.count = 1, .reusable = true}, SHIFT(13),
  [25] = {.count = 1, .reusable = false}, SHIFT(14),
  [27] = {.count = 1, .reusable = true}, SHIFT(14),
  [29] = {.count = 1, .reusable = false}, SHIFT(15),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_ftlTag_start, 1),
  [33] = {.count = 1, .reusable = false}, SHIFT(17),
  [35] = {.count = 1, .reusable = true}, SHIFT(17),
  [37] = {.count = 1, .reusable = false}, SHIFT(18),
  [39] = {.count = 1, .reusable = false}, SHIFT(19),
  [41] = {.count = 1, .reusable = false}, SHIFT(21),
  [43] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [45] = {.count = 1, .reusable = true}, SHIFT(22),
  [47] = {.count = 1, .reusable = true}, SHIFT(23),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym__parameters, 1),
  [51] = {.count = 1, .reusable = false}, REDUCE(sym__parameters, 1),
  [53] = {.count = 1, .reusable = true}, SHIFT(26),
  [55] = {.count = 1, .reusable = false}, SHIFT(27),
  [57] = {.count = 1, .reusable = false}, SHIFT(28),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_interpolation_definition, 2),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym_interpolation_definition, 2),
  [65] = {.count = 1, .reusable = true}, SHIFT(30),
  [67] = {.count = 1, .reusable = true}, SHIFT(33),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_comments_definition, 2),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_comments_definition, 2),
  [73] = {.count = 1, .reusable = false}, SHIFT(35),
  [75] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comments_definition_repeat1, 1),
  [77] = {.count = 1, .reusable = true}, SHIFT(36),
  [79] = {.count = 1, .reusable = false}, SHIFT(37),
  [81] = {.count = 1, .reusable = false}, SHIFT(38),
  [83] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comments_definition_repeat1, 1),
  [85] = {.count = 1, .reusable = true}, SHIFT(39),
  [87] = {.count = 1, .reusable = false}, SHIFT(41),
  [89] = {.count = 1, .reusable = true}, SHIFT(42),
  [91] = {.count = 1, .reusable = false}, SHIFT(43),
  [93] = {.count = 1, .reusable = false}, SHIFT(44),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_ftlTag_start, 2),
  [97] = {.count = 1, .reusable = false}, SHIFT(45),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2),
  [103] = {.count = 1, .reusable = true}, SHIFT(48),
  [105] = {.count = 1, .reusable = true}, SHIFT(49),
  [107] = {.count = 1, .reusable = false}, SHIFT(49),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_ftlTag_end, 1),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_ftlTag_end, 1),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_ftlTag_definition, 2),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_ftlTag_definition, 2),
  [117] = {.count = 1, .reusable = false}, SHIFT(52),
  [119] = {.count = 1, .reusable = false}, SHIFT(53),
  [121] = {.count = 1, .reusable = false}, SHIFT(54),
  [123] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [125] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [128] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [131] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [134] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [137] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [140] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [143] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_interpolation_definition, 3),
  [148] = {.count = 1, .reusable = false}, REDUCE(sym_interpolation_definition, 3),
  [150] = {.count = 1, .reusable = true}, REDUCE(aux_sym_interpolation_definition_repeat1, 2),
  [152] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interpolation_definition_repeat1, 2), SHIFT_REPEAT(4),
  [155] = {.count = 1, .reusable = false}, SHIFT(56),
  [157] = {.count = 1, .reusable = false}, SHIFT(57),
  [159] = {.count = 1, .reusable = false}, SHIFT(58),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_comments_definition, 3),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_comments_definition, 3),
  [165] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comments_definition_repeat1, 2),
  [167] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comments_definition_repeat1, 2), SHIFT_REPEAT(14),
  [170] = {.count = 2, .reusable = true}, REDUCE(aux_sym_comments_definition_repeat1, 2), SHIFT_REPEAT(14),
  [173] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comments_definition_repeat1, 2), SHIFT_REPEAT(15),
  [176] = {.count = 1, .reusable = false}, SHIFT(59),
  [178] = {.count = 1, .reusable = false}, SHIFT(60),
  [180] = {.count = 1, .reusable = false}, SHIFT(61),
  [182] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ftlTag_start_repeat1, 2),
  [184] = {.count = 1, .reusable = false}, REDUCE(aux_sym_ftlTag_start_repeat1, 2),
  [186] = {.count = 2, .reusable = false}, REDUCE(aux_sym_ftlTag_start_repeat1, 2), SHIFT_REPEAT(45),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_ftlTag_start, 3),
  [191] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ftlTag_start_repeat2, 2),
  [193] = {.count = 2, .reusable = false}, REDUCE(aux_sym_ftlTag_start_repeat2, 2), SHIFT_REPEAT(17),
  [196] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ftlTag_start_repeat2, 2), SHIFT_REPEAT(17),
  [199] = {.count = 2, .reusable = false}, REDUCE(aux_sym_ftlTag_start_repeat2, 2), SHIFT_REPEAT(18),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_directive_definition, 2),
  [204] = {.count = 1, .reusable = true}, SHIFT(62),
  [206] = {.count = 1, .reusable = true}, SHIFT(63),
  [208] = {.count = 1, .reusable = false}, SHIFT(63),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym_ftlTag_definition, 3),
  [212] = {.count = 1, .reusable = false}, REDUCE(sym_ftlTag_definition, 3),
  [214] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ftlTag_definition_repeat1, 2), SHIFT_REPEAT(22),
  [217] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ftlTag_definition_repeat1, 2),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [221] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_directive_definition, 3),
  [225] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ftlTag_start_repeat1, 2), SHIFT_REPEAT(63),
  [228] = {.count = 2, .reusable = false}, REDUCE(aux_sym_ftlTag_start_repeat1, 2), SHIFT_REPEAT(63),
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
