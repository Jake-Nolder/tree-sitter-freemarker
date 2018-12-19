#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 83
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 0
#define TOKEN_COUNT 70
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_end_single = 1,
  sym_end_block = 2,
  anon_sym_COMMA = 3,
  anon_sym_EQ = 4,
  aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH = 5,
  sym_operator = 6,
  anon_sym_LT_POUNDassign = 7,
  anon_sym_LT_POUNDattempt = 8,
  anon_sym_LT_POUNDautoesc = 9,
  anon_sym_LT_POUNDcompress = 10,
  anon_sym_LT_POUNDflush = 11,
  anon_sym_LT_POUNDftl = 12,
  anon_sym_LT_POUNDfunction = 13,
  anon_sym_LT_POUNDglobal = 14,
  anon_sym_LT_POUNDimport = 15,
  anon_sym_LT_POUNDinclude = 16,
  anon_sym_LT_POUNDlocal = 17,
  anon_sym_LT_POUNDmacro = 18,
  anon_sym_LT_POUNDnested = 19,
  anon_sym_LT_POUNDnoautoesc = 20,
  anon_sym_LT_POUNDnoparse = 21,
  anon_sym_LT_POUNDnt = 22,
  anon_sym_LT_POUNDoutputformat = 23,
  sym_recover = 24,
  anon_sym_LT_POUNDreturn = 25,
  anon_sym_GT = 26,
  anon_sym_LT_POUNDsetting = 27,
  anon_sym_LT_POUNDstop = 28,
  anon_sym_LT_POUNDt = 29,
  anon_sym_LT_POUNDlt = 30,
  anon_sym_LT_POUNDrt = 31,
  anon_sym_attempt = 32,
  anon_sym_autoesc = 33,
  anon_sym_break = 34,
  anon_sym_case = 35,
  anon_sym_compress = 36,
  anon_sym_continue = 37,
  anon_sym_default = 38,
  anon_sym_else = 39,
  anon_sym_elseif = 40,
  anon_sym_escape = 41,
  anon_sym_fallback = 42,
  anon_sym_flush = 43,
  anon_sym_ftl = 44,
  anon_sym_global = 45,
  anon_sym_if = 46,
  anon_sym_import = 47,
  anon_sym_include = 48,
  anon_sym_items = 49,
  anon_sym_list = 50,
  anon_sym_local = 51,
  anon_sym_lt = 52,
  anon_sym_macro = 53,
  anon_sym_nested = 54,
  anon_sym_noautoesc = 55,
  anon_sym_noescape = 56,
  anon_sym_noparse = 57,
  anon_sym_nt = 58,
  anon_sym_outputformat = 59,
  anon_sym_recover = 60,
  anon_sym_recurse = 61,
  anon_sym_return = 62,
  anon_sym_rt = 63,
  anon_sym_sep = 64,
  anon_sym_setting = 65,
  anon_sym_stop = 66,
  anon_sym_switch = 67,
  anon_sym_t = 68,
  anon_sym_visit = 69,
  sym_source_file = 70,
  sym__definition = 71,
  sym_directive = 72,
  sym_directiveType = 73,
  sym_single = 74,
  sym_block = 75,
  sym_start = 76,
  sym_middle = 77,
  sym__end = 78,
  sym_parameter_pattern = 79,
  sym_paramPattern1 = 80,
  sym_paramPattern2 = 81,
  sym_paramPattern3 = 82,
  sym_binary_expression = 83,
  sym_expression = 84,
  sym_identifier = 85,
  sym_name = 86,
  sym_parameter = 87,
  sym_assign = 88,
  sym_attempt = 89,
  sym_autoesc = 90,
  sym_compress = 91,
  sym_flush = 92,
  sym_ftl = 93,
  sym_function = 94,
  sym_global = 95,
  sym_import = 96,
  sym_include = 97,
  sym_local = 98,
  sym_macro = 99,
  sym_nested = 100,
  sym_noautoesc = 101,
  sym_noparse = 102,
  sym_nt = 103,
  sym_outputformat = 104,
  sym_return = 105,
  sym_setting = 106,
  sym_stop = 107,
  sym_t = 108,
  sym_lt = 109,
  sym_rt = 110,
  aux_sym_source_file_repeat1 = 111,
  aux_sym_block_repeat1 = 112,
  aux_sym_start_repeat1 = 113,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_end_single] = "end_single",
  [sym_end_block] = "end_block",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ] = "=",
  [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = "/[a-zA-Z0-9\\_]+/",
  [sym_operator] = "operator",
  [anon_sym_LT_POUNDassign] = "<#assign",
  [anon_sym_LT_POUNDattempt] = "<#attempt",
  [anon_sym_LT_POUNDautoesc] = "<#autoesc",
  [anon_sym_LT_POUNDcompress] = "<#compress",
  [anon_sym_LT_POUNDflush] = "<#flush",
  [anon_sym_LT_POUNDftl] = "<#ftl",
  [anon_sym_LT_POUNDfunction] = "<#function",
  [anon_sym_LT_POUNDglobal] = "<#global",
  [anon_sym_LT_POUNDimport] = "<#import",
  [anon_sym_LT_POUNDinclude] = "<#include",
  [anon_sym_LT_POUNDlocal] = "<#local",
  [anon_sym_LT_POUNDmacro] = "<#macro",
  [anon_sym_LT_POUNDnested] = "<#nested",
  [anon_sym_LT_POUNDnoautoesc] = "<#noautoesc",
  [anon_sym_LT_POUNDnoparse] = "<#noparse",
  [anon_sym_LT_POUNDnt] = "<#nt",
  [anon_sym_LT_POUNDoutputformat] = "<#outputformat",
  [sym_recover] = "recover",
  [anon_sym_LT_POUNDreturn] = "<#return",
  [anon_sym_GT] = ">",
  [anon_sym_LT_POUNDsetting] = "<#setting",
  [anon_sym_LT_POUNDstop] = "<#stop",
  [anon_sym_LT_POUNDt] = "<#t",
  [anon_sym_LT_POUNDlt] = "<#lt",
  [anon_sym_LT_POUNDrt] = "<#rt",
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
  [sym_directive] = "directive",
  [sym_directiveType] = "directiveType",
  [sym_single] = "single",
  [sym_block] = "block",
  [sym_start] = "start",
  [sym_middle] = "middle",
  [sym__end] = "_end",
  [sym_parameter_pattern] = "parameter_pattern",
  [sym_paramPattern1] = "paramPattern1",
  [sym_paramPattern2] = "paramPattern2",
  [sym_paramPattern3] = "paramPattern3",
  [sym_binary_expression] = "binary_expression",
  [sym_expression] = "expression",
  [sym_identifier] = "identifier",
  [sym_name] = "name",
  [sym_parameter] = "parameter",
  [sym_assign] = "assign",
  [sym_attempt] = "attempt",
  [sym_autoesc] = "autoesc",
  [sym_compress] = "compress",
  [sym_flush] = "flush",
  [sym_ftl] = "ftl",
  [sym_function] = "function",
  [sym_global] = "global",
  [sym_import] = "import",
  [sym_include] = "include",
  [sym_local] = "local",
  [sym_macro] = "macro",
  [sym_nested] = "nested",
  [sym_noautoesc] = "noautoesc",
  [sym_noparse] = "noparse",
  [sym_nt] = "nt",
  [sym_outputformat] = "outputformat",
  [sym_return] = "return",
  [sym_setting] = "setting",
  [sym_stop] = "stop",
  [sym_t] = "t",
  [sym_lt] = "lt",
  [sym_rt] = "rt",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_start_repeat1] = "start_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_end_single] = {
    .visible = true,
    .named = true,
  },
  [sym_end_block] = {
    .visible = true,
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
  [anon_sym_LT_POUNDassign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDattempt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDautoesc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDcompress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDflush] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDftl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDfunction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDglobal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDlocal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDmacro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDnested] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDnoautoesc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDnoparse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDnt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDoutputformat] = {
    .visible = true,
    .named = false,
  },
  [sym_recover] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_POUNDreturn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDsetting] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDstop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDlt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDrt] = {
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
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_directiveType] = {
    .visible = true,
    .named = true,
  },
  [sym_single] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_start] = {
    .visible = true,
    .named = true,
  },
  [sym_middle] = {
    .visible = true,
    .named = true,
  },
  [sym__end] = {
    .visible = false,
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
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_attempt] = {
    .visible = true,
    .named = true,
  },
  [sym_autoesc] = {
    .visible = true,
    .named = true,
  },
  [sym_compress] = {
    .visible = true,
    .named = true,
  },
  [sym_flush] = {
    .visible = true,
    .named = true,
  },
  [sym_ftl] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_global] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_local] = {
    .visible = true,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_nested] = {
    .visible = true,
    .named = true,
  },
  [sym_noautoesc] = {
    .visible = true,
    .named = true,
  },
  [sym_noparse] = {
    .visible = true,
    .named = true,
  },
  [sym_nt] = {
    .visible = true,
    .named = true,
  },
  [sym_outputformat] = {
    .visible = true,
    .named = true,
  },
  [sym_return] = {
    .visible = true,
    .named = true,
  },
  [sym_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_t] = {
    .visible = true,
    .named = true,
  },
  [sym_lt] = {
    .visible = true,
    .named = true,
  },
  [sym_rt] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_repeat1] = {
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
        ADVANCE(133);
      if (lookahead == '>')
        ADVANCE(134);
      if (lookahead == 'a')
        ADVANCE(135);
      if (lookahead == 'b')
        ADVANCE(150);
      if (lookahead == 'c')
        ADVANCE(155);
      if (lookahead == 'd')
        ADVANCE(172);
      if (lookahead == 'e')
        ADVANCE(179);
      if (lookahead == 'f')
        ADVANCE(190);
      if (lookahead == 'g')
        ADVANCE(204);
      if (lookahead == 'i')
        ADVANCE(210);
      if (lookahead == 'l')
        ADVANCE(227);
      if (lookahead == 'm')
        ADVANCE(236);
      if (lookahead == 'n')
        ADVANCE(241);
      if (lookahead == 'o')
        ADVANCE(267);
      if (lookahead == 'r')
        ADVANCE(279);
      if (lookahead == 's')
        ADVANCE(295);
      if (lookahead == 't')
        ADVANCE(311);
      if (lookahead == 'v')
        ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
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
        ADVANCE(130);
      END_STATE();
    case 4:
      if (lookahead == 'a')
        ADVANCE(5);
      if (lookahead == 'c')
        ADVANCE(23);
      if (lookahead == 'f')
        ADVANCE(31);
      if (lookahead == 'g')
        ADVANCE(45);
      if (lookahead == 'i')
        ADVANCE(51);
      if (lookahead == 'l')
        ADVANCE(63);
      if (lookahead == 'm')
        ADVANCE(69);
      if (lookahead == 'n')
        ADVANCE(74);
      if (lookahead == 'o')
        ADVANCE(94);
      if (lookahead == 'r')
        ADVANCE(106);
      if (lookahead == 's')
        ADVANCE(119);
      if (lookahead == 't')
        ADVANCE(129);
      END_STATE();
    case 5:
      if (lookahead == 's')
        ADVANCE(6);
      if (lookahead == 't')
        ADVANCE(11);
      if (lookahead == 'u')
        ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 's')
        ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'i')
        ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'g')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'n')
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LT_POUNDassign);
      END_STATE();
    case 11:
      if (lookahead == 't')
        ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'e')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'm')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'p')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 't')
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LT_POUNDattempt);
      END_STATE();
    case 17:
      if (lookahead == 't')
        ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'o')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'e')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 's')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'c')
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LT_POUNDautoesc);
      END_STATE();
    case 23:
      if (lookahead == 'o')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'm')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'p')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'r')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'e')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 's')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 's')
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LT_POUNDcompress);
      END_STATE();
    case 31:
      if (lookahead == 'l')
        ADVANCE(32);
      if (lookahead == 't')
        ADVANCE(36);
      if (lookahead == 'u')
        ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'u')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 's')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'h')
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT_POUNDflush);
      END_STATE();
    case 36:
      if (lookahead == 'l')
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LT_POUNDftl);
      END_STATE();
    case 38:
      if (lookahead == 'n')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'c')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 't')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'i')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'o')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'n')
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LT_POUNDfunction);
      END_STATE();
    case 45:
      if (lookahead == 'l')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'o')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'b')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'a')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'l')
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT_POUNDglobal);
      END_STATE();
    case 51:
      if (lookahead == 'm')
        ADVANCE(52);
      if (lookahead == 'n')
        ADVANCE(57);
      END_STATE();
    case 52:
      if (lookahead == 'p')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'o')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'r')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 't')
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT_POUNDimport);
      END_STATE();
    case 57:
      if (lookahead == 'c')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'l')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'u')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'd')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'e')
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT_POUNDinclude);
      END_STATE();
    case 63:
      if (lookahead == 'o')
        ADVANCE(64);
      if (lookahead == 't')
        ADVANCE(68);
      END_STATE();
    case 64:
      if (lookahead == 'c')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'a')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'l')
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LT_POUNDlocal);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LT_POUNDlt);
      END_STATE();
    case 69:
      if (lookahead == 'a')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'c')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'r')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'o')
        ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LT_POUNDmacro);
      END_STATE();
    case 74:
      if (lookahead == 'e')
        ADVANCE(75);
      if (lookahead == 'o')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(93);
      END_STATE();
    case 75:
      if (lookahead == 's')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 't')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 'e')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'd')
        ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT_POUNDnested);
      END_STATE();
    case 80:
      if (lookahead == 'a')
        ADVANCE(81);
      if (lookahead == 'p')
        ADVANCE(88);
      END_STATE();
    case 81:
      if (lookahead == 'u')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 't')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'o')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'e')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 's')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 'c')
        ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LT_POUNDnoautoesc);
      END_STATE();
    case 88:
      if (lookahead == 'a')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'r')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 's')
        ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'e')
        ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT_POUNDnoparse);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LT_POUNDnt);
      END_STATE();
    case 94:
      if (lookahead == 'u')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 't')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'p')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'u')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 't')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'f')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'o')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'r')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'm')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'a')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 't')
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LT_POUNDoutputformat);
      END_STATE();
    case 106:
      if (lookahead == 'e')
        ADVANCE(107);
      if (lookahead == 't')
        ADVANCE(118);
      END_STATE();
    case 107:
      if (lookahead == 'c')
        ADVANCE(108);
      if (lookahead == 't')
        ADVANCE(114);
      END_STATE();
    case 108:
      if (lookahead == 'o')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'v')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'e')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'r')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == '>')
        ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_recover);
      END_STATE();
    case 114:
      if (lookahead == 'u')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'r')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'n')
        ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LT_POUNDreturn);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LT_POUNDrt);
      END_STATE();
    case 119:
      if (lookahead == 'e')
        ADVANCE(120);
      if (lookahead == 't')
        ADVANCE(126);
      END_STATE();
    case 120:
      if (lookahead == 't')
        ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 't')
        ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 'i')
        ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == 'n')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 'g')
        ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LT_POUNDsetting);
      END_STATE();
    case 126:
      if (lookahead == 'o')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == 'p')
        ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LT_POUNDstop);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LT_POUNDt);
      END_STATE();
    case 130:
      if (lookahead == '#')
        ADVANCE(131);
      END_STATE();
    case 131:
      if (lookahead == '>')
        ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_end_block);
      if (lookahead == '>')
        ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(136);
      if (lookahead == 't')
        ADVANCE(138);
      if (lookahead == 'u')
        ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_operator);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'm')
        ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_attempt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'o')
        ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_autoesc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'k')
        ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_break);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(156);
      if (lookahead == 'o')
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'm')
        ADVANCE(160);
      if (lookahead == 'n')
        ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_compress);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'u')
        ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_continue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'f')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'u')
        ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(180);
      if (lookahead == 's')
        ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'f')
        ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_escape);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(191);
      if (lookahead == 'l')
        ADVANCE(198);
      if (lookahead == 't')
        ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'b')
        ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'k')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_fallback);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'u')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'h')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_flush);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_ftl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'o')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'b')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'f')
        ADVANCE(211);
      if (lookahead == 'm')
        ADVANCE(212);
      if (lookahead == 'n')
        ADVANCE(217);
      if (lookahead == 't')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'o')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'u')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'd')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_include);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'm')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_items);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(228);
      if (lookahead == 'o')
        ADVANCE(231);
      if (lookahead == 't')
        ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_list);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_lt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'o')
        ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_macro);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(242);
      if (lookahead == 'o')
        ADVANCE(247);
      if (lookahead == 't')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'd')
        ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_nested);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(248);
      if (lookahead == 'e')
        ADVANCE(255);
      if (lookahead == 'p')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'u')
        ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'o')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_noautoesc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_noescape);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_noparse);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_nt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'u')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'u')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'f')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'o')
        ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'm')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_outputformat);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(280);
      if (lookahead == 't')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(281);
      if (lookahead == 't')
        ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'o')
        ADVANCE(282);
      if (lookahead == 'u')
        ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'v')
        ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_recover);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_recurse);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'u')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_rt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(296);
      if (lookahead == 't')
        ADVANCE(303);
      if (lookahead == 'w')
        ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(297);
      if (lookahead == 't')
        ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_sep);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'g')
        ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_setting);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'o')
        ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_stop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'h')
        ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_visit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 317:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(317);
      END_STATE();
    case 318:
      if (lookahead == '#')
        ADVANCE(319);
      END_STATE();
    case 319:
      if (lookahead == 'a')
        ADVANCE(5);
      if (lookahead == 'c')
        ADVANCE(23);
      if (lookahead == 'f')
        ADVANCE(31);
      if (lookahead == 'g')
        ADVANCE(45);
      if (lookahead == 'i')
        ADVANCE(51);
      if (lookahead == 'l')
        ADVANCE(63);
      if (lookahead == 'm')
        ADVANCE(69);
      if (lookahead == 'n')
        ADVANCE(320);
      if (lookahead == 'o')
        ADVANCE(94);
      if (lookahead == 'r')
        ADVANCE(321);
      if (lookahead == 's')
        ADVANCE(119);
      if (lookahead == 't')
        ADVANCE(129);
      END_STATE();
    case 320:
      if (lookahead == 'o')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(93);
      END_STATE();
    case 321:
      if (lookahead == 't')
        ADVANCE(118);
      END_STATE();
    case 322:
      if (lookahead == ',')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(323);
      if (lookahead == '=')
        ADVANCE(133);
      if (lookahead == '>')
        ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 323:
      if (lookahead == '/')
        ADVANCE(130);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_end_single);
      END_STATE();
    case 325:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(325);
      END_STATE();
    case 326:
      if (lookahead == ',')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(323);
      if (lookahead == '=')
        ADVANCE(133);
      if (lookahead == '>')
        ADVANCE(324);
      if (lookahead == 'a')
        ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    case 328:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(3);
      if (lookahead == '>')
        ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(328);
      END_STATE();
    case 329:
      if (lookahead == 'a')
        ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(329);
      END_STATE();
    case 330:
      if (lookahead == 's')
        ADVANCE(331);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_operator);
      END_STATE();
    case 332:
      if (lookahead == '>')
        ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(137);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 317},
  [2] = {.lex_state = 322},
  [3] = {.lex_state = 322},
  [4] = {.lex_state = 322},
  [5] = {.lex_state = 322},
  [6] = {.lex_state = 322},
  [7] = {.lex_state = 322},
  [8] = {.lex_state = 322},
  [9] = {.lex_state = 322},
  [10] = {.lex_state = 322},
  [11] = {.lex_state = 322},
  [12] = {.lex_state = 322},
  [13] = {.lex_state = 322},
  [14] = {.lex_state = 322},
  [15] = {.lex_state = 322},
  [16] = {.lex_state = 322},
  [17] = {.lex_state = 322},
  [18] = {.lex_state = 322},
  [19] = {.lex_state = 322},
  [20] = {.lex_state = 322},
  [21] = {.lex_state = 322},
  [22] = {.lex_state = 322},
  [23] = {.lex_state = 325},
  [24] = {.lex_state = 317},
  [25] = {.lex_state = 317},
  [26] = {.lex_state = 326},
  [27] = {.lex_state = 317},
  [28] = {.lex_state = 317},
  [29] = {.lex_state = 328},
  [30] = {.lex_state = 328},
  [31] = {.lex_state = 322},
  [32] = {.lex_state = 329},
  [33] = {.lex_state = 322},
  [34] = {.lex_state = 322},
  [35] = {.lex_state = 322},
  [36] = {.lex_state = 322},
  [37] = {.lex_state = 317},
  [38] = {.lex_state = 328},
  [39] = {.lex_state = 317},
  [40] = {.lex_state = 328},
  [41] = {.lex_state = 317},
  [42] = {.lex_state = 317},
  [43] = {.lex_state = 317},
  [44] = {.lex_state = 317},
  [45] = {.lex_state = 317},
  [46] = {.lex_state = 317},
  [47] = {.lex_state = 317},
  [48] = {.lex_state = 317},
  [49] = {.lex_state = 317},
  [50] = {.lex_state = 317},
  [51] = {.lex_state = 317},
  [52] = {.lex_state = 317},
  [53] = {.lex_state = 317},
  [54] = {.lex_state = 317},
  [55] = {.lex_state = 317},
  [56] = {.lex_state = 317},
  [57] = {.lex_state = 317},
  [58] = {.lex_state = 317},
  [59] = {.lex_state = 317},
  [60] = {.lex_state = 322},
  [61] = {.lex_state = 328},
  [62] = {.lex_state = 332},
  [63] = {.lex_state = 317},
  [64] = {.lex_state = 328},
  [65] = {.lex_state = 322},
  [66] = {.lex_state = 326},
  [67] = {.lex_state = 328},
  [68] = {.lex_state = 322},
  [69] = {.lex_state = 322},
  [70] = {.lex_state = 322},
  [71] = {.lex_state = 322},
  [72] = {.lex_state = 328},
  [73] = {.lex_state = 332},
  [74] = {.lex_state = 328},
  [75] = {.lex_state = 332},
  [76] = {.lex_state = 317},
  [77] = {.lex_state = 328},
  [78] = {.lex_state = 322},
  [79] = {.lex_state = 322},
  [80] = {.lex_state = 328},
  [81] = {.lex_state = 322},
  [82] = {.lex_state = 328},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_end_single] = ACTIONS(3),
    [sym_end_block] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(3),
    [sym_operator] = ACTIONS(3),
    [anon_sym_LT_POUNDassign] = ACTIONS(1),
    [anon_sym_LT_POUNDattempt] = ACTIONS(1),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(1),
    [anon_sym_LT_POUNDcompress] = ACTIONS(1),
    [anon_sym_LT_POUNDflush] = ACTIONS(1),
    [anon_sym_LT_POUNDftl] = ACTIONS(1),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1),
    [anon_sym_LT_POUNDimport] = ACTIONS(1),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1),
    [anon_sym_LT_POUNDnested] = ACTIONS(1),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(1),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(1),
    [anon_sym_LT_POUNDnt] = ACTIONS(1),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(1),
    [sym_recover] = ACTIONS(1),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1),
    [anon_sym_LT_POUNDstop] = ACTIONS(1),
    [anon_sym_LT_POUNDt] = ACTIONS(1),
    [anon_sym_LT_POUNDlt] = ACTIONS(1),
    [anon_sym_LT_POUNDrt] = ACTIONS(1),
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
    [sym_source_file] = STATE(23),
    [sym__definition] = STATE(25),
    [sym_directive] = STATE(25),
    [sym_assign] = STATE(24),
    [sym_attempt] = STATE(24),
    [sym_autoesc] = STATE(24),
    [sym_compress] = STATE(24),
    [sym_flush] = STATE(24),
    [sym_ftl] = STATE(24),
    [sym_function] = STATE(24),
    [sym_global] = STATE(24),
    [sym_import] = STATE(24),
    [sym_include] = STATE(24),
    [sym_local] = STATE(24),
    [sym_macro] = STATE(24),
    [sym_noautoesc] = STATE(24),
    [sym_noparse] = STATE(24),
    [sym_nt] = STATE(24),
    [sym_outputformat] = STATE(24),
    [sym_setting] = STATE(24),
    [sym_stop] = STATE(24),
    [sym_t] = STATE(24),
    [sym_lt] = STATE(24),
    [sym_rt] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LT_POUNDassign] = ACTIONS(7),
    [anon_sym_LT_POUNDattempt] = ACTIONS(9),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(11),
    [anon_sym_LT_POUNDcompress] = ACTIONS(13),
    [anon_sym_LT_POUNDflush] = ACTIONS(15),
    [anon_sym_LT_POUNDftl] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDglobal] = ACTIONS(21),
    [anon_sym_LT_POUNDimport] = ACTIONS(23),
    [anon_sym_LT_POUNDinclude] = ACTIONS(25),
    [anon_sym_LT_POUNDlocal] = ACTIONS(27),
    [anon_sym_LT_POUNDmacro] = ACTIONS(29),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(31),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(33),
    [anon_sym_LT_POUNDnt] = ACTIONS(35),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(37),
    [anon_sym_LT_POUNDsetting] = ACTIONS(39),
    [anon_sym_LT_POUNDstop] = ACTIONS(41),
    [anon_sym_LT_POUNDt] = ACTIONS(43),
    [anon_sym_LT_POUNDlt] = ACTIONS(45),
    [anon_sym_LT_POUNDrt] = ACTIONS(47),
  },
  [2] = {
    [sym_directiveType] = STATE(27),
    [sym_single] = STATE(28),
    [sym_block] = STATE(28),
    [sym_start] = STATE(29),
    [sym__end] = STATE(30),
    [sym_parameter_pattern] = STATE(36),
    [sym_paramPattern1] = STATE(31),
    [sym_paramPattern2] = STATE(31),
    [sym_paramPattern3] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_identifier] = STATE(33),
    [sym_name] = STATE(34),
    [sym_parameter] = STATE(35),
    [aux_sym_start_repeat1] = STATE(36),
    [sym_end_single] = ACTIONS(49),
    [sym_end_block] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(51),
  },
  [3] = {
    [sym_single] = STATE(37),
    [sym_start] = STATE(38),
    [sym__end] = STATE(30),
    [sym_parameter_pattern] = STATE(36),
    [sym_paramPattern1] = STATE(31),
    [sym_paramPattern2] = STATE(31),
    [sym_paramPattern3] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_identifier] = STATE(33),
    [sym_name] = STATE(34),
    [sym_parameter] = STATE(35),
    [aux_sym_start_repeat1] = STATE(36),
    [sym_end_single] = ACTIONS(49),
    [sym_end_block] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(51),
  },
  [4] = {
    [sym_block] = STATE(39),
    [sym_start] = STATE(40),
    [sym__end] = STATE(30),
    [sym_parameter_pattern] = STATE(36),
    [sym_paramPattern1] = STATE(31),
    [sym_paramPattern2] = STATE(31),
    [sym_paramPattern3] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_identifier] = STATE(33),
    [sym_name] = STATE(34),
    [sym_parameter] = STATE(35),
    [aux_sym_start_repeat1] = STATE(36),
    [sym_end_single] = ACTIONS(49),
    [sym_end_block] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(51),
  },
  [5] = {
    [sym_block] = STATE(41),
    [sym_start] = STATE(40),
    [sym__end] = STATE(30),
    [sym_parameter_pattern] = STATE(36),
    [sym_paramPattern1] = STATE(31),
    [sym_paramPattern2] = STATE(31),
    [sym_paramPattern3] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_identifier] = STATE(33),
    [sym_name] = STATE(34),
    [sym_parameter] = STATE(35),
    [aux_sym_start_repeat1] = STATE(36),
    [sym_end_single] = ACTIONS(49),
    [sym_end_block] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(51),
  },
  [6] = {
    [sym_single] = STATE(42),
    [sym_start] = STATE(38),
    [sym__end] = STATE(30),
    [sym_parameter_pattern] = STATE(36),
    [sym_paramPattern1] = STATE(31),
    [sym_paramPattern2] = STATE(31),
    [sym_paramPattern3] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_identifier] = STATE(33),
    [sym_name] = STATE(34),
    [sym_parameter] = STATE(35),
    [aux_sym_start_repeat1] = STATE(36),
    [sym_end_single] = ACTIONS(49),
    [sym_end_block] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(51),
  },
  [7] = {
    [sym_single] = STATE(43),
    [sym_start] = STATE(38),
    [sym__end] = STATE(30),
    [sym_parameter_pattern] = STATE(36),
    [sym_paramPattern1] = STATE(31),
    [sym_paramPattern2] = STATE(31),
    [sym_paramPattern3] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_identifier] = STATE(33),
    [sym_name] = STATE(34),
    [sym_parameter] = STATE(35),
    [aux_sym_start_repeat1] = STATE(36),
    [sym_end_single] = ACTIONS(49),
    [sym_end_block] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(51),
  },
  [8] = {
    [sym_block] = STATE(44),
    [sym_start] = STATE(40),
    [sym__end] = STATE(30),
    [sym_parameter_pattern] = STATE(36),
    [sym_paramPattern1] = STATE(31),
    [sym_paramPattern2] = STATE(31),
    [sym_paramPattern3] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_identifier] = STATE(33),
    [sym_name] = STATE(34),
    [sym_parameter] = STATE(35),
    [aux_sym_start_repeat1] = STATE(36),
    [sym_end_single] = ACTIONS(49),
    [sym_end_block] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(51),
  },
  [9] = {
    [sym_directiveType] = STATE(45),
    [sym_single] = STATE(28),
    [sym_block] = STATE(28),
    [sym_start] = STATE(29),
    [sym__end] = STATE(30),
    [sym_parameter_pattern] = STATE(36),
    [sym_paramPattern1] = STATE(31),
    [sym_paramPattern2] = STATE(31),
    [sym_paramPattern3] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_identifier] = STATE(33),
    [sym_name] = STATE(34),
    [sym_parameter] = STATE(35),
    [aux_sym_start_repeat1] = STATE(36),
    [sym_end_single] = ACTIONS(49),
    [sym_end_block] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(51),
  },
  [10] = {
    [sym_single] = STATE(46),
    [sym_start] = STATE(38),
    [sym__end] = STATE(30),
    [sym_parameter_pattern] = STATE(36),
    [sym_paramPattern1] = STATE(31),
    [sym_paramPattern2] = STATE(31),
    [sym_paramPattern3] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_identifier] = STATE(33),
    [sym_name] = STATE(34),
    [sym_parameter] = STATE(35),
    [aux_sym_start_repeat1] = STATE(36),
    [sym_end_single] = ACTIONS(49),
    [sym_end_block] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(51),
  },
  [11] = {
    [sym_single] = STATE(47),
    [sym_start] = STATE(38),
    [sym__end] = STATE(30),
    [sym_parameter_pattern] = STATE(36),
    [sym_paramPattern1] = STATE(31),
    [sym_paramPattern2] = STATE(31),
    [sym_paramPattern3] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_identifier] = STATE(33),
    [sym_name] = STATE(34),
    [sym_parameter] = STATE(35),
    [aux_sym_start_repeat1] = STATE(36),
    [sym_end_single] = ACTIONS(49),
    [sym_end_block] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(51),
  },
  [12] = {
    [sym_directiveType] = STATE(48),
    [sym_single] = STATE(28),
    [sym_block] = STATE(28),
    [sym_start] = STATE(29),
    [sym__end] = STATE(30),
    [sym_parameter_pattern] = STATE(36),
    [sym_paramPattern1] = STATE(31),
    [sym_paramPattern2] = STATE(31),
    [sym_paramPattern3] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_identifier] = STATE(33),
    [sym_name] = STATE(34),
    [sym_parameter] = STATE(35),
    [aux_sym_start_repeat1] = STATE(36),
    [sym_end_single] = ACTIONS(49),
    [sym_end_block] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(51),
  },
  [13] = {
    [sym_block] = STATE(49),
    [sym_start] = STATE(40),
    [sym__end] = STATE(30),
    [sym_parameter_pattern] = STATE(36),
    [sym_paramPattern1] = STATE(31),
    [sym_paramPattern2] = STATE(31),
    [sym_paramPattern3] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_identifier] = STATE(33),
    [sym_name] = STATE(34),
    [sym_parameter] = STATE(35),
    [aux_sym_start_repeat1] = STATE(36),
    [sym_end_single] = ACTIONS(49),
    [sym_end_block] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(51),
  },
  [14] = {
    [sym_block] = STATE(50),
    [sym_start] = STATE(40),
    [sym__end] = STATE(30),
    [sym_parameter_pattern] = STATE(36),
    [sym_paramPattern1] = STATE(31),
    [sym_paramPattern2] = STATE(31),
    [sym_paramPattern3] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_identifier] = STATE(33),
    [sym_name] = STATE(34),
    [sym_parameter] = STATE(35),
    [aux_sym_start_repeat1] = STATE(36),
    [sym_end_single] = ACTIONS(49),
    [sym_end_block] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(51),
  },
  [15] = {
    [sym_block] = STATE(51),
    [sym_start] = STATE(40),
    [sym__end] = STATE(30),
    [sym_parameter_pattern] = STATE(36),
    [sym_paramPattern1] = STATE(31),
    [sym_paramPattern2] = STATE(31),
    [sym_paramPattern3] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_identifier] = STATE(33),
    [sym_name] = STATE(34),
    [sym_parameter] = STATE(35),
    [aux_sym_start_repeat1] = STATE(36),
    [sym_end_single] = ACTIONS(49),
    [sym_end_block] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(51),
  },
  [16] = {
    [sym_single] = STATE(52),
    [sym_start] = STATE(38),
    [sym__end] = STATE(30),
    [sym_parameter_pattern] = STATE(36),
    [sym_paramPattern1] = STATE(31),
    [sym_paramPattern2] = STATE(31),
    [sym_paramPattern3] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_identifier] = STATE(33),
    [sym_name] = STATE(34),
    [sym_parameter] = STATE(35),
    [aux_sym_start_repeat1] = STATE(36),
    [sym_end_single] = ACTIONS(49),
    [sym_end_block] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(51),
  },
  [17] = {
    [sym_block] = STATE(53),
    [sym_start] = STATE(40),
    [sym__end] = STATE(30),
    [sym_parameter_pattern] = STATE(36),
    [sym_paramPattern1] = STATE(31),
    [sym_paramPattern2] = STATE(31),
    [sym_paramPattern3] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_identifier] = STATE(33),
    [sym_name] = STATE(34),
    [sym_parameter] = STATE(35),
    [aux_sym_start_repeat1] = STATE(36),
    [sym_end_single] = ACTIONS(49),
    [sym_end_block] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(51),
  },
  [18] = {
    [sym_single] = STATE(54),
    [sym_start] = STATE(38),
    [sym__end] = STATE(30),
    [sym_parameter_pattern] = STATE(36),
    [sym_paramPattern1] = STATE(31),
    [sym_paramPattern2] = STATE(31),
    [sym_paramPattern3] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_identifier] = STATE(33),
    [sym_name] = STATE(34),
    [sym_parameter] = STATE(35),
    [aux_sym_start_repeat1] = STATE(36),
    [sym_end_single] = ACTIONS(49),
    [sym_end_block] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(51),
  },
  [19] = {
    [sym_single] = STATE(55),
    [sym_start] = STATE(38),
    [sym__end] = STATE(30),
    [sym_parameter_pattern] = STATE(36),
    [sym_paramPattern1] = STATE(31),
    [sym_paramPattern2] = STATE(31),
    [sym_paramPattern3] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_identifier] = STATE(33),
    [sym_name] = STATE(34),
    [sym_parameter] = STATE(35),
    [aux_sym_start_repeat1] = STATE(36),
    [sym_end_single] = ACTIONS(49),
    [sym_end_block] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(51),
  },
  [20] = {
    [sym_single] = STATE(56),
    [sym_start] = STATE(38),
    [sym__end] = STATE(30),
    [sym_parameter_pattern] = STATE(36),
    [sym_paramPattern1] = STATE(31),
    [sym_paramPattern2] = STATE(31),
    [sym_paramPattern3] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_identifier] = STATE(33),
    [sym_name] = STATE(34),
    [sym_parameter] = STATE(35),
    [aux_sym_start_repeat1] = STATE(36),
    [sym_end_single] = ACTIONS(49),
    [sym_end_block] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(51),
  },
  [21] = {
    [sym_single] = STATE(57),
    [sym_start] = STATE(38),
    [sym__end] = STATE(30),
    [sym_parameter_pattern] = STATE(36),
    [sym_paramPattern1] = STATE(31),
    [sym_paramPattern2] = STATE(31),
    [sym_paramPattern3] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_identifier] = STATE(33),
    [sym_name] = STATE(34),
    [sym_parameter] = STATE(35),
    [aux_sym_start_repeat1] = STATE(36),
    [sym_end_single] = ACTIONS(49),
    [sym_end_block] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(51),
  },
  [22] = {
    [sym_single] = STATE(58),
    [sym_start] = STATE(38),
    [sym__end] = STATE(30),
    [sym_parameter_pattern] = STATE(36),
    [sym_paramPattern1] = STATE(31),
    [sym_paramPattern2] = STATE(31),
    [sym_paramPattern3] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_identifier] = STATE(33),
    [sym_name] = STATE(34),
    [sym_parameter] = STATE(35),
    [aux_sym_start_repeat1] = STATE(36),
    [sym_end_single] = ACTIONS(49),
    [sym_end_block] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(51),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(53),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_LT_POUNDassign] = ACTIONS(55),
    [anon_sym_LT_POUNDattempt] = ACTIONS(55),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(55),
    [anon_sym_LT_POUNDcompress] = ACTIONS(55),
    [anon_sym_LT_POUNDflush] = ACTIONS(55),
    [anon_sym_LT_POUNDftl] = ACTIONS(55),
    [anon_sym_LT_POUNDfunction] = ACTIONS(55),
    [anon_sym_LT_POUNDglobal] = ACTIONS(55),
    [anon_sym_LT_POUNDimport] = ACTIONS(55),
    [anon_sym_LT_POUNDinclude] = ACTIONS(55),
    [anon_sym_LT_POUNDlocal] = ACTIONS(55),
    [anon_sym_LT_POUNDmacro] = ACTIONS(55),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(55),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(55),
    [anon_sym_LT_POUNDnt] = ACTIONS(55),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(55),
    [anon_sym_LT_POUNDsetting] = ACTIONS(55),
    [anon_sym_LT_POUNDstop] = ACTIONS(55),
    [anon_sym_LT_POUNDt] = ACTIONS(55),
    [anon_sym_LT_POUNDlt] = ACTIONS(55),
    [anon_sym_LT_POUNDrt] = ACTIONS(55),
  },
  [25] = {
    [sym__definition] = STATE(59),
    [sym_directive] = STATE(59),
    [sym_assign] = STATE(24),
    [sym_attempt] = STATE(24),
    [sym_autoesc] = STATE(24),
    [sym_compress] = STATE(24),
    [sym_flush] = STATE(24),
    [sym_ftl] = STATE(24),
    [sym_function] = STATE(24),
    [sym_global] = STATE(24),
    [sym_import] = STATE(24),
    [sym_include] = STATE(24),
    [sym_local] = STATE(24),
    [sym_macro] = STATE(24),
    [sym_noautoesc] = STATE(24),
    [sym_noparse] = STATE(24),
    [sym_nt] = STATE(24),
    [sym_outputformat] = STATE(24),
    [sym_setting] = STATE(24),
    [sym_stop] = STATE(24),
    [sym_t] = STATE(24),
    [sym_lt] = STATE(24),
    [sym_rt] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_LT_POUNDassign] = ACTIONS(7),
    [anon_sym_LT_POUNDattempt] = ACTIONS(9),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(11),
    [anon_sym_LT_POUNDcompress] = ACTIONS(13),
    [anon_sym_LT_POUNDflush] = ACTIONS(15),
    [anon_sym_LT_POUNDftl] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDglobal] = ACTIONS(21),
    [anon_sym_LT_POUNDimport] = ACTIONS(23),
    [anon_sym_LT_POUNDinclude] = ACTIONS(25),
    [anon_sym_LT_POUNDlocal] = ACTIONS(27),
    [anon_sym_LT_POUNDmacro] = ACTIONS(29),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(31),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(33),
    [anon_sym_LT_POUNDnt] = ACTIONS(35),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(37),
    [anon_sym_LT_POUNDsetting] = ACTIONS(39),
    [anon_sym_LT_POUNDstop] = ACTIONS(41),
    [anon_sym_LT_POUNDt] = ACTIONS(43),
    [anon_sym_LT_POUNDlt] = ACTIONS(45),
    [anon_sym_LT_POUNDrt] = ACTIONS(47),
  },
  [26] = {
    [sym_end_single] = ACTIONS(59),
    [sym_end_block] = ACTIONS(59),
    [anon_sym_COMMA] = ACTIONS(61),
    [anon_sym_EQ] = ACTIONS(61),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(63),
    [sym_operator] = ACTIONS(65),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_LT_POUNDassign] = ACTIONS(67),
    [anon_sym_LT_POUNDattempt] = ACTIONS(67),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(67),
    [anon_sym_LT_POUNDcompress] = ACTIONS(67),
    [anon_sym_LT_POUNDflush] = ACTIONS(67),
    [anon_sym_LT_POUNDftl] = ACTIONS(67),
    [anon_sym_LT_POUNDfunction] = ACTIONS(67),
    [anon_sym_LT_POUNDglobal] = ACTIONS(67),
    [anon_sym_LT_POUNDimport] = ACTIONS(67),
    [anon_sym_LT_POUNDinclude] = ACTIONS(67),
    [anon_sym_LT_POUNDlocal] = ACTIONS(67),
    [anon_sym_LT_POUNDmacro] = ACTIONS(67),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(67),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(67),
    [anon_sym_LT_POUNDnt] = ACTIONS(67),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(67),
    [anon_sym_LT_POUNDsetting] = ACTIONS(67),
    [anon_sym_LT_POUNDstop] = ACTIONS(67),
    [anon_sym_LT_POUNDt] = ACTIONS(67),
    [anon_sym_LT_POUNDlt] = ACTIONS(67),
    [anon_sym_LT_POUNDrt] = ACTIONS(67),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_LT_POUNDassign] = ACTIONS(69),
    [anon_sym_LT_POUNDattempt] = ACTIONS(69),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(69),
    [anon_sym_LT_POUNDcompress] = ACTIONS(69),
    [anon_sym_LT_POUNDflush] = ACTIONS(69),
    [anon_sym_LT_POUNDftl] = ACTIONS(69),
    [anon_sym_LT_POUNDfunction] = ACTIONS(69),
    [anon_sym_LT_POUNDglobal] = ACTIONS(69),
    [anon_sym_LT_POUNDimport] = ACTIONS(69),
    [anon_sym_LT_POUNDinclude] = ACTIONS(69),
    [anon_sym_LT_POUNDlocal] = ACTIONS(69),
    [anon_sym_LT_POUNDmacro] = ACTIONS(69),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(69),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(69),
    [anon_sym_LT_POUNDnt] = ACTIONS(69),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(69),
    [anon_sym_LT_POUNDsetting] = ACTIONS(69),
    [anon_sym_LT_POUNDstop] = ACTIONS(69),
    [anon_sym_LT_POUNDt] = ACTIONS(69),
    [anon_sym_LT_POUNDlt] = ACTIONS(69),
    [anon_sym_LT_POUNDrt] = ACTIONS(69),
  },
  [29] = {
    [sym_middle] = STATE(64),
    [sym__end] = STATE(63),
    [sym_nested] = STATE(61),
    [sym_return] = STATE(61),
    [aux_sym_block_repeat1] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_end_single] = ACTIONS(73),
    [sym_end_block] = ACTIONS(73),
    [anon_sym_LT_POUNDassign] = ACTIONS(71),
    [anon_sym_LT_POUNDattempt] = ACTIONS(71),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(71),
    [anon_sym_LT_POUNDcompress] = ACTIONS(71),
    [anon_sym_LT_POUNDflush] = ACTIONS(71),
    [anon_sym_LT_POUNDftl] = ACTIONS(71),
    [anon_sym_LT_POUNDfunction] = ACTIONS(71),
    [anon_sym_LT_POUNDglobal] = ACTIONS(71),
    [anon_sym_LT_POUNDimport] = ACTIONS(71),
    [anon_sym_LT_POUNDinclude] = ACTIONS(71),
    [anon_sym_LT_POUNDlocal] = ACTIONS(71),
    [anon_sym_LT_POUNDmacro] = ACTIONS(71),
    [anon_sym_LT_POUNDnested] = ACTIONS(75),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(71),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(71),
    [anon_sym_LT_POUNDnt] = ACTIONS(71),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(71),
    [sym_recover] = ACTIONS(77),
    [anon_sym_LT_POUNDreturn] = ACTIONS(79),
    [anon_sym_LT_POUNDsetting] = ACTIONS(71),
    [anon_sym_LT_POUNDstop] = ACTIONS(71),
    [anon_sym_LT_POUNDt] = ACTIONS(71),
    [anon_sym_LT_POUNDlt] = ACTIONS(71),
    [anon_sym_LT_POUNDrt] = ACTIONS(71),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_end_single] = ACTIONS(81),
    [sym_end_block] = ACTIONS(81),
    [anon_sym_LT_POUNDassign] = ACTIONS(81),
    [anon_sym_LT_POUNDattempt] = ACTIONS(81),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(81),
    [anon_sym_LT_POUNDcompress] = ACTIONS(81),
    [anon_sym_LT_POUNDflush] = ACTIONS(81),
    [anon_sym_LT_POUNDftl] = ACTIONS(81),
    [anon_sym_LT_POUNDfunction] = ACTIONS(81),
    [anon_sym_LT_POUNDglobal] = ACTIONS(81),
    [anon_sym_LT_POUNDimport] = ACTIONS(81),
    [anon_sym_LT_POUNDinclude] = ACTIONS(81),
    [anon_sym_LT_POUNDlocal] = ACTIONS(81),
    [anon_sym_LT_POUNDmacro] = ACTIONS(81),
    [anon_sym_LT_POUNDnested] = ACTIONS(81),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(81),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(81),
    [anon_sym_LT_POUNDnt] = ACTIONS(81),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(81),
    [sym_recover] = ACTIONS(81),
    [anon_sym_LT_POUNDreturn] = ACTIONS(81),
    [anon_sym_LT_POUNDsetting] = ACTIONS(81),
    [anon_sym_LT_POUNDstop] = ACTIONS(81),
    [anon_sym_LT_POUNDt] = ACTIONS(81),
    [anon_sym_LT_POUNDlt] = ACTIONS(81),
    [anon_sym_LT_POUNDrt] = ACTIONS(81),
  },
  [31] = {
    [sym_end_single] = ACTIONS(83),
    [sym_end_block] = ACTIONS(83),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(83),
  },
  [32] = {
    [sym_operator] = ACTIONS(85),
  },
  [33] = {
    [sym_end_single] = ACTIONS(87),
    [sym_end_block] = ACTIONS(87),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(87),
  },
  [34] = {
    [sym__end] = STATE(67),
    [sym_parameter_pattern] = STATE(68),
    [sym_paramPattern1] = STATE(31),
    [sym_paramPattern2] = STATE(31),
    [sym_paramPattern3] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_parameter] = STATE(35),
    [aux_sym_start_repeat1] = STATE(68),
    [sym_end_single] = ACTIONS(89),
    [sym_end_block] = ACTIONS(89),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(91),
  },
  [35] = {
    [sym_end_single] = ACTIONS(93),
    [sym_end_block] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_EQ] = ACTIONS(97),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(93),
  },
  [36] = {
    [sym__end] = STATE(67),
    [sym_parameter_pattern] = STATE(71),
    [sym_paramPattern1] = STATE(31),
    [sym_paramPattern2] = STATE(31),
    [sym_paramPattern3] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_parameter] = STATE(35),
    [aux_sym_start_repeat1] = STATE(71),
    [sym_end_single] = ACTIONS(89),
    [sym_end_block] = ACTIONS(89),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(91),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_LT_POUNDassign] = ACTIONS(99),
    [anon_sym_LT_POUNDattempt] = ACTIONS(99),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(99),
    [anon_sym_LT_POUNDcompress] = ACTIONS(99),
    [anon_sym_LT_POUNDflush] = ACTIONS(99),
    [anon_sym_LT_POUNDftl] = ACTIONS(99),
    [anon_sym_LT_POUNDfunction] = ACTIONS(99),
    [anon_sym_LT_POUNDglobal] = ACTIONS(99),
    [anon_sym_LT_POUNDimport] = ACTIONS(99),
    [anon_sym_LT_POUNDinclude] = ACTIONS(99),
    [anon_sym_LT_POUNDlocal] = ACTIONS(99),
    [anon_sym_LT_POUNDmacro] = ACTIONS(99),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(99),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(99),
    [anon_sym_LT_POUNDnt] = ACTIONS(99),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(99),
    [anon_sym_LT_POUNDsetting] = ACTIONS(99),
    [anon_sym_LT_POUNDstop] = ACTIONS(99),
    [anon_sym_LT_POUNDt] = ACTIONS(99),
    [anon_sym_LT_POUNDlt] = ACTIONS(99),
    [anon_sym_LT_POUNDrt] = ACTIONS(99),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_end_single] = ACTIONS(71),
    [sym_end_block] = ACTIONS(71),
    [anon_sym_LT_POUNDassign] = ACTIONS(71),
    [anon_sym_LT_POUNDattempt] = ACTIONS(71),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(71),
    [anon_sym_LT_POUNDcompress] = ACTIONS(71),
    [anon_sym_LT_POUNDflush] = ACTIONS(71),
    [anon_sym_LT_POUNDftl] = ACTIONS(71),
    [anon_sym_LT_POUNDfunction] = ACTIONS(71),
    [anon_sym_LT_POUNDglobal] = ACTIONS(71),
    [anon_sym_LT_POUNDimport] = ACTIONS(71),
    [anon_sym_LT_POUNDinclude] = ACTIONS(71),
    [anon_sym_LT_POUNDlocal] = ACTIONS(71),
    [anon_sym_LT_POUNDmacro] = ACTIONS(71),
    [anon_sym_LT_POUNDnested] = ACTIONS(71),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(71),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(71),
    [anon_sym_LT_POUNDnt] = ACTIONS(71),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(71),
    [sym_recover] = ACTIONS(71),
    [anon_sym_LT_POUNDreturn] = ACTIONS(71),
    [anon_sym_LT_POUNDsetting] = ACTIONS(71),
    [anon_sym_LT_POUNDstop] = ACTIONS(71),
    [anon_sym_LT_POUNDt] = ACTIONS(71),
    [anon_sym_LT_POUNDlt] = ACTIONS(71),
    [anon_sym_LT_POUNDrt] = ACTIONS(71),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_LT_POUNDassign] = ACTIONS(101),
    [anon_sym_LT_POUNDattempt] = ACTIONS(101),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(101),
    [anon_sym_LT_POUNDcompress] = ACTIONS(101),
    [anon_sym_LT_POUNDflush] = ACTIONS(101),
    [anon_sym_LT_POUNDftl] = ACTIONS(101),
    [anon_sym_LT_POUNDfunction] = ACTIONS(101),
    [anon_sym_LT_POUNDglobal] = ACTIONS(101),
    [anon_sym_LT_POUNDimport] = ACTIONS(101),
    [anon_sym_LT_POUNDinclude] = ACTIONS(101),
    [anon_sym_LT_POUNDlocal] = ACTIONS(101),
    [anon_sym_LT_POUNDmacro] = ACTIONS(101),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(101),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(101),
    [anon_sym_LT_POUNDnt] = ACTIONS(101),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(101),
    [anon_sym_LT_POUNDsetting] = ACTIONS(101),
    [anon_sym_LT_POUNDstop] = ACTIONS(101),
    [anon_sym_LT_POUNDt] = ACTIONS(101),
    [anon_sym_LT_POUNDlt] = ACTIONS(101),
    [anon_sym_LT_POUNDrt] = ACTIONS(101),
  },
  [40] = {
    [sym_middle] = STATE(64),
    [sym__end] = STATE(63),
    [sym_nested] = STATE(61),
    [sym_return] = STATE(61),
    [aux_sym_block_repeat1] = STATE(64),
    [sym_end_single] = ACTIONS(73),
    [sym_end_block] = ACTIONS(73),
    [anon_sym_LT_POUNDnested] = ACTIONS(75),
    [sym_recover] = ACTIONS(77),
    [anon_sym_LT_POUNDreturn] = ACTIONS(79),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_LT_POUNDassign] = ACTIONS(103),
    [anon_sym_LT_POUNDattempt] = ACTIONS(103),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(103),
    [anon_sym_LT_POUNDcompress] = ACTIONS(103),
    [anon_sym_LT_POUNDflush] = ACTIONS(103),
    [anon_sym_LT_POUNDftl] = ACTIONS(103),
    [anon_sym_LT_POUNDfunction] = ACTIONS(103),
    [anon_sym_LT_POUNDglobal] = ACTIONS(103),
    [anon_sym_LT_POUNDimport] = ACTIONS(103),
    [anon_sym_LT_POUNDinclude] = ACTIONS(103),
    [anon_sym_LT_POUNDlocal] = ACTIONS(103),
    [anon_sym_LT_POUNDmacro] = ACTIONS(103),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(103),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(103),
    [anon_sym_LT_POUNDnt] = ACTIONS(103),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(103),
    [anon_sym_LT_POUNDsetting] = ACTIONS(103),
    [anon_sym_LT_POUNDstop] = ACTIONS(103),
    [anon_sym_LT_POUNDt] = ACTIONS(103),
    [anon_sym_LT_POUNDlt] = ACTIONS(103),
    [anon_sym_LT_POUNDrt] = ACTIONS(103),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_LT_POUNDassign] = ACTIONS(105),
    [anon_sym_LT_POUNDattempt] = ACTIONS(105),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(105),
    [anon_sym_LT_POUNDcompress] = ACTIONS(105),
    [anon_sym_LT_POUNDflush] = ACTIONS(105),
    [anon_sym_LT_POUNDftl] = ACTIONS(105),
    [anon_sym_LT_POUNDfunction] = ACTIONS(105),
    [anon_sym_LT_POUNDglobal] = ACTIONS(105),
    [anon_sym_LT_POUNDimport] = ACTIONS(105),
    [anon_sym_LT_POUNDinclude] = ACTIONS(105),
    [anon_sym_LT_POUNDlocal] = ACTIONS(105),
    [anon_sym_LT_POUNDmacro] = ACTIONS(105),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(105),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(105),
    [anon_sym_LT_POUNDnt] = ACTIONS(105),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(105),
    [anon_sym_LT_POUNDsetting] = ACTIONS(105),
    [anon_sym_LT_POUNDstop] = ACTIONS(105),
    [anon_sym_LT_POUNDt] = ACTIONS(105),
    [anon_sym_LT_POUNDlt] = ACTIONS(105),
    [anon_sym_LT_POUNDrt] = ACTIONS(105),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_LT_POUNDassign] = ACTIONS(107),
    [anon_sym_LT_POUNDattempt] = ACTIONS(107),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(107),
    [anon_sym_LT_POUNDcompress] = ACTIONS(107),
    [anon_sym_LT_POUNDflush] = ACTIONS(107),
    [anon_sym_LT_POUNDftl] = ACTIONS(107),
    [anon_sym_LT_POUNDfunction] = ACTIONS(107),
    [anon_sym_LT_POUNDglobal] = ACTIONS(107),
    [anon_sym_LT_POUNDimport] = ACTIONS(107),
    [anon_sym_LT_POUNDinclude] = ACTIONS(107),
    [anon_sym_LT_POUNDlocal] = ACTIONS(107),
    [anon_sym_LT_POUNDmacro] = ACTIONS(107),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(107),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(107),
    [anon_sym_LT_POUNDnt] = ACTIONS(107),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(107),
    [anon_sym_LT_POUNDsetting] = ACTIONS(107),
    [anon_sym_LT_POUNDstop] = ACTIONS(107),
    [anon_sym_LT_POUNDt] = ACTIONS(107),
    [anon_sym_LT_POUNDlt] = ACTIONS(107),
    [anon_sym_LT_POUNDrt] = ACTIONS(107),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_LT_POUNDassign] = ACTIONS(109),
    [anon_sym_LT_POUNDattempt] = ACTIONS(109),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(109),
    [anon_sym_LT_POUNDcompress] = ACTIONS(109),
    [anon_sym_LT_POUNDflush] = ACTIONS(109),
    [anon_sym_LT_POUNDftl] = ACTIONS(109),
    [anon_sym_LT_POUNDfunction] = ACTIONS(109),
    [anon_sym_LT_POUNDglobal] = ACTIONS(109),
    [anon_sym_LT_POUNDimport] = ACTIONS(109),
    [anon_sym_LT_POUNDinclude] = ACTIONS(109),
    [anon_sym_LT_POUNDlocal] = ACTIONS(109),
    [anon_sym_LT_POUNDmacro] = ACTIONS(109),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(109),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(109),
    [anon_sym_LT_POUNDnt] = ACTIONS(109),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(109),
    [anon_sym_LT_POUNDsetting] = ACTIONS(109),
    [anon_sym_LT_POUNDstop] = ACTIONS(109),
    [anon_sym_LT_POUNDt] = ACTIONS(109),
    [anon_sym_LT_POUNDlt] = ACTIONS(109),
    [anon_sym_LT_POUNDrt] = ACTIONS(109),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_LT_POUNDassign] = ACTIONS(111),
    [anon_sym_LT_POUNDattempt] = ACTIONS(111),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(111),
    [anon_sym_LT_POUNDcompress] = ACTIONS(111),
    [anon_sym_LT_POUNDflush] = ACTIONS(111),
    [anon_sym_LT_POUNDftl] = ACTIONS(111),
    [anon_sym_LT_POUNDfunction] = ACTIONS(111),
    [anon_sym_LT_POUNDglobal] = ACTIONS(111),
    [anon_sym_LT_POUNDimport] = ACTIONS(111),
    [anon_sym_LT_POUNDinclude] = ACTIONS(111),
    [anon_sym_LT_POUNDlocal] = ACTIONS(111),
    [anon_sym_LT_POUNDmacro] = ACTIONS(111),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(111),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(111),
    [anon_sym_LT_POUNDnt] = ACTIONS(111),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(111),
    [anon_sym_LT_POUNDsetting] = ACTIONS(111),
    [anon_sym_LT_POUNDstop] = ACTIONS(111),
    [anon_sym_LT_POUNDt] = ACTIONS(111),
    [anon_sym_LT_POUNDlt] = ACTIONS(111),
    [anon_sym_LT_POUNDrt] = ACTIONS(111),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_LT_POUNDassign] = ACTIONS(113),
    [anon_sym_LT_POUNDattempt] = ACTIONS(113),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(113),
    [anon_sym_LT_POUNDcompress] = ACTIONS(113),
    [anon_sym_LT_POUNDflush] = ACTIONS(113),
    [anon_sym_LT_POUNDftl] = ACTIONS(113),
    [anon_sym_LT_POUNDfunction] = ACTIONS(113),
    [anon_sym_LT_POUNDglobal] = ACTIONS(113),
    [anon_sym_LT_POUNDimport] = ACTIONS(113),
    [anon_sym_LT_POUNDinclude] = ACTIONS(113),
    [anon_sym_LT_POUNDlocal] = ACTIONS(113),
    [anon_sym_LT_POUNDmacro] = ACTIONS(113),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(113),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(113),
    [anon_sym_LT_POUNDnt] = ACTIONS(113),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(113),
    [anon_sym_LT_POUNDsetting] = ACTIONS(113),
    [anon_sym_LT_POUNDstop] = ACTIONS(113),
    [anon_sym_LT_POUNDt] = ACTIONS(113),
    [anon_sym_LT_POUNDlt] = ACTIONS(113),
    [anon_sym_LT_POUNDrt] = ACTIONS(113),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_LT_POUNDassign] = ACTIONS(115),
    [anon_sym_LT_POUNDattempt] = ACTIONS(115),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(115),
    [anon_sym_LT_POUNDcompress] = ACTIONS(115),
    [anon_sym_LT_POUNDflush] = ACTIONS(115),
    [anon_sym_LT_POUNDftl] = ACTIONS(115),
    [anon_sym_LT_POUNDfunction] = ACTIONS(115),
    [anon_sym_LT_POUNDglobal] = ACTIONS(115),
    [anon_sym_LT_POUNDimport] = ACTIONS(115),
    [anon_sym_LT_POUNDinclude] = ACTIONS(115),
    [anon_sym_LT_POUNDlocal] = ACTIONS(115),
    [anon_sym_LT_POUNDmacro] = ACTIONS(115),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(115),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(115),
    [anon_sym_LT_POUNDnt] = ACTIONS(115),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(115),
    [anon_sym_LT_POUNDsetting] = ACTIONS(115),
    [anon_sym_LT_POUNDstop] = ACTIONS(115),
    [anon_sym_LT_POUNDt] = ACTIONS(115),
    [anon_sym_LT_POUNDlt] = ACTIONS(115),
    [anon_sym_LT_POUNDrt] = ACTIONS(115),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_LT_POUNDassign] = ACTIONS(117),
    [anon_sym_LT_POUNDattempt] = ACTIONS(117),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(117),
    [anon_sym_LT_POUNDcompress] = ACTIONS(117),
    [anon_sym_LT_POUNDflush] = ACTIONS(117),
    [anon_sym_LT_POUNDftl] = ACTIONS(117),
    [anon_sym_LT_POUNDfunction] = ACTIONS(117),
    [anon_sym_LT_POUNDglobal] = ACTIONS(117),
    [anon_sym_LT_POUNDimport] = ACTIONS(117),
    [anon_sym_LT_POUNDinclude] = ACTIONS(117),
    [anon_sym_LT_POUNDlocal] = ACTIONS(117),
    [anon_sym_LT_POUNDmacro] = ACTIONS(117),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(117),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(117),
    [anon_sym_LT_POUNDnt] = ACTIONS(117),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(117),
    [anon_sym_LT_POUNDsetting] = ACTIONS(117),
    [anon_sym_LT_POUNDstop] = ACTIONS(117),
    [anon_sym_LT_POUNDt] = ACTIONS(117),
    [anon_sym_LT_POUNDlt] = ACTIONS(117),
    [anon_sym_LT_POUNDrt] = ACTIONS(117),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_LT_POUNDassign] = ACTIONS(119),
    [anon_sym_LT_POUNDattempt] = ACTIONS(119),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(119),
    [anon_sym_LT_POUNDcompress] = ACTIONS(119),
    [anon_sym_LT_POUNDflush] = ACTIONS(119),
    [anon_sym_LT_POUNDftl] = ACTIONS(119),
    [anon_sym_LT_POUNDfunction] = ACTIONS(119),
    [anon_sym_LT_POUNDglobal] = ACTIONS(119),
    [anon_sym_LT_POUNDimport] = ACTIONS(119),
    [anon_sym_LT_POUNDinclude] = ACTIONS(119),
    [anon_sym_LT_POUNDlocal] = ACTIONS(119),
    [anon_sym_LT_POUNDmacro] = ACTIONS(119),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(119),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(119),
    [anon_sym_LT_POUNDnt] = ACTIONS(119),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(119),
    [anon_sym_LT_POUNDsetting] = ACTIONS(119),
    [anon_sym_LT_POUNDstop] = ACTIONS(119),
    [anon_sym_LT_POUNDt] = ACTIONS(119),
    [anon_sym_LT_POUNDlt] = ACTIONS(119),
    [anon_sym_LT_POUNDrt] = ACTIONS(119),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_LT_POUNDassign] = ACTIONS(121),
    [anon_sym_LT_POUNDattempt] = ACTIONS(121),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(121),
    [anon_sym_LT_POUNDcompress] = ACTIONS(121),
    [anon_sym_LT_POUNDflush] = ACTIONS(121),
    [anon_sym_LT_POUNDftl] = ACTIONS(121),
    [anon_sym_LT_POUNDfunction] = ACTIONS(121),
    [anon_sym_LT_POUNDglobal] = ACTIONS(121),
    [anon_sym_LT_POUNDimport] = ACTIONS(121),
    [anon_sym_LT_POUNDinclude] = ACTIONS(121),
    [anon_sym_LT_POUNDlocal] = ACTIONS(121),
    [anon_sym_LT_POUNDmacro] = ACTIONS(121),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(121),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(121),
    [anon_sym_LT_POUNDnt] = ACTIONS(121),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(121),
    [anon_sym_LT_POUNDsetting] = ACTIONS(121),
    [anon_sym_LT_POUNDstop] = ACTIONS(121),
    [anon_sym_LT_POUNDt] = ACTIONS(121),
    [anon_sym_LT_POUNDlt] = ACTIONS(121),
    [anon_sym_LT_POUNDrt] = ACTIONS(121),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_LT_POUNDassign] = ACTIONS(123),
    [anon_sym_LT_POUNDattempt] = ACTIONS(123),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(123),
    [anon_sym_LT_POUNDcompress] = ACTIONS(123),
    [anon_sym_LT_POUNDflush] = ACTIONS(123),
    [anon_sym_LT_POUNDftl] = ACTIONS(123),
    [anon_sym_LT_POUNDfunction] = ACTIONS(123),
    [anon_sym_LT_POUNDglobal] = ACTIONS(123),
    [anon_sym_LT_POUNDimport] = ACTIONS(123),
    [anon_sym_LT_POUNDinclude] = ACTIONS(123),
    [anon_sym_LT_POUNDlocal] = ACTIONS(123),
    [anon_sym_LT_POUNDmacro] = ACTIONS(123),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(123),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(123),
    [anon_sym_LT_POUNDnt] = ACTIONS(123),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(123),
    [anon_sym_LT_POUNDsetting] = ACTIONS(123),
    [anon_sym_LT_POUNDstop] = ACTIONS(123),
    [anon_sym_LT_POUNDt] = ACTIONS(123),
    [anon_sym_LT_POUNDlt] = ACTIONS(123),
    [anon_sym_LT_POUNDrt] = ACTIONS(123),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_LT_POUNDassign] = ACTIONS(125),
    [anon_sym_LT_POUNDattempt] = ACTIONS(125),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(125),
    [anon_sym_LT_POUNDcompress] = ACTIONS(125),
    [anon_sym_LT_POUNDflush] = ACTIONS(125),
    [anon_sym_LT_POUNDftl] = ACTIONS(125),
    [anon_sym_LT_POUNDfunction] = ACTIONS(125),
    [anon_sym_LT_POUNDglobal] = ACTIONS(125),
    [anon_sym_LT_POUNDimport] = ACTIONS(125),
    [anon_sym_LT_POUNDinclude] = ACTIONS(125),
    [anon_sym_LT_POUNDlocal] = ACTIONS(125),
    [anon_sym_LT_POUNDmacro] = ACTIONS(125),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(125),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(125),
    [anon_sym_LT_POUNDnt] = ACTIONS(125),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(125),
    [anon_sym_LT_POUNDsetting] = ACTIONS(125),
    [anon_sym_LT_POUNDstop] = ACTIONS(125),
    [anon_sym_LT_POUNDt] = ACTIONS(125),
    [anon_sym_LT_POUNDlt] = ACTIONS(125),
    [anon_sym_LT_POUNDrt] = ACTIONS(125),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_LT_POUNDassign] = ACTIONS(127),
    [anon_sym_LT_POUNDattempt] = ACTIONS(127),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(127),
    [anon_sym_LT_POUNDcompress] = ACTIONS(127),
    [anon_sym_LT_POUNDflush] = ACTIONS(127),
    [anon_sym_LT_POUNDftl] = ACTIONS(127),
    [anon_sym_LT_POUNDfunction] = ACTIONS(127),
    [anon_sym_LT_POUNDglobal] = ACTIONS(127),
    [anon_sym_LT_POUNDimport] = ACTIONS(127),
    [anon_sym_LT_POUNDinclude] = ACTIONS(127),
    [anon_sym_LT_POUNDlocal] = ACTIONS(127),
    [anon_sym_LT_POUNDmacro] = ACTIONS(127),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(127),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(127),
    [anon_sym_LT_POUNDnt] = ACTIONS(127),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(127),
    [anon_sym_LT_POUNDsetting] = ACTIONS(127),
    [anon_sym_LT_POUNDstop] = ACTIONS(127),
    [anon_sym_LT_POUNDt] = ACTIONS(127),
    [anon_sym_LT_POUNDlt] = ACTIONS(127),
    [anon_sym_LT_POUNDrt] = ACTIONS(127),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [anon_sym_LT_POUNDassign] = ACTIONS(129),
    [anon_sym_LT_POUNDattempt] = ACTIONS(129),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(129),
    [anon_sym_LT_POUNDcompress] = ACTIONS(129),
    [anon_sym_LT_POUNDflush] = ACTIONS(129),
    [anon_sym_LT_POUNDftl] = ACTIONS(129),
    [anon_sym_LT_POUNDfunction] = ACTIONS(129),
    [anon_sym_LT_POUNDglobal] = ACTIONS(129),
    [anon_sym_LT_POUNDimport] = ACTIONS(129),
    [anon_sym_LT_POUNDinclude] = ACTIONS(129),
    [anon_sym_LT_POUNDlocal] = ACTIONS(129),
    [anon_sym_LT_POUNDmacro] = ACTIONS(129),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(129),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(129),
    [anon_sym_LT_POUNDnt] = ACTIONS(129),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(129),
    [anon_sym_LT_POUNDsetting] = ACTIONS(129),
    [anon_sym_LT_POUNDstop] = ACTIONS(129),
    [anon_sym_LT_POUNDt] = ACTIONS(129),
    [anon_sym_LT_POUNDlt] = ACTIONS(129),
    [anon_sym_LT_POUNDrt] = ACTIONS(129),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_LT_POUNDassign] = ACTIONS(131),
    [anon_sym_LT_POUNDattempt] = ACTIONS(131),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(131),
    [anon_sym_LT_POUNDcompress] = ACTIONS(131),
    [anon_sym_LT_POUNDflush] = ACTIONS(131),
    [anon_sym_LT_POUNDftl] = ACTIONS(131),
    [anon_sym_LT_POUNDfunction] = ACTIONS(131),
    [anon_sym_LT_POUNDglobal] = ACTIONS(131),
    [anon_sym_LT_POUNDimport] = ACTIONS(131),
    [anon_sym_LT_POUNDinclude] = ACTIONS(131),
    [anon_sym_LT_POUNDlocal] = ACTIONS(131),
    [anon_sym_LT_POUNDmacro] = ACTIONS(131),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(131),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(131),
    [anon_sym_LT_POUNDnt] = ACTIONS(131),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(131),
    [anon_sym_LT_POUNDsetting] = ACTIONS(131),
    [anon_sym_LT_POUNDstop] = ACTIONS(131),
    [anon_sym_LT_POUNDt] = ACTIONS(131),
    [anon_sym_LT_POUNDlt] = ACTIONS(131),
    [anon_sym_LT_POUNDrt] = ACTIONS(131),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_LT_POUNDassign] = ACTIONS(133),
    [anon_sym_LT_POUNDattempt] = ACTIONS(133),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(133),
    [anon_sym_LT_POUNDcompress] = ACTIONS(133),
    [anon_sym_LT_POUNDflush] = ACTIONS(133),
    [anon_sym_LT_POUNDftl] = ACTIONS(133),
    [anon_sym_LT_POUNDfunction] = ACTIONS(133),
    [anon_sym_LT_POUNDglobal] = ACTIONS(133),
    [anon_sym_LT_POUNDimport] = ACTIONS(133),
    [anon_sym_LT_POUNDinclude] = ACTIONS(133),
    [anon_sym_LT_POUNDlocal] = ACTIONS(133),
    [anon_sym_LT_POUNDmacro] = ACTIONS(133),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(133),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(133),
    [anon_sym_LT_POUNDnt] = ACTIONS(133),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(133),
    [anon_sym_LT_POUNDsetting] = ACTIONS(133),
    [anon_sym_LT_POUNDstop] = ACTIONS(133),
    [anon_sym_LT_POUNDt] = ACTIONS(133),
    [anon_sym_LT_POUNDlt] = ACTIONS(133),
    [anon_sym_LT_POUNDrt] = ACTIONS(133),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [anon_sym_LT_POUNDassign] = ACTIONS(135),
    [anon_sym_LT_POUNDattempt] = ACTIONS(135),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(135),
    [anon_sym_LT_POUNDcompress] = ACTIONS(135),
    [anon_sym_LT_POUNDflush] = ACTIONS(135),
    [anon_sym_LT_POUNDftl] = ACTIONS(135),
    [anon_sym_LT_POUNDfunction] = ACTIONS(135),
    [anon_sym_LT_POUNDglobal] = ACTIONS(135),
    [anon_sym_LT_POUNDimport] = ACTIONS(135),
    [anon_sym_LT_POUNDinclude] = ACTIONS(135),
    [anon_sym_LT_POUNDlocal] = ACTIONS(135),
    [anon_sym_LT_POUNDmacro] = ACTIONS(135),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(135),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(135),
    [anon_sym_LT_POUNDnt] = ACTIONS(135),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(135),
    [anon_sym_LT_POUNDsetting] = ACTIONS(135),
    [anon_sym_LT_POUNDstop] = ACTIONS(135),
    [anon_sym_LT_POUNDt] = ACTIONS(135),
    [anon_sym_LT_POUNDlt] = ACTIONS(135),
    [anon_sym_LT_POUNDrt] = ACTIONS(135),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_LT_POUNDassign] = ACTIONS(137),
    [anon_sym_LT_POUNDattempt] = ACTIONS(137),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(137),
    [anon_sym_LT_POUNDcompress] = ACTIONS(137),
    [anon_sym_LT_POUNDflush] = ACTIONS(137),
    [anon_sym_LT_POUNDftl] = ACTIONS(137),
    [anon_sym_LT_POUNDfunction] = ACTIONS(137),
    [anon_sym_LT_POUNDglobal] = ACTIONS(137),
    [anon_sym_LT_POUNDimport] = ACTIONS(137),
    [anon_sym_LT_POUNDinclude] = ACTIONS(137),
    [anon_sym_LT_POUNDlocal] = ACTIONS(137),
    [anon_sym_LT_POUNDmacro] = ACTIONS(137),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(137),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(137),
    [anon_sym_LT_POUNDnt] = ACTIONS(137),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(137),
    [anon_sym_LT_POUNDsetting] = ACTIONS(137),
    [anon_sym_LT_POUNDstop] = ACTIONS(137),
    [anon_sym_LT_POUNDt] = ACTIONS(137),
    [anon_sym_LT_POUNDlt] = ACTIONS(137),
    [anon_sym_LT_POUNDrt] = ACTIONS(137),
  },
  [59] = {
    [sym__definition] = STATE(59),
    [sym_directive] = STATE(59),
    [sym_assign] = STATE(24),
    [sym_attempt] = STATE(24),
    [sym_autoesc] = STATE(24),
    [sym_compress] = STATE(24),
    [sym_flush] = STATE(24),
    [sym_ftl] = STATE(24),
    [sym_function] = STATE(24),
    [sym_global] = STATE(24),
    [sym_import] = STATE(24),
    [sym_include] = STATE(24),
    [sym_local] = STATE(24),
    [sym_macro] = STATE(24),
    [sym_noautoesc] = STATE(24),
    [sym_noparse] = STATE(24),
    [sym_nt] = STATE(24),
    [sym_outputformat] = STATE(24),
    [sym_setting] = STATE(24),
    [sym_stop] = STATE(24),
    [sym_t] = STATE(24),
    [sym_lt] = STATE(24),
    [sym_rt] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(139),
    [anon_sym_LT_POUNDassign] = ACTIONS(141),
    [anon_sym_LT_POUNDattempt] = ACTIONS(144),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(147),
    [anon_sym_LT_POUNDcompress] = ACTIONS(150),
    [anon_sym_LT_POUNDflush] = ACTIONS(153),
    [anon_sym_LT_POUNDftl] = ACTIONS(156),
    [anon_sym_LT_POUNDfunction] = ACTIONS(159),
    [anon_sym_LT_POUNDglobal] = ACTIONS(162),
    [anon_sym_LT_POUNDimport] = ACTIONS(165),
    [anon_sym_LT_POUNDinclude] = ACTIONS(168),
    [anon_sym_LT_POUNDlocal] = ACTIONS(171),
    [anon_sym_LT_POUNDmacro] = ACTIONS(174),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(177),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(180),
    [anon_sym_LT_POUNDnt] = ACTIONS(183),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(186),
    [anon_sym_LT_POUNDsetting] = ACTIONS(189),
    [anon_sym_LT_POUNDstop] = ACTIONS(192),
    [anon_sym_LT_POUNDt] = ACTIONS(195),
    [anon_sym_LT_POUNDlt] = ACTIONS(198),
    [anon_sym_LT_POUNDrt] = ACTIONS(201),
  },
  [60] = {
    [sym_single] = STATE(72),
    [sym_start] = STATE(38),
    [sym__end] = STATE(30),
    [sym_parameter_pattern] = STATE(36),
    [sym_paramPattern1] = STATE(31),
    [sym_paramPattern2] = STATE(31),
    [sym_paramPattern3] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_identifier] = STATE(33),
    [sym_name] = STATE(34),
    [sym_parameter] = STATE(35),
    [aux_sym_start_repeat1] = STATE(36),
    [sym_end_single] = ACTIONS(49),
    [sym_end_block] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(51),
  },
  [61] = {
    [sym_end_single] = ACTIONS(204),
    [sym_end_block] = ACTIONS(204),
    [anon_sym_LT_POUNDnested] = ACTIONS(204),
    [sym_recover] = ACTIONS(204),
    [anon_sym_LT_POUNDreturn] = ACTIONS(204),
  },
  [62] = {
    [sym_expression] = STATE(75),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(206),
    [anon_sym_GT] = ACTIONS(208),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(210),
    [anon_sym_LT_POUNDassign] = ACTIONS(210),
    [anon_sym_LT_POUNDattempt] = ACTIONS(210),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(210),
    [anon_sym_LT_POUNDcompress] = ACTIONS(210),
    [anon_sym_LT_POUNDflush] = ACTIONS(210),
    [anon_sym_LT_POUNDftl] = ACTIONS(210),
    [anon_sym_LT_POUNDfunction] = ACTIONS(210),
    [anon_sym_LT_POUNDglobal] = ACTIONS(210),
    [anon_sym_LT_POUNDimport] = ACTIONS(210),
    [anon_sym_LT_POUNDinclude] = ACTIONS(210),
    [anon_sym_LT_POUNDlocal] = ACTIONS(210),
    [anon_sym_LT_POUNDmacro] = ACTIONS(210),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(210),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(210),
    [anon_sym_LT_POUNDnt] = ACTIONS(210),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(210),
    [anon_sym_LT_POUNDsetting] = ACTIONS(210),
    [anon_sym_LT_POUNDstop] = ACTIONS(210),
    [anon_sym_LT_POUNDt] = ACTIONS(210),
    [anon_sym_LT_POUNDlt] = ACTIONS(210),
    [anon_sym_LT_POUNDrt] = ACTIONS(210),
  },
  [64] = {
    [sym_middle] = STATE(77),
    [sym__end] = STATE(76),
    [sym_nested] = STATE(61),
    [sym_return] = STATE(61),
    [aux_sym_block_repeat1] = STATE(77),
    [sym_end_single] = ACTIONS(212),
    [sym_end_block] = ACTIONS(212),
    [anon_sym_LT_POUNDnested] = ACTIONS(75),
    [sym_recover] = ACTIONS(77),
    [anon_sym_LT_POUNDreturn] = ACTIONS(79),
  },
  [65] = {
    [sym_expression] = STATE(79),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(214),
  },
  [66] = {
    [sym_end_single] = ACTIONS(61),
    [sym_end_block] = ACTIONS(61),
    [anon_sym_COMMA] = ACTIONS(61),
    [anon_sym_EQ] = ACTIONS(61),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(216),
    [sym_operator] = ACTIONS(65),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(218),
    [sym_end_single] = ACTIONS(218),
    [sym_end_block] = ACTIONS(218),
    [anon_sym_LT_POUNDassign] = ACTIONS(218),
    [anon_sym_LT_POUNDattempt] = ACTIONS(218),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(218),
    [anon_sym_LT_POUNDcompress] = ACTIONS(218),
    [anon_sym_LT_POUNDflush] = ACTIONS(218),
    [anon_sym_LT_POUNDftl] = ACTIONS(218),
    [anon_sym_LT_POUNDfunction] = ACTIONS(218),
    [anon_sym_LT_POUNDglobal] = ACTIONS(218),
    [anon_sym_LT_POUNDimport] = ACTIONS(218),
    [anon_sym_LT_POUNDinclude] = ACTIONS(218),
    [anon_sym_LT_POUNDlocal] = ACTIONS(218),
    [anon_sym_LT_POUNDmacro] = ACTIONS(218),
    [anon_sym_LT_POUNDnested] = ACTIONS(218),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(218),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(218),
    [anon_sym_LT_POUNDnt] = ACTIONS(218),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(218),
    [sym_recover] = ACTIONS(218),
    [anon_sym_LT_POUNDreturn] = ACTIONS(218),
    [anon_sym_LT_POUNDsetting] = ACTIONS(218),
    [anon_sym_LT_POUNDstop] = ACTIONS(218),
    [anon_sym_LT_POUNDt] = ACTIONS(218),
    [anon_sym_LT_POUNDlt] = ACTIONS(218),
    [anon_sym_LT_POUNDrt] = ACTIONS(218),
  },
  [68] = {
    [sym__end] = STATE(80),
    [sym_parameter_pattern] = STATE(71),
    [sym_paramPattern1] = STATE(31),
    [sym_paramPattern2] = STATE(31),
    [sym_paramPattern3] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_parameter] = STATE(35),
    [aux_sym_start_repeat1] = STATE(71),
    [sym_end_single] = ACTIONS(220),
    [sym_end_block] = ACTIONS(220),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(91),
  },
  [69] = {
    [sym_end_single] = ACTIONS(222),
    [sym_end_block] = ACTIONS(222),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(222),
  },
  [70] = {
    [sym_expression] = STATE(81),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(214),
  },
  [71] = {
    [sym_parameter_pattern] = STATE(71),
    [sym_paramPattern1] = STATE(31),
    [sym_paramPattern2] = STATE(31),
    [sym_paramPattern3] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_parameter] = STATE(35),
    [aux_sym_start_repeat1] = STATE(71),
    [sym_end_single] = ACTIONS(224),
    [sym_end_block] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(226),
  },
  [72] = {
    [sym_end_single] = ACTIONS(229),
    [sym_end_block] = ACTIONS(229),
    [anon_sym_LT_POUNDnested] = ACTIONS(229),
    [sym_recover] = ACTIONS(229),
    [anon_sym_LT_POUNDreturn] = ACTIONS(229),
  },
  [73] = {
    [anon_sym_GT] = ACTIONS(231),
  },
  [74] = {
    [sym_end_single] = ACTIONS(233),
    [sym_end_block] = ACTIONS(233),
    [anon_sym_LT_POUNDnested] = ACTIONS(233),
    [sym_recover] = ACTIONS(233),
    [anon_sym_LT_POUNDreturn] = ACTIONS(233),
  },
  [75] = {
    [anon_sym_GT] = ACTIONS(235),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_LT_POUNDassign] = ACTIONS(237),
    [anon_sym_LT_POUNDattempt] = ACTIONS(237),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(237),
    [anon_sym_LT_POUNDcompress] = ACTIONS(237),
    [anon_sym_LT_POUNDflush] = ACTIONS(237),
    [anon_sym_LT_POUNDftl] = ACTIONS(237),
    [anon_sym_LT_POUNDfunction] = ACTIONS(237),
    [anon_sym_LT_POUNDglobal] = ACTIONS(237),
    [anon_sym_LT_POUNDimport] = ACTIONS(237),
    [anon_sym_LT_POUNDinclude] = ACTIONS(237),
    [anon_sym_LT_POUNDlocal] = ACTIONS(237),
    [anon_sym_LT_POUNDmacro] = ACTIONS(237),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(237),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(237),
    [anon_sym_LT_POUNDnt] = ACTIONS(237),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(237),
    [anon_sym_LT_POUNDsetting] = ACTIONS(237),
    [anon_sym_LT_POUNDstop] = ACTIONS(237),
    [anon_sym_LT_POUNDt] = ACTIONS(237),
    [anon_sym_LT_POUNDlt] = ACTIONS(237),
    [anon_sym_LT_POUNDrt] = ACTIONS(237),
  },
  [77] = {
    [sym_middle] = STATE(77),
    [sym_nested] = STATE(61),
    [sym_return] = STATE(61),
    [aux_sym_block_repeat1] = STATE(77),
    [sym_end_single] = ACTIONS(239),
    [sym_end_block] = ACTIONS(239),
    [anon_sym_LT_POUNDnested] = ACTIONS(241),
    [sym_recover] = ACTIONS(244),
    [anon_sym_LT_POUNDreturn] = ACTIONS(247),
  },
  [78] = {
    [sym_end_single] = ACTIONS(231),
    [sym_end_block] = ACTIONS(231),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(231),
  },
  [79] = {
    [sym_end_single] = ACTIONS(250),
    [sym_end_block] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(250),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(252),
    [sym_end_single] = ACTIONS(252),
    [sym_end_block] = ACTIONS(252),
    [anon_sym_LT_POUNDassign] = ACTIONS(252),
    [anon_sym_LT_POUNDattempt] = ACTIONS(252),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(252),
    [anon_sym_LT_POUNDcompress] = ACTIONS(252),
    [anon_sym_LT_POUNDflush] = ACTIONS(252),
    [anon_sym_LT_POUNDftl] = ACTIONS(252),
    [anon_sym_LT_POUNDfunction] = ACTIONS(252),
    [anon_sym_LT_POUNDglobal] = ACTIONS(252),
    [anon_sym_LT_POUNDimport] = ACTIONS(252),
    [anon_sym_LT_POUNDinclude] = ACTIONS(252),
    [anon_sym_LT_POUNDlocal] = ACTIONS(252),
    [anon_sym_LT_POUNDmacro] = ACTIONS(252),
    [anon_sym_LT_POUNDnested] = ACTIONS(252),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(252),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(252),
    [anon_sym_LT_POUNDnt] = ACTIONS(252),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(252),
    [sym_recover] = ACTIONS(252),
    [anon_sym_LT_POUNDreturn] = ACTIONS(252),
    [anon_sym_LT_POUNDsetting] = ACTIONS(252),
    [anon_sym_LT_POUNDstop] = ACTIONS(252),
    [anon_sym_LT_POUNDt] = ACTIONS(252),
    [anon_sym_LT_POUNDlt] = ACTIONS(252),
    [anon_sym_LT_POUNDrt] = ACTIONS(252),
  },
  [81] = {
    [sym_end_single] = ACTIONS(254),
    [sym_end_block] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(254),
  },
  [82] = {
    [sym_end_single] = ACTIONS(256),
    [sym_end_block] = ACTIONS(256),
    [anon_sym_LT_POUNDnested] = ACTIONS(256),
    [sym_recover] = ACTIONS(256),
    [anon_sym_LT_POUNDreturn] = ACTIONS(256),
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
  [19] = {.count = 1, .reusable = true}, SHIFT(8),
  [21] = {.count = 1, .reusable = true}, SHIFT(9),
  [23] = {.count = 1, .reusable = true}, SHIFT(10),
  [25] = {.count = 1, .reusable = true}, SHIFT(11),
  [27] = {.count = 1, .reusable = true}, SHIFT(12),
  [29] = {.count = 1, .reusable = true}, SHIFT(13),
  [31] = {.count = 1, .reusable = true}, SHIFT(14),
  [33] = {.count = 1, .reusable = true}, SHIFT(15),
  [35] = {.count = 1, .reusable = true}, SHIFT(16),
  [37] = {.count = 1, .reusable = true}, SHIFT(17),
  [39] = {.count = 1, .reusable = true}, SHIFT(18),
  [41] = {.count = 1, .reusable = true}, SHIFT(19),
  [43] = {.count = 1, .reusable = true}, SHIFT(20),
  [45] = {.count = 1, .reusable = true}, SHIFT(21),
  [47] = {.count = 1, .reusable = true}, SHIFT(22),
  [49] = {.count = 1, .reusable = true}, SHIFT(30),
  [51] = {.count = 1, .reusable = true}, SHIFT(26),
  [53] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_directive, 1),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 1),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [65] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 1),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 2),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_directiveType, 1),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_single, 1),
  [73] = {.count = 1, .reusable = true}, SHIFT(63),
  [75] = {.count = 1, .reusable = true}, SHIFT(60),
  [77] = {.count = 1, .reusable = true}, SHIFT(61),
  [79] = {.count = 1, .reusable = true}, SHIFT(62),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_start, 1),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_pattern, 1),
  [85] = {.count = 1, .reusable = true}, SHIFT(65),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_name, 1),
  [89] = {.count = 1, .reusable = true}, SHIFT(67),
  [91] = {.count = 1, .reusable = true}, SHIFT(66),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_paramPattern1, 1),
  [95] = {.count = 1, .reusable = true}, SHIFT(69),
  [97] = {.count = 1, .reusable = true}, SHIFT(70),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_attempt, 2),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_autoesc, 2),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_compress, 2),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_flush, 2),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_ftl, 2),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_function, 2),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_global, 2),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_import, 2),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_local, 2),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_macro, 2),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_noautoesc, 2),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_noparse, 2),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_nt, 2),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_outputformat, 2),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_setting, 2),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_stop, 2),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_t, 2),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_lt, 2),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_rt, 2),
  [139] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [144] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [147] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [150] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [153] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [156] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [159] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [162] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [165] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [168] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [171] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [174] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [177] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [180] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [183] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [186] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [189] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [192] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [195] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [198] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [201] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym_middle, 1),
  [206] = {.count = 1, .reusable = true}, SHIFT(73),
  [208] = {.count = 1, .reusable = true}, SHIFT(74),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [212] = {.count = 1, .reusable = true}, SHIFT(76),
  [214] = {.count = 1, .reusable = true}, SHIFT(78),
  [216] = {.count = 1, .reusable = false}, REDUCE(sym_parameter, 1),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym_start, 2),
  [220] = {.count = 1, .reusable = true}, SHIFT(80),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_paramPattern2, 2),
  [224] = {.count = 1, .reusable = true}, REDUCE(aux_sym_start_repeat1, 2),
  [226] = {.count = 2, .reusable = true}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(66),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_nested, 2),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_return, 2),
  [235] = {.count = 1, .reusable = true}, SHIFT(82),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [239] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [241] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(60),
  [244] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(61),
  [247] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(62),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym_start, 3),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym_paramPattern3, 3),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_return, 3),
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
