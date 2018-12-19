#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 97
#define SYMBOL_COUNT 127
#define ALIAS_COUNT 0
#define TOKEN_COUNT 78
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
  sym_break = 10,
  anon_sym_LT_POUNDcompress = 11,
  sym_continue = 12,
  sym_else = 13,
  anon_sym_LT_POUNDelseif = 14,
  anon_sym_LT_POUNDflush = 15,
  anon_sym_LT_POUNDftl = 16,
  anon_sym_LT_POUNDfunction = 17,
  anon_sym_LT_POUNDglobal = 18,
  anon_sym_LT_POUNDif = 19,
  anon_sym_LT_POUNDimport = 20,
  anon_sym_LT_POUNDinclude = 21,
  anon_sym_LT_POUNDitems = 22,
  anon_sym_LT_POUNDlist = 23,
  anon_sym_LT_POUNDlocal = 24,
  anon_sym_LT_POUNDmacro = 25,
  anon_sym_LT_POUNDnested = 26,
  anon_sym_LT_POUNDnoautoesc = 27,
  anon_sym_LT_POUNDnoparse = 28,
  anon_sym_LT_POUNDnt = 29,
  anon_sym_LT_POUNDoutputformat = 30,
  sym_recover = 31,
  anon_sym_LT_POUNDreturn = 32,
  anon_sym_GT = 33,
  anon_sym_LT_POUNDsep = 34,
  anon_sym_LT_POUNDsetting = 35,
  anon_sym_LT_POUNDstop = 36,
  anon_sym_LT_POUNDt = 37,
  anon_sym_LT_POUNDlt = 38,
  anon_sym_LT_POUNDrt = 39,
  anon_sym_attempt = 40,
  anon_sym_autoesc = 41,
  anon_sym_break = 42,
  anon_sym_case = 43,
  anon_sym_compress = 44,
  anon_sym_continue = 45,
  anon_sym_default = 46,
  anon_sym_else = 47,
  anon_sym_elseif = 48,
  anon_sym_escape = 49,
  anon_sym_fallback = 50,
  anon_sym_flush = 51,
  anon_sym_ftl = 52,
  anon_sym_global = 53,
  anon_sym_if = 54,
  anon_sym_import = 55,
  anon_sym_include = 56,
  anon_sym_items = 57,
  anon_sym_list = 58,
  anon_sym_local = 59,
  anon_sym_lt = 60,
  anon_sym_macro = 61,
  anon_sym_nested = 62,
  anon_sym_noautoesc = 63,
  anon_sym_noescape = 64,
  anon_sym_noparse = 65,
  anon_sym_nt = 66,
  anon_sym_outputformat = 67,
  anon_sym_recover = 68,
  anon_sym_recurse = 69,
  anon_sym_return = 70,
  anon_sym_rt = 71,
  anon_sym_sep = 72,
  anon_sym_setting = 73,
  anon_sym_stop = 74,
  anon_sym_switch = 75,
  anon_sym_t = 76,
  anon_sym_visit = 77,
  sym_source_file = 78,
  sym__definition = 79,
  sym_directive = 80,
  sym_directiveType = 81,
  sym_single = 82,
  sym_block = 83,
  sym_start = 84,
  sym_middle = 85,
  sym__end = 86,
  sym_parameter_pattern = 87,
  sym_paramPattern1 = 88,
  sym_paramPattern2 = 89,
  sym_paramPattern3 = 90,
  sym_binary_expression = 91,
  sym_expression = 92,
  sym_identifier = 93,
  sym_name = 94,
  sym_parameter = 95,
  sym_assign = 96,
  sym_attempt = 97,
  sym_autoesc = 98,
  sym_compress = 99,
  sym_elseif = 100,
  sym_flush = 101,
  sym_ftl = 102,
  sym_function = 103,
  sym_global = 104,
  sym_if = 105,
  sym_import = 106,
  sym_include = 107,
  sym_items = 108,
  sym_list = 109,
  sym_local = 110,
  sym_macro = 111,
  sym_nested = 112,
  sym_noautoesc = 113,
  sym_noparse = 114,
  sym_nt = 115,
  sym_outputformat = 116,
  sym_return = 117,
  sym_sep = 118,
  sym_setting = 119,
  sym_stop = 120,
  sym_t = 121,
  sym_lt = 122,
  sym_rt = 123,
  aux_sym_source_file_repeat1 = 124,
  aux_sym_block_repeat1 = 125,
  aux_sym_start_repeat1 = 126,
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
  [sym_break] = "break",
  [anon_sym_LT_POUNDcompress] = "<#compress",
  [sym_continue] = "continue",
  [sym_else] = "else",
  [anon_sym_LT_POUNDelseif] = "<#elseif",
  [anon_sym_LT_POUNDflush] = "<#flush",
  [anon_sym_LT_POUNDftl] = "<#ftl",
  [anon_sym_LT_POUNDfunction] = "<#function",
  [anon_sym_LT_POUNDglobal] = "<#global",
  [anon_sym_LT_POUNDif] = "<#if",
  [anon_sym_LT_POUNDimport] = "<#import",
  [anon_sym_LT_POUNDinclude] = "<#include",
  [anon_sym_LT_POUNDitems] = "<#items",
  [anon_sym_LT_POUNDlist] = "<#list",
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
  [anon_sym_LT_POUNDsep] = "<#sep",
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
  [sym_elseif] = "elseif",
  [sym_flush] = "flush",
  [sym_ftl] = "ftl",
  [sym_function] = "function",
  [sym_global] = "global",
  [sym_if] = "if",
  [sym_import] = "import",
  [sym_include] = "include",
  [sym_items] = "items",
  [sym_list] = "list",
  [sym_local] = "local",
  [sym_macro] = "macro",
  [sym_nested] = "nested",
  [sym_noautoesc] = "noautoesc",
  [sym_noparse] = "noparse",
  [sym_nt] = "nt",
  [sym_outputformat] = "outputformat",
  [sym_return] = "return",
  [sym_sep] = "sep",
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
  [sym_break] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_POUNDcompress] = {
    .visible = true,
    .named = false,
  },
  [sym_continue] = {
    .visible = true,
    .named = true,
  },
  [sym_else] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_POUNDelseif] = {
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
  [anon_sym_LT_POUNDif] = {
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
  [anon_sym_LT_POUNDitems] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDlist] = {
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
  [anon_sym_LT_POUNDsep] = {
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
  [sym_elseif] = {
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
  [sym_if] = {
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
  [sym_items] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
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
  [sym_sep] = {
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
        ADVANCE(162);
      if (lookahead == '>')
        ADVANCE(163);
      if (lookahead == 'a')
        ADVANCE(164);
      if (lookahead == 'b')
        ADVANCE(179);
      if (lookahead == 'c')
        ADVANCE(184);
      if (lookahead == 'd')
        ADVANCE(201);
      if (lookahead == 'e')
        ADVANCE(208);
      if (lookahead == 'f')
        ADVANCE(219);
      if (lookahead == 'g')
        ADVANCE(233);
      if (lookahead == 'i')
        ADVANCE(239);
      if (lookahead == 'l')
        ADVANCE(256);
      if (lookahead == 'm')
        ADVANCE(265);
      if (lookahead == 'n')
        ADVANCE(270);
      if (lookahead == 'o')
        ADVANCE(296);
      if (lookahead == 'r')
        ADVANCE(308);
      if (lookahead == 's')
        ADVANCE(324);
      if (lookahead == 't')
        ADVANCE(340);
      if (lookahead == 'v')
        ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
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
        ADVANCE(159);
      END_STATE();
    case 4:
      if (lookahead == 'a')
        ADVANCE(5);
      if (lookahead == 'b')
        ADVANCE(23);
      if (lookahead == 'c')
        ADVANCE(29);
      if (lookahead == 'e')
        ADVANCE(44);
      if (lookahead == 'f')
        ADVANCE(51);
      if (lookahead == 'g')
        ADVANCE(65);
      if (lookahead == 'i')
        ADVANCE(71);
      if (lookahead == 'l')
        ADVANCE(88);
      if (lookahead == 'm')
        ADVANCE(97);
      if (lookahead == 'n')
        ADVANCE(102);
      if (lookahead == 'o')
        ADVANCE(122);
      if (lookahead == 'r')
        ADVANCE(134);
      if (lookahead == 's')
        ADVANCE(147);
      if (lookahead == 't')
        ADVANCE(158);
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
      if (lookahead == 'r')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'e')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'a')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'k')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '>')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_break);
      END_STATE();
    case 29:
      if (lookahead == 'o')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'm')
        ADVANCE(31);
      if (lookahead == 'n')
        ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == 'p')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'r')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'e')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 's')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 's')
        ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LT_POUNDcompress);
      END_STATE();
    case 37:
      if (lookahead == 't')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'i')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'n')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'u')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'e')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == '>')
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_continue);
      END_STATE();
    case 44:
      if (lookahead == 'l')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 's')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'e')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == '>')
        ADVANCE(48);
      if (lookahead == 'i')
        ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_else);
      END_STATE();
    case 49:
      if (lookahead == 'f')
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT_POUNDelseif);
      END_STATE();
    case 51:
      if (lookahead == 'l')
        ADVANCE(52);
      if (lookahead == 't')
        ADVANCE(56);
      if (lookahead == 'u')
        ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 'u')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 's')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'h')
        ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LT_POUNDflush);
      END_STATE();
    case 56:
      if (lookahead == 'l')
        ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT_POUNDftl);
      END_STATE();
    case 58:
      if (lookahead == 'n')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'c')
        ADVANCE(60);
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
      if (lookahead == 'o')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'n')
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT_POUNDfunction);
      END_STATE();
    case 65:
      if (lookahead == 'l')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'o')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'b')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'a')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'l')
        ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LT_POUNDglobal);
      END_STATE();
    case 71:
      if (lookahead == 'f')
        ADVANCE(72);
      if (lookahead == 'm')
        ADVANCE(73);
      if (lookahead == 'n')
        ADVANCE(78);
      if (lookahead == 't')
        ADVANCE(84);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LT_POUNDif);
      END_STATE();
    case 73:
      if (lookahead == 'p')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'o')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 'r')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 't')
        ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT_POUNDimport);
      END_STATE();
    case 78:
      if (lookahead == 'c')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'l')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'u')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'd')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'e')
        ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT_POUNDinclude);
      END_STATE();
    case 84:
      if (lookahead == 'e')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'm')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 's')
        ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LT_POUNDitems);
      END_STATE();
    case 88:
      if (lookahead == 'i')
        ADVANCE(89);
      if (lookahead == 'o')
        ADVANCE(92);
      if (lookahead == 't')
        ADVANCE(96);
      END_STATE();
    case 89:
      if (lookahead == 's')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 't')
        ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LT_POUNDlist);
      END_STATE();
    case 92:
      if (lookahead == 'c')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'a')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'l')
        ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LT_POUNDlocal);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LT_POUNDlt);
      END_STATE();
    case 97:
      if (lookahead == 'a')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'c')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'r')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'o')
        ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LT_POUNDmacro);
      END_STATE();
    case 102:
      if (lookahead == 'e')
        ADVANCE(103);
      if (lookahead == 'o')
        ADVANCE(108);
      if (lookahead == 't')
        ADVANCE(121);
      END_STATE();
    case 103:
      if (lookahead == 's')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 't')
        ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 'e')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'd')
        ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LT_POUNDnested);
      END_STATE();
    case 108:
      if (lookahead == 'a')
        ADVANCE(109);
      if (lookahead == 'p')
        ADVANCE(116);
      END_STATE();
    case 109:
      if (lookahead == 'u')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 't')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'o')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'e')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 's')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'c')
        ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LT_POUNDnoautoesc);
      END_STATE();
    case 116:
      if (lookahead == 'a')
        ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == 'r')
        ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 's')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'e')
        ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LT_POUNDnoparse);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LT_POUNDnt);
      END_STATE();
    case 122:
      if (lookahead == 'u')
        ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == 't')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 'p')
        ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == 'u')
        ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == 't')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == 'f')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'o')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'r')
        ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 'm')
        ADVANCE(131);
      END_STATE();
    case 131:
      if (lookahead == 'a')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 't')
        ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LT_POUNDoutputformat);
      END_STATE();
    case 134:
      if (lookahead == 'e')
        ADVANCE(135);
      if (lookahead == 't')
        ADVANCE(146);
      END_STATE();
    case 135:
      if (lookahead == 'c')
        ADVANCE(136);
      if (lookahead == 't')
        ADVANCE(142);
      END_STATE();
    case 136:
      if (lookahead == 'o')
        ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == 'v')
        ADVANCE(138);
      END_STATE();
    case 138:
      if (lookahead == 'e')
        ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'r')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == '>')
        ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_recover);
      END_STATE();
    case 142:
      if (lookahead == 'u')
        ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 'r')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'n')
        ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LT_POUNDreturn);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LT_POUNDrt);
      END_STATE();
    case 147:
      if (lookahead == 'e')
        ADVANCE(148);
      if (lookahead == 't')
        ADVANCE(155);
      END_STATE();
    case 148:
      if (lookahead == 'p')
        ADVANCE(149);
      if (lookahead == 't')
        ADVANCE(150);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LT_POUNDsep);
      END_STATE();
    case 150:
      if (lookahead == 't')
        ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == 'i')
        ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 'n')
        ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == 'g')
        ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LT_POUNDsetting);
      END_STATE();
    case 155:
      if (lookahead == 'o')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 'p')
        ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LT_POUNDstop);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LT_POUNDt);
      END_STATE();
    case 159:
      if (lookahead == '#')
        ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == '>')
        ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_end_block);
      if (lookahead == '>')
        ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(160);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(167);
      if (lookahead == 'u')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_operator);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'm')
        ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_attempt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'o')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_autoesc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'k')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_break);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(185);
      if (lookahead == 'o')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'm')
        ADVANCE(189);
      if (lookahead == 'n')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_compress);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'u')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_continue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'f')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'u')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(209);
      if (lookahead == 's')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'f')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_escape);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(220);
      if (lookahead == 'l')
        ADVANCE(227);
      if (lookahead == 't')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'b')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'k')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_fallback);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'u')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'h')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_flush);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_ftl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'o')
        ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'b')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'f')
        ADVANCE(240);
      if (lookahead == 'm')
        ADVANCE(241);
      if (lookahead == 'n')
        ADVANCE(246);
      if (lookahead == 't')
        ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'o')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'u')
        ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'd')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_include);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'm')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_items);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(257);
      if (lookahead == 'o')
        ADVANCE(260);
      if (lookahead == 't')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_list);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_lt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'o')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_macro);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(271);
      if (lookahead == 'o')
        ADVANCE(276);
      if (lookahead == 't')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'd')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_nested);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(277);
      if (lookahead == 'e')
        ADVANCE(284);
      if (lookahead == 'p')
        ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'u')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'o')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_noautoesc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_noescape);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_noparse);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_nt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'u')
        ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'u')
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'f')
        ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'o')
        ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'm')
        ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_outputformat);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(309);
      if (lookahead == 't')
        ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(310);
      if (lookahead == 't')
        ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'o')
        ADVANCE(311);
      if (lookahead == 'u')
        ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'v')
        ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_recover);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_recurse);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'u')
        ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_rt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(325);
      if (lookahead == 't')
        ADVANCE(332);
      if (lookahead == 'w')
        ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(326);
      if (lookahead == 't')
        ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_sep);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'g')
        ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_setting);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'o')
        ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_stop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'h')
        ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_visit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 346:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(3);
      if (lookahead == '=')
        ADVANCE(162);
      if (lookahead == '>')
        ADVANCE(163);
      if (lookahead == 'a')
        ADVANCE(164);
      if (lookahead == 'b')
        ADVANCE(179);
      if (lookahead == 'c')
        ADVANCE(184);
      if (lookahead == 'd')
        ADVANCE(201);
      if (lookahead == 'e')
        ADVANCE(208);
      if (lookahead == 'f')
        ADVANCE(219);
      if (lookahead == 'g')
        ADVANCE(233);
      if (lookahead == 'i')
        ADVANCE(239);
      if (lookahead == 'l')
        ADVANCE(256);
      if (lookahead == 'm')
        ADVANCE(265);
      if (lookahead == 'n')
        ADVANCE(270);
      if (lookahead == 'o')
        ADVANCE(296);
      if (lookahead == 'r')
        ADVANCE(308);
      if (lookahead == 's')
        ADVANCE(324);
      if (lookahead == 't')
        ADVANCE(340);
      if (lookahead == 'v')
        ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 347:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(347);
      END_STATE();
    case 348:
      if (lookahead == '#')
        ADVANCE(349);
      END_STATE();
    case 349:
      if (lookahead == 'a')
        ADVANCE(5);
      if (lookahead == 'c')
        ADVANCE(350);
      if (lookahead == 'f')
        ADVANCE(51);
      if (lookahead == 'g')
        ADVANCE(65);
      if (lookahead == 'i')
        ADVANCE(352);
      if (lookahead == 'l')
        ADVANCE(88);
      if (lookahead == 'm')
        ADVANCE(97);
      if (lookahead == 'n')
        ADVANCE(353);
      if (lookahead == 'o')
        ADVANCE(122);
      if (lookahead == 'r')
        ADVANCE(354);
      if (lookahead == 's')
        ADVANCE(355);
      if (lookahead == 't')
        ADVANCE(158);
      END_STATE();
    case 350:
      if (lookahead == 'o')
        ADVANCE(351);
      END_STATE();
    case 351:
      if (lookahead == 'm')
        ADVANCE(31);
      END_STATE();
    case 352:
      if (lookahead == 'f')
        ADVANCE(72);
      if (lookahead == 'm')
        ADVANCE(73);
      if (lookahead == 'n')
        ADVANCE(78);
      END_STATE();
    case 353:
      if (lookahead == 'o')
        ADVANCE(108);
      if (lookahead == 't')
        ADVANCE(121);
      END_STATE();
    case 354:
      if (lookahead == 't')
        ADVANCE(146);
      END_STATE();
    case 355:
      if (lookahead == 'e')
        ADVANCE(356);
      if (lookahead == 't')
        ADVANCE(155);
      END_STATE();
    case 356:
      if (lookahead == 't')
        ADVANCE(150);
      END_STATE();
    case 357:
      if (lookahead == ',')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(358);
      if (lookahead == '=')
        ADVANCE(162);
      if (lookahead == '>')
        ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 358:
      if (lookahead == '/')
        ADVANCE(159);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_end_single);
      END_STATE();
    case 360:
      if (lookahead == ',')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(358);
      if (lookahead == '=')
        ADVANCE(162);
      if (lookahead == '>')
        ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 361:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(361);
      END_STATE();
    case 362:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(363);
      if (lookahead == '>')
        ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(365);
      END_STATE();
    case 363:
      if (lookahead == '#')
        ADVANCE(364);
      if (lookahead == '/')
        ADVANCE(159);
      END_STATE();
    case 364:
      if (lookahead == 'a')
        ADVANCE(5);
      if (lookahead == 'c')
        ADVANCE(29);
      if (lookahead == 'e')
        ADVANCE(44);
      if (lookahead == 'f')
        ADVANCE(51);
      if (lookahead == 'g')
        ADVANCE(65);
      if (lookahead == 'i')
        ADVANCE(71);
      if (lookahead == 'l')
        ADVANCE(88);
      if (lookahead == 'm')
        ADVANCE(97);
      if (lookahead == 'n')
        ADVANCE(102);
      if (lookahead == 'o')
        ADVANCE(122);
      if (lookahead == 'r')
        ADVANCE(134);
      if (lookahead == 's')
        ADVANCE(147);
      if (lookahead == 't')
        ADVANCE(158);
      END_STATE();
    case 365:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(363);
      if (lookahead == '>')
        ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(365);
      END_STATE();
    case 366:
      if (lookahead == ',')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(358);
      if (lookahead == '=')
        ADVANCE(162);
      if (lookahead == '>')
        ADVANCE(359);
      if (lookahead == 'a')
        ADVANCE(367);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 368:
      if (lookahead == ',')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(358);
      if (lookahead == '=')
        ADVANCE(162);
      if (lookahead == '>')
        ADVANCE(359);
      if (lookahead == 'a')
        ADVANCE(367);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 369:
      if (lookahead == 'a')
        ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(369);
      END_STATE();
    case 370:
      if (lookahead == 's')
        ADVANCE(371);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_operator);
      END_STATE();
    case 372:
      if (lookahead == '>')
        ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 347},
  [2] = {.lex_state = 357},
  [3] = {.lex_state = 357},
  [4] = {.lex_state = 357},
  [5] = {.lex_state = 357},
  [6] = {.lex_state = 357},
  [7] = {.lex_state = 357},
  [8] = {.lex_state = 357},
  [9] = {.lex_state = 357},
  [10] = {.lex_state = 357},
  [11] = {.lex_state = 357},
  [12] = {.lex_state = 357},
  [13] = {.lex_state = 357},
  [14] = {.lex_state = 357},
  [15] = {.lex_state = 357},
  [16] = {.lex_state = 357},
  [17] = {.lex_state = 357},
  [18] = {.lex_state = 357},
  [19] = {.lex_state = 357},
  [20] = {.lex_state = 357},
  [21] = {.lex_state = 357},
  [22] = {.lex_state = 357},
  [23] = {.lex_state = 357},
  [24] = {.lex_state = 357},
  [25] = {.lex_state = 361},
  [26] = {.lex_state = 362},
  [27] = {.lex_state = 347},
  [28] = {.lex_state = 366},
  [29] = {.lex_state = 362},
  [30] = {.lex_state = 362},
  [31] = {.lex_state = 362},
  [32] = {.lex_state = 362},
  [33] = {.lex_state = 357},
  [34] = {.lex_state = 369},
  [35] = {.lex_state = 357},
  [36] = {.lex_state = 357},
  [37] = {.lex_state = 357},
  [38] = {.lex_state = 357},
  [39] = {.lex_state = 362},
  [40] = {.lex_state = 362},
  [41] = {.lex_state = 362},
  [42] = {.lex_state = 362},
  [43] = {.lex_state = 362},
  [44] = {.lex_state = 362},
  [45] = {.lex_state = 362},
  [46] = {.lex_state = 362},
  [47] = {.lex_state = 362},
  [48] = {.lex_state = 362},
  [49] = {.lex_state = 362},
  [50] = {.lex_state = 362},
  [51] = {.lex_state = 362},
  [52] = {.lex_state = 362},
  [53] = {.lex_state = 362},
  [54] = {.lex_state = 362},
  [55] = {.lex_state = 362},
  [56] = {.lex_state = 362},
  [57] = {.lex_state = 362},
  [58] = {.lex_state = 362},
  [59] = {.lex_state = 362},
  [60] = {.lex_state = 362},
  [61] = {.lex_state = 362},
  [62] = {.lex_state = 362},
  [63] = {.lex_state = 347},
  [64] = {.lex_state = 357},
  [65] = {.lex_state = 362},
  [66] = {.lex_state = 357},
  [67] = {.lex_state = 357},
  [68] = {.lex_state = 357},
  [69] = {.lex_state = 357},
  [70] = {.lex_state = 357},
  [71] = {.lex_state = 372},
  [72] = {.lex_state = 357},
  [73] = {.lex_state = 362},
  [74] = {.lex_state = 362},
  [75] = {.lex_state = 357},
  [76] = {.lex_state = 366},
  [77] = {.lex_state = 362},
  [78] = {.lex_state = 357},
  [79] = {.lex_state = 357},
  [80] = {.lex_state = 357},
  [81] = {.lex_state = 357},
  [82] = {.lex_state = 362},
  [83] = {.lex_state = 362},
  [84] = {.lex_state = 362},
  [85] = {.lex_state = 362},
  [86] = {.lex_state = 372},
  [87] = {.lex_state = 362},
  [88] = {.lex_state = 372},
  [89] = {.lex_state = 362},
  [90] = {.lex_state = 362},
  [91] = {.lex_state = 362},
  [92] = {.lex_state = 357},
  [93] = {.lex_state = 357},
  [94] = {.lex_state = 362},
  [95] = {.lex_state = 357},
  [96] = {.lex_state = 362},
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
    [sym_break] = ACTIONS(1),
    [anon_sym_LT_POUNDcompress] = ACTIONS(1),
    [sym_continue] = ACTIONS(1),
    [sym_else] = ACTIONS(1),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1),
    [anon_sym_LT_POUNDflush] = ACTIONS(1),
    [anon_sym_LT_POUNDftl] = ACTIONS(1),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1),
    [anon_sym_LT_POUNDif] = ACTIONS(1),
    [anon_sym_LT_POUNDimport] = ACTIONS(1),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1),
    [anon_sym_LT_POUNDitems] = ACTIONS(1),
    [anon_sym_LT_POUNDlist] = ACTIONS(1),
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
    [anon_sym_LT_POUNDsep] = ACTIONS(1),
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
    [sym_source_file] = STATE(25),
    [sym__definition] = STATE(27),
    [sym_directive] = STATE(27),
    [sym_assign] = STATE(26),
    [sym_attempt] = STATE(26),
    [sym_autoesc] = STATE(26),
    [sym_compress] = STATE(26),
    [sym_flush] = STATE(26),
    [sym_ftl] = STATE(26),
    [sym_function] = STATE(26),
    [sym_global] = STATE(26),
    [sym_if] = STATE(26),
    [sym_import] = STATE(26),
    [sym_include] = STATE(26),
    [sym_list] = STATE(26),
    [sym_local] = STATE(26),
    [sym_macro] = STATE(26),
    [sym_noautoesc] = STATE(26),
    [sym_noparse] = STATE(26),
    [sym_nt] = STATE(26),
    [sym_outputformat] = STATE(26),
    [sym_setting] = STATE(26),
    [sym_stop] = STATE(26),
    [sym_t] = STATE(26),
    [sym_lt] = STATE(26),
    [sym_rt] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LT_POUNDassign] = ACTIONS(7),
    [anon_sym_LT_POUNDattempt] = ACTIONS(9),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(11),
    [anon_sym_LT_POUNDcompress] = ACTIONS(13),
    [anon_sym_LT_POUNDflush] = ACTIONS(15),
    [anon_sym_LT_POUNDftl] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDglobal] = ACTIONS(21),
    [anon_sym_LT_POUNDif] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [anon_sym_LT_POUNDlist] = ACTIONS(29),
    [anon_sym_LT_POUNDlocal] = ACTIONS(31),
    [anon_sym_LT_POUNDmacro] = ACTIONS(33),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(35),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(37),
    [anon_sym_LT_POUNDnt] = ACTIONS(39),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(41),
    [anon_sym_LT_POUNDsetting] = ACTIONS(43),
    [anon_sym_LT_POUNDstop] = ACTIONS(45),
    [anon_sym_LT_POUNDt] = ACTIONS(47),
    [anon_sym_LT_POUNDlt] = ACTIONS(49),
    [anon_sym_LT_POUNDrt] = ACTIONS(51),
  },
  [2] = {
    [sym_directiveType] = STATE(29),
    [sym_single] = STATE(30),
    [sym_block] = STATE(30),
    [sym_start] = STATE(31),
    [sym__end] = STATE(32),
    [sym_parameter_pattern] = STATE(38),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_identifier] = STATE(35),
    [sym_name] = STATE(36),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(38),
    [sym_end_single] = ACTIONS(53),
    [sym_end_block] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [3] = {
    [sym_single] = STATE(39),
    [sym_start] = STATE(40),
    [sym__end] = STATE(32),
    [sym_parameter_pattern] = STATE(38),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_identifier] = STATE(35),
    [sym_name] = STATE(36),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(38),
    [sym_end_single] = ACTIONS(53),
    [sym_end_block] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [4] = {
    [sym_block] = STATE(41),
    [sym_start] = STATE(42),
    [sym__end] = STATE(32),
    [sym_parameter_pattern] = STATE(38),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_identifier] = STATE(35),
    [sym_name] = STATE(36),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(38),
    [sym_end_single] = ACTIONS(53),
    [sym_end_block] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [5] = {
    [sym_block] = STATE(43),
    [sym_start] = STATE(42),
    [sym__end] = STATE(32),
    [sym_parameter_pattern] = STATE(38),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_identifier] = STATE(35),
    [sym_name] = STATE(36),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(38),
    [sym_end_single] = ACTIONS(53),
    [sym_end_block] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [6] = {
    [sym_single] = STATE(44),
    [sym_start] = STATE(40),
    [sym__end] = STATE(32),
    [sym_parameter_pattern] = STATE(38),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_identifier] = STATE(35),
    [sym_name] = STATE(36),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(38),
    [sym_end_single] = ACTIONS(53),
    [sym_end_block] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [7] = {
    [sym_single] = STATE(45),
    [sym_start] = STATE(40),
    [sym__end] = STATE(32),
    [sym_parameter_pattern] = STATE(38),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_identifier] = STATE(35),
    [sym_name] = STATE(36),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(38),
    [sym_end_single] = ACTIONS(53),
    [sym_end_block] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [8] = {
    [sym_block] = STATE(46),
    [sym_start] = STATE(42),
    [sym__end] = STATE(32),
    [sym_parameter_pattern] = STATE(38),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_identifier] = STATE(35),
    [sym_name] = STATE(36),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(38),
    [sym_end_single] = ACTIONS(53),
    [sym_end_block] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [9] = {
    [sym_directiveType] = STATE(47),
    [sym_single] = STATE(30),
    [sym_block] = STATE(30),
    [sym_start] = STATE(31),
    [sym__end] = STATE(32),
    [sym_parameter_pattern] = STATE(38),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_identifier] = STATE(35),
    [sym_name] = STATE(36),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(38),
    [sym_end_single] = ACTIONS(53),
    [sym_end_block] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [10] = {
    [sym_block] = STATE(48),
    [sym_start] = STATE(42),
    [sym__end] = STATE(32),
    [sym_parameter_pattern] = STATE(38),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_identifier] = STATE(35),
    [sym_name] = STATE(36),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(38),
    [sym_end_single] = ACTIONS(53),
    [sym_end_block] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [11] = {
    [sym_single] = STATE(49),
    [sym_start] = STATE(40),
    [sym__end] = STATE(32),
    [sym_parameter_pattern] = STATE(38),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_identifier] = STATE(35),
    [sym_name] = STATE(36),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(38),
    [sym_end_single] = ACTIONS(53),
    [sym_end_block] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [12] = {
    [sym_single] = STATE(50),
    [sym_start] = STATE(40),
    [sym__end] = STATE(32),
    [sym_parameter_pattern] = STATE(38),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_identifier] = STATE(35),
    [sym_name] = STATE(36),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(38),
    [sym_end_single] = ACTIONS(53),
    [sym_end_block] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [13] = {
    [sym_block] = STATE(51),
    [sym_start] = STATE(42),
    [sym__end] = STATE(32),
    [sym_parameter_pattern] = STATE(38),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_identifier] = STATE(35),
    [sym_name] = STATE(36),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(38),
    [sym_end_single] = ACTIONS(53),
    [sym_end_block] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [14] = {
    [sym_directiveType] = STATE(52),
    [sym_single] = STATE(30),
    [sym_block] = STATE(30),
    [sym_start] = STATE(31),
    [sym__end] = STATE(32),
    [sym_parameter_pattern] = STATE(38),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_identifier] = STATE(35),
    [sym_name] = STATE(36),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(38),
    [sym_end_single] = ACTIONS(53),
    [sym_end_block] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [15] = {
    [sym_block] = STATE(53),
    [sym_start] = STATE(42),
    [sym__end] = STATE(32),
    [sym_parameter_pattern] = STATE(38),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_identifier] = STATE(35),
    [sym_name] = STATE(36),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(38),
    [sym_end_single] = ACTIONS(53),
    [sym_end_block] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [16] = {
    [sym_block] = STATE(54),
    [sym_start] = STATE(42),
    [sym__end] = STATE(32),
    [sym_parameter_pattern] = STATE(38),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_identifier] = STATE(35),
    [sym_name] = STATE(36),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(38),
    [sym_end_single] = ACTIONS(53),
    [sym_end_block] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [17] = {
    [sym_block] = STATE(55),
    [sym_start] = STATE(42),
    [sym__end] = STATE(32),
    [sym_parameter_pattern] = STATE(38),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_identifier] = STATE(35),
    [sym_name] = STATE(36),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(38),
    [sym_end_single] = ACTIONS(53),
    [sym_end_block] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [18] = {
    [sym_single] = STATE(56),
    [sym_start] = STATE(40),
    [sym__end] = STATE(32),
    [sym_parameter_pattern] = STATE(38),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_identifier] = STATE(35),
    [sym_name] = STATE(36),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(38),
    [sym_end_single] = ACTIONS(53),
    [sym_end_block] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [19] = {
    [sym_block] = STATE(57),
    [sym_start] = STATE(42),
    [sym__end] = STATE(32),
    [sym_parameter_pattern] = STATE(38),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_identifier] = STATE(35),
    [sym_name] = STATE(36),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(38),
    [sym_end_single] = ACTIONS(53),
    [sym_end_block] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [20] = {
    [sym_single] = STATE(58),
    [sym_start] = STATE(40),
    [sym__end] = STATE(32),
    [sym_parameter_pattern] = STATE(38),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_identifier] = STATE(35),
    [sym_name] = STATE(36),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(38),
    [sym_end_single] = ACTIONS(53),
    [sym_end_block] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [21] = {
    [sym_single] = STATE(59),
    [sym_start] = STATE(40),
    [sym__end] = STATE(32),
    [sym_parameter_pattern] = STATE(38),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_identifier] = STATE(35),
    [sym_name] = STATE(36),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(38),
    [sym_end_single] = ACTIONS(53),
    [sym_end_block] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [22] = {
    [sym_single] = STATE(60),
    [sym_start] = STATE(40),
    [sym__end] = STATE(32),
    [sym_parameter_pattern] = STATE(38),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_identifier] = STATE(35),
    [sym_name] = STATE(36),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(38),
    [sym_end_single] = ACTIONS(53),
    [sym_end_block] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [23] = {
    [sym_single] = STATE(61),
    [sym_start] = STATE(40),
    [sym__end] = STATE(32),
    [sym_parameter_pattern] = STATE(38),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_identifier] = STATE(35),
    [sym_name] = STATE(36),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(38),
    [sym_end_single] = ACTIONS(53),
    [sym_end_block] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [24] = {
    [sym_single] = STATE(62),
    [sym_start] = STATE(40),
    [sym__end] = STATE(32),
    [sym_parameter_pattern] = STATE(38),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_identifier] = STATE(35),
    [sym_name] = STATE(36),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(38),
    [sym_end_single] = ACTIONS(53),
    [sym_end_block] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(57),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_end_single] = ACTIONS(59),
    [sym_end_block] = ACTIONS(59),
    [anon_sym_LT_POUNDassign] = ACTIONS(59),
    [anon_sym_LT_POUNDattempt] = ACTIONS(59),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(59),
    [anon_sym_LT_POUNDcompress] = ACTIONS(59),
    [sym_continue] = ACTIONS(59),
    [sym_else] = ACTIONS(59),
    [anon_sym_LT_POUNDelseif] = ACTIONS(59),
    [anon_sym_LT_POUNDflush] = ACTIONS(59),
    [anon_sym_LT_POUNDftl] = ACTIONS(59),
    [anon_sym_LT_POUNDfunction] = ACTIONS(59),
    [anon_sym_LT_POUNDglobal] = ACTIONS(59),
    [anon_sym_LT_POUNDif] = ACTIONS(59),
    [anon_sym_LT_POUNDimport] = ACTIONS(59),
    [anon_sym_LT_POUNDinclude] = ACTIONS(59),
    [anon_sym_LT_POUNDitems] = ACTIONS(59),
    [anon_sym_LT_POUNDlist] = ACTIONS(59),
    [anon_sym_LT_POUNDlocal] = ACTIONS(59),
    [anon_sym_LT_POUNDmacro] = ACTIONS(59),
    [anon_sym_LT_POUNDnested] = ACTIONS(59),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(59),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(59),
    [anon_sym_LT_POUNDnt] = ACTIONS(59),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(59),
    [sym_recover] = ACTIONS(59),
    [anon_sym_LT_POUNDreturn] = ACTIONS(59),
    [anon_sym_LT_POUNDsep] = ACTIONS(59),
    [anon_sym_LT_POUNDsetting] = ACTIONS(59),
    [anon_sym_LT_POUNDstop] = ACTIONS(59),
    [anon_sym_LT_POUNDt] = ACTIONS(59),
    [anon_sym_LT_POUNDlt] = ACTIONS(59),
    [anon_sym_LT_POUNDrt] = ACTIONS(59),
  },
  [27] = {
    [sym__definition] = STATE(63),
    [sym_directive] = STATE(63),
    [sym_assign] = STATE(26),
    [sym_attempt] = STATE(26),
    [sym_autoesc] = STATE(26),
    [sym_compress] = STATE(26),
    [sym_flush] = STATE(26),
    [sym_ftl] = STATE(26),
    [sym_function] = STATE(26),
    [sym_global] = STATE(26),
    [sym_if] = STATE(26),
    [sym_import] = STATE(26),
    [sym_include] = STATE(26),
    [sym_list] = STATE(26),
    [sym_local] = STATE(26),
    [sym_macro] = STATE(26),
    [sym_noautoesc] = STATE(26),
    [sym_noparse] = STATE(26),
    [sym_nt] = STATE(26),
    [sym_outputformat] = STATE(26),
    [sym_setting] = STATE(26),
    [sym_stop] = STATE(26),
    [sym_t] = STATE(26),
    [sym_lt] = STATE(26),
    [sym_rt] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_LT_POUNDassign] = ACTIONS(7),
    [anon_sym_LT_POUNDattempt] = ACTIONS(9),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(11),
    [anon_sym_LT_POUNDcompress] = ACTIONS(13),
    [anon_sym_LT_POUNDflush] = ACTIONS(15),
    [anon_sym_LT_POUNDftl] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDglobal] = ACTIONS(21),
    [anon_sym_LT_POUNDif] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [anon_sym_LT_POUNDlist] = ACTIONS(29),
    [anon_sym_LT_POUNDlocal] = ACTIONS(31),
    [anon_sym_LT_POUNDmacro] = ACTIONS(33),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(35),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(37),
    [anon_sym_LT_POUNDnt] = ACTIONS(39),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(41),
    [anon_sym_LT_POUNDsetting] = ACTIONS(43),
    [anon_sym_LT_POUNDstop] = ACTIONS(45),
    [anon_sym_LT_POUNDt] = ACTIONS(47),
    [anon_sym_LT_POUNDlt] = ACTIONS(49),
    [anon_sym_LT_POUNDrt] = ACTIONS(51),
  },
  [28] = {
    [sym_end_single] = ACTIONS(63),
    [sym_end_block] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(67),
    [sym_operator] = ACTIONS(69),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_end_single] = ACTIONS(71),
    [sym_end_block] = ACTIONS(71),
    [anon_sym_LT_POUNDassign] = ACTIONS(71),
    [anon_sym_LT_POUNDattempt] = ACTIONS(71),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(71),
    [anon_sym_LT_POUNDcompress] = ACTIONS(71),
    [sym_continue] = ACTIONS(71),
    [sym_else] = ACTIONS(71),
    [anon_sym_LT_POUNDelseif] = ACTIONS(71),
    [anon_sym_LT_POUNDflush] = ACTIONS(71),
    [anon_sym_LT_POUNDftl] = ACTIONS(71),
    [anon_sym_LT_POUNDfunction] = ACTIONS(71),
    [anon_sym_LT_POUNDglobal] = ACTIONS(71),
    [anon_sym_LT_POUNDif] = ACTIONS(71),
    [anon_sym_LT_POUNDimport] = ACTIONS(71),
    [anon_sym_LT_POUNDinclude] = ACTIONS(71),
    [anon_sym_LT_POUNDitems] = ACTIONS(71),
    [anon_sym_LT_POUNDlist] = ACTIONS(71),
    [anon_sym_LT_POUNDlocal] = ACTIONS(71),
    [anon_sym_LT_POUNDmacro] = ACTIONS(71),
    [anon_sym_LT_POUNDnested] = ACTIONS(71),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(71),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(71),
    [anon_sym_LT_POUNDnt] = ACTIONS(71),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(71),
    [sym_recover] = ACTIONS(71),
    [anon_sym_LT_POUNDreturn] = ACTIONS(71),
    [anon_sym_LT_POUNDsep] = ACTIONS(71),
    [anon_sym_LT_POUNDsetting] = ACTIONS(71),
    [anon_sym_LT_POUNDstop] = ACTIONS(71),
    [anon_sym_LT_POUNDt] = ACTIONS(71),
    [anon_sym_LT_POUNDlt] = ACTIONS(71),
    [anon_sym_LT_POUNDrt] = ACTIONS(71),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_end_single] = ACTIONS(73),
    [sym_end_block] = ACTIONS(73),
    [anon_sym_LT_POUNDassign] = ACTIONS(73),
    [anon_sym_LT_POUNDattempt] = ACTIONS(73),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(73),
    [anon_sym_LT_POUNDcompress] = ACTIONS(73),
    [sym_continue] = ACTIONS(73),
    [sym_else] = ACTIONS(73),
    [anon_sym_LT_POUNDelseif] = ACTIONS(73),
    [anon_sym_LT_POUNDflush] = ACTIONS(73),
    [anon_sym_LT_POUNDftl] = ACTIONS(73),
    [anon_sym_LT_POUNDfunction] = ACTIONS(73),
    [anon_sym_LT_POUNDglobal] = ACTIONS(73),
    [anon_sym_LT_POUNDif] = ACTIONS(73),
    [anon_sym_LT_POUNDimport] = ACTIONS(73),
    [anon_sym_LT_POUNDinclude] = ACTIONS(73),
    [anon_sym_LT_POUNDitems] = ACTIONS(73),
    [anon_sym_LT_POUNDlist] = ACTIONS(73),
    [anon_sym_LT_POUNDlocal] = ACTIONS(73),
    [anon_sym_LT_POUNDmacro] = ACTIONS(73),
    [anon_sym_LT_POUNDnested] = ACTIONS(73),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(73),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(73),
    [anon_sym_LT_POUNDnt] = ACTIONS(73),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(73),
    [sym_recover] = ACTIONS(73),
    [anon_sym_LT_POUNDreturn] = ACTIONS(73),
    [anon_sym_LT_POUNDsep] = ACTIONS(73),
    [anon_sym_LT_POUNDsetting] = ACTIONS(73),
    [anon_sym_LT_POUNDstop] = ACTIONS(73),
    [anon_sym_LT_POUNDt] = ACTIONS(73),
    [anon_sym_LT_POUNDlt] = ACTIONS(73),
    [anon_sym_LT_POUNDrt] = ACTIONS(73),
  },
  [31] = {
    [sym__definition] = STATE(65),
    [sym_directive] = STATE(65),
    [sym_middle] = STATE(74),
    [sym__end] = STATE(73),
    [sym_assign] = STATE(26),
    [sym_attempt] = STATE(26),
    [sym_autoesc] = STATE(26),
    [sym_compress] = STATE(26),
    [sym_elseif] = STATE(65),
    [sym_flush] = STATE(26),
    [sym_ftl] = STATE(26),
    [sym_function] = STATE(26),
    [sym_global] = STATE(26),
    [sym_if] = STATE(26),
    [sym_import] = STATE(26),
    [sym_include] = STATE(26),
    [sym_items] = STATE(65),
    [sym_list] = STATE(26),
    [sym_local] = STATE(26),
    [sym_macro] = STATE(26),
    [sym_nested] = STATE(65),
    [sym_noautoesc] = STATE(26),
    [sym_noparse] = STATE(26),
    [sym_nt] = STATE(26),
    [sym_outputformat] = STATE(26),
    [sym_return] = STATE(65),
    [sym_sep] = STATE(65),
    [sym_setting] = STATE(26),
    [sym_stop] = STATE(26),
    [sym_t] = STATE(26),
    [sym_lt] = STATE(26),
    [sym_rt] = STATE(26),
    [aux_sym_block_repeat1] = STATE(74),
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_end_single] = ACTIONS(77),
    [sym_end_block] = ACTIONS(77),
    [anon_sym_LT_POUNDassign] = ACTIONS(75),
    [anon_sym_LT_POUNDattempt] = ACTIONS(75),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(75),
    [anon_sym_LT_POUNDcompress] = ACTIONS(75),
    [sym_continue] = ACTIONS(79),
    [sym_else] = ACTIONS(79),
    [anon_sym_LT_POUNDelseif] = ACTIONS(81),
    [anon_sym_LT_POUNDflush] = ACTIONS(75),
    [anon_sym_LT_POUNDftl] = ACTIONS(75),
    [anon_sym_LT_POUNDfunction] = ACTIONS(75),
    [anon_sym_LT_POUNDglobal] = ACTIONS(75),
    [anon_sym_LT_POUNDif] = ACTIONS(75),
    [anon_sym_LT_POUNDimport] = ACTIONS(75),
    [anon_sym_LT_POUNDinclude] = ACTIONS(75),
    [anon_sym_LT_POUNDitems] = ACTIONS(83),
    [anon_sym_LT_POUNDlist] = ACTIONS(75),
    [anon_sym_LT_POUNDlocal] = ACTIONS(75),
    [anon_sym_LT_POUNDmacro] = ACTIONS(75),
    [anon_sym_LT_POUNDnested] = ACTIONS(85),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(75),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(75),
    [anon_sym_LT_POUNDnt] = ACTIONS(75),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(75),
    [sym_recover] = ACTIONS(79),
    [anon_sym_LT_POUNDreturn] = ACTIONS(87),
    [anon_sym_LT_POUNDsep] = ACTIONS(89),
    [anon_sym_LT_POUNDsetting] = ACTIONS(75),
    [anon_sym_LT_POUNDstop] = ACTIONS(75),
    [anon_sym_LT_POUNDt] = ACTIONS(75),
    [anon_sym_LT_POUNDlt] = ACTIONS(75),
    [anon_sym_LT_POUNDrt] = ACTIONS(75),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym_end_single] = ACTIONS(91),
    [sym_end_block] = ACTIONS(91),
    [anon_sym_LT_POUNDassign] = ACTIONS(91),
    [anon_sym_LT_POUNDattempt] = ACTIONS(91),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(91),
    [anon_sym_LT_POUNDcompress] = ACTIONS(91),
    [sym_continue] = ACTIONS(91),
    [sym_else] = ACTIONS(91),
    [anon_sym_LT_POUNDelseif] = ACTIONS(91),
    [anon_sym_LT_POUNDflush] = ACTIONS(91),
    [anon_sym_LT_POUNDftl] = ACTIONS(91),
    [anon_sym_LT_POUNDfunction] = ACTIONS(91),
    [anon_sym_LT_POUNDglobal] = ACTIONS(91),
    [anon_sym_LT_POUNDif] = ACTIONS(91),
    [anon_sym_LT_POUNDimport] = ACTIONS(91),
    [anon_sym_LT_POUNDinclude] = ACTIONS(91),
    [anon_sym_LT_POUNDitems] = ACTIONS(91),
    [anon_sym_LT_POUNDlist] = ACTIONS(91),
    [anon_sym_LT_POUNDlocal] = ACTIONS(91),
    [anon_sym_LT_POUNDmacro] = ACTIONS(91),
    [anon_sym_LT_POUNDnested] = ACTIONS(91),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(91),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(91),
    [anon_sym_LT_POUNDnt] = ACTIONS(91),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(91),
    [sym_recover] = ACTIONS(91),
    [anon_sym_LT_POUNDreturn] = ACTIONS(91),
    [anon_sym_LT_POUNDsep] = ACTIONS(91),
    [anon_sym_LT_POUNDsetting] = ACTIONS(91),
    [anon_sym_LT_POUNDstop] = ACTIONS(91),
    [anon_sym_LT_POUNDt] = ACTIONS(91),
    [anon_sym_LT_POUNDlt] = ACTIONS(91),
    [anon_sym_LT_POUNDrt] = ACTIONS(91),
  },
  [33] = {
    [sym_end_single] = ACTIONS(93),
    [sym_end_block] = ACTIONS(93),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(93),
  },
  [34] = {
    [sym_operator] = ACTIONS(95),
  },
  [35] = {
    [sym_end_single] = ACTIONS(97),
    [sym_end_block] = ACTIONS(97),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(97),
  },
  [36] = {
    [sym__end] = STATE(77),
    [sym_parameter_pattern] = STATE(78),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(78),
    [sym_end_single] = ACTIONS(99),
    [sym_end_block] = ACTIONS(99),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(101),
  },
  [37] = {
    [sym_end_single] = ACTIONS(103),
    [sym_end_block] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(107),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(103),
  },
  [38] = {
    [sym__end] = STATE(77),
    [sym_parameter_pattern] = STATE(81),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(81),
    [sym_end_single] = ACTIONS(99),
    [sym_end_block] = ACTIONS(99),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(101),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym_end_single] = ACTIONS(109),
    [sym_end_block] = ACTIONS(109),
    [anon_sym_LT_POUNDassign] = ACTIONS(109),
    [anon_sym_LT_POUNDattempt] = ACTIONS(109),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(109),
    [anon_sym_LT_POUNDcompress] = ACTIONS(109),
    [sym_continue] = ACTIONS(109),
    [sym_else] = ACTIONS(109),
    [anon_sym_LT_POUNDelseif] = ACTIONS(109),
    [anon_sym_LT_POUNDflush] = ACTIONS(109),
    [anon_sym_LT_POUNDftl] = ACTIONS(109),
    [anon_sym_LT_POUNDfunction] = ACTIONS(109),
    [anon_sym_LT_POUNDglobal] = ACTIONS(109),
    [anon_sym_LT_POUNDif] = ACTIONS(109),
    [anon_sym_LT_POUNDimport] = ACTIONS(109),
    [anon_sym_LT_POUNDinclude] = ACTIONS(109),
    [anon_sym_LT_POUNDitems] = ACTIONS(109),
    [anon_sym_LT_POUNDlist] = ACTIONS(109),
    [anon_sym_LT_POUNDlocal] = ACTIONS(109),
    [anon_sym_LT_POUNDmacro] = ACTIONS(109),
    [anon_sym_LT_POUNDnested] = ACTIONS(109),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(109),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(109),
    [anon_sym_LT_POUNDnt] = ACTIONS(109),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(109),
    [sym_recover] = ACTIONS(109),
    [anon_sym_LT_POUNDreturn] = ACTIONS(109),
    [anon_sym_LT_POUNDsep] = ACTIONS(109),
    [anon_sym_LT_POUNDsetting] = ACTIONS(109),
    [anon_sym_LT_POUNDstop] = ACTIONS(109),
    [anon_sym_LT_POUNDt] = ACTIONS(109),
    [anon_sym_LT_POUNDlt] = ACTIONS(109),
    [anon_sym_LT_POUNDrt] = ACTIONS(109),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_end_single] = ACTIONS(75),
    [sym_end_block] = ACTIONS(75),
    [anon_sym_LT_POUNDassign] = ACTIONS(75),
    [anon_sym_LT_POUNDattempt] = ACTIONS(75),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(75),
    [anon_sym_LT_POUNDcompress] = ACTIONS(75),
    [sym_continue] = ACTIONS(75),
    [sym_else] = ACTIONS(75),
    [anon_sym_LT_POUNDelseif] = ACTIONS(75),
    [anon_sym_LT_POUNDflush] = ACTIONS(75),
    [anon_sym_LT_POUNDftl] = ACTIONS(75),
    [anon_sym_LT_POUNDfunction] = ACTIONS(75),
    [anon_sym_LT_POUNDglobal] = ACTIONS(75),
    [anon_sym_LT_POUNDif] = ACTIONS(75),
    [anon_sym_LT_POUNDimport] = ACTIONS(75),
    [anon_sym_LT_POUNDinclude] = ACTIONS(75),
    [anon_sym_LT_POUNDitems] = ACTIONS(75),
    [anon_sym_LT_POUNDlist] = ACTIONS(75),
    [anon_sym_LT_POUNDlocal] = ACTIONS(75),
    [anon_sym_LT_POUNDmacro] = ACTIONS(75),
    [anon_sym_LT_POUNDnested] = ACTIONS(75),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(75),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(75),
    [anon_sym_LT_POUNDnt] = ACTIONS(75),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(75),
    [sym_recover] = ACTIONS(75),
    [anon_sym_LT_POUNDreturn] = ACTIONS(75),
    [anon_sym_LT_POUNDsep] = ACTIONS(75),
    [anon_sym_LT_POUNDsetting] = ACTIONS(75),
    [anon_sym_LT_POUNDstop] = ACTIONS(75),
    [anon_sym_LT_POUNDt] = ACTIONS(75),
    [anon_sym_LT_POUNDlt] = ACTIONS(75),
    [anon_sym_LT_POUNDrt] = ACTIONS(75),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym_end_single] = ACTIONS(111),
    [sym_end_block] = ACTIONS(111),
    [anon_sym_LT_POUNDassign] = ACTIONS(111),
    [anon_sym_LT_POUNDattempt] = ACTIONS(111),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(111),
    [anon_sym_LT_POUNDcompress] = ACTIONS(111),
    [sym_continue] = ACTIONS(111),
    [sym_else] = ACTIONS(111),
    [anon_sym_LT_POUNDelseif] = ACTIONS(111),
    [anon_sym_LT_POUNDflush] = ACTIONS(111),
    [anon_sym_LT_POUNDftl] = ACTIONS(111),
    [anon_sym_LT_POUNDfunction] = ACTIONS(111),
    [anon_sym_LT_POUNDglobal] = ACTIONS(111),
    [anon_sym_LT_POUNDif] = ACTIONS(111),
    [anon_sym_LT_POUNDimport] = ACTIONS(111),
    [anon_sym_LT_POUNDinclude] = ACTIONS(111),
    [anon_sym_LT_POUNDitems] = ACTIONS(111),
    [anon_sym_LT_POUNDlist] = ACTIONS(111),
    [anon_sym_LT_POUNDlocal] = ACTIONS(111),
    [anon_sym_LT_POUNDmacro] = ACTIONS(111),
    [anon_sym_LT_POUNDnested] = ACTIONS(111),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(111),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(111),
    [anon_sym_LT_POUNDnt] = ACTIONS(111),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(111),
    [sym_recover] = ACTIONS(111),
    [anon_sym_LT_POUNDreturn] = ACTIONS(111),
    [anon_sym_LT_POUNDsep] = ACTIONS(111),
    [anon_sym_LT_POUNDsetting] = ACTIONS(111),
    [anon_sym_LT_POUNDstop] = ACTIONS(111),
    [anon_sym_LT_POUNDt] = ACTIONS(111),
    [anon_sym_LT_POUNDlt] = ACTIONS(111),
    [anon_sym_LT_POUNDrt] = ACTIONS(111),
  },
  [42] = {
    [sym__definition] = STATE(65),
    [sym_directive] = STATE(65),
    [sym_middle] = STATE(74),
    [sym__end] = STATE(73),
    [sym_assign] = STATE(26),
    [sym_attempt] = STATE(26),
    [sym_autoesc] = STATE(26),
    [sym_compress] = STATE(26),
    [sym_elseif] = STATE(65),
    [sym_flush] = STATE(26),
    [sym_ftl] = STATE(26),
    [sym_function] = STATE(26),
    [sym_global] = STATE(26),
    [sym_if] = STATE(26),
    [sym_import] = STATE(26),
    [sym_include] = STATE(26),
    [sym_items] = STATE(65),
    [sym_list] = STATE(26),
    [sym_local] = STATE(26),
    [sym_macro] = STATE(26),
    [sym_nested] = STATE(65),
    [sym_noautoesc] = STATE(26),
    [sym_noparse] = STATE(26),
    [sym_nt] = STATE(26),
    [sym_outputformat] = STATE(26),
    [sym_return] = STATE(65),
    [sym_sep] = STATE(65),
    [sym_setting] = STATE(26),
    [sym_stop] = STATE(26),
    [sym_t] = STATE(26),
    [sym_lt] = STATE(26),
    [sym_rt] = STATE(26),
    [aux_sym_block_repeat1] = STATE(74),
    [sym_end_single] = ACTIONS(77),
    [sym_end_block] = ACTIONS(77),
    [anon_sym_LT_POUNDassign] = ACTIONS(113),
    [anon_sym_LT_POUNDattempt] = ACTIONS(9),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(11),
    [anon_sym_LT_POUNDcompress] = ACTIONS(13),
    [sym_continue] = ACTIONS(79),
    [sym_else] = ACTIONS(79),
    [anon_sym_LT_POUNDelseif] = ACTIONS(81),
    [anon_sym_LT_POUNDflush] = ACTIONS(15),
    [anon_sym_LT_POUNDftl] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDglobal] = ACTIONS(115),
    [anon_sym_LT_POUNDif] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [anon_sym_LT_POUNDitems] = ACTIONS(83),
    [anon_sym_LT_POUNDlist] = ACTIONS(29),
    [anon_sym_LT_POUNDlocal] = ACTIONS(117),
    [anon_sym_LT_POUNDmacro] = ACTIONS(33),
    [anon_sym_LT_POUNDnested] = ACTIONS(85),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(35),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(37),
    [anon_sym_LT_POUNDnt] = ACTIONS(39),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(41),
    [sym_recover] = ACTIONS(79),
    [anon_sym_LT_POUNDreturn] = ACTIONS(87),
    [anon_sym_LT_POUNDsep] = ACTIONS(89),
    [anon_sym_LT_POUNDsetting] = ACTIONS(43),
    [anon_sym_LT_POUNDstop] = ACTIONS(45),
    [anon_sym_LT_POUNDt] = ACTIONS(47),
    [anon_sym_LT_POUNDlt] = ACTIONS(49),
    [anon_sym_LT_POUNDrt] = ACTIONS(51),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_end_single] = ACTIONS(119),
    [sym_end_block] = ACTIONS(119),
    [anon_sym_LT_POUNDassign] = ACTIONS(119),
    [anon_sym_LT_POUNDattempt] = ACTIONS(119),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(119),
    [anon_sym_LT_POUNDcompress] = ACTIONS(119),
    [sym_continue] = ACTIONS(119),
    [sym_else] = ACTIONS(119),
    [anon_sym_LT_POUNDelseif] = ACTIONS(119),
    [anon_sym_LT_POUNDflush] = ACTIONS(119),
    [anon_sym_LT_POUNDftl] = ACTIONS(119),
    [anon_sym_LT_POUNDfunction] = ACTIONS(119),
    [anon_sym_LT_POUNDglobal] = ACTIONS(119),
    [anon_sym_LT_POUNDif] = ACTIONS(119),
    [anon_sym_LT_POUNDimport] = ACTIONS(119),
    [anon_sym_LT_POUNDinclude] = ACTIONS(119),
    [anon_sym_LT_POUNDitems] = ACTIONS(119),
    [anon_sym_LT_POUNDlist] = ACTIONS(119),
    [anon_sym_LT_POUNDlocal] = ACTIONS(119),
    [anon_sym_LT_POUNDmacro] = ACTIONS(119),
    [anon_sym_LT_POUNDnested] = ACTIONS(119),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(119),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(119),
    [anon_sym_LT_POUNDnt] = ACTIONS(119),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(119),
    [sym_recover] = ACTIONS(119),
    [anon_sym_LT_POUNDreturn] = ACTIONS(119),
    [anon_sym_LT_POUNDsep] = ACTIONS(119),
    [anon_sym_LT_POUNDsetting] = ACTIONS(119),
    [anon_sym_LT_POUNDstop] = ACTIONS(119),
    [anon_sym_LT_POUNDt] = ACTIONS(119),
    [anon_sym_LT_POUNDlt] = ACTIONS(119),
    [anon_sym_LT_POUNDrt] = ACTIONS(119),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [sym_end_single] = ACTIONS(121),
    [sym_end_block] = ACTIONS(121),
    [anon_sym_LT_POUNDassign] = ACTIONS(121),
    [anon_sym_LT_POUNDattempt] = ACTIONS(121),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(121),
    [anon_sym_LT_POUNDcompress] = ACTIONS(121),
    [sym_continue] = ACTIONS(121),
    [sym_else] = ACTIONS(121),
    [anon_sym_LT_POUNDelseif] = ACTIONS(121),
    [anon_sym_LT_POUNDflush] = ACTIONS(121),
    [anon_sym_LT_POUNDftl] = ACTIONS(121),
    [anon_sym_LT_POUNDfunction] = ACTIONS(121),
    [anon_sym_LT_POUNDglobal] = ACTIONS(121),
    [anon_sym_LT_POUNDif] = ACTIONS(121),
    [anon_sym_LT_POUNDimport] = ACTIONS(121),
    [anon_sym_LT_POUNDinclude] = ACTIONS(121),
    [anon_sym_LT_POUNDitems] = ACTIONS(121),
    [anon_sym_LT_POUNDlist] = ACTIONS(121),
    [anon_sym_LT_POUNDlocal] = ACTIONS(121),
    [anon_sym_LT_POUNDmacro] = ACTIONS(121),
    [anon_sym_LT_POUNDnested] = ACTIONS(121),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(121),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(121),
    [anon_sym_LT_POUNDnt] = ACTIONS(121),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(121),
    [sym_recover] = ACTIONS(121),
    [anon_sym_LT_POUNDreturn] = ACTIONS(121),
    [anon_sym_LT_POUNDsep] = ACTIONS(121),
    [anon_sym_LT_POUNDsetting] = ACTIONS(121),
    [anon_sym_LT_POUNDstop] = ACTIONS(121),
    [anon_sym_LT_POUNDt] = ACTIONS(121),
    [anon_sym_LT_POUNDlt] = ACTIONS(121),
    [anon_sym_LT_POUNDrt] = ACTIONS(121),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_end_single] = ACTIONS(123),
    [sym_end_block] = ACTIONS(123),
    [anon_sym_LT_POUNDassign] = ACTIONS(123),
    [anon_sym_LT_POUNDattempt] = ACTIONS(123),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(123),
    [anon_sym_LT_POUNDcompress] = ACTIONS(123),
    [sym_continue] = ACTIONS(123),
    [sym_else] = ACTIONS(123),
    [anon_sym_LT_POUNDelseif] = ACTIONS(123),
    [anon_sym_LT_POUNDflush] = ACTIONS(123),
    [anon_sym_LT_POUNDftl] = ACTIONS(123),
    [anon_sym_LT_POUNDfunction] = ACTIONS(123),
    [anon_sym_LT_POUNDglobal] = ACTIONS(123),
    [anon_sym_LT_POUNDif] = ACTIONS(123),
    [anon_sym_LT_POUNDimport] = ACTIONS(123),
    [anon_sym_LT_POUNDinclude] = ACTIONS(123),
    [anon_sym_LT_POUNDitems] = ACTIONS(123),
    [anon_sym_LT_POUNDlist] = ACTIONS(123),
    [anon_sym_LT_POUNDlocal] = ACTIONS(123),
    [anon_sym_LT_POUNDmacro] = ACTIONS(123),
    [anon_sym_LT_POUNDnested] = ACTIONS(123),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(123),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(123),
    [anon_sym_LT_POUNDnt] = ACTIONS(123),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(123),
    [sym_recover] = ACTIONS(123),
    [anon_sym_LT_POUNDreturn] = ACTIONS(123),
    [anon_sym_LT_POUNDsep] = ACTIONS(123),
    [anon_sym_LT_POUNDsetting] = ACTIONS(123),
    [anon_sym_LT_POUNDstop] = ACTIONS(123),
    [anon_sym_LT_POUNDt] = ACTIONS(123),
    [anon_sym_LT_POUNDlt] = ACTIONS(123),
    [anon_sym_LT_POUNDrt] = ACTIONS(123),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [sym_end_single] = ACTIONS(125),
    [sym_end_block] = ACTIONS(125),
    [anon_sym_LT_POUNDassign] = ACTIONS(125),
    [anon_sym_LT_POUNDattempt] = ACTIONS(125),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(125),
    [anon_sym_LT_POUNDcompress] = ACTIONS(125),
    [sym_continue] = ACTIONS(125),
    [sym_else] = ACTIONS(125),
    [anon_sym_LT_POUNDelseif] = ACTIONS(125),
    [anon_sym_LT_POUNDflush] = ACTIONS(125),
    [anon_sym_LT_POUNDftl] = ACTIONS(125),
    [anon_sym_LT_POUNDfunction] = ACTIONS(125),
    [anon_sym_LT_POUNDglobal] = ACTIONS(125),
    [anon_sym_LT_POUNDif] = ACTIONS(125),
    [anon_sym_LT_POUNDimport] = ACTIONS(125),
    [anon_sym_LT_POUNDinclude] = ACTIONS(125),
    [anon_sym_LT_POUNDitems] = ACTIONS(125),
    [anon_sym_LT_POUNDlist] = ACTIONS(125),
    [anon_sym_LT_POUNDlocal] = ACTIONS(125),
    [anon_sym_LT_POUNDmacro] = ACTIONS(125),
    [anon_sym_LT_POUNDnested] = ACTIONS(125),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(125),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(125),
    [anon_sym_LT_POUNDnt] = ACTIONS(125),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(125),
    [sym_recover] = ACTIONS(125),
    [anon_sym_LT_POUNDreturn] = ACTIONS(125),
    [anon_sym_LT_POUNDsep] = ACTIONS(125),
    [anon_sym_LT_POUNDsetting] = ACTIONS(125),
    [anon_sym_LT_POUNDstop] = ACTIONS(125),
    [anon_sym_LT_POUNDt] = ACTIONS(125),
    [anon_sym_LT_POUNDlt] = ACTIONS(125),
    [anon_sym_LT_POUNDrt] = ACTIONS(125),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_end_single] = ACTIONS(127),
    [sym_end_block] = ACTIONS(127),
    [anon_sym_LT_POUNDassign] = ACTIONS(127),
    [anon_sym_LT_POUNDattempt] = ACTIONS(127),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(127),
    [anon_sym_LT_POUNDcompress] = ACTIONS(127),
    [sym_continue] = ACTIONS(127),
    [sym_else] = ACTIONS(127),
    [anon_sym_LT_POUNDelseif] = ACTIONS(127),
    [anon_sym_LT_POUNDflush] = ACTIONS(127),
    [anon_sym_LT_POUNDftl] = ACTIONS(127),
    [anon_sym_LT_POUNDfunction] = ACTIONS(127),
    [anon_sym_LT_POUNDglobal] = ACTIONS(127),
    [anon_sym_LT_POUNDif] = ACTIONS(127),
    [anon_sym_LT_POUNDimport] = ACTIONS(127),
    [anon_sym_LT_POUNDinclude] = ACTIONS(127),
    [anon_sym_LT_POUNDitems] = ACTIONS(127),
    [anon_sym_LT_POUNDlist] = ACTIONS(127),
    [anon_sym_LT_POUNDlocal] = ACTIONS(127),
    [anon_sym_LT_POUNDmacro] = ACTIONS(127),
    [anon_sym_LT_POUNDnested] = ACTIONS(127),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(127),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(127),
    [anon_sym_LT_POUNDnt] = ACTIONS(127),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(127),
    [sym_recover] = ACTIONS(127),
    [anon_sym_LT_POUNDreturn] = ACTIONS(127),
    [anon_sym_LT_POUNDsep] = ACTIONS(127),
    [anon_sym_LT_POUNDsetting] = ACTIONS(127),
    [anon_sym_LT_POUNDstop] = ACTIONS(127),
    [anon_sym_LT_POUNDt] = ACTIONS(127),
    [anon_sym_LT_POUNDlt] = ACTIONS(127),
    [anon_sym_LT_POUNDrt] = ACTIONS(127),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_end_single] = ACTIONS(129),
    [sym_end_block] = ACTIONS(129),
    [anon_sym_LT_POUNDassign] = ACTIONS(129),
    [anon_sym_LT_POUNDattempt] = ACTIONS(129),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(129),
    [anon_sym_LT_POUNDcompress] = ACTIONS(129),
    [sym_continue] = ACTIONS(129),
    [sym_else] = ACTIONS(129),
    [anon_sym_LT_POUNDelseif] = ACTIONS(129),
    [anon_sym_LT_POUNDflush] = ACTIONS(129),
    [anon_sym_LT_POUNDftl] = ACTIONS(129),
    [anon_sym_LT_POUNDfunction] = ACTIONS(129),
    [anon_sym_LT_POUNDglobal] = ACTIONS(129),
    [anon_sym_LT_POUNDif] = ACTIONS(129),
    [anon_sym_LT_POUNDimport] = ACTIONS(129),
    [anon_sym_LT_POUNDinclude] = ACTIONS(129),
    [anon_sym_LT_POUNDitems] = ACTIONS(129),
    [anon_sym_LT_POUNDlist] = ACTIONS(129),
    [anon_sym_LT_POUNDlocal] = ACTIONS(129),
    [anon_sym_LT_POUNDmacro] = ACTIONS(129),
    [anon_sym_LT_POUNDnested] = ACTIONS(129),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(129),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(129),
    [anon_sym_LT_POUNDnt] = ACTIONS(129),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(129),
    [sym_recover] = ACTIONS(129),
    [anon_sym_LT_POUNDreturn] = ACTIONS(129),
    [anon_sym_LT_POUNDsep] = ACTIONS(129),
    [anon_sym_LT_POUNDsetting] = ACTIONS(129),
    [anon_sym_LT_POUNDstop] = ACTIONS(129),
    [anon_sym_LT_POUNDt] = ACTIONS(129),
    [anon_sym_LT_POUNDlt] = ACTIONS(129),
    [anon_sym_LT_POUNDrt] = ACTIONS(129),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym_end_single] = ACTIONS(131),
    [sym_end_block] = ACTIONS(131),
    [anon_sym_LT_POUNDassign] = ACTIONS(131),
    [anon_sym_LT_POUNDattempt] = ACTIONS(131),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(131),
    [anon_sym_LT_POUNDcompress] = ACTIONS(131),
    [sym_continue] = ACTIONS(131),
    [sym_else] = ACTIONS(131),
    [anon_sym_LT_POUNDelseif] = ACTIONS(131),
    [anon_sym_LT_POUNDflush] = ACTIONS(131),
    [anon_sym_LT_POUNDftl] = ACTIONS(131),
    [anon_sym_LT_POUNDfunction] = ACTIONS(131),
    [anon_sym_LT_POUNDglobal] = ACTIONS(131),
    [anon_sym_LT_POUNDif] = ACTIONS(131),
    [anon_sym_LT_POUNDimport] = ACTIONS(131),
    [anon_sym_LT_POUNDinclude] = ACTIONS(131),
    [anon_sym_LT_POUNDitems] = ACTIONS(131),
    [anon_sym_LT_POUNDlist] = ACTIONS(131),
    [anon_sym_LT_POUNDlocal] = ACTIONS(131),
    [anon_sym_LT_POUNDmacro] = ACTIONS(131),
    [anon_sym_LT_POUNDnested] = ACTIONS(131),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(131),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(131),
    [anon_sym_LT_POUNDnt] = ACTIONS(131),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(131),
    [sym_recover] = ACTIONS(131),
    [anon_sym_LT_POUNDreturn] = ACTIONS(131),
    [anon_sym_LT_POUNDsep] = ACTIONS(131),
    [anon_sym_LT_POUNDsetting] = ACTIONS(131),
    [anon_sym_LT_POUNDstop] = ACTIONS(131),
    [anon_sym_LT_POUNDt] = ACTIONS(131),
    [anon_sym_LT_POUNDlt] = ACTIONS(131),
    [anon_sym_LT_POUNDrt] = ACTIONS(131),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [sym_end_single] = ACTIONS(133),
    [sym_end_block] = ACTIONS(133),
    [anon_sym_LT_POUNDassign] = ACTIONS(133),
    [anon_sym_LT_POUNDattempt] = ACTIONS(133),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(133),
    [anon_sym_LT_POUNDcompress] = ACTIONS(133),
    [sym_continue] = ACTIONS(133),
    [sym_else] = ACTIONS(133),
    [anon_sym_LT_POUNDelseif] = ACTIONS(133),
    [anon_sym_LT_POUNDflush] = ACTIONS(133),
    [anon_sym_LT_POUNDftl] = ACTIONS(133),
    [anon_sym_LT_POUNDfunction] = ACTIONS(133),
    [anon_sym_LT_POUNDglobal] = ACTIONS(133),
    [anon_sym_LT_POUNDif] = ACTIONS(133),
    [anon_sym_LT_POUNDimport] = ACTIONS(133),
    [anon_sym_LT_POUNDinclude] = ACTIONS(133),
    [anon_sym_LT_POUNDitems] = ACTIONS(133),
    [anon_sym_LT_POUNDlist] = ACTIONS(133),
    [anon_sym_LT_POUNDlocal] = ACTIONS(133),
    [anon_sym_LT_POUNDmacro] = ACTIONS(133),
    [anon_sym_LT_POUNDnested] = ACTIONS(133),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(133),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(133),
    [anon_sym_LT_POUNDnt] = ACTIONS(133),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(133),
    [sym_recover] = ACTIONS(133),
    [anon_sym_LT_POUNDreturn] = ACTIONS(133),
    [anon_sym_LT_POUNDsep] = ACTIONS(133),
    [anon_sym_LT_POUNDsetting] = ACTIONS(133),
    [anon_sym_LT_POUNDstop] = ACTIONS(133),
    [anon_sym_LT_POUNDt] = ACTIONS(133),
    [anon_sym_LT_POUNDlt] = ACTIONS(133),
    [anon_sym_LT_POUNDrt] = ACTIONS(133),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [sym_end_single] = ACTIONS(135),
    [sym_end_block] = ACTIONS(135),
    [anon_sym_LT_POUNDassign] = ACTIONS(135),
    [anon_sym_LT_POUNDattempt] = ACTIONS(135),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(135),
    [anon_sym_LT_POUNDcompress] = ACTIONS(135),
    [sym_continue] = ACTIONS(135),
    [sym_else] = ACTIONS(135),
    [anon_sym_LT_POUNDelseif] = ACTIONS(135),
    [anon_sym_LT_POUNDflush] = ACTIONS(135),
    [anon_sym_LT_POUNDftl] = ACTIONS(135),
    [anon_sym_LT_POUNDfunction] = ACTIONS(135),
    [anon_sym_LT_POUNDglobal] = ACTIONS(135),
    [anon_sym_LT_POUNDif] = ACTIONS(135),
    [anon_sym_LT_POUNDimport] = ACTIONS(135),
    [anon_sym_LT_POUNDinclude] = ACTIONS(135),
    [anon_sym_LT_POUNDitems] = ACTIONS(135),
    [anon_sym_LT_POUNDlist] = ACTIONS(135),
    [anon_sym_LT_POUNDlocal] = ACTIONS(135),
    [anon_sym_LT_POUNDmacro] = ACTIONS(135),
    [anon_sym_LT_POUNDnested] = ACTIONS(135),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(135),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(135),
    [anon_sym_LT_POUNDnt] = ACTIONS(135),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(135),
    [sym_recover] = ACTIONS(135),
    [anon_sym_LT_POUNDreturn] = ACTIONS(135),
    [anon_sym_LT_POUNDsep] = ACTIONS(135),
    [anon_sym_LT_POUNDsetting] = ACTIONS(135),
    [anon_sym_LT_POUNDstop] = ACTIONS(135),
    [anon_sym_LT_POUNDt] = ACTIONS(135),
    [anon_sym_LT_POUNDlt] = ACTIONS(135),
    [anon_sym_LT_POUNDrt] = ACTIONS(135),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [sym_end_single] = ACTIONS(137),
    [sym_end_block] = ACTIONS(137),
    [anon_sym_LT_POUNDassign] = ACTIONS(137),
    [anon_sym_LT_POUNDattempt] = ACTIONS(137),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(137),
    [anon_sym_LT_POUNDcompress] = ACTIONS(137),
    [sym_continue] = ACTIONS(137),
    [sym_else] = ACTIONS(137),
    [anon_sym_LT_POUNDelseif] = ACTIONS(137),
    [anon_sym_LT_POUNDflush] = ACTIONS(137),
    [anon_sym_LT_POUNDftl] = ACTIONS(137),
    [anon_sym_LT_POUNDfunction] = ACTIONS(137),
    [anon_sym_LT_POUNDglobal] = ACTIONS(137),
    [anon_sym_LT_POUNDif] = ACTIONS(137),
    [anon_sym_LT_POUNDimport] = ACTIONS(137),
    [anon_sym_LT_POUNDinclude] = ACTIONS(137),
    [anon_sym_LT_POUNDitems] = ACTIONS(137),
    [anon_sym_LT_POUNDlist] = ACTIONS(137),
    [anon_sym_LT_POUNDlocal] = ACTIONS(137),
    [anon_sym_LT_POUNDmacro] = ACTIONS(137),
    [anon_sym_LT_POUNDnested] = ACTIONS(137),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(137),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(137),
    [anon_sym_LT_POUNDnt] = ACTIONS(137),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(137),
    [sym_recover] = ACTIONS(137),
    [anon_sym_LT_POUNDreturn] = ACTIONS(137),
    [anon_sym_LT_POUNDsep] = ACTIONS(137),
    [anon_sym_LT_POUNDsetting] = ACTIONS(137),
    [anon_sym_LT_POUNDstop] = ACTIONS(137),
    [anon_sym_LT_POUNDt] = ACTIONS(137),
    [anon_sym_LT_POUNDlt] = ACTIONS(137),
    [anon_sym_LT_POUNDrt] = ACTIONS(137),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_end_single] = ACTIONS(139),
    [sym_end_block] = ACTIONS(139),
    [anon_sym_LT_POUNDassign] = ACTIONS(139),
    [anon_sym_LT_POUNDattempt] = ACTIONS(139),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(139),
    [anon_sym_LT_POUNDcompress] = ACTIONS(139),
    [sym_continue] = ACTIONS(139),
    [sym_else] = ACTIONS(139),
    [anon_sym_LT_POUNDelseif] = ACTIONS(139),
    [anon_sym_LT_POUNDflush] = ACTIONS(139),
    [anon_sym_LT_POUNDftl] = ACTIONS(139),
    [anon_sym_LT_POUNDfunction] = ACTIONS(139),
    [anon_sym_LT_POUNDglobal] = ACTIONS(139),
    [anon_sym_LT_POUNDif] = ACTIONS(139),
    [anon_sym_LT_POUNDimport] = ACTIONS(139),
    [anon_sym_LT_POUNDinclude] = ACTIONS(139),
    [anon_sym_LT_POUNDitems] = ACTIONS(139),
    [anon_sym_LT_POUNDlist] = ACTIONS(139),
    [anon_sym_LT_POUNDlocal] = ACTIONS(139),
    [anon_sym_LT_POUNDmacro] = ACTIONS(139),
    [anon_sym_LT_POUNDnested] = ACTIONS(139),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(139),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(139),
    [anon_sym_LT_POUNDnt] = ACTIONS(139),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(139),
    [sym_recover] = ACTIONS(139),
    [anon_sym_LT_POUNDreturn] = ACTIONS(139),
    [anon_sym_LT_POUNDsep] = ACTIONS(139),
    [anon_sym_LT_POUNDsetting] = ACTIONS(139),
    [anon_sym_LT_POUNDstop] = ACTIONS(139),
    [anon_sym_LT_POUNDt] = ACTIONS(139),
    [anon_sym_LT_POUNDlt] = ACTIONS(139),
    [anon_sym_LT_POUNDrt] = ACTIONS(139),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [sym_end_single] = ACTIONS(141),
    [sym_end_block] = ACTIONS(141),
    [anon_sym_LT_POUNDassign] = ACTIONS(141),
    [anon_sym_LT_POUNDattempt] = ACTIONS(141),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(141),
    [anon_sym_LT_POUNDcompress] = ACTIONS(141),
    [sym_continue] = ACTIONS(141),
    [sym_else] = ACTIONS(141),
    [anon_sym_LT_POUNDelseif] = ACTIONS(141),
    [anon_sym_LT_POUNDflush] = ACTIONS(141),
    [anon_sym_LT_POUNDftl] = ACTIONS(141),
    [anon_sym_LT_POUNDfunction] = ACTIONS(141),
    [anon_sym_LT_POUNDglobal] = ACTIONS(141),
    [anon_sym_LT_POUNDif] = ACTIONS(141),
    [anon_sym_LT_POUNDimport] = ACTIONS(141),
    [anon_sym_LT_POUNDinclude] = ACTIONS(141),
    [anon_sym_LT_POUNDitems] = ACTIONS(141),
    [anon_sym_LT_POUNDlist] = ACTIONS(141),
    [anon_sym_LT_POUNDlocal] = ACTIONS(141),
    [anon_sym_LT_POUNDmacro] = ACTIONS(141),
    [anon_sym_LT_POUNDnested] = ACTIONS(141),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(141),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(141),
    [anon_sym_LT_POUNDnt] = ACTIONS(141),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(141),
    [sym_recover] = ACTIONS(141),
    [anon_sym_LT_POUNDreturn] = ACTIONS(141),
    [anon_sym_LT_POUNDsep] = ACTIONS(141),
    [anon_sym_LT_POUNDsetting] = ACTIONS(141),
    [anon_sym_LT_POUNDstop] = ACTIONS(141),
    [anon_sym_LT_POUNDt] = ACTIONS(141),
    [anon_sym_LT_POUNDlt] = ACTIONS(141),
    [anon_sym_LT_POUNDrt] = ACTIONS(141),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [sym_end_single] = ACTIONS(143),
    [sym_end_block] = ACTIONS(143),
    [anon_sym_LT_POUNDassign] = ACTIONS(143),
    [anon_sym_LT_POUNDattempt] = ACTIONS(143),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(143),
    [anon_sym_LT_POUNDcompress] = ACTIONS(143),
    [sym_continue] = ACTIONS(143),
    [sym_else] = ACTIONS(143),
    [anon_sym_LT_POUNDelseif] = ACTIONS(143),
    [anon_sym_LT_POUNDflush] = ACTIONS(143),
    [anon_sym_LT_POUNDftl] = ACTIONS(143),
    [anon_sym_LT_POUNDfunction] = ACTIONS(143),
    [anon_sym_LT_POUNDglobal] = ACTIONS(143),
    [anon_sym_LT_POUNDif] = ACTIONS(143),
    [anon_sym_LT_POUNDimport] = ACTIONS(143),
    [anon_sym_LT_POUNDinclude] = ACTIONS(143),
    [anon_sym_LT_POUNDitems] = ACTIONS(143),
    [anon_sym_LT_POUNDlist] = ACTIONS(143),
    [anon_sym_LT_POUNDlocal] = ACTIONS(143),
    [anon_sym_LT_POUNDmacro] = ACTIONS(143),
    [anon_sym_LT_POUNDnested] = ACTIONS(143),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(143),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(143),
    [anon_sym_LT_POUNDnt] = ACTIONS(143),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(143),
    [sym_recover] = ACTIONS(143),
    [anon_sym_LT_POUNDreturn] = ACTIONS(143),
    [anon_sym_LT_POUNDsep] = ACTIONS(143),
    [anon_sym_LT_POUNDsetting] = ACTIONS(143),
    [anon_sym_LT_POUNDstop] = ACTIONS(143),
    [anon_sym_LT_POUNDt] = ACTIONS(143),
    [anon_sym_LT_POUNDlt] = ACTIONS(143),
    [anon_sym_LT_POUNDrt] = ACTIONS(143),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [sym_end_single] = ACTIONS(145),
    [sym_end_block] = ACTIONS(145),
    [anon_sym_LT_POUNDassign] = ACTIONS(145),
    [anon_sym_LT_POUNDattempt] = ACTIONS(145),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(145),
    [anon_sym_LT_POUNDcompress] = ACTIONS(145),
    [sym_continue] = ACTIONS(145),
    [sym_else] = ACTIONS(145),
    [anon_sym_LT_POUNDelseif] = ACTIONS(145),
    [anon_sym_LT_POUNDflush] = ACTIONS(145),
    [anon_sym_LT_POUNDftl] = ACTIONS(145),
    [anon_sym_LT_POUNDfunction] = ACTIONS(145),
    [anon_sym_LT_POUNDglobal] = ACTIONS(145),
    [anon_sym_LT_POUNDif] = ACTIONS(145),
    [anon_sym_LT_POUNDimport] = ACTIONS(145),
    [anon_sym_LT_POUNDinclude] = ACTIONS(145),
    [anon_sym_LT_POUNDitems] = ACTIONS(145),
    [anon_sym_LT_POUNDlist] = ACTIONS(145),
    [anon_sym_LT_POUNDlocal] = ACTIONS(145),
    [anon_sym_LT_POUNDmacro] = ACTIONS(145),
    [anon_sym_LT_POUNDnested] = ACTIONS(145),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(145),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(145),
    [anon_sym_LT_POUNDnt] = ACTIONS(145),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(145),
    [sym_recover] = ACTIONS(145),
    [anon_sym_LT_POUNDreturn] = ACTIONS(145),
    [anon_sym_LT_POUNDsep] = ACTIONS(145),
    [anon_sym_LT_POUNDsetting] = ACTIONS(145),
    [anon_sym_LT_POUNDstop] = ACTIONS(145),
    [anon_sym_LT_POUNDt] = ACTIONS(145),
    [anon_sym_LT_POUNDlt] = ACTIONS(145),
    [anon_sym_LT_POUNDrt] = ACTIONS(145),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym_end_single] = ACTIONS(147),
    [sym_end_block] = ACTIONS(147),
    [anon_sym_LT_POUNDassign] = ACTIONS(147),
    [anon_sym_LT_POUNDattempt] = ACTIONS(147),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(147),
    [anon_sym_LT_POUNDcompress] = ACTIONS(147),
    [sym_continue] = ACTIONS(147),
    [sym_else] = ACTIONS(147),
    [anon_sym_LT_POUNDelseif] = ACTIONS(147),
    [anon_sym_LT_POUNDflush] = ACTIONS(147),
    [anon_sym_LT_POUNDftl] = ACTIONS(147),
    [anon_sym_LT_POUNDfunction] = ACTIONS(147),
    [anon_sym_LT_POUNDglobal] = ACTIONS(147),
    [anon_sym_LT_POUNDif] = ACTIONS(147),
    [anon_sym_LT_POUNDimport] = ACTIONS(147),
    [anon_sym_LT_POUNDinclude] = ACTIONS(147),
    [anon_sym_LT_POUNDitems] = ACTIONS(147),
    [anon_sym_LT_POUNDlist] = ACTIONS(147),
    [anon_sym_LT_POUNDlocal] = ACTIONS(147),
    [anon_sym_LT_POUNDmacro] = ACTIONS(147),
    [anon_sym_LT_POUNDnested] = ACTIONS(147),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(147),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(147),
    [anon_sym_LT_POUNDnt] = ACTIONS(147),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(147),
    [sym_recover] = ACTIONS(147),
    [anon_sym_LT_POUNDreturn] = ACTIONS(147),
    [anon_sym_LT_POUNDsep] = ACTIONS(147),
    [anon_sym_LT_POUNDsetting] = ACTIONS(147),
    [anon_sym_LT_POUNDstop] = ACTIONS(147),
    [anon_sym_LT_POUNDt] = ACTIONS(147),
    [anon_sym_LT_POUNDlt] = ACTIONS(147),
    [anon_sym_LT_POUNDrt] = ACTIONS(147),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [sym_end_single] = ACTIONS(149),
    [sym_end_block] = ACTIONS(149),
    [anon_sym_LT_POUNDassign] = ACTIONS(149),
    [anon_sym_LT_POUNDattempt] = ACTIONS(149),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(149),
    [anon_sym_LT_POUNDcompress] = ACTIONS(149),
    [sym_continue] = ACTIONS(149),
    [sym_else] = ACTIONS(149),
    [anon_sym_LT_POUNDelseif] = ACTIONS(149),
    [anon_sym_LT_POUNDflush] = ACTIONS(149),
    [anon_sym_LT_POUNDftl] = ACTIONS(149),
    [anon_sym_LT_POUNDfunction] = ACTIONS(149),
    [anon_sym_LT_POUNDglobal] = ACTIONS(149),
    [anon_sym_LT_POUNDif] = ACTIONS(149),
    [anon_sym_LT_POUNDimport] = ACTIONS(149),
    [anon_sym_LT_POUNDinclude] = ACTIONS(149),
    [anon_sym_LT_POUNDitems] = ACTIONS(149),
    [anon_sym_LT_POUNDlist] = ACTIONS(149),
    [anon_sym_LT_POUNDlocal] = ACTIONS(149),
    [anon_sym_LT_POUNDmacro] = ACTIONS(149),
    [anon_sym_LT_POUNDnested] = ACTIONS(149),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(149),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(149),
    [anon_sym_LT_POUNDnt] = ACTIONS(149),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(149),
    [sym_recover] = ACTIONS(149),
    [anon_sym_LT_POUNDreturn] = ACTIONS(149),
    [anon_sym_LT_POUNDsep] = ACTIONS(149),
    [anon_sym_LT_POUNDsetting] = ACTIONS(149),
    [anon_sym_LT_POUNDstop] = ACTIONS(149),
    [anon_sym_LT_POUNDt] = ACTIONS(149),
    [anon_sym_LT_POUNDlt] = ACTIONS(149),
    [anon_sym_LT_POUNDrt] = ACTIONS(149),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [sym_end_single] = ACTIONS(151),
    [sym_end_block] = ACTIONS(151),
    [anon_sym_LT_POUNDassign] = ACTIONS(151),
    [anon_sym_LT_POUNDattempt] = ACTIONS(151),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(151),
    [anon_sym_LT_POUNDcompress] = ACTIONS(151),
    [sym_continue] = ACTIONS(151),
    [sym_else] = ACTIONS(151),
    [anon_sym_LT_POUNDelseif] = ACTIONS(151),
    [anon_sym_LT_POUNDflush] = ACTIONS(151),
    [anon_sym_LT_POUNDftl] = ACTIONS(151),
    [anon_sym_LT_POUNDfunction] = ACTIONS(151),
    [anon_sym_LT_POUNDglobal] = ACTIONS(151),
    [anon_sym_LT_POUNDif] = ACTIONS(151),
    [anon_sym_LT_POUNDimport] = ACTIONS(151),
    [anon_sym_LT_POUNDinclude] = ACTIONS(151),
    [anon_sym_LT_POUNDitems] = ACTIONS(151),
    [anon_sym_LT_POUNDlist] = ACTIONS(151),
    [anon_sym_LT_POUNDlocal] = ACTIONS(151),
    [anon_sym_LT_POUNDmacro] = ACTIONS(151),
    [anon_sym_LT_POUNDnested] = ACTIONS(151),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(151),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(151),
    [anon_sym_LT_POUNDnt] = ACTIONS(151),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(151),
    [sym_recover] = ACTIONS(151),
    [anon_sym_LT_POUNDreturn] = ACTIONS(151),
    [anon_sym_LT_POUNDsep] = ACTIONS(151),
    [anon_sym_LT_POUNDsetting] = ACTIONS(151),
    [anon_sym_LT_POUNDstop] = ACTIONS(151),
    [anon_sym_LT_POUNDt] = ACTIONS(151),
    [anon_sym_LT_POUNDlt] = ACTIONS(151),
    [anon_sym_LT_POUNDrt] = ACTIONS(151),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [sym_end_single] = ACTIONS(153),
    [sym_end_block] = ACTIONS(153),
    [anon_sym_LT_POUNDassign] = ACTIONS(153),
    [anon_sym_LT_POUNDattempt] = ACTIONS(153),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(153),
    [anon_sym_LT_POUNDcompress] = ACTIONS(153),
    [sym_continue] = ACTIONS(153),
    [sym_else] = ACTIONS(153),
    [anon_sym_LT_POUNDelseif] = ACTIONS(153),
    [anon_sym_LT_POUNDflush] = ACTIONS(153),
    [anon_sym_LT_POUNDftl] = ACTIONS(153),
    [anon_sym_LT_POUNDfunction] = ACTIONS(153),
    [anon_sym_LT_POUNDglobal] = ACTIONS(153),
    [anon_sym_LT_POUNDif] = ACTIONS(153),
    [anon_sym_LT_POUNDimport] = ACTIONS(153),
    [anon_sym_LT_POUNDinclude] = ACTIONS(153),
    [anon_sym_LT_POUNDitems] = ACTIONS(153),
    [anon_sym_LT_POUNDlist] = ACTIONS(153),
    [anon_sym_LT_POUNDlocal] = ACTIONS(153),
    [anon_sym_LT_POUNDmacro] = ACTIONS(153),
    [anon_sym_LT_POUNDnested] = ACTIONS(153),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(153),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(153),
    [anon_sym_LT_POUNDnt] = ACTIONS(153),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(153),
    [sym_recover] = ACTIONS(153),
    [anon_sym_LT_POUNDreturn] = ACTIONS(153),
    [anon_sym_LT_POUNDsep] = ACTIONS(153),
    [anon_sym_LT_POUNDsetting] = ACTIONS(153),
    [anon_sym_LT_POUNDstop] = ACTIONS(153),
    [anon_sym_LT_POUNDt] = ACTIONS(153),
    [anon_sym_LT_POUNDlt] = ACTIONS(153),
    [anon_sym_LT_POUNDrt] = ACTIONS(153),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [sym_end_single] = ACTIONS(155),
    [sym_end_block] = ACTIONS(155),
    [anon_sym_LT_POUNDassign] = ACTIONS(155),
    [anon_sym_LT_POUNDattempt] = ACTIONS(155),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(155),
    [anon_sym_LT_POUNDcompress] = ACTIONS(155),
    [sym_continue] = ACTIONS(155),
    [sym_else] = ACTIONS(155),
    [anon_sym_LT_POUNDelseif] = ACTIONS(155),
    [anon_sym_LT_POUNDflush] = ACTIONS(155),
    [anon_sym_LT_POUNDftl] = ACTIONS(155),
    [anon_sym_LT_POUNDfunction] = ACTIONS(155),
    [anon_sym_LT_POUNDglobal] = ACTIONS(155),
    [anon_sym_LT_POUNDif] = ACTIONS(155),
    [anon_sym_LT_POUNDimport] = ACTIONS(155),
    [anon_sym_LT_POUNDinclude] = ACTIONS(155),
    [anon_sym_LT_POUNDitems] = ACTIONS(155),
    [anon_sym_LT_POUNDlist] = ACTIONS(155),
    [anon_sym_LT_POUNDlocal] = ACTIONS(155),
    [anon_sym_LT_POUNDmacro] = ACTIONS(155),
    [anon_sym_LT_POUNDnested] = ACTIONS(155),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(155),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(155),
    [anon_sym_LT_POUNDnt] = ACTIONS(155),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(155),
    [sym_recover] = ACTIONS(155),
    [anon_sym_LT_POUNDreturn] = ACTIONS(155),
    [anon_sym_LT_POUNDsep] = ACTIONS(155),
    [anon_sym_LT_POUNDsetting] = ACTIONS(155),
    [anon_sym_LT_POUNDstop] = ACTIONS(155),
    [anon_sym_LT_POUNDt] = ACTIONS(155),
    [anon_sym_LT_POUNDlt] = ACTIONS(155),
    [anon_sym_LT_POUNDrt] = ACTIONS(155),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [sym_end_single] = ACTIONS(157),
    [sym_end_block] = ACTIONS(157),
    [anon_sym_LT_POUNDassign] = ACTIONS(157),
    [anon_sym_LT_POUNDattempt] = ACTIONS(157),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(157),
    [anon_sym_LT_POUNDcompress] = ACTIONS(157),
    [sym_continue] = ACTIONS(157),
    [sym_else] = ACTIONS(157),
    [anon_sym_LT_POUNDelseif] = ACTIONS(157),
    [anon_sym_LT_POUNDflush] = ACTIONS(157),
    [anon_sym_LT_POUNDftl] = ACTIONS(157),
    [anon_sym_LT_POUNDfunction] = ACTIONS(157),
    [anon_sym_LT_POUNDglobal] = ACTIONS(157),
    [anon_sym_LT_POUNDif] = ACTIONS(157),
    [anon_sym_LT_POUNDimport] = ACTIONS(157),
    [anon_sym_LT_POUNDinclude] = ACTIONS(157),
    [anon_sym_LT_POUNDitems] = ACTIONS(157),
    [anon_sym_LT_POUNDlist] = ACTIONS(157),
    [anon_sym_LT_POUNDlocal] = ACTIONS(157),
    [anon_sym_LT_POUNDmacro] = ACTIONS(157),
    [anon_sym_LT_POUNDnested] = ACTIONS(157),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(157),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(157),
    [anon_sym_LT_POUNDnt] = ACTIONS(157),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(157),
    [sym_recover] = ACTIONS(157),
    [anon_sym_LT_POUNDreturn] = ACTIONS(157),
    [anon_sym_LT_POUNDsep] = ACTIONS(157),
    [anon_sym_LT_POUNDsetting] = ACTIONS(157),
    [anon_sym_LT_POUNDstop] = ACTIONS(157),
    [anon_sym_LT_POUNDt] = ACTIONS(157),
    [anon_sym_LT_POUNDlt] = ACTIONS(157),
    [anon_sym_LT_POUNDrt] = ACTIONS(157),
  },
  [63] = {
    [sym__definition] = STATE(63),
    [sym_directive] = STATE(63),
    [sym_assign] = STATE(26),
    [sym_attempt] = STATE(26),
    [sym_autoesc] = STATE(26),
    [sym_compress] = STATE(26),
    [sym_flush] = STATE(26),
    [sym_ftl] = STATE(26),
    [sym_function] = STATE(26),
    [sym_global] = STATE(26),
    [sym_if] = STATE(26),
    [sym_import] = STATE(26),
    [sym_include] = STATE(26),
    [sym_list] = STATE(26),
    [sym_local] = STATE(26),
    [sym_macro] = STATE(26),
    [sym_noautoesc] = STATE(26),
    [sym_noparse] = STATE(26),
    [sym_nt] = STATE(26),
    [sym_outputformat] = STATE(26),
    [sym_setting] = STATE(26),
    [sym_stop] = STATE(26),
    [sym_t] = STATE(26),
    [sym_lt] = STATE(26),
    [sym_rt] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_LT_POUNDassign] = ACTIONS(161),
    [anon_sym_LT_POUNDattempt] = ACTIONS(164),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(167),
    [anon_sym_LT_POUNDcompress] = ACTIONS(170),
    [anon_sym_LT_POUNDflush] = ACTIONS(173),
    [anon_sym_LT_POUNDftl] = ACTIONS(176),
    [anon_sym_LT_POUNDfunction] = ACTIONS(179),
    [anon_sym_LT_POUNDglobal] = ACTIONS(182),
    [anon_sym_LT_POUNDif] = ACTIONS(185),
    [anon_sym_LT_POUNDimport] = ACTIONS(188),
    [anon_sym_LT_POUNDinclude] = ACTIONS(191),
    [anon_sym_LT_POUNDlist] = ACTIONS(194),
    [anon_sym_LT_POUNDlocal] = ACTIONS(197),
    [anon_sym_LT_POUNDmacro] = ACTIONS(200),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(203),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(206),
    [anon_sym_LT_POUNDnt] = ACTIONS(209),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(212),
    [anon_sym_LT_POUNDsetting] = ACTIONS(215),
    [anon_sym_LT_POUNDstop] = ACTIONS(218),
    [anon_sym_LT_POUNDt] = ACTIONS(221),
    [anon_sym_LT_POUNDlt] = ACTIONS(224),
    [anon_sym_LT_POUNDrt] = ACTIONS(227),
  },
  [64] = {
    [sym_directiveType] = STATE(29),
    [sym_single] = STATE(30),
    [sym_block] = STATE(30),
    [sym_start] = STATE(82),
    [sym__end] = STATE(32),
    [sym_parameter_pattern] = STATE(38),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_identifier] = STATE(35),
    [sym_name] = STATE(36),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(38),
    [sym_end_single] = ACTIONS(53),
    [sym_end_block] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [65] = {
    [sym_end_single] = ACTIONS(230),
    [sym_end_block] = ACTIONS(230),
    [anon_sym_LT_POUNDassign] = ACTIONS(230),
    [anon_sym_LT_POUNDattempt] = ACTIONS(230),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(230),
    [anon_sym_LT_POUNDcompress] = ACTIONS(230),
    [sym_continue] = ACTIONS(230),
    [sym_else] = ACTIONS(230),
    [anon_sym_LT_POUNDelseif] = ACTIONS(230),
    [anon_sym_LT_POUNDflush] = ACTIONS(230),
    [anon_sym_LT_POUNDftl] = ACTIONS(230),
    [anon_sym_LT_POUNDfunction] = ACTIONS(230),
    [anon_sym_LT_POUNDglobal] = ACTIONS(230),
    [anon_sym_LT_POUNDif] = ACTIONS(230),
    [anon_sym_LT_POUNDimport] = ACTIONS(230),
    [anon_sym_LT_POUNDinclude] = ACTIONS(230),
    [anon_sym_LT_POUNDitems] = ACTIONS(230),
    [anon_sym_LT_POUNDlist] = ACTIONS(230),
    [anon_sym_LT_POUNDlocal] = ACTIONS(230),
    [anon_sym_LT_POUNDmacro] = ACTIONS(230),
    [anon_sym_LT_POUNDnested] = ACTIONS(230),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(230),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(230),
    [anon_sym_LT_POUNDnt] = ACTIONS(230),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(230),
    [sym_recover] = ACTIONS(230),
    [anon_sym_LT_POUNDreturn] = ACTIONS(230),
    [anon_sym_LT_POUNDsep] = ACTIONS(230),
    [anon_sym_LT_POUNDsetting] = ACTIONS(230),
    [anon_sym_LT_POUNDstop] = ACTIONS(230),
    [anon_sym_LT_POUNDt] = ACTIONS(230),
    [anon_sym_LT_POUNDlt] = ACTIONS(230),
    [anon_sym_LT_POUNDrt] = ACTIONS(230),
  },
  [66] = {
    [sym_single] = STATE(83),
    [sym_start] = STATE(40),
    [sym__end] = STATE(32),
    [sym_parameter_pattern] = STATE(38),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_identifier] = STATE(35),
    [sym_name] = STATE(36),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(38),
    [sym_end_single] = ACTIONS(53),
    [sym_end_block] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [67] = {
    [sym_directiveType] = STATE(47),
    [sym_single] = STATE(30),
    [sym_block] = STATE(30),
    [sym_start] = STATE(82),
    [sym__end] = STATE(32),
    [sym_parameter_pattern] = STATE(38),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_identifier] = STATE(35),
    [sym_name] = STATE(36),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(38),
    [sym_end_single] = ACTIONS(53),
    [sym_end_block] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [68] = {
    [sym_block] = STATE(84),
    [sym_start] = STATE(42),
    [sym__end] = STATE(32),
    [sym_parameter_pattern] = STATE(38),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_identifier] = STATE(35),
    [sym_name] = STATE(36),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(38),
    [sym_end_single] = ACTIONS(53),
    [sym_end_block] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [69] = {
    [sym_directiveType] = STATE(52),
    [sym_single] = STATE(30),
    [sym_block] = STATE(30),
    [sym_start] = STATE(82),
    [sym__end] = STATE(32),
    [sym_parameter_pattern] = STATE(38),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_identifier] = STATE(35),
    [sym_name] = STATE(36),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(38),
    [sym_end_single] = ACTIONS(53),
    [sym_end_block] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [70] = {
    [sym_single] = STATE(85),
    [sym_start] = STATE(40),
    [sym__end] = STATE(32),
    [sym_parameter_pattern] = STATE(38),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_identifier] = STATE(35),
    [sym_name] = STATE(36),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(38),
    [sym_end_single] = ACTIONS(53),
    [sym_end_block] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [71] = {
    [sym_expression] = STATE(88),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(232),
    [anon_sym_GT] = ACTIONS(234),
  },
  [72] = {
    [sym_directiveType] = STATE(89),
    [sym_single] = STATE(30),
    [sym_block] = STATE(30),
    [sym_start] = STATE(82),
    [sym__end] = STATE(32),
    [sym_parameter_pattern] = STATE(38),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_identifier] = STATE(35),
    [sym_name] = STATE(36),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(38),
    [sym_end_single] = ACTIONS(53),
    [sym_end_block] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(236),
    [sym_end_single] = ACTIONS(236),
    [sym_end_block] = ACTIONS(236),
    [anon_sym_LT_POUNDassign] = ACTIONS(236),
    [anon_sym_LT_POUNDattempt] = ACTIONS(236),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(236),
    [anon_sym_LT_POUNDcompress] = ACTIONS(236),
    [sym_continue] = ACTIONS(236),
    [sym_else] = ACTIONS(236),
    [anon_sym_LT_POUNDelseif] = ACTIONS(236),
    [anon_sym_LT_POUNDflush] = ACTIONS(236),
    [anon_sym_LT_POUNDftl] = ACTIONS(236),
    [anon_sym_LT_POUNDfunction] = ACTIONS(236),
    [anon_sym_LT_POUNDglobal] = ACTIONS(236),
    [anon_sym_LT_POUNDif] = ACTIONS(236),
    [anon_sym_LT_POUNDimport] = ACTIONS(236),
    [anon_sym_LT_POUNDinclude] = ACTIONS(236),
    [anon_sym_LT_POUNDitems] = ACTIONS(236),
    [anon_sym_LT_POUNDlist] = ACTIONS(236),
    [anon_sym_LT_POUNDlocal] = ACTIONS(236),
    [anon_sym_LT_POUNDmacro] = ACTIONS(236),
    [anon_sym_LT_POUNDnested] = ACTIONS(236),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(236),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(236),
    [anon_sym_LT_POUNDnt] = ACTIONS(236),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(236),
    [sym_recover] = ACTIONS(236),
    [anon_sym_LT_POUNDreturn] = ACTIONS(236),
    [anon_sym_LT_POUNDsep] = ACTIONS(236),
    [anon_sym_LT_POUNDsetting] = ACTIONS(236),
    [anon_sym_LT_POUNDstop] = ACTIONS(236),
    [anon_sym_LT_POUNDt] = ACTIONS(236),
    [anon_sym_LT_POUNDlt] = ACTIONS(236),
    [anon_sym_LT_POUNDrt] = ACTIONS(236),
  },
  [74] = {
    [sym__definition] = STATE(65),
    [sym_directive] = STATE(65),
    [sym_middle] = STATE(91),
    [sym__end] = STATE(90),
    [sym_assign] = STATE(26),
    [sym_attempt] = STATE(26),
    [sym_autoesc] = STATE(26),
    [sym_compress] = STATE(26),
    [sym_elseif] = STATE(65),
    [sym_flush] = STATE(26),
    [sym_ftl] = STATE(26),
    [sym_function] = STATE(26),
    [sym_global] = STATE(26),
    [sym_if] = STATE(26),
    [sym_import] = STATE(26),
    [sym_include] = STATE(26),
    [sym_items] = STATE(65),
    [sym_list] = STATE(26),
    [sym_local] = STATE(26),
    [sym_macro] = STATE(26),
    [sym_nested] = STATE(65),
    [sym_noautoesc] = STATE(26),
    [sym_noparse] = STATE(26),
    [sym_nt] = STATE(26),
    [sym_outputformat] = STATE(26),
    [sym_return] = STATE(65),
    [sym_sep] = STATE(65),
    [sym_setting] = STATE(26),
    [sym_stop] = STATE(26),
    [sym_t] = STATE(26),
    [sym_lt] = STATE(26),
    [sym_rt] = STATE(26),
    [aux_sym_block_repeat1] = STATE(91),
    [sym_end_single] = ACTIONS(238),
    [sym_end_block] = ACTIONS(238),
    [anon_sym_LT_POUNDassign] = ACTIONS(113),
    [anon_sym_LT_POUNDattempt] = ACTIONS(9),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(11),
    [anon_sym_LT_POUNDcompress] = ACTIONS(13),
    [sym_continue] = ACTIONS(79),
    [sym_else] = ACTIONS(79),
    [anon_sym_LT_POUNDelseif] = ACTIONS(81),
    [anon_sym_LT_POUNDflush] = ACTIONS(15),
    [anon_sym_LT_POUNDftl] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDglobal] = ACTIONS(115),
    [anon_sym_LT_POUNDif] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [anon_sym_LT_POUNDitems] = ACTIONS(83),
    [anon_sym_LT_POUNDlist] = ACTIONS(29),
    [anon_sym_LT_POUNDlocal] = ACTIONS(117),
    [anon_sym_LT_POUNDmacro] = ACTIONS(33),
    [anon_sym_LT_POUNDnested] = ACTIONS(85),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(35),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(37),
    [anon_sym_LT_POUNDnt] = ACTIONS(39),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(41),
    [sym_recover] = ACTIONS(79),
    [anon_sym_LT_POUNDreturn] = ACTIONS(87),
    [anon_sym_LT_POUNDsep] = ACTIONS(89),
    [anon_sym_LT_POUNDsetting] = ACTIONS(43),
    [anon_sym_LT_POUNDstop] = ACTIONS(45),
    [anon_sym_LT_POUNDt] = ACTIONS(47),
    [anon_sym_LT_POUNDlt] = ACTIONS(49),
    [anon_sym_LT_POUNDrt] = ACTIONS(51),
  },
  [75] = {
    [sym_expression] = STATE(93),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(240),
  },
  [76] = {
    [sym_end_single] = ACTIONS(65),
    [sym_end_block] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(242),
    [sym_operator] = ACTIONS(69),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(244),
    [sym_end_single] = ACTIONS(244),
    [sym_end_block] = ACTIONS(244),
    [anon_sym_LT_POUNDassign] = ACTIONS(244),
    [anon_sym_LT_POUNDattempt] = ACTIONS(244),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(244),
    [anon_sym_LT_POUNDcompress] = ACTIONS(244),
    [sym_continue] = ACTIONS(244),
    [sym_else] = ACTIONS(244),
    [anon_sym_LT_POUNDelseif] = ACTIONS(244),
    [anon_sym_LT_POUNDflush] = ACTIONS(244),
    [anon_sym_LT_POUNDftl] = ACTIONS(244),
    [anon_sym_LT_POUNDfunction] = ACTIONS(244),
    [anon_sym_LT_POUNDglobal] = ACTIONS(244),
    [anon_sym_LT_POUNDif] = ACTIONS(244),
    [anon_sym_LT_POUNDimport] = ACTIONS(244),
    [anon_sym_LT_POUNDinclude] = ACTIONS(244),
    [anon_sym_LT_POUNDitems] = ACTIONS(244),
    [anon_sym_LT_POUNDlist] = ACTIONS(244),
    [anon_sym_LT_POUNDlocal] = ACTIONS(244),
    [anon_sym_LT_POUNDmacro] = ACTIONS(244),
    [anon_sym_LT_POUNDnested] = ACTIONS(244),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(244),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(244),
    [anon_sym_LT_POUNDnt] = ACTIONS(244),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(244),
    [sym_recover] = ACTIONS(244),
    [anon_sym_LT_POUNDreturn] = ACTIONS(244),
    [anon_sym_LT_POUNDsep] = ACTIONS(244),
    [anon_sym_LT_POUNDsetting] = ACTIONS(244),
    [anon_sym_LT_POUNDstop] = ACTIONS(244),
    [anon_sym_LT_POUNDt] = ACTIONS(244),
    [anon_sym_LT_POUNDlt] = ACTIONS(244),
    [anon_sym_LT_POUNDrt] = ACTIONS(244),
  },
  [78] = {
    [sym__end] = STATE(94),
    [sym_parameter_pattern] = STATE(81),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(81),
    [sym_end_single] = ACTIONS(246),
    [sym_end_block] = ACTIONS(246),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(101),
  },
  [79] = {
    [sym_end_single] = ACTIONS(248),
    [sym_end_block] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(248),
  },
  [80] = {
    [sym_expression] = STATE(95),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(240),
  },
  [81] = {
    [sym_parameter_pattern] = STATE(81),
    [sym_paramPattern1] = STATE(33),
    [sym_paramPattern2] = STATE(33),
    [sym_paramPattern3] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_expression] = STATE(34),
    [sym_parameter] = STATE(37),
    [aux_sym_start_repeat1] = STATE(81),
    [sym_end_single] = ACTIONS(250),
    [sym_end_block] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(252),
  },
  [82] = {
    [sym__definition] = STATE(65),
    [sym_directive] = STATE(65),
    [sym_middle] = STATE(74),
    [sym__end] = STATE(73),
    [sym_assign] = STATE(26),
    [sym_attempt] = STATE(26),
    [sym_autoesc] = STATE(26),
    [sym_compress] = STATE(26),
    [sym_elseif] = STATE(65),
    [sym_flush] = STATE(26),
    [sym_ftl] = STATE(26),
    [sym_function] = STATE(26),
    [sym_global] = STATE(26),
    [sym_if] = STATE(26),
    [sym_import] = STATE(26),
    [sym_include] = STATE(26),
    [sym_items] = STATE(65),
    [sym_list] = STATE(26),
    [sym_local] = STATE(26),
    [sym_macro] = STATE(26),
    [sym_nested] = STATE(65),
    [sym_noautoesc] = STATE(26),
    [sym_noparse] = STATE(26),
    [sym_nt] = STATE(26),
    [sym_outputformat] = STATE(26),
    [sym_return] = STATE(65),
    [sym_sep] = STATE(65),
    [sym_setting] = STATE(26),
    [sym_stop] = STATE(26),
    [sym_t] = STATE(26),
    [sym_lt] = STATE(26),
    [sym_rt] = STATE(26),
    [aux_sym_block_repeat1] = STATE(74),
    [sym_end_single] = ACTIONS(75),
    [sym_end_block] = ACTIONS(75),
    [anon_sym_LT_POUNDassign] = ACTIONS(75),
    [anon_sym_LT_POUNDattempt] = ACTIONS(75),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(75),
    [anon_sym_LT_POUNDcompress] = ACTIONS(75),
    [sym_continue] = ACTIONS(75),
    [sym_else] = ACTIONS(75),
    [anon_sym_LT_POUNDelseif] = ACTIONS(75),
    [anon_sym_LT_POUNDflush] = ACTIONS(75),
    [anon_sym_LT_POUNDftl] = ACTIONS(75),
    [anon_sym_LT_POUNDfunction] = ACTIONS(75),
    [anon_sym_LT_POUNDglobal] = ACTIONS(75),
    [anon_sym_LT_POUNDif] = ACTIONS(75),
    [anon_sym_LT_POUNDimport] = ACTIONS(75),
    [anon_sym_LT_POUNDinclude] = ACTIONS(75),
    [anon_sym_LT_POUNDitems] = ACTIONS(75),
    [anon_sym_LT_POUNDlist] = ACTIONS(75),
    [anon_sym_LT_POUNDlocal] = ACTIONS(75),
    [anon_sym_LT_POUNDmacro] = ACTIONS(75),
    [anon_sym_LT_POUNDnested] = ACTIONS(75),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(75),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(75),
    [anon_sym_LT_POUNDnt] = ACTIONS(75),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(75),
    [sym_recover] = ACTIONS(75),
    [anon_sym_LT_POUNDreturn] = ACTIONS(75),
    [anon_sym_LT_POUNDsep] = ACTIONS(75),
    [anon_sym_LT_POUNDsetting] = ACTIONS(75),
    [anon_sym_LT_POUNDstop] = ACTIONS(75),
    [anon_sym_LT_POUNDt] = ACTIONS(75),
    [anon_sym_LT_POUNDlt] = ACTIONS(75),
    [anon_sym_LT_POUNDrt] = ACTIONS(75),
  },
  [83] = {
    [sym_end_single] = ACTIONS(255),
    [sym_end_block] = ACTIONS(255),
    [anon_sym_LT_POUNDassign] = ACTIONS(255),
    [anon_sym_LT_POUNDattempt] = ACTIONS(255),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(255),
    [anon_sym_LT_POUNDcompress] = ACTIONS(255),
    [sym_continue] = ACTIONS(255),
    [sym_else] = ACTIONS(255),
    [anon_sym_LT_POUNDelseif] = ACTIONS(255),
    [anon_sym_LT_POUNDflush] = ACTIONS(255),
    [anon_sym_LT_POUNDftl] = ACTIONS(255),
    [anon_sym_LT_POUNDfunction] = ACTIONS(255),
    [anon_sym_LT_POUNDglobal] = ACTIONS(255),
    [anon_sym_LT_POUNDif] = ACTIONS(255),
    [anon_sym_LT_POUNDimport] = ACTIONS(255),
    [anon_sym_LT_POUNDinclude] = ACTIONS(255),
    [anon_sym_LT_POUNDitems] = ACTIONS(255),
    [anon_sym_LT_POUNDlist] = ACTIONS(255),
    [anon_sym_LT_POUNDlocal] = ACTIONS(255),
    [anon_sym_LT_POUNDmacro] = ACTIONS(255),
    [anon_sym_LT_POUNDnested] = ACTIONS(255),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(255),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(255),
    [anon_sym_LT_POUNDnt] = ACTIONS(255),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(255),
    [sym_recover] = ACTIONS(255),
    [anon_sym_LT_POUNDreturn] = ACTIONS(255),
    [anon_sym_LT_POUNDsep] = ACTIONS(255),
    [anon_sym_LT_POUNDsetting] = ACTIONS(255),
    [anon_sym_LT_POUNDstop] = ACTIONS(255),
    [anon_sym_LT_POUNDt] = ACTIONS(255),
    [anon_sym_LT_POUNDlt] = ACTIONS(255),
    [anon_sym_LT_POUNDrt] = ACTIONS(255),
  },
  [84] = {
    [sym_end_single] = ACTIONS(257),
    [sym_end_block] = ACTIONS(257),
    [anon_sym_LT_POUNDassign] = ACTIONS(257),
    [anon_sym_LT_POUNDattempt] = ACTIONS(257),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(257),
    [anon_sym_LT_POUNDcompress] = ACTIONS(257),
    [sym_continue] = ACTIONS(257),
    [sym_else] = ACTIONS(257),
    [anon_sym_LT_POUNDelseif] = ACTIONS(257),
    [anon_sym_LT_POUNDflush] = ACTIONS(257),
    [anon_sym_LT_POUNDftl] = ACTIONS(257),
    [anon_sym_LT_POUNDfunction] = ACTIONS(257),
    [anon_sym_LT_POUNDglobal] = ACTIONS(257),
    [anon_sym_LT_POUNDif] = ACTIONS(257),
    [anon_sym_LT_POUNDimport] = ACTIONS(257),
    [anon_sym_LT_POUNDinclude] = ACTIONS(257),
    [anon_sym_LT_POUNDitems] = ACTIONS(257),
    [anon_sym_LT_POUNDlist] = ACTIONS(257),
    [anon_sym_LT_POUNDlocal] = ACTIONS(257),
    [anon_sym_LT_POUNDmacro] = ACTIONS(257),
    [anon_sym_LT_POUNDnested] = ACTIONS(257),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(257),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(257),
    [anon_sym_LT_POUNDnt] = ACTIONS(257),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(257),
    [sym_recover] = ACTIONS(257),
    [anon_sym_LT_POUNDreturn] = ACTIONS(257),
    [anon_sym_LT_POUNDsep] = ACTIONS(257),
    [anon_sym_LT_POUNDsetting] = ACTIONS(257),
    [anon_sym_LT_POUNDstop] = ACTIONS(257),
    [anon_sym_LT_POUNDt] = ACTIONS(257),
    [anon_sym_LT_POUNDlt] = ACTIONS(257),
    [anon_sym_LT_POUNDrt] = ACTIONS(257),
  },
  [85] = {
    [sym_end_single] = ACTIONS(259),
    [sym_end_block] = ACTIONS(259),
    [anon_sym_LT_POUNDassign] = ACTIONS(259),
    [anon_sym_LT_POUNDattempt] = ACTIONS(259),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(259),
    [anon_sym_LT_POUNDcompress] = ACTIONS(259),
    [sym_continue] = ACTIONS(259),
    [sym_else] = ACTIONS(259),
    [anon_sym_LT_POUNDelseif] = ACTIONS(259),
    [anon_sym_LT_POUNDflush] = ACTIONS(259),
    [anon_sym_LT_POUNDftl] = ACTIONS(259),
    [anon_sym_LT_POUNDfunction] = ACTIONS(259),
    [anon_sym_LT_POUNDglobal] = ACTIONS(259),
    [anon_sym_LT_POUNDif] = ACTIONS(259),
    [anon_sym_LT_POUNDimport] = ACTIONS(259),
    [anon_sym_LT_POUNDinclude] = ACTIONS(259),
    [anon_sym_LT_POUNDitems] = ACTIONS(259),
    [anon_sym_LT_POUNDlist] = ACTIONS(259),
    [anon_sym_LT_POUNDlocal] = ACTIONS(259),
    [anon_sym_LT_POUNDmacro] = ACTIONS(259),
    [anon_sym_LT_POUNDnested] = ACTIONS(259),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(259),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(259),
    [anon_sym_LT_POUNDnt] = ACTIONS(259),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(259),
    [sym_recover] = ACTIONS(259),
    [anon_sym_LT_POUNDreturn] = ACTIONS(259),
    [anon_sym_LT_POUNDsep] = ACTIONS(259),
    [anon_sym_LT_POUNDsetting] = ACTIONS(259),
    [anon_sym_LT_POUNDstop] = ACTIONS(259),
    [anon_sym_LT_POUNDt] = ACTIONS(259),
    [anon_sym_LT_POUNDlt] = ACTIONS(259),
    [anon_sym_LT_POUNDrt] = ACTIONS(259),
  },
  [86] = {
    [anon_sym_GT] = ACTIONS(261),
  },
  [87] = {
    [sym_end_single] = ACTIONS(263),
    [sym_end_block] = ACTIONS(263),
    [anon_sym_LT_POUNDassign] = ACTIONS(263),
    [anon_sym_LT_POUNDattempt] = ACTIONS(263),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(263),
    [anon_sym_LT_POUNDcompress] = ACTIONS(263),
    [sym_continue] = ACTIONS(263),
    [sym_else] = ACTIONS(263),
    [anon_sym_LT_POUNDelseif] = ACTIONS(263),
    [anon_sym_LT_POUNDflush] = ACTIONS(263),
    [anon_sym_LT_POUNDftl] = ACTIONS(263),
    [anon_sym_LT_POUNDfunction] = ACTIONS(263),
    [anon_sym_LT_POUNDglobal] = ACTIONS(263),
    [anon_sym_LT_POUNDif] = ACTIONS(263),
    [anon_sym_LT_POUNDimport] = ACTIONS(263),
    [anon_sym_LT_POUNDinclude] = ACTIONS(263),
    [anon_sym_LT_POUNDitems] = ACTIONS(263),
    [anon_sym_LT_POUNDlist] = ACTIONS(263),
    [anon_sym_LT_POUNDlocal] = ACTIONS(263),
    [anon_sym_LT_POUNDmacro] = ACTIONS(263),
    [anon_sym_LT_POUNDnested] = ACTIONS(263),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(263),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(263),
    [anon_sym_LT_POUNDnt] = ACTIONS(263),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(263),
    [sym_recover] = ACTIONS(263),
    [anon_sym_LT_POUNDreturn] = ACTIONS(263),
    [anon_sym_LT_POUNDsep] = ACTIONS(263),
    [anon_sym_LT_POUNDsetting] = ACTIONS(263),
    [anon_sym_LT_POUNDstop] = ACTIONS(263),
    [anon_sym_LT_POUNDt] = ACTIONS(263),
    [anon_sym_LT_POUNDlt] = ACTIONS(263),
    [anon_sym_LT_POUNDrt] = ACTIONS(263),
  },
  [88] = {
    [anon_sym_GT] = ACTIONS(265),
  },
  [89] = {
    [sym_end_single] = ACTIONS(267),
    [sym_end_block] = ACTIONS(267),
    [anon_sym_LT_POUNDassign] = ACTIONS(267),
    [anon_sym_LT_POUNDattempt] = ACTIONS(267),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(267),
    [anon_sym_LT_POUNDcompress] = ACTIONS(267),
    [sym_continue] = ACTIONS(267),
    [sym_else] = ACTIONS(267),
    [anon_sym_LT_POUNDelseif] = ACTIONS(267),
    [anon_sym_LT_POUNDflush] = ACTIONS(267),
    [anon_sym_LT_POUNDftl] = ACTIONS(267),
    [anon_sym_LT_POUNDfunction] = ACTIONS(267),
    [anon_sym_LT_POUNDglobal] = ACTIONS(267),
    [anon_sym_LT_POUNDif] = ACTIONS(267),
    [anon_sym_LT_POUNDimport] = ACTIONS(267),
    [anon_sym_LT_POUNDinclude] = ACTIONS(267),
    [anon_sym_LT_POUNDitems] = ACTIONS(267),
    [anon_sym_LT_POUNDlist] = ACTIONS(267),
    [anon_sym_LT_POUNDlocal] = ACTIONS(267),
    [anon_sym_LT_POUNDmacro] = ACTIONS(267),
    [anon_sym_LT_POUNDnested] = ACTIONS(267),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(267),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(267),
    [anon_sym_LT_POUNDnt] = ACTIONS(267),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(267),
    [sym_recover] = ACTIONS(267),
    [anon_sym_LT_POUNDreturn] = ACTIONS(267),
    [anon_sym_LT_POUNDsep] = ACTIONS(267),
    [anon_sym_LT_POUNDsetting] = ACTIONS(267),
    [anon_sym_LT_POUNDstop] = ACTIONS(267),
    [anon_sym_LT_POUNDt] = ACTIONS(267),
    [anon_sym_LT_POUNDlt] = ACTIONS(267),
    [anon_sym_LT_POUNDrt] = ACTIONS(267),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [sym_end_single] = ACTIONS(269),
    [sym_end_block] = ACTIONS(269),
    [anon_sym_LT_POUNDassign] = ACTIONS(269),
    [anon_sym_LT_POUNDattempt] = ACTIONS(269),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(269),
    [anon_sym_LT_POUNDcompress] = ACTIONS(269),
    [sym_continue] = ACTIONS(269),
    [sym_else] = ACTIONS(269),
    [anon_sym_LT_POUNDelseif] = ACTIONS(269),
    [anon_sym_LT_POUNDflush] = ACTIONS(269),
    [anon_sym_LT_POUNDftl] = ACTIONS(269),
    [anon_sym_LT_POUNDfunction] = ACTIONS(269),
    [anon_sym_LT_POUNDglobal] = ACTIONS(269),
    [anon_sym_LT_POUNDif] = ACTIONS(269),
    [anon_sym_LT_POUNDimport] = ACTIONS(269),
    [anon_sym_LT_POUNDinclude] = ACTIONS(269),
    [anon_sym_LT_POUNDitems] = ACTIONS(269),
    [anon_sym_LT_POUNDlist] = ACTIONS(269),
    [anon_sym_LT_POUNDlocal] = ACTIONS(269),
    [anon_sym_LT_POUNDmacro] = ACTIONS(269),
    [anon_sym_LT_POUNDnested] = ACTIONS(269),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(269),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(269),
    [anon_sym_LT_POUNDnt] = ACTIONS(269),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(269),
    [sym_recover] = ACTIONS(269),
    [anon_sym_LT_POUNDreturn] = ACTIONS(269),
    [anon_sym_LT_POUNDsep] = ACTIONS(269),
    [anon_sym_LT_POUNDsetting] = ACTIONS(269),
    [anon_sym_LT_POUNDstop] = ACTIONS(269),
    [anon_sym_LT_POUNDt] = ACTIONS(269),
    [anon_sym_LT_POUNDlt] = ACTIONS(269),
    [anon_sym_LT_POUNDrt] = ACTIONS(269),
  },
  [91] = {
    [sym__definition] = STATE(65),
    [sym_directive] = STATE(65),
    [sym_middle] = STATE(91),
    [sym_assign] = STATE(26),
    [sym_attempt] = STATE(26),
    [sym_autoesc] = STATE(26),
    [sym_compress] = STATE(26),
    [sym_elseif] = STATE(65),
    [sym_flush] = STATE(26),
    [sym_ftl] = STATE(26),
    [sym_function] = STATE(26),
    [sym_global] = STATE(26),
    [sym_if] = STATE(26),
    [sym_import] = STATE(26),
    [sym_include] = STATE(26),
    [sym_items] = STATE(65),
    [sym_list] = STATE(26),
    [sym_local] = STATE(26),
    [sym_macro] = STATE(26),
    [sym_nested] = STATE(65),
    [sym_noautoesc] = STATE(26),
    [sym_noparse] = STATE(26),
    [sym_nt] = STATE(26),
    [sym_outputformat] = STATE(26),
    [sym_return] = STATE(65),
    [sym_sep] = STATE(65),
    [sym_setting] = STATE(26),
    [sym_stop] = STATE(26),
    [sym_t] = STATE(26),
    [sym_lt] = STATE(26),
    [sym_rt] = STATE(26),
    [aux_sym_block_repeat1] = STATE(91),
    [sym_end_single] = ACTIONS(271),
    [sym_end_block] = ACTIONS(271),
    [anon_sym_LT_POUNDassign] = ACTIONS(273),
    [anon_sym_LT_POUNDattempt] = ACTIONS(276),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(279),
    [anon_sym_LT_POUNDcompress] = ACTIONS(282),
    [sym_continue] = ACTIONS(285),
    [sym_else] = ACTIONS(285),
    [anon_sym_LT_POUNDelseif] = ACTIONS(288),
    [anon_sym_LT_POUNDflush] = ACTIONS(291),
    [anon_sym_LT_POUNDftl] = ACTIONS(294),
    [anon_sym_LT_POUNDfunction] = ACTIONS(297),
    [anon_sym_LT_POUNDglobal] = ACTIONS(300),
    [anon_sym_LT_POUNDif] = ACTIONS(303),
    [anon_sym_LT_POUNDimport] = ACTIONS(306),
    [anon_sym_LT_POUNDinclude] = ACTIONS(309),
    [anon_sym_LT_POUNDitems] = ACTIONS(312),
    [anon_sym_LT_POUNDlist] = ACTIONS(315),
    [anon_sym_LT_POUNDlocal] = ACTIONS(318),
    [anon_sym_LT_POUNDmacro] = ACTIONS(321),
    [anon_sym_LT_POUNDnested] = ACTIONS(324),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(327),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(330),
    [anon_sym_LT_POUNDnt] = ACTIONS(333),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(336),
    [sym_recover] = ACTIONS(285),
    [anon_sym_LT_POUNDreturn] = ACTIONS(339),
    [anon_sym_LT_POUNDsep] = ACTIONS(342),
    [anon_sym_LT_POUNDsetting] = ACTIONS(345),
    [anon_sym_LT_POUNDstop] = ACTIONS(348),
    [anon_sym_LT_POUNDt] = ACTIONS(351),
    [anon_sym_LT_POUNDlt] = ACTIONS(354),
    [anon_sym_LT_POUNDrt] = ACTIONS(357),
  },
  [92] = {
    [sym_end_single] = ACTIONS(261),
    [sym_end_block] = ACTIONS(261),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(261),
  },
  [93] = {
    [sym_end_single] = ACTIONS(360),
    [sym_end_block] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(360),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(362),
    [sym_end_single] = ACTIONS(362),
    [sym_end_block] = ACTIONS(362),
    [anon_sym_LT_POUNDassign] = ACTIONS(362),
    [anon_sym_LT_POUNDattempt] = ACTIONS(362),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(362),
    [anon_sym_LT_POUNDcompress] = ACTIONS(362),
    [sym_continue] = ACTIONS(362),
    [sym_else] = ACTIONS(362),
    [anon_sym_LT_POUNDelseif] = ACTIONS(362),
    [anon_sym_LT_POUNDflush] = ACTIONS(362),
    [anon_sym_LT_POUNDftl] = ACTIONS(362),
    [anon_sym_LT_POUNDfunction] = ACTIONS(362),
    [anon_sym_LT_POUNDglobal] = ACTIONS(362),
    [anon_sym_LT_POUNDif] = ACTIONS(362),
    [anon_sym_LT_POUNDimport] = ACTIONS(362),
    [anon_sym_LT_POUNDinclude] = ACTIONS(362),
    [anon_sym_LT_POUNDitems] = ACTIONS(362),
    [anon_sym_LT_POUNDlist] = ACTIONS(362),
    [anon_sym_LT_POUNDlocal] = ACTIONS(362),
    [anon_sym_LT_POUNDmacro] = ACTIONS(362),
    [anon_sym_LT_POUNDnested] = ACTIONS(362),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(362),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(362),
    [anon_sym_LT_POUNDnt] = ACTIONS(362),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(362),
    [sym_recover] = ACTIONS(362),
    [anon_sym_LT_POUNDreturn] = ACTIONS(362),
    [anon_sym_LT_POUNDsep] = ACTIONS(362),
    [anon_sym_LT_POUNDsetting] = ACTIONS(362),
    [anon_sym_LT_POUNDstop] = ACTIONS(362),
    [anon_sym_LT_POUNDt] = ACTIONS(362),
    [anon_sym_LT_POUNDlt] = ACTIONS(362),
    [anon_sym_LT_POUNDrt] = ACTIONS(362),
  },
  [95] = {
    [sym_end_single] = ACTIONS(364),
    [sym_end_block] = ACTIONS(364),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(364),
  },
  [96] = {
    [sym_end_single] = ACTIONS(366),
    [sym_end_block] = ACTIONS(366),
    [anon_sym_LT_POUNDassign] = ACTIONS(366),
    [anon_sym_LT_POUNDattempt] = ACTIONS(366),
    [anon_sym_LT_POUNDautoesc] = ACTIONS(366),
    [anon_sym_LT_POUNDcompress] = ACTIONS(366),
    [sym_continue] = ACTIONS(366),
    [sym_else] = ACTIONS(366),
    [anon_sym_LT_POUNDelseif] = ACTIONS(366),
    [anon_sym_LT_POUNDflush] = ACTIONS(366),
    [anon_sym_LT_POUNDftl] = ACTIONS(366),
    [anon_sym_LT_POUNDfunction] = ACTIONS(366),
    [anon_sym_LT_POUNDglobal] = ACTIONS(366),
    [anon_sym_LT_POUNDif] = ACTIONS(366),
    [anon_sym_LT_POUNDimport] = ACTIONS(366),
    [anon_sym_LT_POUNDinclude] = ACTIONS(366),
    [anon_sym_LT_POUNDitems] = ACTIONS(366),
    [anon_sym_LT_POUNDlist] = ACTIONS(366),
    [anon_sym_LT_POUNDlocal] = ACTIONS(366),
    [anon_sym_LT_POUNDmacro] = ACTIONS(366),
    [anon_sym_LT_POUNDnested] = ACTIONS(366),
    [anon_sym_LT_POUNDnoautoesc] = ACTIONS(366),
    [anon_sym_LT_POUNDnoparse] = ACTIONS(366),
    [anon_sym_LT_POUNDnt] = ACTIONS(366),
    [anon_sym_LT_POUNDoutputformat] = ACTIONS(366),
    [sym_recover] = ACTIONS(366),
    [anon_sym_LT_POUNDreturn] = ACTIONS(366),
    [anon_sym_LT_POUNDsep] = ACTIONS(366),
    [anon_sym_LT_POUNDsetting] = ACTIONS(366),
    [anon_sym_LT_POUNDstop] = ACTIONS(366),
    [anon_sym_LT_POUNDt] = ACTIONS(366),
    [anon_sym_LT_POUNDlt] = ACTIONS(366),
    [anon_sym_LT_POUNDrt] = ACTIONS(366),
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
  [49] = {.count = 1, .reusable = true}, SHIFT(23),
  [51] = {.count = 1, .reusable = true}, SHIFT(24),
  [53] = {.count = 1, .reusable = true}, SHIFT(32),
  [55] = {.count = 1, .reusable = true}, SHIFT(28),
  [57] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_directive, 1),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 1),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 1),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 2),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_directiveType, 1),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_single, 1),
  [77] = {.count = 1, .reusable = true}, SHIFT(73),
  [79] = {.count = 1, .reusable = true}, SHIFT(65),
  [81] = {.count = 1, .reusable = true}, SHIFT(66),
  [83] = {.count = 1, .reusable = true}, SHIFT(68),
  [85] = {.count = 1, .reusable = true}, SHIFT(70),
  [87] = {.count = 1, .reusable = true}, SHIFT(71),
  [89] = {.count = 1, .reusable = true}, SHIFT(72),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_start, 1),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_pattern, 1),
  [95] = {.count = 1, .reusable = true}, SHIFT(75),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_name, 1),
  [99] = {.count = 1, .reusable = true}, SHIFT(77),
  [101] = {.count = 1, .reusable = true}, SHIFT(76),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_paramPattern1, 1),
  [105] = {.count = 1, .reusable = true}, SHIFT(79),
  [107] = {.count = 1, .reusable = true}, SHIFT(80),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_attempt, 2),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_autoesc, 2),
  [113] = {.count = 1, .reusable = true}, SHIFT(64),
  [115] = {.count = 1, .reusable = true}, SHIFT(67),
  [117] = {.count = 1, .reusable = true}, SHIFT(69),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_compress, 2),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_flush, 2),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_ftl, 2),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_function, 2),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_global, 2),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_if, 2),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_import, 2),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_list, 2),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_local, 2),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_macro, 2),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_noautoesc, 2),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_noparse, 2),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_nt, 2),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_outputformat, 2),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_setting, 2),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_stop, 2),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_t, 2),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_lt, 2),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_rt, 2),
  [159] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [161] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [164] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [170] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [173] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [176] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [179] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [182] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [185] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [188] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [191] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [194] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [197] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [200] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [203] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [206] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [209] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [212] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [215] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [218] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [221] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [224] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [227] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_middle, 1),
  [232] = {.count = 1, .reusable = true}, SHIFT(86),
  [234] = {.count = 1, .reusable = true}, SHIFT(87),
  [236] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [238] = {.count = 1, .reusable = true}, SHIFT(90),
  [240] = {.count = 1, .reusable = true}, SHIFT(92),
  [242] = {.count = 1, .reusable = false}, REDUCE(sym_parameter, 1),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_start, 2),
  [246] = {.count = 1, .reusable = true}, SHIFT(94),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym_paramPattern2, 2),
  [250] = {.count = 1, .reusable = true}, REDUCE(aux_sym_start_repeat1, 2),
  [252] = {.count = 2, .reusable = true}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(76),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_elseif, 2),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_items, 2),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_nested, 2),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_return, 2),
  [265] = {.count = 1, .reusable = true}, SHIFT(96),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_sep, 2),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [271] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [273] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(64),
  [276] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(3),
  [279] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [282] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [285] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(65),
  [288] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(66),
  [291] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [294] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [297] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(8),
  [300] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(67),
  [303] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [306] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [309] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [312] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(68),
  [315] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(13),
  [318] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(69),
  [321] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [324] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(70),
  [327] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(16),
  [330] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(17),
  [333] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(18),
  [336] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(19),
  [339] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(71),
  [342] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(72),
  [345] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(20),
  [348] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(21),
  [351] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(22),
  [354] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(23),
  [357] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(24),
  [360] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_start, 3),
  [364] = {.count = 1, .reusable = true}, REDUCE(sym_paramPattern3, 3),
  [366] = {.count = 1, .reusable = true}, REDUCE(sym_return, 3),
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
