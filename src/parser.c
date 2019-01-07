#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 201
#define SYMBOL_COUNT 118
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_comment = 1,
  aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH = 2,
  aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH = 3,
  anon_sym_COMMA = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_LBRACK = 7,
  anon_sym_RBRACK = 8,
  anon_sym_as = 9,
  anon_sym_using = 10,
  anon_sym_EQ = 11,
  anon_sym_BANG = 12,
  anon_sym_PLUS = 13,
  aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH = 14,
  aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH = 15,
  anon_sym_LT_POUNDlist = 16,
  anon_sym_GT = 17,
  anon_sym_LT_SLASH_POUNDlist_GT = 18,
  sym_break = 19,
  sym_continue = 20,
  anon_sym_LT_POUNDelse_GT = 21,
  anon_sym_LT_POUNDitems = 22,
  anon_sym_LT_SLASH_POUNDitems_GT = 23,
  anon_sym_LT_POUNDsep_GT = 24,
  anon_sym_LT_SLASH_POUNDsep_GT = 25,
  anon_sym_LT_POUNDif = 26,
  anon_sym_LT_SLASH_POUNDif_GT = 27,
  anon_sym_LT_POUNDelseif = 28,
  anon_sym_LT_POUNDswitch = 29,
  anon_sym_LT_SLASH_POUNDswitch_GT = 30,
  anon_sym_LT_POUNDcase = 31,
  anon_sym_LT_POUNDdefault_GT = 32,
  anon_sym_LT_POUNDfunction = 33,
  anon_sym_LT_SLASH_POUNDfunction_GT = 34,
  anon_sym_LT_POUNDreturn = 35,
  anon_sym_LT_POUNDmacro = 36,
  anon_sym_LT_SLASH_POUNDmacro_GT = 37,
  anon_sym_LT_POUNDnested = 38,
  anon_sym_LT_POUNDattempt_GT = 39,
  anon_sym_LT_SLASH_POUNDattempt_GT = 40,
  sym_recover = 41,
  sym_fallback = 42,
  sym_flush = 43,
  anon_sym_LT_POUNDftl = 44,
  anon_sym_LT_POUNDimport = 45,
  anon_sym_LT_POUNDinclude = 46,
  sym_lt = 47,
  sym_nt = 48,
  anon_sym_LT_POUNDrecurse = 49,
  sym_rt = 50,
  anon_sym_LT_POUNDsetting = 51,
  sym_stop = 52,
  sym_t = 53,
  anon_sym_LT_POUNDvisit = 54,
  anon_sym_LT_POUNDassign = 55,
  sym_end_assign = 56,
  anon_sym_LT_POUNDglobal = 57,
  sym_end_global = 58,
  anon_sym_LT_POUNDlocal = 59,
  sym_end_local = 60,
  sym_source_file = 61,
  sym__definition = 62,
  sym_directive = 63,
  sym_parameter_group = 64,
  sym_paramGroup = 65,
  sym_unary_expression = 66,
  sym_binary_expression = 67,
  sym_expression = 68,
  sym_curveBracket = 69,
  sym_sequence = 70,
  sym_parameter = 71,
  sym_operator = 72,
  sym_string = 73,
  sym_list = 74,
  sym_list_middle = 75,
  sym_items_middle = 76,
  sym_list_else = 77,
  sym_items = 78,
  sym_sep = 79,
  sym_sep_block = 80,
  sym_if = 81,
  sym_if_else = 82,
  sym_elseif = 83,
  sym_if_middle = 84,
  sym_switch = 85,
  sym_case = 86,
  sym_default = 87,
  sym_switch_middle = 88,
  sym_function = 89,
  sym_function_middle = 90,
  sym_return = 91,
  sym_macro = 92,
  sym_macro_middle = 93,
  sym_nested = 94,
  sym_attempt = 95,
  sym_attempt_middle = 96,
  sym_ftl = 97,
  sym_import = 98,
  sym_include = 99,
  sym_recurse = 100,
  sym_setting = 101,
  sym_visit = 102,
  sym_assign = 103,
  sym_global = 104,
  sym_local = 105,
  aux_sym_source_file_repeat1 = 106,
  aux_sym_unary_expression_repeat1 = 107,
  aux_sym_curveBracket_repeat1 = 108,
  aux_sym_list_repeat1 = 109,
  aux_sym_items_repeat1 = 110,
  aux_sym_if_repeat1 = 111,
  aux_sym_switch_repeat1 = 112,
  aux_sym_case_repeat1 = 113,
  aux_sym_case_repeat2 = 114,
  aux_sym_function_repeat1 = 115,
  aux_sym_macro_repeat1 = 116,
  aux_sym_attempt_repeat1 = 117,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_comment] = "comment",
  [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = "/[a-zA-Z0-9\\_]+/",
  [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = "/\\.([a-zA-Z0-9\\_]+)/",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_as] = "as",
  [anon_sym_using] = "using",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG] = "!",
  [anon_sym_PLUS] = "+",
  [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = "/\\\"([^\\\"]*)\\\"/",
  [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = "/\\'([^\\']*)\\'/",
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
  [sym_fallback] = "fallback",
  [sym_flush] = "flush",
  [anon_sym_LT_POUNDftl] = "<#ftl",
  [anon_sym_LT_POUNDimport] = "<#import",
  [anon_sym_LT_POUNDinclude] = "<#include",
  [sym_lt] = "lt",
  [sym_nt] = "nt",
  [anon_sym_LT_POUNDrecurse] = "<#recurse",
  [sym_rt] = "rt",
  [anon_sym_LT_POUNDsetting] = "<#setting",
  [sym_stop] = "stop",
  [sym_t] = "t",
  [anon_sym_LT_POUNDvisit] = "<#visit",
  [anon_sym_LT_POUNDassign] = "<#assign",
  [sym_end_assign] = "end_assign",
  [anon_sym_LT_POUNDglobal] = "<#global",
  [sym_end_global] = "end_global",
  [anon_sym_LT_POUNDlocal] = "<#local",
  [sym_end_local] = "end_local",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_directive] = "directive",
  [sym_parameter_group] = "parameter_group",
  [sym_paramGroup] = "paramGroup",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_expression] = "expression",
  [sym_curveBracket] = "curveBracket",
  [sym_sequence] = "sequence",
  [sym_parameter] = "parameter",
  [sym_operator] = "operator",
  [sym_string] = "string",
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
  [sym_ftl] = "ftl",
  [sym_import] = "import",
  [sym_include] = "include",
  [sym_recurse] = "recurse",
  [sym_setting] = "setting",
  [sym_visit] = "visit",
  [sym_assign] = "assign",
  [sym_global] = "global",
  [sym_local] = "local",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_unary_expression_repeat1] = "unary_expression_repeat1",
  [aux_sym_curveBracket_repeat1] = "curveBracket_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_items_repeat1] = "items_repeat1",
  [aux_sym_if_repeat1] = "if_repeat1",
  [aux_sym_switch_repeat1] = "switch_repeat1",
  [aux_sym_case_repeat1] = "case_repeat1",
  [aux_sym_case_repeat2] = "case_repeat2",
  [aux_sym_function_repeat1] = "function_repeat1",
  [aux_sym_macro_repeat1] = "macro_repeat1",
  [aux_sym_attempt_repeat1] = "attempt_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = {
    .visible = false,
    .named = false,
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
  [sym_fallback] = {
    .visible = true,
    .named = true,
  },
  [sym_flush] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_POUNDftl] = {
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
  [sym_lt] = {
    .visible = true,
    .named = true,
  },
  [sym_nt] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_POUNDrecurse] = {
    .visible = true,
    .named = false,
  },
  [sym_rt] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_POUNDsetting] = {
    .visible = true,
    .named = false,
  },
  [sym_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_t] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_POUNDvisit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_POUNDassign] = {
    .visible = true,
    .named = false,
  },
  [sym_end_assign] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_POUNDglobal] = {
    .visible = true,
    .named = false,
  },
  [sym_end_global] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_POUNDlocal] = {
    .visible = true,
    .named = false,
  },
  [sym_end_local] = {
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
  [sym_parameter_group] = {
    .visible = true,
    .named = true,
  },
  [sym_paramGroup] = {
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
  [sym_curveBracket] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
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
  [sym_ftl] = {
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
  [sym_recurse] = {
    .visible = true,
    .named = true,
  },
  [sym_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_visit] = {
    .visible = true,
    .named = true,
  },
  [sym_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_global] = {
    .visible = true,
    .named = true,
  },
  [sym_local] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unary_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_curveBracket_repeat1] = {
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
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '<')
        ADVANCE(13);
      if (lookahead == '=')
        ADVANCE(245);
      if (lookahead == '>')
        ADVANCE(246);
      if (lookahead == '[')
        ADVANCE(247);
      if (lookahead == ']')
        ADVANCE(248);
      if (lookahead == 'a')
        ADVANCE(249);
      if (lookahead == 'u')
        ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(251);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 3:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH);
      END_STATE();
    case 5:
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead != 0)
        ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '#')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(179);
      END_STATE();
    case 14:
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(21);
      if (lookahead == 'b')
        ADVANCE(34);
      if (lookahead == 'c')
        ADVANCE(40);
      if (lookahead == 'd')
        ADVANCE(52);
      if (lookahead == 'e')
        ADVANCE(60);
      if (lookahead == 'f')
        ADVANCE(67);
      if (lookahead == 'g')
        ADVANCE(90);
      if (lookahead == 'i')
        ADVANCE(96);
      if (lookahead == 'l')
        ADVANCE(113);
      if (lookahead == 'm')
        ADVANCE(123);
      if (lookahead == 'n')
        ADVANCE(128);
      if (lookahead == 'r')
        ADVANCE(136);
      if (lookahead == 's')
        ADVANCE(154);
      if (lookahead == 't')
        ADVANCE(172);
      if (lookahead == 'v')
        ADVANCE(174);
      END_STATE();
    case 15:
      if (lookahead == '-')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '-')
        ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(17);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-')
        ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 's')
        ADVANCE(22);
      if (lookahead == 't')
        ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 's')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'i')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'g')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'n')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LT_POUNDassign);
      END_STATE();
    case 27:
      if (lookahead == 't')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'e')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'm')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'p')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 't')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '>')
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LT_POUNDattempt_GT);
      END_STATE();
    case 34:
      if (lookahead == 'r')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'e')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'a')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'k')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == '>')
        ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_break);
      END_STATE();
    case 40:
      if (lookahead == 'a')
        ADVANCE(41);
      if (lookahead == 'o')
        ADVANCE(44);
      END_STATE();
    case 41:
      if (lookahead == 's')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'e')
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LT_POUNDcase);
      END_STATE();
    case 44:
      if (lookahead == 'n')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 't')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'i')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'n')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'u')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'e')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == '>')
        ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_continue);
      END_STATE();
    case 52:
      if (lookahead == 'e')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'f')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'a')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'u')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'l')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 't')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == '>')
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT_POUNDdefault_GT);
      END_STATE();
    case 60:
      if (lookahead == 'l')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 's')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'e')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == '>')
        ADVANCE(64);
      if (lookahead == 'i')
        ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT_POUNDelse_GT);
      END_STATE();
    case 65:
      if (lookahead == 'f')
        ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LT_POUNDelseif);
      END_STATE();
    case 67:
      if (lookahead == 'a')
        ADVANCE(68);
      if (lookahead == 'l')
        ADVANCE(76);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'u')
        ADVANCE(83);
      END_STATE();
    case 68:
      if (lookahead == 'l')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'l')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'b')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'a')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'c')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'k')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == '>')
        ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_fallback);
      END_STATE();
    case 76:
      if (lookahead == 'u')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 's')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'h')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == '>')
        ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_flush);
      END_STATE();
    case 81:
      if (lookahead == 'l')
        ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LT_POUNDftl);
      END_STATE();
    case 83:
      if (lookahead == 'n')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'c')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 't')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 'i')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 'o')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'n')
        ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LT_POUNDfunction);
      END_STATE();
    case 90:
      if (lookahead == 'l')
        ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'o')
        ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'b')
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
      ACCEPT_TOKEN(anon_sym_LT_POUNDglobal);
      END_STATE();
    case 96:
      if (lookahead == 'f')
        ADVANCE(97);
      if (lookahead == 'm')
        ADVANCE(98);
      if (lookahead == 'n')
        ADVANCE(103);
      if (lookahead == 't')
        ADVANCE(109);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LT_POUNDif);
      END_STATE();
    case 98:
      if (lookahead == 'p')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'o')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'r')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 't')
        ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LT_POUNDimport);
      END_STATE();
    case 103:
      if (lookahead == 'c')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 'l')
        ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 'u')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'd')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'e')
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LT_POUNDinclude);
      END_STATE();
    case 109:
      if (lookahead == 'e')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'm')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 's')
        ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LT_POUNDitems);
      END_STATE();
    case 113:
      if (lookahead == 'i')
        ADVANCE(114);
      if (lookahead == 'o')
        ADVANCE(117);
      if (lookahead == 't')
        ADVANCE(121);
      END_STATE();
    case 114:
      if (lookahead == 's')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 't')
        ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LT_POUNDlist);
      END_STATE();
    case 117:
      if (lookahead == 'c')
        ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 'a')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'l')
        ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LT_POUNDlocal);
      END_STATE();
    case 121:
      if (lookahead == '>')
        ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_lt);
      END_STATE();
    case 123:
      if (lookahead == 'a')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 'c')
        ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == 'r')
        ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == 'o')
        ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LT_POUNDmacro);
      END_STATE();
    case 128:
      if (lookahead == 'e')
        ADVANCE(129);
      if (lookahead == 't')
        ADVANCE(134);
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
      if (lookahead == 'e')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 'd')
        ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LT_POUNDnested);
      END_STATE();
    case 134:
      if (lookahead == '>')
        ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_nt);
      END_STATE();
    case 136:
      if (lookahead == 'e')
        ADVANCE(137);
      if (lookahead == 't')
        ADVANCE(152);
      END_STATE();
    case 137:
      if (lookahead == 'c')
        ADVANCE(138);
      if (lookahead == 't')
        ADVANCE(148);
      END_STATE();
    case 138:
      if (lookahead == 'o')
        ADVANCE(139);
      if (lookahead == 'u')
        ADVANCE(144);
      END_STATE();
    case 139:
      if (lookahead == 'v')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == 'e')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == 'r')
        ADVANCE(142);
      END_STATE();
    case 142:
      if (lookahead == '>')
        ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_recover);
      END_STATE();
    case 144:
      if (lookahead == 'r')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 's')
        ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'e')
        ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LT_POUNDrecurse);
      END_STATE();
    case 148:
      if (lookahead == 'u')
        ADVANCE(149);
      END_STATE();
    case 149:
      if (lookahead == 'r')
        ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'n')
        ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LT_POUNDreturn);
      END_STATE();
    case 152:
      if (lookahead == '>')
        ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_rt);
      END_STATE();
    case 154:
      if (lookahead == 'e')
        ADVANCE(155);
      if (lookahead == 't')
        ADVANCE(163);
      if (lookahead == 'w')
        ADVANCE(167);
      END_STATE();
    case 155:
      if (lookahead == 'p')
        ADVANCE(156);
      if (lookahead == 't')
        ADVANCE(158);
      END_STATE();
    case 156:
      if (lookahead == '>')
        ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LT_POUNDsep_GT);
      END_STATE();
    case 158:
      if (lookahead == 't')
        ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 'i')
        ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 'n')
        ADVANCE(161);
      END_STATE();
    case 161:
      if (lookahead == 'g')
        ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LT_POUNDsetting);
      END_STATE();
    case 163:
      if (lookahead == 'o')
        ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'p')
        ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == '>')
        ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_stop);
      END_STATE();
    case 167:
      if (lookahead == 'i')
        ADVANCE(168);
      END_STATE();
    case 168:
      if (lookahead == 't')
        ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 'c')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 'h')
        ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LT_POUNDswitch);
      END_STATE();
    case 172:
      if (lookahead == '>')
        ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_t);
      END_STATE();
    case 174:
      if (lookahead == 'i')
        ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead == 's')
        ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 'i')
        ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == 't')
        ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LT_POUNDvisit);
      END_STATE();
    case 179:
      if (lookahead == '#')
        ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 'a')
        ADVANCE(181);
      if (lookahead == 'f')
        ADVANCE(195);
      if (lookahead == 'g')
        ADVANCE(204);
      if (lookahead == 'i')
        ADVANCE(211);
      if (lookahead == 'l')
        ADVANCE(219);
      if (lookahead == 'm')
        ADVANCE(229);
      if (lookahead == 's')
        ADVANCE(235);
      END_STATE();
    case 181:
      if (lookahead == 's')
        ADVANCE(182);
      if (lookahead == 't')
        ADVANCE(188);
      END_STATE();
    case 182:
      if (lookahead == 's')
        ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == 'i')
        ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead == 'g')
        ADVANCE(185);
      END_STATE();
    case 185:
      if (lookahead == 'n')
        ADVANCE(186);
      END_STATE();
    case 186:
      if (lookahead == '>')
        ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_end_assign);
      END_STATE();
    case 188:
      if (lookahead == 't')
        ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == 'e')
        ADVANCE(190);
      END_STATE();
    case 190:
      if (lookahead == 'm')
        ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == 'p')
        ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == 't')
        ADVANCE(193);
      END_STATE();
    case 193:
      if (lookahead == '>')
        ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDattempt_GT);
      END_STATE();
    case 195:
      if (lookahead == 'u')
        ADVANCE(196);
      END_STATE();
    case 196:
      if (lookahead == 'n')
        ADVANCE(197);
      END_STATE();
    case 197:
      if (lookahead == 'c')
        ADVANCE(198);
      END_STATE();
    case 198:
      if (lookahead == 't')
        ADVANCE(199);
      END_STATE();
    case 199:
      if (lookahead == 'i')
        ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead == 'o')
        ADVANCE(201);
      END_STATE();
    case 201:
      if (lookahead == 'n')
        ADVANCE(202);
      END_STATE();
    case 202:
      if (lookahead == '>')
        ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDfunction_GT);
      END_STATE();
    case 204:
      if (lookahead == 'l')
        ADVANCE(205);
      END_STATE();
    case 205:
      if (lookahead == 'o')
        ADVANCE(206);
      END_STATE();
    case 206:
      if (lookahead == 'b')
        ADVANCE(207);
      END_STATE();
    case 207:
      if (lookahead == 'a')
        ADVANCE(208);
      END_STATE();
    case 208:
      if (lookahead == 'l')
        ADVANCE(209);
      END_STATE();
    case 209:
      if (lookahead == '>')
        ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_end_global);
      END_STATE();
    case 211:
      if (lookahead == 'f')
        ADVANCE(212);
      if (lookahead == 't')
        ADVANCE(214);
      END_STATE();
    case 212:
      if (lookahead == '>')
        ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDif_GT);
      END_STATE();
    case 214:
      if (lookahead == 'e')
        ADVANCE(215);
      END_STATE();
    case 215:
      if (lookahead == 'm')
        ADVANCE(216);
      END_STATE();
    case 216:
      if (lookahead == 's')
        ADVANCE(217);
      END_STATE();
    case 217:
      if (lookahead == '>')
        ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDitems_GT);
      END_STATE();
    case 219:
      if (lookahead == 'i')
        ADVANCE(220);
      if (lookahead == 'o')
        ADVANCE(224);
      END_STATE();
    case 220:
      if (lookahead == 's')
        ADVANCE(221);
      END_STATE();
    case 221:
      if (lookahead == 't')
        ADVANCE(222);
      END_STATE();
    case 222:
      if (lookahead == '>')
        ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDlist_GT);
      END_STATE();
    case 224:
      if (lookahead == 'c')
        ADVANCE(225);
      END_STATE();
    case 225:
      if (lookahead == 'a')
        ADVANCE(226);
      END_STATE();
    case 226:
      if (lookahead == 'l')
        ADVANCE(227);
      END_STATE();
    case 227:
      if (lookahead == '>')
        ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_end_local);
      END_STATE();
    case 229:
      if (lookahead == 'a')
        ADVANCE(230);
      END_STATE();
    case 230:
      if (lookahead == 'c')
        ADVANCE(231);
      END_STATE();
    case 231:
      if (lookahead == 'r')
        ADVANCE(232);
      END_STATE();
    case 232:
      if (lookahead == 'o')
        ADVANCE(233);
      END_STATE();
    case 233:
      if (lookahead == '>')
        ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDmacro_GT);
      END_STATE();
    case 235:
      if (lookahead == 'e')
        ADVANCE(236);
      if (lookahead == 'w')
        ADVANCE(239);
      END_STATE();
    case 236:
      if (lookahead == 'p')
        ADVANCE(237);
      END_STATE();
    case 237:
      if (lookahead == '>')
        ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDsep_GT);
      END_STATE();
    case 239:
      if (lookahead == 'i')
        ADVANCE(240);
      END_STATE();
    case 240:
      if (lookahead == 't')
        ADVANCE(241);
      END_STATE();
    case 241:
      if (lookahead == 'c')
        ADVANCE(242);
      END_STATE();
    case 242:
      if (lookahead == 'h')
        ADVANCE(243);
      END_STATE();
    case 243:
      if (lookahead == '>')
        ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDswitch_GT);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(251);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(251);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(251);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(251);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'g')
        ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(251);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_using);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(251);
      END_STATE();
    case 257:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(257);
      END_STATE();
    case 258:
      if (lookahead == '#')
        ADVANCE(259);
      if (lookahead == '/')
        ADVANCE(267);
      END_STATE();
    case 259:
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(21);
      if (lookahead == 'f')
        ADVANCE(67);
      if (lookahead == 'g')
        ADVANCE(90);
      if (lookahead == 'i')
        ADVANCE(260);
      if (lookahead == 'l')
        ADVANCE(113);
      if (lookahead == 'm')
        ADVANCE(123);
      if (lookahead == 'n')
        ADVANCE(261);
      if (lookahead == 'r')
        ADVANCE(262);
      if (lookahead == 's')
        ADVANCE(265);
      if (lookahead == 't')
        ADVANCE(172);
      if (lookahead == 'v')
        ADVANCE(174);
      END_STATE();
    case 260:
      if (lookahead == 'f')
        ADVANCE(97);
      if (lookahead == 'm')
        ADVANCE(98);
      if (lookahead == 'n')
        ADVANCE(103);
      END_STATE();
    case 261:
      if (lookahead == 't')
        ADVANCE(134);
      END_STATE();
    case 262:
      if (lookahead == 'e')
        ADVANCE(263);
      if (lookahead == 't')
        ADVANCE(152);
      END_STATE();
    case 263:
      if (lookahead == 'c')
        ADVANCE(264);
      END_STATE();
    case 264:
      if (lookahead == 'u')
        ADVANCE(144);
      END_STATE();
    case 265:
      if (lookahead == 'e')
        ADVANCE(266);
      if (lookahead == 't')
        ADVANCE(163);
      if (lookahead == 'w')
        ADVANCE(167);
      END_STATE();
    case 266:
      if (lookahead == 't')
        ADVANCE(158);
      END_STATE();
    case 267:
      if (lookahead == '#')
        ADVANCE(268);
      END_STATE();
    case 268:
      if (lookahead == 'a')
        ADVANCE(269);
      if (lookahead == 'g')
        ADVANCE(204);
      if (lookahead == 'l')
        ADVANCE(270);
      END_STATE();
    case 269:
      if (lookahead == 's')
        ADVANCE(182);
      END_STATE();
    case 270:
      if (lookahead == 'o')
        ADVANCE(224);
      END_STATE();
    case 271:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(245);
      if (lookahead == '>')
        ADVANCE(246);
      if (lookahead == '[')
        ADVANCE(247);
      if (lookahead == 'a')
        ADVANCE(249);
      if (lookahead == 'u')
        ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(251);
      END_STATE();
    case 272:
      if (lookahead == '<')
        ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(272);
      END_STATE();
    case 273:
      if (lookahead == '#')
        ADVANCE(274);
      if (lookahead == '/')
        ADVANCE(277);
      END_STATE();
    case 274:
      if (lookahead == 'a')
        ADVANCE(21);
      if (lookahead == 'f')
        ADVANCE(67);
      if (lookahead == 'g')
        ADVANCE(90);
      if (lookahead == 'i')
        ADVANCE(260);
      if (lookahead == 'l')
        ADVANCE(113);
      if (lookahead == 'm')
        ADVANCE(123);
      if (lookahead == 'n')
        ADVANCE(261);
      if (lookahead == 'r')
        ADVANCE(275);
      if (lookahead == 's')
        ADVANCE(265);
      if (lookahead == 't')
        ADVANCE(172);
      if (lookahead == 'v')
        ADVANCE(174);
      END_STATE();
    case 275:
      if (lookahead == 'e')
        ADVANCE(276);
      if (lookahead == 't')
        ADVANCE(152);
      END_STATE();
    case 276:
      if (lookahead == 'c')
        ADVANCE(138);
      END_STATE();
    case 277:
      if (lookahead == '#')
        ADVANCE(278);
      END_STATE();
    case 278:
      if (lookahead == 'a')
        ADVANCE(181);
      if (lookahead == 'g')
        ADVANCE(204);
      if (lookahead == 'l')
        ADVANCE(270);
      END_STATE();
    case 279:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(279);
      END_STATE();
    case 280:
      if (lookahead == '#')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(281);
      END_STATE();
    case 281:
      if (lookahead == '#')
        ADVANCE(282);
      END_STATE();
    case 282:
      if (lookahead == 'a')
        ADVANCE(181);
      if (lookahead == 'f')
        ADVANCE(195);
      if (lookahead == 'g')
        ADVANCE(204);
      if (lookahead == 'i')
        ADVANCE(211);
      if (lookahead == 'l')
        ADVANCE(219);
      if (lookahead == 'm')
        ADVANCE(229);
      if (lookahead == 's')
        ADVANCE(283);
      END_STATE();
    case 283:
      if (lookahead == 'w')
        ADVANCE(239);
      END_STATE();
    case 284:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(284);
      END_STATE();
    case 285:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(245);
      if (lookahead == '>')
        ADVANCE(246);
      if (lookahead == 'a')
        ADVANCE(286);
      if (lookahead == 'u')
        ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(285);
      END_STATE();
    case 286:
      if (lookahead == 's')
        ADVANCE(287);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 288:
      if (lookahead == 's')
        ADVANCE(289);
      END_STATE();
    case 289:
      if (lookahead == 'i')
        ADVANCE(290);
      END_STATE();
    case 290:
      if (lookahead == 'n')
        ADVANCE(291);
      END_STATE();
    case 291:
      if (lookahead == 'g')
        ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 293:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '>')
        ADVANCE(246);
      if (lookahead == '[')
        ADVANCE(247);
      if (lookahead == ']')
        ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(251);
      END_STATE();
    case 294:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(245);
      if (lookahead == '>')
        ADVANCE(246);
      if (lookahead == '[')
        ADVANCE(247);
      if (lookahead == 'a')
        ADVANCE(249);
      if (lookahead == 'u')
        ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(251);
      END_STATE();
    case 295:
      if (lookahead == '<')
        ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(295);
      END_STATE();
    case 296:
      if (lookahead == '#')
        ADVANCE(297);
      if (lookahead == '/')
        ADVANCE(298);
      END_STATE();
    case 297:
      if (lookahead == 'a')
        ADVANCE(21);
      if (lookahead == 'e')
        ADVANCE(60);
      if (lookahead == 'f')
        ADVANCE(67);
      if (lookahead == 'g')
        ADVANCE(90);
      if (lookahead == 'i')
        ADVANCE(260);
      if (lookahead == 'l')
        ADVANCE(113);
      if (lookahead == 'm')
        ADVANCE(123);
      if (lookahead == 'n')
        ADVANCE(261);
      if (lookahead == 'r')
        ADVANCE(262);
      if (lookahead == 's')
        ADVANCE(265);
      if (lookahead == 't')
        ADVANCE(172);
      if (lookahead == 'v')
        ADVANCE(174);
      END_STATE();
    case 298:
      if (lookahead == '#')
        ADVANCE(299);
      END_STATE();
    case 299:
      if (lookahead == 'a')
        ADVANCE(269);
      if (lookahead == 'g')
        ADVANCE(204);
      if (lookahead == 'i')
        ADVANCE(300);
      if (lookahead == 'l')
        ADVANCE(270);
      END_STATE();
    case 300:
      if (lookahead == 'f')
        ADVANCE(212);
      END_STATE();
    case 301:
      if (lookahead == '<')
        ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(301);
      END_STATE();
    case 302:
      if (lookahead == '#')
        ADVANCE(303);
      if (lookahead == '/')
        ADVANCE(306);
      END_STATE();
    case 303:
      if (lookahead == 'a')
        ADVANCE(21);
      if (lookahead == 'f')
        ADVANCE(67);
      if (lookahead == 'g')
        ADVANCE(90);
      if (lookahead == 'i')
        ADVANCE(260);
      if (lookahead == 'l')
        ADVANCE(113);
      if (lookahead == 'm')
        ADVANCE(123);
      if (lookahead == 'n')
        ADVANCE(261);
      if (lookahead == 'r')
        ADVANCE(304);
      if (lookahead == 's')
        ADVANCE(265);
      if (lookahead == 't')
        ADVANCE(172);
      if (lookahead == 'v')
        ADVANCE(174);
      END_STATE();
    case 304:
      if (lookahead == 'e')
        ADVANCE(305);
      if (lookahead == 't')
        ADVANCE(152);
      END_STATE();
    case 305:
      if (lookahead == 'c')
        ADVANCE(264);
      if (lookahead == 't')
        ADVANCE(148);
      END_STATE();
    case 306:
      if (lookahead == '#')
        ADVANCE(307);
      END_STATE();
    case 307:
      if (lookahead == 'a')
        ADVANCE(269);
      if (lookahead == 'f')
        ADVANCE(195);
      if (lookahead == 'g')
        ADVANCE(204);
      if (lookahead == 'l')
        ADVANCE(270);
      END_STATE();
    case 308:
      if (lookahead == '<')
        ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(308);
      END_STATE();
    case 309:
      if (lookahead == '#')
        ADVANCE(310);
      if (lookahead == '/')
        ADVANCE(311);
      END_STATE();
    case 310:
      if (lookahead == 'a')
        ADVANCE(21);
      if (lookahead == 'f')
        ADVANCE(67);
      if (lookahead == 'g')
        ADVANCE(90);
      if (lookahead == 'i')
        ADVANCE(260);
      if (lookahead == 'l')
        ADVANCE(113);
      if (lookahead == 'm')
        ADVANCE(123);
      if (lookahead == 'n')
        ADVANCE(128);
      if (lookahead == 'r')
        ADVANCE(304);
      if (lookahead == 's')
        ADVANCE(265);
      if (lookahead == 't')
        ADVANCE(172);
      if (lookahead == 'v')
        ADVANCE(174);
      END_STATE();
    case 311:
      if (lookahead == '#')
        ADVANCE(312);
      END_STATE();
    case 312:
      if (lookahead == 'a')
        ADVANCE(269);
      if (lookahead == 'g')
        ADVANCE(204);
      if (lookahead == 'l')
        ADVANCE(270);
      if (lookahead == 'm')
        ADVANCE(229);
      END_STATE();
    case 313:
      if (lookahead == '<')
        ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(313);
      END_STATE();
    case 314:
      if (lookahead == '#')
        ADVANCE(315);
      if (lookahead == '/')
        ADVANCE(321);
      END_STATE();
    case 315:
      if (lookahead == 'a')
        ADVANCE(21);
      if (lookahead == 'b')
        ADVANCE(34);
      if (lookahead == 'c')
        ADVANCE(316);
      if (lookahead == 'e')
        ADVANCE(317);
      if (lookahead == 'f')
        ADVANCE(67);
      if (lookahead == 'g')
        ADVANCE(90);
      if (lookahead == 'i')
        ADVANCE(96);
      if (lookahead == 'l')
        ADVANCE(113);
      if (lookahead == 'm')
        ADVANCE(123);
      if (lookahead == 'n')
        ADVANCE(261);
      if (lookahead == 'r')
        ADVANCE(262);
      if (lookahead == 's')
        ADVANCE(154);
      if (lookahead == 't')
        ADVANCE(172);
      if (lookahead == 'v')
        ADVANCE(174);
      END_STATE();
    case 316:
      if (lookahead == 'o')
        ADVANCE(44);
      END_STATE();
    case 317:
      if (lookahead == 'l')
        ADVANCE(318);
      END_STATE();
    case 318:
      if (lookahead == 's')
        ADVANCE(319);
      END_STATE();
    case 319:
      if (lookahead == 'e')
        ADVANCE(320);
      END_STATE();
    case 320:
      if (lookahead == '>')
        ADVANCE(64);
      END_STATE();
    case 321:
      if (lookahead == '#')
        ADVANCE(322);
      END_STATE();
    case 322:
      if (lookahead == 'a')
        ADVANCE(269);
      if (lookahead == 'g')
        ADVANCE(204);
      if (lookahead == 'l')
        ADVANCE(219);
      END_STATE();
    case 323:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(245);
      if (lookahead == '[')
        ADVANCE(247);
      if (lookahead == 'a')
        ADVANCE(249);
      if (lookahead == 'u')
        ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(251);
      END_STATE();
    case 324:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '[')
        ADVANCE(247);
      if (lookahead == ']')
        ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(251);
      END_STATE();
    case 325:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '>')
        ADVANCE(246);
      if (lookahead == '[')
        ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(251);
      END_STATE();
    case 326:
      if (lookahead == '<')
        ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(326);
      END_STATE();
    case 327:
      if (lookahead == '#')
        ADVANCE(328);
      if (lookahead == '/')
        ADVANCE(330);
      END_STATE();
    case 328:
      if (lookahead == 'a')
        ADVANCE(21);
      if (lookahead == 'b')
        ADVANCE(34);
      if (lookahead == 'c')
        ADVANCE(329);
      if (lookahead == 'd')
        ADVANCE(52);
      if (lookahead == 'f')
        ADVANCE(67);
      if (lookahead == 'g')
        ADVANCE(90);
      if (lookahead == 'i')
        ADVANCE(260);
      if (lookahead == 'l')
        ADVANCE(113);
      if (lookahead == 'm')
        ADVANCE(123);
      if (lookahead == 'n')
        ADVANCE(261);
      if (lookahead == 'r')
        ADVANCE(262);
      if (lookahead == 's')
        ADVANCE(265);
      if (lookahead == 't')
        ADVANCE(172);
      if (lookahead == 'v')
        ADVANCE(174);
      END_STATE();
    case 329:
      if (lookahead == 'a')
        ADVANCE(41);
      END_STATE();
    case 330:
      if (lookahead == '#')
        ADVANCE(331);
      END_STATE();
    case 331:
      if (lookahead == 'a')
        ADVANCE(269);
      if (lookahead == 'g')
        ADVANCE(204);
      if (lookahead == 'l')
        ADVANCE(270);
      if (lookahead == 's')
        ADVANCE(283);
      END_STATE();
    case 332:
      if (lookahead == '<')
        ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(332);
      END_STATE();
    case 333:
      if (lookahead == '#')
        ADVANCE(315);
      if (lookahead == '/')
        ADVANCE(334);
      END_STATE();
    case 334:
      if (lookahead == '#')
        ADVANCE(335);
      END_STATE();
    case 335:
      if (lookahead == 'a')
        ADVANCE(269);
      if (lookahead == 'g')
        ADVANCE(204);
      if (lookahead == 'i')
        ADVANCE(336);
      if (lookahead == 'l')
        ADVANCE(219);
      if (lookahead == 's')
        ADVANCE(337);
      END_STATE();
    case 336:
      if (lookahead == 't')
        ADVANCE(214);
      END_STATE();
    case 337:
      if (lookahead == 'e')
        ADVANCE(236);
      END_STATE();
    case 338:
      if (lookahead == '<')
        ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(338);
      END_STATE();
    case 339:
      if (lookahead == '#')
        ADVANCE(310);
      if (lookahead == '/')
        ADVANCE(340);
      END_STATE();
    case 340:
      if (lookahead == '#')
        ADVANCE(341);
      END_STATE();
    case 341:
      if (lookahead == 'a')
        ADVANCE(269);
      if (lookahead == 'f')
        ADVANCE(195);
      if (lookahead == 'g')
        ADVANCE(204);
      if (lookahead == 'l')
        ADVANCE(270);
      if (lookahead == 'm')
        ADVANCE(229);
      END_STATE();
    case 342:
      if (lookahead == '<')
        ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(342);
      END_STATE();
    case 343:
      if (lookahead == '#')
        ADVANCE(344);
      if (lookahead == '/')
        ADVANCE(345);
      END_STATE();
    case 344:
      if (lookahead == 'a')
        ADVANCE(21);
      if (lookahead == 'b')
        ADVANCE(34);
      if (lookahead == 'c')
        ADVANCE(316);
      if (lookahead == 'f')
        ADVANCE(67);
      if (lookahead == 'g')
        ADVANCE(90);
      if (lookahead == 'i')
        ADVANCE(260);
      if (lookahead == 'l')
        ADVANCE(113);
      if (lookahead == 'm')
        ADVANCE(123);
      if (lookahead == 'n')
        ADVANCE(261);
      if (lookahead == 'r')
        ADVANCE(262);
      if (lookahead == 's')
        ADVANCE(154);
      if (lookahead == 't')
        ADVANCE(172);
      if (lookahead == 'v')
        ADVANCE(174);
      END_STATE();
    case 345:
      if (lookahead == '#')
        ADVANCE(346);
      END_STATE();
    case 346:
      if (lookahead == 'a')
        ADVANCE(269);
      if (lookahead == 'g')
        ADVANCE(204);
      if (lookahead == 'i')
        ADVANCE(336);
      if (lookahead == 'l')
        ADVANCE(270);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 257},
  [2] = {.lex_state = 271},
  [3] = {.lex_state = 271},
  [4] = {.lex_state = 271},
  [5] = {.lex_state = 271},
  [6] = {.lex_state = 271},
  [7] = {.lex_state = 272},
  [8] = {.lex_state = 279},
  [9] = {.lex_state = 271},
  [10] = {.lex_state = 271},
  [11] = {.lex_state = 271},
  [12] = {.lex_state = 271},
  [13] = {.lex_state = 271},
  [14] = {.lex_state = 271},
  [15] = {.lex_state = 271},
  [16] = {.lex_state = 279},
  [17] = {.lex_state = 271},
  [18] = {.lex_state = 279},
  [19] = {.lex_state = 271},
  [20] = {.lex_state = 279},
  [21] = {.lex_state = 284},
  [22] = {.lex_state = 257},
  [23] = {.lex_state = 285},
  [24] = {.lex_state = 293},
  [25] = {.lex_state = 285},
  [26] = {.lex_state = 271},
  [27] = {.lex_state = 294},
  [28] = {.lex_state = 285},
  [29] = {.lex_state = 293},
  [30] = {.lex_state = 285},
  [31] = {.lex_state = 294},
  [32] = {.lex_state = 295},
  [33] = {.lex_state = 285},
  [34] = {.lex_state = 293},
  [35] = {.lex_state = 294},
  [36] = {.lex_state = 271},
  [37] = {.lex_state = 271},
  [38] = {.lex_state = 301},
  [39] = {.lex_state = 271},
  [40] = {.lex_state = 308},
  [41] = {.lex_state = 271},
  [42] = {.lex_state = 279},
  [43] = {.lex_state = 272},
  [44] = {.lex_state = 272},
  [45] = {.lex_state = 279},
  [46] = {.lex_state = 271},
  [47] = {.lex_state = 279},
  [48] = {.lex_state = 271},
  [49] = {.lex_state = 279},
  [50] = {.lex_state = 271},
  [51] = {.lex_state = 279},
  [52] = {.lex_state = 271},
  [53] = {.lex_state = 279},
  [54] = {.lex_state = 271},
  [55] = {.lex_state = 279},
  [56] = {.lex_state = 271},
  [57] = {.lex_state = 279},
  [58] = {.lex_state = 271},
  [59] = {.lex_state = 279},
  [60] = {.lex_state = 271},
  [61] = {.lex_state = 279},
  [62] = {.lex_state = 271},
  [63] = {.lex_state = 257},
  [64] = {.lex_state = 313},
  [65] = {.lex_state = 293},
  [66] = {.lex_state = 293},
  [67] = {.lex_state = 323},
  [68] = {.lex_state = 324},
  [69] = {.lex_state = 293},
  [70] = {.lex_state = 293},
  [71] = {.lex_state = 325},
  [72] = {.lex_state = 295},
  [73] = {.lex_state = 279},
  [74] = {.lex_state = 271},
  [75] = {.lex_state = 295},
  [76] = {.lex_state = 295},
  [77] = {.lex_state = 295},
  [78] = {.lex_state = 293},
  [79] = {.lex_state = 294},
  [80] = {.lex_state = 323},
  [81] = {.lex_state = 324},
  [82] = {.lex_state = 294},
  [83] = {.lex_state = 271},
  [84] = {.lex_state = 295},
  [85] = {.lex_state = 271},
  [86] = {.lex_state = 326},
  [87] = {.lex_state = 279},
  [88] = {.lex_state = 271},
  [89] = {.lex_state = 301},
  [90] = {.lex_state = 301},
  [91] = {.lex_state = 301},
  [92] = {.lex_state = 279},
  [93] = {.lex_state = 271},
  [94] = {.lex_state = 308},
  [95] = {.lex_state = 308},
  [96] = {.lex_state = 308},
  [97] = {.lex_state = 279},
  [98] = {.lex_state = 272},
  [99] = {.lex_state = 279},
  [100] = {.lex_state = 279},
  [101] = {.lex_state = 279},
  [102] = {.lex_state = 279},
  [103] = {.lex_state = 279},
  [104] = {.lex_state = 279},
  [105] = {.lex_state = 279},
  [106] = {.lex_state = 279},
  [107] = {.lex_state = 279},
  [108] = {.lex_state = 279},
  [109] = {.lex_state = 313},
  [110] = {.lex_state = 313},
  [111] = {.lex_state = 271},
  [112] = {.lex_state = 332},
  [113] = {.lex_state = 313},
  [114] = {.lex_state = 332},
  [115] = {.lex_state = 313},
  [116] = {.lex_state = 325},
  [117] = {.lex_state = 293},
  [118] = {.lex_state = 285},
  [119] = {.lex_state = 293},
  [120] = {.lex_state = 323},
  [121] = {.lex_state = 293},
  [122] = {.lex_state = 324},
  [123] = {.lex_state = 293},
  [124] = {.lex_state = 325},
  [125] = {.lex_state = 295},
  [126] = {.lex_state = 295},
  [127] = {.lex_state = 271},
  [128] = {.lex_state = 279},
  [129] = {.lex_state = 295},
  [130] = {.lex_state = 295},
  [131] = {.lex_state = 271},
  [132] = {.lex_state = 294},
  [133] = {.lex_state = 323},
  [134] = {.lex_state = 294},
  [135] = {.lex_state = 324},
  [136] = {.lex_state = 294},
  [137] = {.lex_state = 271},
  [138] = {.lex_state = 295},
  [139] = {.lex_state = 279},
  [140] = {.lex_state = 271},
  [141] = {.lex_state = 326},
  [142] = {.lex_state = 326},
  [143] = {.lex_state = 326},
  [144] = {.lex_state = 326},
  [145] = {.lex_state = 338},
  [146] = {.lex_state = 271},
  [147] = {.lex_state = 279},
  [148] = {.lex_state = 301},
  [149] = {.lex_state = 301},
  [150] = {.lex_state = 308},
  [151] = {.lex_state = 271},
  [152] = {.lex_state = 279},
  [153] = {.lex_state = 308},
  [154] = {.lex_state = 308},
  [155] = {.lex_state = 313},
  [156] = {.lex_state = 271},
  [157] = {.lex_state = 332},
  [158] = {.lex_state = 279},
  [159] = {.lex_state = 313},
  [160] = {.lex_state = 313},
  [161] = {.lex_state = 293},
  [162] = {.lex_state = 323},
  [163] = {.lex_state = 293},
  [164] = {.lex_state = 323},
  [165] = {.lex_state = 293},
  [166] = {.lex_state = 324},
  [167] = {.lex_state = 295},
  [168] = {.lex_state = 295},
  [169] = {.lex_state = 279},
  [170] = {.lex_state = 294},
  [171] = {.lex_state = 294},
  [172] = {.lex_state = 295},
  [173] = {.lex_state = 271},
  [174] = {.lex_state = 326},
  [175] = {.lex_state = 279},
  [176] = {.lex_state = 326},
  [177] = {.lex_state = 326},
  [178] = {.lex_state = 338},
  [179] = {.lex_state = 279},
  [180] = {.lex_state = 308},
  [181] = {.lex_state = 279},
  [182] = {.lex_state = 313},
  [183] = {.lex_state = 342},
  [184] = {.lex_state = 279},
  [185] = {.lex_state = 323},
  [186] = {.lex_state = 323},
  [187] = {.lex_state = 279},
  [188] = {.lex_state = 326},
  [189] = {.lex_state = 326},
  [190] = {.lex_state = 279},
  [191] = {.lex_state = 342},
  [192] = {.lex_state = 313},
  [193] = {.lex_state = 342},
  [194] = {.lex_state = 326},
  [195] = {.lex_state = 326},
  [196] = {.lex_state = 313},
  [197] = {.lex_state = 342},
  [198] = {.lex_state = 326},
  [199] = {.lex_state = 326},
  [200] = {.lex_state = 326},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(3),
    [anon_sym_using] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(1),
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
    [sym_fallback] = ACTIONS(1),
    [sym_flush] = ACTIONS(1),
    [anon_sym_LT_POUNDftl] = ACTIONS(1),
    [anon_sym_LT_POUNDimport] = ACTIONS(1),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1),
    [sym_lt] = ACTIONS(1),
    [sym_nt] = ACTIONS(1),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1),
    [sym_rt] = ACTIONS(1),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1),
    [sym_stop] = ACTIONS(1),
    [sym_t] = ACTIONS(1),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1),
    [anon_sym_LT_POUNDassign] = ACTIONS(1),
    [sym_end_assign] = ACTIONS(1),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1),
    [sym_end_global] = ACTIONS(1),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1),
    [sym_end_local] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(21),
    [sym__definition] = STATE(22),
    [sym_directive] = STATE(22),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(19),
    [sym_fallback] = ACTIONS(21),
    [sym_flush] = ACTIONS(21),
    [anon_sym_LT_POUNDftl] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [sym_lt] = ACTIONS(21),
    [sym_nt] = ACTIONS(21),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(29),
    [sym_rt] = ACTIONS(21),
    [anon_sym_LT_POUNDsetting] = ACTIONS(31),
    [sym_stop] = ACTIONS(21),
    [sym_t] = ACTIONS(21),
    [anon_sym_LT_POUNDvisit] = ACTIONS(33),
    [anon_sym_LT_POUNDassign] = ACTIONS(35),
    [sym_end_assign] = ACTIONS(37),
    [anon_sym_LT_POUNDglobal] = ACTIONS(39),
    [sym_end_global] = ACTIONS(41),
    [anon_sym_LT_POUNDlocal] = ACTIONS(43),
    [sym_end_local] = ACTIONS(45),
  },
  [2] = {
    [sym_parameter_group] = STATE(26),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [sym_string] = STATE(30),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(53),
  },
  [3] = {
    [sym_parameter_group] = STATE(36),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(33),
    [sym_operator] = STATE(34),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(36),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(57),
  },
  [4] = {
    [sym_parameter_group] = STATE(37),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [sym_string] = STATE(30),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(53),
  },
  [5] = {
    [sym_parameter_group] = STATE(39),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(33),
    [sym_operator] = STATE(34),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(39),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(59),
  },
  [6] = {
    [sym_parameter_group] = STATE(41),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(33),
    [sym_operator] = STATE(34),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(41),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(61),
  },
  [7] = {
    [sym_directive] = STATE(43),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_attempt_middle] = STATE(44),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_attempt_repeat1] = STATE(44),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(19),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(63),
    [sym_recover] = ACTIONS(65),
    [sym_fallback] = ACTIONS(21),
    [sym_flush] = ACTIONS(21),
    [anon_sym_LT_POUNDftl] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [sym_lt] = ACTIONS(21),
    [sym_nt] = ACTIONS(21),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(29),
    [sym_rt] = ACTIONS(21),
    [anon_sym_LT_POUNDsetting] = ACTIONS(31),
    [sym_stop] = ACTIONS(21),
    [sym_t] = ACTIONS(21),
    [anon_sym_LT_POUNDvisit] = ACTIONS(33),
    [anon_sym_LT_POUNDassign] = ACTIONS(35),
    [sym_end_assign] = ACTIONS(37),
    [anon_sym_LT_POUNDglobal] = ACTIONS(39),
    [sym_end_global] = ACTIONS(41),
    [anon_sym_LT_POUNDlocal] = ACTIONS(43),
    [sym_end_local] = ACTIONS(45),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_comment] = ACTIONS(67),
    [anon_sym_LT_POUNDlist] = ACTIONS(67),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(67),
    [sym_break] = ACTIONS(67),
    [sym_continue] = ACTIONS(67),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(67),
    [anon_sym_LT_POUNDitems] = ACTIONS(67),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(67),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(67),
    [anon_sym_LT_POUNDif] = ACTIONS(67),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(67),
    [anon_sym_LT_POUNDelseif] = ACTIONS(67),
    [anon_sym_LT_POUNDswitch] = ACTIONS(67),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(67),
    [anon_sym_LT_POUNDcase] = ACTIONS(67),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(67),
    [anon_sym_LT_POUNDfunction] = ACTIONS(67),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(67),
    [anon_sym_LT_POUNDreturn] = ACTIONS(67),
    [anon_sym_LT_POUNDmacro] = ACTIONS(67),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(67),
    [anon_sym_LT_POUNDnested] = ACTIONS(67),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(67),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(67),
    [sym_recover] = ACTIONS(67),
    [sym_fallback] = ACTIONS(67),
    [sym_flush] = ACTIONS(67),
    [anon_sym_LT_POUNDftl] = ACTIONS(67),
    [anon_sym_LT_POUNDimport] = ACTIONS(67),
    [anon_sym_LT_POUNDinclude] = ACTIONS(67),
    [sym_lt] = ACTIONS(67),
    [sym_nt] = ACTIONS(67),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(67),
    [sym_rt] = ACTIONS(67),
    [anon_sym_LT_POUNDsetting] = ACTIONS(67),
    [sym_stop] = ACTIONS(67),
    [sym_t] = ACTIONS(67),
    [anon_sym_LT_POUNDvisit] = ACTIONS(67),
    [anon_sym_LT_POUNDassign] = ACTIONS(67),
    [sym_end_assign] = ACTIONS(67),
    [anon_sym_LT_POUNDglobal] = ACTIONS(67),
    [sym_end_global] = ACTIONS(67),
    [anon_sym_LT_POUNDlocal] = ACTIONS(67),
    [sym_end_local] = ACTIONS(67),
  },
  [9] = {
    [sym_parameter_group] = STATE(46),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(33),
    [sym_operator] = STATE(34),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(46),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(69),
  },
  [10] = {
    [sym_parameter_group] = STATE(48),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(33),
    [sym_operator] = STATE(34),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(48),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(71),
  },
  [11] = {
    [sym_parameter_group] = STATE(50),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(33),
    [sym_operator] = STATE(34),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(50),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(73),
  },
  [12] = {
    [sym_parameter_group] = STATE(52),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(33),
    [sym_operator] = STATE(34),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(52),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(75),
  },
  [13] = {
    [sym_parameter_group] = STATE(54),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(33),
    [sym_operator] = STATE(34),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(54),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(77),
  },
  [14] = {
    [sym_parameter_group] = STATE(56),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(33),
    [sym_operator] = STATE(34),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(56),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(79),
  },
  [15] = {
    [sym_parameter_group] = STATE(58),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(33),
    [sym_operator] = STATE(34),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(58),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(81),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [sym_comment] = ACTIONS(83),
    [anon_sym_LT_POUNDlist] = ACTIONS(83),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(83),
    [sym_break] = ACTIONS(83),
    [sym_continue] = ACTIONS(83),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(83),
    [anon_sym_LT_POUNDitems] = ACTIONS(83),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(83),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(83),
    [anon_sym_LT_POUNDif] = ACTIONS(83),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(83),
    [anon_sym_LT_POUNDelseif] = ACTIONS(83),
    [anon_sym_LT_POUNDswitch] = ACTIONS(83),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(83),
    [anon_sym_LT_POUNDcase] = ACTIONS(83),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(83),
    [anon_sym_LT_POUNDfunction] = ACTIONS(83),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(83),
    [anon_sym_LT_POUNDreturn] = ACTIONS(83),
    [anon_sym_LT_POUNDmacro] = ACTIONS(83),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(83),
    [anon_sym_LT_POUNDnested] = ACTIONS(83),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(83),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(83),
    [sym_recover] = ACTIONS(83),
    [sym_fallback] = ACTIONS(83),
    [sym_flush] = ACTIONS(83),
    [anon_sym_LT_POUNDftl] = ACTIONS(83),
    [anon_sym_LT_POUNDimport] = ACTIONS(83),
    [anon_sym_LT_POUNDinclude] = ACTIONS(83),
    [sym_lt] = ACTIONS(83),
    [sym_nt] = ACTIONS(83),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(83),
    [sym_rt] = ACTIONS(83),
    [anon_sym_LT_POUNDsetting] = ACTIONS(83),
    [sym_stop] = ACTIONS(83),
    [sym_t] = ACTIONS(83),
    [anon_sym_LT_POUNDvisit] = ACTIONS(83),
    [anon_sym_LT_POUNDassign] = ACTIONS(83),
    [sym_end_assign] = ACTIONS(83),
    [anon_sym_LT_POUNDglobal] = ACTIONS(83),
    [sym_end_global] = ACTIONS(83),
    [anon_sym_LT_POUNDlocal] = ACTIONS(83),
    [sym_end_local] = ACTIONS(83),
  },
  [17] = {
    [sym_parameter_group] = STATE(60),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(33),
    [sym_operator] = STATE(34),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(60),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(85),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_comment] = ACTIONS(87),
    [anon_sym_LT_POUNDlist] = ACTIONS(87),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(87),
    [sym_break] = ACTIONS(87),
    [sym_continue] = ACTIONS(87),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(87),
    [anon_sym_LT_POUNDitems] = ACTIONS(87),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(87),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(87),
    [anon_sym_LT_POUNDif] = ACTIONS(87),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(87),
    [anon_sym_LT_POUNDelseif] = ACTIONS(87),
    [anon_sym_LT_POUNDswitch] = ACTIONS(87),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(87),
    [anon_sym_LT_POUNDcase] = ACTIONS(87),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(87),
    [anon_sym_LT_POUNDfunction] = ACTIONS(87),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(87),
    [anon_sym_LT_POUNDreturn] = ACTIONS(87),
    [anon_sym_LT_POUNDmacro] = ACTIONS(87),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(87),
    [anon_sym_LT_POUNDnested] = ACTIONS(87),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(87),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(87),
    [sym_recover] = ACTIONS(87),
    [sym_fallback] = ACTIONS(87),
    [sym_flush] = ACTIONS(87),
    [anon_sym_LT_POUNDftl] = ACTIONS(87),
    [anon_sym_LT_POUNDimport] = ACTIONS(87),
    [anon_sym_LT_POUNDinclude] = ACTIONS(87),
    [sym_lt] = ACTIONS(87),
    [sym_nt] = ACTIONS(87),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(87),
    [sym_rt] = ACTIONS(87),
    [anon_sym_LT_POUNDsetting] = ACTIONS(87),
    [sym_stop] = ACTIONS(87),
    [sym_t] = ACTIONS(87),
    [anon_sym_LT_POUNDvisit] = ACTIONS(87),
    [anon_sym_LT_POUNDassign] = ACTIONS(87),
    [sym_end_assign] = ACTIONS(87),
    [anon_sym_LT_POUNDglobal] = ACTIONS(87),
    [sym_end_global] = ACTIONS(87),
    [anon_sym_LT_POUNDlocal] = ACTIONS(87),
    [sym_end_local] = ACTIONS(87),
  },
  [19] = {
    [sym_parameter_group] = STATE(62),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(33),
    [sym_operator] = STATE(34),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(62),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(89),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym_comment] = ACTIONS(91),
    [anon_sym_LT_POUNDlist] = ACTIONS(91),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(91),
    [sym_break] = ACTIONS(91),
    [sym_continue] = ACTIONS(91),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(91),
    [anon_sym_LT_POUNDitems] = ACTIONS(91),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(91),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(91),
    [anon_sym_LT_POUNDif] = ACTIONS(91),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(91),
    [anon_sym_LT_POUNDelseif] = ACTIONS(91),
    [anon_sym_LT_POUNDswitch] = ACTIONS(91),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(91),
    [anon_sym_LT_POUNDcase] = ACTIONS(91),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(91),
    [anon_sym_LT_POUNDfunction] = ACTIONS(91),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(91),
    [anon_sym_LT_POUNDreturn] = ACTIONS(91),
    [anon_sym_LT_POUNDmacro] = ACTIONS(91),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(91),
    [anon_sym_LT_POUNDnested] = ACTIONS(91),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(91),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(91),
    [sym_recover] = ACTIONS(91),
    [sym_fallback] = ACTIONS(91),
    [sym_flush] = ACTIONS(91),
    [anon_sym_LT_POUNDftl] = ACTIONS(91),
    [anon_sym_LT_POUNDimport] = ACTIONS(91),
    [anon_sym_LT_POUNDinclude] = ACTIONS(91),
    [sym_lt] = ACTIONS(91),
    [sym_nt] = ACTIONS(91),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(91),
    [sym_rt] = ACTIONS(91),
    [anon_sym_LT_POUNDsetting] = ACTIONS(91),
    [sym_stop] = ACTIONS(91),
    [sym_t] = ACTIONS(91),
    [anon_sym_LT_POUNDvisit] = ACTIONS(91),
    [anon_sym_LT_POUNDassign] = ACTIONS(91),
    [sym_end_assign] = ACTIONS(91),
    [anon_sym_LT_POUNDglobal] = ACTIONS(91),
    [sym_end_global] = ACTIONS(91),
    [anon_sym_LT_POUNDlocal] = ACTIONS(91),
    [sym_end_local] = ACTIONS(91),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(93),
  },
  [22] = {
    [sym__definition] = STATE(63),
    [sym_directive] = STATE(63),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_comment] = ACTIONS(97),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(19),
    [sym_fallback] = ACTIONS(21),
    [sym_flush] = ACTIONS(21),
    [anon_sym_LT_POUNDftl] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [sym_lt] = ACTIONS(21),
    [sym_nt] = ACTIONS(21),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(29),
    [sym_rt] = ACTIONS(21),
    [anon_sym_LT_POUNDsetting] = ACTIONS(31),
    [sym_stop] = ACTIONS(21),
    [sym_t] = ACTIONS(21),
    [anon_sym_LT_POUNDvisit] = ACTIONS(33),
    [anon_sym_LT_POUNDassign] = ACTIONS(35),
    [sym_end_assign] = ACTIONS(37),
    [anon_sym_LT_POUNDglobal] = ACTIONS(39),
    [sym_end_global] = ACTIONS(41),
    [anon_sym_LT_POUNDlocal] = ACTIONS(43),
    [sym_end_local] = ACTIONS(45),
  },
  [23] = {
    [anon_sym_as] = ACTIONS(99),
    [anon_sym_using] = ACTIONS(99),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_BANG] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(99),
  },
  [24] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(101),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(101),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(101),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(101),
  },
  [25] = {
    [anon_sym_as] = ACTIONS(103),
    [anon_sym_using] = ACTIONS(103),
    [anon_sym_EQ] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(103),
  },
  [26] = {
    [anon_sym_GT] = ACTIONS(105),
  },
  [27] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_as] = ACTIONS(107),
    [anon_sym_using] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(109),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
  },
  [28] = {
    [sym_operator] = STATE(65),
    [anon_sym_as] = ACTIONS(51),
    [anon_sym_using] = ACTIONS(51),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
  },
  [29] = {
    [sym_expression] = STATE(71),
    [sym_curveBracket] = STATE(66),
    [sym_sequence] = STATE(66),
    [sym_string] = STATE(70),
    [aux_sym_unary_expression_repeat1] = STATE(71),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(111),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(115),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(117),
  },
  [30] = {
    [anon_sym_as] = ACTIONS(99),
    [anon_sym_using] = ACTIONS(99),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_BANG] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(119),
  },
  [31] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_as] = ACTIONS(121),
    [anon_sym_using] = ACTIONS(121),
    [anon_sym_EQ] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(103),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(103),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(103),
  },
  [32] = {
    [sym_directive] = STATE(75),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_if_else] = STATE(76),
    [sym_elseif] = STATE(75),
    [sym_if_middle] = STATE(77),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_if_repeat1] = STATE(77),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(123),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(125),
    [anon_sym_LT_POUNDelseif] = ACTIONS(127),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(19),
    [sym_fallback] = ACTIONS(21),
    [sym_flush] = ACTIONS(21),
    [anon_sym_LT_POUNDftl] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [sym_lt] = ACTIONS(21),
    [sym_nt] = ACTIONS(21),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(29),
    [sym_rt] = ACTIONS(21),
    [anon_sym_LT_POUNDsetting] = ACTIONS(31),
    [sym_stop] = ACTIONS(21),
    [sym_t] = ACTIONS(21),
    [anon_sym_LT_POUNDvisit] = ACTIONS(33),
    [anon_sym_LT_POUNDassign] = ACTIONS(35),
    [sym_end_assign] = ACTIONS(37),
    [anon_sym_LT_POUNDglobal] = ACTIONS(39),
    [sym_end_global] = ACTIONS(41),
    [anon_sym_LT_POUNDlocal] = ACTIONS(43),
    [sym_end_local] = ACTIONS(45),
  },
  [33] = {
    [sym_operator] = STATE(78),
    [anon_sym_as] = ACTIONS(51),
    [anon_sym_using] = ACTIONS(51),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
  },
  [34] = {
    [sym_expression] = STATE(83),
    [sym_curveBracket] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_string] = STATE(82),
    [aux_sym_unary_expression_repeat1] = STATE(83),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(129),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(133),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
  },
  [35] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(135),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_as] = ACTIONS(135),
    [anon_sym_using] = ACTIONS(135),
    [anon_sym_EQ] = ACTIONS(119),
    [anon_sym_BANG] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(119),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(119),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(119),
    [anon_sym_GT] = ACTIONS(119),
  },
  [36] = {
    [sym_parameter_group] = STATE(85),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(33),
    [sym_operator] = STATE(34),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(85),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(137),
  },
  [37] = {
    [anon_sym_GT] = ACTIONS(139),
  },
  [38] = {
    [sym_directive] = STATE(89),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_function_middle] = STATE(90),
    [sym_return] = STATE(89),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_function_repeat1] = STATE(90),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(141),
    [anon_sym_LT_POUNDreturn] = ACTIONS(143),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(19),
    [sym_fallback] = ACTIONS(21),
    [sym_flush] = ACTIONS(21),
    [anon_sym_LT_POUNDftl] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [sym_lt] = ACTIONS(21),
    [sym_nt] = ACTIONS(21),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(29),
    [sym_rt] = ACTIONS(21),
    [anon_sym_LT_POUNDsetting] = ACTIONS(31),
    [sym_stop] = ACTIONS(21),
    [sym_t] = ACTIONS(21),
    [anon_sym_LT_POUNDvisit] = ACTIONS(33),
    [anon_sym_LT_POUNDassign] = ACTIONS(35),
    [sym_end_assign] = ACTIONS(37),
    [anon_sym_LT_POUNDglobal] = ACTIONS(39),
    [sym_end_global] = ACTIONS(41),
    [anon_sym_LT_POUNDlocal] = ACTIONS(43),
    [sym_end_local] = ACTIONS(45),
  },
  [39] = {
    [sym_parameter_group] = STATE(85),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(33),
    [sym_operator] = STATE(34),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(85),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(145),
  },
  [40] = {
    [sym_directive] = STATE(94),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_return] = STATE(94),
    [sym_macro] = STATE(8),
    [sym_macro_middle] = STATE(95),
    [sym_nested] = STATE(94),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_macro_repeat1] = STATE(95),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_POUNDreturn] = ACTIONS(143),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(147),
    [anon_sym_LT_POUNDnested] = ACTIONS(149),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(19),
    [sym_fallback] = ACTIONS(21),
    [sym_flush] = ACTIONS(21),
    [anon_sym_LT_POUNDftl] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [sym_lt] = ACTIONS(21),
    [sym_nt] = ACTIONS(21),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(29),
    [sym_rt] = ACTIONS(21),
    [anon_sym_LT_POUNDsetting] = ACTIONS(31),
    [sym_stop] = ACTIONS(21),
    [sym_t] = ACTIONS(21),
    [anon_sym_LT_POUNDvisit] = ACTIONS(33),
    [anon_sym_LT_POUNDassign] = ACTIONS(35),
    [sym_end_assign] = ACTIONS(37),
    [anon_sym_LT_POUNDglobal] = ACTIONS(39),
    [sym_end_global] = ACTIONS(41),
    [anon_sym_LT_POUNDlocal] = ACTIONS(43),
    [sym_end_local] = ACTIONS(45),
  },
  [41] = {
    [sym_parameter_group] = STATE(85),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(33),
    [sym_operator] = STATE(34),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(85),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(151),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [sym_comment] = ACTIONS(153),
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
    [sym_fallback] = ACTIONS(153),
    [sym_flush] = ACTIONS(153),
    [anon_sym_LT_POUNDftl] = ACTIONS(153),
    [anon_sym_LT_POUNDimport] = ACTIONS(153),
    [anon_sym_LT_POUNDinclude] = ACTIONS(153),
    [sym_lt] = ACTIONS(153),
    [sym_nt] = ACTIONS(153),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(153),
    [sym_rt] = ACTIONS(153),
    [anon_sym_LT_POUNDsetting] = ACTIONS(153),
    [sym_stop] = ACTIONS(153),
    [sym_t] = ACTIONS(153),
    [anon_sym_LT_POUNDvisit] = ACTIONS(153),
    [anon_sym_LT_POUNDassign] = ACTIONS(153),
    [sym_end_assign] = ACTIONS(153),
    [anon_sym_LT_POUNDglobal] = ACTIONS(153),
    [sym_end_global] = ACTIONS(153),
    [anon_sym_LT_POUNDlocal] = ACTIONS(153),
    [sym_end_local] = ACTIONS(153),
  },
  [43] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(155),
    [anon_sym_LT_POUNDif] = ACTIONS(155),
    [anon_sym_LT_POUNDswitch] = ACTIONS(155),
    [anon_sym_LT_POUNDfunction] = ACTIONS(155),
    [anon_sym_LT_POUNDmacro] = ACTIONS(155),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(155),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(155),
    [sym_recover] = ACTIONS(155),
    [sym_fallback] = ACTIONS(155),
    [sym_flush] = ACTIONS(155),
    [anon_sym_LT_POUNDftl] = ACTIONS(155),
    [anon_sym_LT_POUNDimport] = ACTIONS(155),
    [anon_sym_LT_POUNDinclude] = ACTIONS(155),
    [sym_lt] = ACTIONS(155),
    [sym_nt] = ACTIONS(155),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(155),
    [sym_rt] = ACTIONS(155),
    [anon_sym_LT_POUNDsetting] = ACTIONS(155),
    [sym_stop] = ACTIONS(155),
    [sym_t] = ACTIONS(155),
    [anon_sym_LT_POUNDvisit] = ACTIONS(155),
    [anon_sym_LT_POUNDassign] = ACTIONS(155),
    [sym_end_assign] = ACTIONS(155),
    [anon_sym_LT_POUNDglobal] = ACTIONS(155),
    [sym_end_global] = ACTIONS(155),
    [anon_sym_LT_POUNDlocal] = ACTIONS(155),
    [sym_end_local] = ACTIONS(155),
  },
  [44] = {
    [sym_directive] = STATE(43),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_attempt_middle] = STATE(98),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_attempt_repeat1] = STATE(98),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(19),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(157),
    [sym_recover] = ACTIONS(65),
    [sym_fallback] = ACTIONS(21),
    [sym_flush] = ACTIONS(21),
    [anon_sym_LT_POUNDftl] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [sym_lt] = ACTIONS(21),
    [sym_nt] = ACTIONS(21),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(29),
    [sym_rt] = ACTIONS(21),
    [anon_sym_LT_POUNDsetting] = ACTIONS(31),
    [sym_stop] = ACTIONS(21),
    [sym_t] = ACTIONS(21),
    [anon_sym_LT_POUNDvisit] = ACTIONS(33),
    [anon_sym_LT_POUNDassign] = ACTIONS(35),
    [sym_end_assign] = ACTIONS(37),
    [anon_sym_LT_POUNDglobal] = ACTIONS(39),
    [sym_end_global] = ACTIONS(41),
    [anon_sym_LT_POUNDlocal] = ACTIONS(43),
    [sym_end_local] = ACTIONS(45),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym_comment] = ACTIONS(159),
    [anon_sym_LT_POUNDlist] = ACTIONS(159),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(159),
    [sym_break] = ACTIONS(159),
    [sym_continue] = ACTIONS(159),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(159),
    [anon_sym_LT_POUNDitems] = ACTIONS(159),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(159),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(159),
    [anon_sym_LT_POUNDif] = ACTIONS(159),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(159),
    [anon_sym_LT_POUNDelseif] = ACTIONS(159),
    [anon_sym_LT_POUNDswitch] = ACTIONS(159),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(159),
    [anon_sym_LT_POUNDcase] = ACTIONS(159),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(159),
    [anon_sym_LT_POUNDfunction] = ACTIONS(159),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(159),
    [anon_sym_LT_POUNDreturn] = ACTIONS(159),
    [anon_sym_LT_POUNDmacro] = ACTIONS(159),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(159),
    [anon_sym_LT_POUNDnested] = ACTIONS(159),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(159),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(159),
    [sym_recover] = ACTIONS(159),
    [sym_fallback] = ACTIONS(159),
    [sym_flush] = ACTIONS(159),
    [anon_sym_LT_POUNDftl] = ACTIONS(159),
    [anon_sym_LT_POUNDimport] = ACTIONS(159),
    [anon_sym_LT_POUNDinclude] = ACTIONS(159),
    [sym_lt] = ACTIONS(159),
    [sym_nt] = ACTIONS(159),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(159),
    [sym_rt] = ACTIONS(159),
    [anon_sym_LT_POUNDsetting] = ACTIONS(159),
    [sym_stop] = ACTIONS(159),
    [sym_t] = ACTIONS(159),
    [anon_sym_LT_POUNDvisit] = ACTIONS(159),
    [anon_sym_LT_POUNDassign] = ACTIONS(159),
    [sym_end_assign] = ACTIONS(159),
    [anon_sym_LT_POUNDglobal] = ACTIONS(159),
    [sym_end_global] = ACTIONS(159),
    [anon_sym_LT_POUNDlocal] = ACTIONS(159),
    [sym_end_local] = ACTIONS(159),
  },
  [46] = {
    [sym_parameter_group] = STATE(85),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(33),
    [sym_operator] = STATE(34),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(85),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(161),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym_comment] = ACTIONS(163),
    [anon_sym_LT_POUNDlist] = ACTIONS(163),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(163),
    [sym_break] = ACTIONS(163),
    [sym_continue] = ACTIONS(163),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(163),
    [anon_sym_LT_POUNDitems] = ACTIONS(163),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(163),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(163),
    [anon_sym_LT_POUNDif] = ACTIONS(163),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(163),
    [anon_sym_LT_POUNDelseif] = ACTIONS(163),
    [anon_sym_LT_POUNDswitch] = ACTIONS(163),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(163),
    [anon_sym_LT_POUNDcase] = ACTIONS(163),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(163),
    [anon_sym_LT_POUNDfunction] = ACTIONS(163),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(163),
    [anon_sym_LT_POUNDreturn] = ACTIONS(163),
    [anon_sym_LT_POUNDmacro] = ACTIONS(163),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(163),
    [anon_sym_LT_POUNDnested] = ACTIONS(163),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(163),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(163),
    [sym_recover] = ACTIONS(163),
    [sym_fallback] = ACTIONS(163),
    [sym_flush] = ACTIONS(163),
    [anon_sym_LT_POUNDftl] = ACTIONS(163),
    [anon_sym_LT_POUNDimport] = ACTIONS(163),
    [anon_sym_LT_POUNDinclude] = ACTIONS(163),
    [sym_lt] = ACTIONS(163),
    [sym_nt] = ACTIONS(163),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(163),
    [sym_rt] = ACTIONS(163),
    [anon_sym_LT_POUNDsetting] = ACTIONS(163),
    [sym_stop] = ACTIONS(163),
    [sym_t] = ACTIONS(163),
    [anon_sym_LT_POUNDvisit] = ACTIONS(163),
    [anon_sym_LT_POUNDassign] = ACTIONS(163),
    [sym_end_assign] = ACTIONS(163),
    [anon_sym_LT_POUNDglobal] = ACTIONS(163),
    [sym_end_global] = ACTIONS(163),
    [anon_sym_LT_POUNDlocal] = ACTIONS(163),
    [sym_end_local] = ACTIONS(163),
  },
  [48] = {
    [sym_parameter_group] = STATE(85),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(33),
    [sym_operator] = STATE(34),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(85),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(165),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [sym_comment] = ACTIONS(167),
    [anon_sym_LT_POUNDlist] = ACTIONS(167),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(167),
    [sym_break] = ACTIONS(167),
    [sym_continue] = ACTIONS(167),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(167),
    [anon_sym_LT_POUNDitems] = ACTIONS(167),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(167),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(167),
    [anon_sym_LT_POUNDif] = ACTIONS(167),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(167),
    [anon_sym_LT_POUNDelseif] = ACTIONS(167),
    [anon_sym_LT_POUNDswitch] = ACTIONS(167),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(167),
    [anon_sym_LT_POUNDcase] = ACTIONS(167),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(167),
    [anon_sym_LT_POUNDfunction] = ACTIONS(167),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(167),
    [anon_sym_LT_POUNDreturn] = ACTIONS(167),
    [anon_sym_LT_POUNDmacro] = ACTIONS(167),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(167),
    [anon_sym_LT_POUNDnested] = ACTIONS(167),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(167),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(167),
    [sym_recover] = ACTIONS(167),
    [sym_fallback] = ACTIONS(167),
    [sym_flush] = ACTIONS(167),
    [anon_sym_LT_POUNDftl] = ACTIONS(167),
    [anon_sym_LT_POUNDimport] = ACTIONS(167),
    [anon_sym_LT_POUNDinclude] = ACTIONS(167),
    [sym_lt] = ACTIONS(167),
    [sym_nt] = ACTIONS(167),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(167),
    [sym_rt] = ACTIONS(167),
    [anon_sym_LT_POUNDsetting] = ACTIONS(167),
    [sym_stop] = ACTIONS(167),
    [sym_t] = ACTIONS(167),
    [anon_sym_LT_POUNDvisit] = ACTIONS(167),
    [anon_sym_LT_POUNDassign] = ACTIONS(167),
    [sym_end_assign] = ACTIONS(167),
    [anon_sym_LT_POUNDglobal] = ACTIONS(167),
    [sym_end_global] = ACTIONS(167),
    [anon_sym_LT_POUNDlocal] = ACTIONS(167),
    [sym_end_local] = ACTIONS(167),
  },
  [50] = {
    [sym_parameter_group] = STATE(85),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(33),
    [sym_operator] = STATE(34),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(85),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(169),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [sym_comment] = ACTIONS(171),
    [anon_sym_LT_POUNDlist] = ACTIONS(171),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(171),
    [sym_break] = ACTIONS(171),
    [sym_continue] = ACTIONS(171),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(171),
    [anon_sym_LT_POUNDitems] = ACTIONS(171),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(171),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(171),
    [anon_sym_LT_POUNDif] = ACTIONS(171),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(171),
    [anon_sym_LT_POUNDelseif] = ACTIONS(171),
    [anon_sym_LT_POUNDswitch] = ACTIONS(171),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(171),
    [anon_sym_LT_POUNDcase] = ACTIONS(171),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(171),
    [anon_sym_LT_POUNDfunction] = ACTIONS(171),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(171),
    [anon_sym_LT_POUNDreturn] = ACTIONS(171),
    [anon_sym_LT_POUNDmacro] = ACTIONS(171),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(171),
    [anon_sym_LT_POUNDnested] = ACTIONS(171),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(171),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(171),
    [sym_recover] = ACTIONS(171),
    [sym_fallback] = ACTIONS(171),
    [sym_flush] = ACTIONS(171),
    [anon_sym_LT_POUNDftl] = ACTIONS(171),
    [anon_sym_LT_POUNDimport] = ACTIONS(171),
    [anon_sym_LT_POUNDinclude] = ACTIONS(171),
    [sym_lt] = ACTIONS(171),
    [sym_nt] = ACTIONS(171),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(171),
    [sym_rt] = ACTIONS(171),
    [anon_sym_LT_POUNDsetting] = ACTIONS(171),
    [sym_stop] = ACTIONS(171),
    [sym_t] = ACTIONS(171),
    [anon_sym_LT_POUNDvisit] = ACTIONS(171),
    [anon_sym_LT_POUNDassign] = ACTIONS(171),
    [sym_end_assign] = ACTIONS(171),
    [anon_sym_LT_POUNDglobal] = ACTIONS(171),
    [sym_end_global] = ACTIONS(171),
    [anon_sym_LT_POUNDlocal] = ACTIONS(171),
    [sym_end_local] = ACTIONS(171),
  },
  [52] = {
    [sym_parameter_group] = STATE(85),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(33),
    [sym_operator] = STATE(34),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(85),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(173),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [sym_comment] = ACTIONS(175),
    [anon_sym_LT_POUNDlist] = ACTIONS(175),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(175),
    [sym_break] = ACTIONS(175),
    [sym_continue] = ACTIONS(175),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(175),
    [anon_sym_LT_POUNDitems] = ACTIONS(175),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(175),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(175),
    [anon_sym_LT_POUNDif] = ACTIONS(175),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(175),
    [anon_sym_LT_POUNDelseif] = ACTIONS(175),
    [anon_sym_LT_POUNDswitch] = ACTIONS(175),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(175),
    [anon_sym_LT_POUNDcase] = ACTIONS(175),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(175),
    [anon_sym_LT_POUNDfunction] = ACTIONS(175),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(175),
    [anon_sym_LT_POUNDreturn] = ACTIONS(175),
    [anon_sym_LT_POUNDmacro] = ACTIONS(175),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(175),
    [anon_sym_LT_POUNDnested] = ACTIONS(175),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(175),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(175),
    [sym_recover] = ACTIONS(175),
    [sym_fallback] = ACTIONS(175),
    [sym_flush] = ACTIONS(175),
    [anon_sym_LT_POUNDftl] = ACTIONS(175),
    [anon_sym_LT_POUNDimport] = ACTIONS(175),
    [anon_sym_LT_POUNDinclude] = ACTIONS(175),
    [sym_lt] = ACTIONS(175),
    [sym_nt] = ACTIONS(175),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(175),
    [sym_rt] = ACTIONS(175),
    [anon_sym_LT_POUNDsetting] = ACTIONS(175),
    [sym_stop] = ACTIONS(175),
    [sym_t] = ACTIONS(175),
    [anon_sym_LT_POUNDvisit] = ACTIONS(175),
    [anon_sym_LT_POUNDassign] = ACTIONS(175),
    [sym_end_assign] = ACTIONS(175),
    [anon_sym_LT_POUNDglobal] = ACTIONS(175),
    [sym_end_global] = ACTIONS(175),
    [anon_sym_LT_POUNDlocal] = ACTIONS(175),
    [sym_end_local] = ACTIONS(175),
  },
  [54] = {
    [sym_parameter_group] = STATE(85),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(33),
    [sym_operator] = STATE(34),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(85),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(177),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym_comment] = ACTIONS(179),
    [anon_sym_LT_POUNDlist] = ACTIONS(179),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(179),
    [sym_break] = ACTIONS(179),
    [sym_continue] = ACTIONS(179),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(179),
    [anon_sym_LT_POUNDitems] = ACTIONS(179),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(179),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(179),
    [anon_sym_LT_POUNDif] = ACTIONS(179),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(179),
    [anon_sym_LT_POUNDelseif] = ACTIONS(179),
    [anon_sym_LT_POUNDswitch] = ACTIONS(179),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(179),
    [anon_sym_LT_POUNDcase] = ACTIONS(179),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(179),
    [anon_sym_LT_POUNDfunction] = ACTIONS(179),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(179),
    [anon_sym_LT_POUNDreturn] = ACTIONS(179),
    [anon_sym_LT_POUNDmacro] = ACTIONS(179),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(179),
    [anon_sym_LT_POUNDnested] = ACTIONS(179),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(179),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(179),
    [sym_recover] = ACTIONS(179),
    [sym_fallback] = ACTIONS(179),
    [sym_flush] = ACTIONS(179),
    [anon_sym_LT_POUNDftl] = ACTIONS(179),
    [anon_sym_LT_POUNDimport] = ACTIONS(179),
    [anon_sym_LT_POUNDinclude] = ACTIONS(179),
    [sym_lt] = ACTIONS(179),
    [sym_nt] = ACTIONS(179),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(179),
    [sym_rt] = ACTIONS(179),
    [anon_sym_LT_POUNDsetting] = ACTIONS(179),
    [sym_stop] = ACTIONS(179),
    [sym_t] = ACTIONS(179),
    [anon_sym_LT_POUNDvisit] = ACTIONS(179),
    [anon_sym_LT_POUNDassign] = ACTIONS(179),
    [sym_end_assign] = ACTIONS(179),
    [anon_sym_LT_POUNDglobal] = ACTIONS(179),
    [sym_end_global] = ACTIONS(179),
    [anon_sym_LT_POUNDlocal] = ACTIONS(179),
    [sym_end_local] = ACTIONS(179),
  },
  [56] = {
    [sym_parameter_group] = STATE(85),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(33),
    [sym_operator] = STATE(34),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(85),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(181),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [sym_comment] = ACTIONS(183),
    [anon_sym_LT_POUNDlist] = ACTIONS(183),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(183),
    [sym_break] = ACTIONS(183),
    [sym_continue] = ACTIONS(183),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(183),
    [anon_sym_LT_POUNDitems] = ACTIONS(183),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(183),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(183),
    [anon_sym_LT_POUNDif] = ACTIONS(183),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(183),
    [anon_sym_LT_POUNDelseif] = ACTIONS(183),
    [anon_sym_LT_POUNDswitch] = ACTIONS(183),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(183),
    [anon_sym_LT_POUNDcase] = ACTIONS(183),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(183),
    [anon_sym_LT_POUNDfunction] = ACTIONS(183),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(183),
    [anon_sym_LT_POUNDreturn] = ACTIONS(183),
    [anon_sym_LT_POUNDmacro] = ACTIONS(183),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(183),
    [anon_sym_LT_POUNDnested] = ACTIONS(183),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(183),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(183),
    [sym_recover] = ACTIONS(183),
    [sym_fallback] = ACTIONS(183),
    [sym_flush] = ACTIONS(183),
    [anon_sym_LT_POUNDftl] = ACTIONS(183),
    [anon_sym_LT_POUNDimport] = ACTIONS(183),
    [anon_sym_LT_POUNDinclude] = ACTIONS(183),
    [sym_lt] = ACTIONS(183),
    [sym_nt] = ACTIONS(183),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(183),
    [sym_rt] = ACTIONS(183),
    [anon_sym_LT_POUNDsetting] = ACTIONS(183),
    [sym_stop] = ACTIONS(183),
    [sym_t] = ACTIONS(183),
    [anon_sym_LT_POUNDvisit] = ACTIONS(183),
    [anon_sym_LT_POUNDassign] = ACTIONS(183),
    [sym_end_assign] = ACTIONS(183),
    [anon_sym_LT_POUNDglobal] = ACTIONS(183),
    [sym_end_global] = ACTIONS(183),
    [anon_sym_LT_POUNDlocal] = ACTIONS(183),
    [sym_end_local] = ACTIONS(183),
  },
  [58] = {
    [sym_parameter_group] = STATE(85),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(33),
    [sym_operator] = STATE(34),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(85),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(185),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym_comment] = ACTIONS(187),
    [anon_sym_LT_POUNDlist] = ACTIONS(187),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(187),
    [sym_break] = ACTIONS(187),
    [sym_continue] = ACTIONS(187),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(187),
    [anon_sym_LT_POUNDitems] = ACTIONS(187),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(187),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(187),
    [anon_sym_LT_POUNDif] = ACTIONS(187),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(187),
    [anon_sym_LT_POUNDelseif] = ACTIONS(187),
    [anon_sym_LT_POUNDswitch] = ACTIONS(187),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(187),
    [anon_sym_LT_POUNDcase] = ACTIONS(187),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(187),
    [anon_sym_LT_POUNDfunction] = ACTIONS(187),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(187),
    [anon_sym_LT_POUNDreturn] = ACTIONS(187),
    [anon_sym_LT_POUNDmacro] = ACTIONS(187),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(187),
    [anon_sym_LT_POUNDnested] = ACTIONS(187),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(187),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(187),
    [sym_recover] = ACTIONS(187),
    [sym_fallback] = ACTIONS(187),
    [sym_flush] = ACTIONS(187),
    [anon_sym_LT_POUNDftl] = ACTIONS(187),
    [anon_sym_LT_POUNDimport] = ACTIONS(187),
    [anon_sym_LT_POUNDinclude] = ACTIONS(187),
    [sym_lt] = ACTIONS(187),
    [sym_nt] = ACTIONS(187),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(187),
    [sym_rt] = ACTIONS(187),
    [anon_sym_LT_POUNDsetting] = ACTIONS(187),
    [sym_stop] = ACTIONS(187),
    [sym_t] = ACTIONS(187),
    [anon_sym_LT_POUNDvisit] = ACTIONS(187),
    [anon_sym_LT_POUNDassign] = ACTIONS(187),
    [sym_end_assign] = ACTIONS(187),
    [anon_sym_LT_POUNDglobal] = ACTIONS(187),
    [sym_end_global] = ACTIONS(187),
    [anon_sym_LT_POUNDlocal] = ACTIONS(187),
    [sym_end_local] = ACTIONS(187),
  },
  [60] = {
    [sym_parameter_group] = STATE(85),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(33),
    [sym_operator] = STATE(34),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(85),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(189),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [sym_comment] = ACTIONS(191),
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
    [anon_sym_LT_POUNDfunction] = ACTIONS(191),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(191),
    [anon_sym_LT_POUNDreturn] = ACTIONS(191),
    [anon_sym_LT_POUNDmacro] = ACTIONS(191),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(191),
    [anon_sym_LT_POUNDnested] = ACTIONS(191),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(191),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(191),
    [sym_recover] = ACTIONS(191),
    [sym_fallback] = ACTIONS(191),
    [sym_flush] = ACTIONS(191),
    [anon_sym_LT_POUNDftl] = ACTIONS(191),
    [anon_sym_LT_POUNDimport] = ACTIONS(191),
    [anon_sym_LT_POUNDinclude] = ACTIONS(191),
    [sym_lt] = ACTIONS(191),
    [sym_nt] = ACTIONS(191),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(191),
    [sym_rt] = ACTIONS(191),
    [anon_sym_LT_POUNDsetting] = ACTIONS(191),
    [sym_stop] = ACTIONS(191),
    [sym_t] = ACTIONS(191),
    [anon_sym_LT_POUNDvisit] = ACTIONS(191),
    [anon_sym_LT_POUNDassign] = ACTIONS(191),
    [sym_end_assign] = ACTIONS(191),
    [anon_sym_LT_POUNDglobal] = ACTIONS(191),
    [sym_end_global] = ACTIONS(191),
    [anon_sym_LT_POUNDlocal] = ACTIONS(191),
    [sym_end_local] = ACTIONS(191),
  },
  [62] = {
    [sym_parameter_group] = STATE(85),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(33),
    [sym_operator] = STATE(34),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(85),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(193),
  },
  [63] = {
    [sym__definition] = STATE(63),
    [sym_directive] = STATE(63),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(195),
    [sym_comment] = ACTIONS(197),
    [anon_sym_LT_POUNDlist] = ACTIONS(200),
    [anon_sym_LT_POUNDif] = ACTIONS(203),
    [anon_sym_LT_POUNDswitch] = ACTIONS(206),
    [anon_sym_LT_POUNDfunction] = ACTIONS(209),
    [anon_sym_LT_POUNDmacro] = ACTIONS(212),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(215),
    [sym_fallback] = ACTIONS(218),
    [sym_flush] = ACTIONS(218),
    [anon_sym_LT_POUNDftl] = ACTIONS(221),
    [anon_sym_LT_POUNDimport] = ACTIONS(224),
    [anon_sym_LT_POUNDinclude] = ACTIONS(227),
    [sym_lt] = ACTIONS(218),
    [sym_nt] = ACTIONS(218),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(230),
    [sym_rt] = ACTIONS(218),
    [anon_sym_LT_POUNDsetting] = ACTIONS(233),
    [sym_stop] = ACTIONS(218),
    [sym_t] = ACTIONS(218),
    [anon_sym_LT_POUNDvisit] = ACTIONS(236),
    [anon_sym_LT_POUNDassign] = ACTIONS(239),
    [sym_end_assign] = ACTIONS(242),
    [anon_sym_LT_POUNDglobal] = ACTIONS(245),
    [sym_end_global] = ACTIONS(248),
    [anon_sym_LT_POUNDlocal] = ACTIONS(251),
    [sym_end_local] = ACTIONS(254),
  },
  [64] = {
    [sym_directive] = STATE(109),
    [sym_list] = STATE(8),
    [sym_list_middle] = STATE(115),
    [sym_list_else] = STATE(113),
    [sym_items] = STATE(109),
    [sym_sep] = STATE(109),
    [sym_sep_block] = STATE(114),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_list_repeat1] = STATE(115),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(257),
    [sym_break] = ACTIONS(259),
    [sym_continue] = ACTIONS(259),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(261),
    [anon_sym_LT_POUNDitems] = ACTIONS(263),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(265),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(19),
    [sym_fallback] = ACTIONS(21),
    [sym_flush] = ACTIONS(21),
    [anon_sym_LT_POUNDftl] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [sym_lt] = ACTIONS(21),
    [sym_nt] = ACTIONS(21),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(29),
    [sym_rt] = ACTIONS(21),
    [anon_sym_LT_POUNDsetting] = ACTIONS(31),
    [sym_stop] = ACTIONS(21),
    [sym_t] = ACTIONS(21),
    [anon_sym_LT_POUNDvisit] = ACTIONS(33),
    [anon_sym_LT_POUNDassign] = ACTIONS(35),
    [sym_end_assign] = ACTIONS(37),
    [anon_sym_LT_POUNDglobal] = ACTIONS(39),
    [sym_end_global] = ACTIONS(41),
    [anon_sym_LT_POUNDlocal] = ACTIONS(43),
    [sym_end_local] = ACTIONS(45),
  },
  [65] = {
    [sym_expression] = STATE(116),
    [sym_curveBracket] = STATE(66),
    [sym_sequence] = STATE(66),
    [sym_string] = STATE(70),
    [aux_sym_unary_expression_repeat1] = STATE(116),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(111),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(115),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(117),
  },
  [66] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(267),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(267),
    [anon_sym_LPAREN] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(267),
    [anon_sym_RBRACK] = ACTIONS(267),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(267),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(267),
    [anon_sym_GT] = ACTIONS(267),
  },
  [67] = {
    [sym_parameter_group] = STATE(120),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(118),
    [sym_operator] = STATE(119),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(120),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(269),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
  },
  [68] = {
    [sym_expression] = STATE(122),
    [sym_curveBracket] = STATE(66),
    [sym_sequence] = STATE(66),
    [sym_string] = STATE(70),
    [aux_sym_unary_expression_repeat1] = STATE(122),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(111),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(271),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(117),
  },
  [69] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(103),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_RBRACK] = ACTIONS(103),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(103),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(103),
  },
  [70] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(267),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(267),
    [anon_sym_COMMA] = ACTIONS(273),
    [anon_sym_LPAREN] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(267),
    [anon_sym_RBRACK] = ACTIONS(267),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(267),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(267),
    [anon_sym_GT] = ACTIONS(267),
  },
  [71] = {
    [sym_expression] = STATE(124),
    [sym_curveBracket] = STATE(66),
    [sym_sequence] = STATE(66),
    [sym_string] = STATE(70),
    [aux_sym_unary_expression_repeat1] = STATE(124),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(111),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(115),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(275),
  },
  [72] = {
    [sym_directive] = STATE(75),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_elseif] = STATE(75),
    [sym_if_middle] = STATE(125),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_if_repeat1] = STATE(125),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(277),
    [anon_sym_LT_POUNDelseif] = ACTIONS(127),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(19),
    [sym_fallback] = ACTIONS(21),
    [sym_flush] = ACTIONS(21),
    [anon_sym_LT_POUNDftl] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [sym_lt] = ACTIONS(21),
    [sym_nt] = ACTIONS(21),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(29),
    [sym_rt] = ACTIONS(21),
    [anon_sym_LT_POUNDsetting] = ACTIONS(31),
    [sym_stop] = ACTIONS(21),
    [sym_t] = ACTIONS(21),
    [anon_sym_LT_POUNDvisit] = ACTIONS(33),
    [anon_sym_LT_POUNDassign] = ACTIONS(35),
    [sym_end_assign] = ACTIONS(37),
    [anon_sym_LT_POUNDglobal] = ACTIONS(39),
    [sym_end_global] = ACTIONS(41),
    [anon_sym_LT_POUNDlocal] = ACTIONS(43),
    [sym_end_local] = ACTIONS(45),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [sym_comment] = ACTIONS(279),
    [anon_sym_LT_POUNDlist] = ACTIONS(279),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(279),
    [sym_break] = ACTIONS(279),
    [sym_continue] = ACTIONS(279),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(279),
    [anon_sym_LT_POUNDitems] = ACTIONS(279),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(279),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(279),
    [anon_sym_LT_POUNDif] = ACTIONS(279),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(279),
    [anon_sym_LT_POUNDelseif] = ACTIONS(279),
    [anon_sym_LT_POUNDswitch] = ACTIONS(279),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(279),
    [anon_sym_LT_POUNDcase] = ACTIONS(279),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(279),
    [anon_sym_LT_POUNDfunction] = ACTIONS(279),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(279),
    [anon_sym_LT_POUNDreturn] = ACTIONS(279),
    [anon_sym_LT_POUNDmacro] = ACTIONS(279),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(279),
    [anon_sym_LT_POUNDnested] = ACTIONS(279),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(279),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(279),
    [sym_recover] = ACTIONS(279),
    [sym_fallback] = ACTIONS(279),
    [sym_flush] = ACTIONS(279),
    [anon_sym_LT_POUNDftl] = ACTIONS(279),
    [anon_sym_LT_POUNDimport] = ACTIONS(279),
    [anon_sym_LT_POUNDinclude] = ACTIONS(279),
    [sym_lt] = ACTIONS(279),
    [sym_nt] = ACTIONS(279),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(279),
    [sym_rt] = ACTIONS(279),
    [anon_sym_LT_POUNDsetting] = ACTIONS(279),
    [sym_stop] = ACTIONS(279),
    [sym_t] = ACTIONS(279),
    [anon_sym_LT_POUNDvisit] = ACTIONS(279),
    [anon_sym_LT_POUNDassign] = ACTIONS(279),
    [sym_end_assign] = ACTIONS(279),
    [anon_sym_LT_POUNDglobal] = ACTIONS(279),
    [sym_end_global] = ACTIONS(279),
    [anon_sym_LT_POUNDlocal] = ACTIONS(279),
    [sym_end_local] = ACTIONS(279),
  },
  [74] = {
    [sym_parameter_group] = STATE(127),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(33),
    [sym_operator] = STATE(34),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(127),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(281),
  },
  [75] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(283),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(283),
    [anon_sym_LT_POUNDif] = ACTIONS(283),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(283),
    [anon_sym_LT_POUNDelseif] = ACTIONS(283),
    [anon_sym_LT_POUNDswitch] = ACTIONS(283),
    [anon_sym_LT_POUNDfunction] = ACTIONS(283),
    [anon_sym_LT_POUNDmacro] = ACTIONS(283),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(283),
    [sym_fallback] = ACTIONS(283),
    [sym_flush] = ACTIONS(283),
    [anon_sym_LT_POUNDftl] = ACTIONS(283),
    [anon_sym_LT_POUNDimport] = ACTIONS(283),
    [anon_sym_LT_POUNDinclude] = ACTIONS(283),
    [sym_lt] = ACTIONS(283),
    [sym_nt] = ACTIONS(283),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(283),
    [sym_rt] = ACTIONS(283),
    [anon_sym_LT_POUNDsetting] = ACTIONS(283),
    [sym_stop] = ACTIONS(283),
    [sym_t] = ACTIONS(283),
    [anon_sym_LT_POUNDvisit] = ACTIONS(283),
    [anon_sym_LT_POUNDassign] = ACTIONS(283),
    [sym_end_assign] = ACTIONS(283),
    [anon_sym_LT_POUNDglobal] = ACTIONS(283),
    [sym_end_global] = ACTIONS(283),
    [anon_sym_LT_POUNDlocal] = ACTIONS(283),
    [sym_end_local] = ACTIONS(283),
  },
  [76] = {
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(285),
  },
  [77] = {
    [sym_directive] = STATE(75),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_if_else] = STATE(129),
    [sym_elseif] = STATE(75),
    [sym_if_middle] = STATE(130),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_if_repeat1] = STATE(130),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(123),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(285),
    [anon_sym_LT_POUNDelseif] = ACTIONS(127),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(19),
    [sym_fallback] = ACTIONS(21),
    [sym_flush] = ACTIONS(21),
    [anon_sym_LT_POUNDftl] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [sym_lt] = ACTIONS(21),
    [sym_nt] = ACTIONS(21),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(29),
    [sym_rt] = ACTIONS(21),
    [anon_sym_LT_POUNDsetting] = ACTIONS(31),
    [sym_stop] = ACTIONS(21),
    [sym_t] = ACTIONS(21),
    [anon_sym_LT_POUNDvisit] = ACTIONS(33),
    [anon_sym_LT_POUNDassign] = ACTIONS(35),
    [sym_end_assign] = ACTIONS(37),
    [anon_sym_LT_POUNDglobal] = ACTIONS(39),
    [sym_end_global] = ACTIONS(41),
    [anon_sym_LT_POUNDlocal] = ACTIONS(43),
    [sym_end_local] = ACTIONS(45),
  },
  [78] = {
    [sym_expression] = STATE(131),
    [sym_curveBracket] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_string] = STATE(82),
    [aux_sym_unary_expression_repeat1] = STATE(131),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(129),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(133),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
  },
  [79] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(267),
    [anon_sym_LPAREN] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(267),
    [anon_sym_as] = ACTIONS(287),
    [anon_sym_using] = ACTIONS(287),
    [anon_sym_EQ] = ACTIONS(267),
    [anon_sym_BANG] = ACTIONS(267),
    [anon_sym_PLUS] = ACTIONS(267),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(267),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(267),
    [anon_sym_GT] = ACTIONS(267),
  },
  [80] = {
    [sym_parameter_group] = STATE(133),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(118),
    [sym_operator] = STATE(119),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(133),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
  },
  [81] = {
    [sym_expression] = STATE(135),
    [sym_curveBracket] = STATE(66),
    [sym_sequence] = STATE(66),
    [sym_string] = STATE(70),
    [aux_sym_unary_expression_repeat1] = STATE(135),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(111),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(291),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(117),
  },
  [82] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(267),
    [anon_sym_COMMA] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(267),
    [anon_sym_as] = ACTIONS(287),
    [anon_sym_using] = ACTIONS(287),
    [anon_sym_EQ] = ACTIONS(267),
    [anon_sym_BANG] = ACTIONS(267),
    [anon_sym_PLUS] = ACTIONS(267),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(267),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(267),
    [anon_sym_GT] = ACTIONS(267),
  },
  [83] = {
    [sym_expression] = STATE(137),
    [sym_curveBracket] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_string] = STATE(82),
    [aux_sym_unary_expression_repeat1] = STATE(137),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(295),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_as] = ACTIONS(295),
    [anon_sym_using] = ACTIONS(295),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_BANG] = ACTIONS(275),
    [anon_sym_PLUS] = ACTIONS(275),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(275),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(275),
    [anon_sym_GT] = ACTIONS(275),
  },
  [84] = {
    [sym_directive] = STATE(75),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_if_else] = STATE(129),
    [sym_elseif] = STATE(75),
    [sym_if_middle] = STATE(138),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_if_repeat1] = STATE(138),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(123),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(285),
    [anon_sym_LT_POUNDelseif] = ACTIONS(127),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(19),
    [sym_fallback] = ACTIONS(21),
    [sym_flush] = ACTIONS(21),
    [anon_sym_LT_POUNDftl] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [sym_lt] = ACTIONS(21),
    [sym_nt] = ACTIONS(21),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(29),
    [sym_rt] = ACTIONS(21),
    [anon_sym_LT_POUNDsetting] = ACTIONS(31),
    [sym_stop] = ACTIONS(21),
    [sym_t] = ACTIONS(21),
    [anon_sym_LT_POUNDvisit] = ACTIONS(33),
    [anon_sym_LT_POUNDassign] = ACTIONS(35),
    [sym_end_assign] = ACTIONS(37),
    [anon_sym_LT_POUNDglobal] = ACTIONS(39),
    [sym_end_global] = ACTIONS(41),
    [anon_sym_LT_POUNDlocal] = ACTIONS(43),
    [sym_end_local] = ACTIONS(45),
  },
  [85] = {
    [sym_parameter_group] = STATE(85),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(33),
    [sym_operator] = STATE(34),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(85),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(297),
    [anon_sym_as] = ACTIONS(300),
    [anon_sym_using] = ACTIONS(300),
    [anon_sym_EQ] = ACTIONS(303),
    [anon_sym_BANG] = ACTIONS(303),
    [anon_sym_PLUS] = ACTIONS(303),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(306),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(306),
    [anon_sym_GT] = ACTIONS(309),
  },
  [86] = {
    [sym_case] = STATE(142),
    [sym_default] = STATE(143),
    [sym_switch_middle] = STATE(144),
    [aux_sym_switch_repeat1] = STATE(144),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(311),
    [anon_sym_LT_POUNDcase] = ACTIONS(313),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(315),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(317),
    [sym_comment] = ACTIONS(317),
    [anon_sym_LT_POUNDlist] = ACTIONS(317),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(317),
    [sym_break] = ACTIONS(317),
    [sym_continue] = ACTIONS(317),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(317),
    [anon_sym_LT_POUNDitems] = ACTIONS(317),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(317),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(317),
    [anon_sym_LT_POUNDif] = ACTIONS(317),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(317),
    [anon_sym_LT_POUNDelseif] = ACTIONS(317),
    [anon_sym_LT_POUNDswitch] = ACTIONS(317),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(317),
    [anon_sym_LT_POUNDcase] = ACTIONS(317),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(317),
    [anon_sym_LT_POUNDfunction] = ACTIONS(317),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(317),
    [anon_sym_LT_POUNDreturn] = ACTIONS(317),
    [anon_sym_LT_POUNDmacro] = ACTIONS(317),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(317),
    [anon_sym_LT_POUNDnested] = ACTIONS(317),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(317),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(317),
    [sym_recover] = ACTIONS(317),
    [sym_fallback] = ACTIONS(317),
    [sym_flush] = ACTIONS(317),
    [anon_sym_LT_POUNDftl] = ACTIONS(317),
    [anon_sym_LT_POUNDimport] = ACTIONS(317),
    [anon_sym_LT_POUNDinclude] = ACTIONS(317),
    [sym_lt] = ACTIONS(317),
    [sym_nt] = ACTIONS(317),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(317),
    [sym_rt] = ACTIONS(317),
    [anon_sym_LT_POUNDsetting] = ACTIONS(317),
    [sym_stop] = ACTIONS(317),
    [sym_t] = ACTIONS(317),
    [anon_sym_LT_POUNDvisit] = ACTIONS(317),
    [anon_sym_LT_POUNDassign] = ACTIONS(317),
    [sym_end_assign] = ACTIONS(317),
    [anon_sym_LT_POUNDglobal] = ACTIONS(317),
    [sym_end_global] = ACTIONS(317),
    [anon_sym_LT_POUNDlocal] = ACTIONS(317),
    [sym_end_local] = ACTIONS(317),
  },
  [88] = {
    [sym_parameter_group] = STATE(146),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [sym_string] = STATE(30),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(319),
  },
  [89] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(321),
    [anon_sym_LT_POUNDif] = ACTIONS(321),
    [anon_sym_LT_POUNDswitch] = ACTIONS(321),
    [anon_sym_LT_POUNDfunction] = ACTIONS(321),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(321),
    [anon_sym_LT_POUNDreturn] = ACTIONS(321),
    [anon_sym_LT_POUNDmacro] = ACTIONS(321),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(321),
    [sym_fallback] = ACTIONS(321),
    [sym_flush] = ACTIONS(321),
    [anon_sym_LT_POUNDftl] = ACTIONS(321),
    [anon_sym_LT_POUNDimport] = ACTIONS(321),
    [anon_sym_LT_POUNDinclude] = ACTIONS(321),
    [sym_lt] = ACTIONS(321),
    [sym_nt] = ACTIONS(321),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(321),
    [sym_rt] = ACTIONS(321),
    [anon_sym_LT_POUNDsetting] = ACTIONS(321),
    [sym_stop] = ACTIONS(321),
    [sym_t] = ACTIONS(321),
    [anon_sym_LT_POUNDvisit] = ACTIONS(321),
    [anon_sym_LT_POUNDassign] = ACTIONS(321),
    [sym_end_assign] = ACTIONS(321),
    [anon_sym_LT_POUNDglobal] = ACTIONS(321),
    [sym_end_global] = ACTIONS(321),
    [anon_sym_LT_POUNDlocal] = ACTIONS(321),
    [sym_end_local] = ACTIONS(321),
  },
  [90] = {
    [sym_directive] = STATE(89),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_function_middle] = STATE(148),
    [sym_return] = STATE(89),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_function_repeat1] = STATE(148),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(323),
    [anon_sym_LT_POUNDreturn] = ACTIONS(143),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(19),
    [sym_fallback] = ACTIONS(21),
    [sym_flush] = ACTIONS(21),
    [anon_sym_LT_POUNDftl] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [sym_lt] = ACTIONS(21),
    [sym_nt] = ACTIONS(21),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(29),
    [sym_rt] = ACTIONS(21),
    [anon_sym_LT_POUNDsetting] = ACTIONS(31),
    [sym_stop] = ACTIONS(21),
    [sym_t] = ACTIONS(21),
    [anon_sym_LT_POUNDvisit] = ACTIONS(33),
    [anon_sym_LT_POUNDassign] = ACTIONS(35),
    [sym_end_assign] = ACTIONS(37),
    [anon_sym_LT_POUNDglobal] = ACTIONS(39),
    [sym_end_global] = ACTIONS(41),
    [anon_sym_LT_POUNDlocal] = ACTIONS(43),
    [sym_end_local] = ACTIONS(45),
  },
  [91] = {
    [sym_directive] = STATE(89),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_function_middle] = STATE(149),
    [sym_return] = STATE(89),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_function_repeat1] = STATE(149),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(323),
    [anon_sym_LT_POUNDreturn] = ACTIONS(143),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(19),
    [sym_fallback] = ACTIONS(21),
    [sym_flush] = ACTIONS(21),
    [anon_sym_LT_POUNDftl] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [sym_lt] = ACTIONS(21),
    [sym_nt] = ACTIONS(21),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(29),
    [sym_rt] = ACTIONS(21),
    [anon_sym_LT_POUNDsetting] = ACTIONS(31),
    [sym_stop] = ACTIONS(21),
    [sym_t] = ACTIONS(21),
    [anon_sym_LT_POUNDvisit] = ACTIONS(33),
    [anon_sym_LT_POUNDassign] = ACTIONS(35),
    [sym_end_assign] = ACTIONS(37),
    [anon_sym_LT_POUNDglobal] = ACTIONS(39),
    [sym_end_global] = ACTIONS(41),
    [anon_sym_LT_POUNDlocal] = ACTIONS(43),
    [sym_end_local] = ACTIONS(45),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(325),
    [sym_comment] = ACTIONS(325),
    [anon_sym_LT_POUNDlist] = ACTIONS(325),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(325),
    [sym_break] = ACTIONS(325),
    [sym_continue] = ACTIONS(325),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(325),
    [anon_sym_LT_POUNDitems] = ACTIONS(325),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(325),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(325),
    [anon_sym_LT_POUNDif] = ACTIONS(325),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(325),
    [anon_sym_LT_POUNDelseif] = ACTIONS(325),
    [anon_sym_LT_POUNDswitch] = ACTIONS(325),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(325),
    [anon_sym_LT_POUNDcase] = ACTIONS(325),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(325),
    [anon_sym_LT_POUNDfunction] = ACTIONS(325),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(325),
    [anon_sym_LT_POUNDreturn] = ACTIONS(325),
    [anon_sym_LT_POUNDmacro] = ACTIONS(325),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(325),
    [anon_sym_LT_POUNDnested] = ACTIONS(325),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(325),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(325),
    [sym_recover] = ACTIONS(325),
    [sym_fallback] = ACTIONS(325),
    [sym_flush] = ACTIONS(325),
    [anon_sym_LT_POUNDftl] = ACTIONS(325),
    [anon_sym_LT_POUNDimport] = ACTIONS(325),
    [anon_sym_LT_POUNDinclude] = ACTIONS(325),
    [sym_lt] = ACTIONS(325),
    [sym_nt] = ACTIONS(325),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(325),
    [sym_rt] = ACTIONS(325),
    [anon_sym_LT_POUNDsetting] = ACTIONS(325),
    [sym_stop] = ACTIONS(325),
    [sym_t] = ACTIONS(325),
    [anon_sym_LT_POUNDvisit] = ACTIONS(325),
    [anon_sym_LT_POUNDassign] = ACTIONS(325),
    [sym_end_assign] = ACTIONS(325),
    [anon_sym_LT_POUNDglobal] = ACTIONS(325),
    [sym_end_global] = ACTIONS(325),
    [anon_sym_LT_POUNDlocal] = ACTIONS(325),
    [sym_end_local] = ACTIONS(325),
  },
  [93] = {
    [sym_parameter_group] = STATE(151),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(33),
    [sym_operator] = STATE(34),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(151),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(327),
  },
  [94] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(329),
    [anon_sym_LT_POUNDif] = ACTIONS(329),
    [anon_sym_LT_POUNDswitch] = ACTIONS(329),
    [anon_sym_LT_POUNDfunction] = ACTIONS(329),
    [anon_sym_LT_POUNDreturn] = ACTIONS(329),
    [anon_sym_LT_POUNDmacro] = ACTIONS(329),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(329),
    [anon_sym_LT_POUNDnested] = ACTIONS(329),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(329),
    [sym_fallback] = ACTIONS(329),
    [sym_flush] = ACTIONS(329),
    [anon_sym_LT_POUNDftl] = ACTIONS(329),
    [anon_sym_LT_POUNDimport] = ACTIONS(329),
    [anon_sym_LT_POUNDinclude] = ACTIONS(329),
    [sym_lt] = ACTIONS(329),
    [sym_nt] = ACTIONS(329),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(329),
    [sym_rt] = ACTIONS(329),
    [anon_sym_LT_POUNDsetting] = ACTIONS(329),
    [sym_stop] = ACTIONS(329),
    [sym_t] = ACTIONS(329),
    [anon_sym_LT_POUNDvisit] = ACTIONS(329),
    [anon_sym_LT_POUNDassign] = ACTIONS(329),
    [sym_end_assign] = ACTIONS(329),
    [anon_sym_LT_POUNDglobal] = ACTIONS(329),
    [sym_end_global] = ACTIONS(329),
    [anon_sym_LT_POUNDlocal] = ACTIONS(329),
    [sym_end_local] = ACTIONS(329),
  },
  [95] = {
    [sym_directive] = STATE(94),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_return] = STATE(94),
    [sym_macro] = STATE(8),
    [sym_macro_middle] = STATE(153),
    [sym_nested] = STATE(94),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_macro_repeat1] = STATE(153),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_POUNDreturn] = ACTIONS(143),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(331),
    [anon_sym_LT_POUNDnested] = ACTIONS(149),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(19),
    [sym_fallback] = ACTIONS(21),
    [sym_flush] = ACTIONS(21),
    [anon_sym_LT_POUNDftl] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [sym_lt] = ACTIONS(21),
    [sym_nt] = ACTIONS(21),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(29),
    [sym_rt] = ACTIONS(21),
    [anon_sym_LT_POUNDsetting] = ACTIONS(31),
    [sym_stop] = ACTIONS(21),
    [sym_t] = ACTIONS(21),
    [anon_sym_LT_POUNDvisit] = ACTIONS(33),
    [anon_sym_LT_POUNDassign] = ACTIONS(35),
    [sym_end_assign] = ACTIONS(37),
    [anon_sym_LT_POUNDglobal] = ACTIONS(39),
    [sym_end_global] = ACTIONS(41),
    [anon_sym_LT_POUNDlocal] = ACTIONS(43),
    [sym_end_local] = ACTIONS(45),
  },
  [96] = {
    [sym_directive] = STATE(94),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_return] = STATE(94),
    [sym_macro] = STATE(8),
    [sym_macro_middle] = STATE(154),
    [sym_nested] = STATE(94),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_macro_repeat1] = STATE(154),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_POUNDreturn] = ACTIONS(143),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(331),
    [anon_sym_LT_POUNDnested] = ACTIONS(149),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(19),
    [sym_fallback] = ACTIONS(21),
    [sym_flush] = ACTIONS(21),
    [anon_sym_LT_POUNDftl] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [sym_lt] = ACTIONS(21),
    [sym_nt] = ACTIONS(21),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(29),
    [sym_rt] = ACTIONS(21),
    [anon_sym_LT_POUNDsetting] = ACTIONS(31),
    [sym_stop] = ACTIONS(21),
    [sym_t] = ACTIONS(21),
    [anon_sym_LT_POUNDvisit] = ACTIONS(33),
    [anon_sym_LT_POUNDassign] = ACTIONS(35),
    [sym_end_assign] = ACTIONS(37),
    [anon_sym_LT_POUNDglobal] = ACTIONS(39),
    [sym_end_global] = ACTIONS(41),
    [anon_sym_LT_POUNDlocal] = ACTIONS(43),
    [sym_end_local] = ACTIONS(45),
  },
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(333),
    [sym_comment] = ACTIONS(333),
    [anon_sym_LT_POUNDlist] = ACTIONS(333),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(333),
    [sym_break] = ACTIONS(333),
    [sym_continue] = ACTIONS(333),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(333),
    [anon_sym_LT_POUNDitems] = ACTIONS(333),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(333),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(333),
    [anon_sym_LT_POUNDif] = ACTIONS(333),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(333),
    [anon_sym_LT_POUNDelseif] = ACTIONS(333),
    [anon_sym_LT_POUNDswitch] = ACTIONS(333),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(333),
    [anon_sym_LT_POUNDcase] = ACTIONS(333),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(333),
    [anon_sym_LT_POUNDfunction] = ACTIONS(333),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(333),
    [anon_sym_LT_POUNDreturn] = ACTIONS(333),
    [anon_sym_LT_POUNDmacro] = ACTIONS(333),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(333),
    [anon_sym_LT_POUNDnested] = ACTIONS(333),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(333),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(333),
    [sym_recover] = ACTIONS(333),
    [sym_fallback] = ACTIONS(333),
    [sym_flush] = ACTIONS(333),
    [anon_sym_LT_POUNDftl] = ACTIONS(333),
    [anon_sym_LT_POUNDimport] = ACTIONS(333),
    [anon_sym_LT_POUNDinclude] = ACTIONS(333),
    [sym_lt] = ACTIONS(333),
    [sym_nt] = ACTIONS(333),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(333),
    [sym_rt] = ACTIONS(333),
    [anon_sym_LT_POUNDsetting] = ACTIONS(333),
    [sym_stop] = ACTIONS(333),
    [sym_t] = ACTIONS(333),
    [anon_sym_LT_POUNDvisit] = ACTIONS(333),
    [anon_sym_LT_POUNDassign] = ACTIONS(333),
    [sym_end_assign] = ACTIONS(333),
    [anon_sym_LT_POUNDglobal] = ACTIONS(333),
    [sym_end_global] = ACTIONS(333),
    [anon_sym_LT_POUNDlocal] = ACTIONS(333),
    [sym_end_local] = ACTIONS(333),
  },
  [98] = {
    [sym_directive] = STATE(43),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_attempt_middle] = STATE(98),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_attempt_repeat1] = STATE(98),
    [anon_sym_LT_POUNDlist] = ACTIONS(335),
    [anon_sym_LT_POUNDif] = ACTIONS(338),
    [anon_sym_LT_POUNDswitch] = ACTIONS(341),
    [anon_sym_LT_POUNDfunction] = ACTIONS(344),
    [anon_sym_LT_POUNDmacro] = ACTIONS(347),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(350),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(353),
    [sym_recover] = ACTIONS(355),
    [sym_fallback] = ACTIONS(358),
    [sym_flush] = ACTIONS(358),
    [anon_sym_LT_POUNDftl] = ACTIONS(361),
    [anon_sym_LT_POUNDimport] = ACTIONS(364),
    [anon_sym_LT_POUNDinclude] = ACTIONS(367),
    [sym_lt] = ACTIONS(358),
    [sym_nt] = ACTIONS(358),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(370),
    [sym_rt] = ACTIONS(358),
    [anon_sym_LT_POUNDsetting] = ACTIONS(373),
    [sym_stop] = ACTIONS(358),
    [sym_t] = ACTIONS(358),
    [anon_sym_LT_POUNDvisit] = ACTIONS(376),
    [anon_sym_LT_POUNDassign] = ACTIONS(379),
    [sym_end_assign] = ACTIONS(382),
    [anon_sym_LT_POUNDglobal] = ACTIONS(385),
    [sym_end_global] = ACTIONS(388),
    [anon_sym_LT_POUNDlocal] = ACTIONS(391),
    [sym_end_local] = ACTIONS(394),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(397),
    [sym_comment] = ACTIONS(397),
    [anon_sym_LT_POUNDlist] = ACTIONS(397),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(397),
    [sym_break] = ACTIONS(397),
    [sym_continue] = ACTIONS(397),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(397),
    [anon_sym_LT_POUNDitems] = ACTIONS(397),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(397),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(397),
    [anon_sym_LT_POUNDif] = ACTIONS(397),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(397),
    [anon_sym_LT_POUNDelseif] = ACTIONS(397),
    [anon_sym_LT_POUNDswitch] = ACTIONS(397),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(397),
    [anon_sym_LT_POUNDcase] = ACTIONS(397),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(397),
    [anon_sym_LT_POUNDfunction] = ACTIONS(397),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(397),
    [anon_sym_LT_POUNDreturn] = ACTIONS(397),
    [anon_sym_LT_POUNDmacro] = ACTIONS(397),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(397),
    [anon_sym_LT_POUNDnested] = ACTIONS(397),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(397),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(397),
    [sym_recover] = ACTIONS(397),
    [sym_fallback] = ACTIONS(397),
    [sym_flush] = ACTIONS(397),
    [anon_sym_LT_POUNDftl] = ACTIONS(397),
    [anon_sym_LT_POUNDimport] = ACTIONS(397),
    [anon_sym_LT_POUNDinclude] = ACTIONS(397),
    [sym_lt] = ACTIONS(397),
    [sym_nt] = ACTIONS(397),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(397),
    [sym_rt] = ACTIONS(397),
    [anon_sym_LT_POUNDsetting] = ACTIONS(397),
    [sym_stop] = ACTIONS(397),
    [sym_t] = ACTIONS(397),
    [anon_sym_LT_POUNDvisit] = ACTIONS(397),
    [anon_sym_LT_POUNDassign] = ACTIONS(397),
    [sym_end_assign] = ACTIONS(397),
    [anon_sym_LT_POUNDglobal] = ACTIONS(397),
    [sym_end_global] = ACTIONS(397),
    [anon_sym_LT_POUNDlocal] = ACTIONS(397),
    [sym_end_local] = ACTIONS(397),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(399),
    [sym_comment] = ACTIONS(399),
    [anon_sym_LT_POUNDlist] = ACTIONS(399),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(399),
    [sym_break] = ACTIONS(399),
    [sym_continue] = ACTIONS(399),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(399),
    [anon_sym_LT_POUNDitems] = ACTIONS(399),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(399),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(399),
    [anon_sym_LT_POUNDif] = ACTIONS(399),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(399),
    [anon_sym_LT_POUNDelseif] = ACTIONS(399),
    [anon_sym_LT_POUNDswitch] = ACTIONS(399),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(399),
    [anon_sym_LT_POUNDcase] = ACTIONS(399),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(399),
    [anon_sym_LT_POUNDfunction] = ACTIONS(399),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(399),
    [anon_sym_LT_POUNDreturn] = ACTIONS(399),
    [anon_sym_LT_POUNDmacro] = ACTIONS(399),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(399),
    [anon_sym_LT_POUNDnested] = ACTIONS(399),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(399),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(399),
    [sym_recover] = ACTIONS(399),
    [sym_fallback] = ACTIONS(399),
    [sym_flush] = ACTIONS(399),
    [anon_sym_LT_POUNDftl] = ACTIONS(399),
    [anon_sym_LT_POUNDimport] = ACTIONS(399),
    [anon_sym_LT_POUNDinclude] = ACTIONS(399),
    [sym_lt] = ACTIONS(399),
    [sym_nt] = ACTIONS(399),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(399),
    [sym_rt] = ACTIONS(399),
    [anon_sym_LT_POUNDsetting] = ACTIONS(399),
    [sym_stop] = ACTIONS(399),
    [sym_t] = ACTIONS(399),
    [anon_sym_LT_POUNDvisit] = ACTIONS(399),
    [anon_sym_LT_POUNDassign] = ACTIONS(399),
    [sym_end_assign] = ACTIONS(399),
    [anon_sym_LT_POUNDglobal] = ACTIONS(399),
    [sym_end_global] = ACTIONS(399),
    [anon_sym_LT_POUNDlocal] = ACTIONS(399),
    [sym_end_local] = ACTIONS(399),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(401),
    [sym_comment] = ACTIONS(401),
    [anon_sym_LT_POUNDlist] = ACTIONS(401),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(401),
    [sym_break] = ACTIONS(401),
    [sym_continue] = ACTIONS(401),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(401),
    [anon_sym_LT_POUNDitems] = ACTIONS(401),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(401),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(401),
    [anon_sym_LT_POUNDif] = ACTIONS(401),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(401),
    [anon_sym_LT_POUNDelseif] = ACTIONS(401),
    [anon_sym_LT_POUNDswitch] = ACTIONS(401),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(401),
    [anon_sym_LT_POUNDcase] = ACTIONS(401),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(401),
    [anon_sym_LT_POUNDfunction] = ACTIONS(401),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(401),
    [anon_sym_LT_POUNDreturn] = ACTIONS(401),
    [anon_sym_LT_POUNDmacro] = ACTIONS(401),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(401),
    [anon_sym_LT_POUNDnested] = ACTIONS(401),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(401),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(401),
    [sym_recover] = ACTIONS(401),
    [sym_fallback] = ACTIONS(401),
    [sym_flush] = ACTIONS(401),
    [anon_sym_LT_POUNDftl] = ACTIONS(401),
    [anon_sym_LT_POUNDimport] = ACTIONS(401),
    [anon_sym_LT_POUNDinclude] = ACTIONS(401),
    [sym_lt] = ACTIONS(401),
    [sym_nt] = ACTIONS(401),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(401),
    [sym_rt] = ACTIONS(401),
    [anon_sym_LT_POUNDsetting] = ACTIONS(401),
    [sym_stop] = ACTIONS(401),
    [sym_t] = ACTIONS(401),
    [anon_sym_LT_POUNDvisit] = ACTIONS(401),
    [anon_sym_LT_POUNDassign] = ACTIONS(401),
    [sym_end_assign] = ACTIONS(401),
    [anon_sym_LT_POUNDglobal] = ACTIONS(401),
    [sym_end_global] = ACTIONS(401),
    [anon_sym_LT_POUNDlocal] = ACTIONS(401),
    [sym_end_local] = ACTIONS(401),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(403),
    [sym_comment] = ACTIONS(403),
    [anon_sym_LT_POUNDlist] = ACTIONS(403),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(403),
    [sym_break] = ACTIONS(403),
    [sym_continue] = ACTIONS(403),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(403),
    [anon_sym_LT_POUNDitems] = ACTIONS(403),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(403),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(403),
    [anon_sym_LT_POUNDif] = ACTIONS(403),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(403),
    [anon_sym_LT_POUNDelseif] = ACTIONS(403),
    [anon_sym_LT_POUNDswitch] = ACTIONS(403),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(403),
    [anon_sym_LT_POUNDcase] = ACTIONS(403),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(403),
    [anon_sym_LT_POUNDfunction] = ACTIONS(403),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(403),
    [anon_sym_LT_POUNDreturn] = ACTIONS(403),
    [anon_sym_LT_POUNDmacro] = ACTIONS(403),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(403),
    [anon_sym_LT_POUNDnested] = ACTIONS(403),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(403),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(403),
    [sym_recover] = ACTIONS(403),
    [sym_fallback] = ACTIONS(403),
    [sym_flush] = ACTIONS(403),
    [anon_sym_LT_POUNDftl] = ACTIONS(403),
    [anon_sym_LT_POUNDimport] = ACTIONS(403),
    [anon_sym_LT_POUNDinclude] = ACTIONS(403),
    [sym_lt] = ACTIONS(403),
    [sym_nt] = ACTIONS(403),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(403),
    [sym_rt] = ACTIONS(403),
    [anon_sym_LT_POUNDsetting] = ACTIONS(403),
    [sym_stop] = ACTIONS(403),
    [sym_t] = ACTIONS(403),
    [anon_sym_LT_POUNDvisit] = ACTIONS(403),
    [anon_sym_LT_POUNDassign] = ACTIONS(403),
    [sym_end_assign] = ACTIONS(403),
    [anon_sym_LT_POUNDglobal] = ACTIONS(403),
    [sym_end_global] = ACTIONS(403),
    [anon_sym_LT_POUNDlocal] = ACTIONS(403),
    [sym_end_local] = ACTIONS(403),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(405),
    [sym_comment] = ACTIONS(405),
    [anon_sym_LT_POUNDlist] = ACTIONS(405),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(405),
    [sym_break] = ACTIONS(405),
    [sym_continue] = ACTIONS(405),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(405),
    [anon_sym_LT_POUNDitems] = ACTIONS(405),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(405),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(405),
    [anon_sym_LT_POUNDif] = ACTIONS(405),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(405),
    [anon_sym_LT_POUNDelseif] = ACTIONS(405),
    [anon_sym_LT_POUNDswitch] = ACTIONS(405),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(405),
    [anon_sym_LT_POUNDcase] = ACTIONS(405),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(405),
    [anon_sym_LT_POUNDfunction] = ACTIONS(405),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(405),
    [anon_sym_LT_POUNDreturn] = ACTIONS(405),
    [anon_sym_LT_POUNDmacro] = ACTIONS(405),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(405),
    [anon_sym_LT_POUNDnested] = ACTIONS(405),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(405),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(405),
    [sym_recover] = ACTIONS(405),
    [sym_fallback] = ACTIONS(405),
    [sym_flush] = ACTIONS(405),
    [anon_sym_LT_POUNDftl] = ACTIONS(405),
    [anon_sym_LT_POUNDimport] = ACTIONS(405),
    [anon_sym_LT_POUNDinclude] = ACTIONS(405),
    [sym_lt] = ACTIONS(405),
    [sym_nt] = ACTIONS(405),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(405),
    [sym_rt] = ACTIONS(405),
    [anon_sym_LT_POUNDsetting] = ACTIONS(405),
    [sym_stop] = ACTIONS(405),
    [sym_t] = ACTIONS(405),
    [anon_sym_LT_POUNDvisit] = ACTIONS(405),
    [anon_sym_LT_POUNDassign] = ACTIONS(405),
    [sym_end_assign] = ACTIONS(405),
    [anon_sym_LT_POUNDglobal] = ACTIONS(405),
    [sym_end_global] = ACTIONS(405),
    [anon_sym_LT_POUNDlocal] = ACTIONS(405),
    [sym_end_local] = ACTIONS(405),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(407),
    [sym_comment] = ACTIONS(407),
    [anon_sym_LT_POUNDlist] = ACTIONS(407),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(407),
    [sym_break] = ACTIONS(407),
    [sym_continue] = ACTIONS(407),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(407),
    [anon_sym_LT_POUNDitems] = ACTIONS(407),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(407),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(407),
    [anon_sym_LT_POUNDif] = ACTIONS(407),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(407),
    [anon_sym_LT_POUNDelseif] = ACTIONS(407),
    [anon_sym_LT_POUNDswitch] = ACTIONS(407),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(407),
    [anon_sym_LT_POUNDcase] = ACTIONS(407),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(407),
    [anon_sym_LT_POUNDfunction] = ACTIONS(407),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(407),
    [anon_sym_LT_POUNDreturn] = ACTIONS(407),
    [anon_sym_LT_POUNDmacro] = ACTIONS(407),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(407),
    [anon_sym_LT_POUNDnested] = ACTIONS(407),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(407),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(407),
    [sym_recover] = ACTIONS(407),
    [sym_fallback] = ACTIONS(407),
    [sym_flush] = ACTIONS(407),
    [anon_sym_LT_POUNDftl] = ACTIONS(407),
    [anon_sym_LT_POUNDimport] = ACTIONS(407),
    [anon_sym_LT_POUNDinclude] = ACTIONS(407),
    [sym_lt] = ACTIONS(407),
    [sym_nt] = ACTIONS(407),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(407),
    [sym_rt] = ACTIONS(407),
    [anon_sym_LT_POUNDsetting] = ACTIONS(407),
    [sym_stop] = ACTIONS(407),
    [sym_t] = ACTIONS(407),
    [anon_sym_LT_POUNDvisit] = ACTIONS(407),
    [anon_sym_LT_POUNDassign] = ACTIONS(407),
    [sym_end_assign] = ACTIONS(407),
    [anon_sym_LT_POUNDglobal] = ACTIONS(407),
    [sym_end_global] = ACTIONS(407),
    [anon_sym_LT_POUNDlocal] = ACTIONS(407),
    [sym_end_local] = ACTIONS(407),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(409),
    [sym_comment] = ACTIONS(409),
    [anon_sym_LT_POUNDlist] = ACTIONS(409),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(409),
    [sym_break] = ACTIONS(409),
    [sym_continue] = ACTIONS(409),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(409),
    [anon_sym_LT_POUNDitems] = ACTIONS(409),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(409),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(409),
    [anon_sym_LT_POUNDif] = ACTIONS(409),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(409),
    [anon_sym_LT_POUNDelseif] = ACTIONS(409),
    [anon_sym_LT_POUNDswitch] = ACTIONS(409),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(409),
    [anon_sym_LT_POUNDcase] = ACTIONS(409),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(409),
    [anon_sym_LT_POUNDfunction] = ACTIONS(409),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(409),
    [anon_sym_LT_POUNDreturn] = ACTIONS(409),
    [anon_sym_LT_POUNDmacro] = ACTIONS(409),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(409),
    [anon_sym_LT_POUNDnested] = ACTIONS(409),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(409),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(409),
    [sym_recover] = ACTIONS(409),
    [sym_fallback] = ACTIONS(409),
    [sym_flush] = ACTIONS(409),
    [anon_sym_LT_POUNDftl] = ACTIONS(409),
    [anon_sym_LT_POUNDimport] = ACTIONS(409),
    [anon_sym_LT_POUNDinclude] = ACTIONS(409),
    [sym_lt] = ACTIONS(409),
    [sym_nt] = ACTIONS(409),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(409),
    [sym_rt] = ACTIONS(409),
    [anon_sym_LT_POUNDsetting] = ACTIONS(409),
    [sym_stop] = ACTIONS(409),
    [sym_t] = ACTIONS(409),
    [anon_sym_LT_POUNDvisit] = ACTIONS(409),
    [anon_sym_LT_POUNDassign] = ACTIONS(409),
    [sym_end_assign] = ACTIONS(409),
    [anon_sym_LT_POUNDglobal] = ACTIONS(409),
    [sym_end_global] = ACTIONS(409),
    [anon_sym_LT_POUNDlocal] = ACTIONS(409),
    [sym_end_local] = ACTIONS(409),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(411),
    [sym_comment] = ACTIONS(411),
    [anon_sym_LT_POUNDlist] = ACTIONS(411),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(411),
    [sym_break] = ACTIONS(411),
    [sym_continue] = ACTIONS(411),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(411),
    [anon_sym_LT_POUNDitems] = ACTIONS(411),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(411),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(411),
    [anon_sym_LT_POUNDif] = ACTIONS(411),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(411),
    [anon_sym_LT_POUNDelseif] = ACTIONS(411),
    [anon_sym_LT_POUNDswitch] = ACTIONS(411),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(411),
    [anon_sym_LT_POUNDcase] = ACTIONS(411),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(411),
    [anon_sym_LT_POUNDfunction] = ACTIONS(411),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(411),
    [anon_sym_LT_POUNDreturn] = ACTIONS(411),
    [anon_sym_LT_POUNDmacro] = ACTIONS(411),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(411),
    [anon_sym_LT_POUNDnested] = ACTIONS(411),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(411),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(411),
    [sym_recover] = ACTIONS(411),
    [sym_fallback] = ACTIONS(411),
    [sym_flush] = ACTIONS(411),
    [anon_sym_LT_POUNDftl] = ACTIONS(411),
    [anon_sym_LT_POUNDimport] = ACTIONS(411),
    [anon_sym_LT_POUNDinclude] = ACTIONS(411),
    [sym_lt] = ACTIONS(411),
    [sym_nt] = ACTIONS(411),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(411),
    [sym_rt] = ACTIONS(411),
    [anon_sym_LT_POUNDsetting] = ACTIONS(411),
    [sym_stop] = ACTIONS(411),
    [sym_t] = ACTIONS(411),
    [anon_sym_LT_POUNDvisit] = ACTIONS(411),
    [anon_sym_LT_POUNDassign] = ACTIONS(411),
    [sym_end_assign] = ACTIONS(411),
    [anon_sym_LT_POUNDglobal] = ACTIONS(411),
    [sym_end_global] = ACTIONS(411),
    [anon_sym_LT_POUNDlocal] = ACTIONS(411),
    [sym_end_local] = ACTIONS(411),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(413),
    [sym_comment] = ACTIONS(413),
    [anon_sym_LT_POUNDlist] = ACTIONS(413),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(413),
    [sym_break] = ACTIONS(413),
    [sym_continue] = ACTIONS(413),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(413),
    [anon_sym_LT_POUNDitems] = ACTIONS(413),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(413),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(413),
    [anon_sym_LT_POUNDif] = ACTIONS(413),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(413),
    [anon_sym_LT_POUNDelseif] = ACTIONS(413),
    [anon_sym_LT_POUNDswitch] = ACTIONS(413),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(413),
    [anon_sym_LT_POUNDcase] = ACTIONS(413),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(413),
    [anon_sym_LT_POUNDfunction] = ACTIONS(413),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(413),
    [anon_sym_LT_POUNDreturn] = ACTIONS(413),
    [anon_sym_LT_POUNDmacro] = ACTIONS(413),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(413),
    [anon_sym_LT_POUNDnested] = ACTIONS(413),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(413),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(413),
    [sym_recover] = ACTIONS(413),
    [sym_fallback] = ACTIONS(413),
    [sym_flush] = ACTIONS(413),
    [anon_sym_LT_POUNDftl] = ACTIONS(413),
    [anon_sym_LT_POUNDimport] = ACTIONS(413),
    [anon_sym_LT_POUNDinclude] = ACTIONS(413),
    [sym_lt] = ACTIONS(413),
    [sym_nt] = ACTIONS(413),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(413),
    [sym_rt] = ACTIONS(413),
    [anon_sym_LT_POUNDsetting] = ACTIONS(413),
    [sym_stop] = ACTIONS(413),
    [sym_t] = ACTIONS(413),
    [anon_sym_LT_POUNDvisit] = ACTIONS(413),
    [anon_sym_LT_POUNDassign] = ACTIONS(413),
    [sym_end_assign] = ACTIONS(413),
    [anon_sym_LT_POUNDglobal] = ACTIONS(413),
    [sym_end_global] = ACTIONS(413),
    [anon_sym_LT_POUNDlocal] = ACTIONS(413),
    [sym_end_local] = ACTIONS(413),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(415),
    [sym_comment] = ACTIONS(415),
    [anon_sym_LT_POUNDlist] = ACTIONS(415),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(415),
    [sym_break] = ACTIONS(415),
    [sym_continue] = ACTIONS(415),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(415),
    [anon_sym_LT_POUNDitems] = ACTIONS(415),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(415),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(415),
    [anon_sym_LT_POUNDif] = ACTIONS(415),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(415),
    [anon_sym_LT_POUNDelseif] = ACTIONS(415),
    [anon_sym_LT_POUNDswitch] = ACTIONS(415),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(415),
    [anon_sym_LT_POUNDcase] = ACTIONS(415),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(415),
    [anon_sym_LT_POUNDfunction] = ACTIONS(415),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(415),
    [anon_sym_LT_POUNDreturn] = ACTIONS(415),
    [anon_sym_LT_POUNDmacro] = ACTIONS(415),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(415),
    [anon_sym_LT_POUNDnested] = ACTIONS(415),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(415),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(415),
    [sym_recover] = ACTIONS(415),
    [sym_fallback] = ACTIONS(415),
    [sym_flush] = ACTIONS(415),
    [anon_sym_LT_POUNDftl] = ACTIONS(415),
    [anon_sym_LT_POUNDimport] = ACTIONS(415),
    [anon_sym_LT_POUNDinclude] = ACTIONS(415),
    [sym_lt] = ACTIONS(415),
    [sym_nt] = ACTIONS(415),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(415),
    [sym_rt] = ACTIONS(415),
    [anon_sym_LT_POUNDsetting] = ACTIONS(415),
    [sym_stop] = ACTIONS(415),
    [sym_t] = ACTIONS(415),
    [anon_sym_LT_POUNDvisit] = ACTIONS(415),
    [anon_sym_LT_POUNDassign] = ACTIONS(415),
    [sym_end_assign] = ACTIONS(415),
    [anon_sym_LT_POUNDglobal] = ACTIONS(415),
    [sym_end_global] = ACTIONS(415),
    [anon_sym_LT_POUNDlocal] = ACTIONS(415),
    [sym_end_local] = ACTIONS(415),
  },
  [109] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(417),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(417),
    [sym_break] = ACTIONS(417),
    [sym_continue] = ACTIONS(417),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(417),
    [anon_sym_LT_POUNDitems] = ACTIONS(417),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(417),
    [anon_sym_LT_POUNDif] = ACTIONS(417),
    [anon_sym_LT_POUNDswitch] = ACTIONS(417),
    [anon_sym_LT_POUNDfunction] = ACTIONS(417),
    [anon_sym_LT_POUNDmacro] = ACTIONS(417),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(417),
    [sym_fallback] = ACTIONS(417),
    [sym_flush] = ACTIONS(417),
    [anon_sym_LT_POUNDftl] = ACTIONS(417),
    [anon_sym_LT_POUNDimport] = ACTIONS(417),
    [anon_sym_LT_POUNDinclude] = ACTIONS(417),
    [sym_lt] = ACTIONS(417),
    [sym_nt] = ACTIONS(417),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(417),
    [sym_rt] = ACTIONS(417),
    [anon_sym_LT_POUNDsetting] = ACTIONS(417),
    [sym_stop] = ACTIONS(417),
    [sym_t] = ACTIONS(417),
    [anon_sym_LT_POUNDvisit] = ACTIONS(417),
    [anon_sym_LT_POUNDassign] = ACTIONS(417),
    [sym_end_assign] = ACTIONS(417),
    [anon_sym_LT_POUNDglobal] = ACTIONS(417),
    [sym_end_global] = ACTIONS(417),
    [anon_sym_LT_POUNDlocal] = ACTIONS(417),
    [sym_end_local] = ACTIONS(417),
  },
  [110] = {
    [sym_directive] = STATE(109),
    [sym_list] = STATE(8),
    [sym_list_middle] = STATE(155),
    [sym_items] = STATE(109),
    [sym_sep] = STATE(109),
    [sym_sep_block] = STATE(114),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_list_repeat1] = STATE(155),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(419),
    [sym_break] = ACTIONS(259),
    [sym_continue] = ACTIONS(259),
    [anon_sym_LT_POUNDitems] = ACTIONS(263),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(265),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(19),
    [sym_fallback] = ACTIONS(21),
    [sym_flush] = ACTIONS(21),
    [anon_sym_LT_POUNDftl] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [sym_lt] = ACTIONS(21),
    [sym_nt] = ACTIONS(21),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(29),
    [sym_rt] = ACTIONS(21),
    [anon_sym_LT_POUNDsetting] = ACTIONS(31),
    [sym_stop] = ACTIONS(21),
    [sym_t] = ACTIONS(21),
    [anon_sym_LT_POUNDvisit] = ACTIONS(33),
    [anon_sym_LT_POUNDassign] = ACTIONS(35),
    [sym_end_assign] = ACTIONS(37),
    [anon_sym_LT_POUNDglobal] = ACTIONS(39),
    [sym_end_global] = ACTIONS(41),
    [anon_sym_LT_POUNDlocal] = ACTIONS(43),
    [sym_end_local] = ACTIONS(45),
  },
  [111] = {
    [sym_parameter_group] = STATE(156),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [sym_string] = STATE(30),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(53),
  },
  [112] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(421),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(421),
    [sym_break] = ACTIONS(421),
    [sym_continue] = ACTIONS(421),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(421),
    [anon_sym_LT_POUNDitems] = ACTIONS(421),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(421),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(421),
    [anon_sym_LT_SLASH_POUNDsep_GT] = ACTIONS(423),
    [anon_sym_LT_POUNDif] = ACTIONS(421),
    [anon_sym_LT_POUNDswitch] = ACTIONS(421),
    [anon_sym_LT_POUNDfunction] = ACTIONS(421),
    [anon_sym_LT_POUNDmacro] = ACTIONS(421),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(421),
    [sym_fallback] = ACTIONS(421),
    [sym_flush] = ACTIONS(421),
    [anon_sym_LT_POUNDftl] = ACTIONS(421),
    [anon_sym_LT_POUNDimport] = ACTIONS(421),
    [anon_sym_LT_POUNDinclude] = ACTIONS(421),
    [sym_lt] = ACTIONS(421),
    [sym_nt] = ACTIONS(421),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(421),
    [sym_rt] = ACTIONS(421),
    [anon_sym_LT_POUNDsetting] = ACTIONS(421),
    [sym_stop] = ACTIONS(421),
    [sym_t] = ACTIONS(421),
    [anon_sym_LT_POUNDvisit] = ACTIONS(421),
    [anon_sym_LT_POUNDassign] = ACTIONS(421),
    [sym_end_assign] = ACTIONS(421),
    [anon_sym_LT_POUNDglobal] = ACTIONS(421),
    [sym_end_global] = ACTIONS(421),
    [anon_sym_LT_POUNDlocal] = ACTIONS(421),
    [sym_end_local] = ACTIONS(421),
  },
  [113] = {
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(425),
  },
  [114] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(421),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(421),
    [sym_break] = ACTIONS(421),
    [sym_continue] = ACTIONS(421),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(421),
    [anon_sym_LT_POUNDitems] = ACTIONS(421),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(421),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(421),
    [anon_sym_LT_POUNDif] = ACTIONS(421),
    [anon_sym_LT_POUNDswitch] = ACTIONS(421),
    [anon_sym_LT_POUNDfunction] = ACTIONS(421),
    [anon_sym_LT_POUNDmacro] = ACTIONS(421),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(421),
    [sym_fallback] = ACTIONS(421),
    [sym_flush] = ACTIONS(421),
    [anon_sym_LT_POUNDftl] = ACTIONS(421),
    [anon_sym_LT_POUNDimport] = ACTIONS(421),
    [anon_sym_LT_POUNDinclude] = ACTIONS(421),
    [sym_lt] = ACTIONS(421),
    [sym_nt] = ACTIONS(421),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(421),
    [sym_rt] = ACTIONS(421),
    [anon_sym_LT_POUNDsetting] = ACTIONS(421),
    [sym_stop] = ACTIONS(421),
    [sym_t] = ACTIONS(421),
    [anon_sym_LT_POUNDvisit] = ACTIONS(421),
    [anon_sym_LT_POUNDassign] = ACTIONS(421),
    [sym_end_assign] = ACTIONS(421),
    [anon_sym_LT_POUNDglobal] = ACTIONS(421),
    [sym_end_global] = ACTIONS(421),
    [anon_sym_LT_POUNDlocal] = ACTIONS(421),
    [sym_end_local] = ACTIONS(421),
  },
  [115] = {
    [sym_directive] = STATE(109),
    [sym_list] = STATE(8),
    [sym_list_middle] = STATE(160),
    [sym_list_else] = STATE(159),
    [sym_items] = STATE(109),
    [sym_sep] = STATE(109),
    [sym_sep_block] = STATE(114),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_list_repeat1] = STATE(160),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(425),
    [sym_break] = ACTIONS(259),
    [sym_continue] = ACTIONS(259),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(261),
    [anon_sym_LT_POUNDitems] = ACTIONS(263),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(265),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(19),
    [sym_fallback] = ACTIONS(21),
    [sym_flush] = ACTIONS(21),
    [anon_sym_LT_POUNDftl] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [sym_lt] = ACTIONS(21),
    [sym_nt] = ACTIONS(21),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(29),
    [sym_rt] = ACTIONS(21),
    [anon_sym_LT_POUNDsetting] = ACTIONS(31),
    [sym_stop] = ACTIONS(21),
    [sym_t] = ACTIONS(21),
    [anon_sym_LT_POUNDvisit] = ACTIONS(33),
    [anon_sym_LT_POUNDassign] = ACTIONS(35),
    [sym_end_assign] = ACTIONS(37),
    [anon_sym_LT_POUNDglobal] = ACTIONS(39),
    [sym_end_global] = ACTIONS(41),
    [anon_sym_LT_POUNDlocal] = ACTIONS(43),
    [sym_end_local] = ACTIONS(45),
  },
  [116] = {
    [sym_expression] = STATE(124),
    [sym_curveBracket] = STATE(66),
    [sym_sequence] = STATE(66),
    [sym_string] = STATE(70),
    [aux_sym_unary_expression_repeat1] = STATE(124),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(111),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(115),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(427),
  },
  [117] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(429),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(429),
    [anon_sym_LPAREN] = ACTIONS(429),
    [anon_sym_LBRACK] = ACTIONS(429),
    [anon_sym_RBRACK] = ACTIONS(429),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(429),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(429),
    [anon_sym_GT] = ACTIONS(429),
  },
  [118] = {
    [sym_operator] = STATE(161),
    [anon_sym_as] = ACTIONS(51),
    [anon_sym_using] = ACTIONS(51),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
  },
  [119] = {
    [sym_expression] = STATE(162),
    [sym_curveBracket] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_string] = STATE(82),
    [aux_sym_unary_expression_repeat1] = STATE(162),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(129),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(133),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
  },
  [120] = {
    [sym_parameter_group] = STATE(164),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(118),
    [sym_operator] = STATE(119),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(164),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(431),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
  },
  [121] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(433),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(433),
    [anon_sym_LPAREN] = ACTIONS(433),
    [anon_sym_LBRACK] = ACTIONS(433),
    [anon_sym_RBRACK] = ACTIONS(433),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(433),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(433),
    [anon_sym_GT] = ACTIONS(433),
  },
  [122] = {
    [sym_expression] = STATE(166),
    [sym_curveBracket] = STATE(66),
    [sym_sequence] = STATE(66),
    [sym_string] = STATE(70),
    [aux_sym_unary_expression_repeat1] = STATE(166),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(111),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(435),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(117),
  },
  [123] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(437),
    [anon_sym_LPAREN] = ACTIONS(437),
    [anon_sym_LBRACK] = ACTIONS(437),
    [anon_sym_RBRACK] = ACTIONS(437),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(437),
    [anon_sym_GT] = ACTIONS(437),
  },
  [124] = {
    [sym_expression] = STATE(124),
    [sym_curveBracket] = STATE(66),
    [sym_sequence] = STATE(66),
    [sym_string] = STATE(70),
    [aux_sym_unary_expression_repeat1] = STATE(124),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(439),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(439),
    [anon_sym_LPAREN] = ACTIONS(442),
    [anon_sym_LBRACK] = ACTIONS(445),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(448),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(448),
    [anon_sym_GT] = ACTIONS(451),
  },
  [125] = {
    [sym_directive] = STATE(75),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_elseif] = STATE(75),
    [sym_if_middle] = STATE(167),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_if_repeat1] = STATE(167),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(453),
    [anon_sym_LT_POUNDelseif] = ACTIONS(127),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(19),
    [sym_fallback] = ACTIONS(21),
    [sym_flush] = ACTIONS(21),
    [anon_sym_LT_POUNDftl] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [sym_lt] = ACTIONS(21),
    [sym_nt] = ACTIONS(21),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(29),
    [sym_rt] = ACTIONS(21),
    [anon_sym_LT_POUNDsetting] = ACTIONS(31),
    [sym_stop] = ACTIONS(21),
    [sym_t] = ACTIONS(21),
    [anon_sym_LT_POUNDvisit] = ACTIONS(33),
    [anon_sym_LT_POUNDassign] = ACTIONS(35),
    [sym_end_assign] = ACTIONS(37),
    [anon_sym_LT_POUNDglobal] = ACTIONS(39),
    [sym_end_global] = ACTIONS(41),
    [anon_sym_LT_POUNDlocal] = ACTIONS(43),
    [sym_end_local] = ACTIONS(45),
  },
  [126] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(455),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(455),
    [anon_sym_LT_POUNDif] = ACTIONS(455),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(455),
    [anon_sym_LT_POUNDelseif] = ACTIONS(455),
    [anon_sym_LT_POUNDswitch] = ACTIONS(455),
    [anon_sym_LT_POUNDfunction] = ACTIONS(455),
    [anon_sym_LT_POUNDmacro] = ACTIONS(455),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(455),
    [sym_fallback] = ACTIONS(455),
    [sym_flush] = ACTIONS(455),
    [anon_sym_LT_POUNDftl] = ACTIONS(455),
    [anon_sym_LT_POUNDimport] = ACTIONS(455),
    [anon_sym_LT_POUNDinclude] = ACTIONS(455),
    [sym_lt] = ACTIONS(455),
    [sym_nt] = ACTIONS(455),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(455),
    [sym_rt] = ACTIONS(455),
    [anon_sym_LT_POUNDsetting] = ACTIONS(455),
    [sym_stop] = ACTIONS(455),
    [sym_t] = ACTIONS(455),
    [anon_sym_LT_POUNDvisit] = ACTIONS(455),
    [anon_sym_LT_POUNDassign] = ACTIONS(455),
    [sym_end_assign] = ACTIONS(455),
    [anon_sym_LT_POUNDglobal] = ACTIONS(455),
    [sym_end_global] = ACTIONS(455),
    [anon_sym_LT_POUNDlocal] = ACTIONS(455),
    [sym_end_local] = ACTIONS(455),
  },
  [127] = {
    [sym_parameter_group] = STATE(85),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(33),
    [sym_operator] = STATE(34),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(85),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(457),
  },
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(459),
    [sym_comment] = ACTIONS(459),
    [anon_sym_LT_POUNDlist] = ACTIONS(459),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(459),
    [sym_break] = ACTIONS(459),
    [sym_continue] = ACTIONS(459),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(459),
    [anon_sym_LT_POUNDitems] = ACTIONS(459),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(459),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(459),
    [anon_sym_LT_POUNDif] = ACTIONS(459),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(459),
    [anon_sym_LT_POUNDelseif] = ACTIONS(459),
    [anon_sym_LT_POUNDswitch] = ACTIONS(459),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(459),
    [anon_sym_LT_POUNDcase] = ACTIONS(459),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(459),
    [anon_sym_LT_POUNDfunction] = ACTIONS(459),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(459),
    [anon_sym_LT_POUNDreturn] = ACTIONS(459),
    [anon_sym_LT_POUNDmacro] = ACTIONS(459),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(459),
    [anon_sym_LT_POUNDnested] = ACTIONS(459),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(459),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(459),
    [sym_recover] = ACTIONS(459),
    [sym_fallback] = ACTIONS(459),
    [sym_flush] = ACTIONS(459),
    [anon_sym_LT_POUNDftl] = ACTIONS(459),
    [anon_sym_LT_POUNDimport] = ACTIONS(459),
    [anon_sym_LT_POUNDinclude] = ACTIONS(459),
    [sym_lt] = ACTIONS(459),
    [sym_nt] = ACTIONS(459),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(459),
    [sym_rt] = ACTIONS(459),
    [anon_sym_LT_POUNDsetting] = ACTIONS(459),
    [sym_stop] = ACTIONS(459),
    [sym_t] = ACTIONS(459),
    [anon_sym_LT_POUNDvisit] = ACTIONS(459),
    [anon_sym_LT_POUNDassign] = ACTIONS(459),
    [sym_end_assign] = ACTIONS(459),
    [anon_sym_LT_POUNDglobal] = ACTIONS(459),
    [sym_end_global] = ACTIONS(459),
    [anon_sym_LT_POUNDlocal] = ACTIONS(459),
    [sym_end_local] = ACTIONS(459),
  },
  [129] = {
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(461),
  },
  [130] = {
    [sym_directive] = STATE(75),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_elseif] = STATE(75),
    [sym_if_middle] = STATE(130),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_if_repeat1] = STATE(130),
    [anon_sym_LT_POUNDlist] = ACTIONS(463),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(466),
    [anon_sym_LT_POUNDif] = ACTIONS(468),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(466),
    [anon_sym_LT_POUNDelseif] = ACTIONS(471),
    [anon_sym_LT_POUNDswitch] = ACTIONS(474),
    [anon_sym_LT_POUNDfunction] = ACTIONS(477),
    [anon_sym_LT_POUNDmacro] = ACTIONS(480),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(483),
    [sym_fallback] = ACTIONS(486),
    [sym_flush] = ACTIONS(486),
    [anon_sym_LT_POUNDftl] = ACTIONS(489),
    [anon_sym_LT_POUNDimport] = ACTIONS(492),
    [anon_sym_LT_POUNDinclude] = ACTIONS(495),
    [sym_lt] = ACTIONS(486),
    [sym_nt] = ACTIONS(486),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(498),
    [sym_rt] = ACTIONS(486),
    [anon_sym_LT_POUNDsetting] = ACTIONS(501),
    [sym_stop] = ACTIONS(486),
    [sym_t] = ACTIONS(486),
    [anon_sym_LT_POUNDvisit] = ACTIONS(504),
    [anon_sym_LT_POUNDassign] = ACTIONS(507),
    [sym_end_assign] = ACTIONS(510),
    [anon_sym_LT_POUNDglobal] = ACTIONS(513),
    [sym_end_global] = ACTIONS(516),
    [anon_sym_LT_POUNDlocal] = ACTIONS(519),
    [sym_end_local] = ACTIONS(522),
  },
  [131] = {
    [sym_expression] = STATE(137),
    [sym_curveBracket] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_string] = STATE(82),
    [aux_sym_unary_expression_repeat1] = STATE(137),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(525),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_as] = ACTIONS(525),
    [anon_sym_using] = ACTIONS(525),
    [anon_sym_EQ] = ACTIONS(427),
    [anon_sym_BANG] = ACTIONS(427),
    [anon_sym_PLUS] = ACTIONS(427),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(427),
    [anon_sym_GT] = ACTIONS(427),
  },
  [132] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(429),
    [anon_sym_LPAREN] = ACTIONS(429),
    [anon_sym_RPAREN] = ACTIONS(429),
    [anon_sym_LBRACK] = ACTIONS(429),
    [anon_sym_as] = ACTIONS(527),
    [anon_sym_using] = ACTIONS(527),
    [anon_sym_EQ] = ACTIONS(429),
    [anon_sym_BANG] = ACTIONS(429),
    [anon_sym_PLUS] = ACTIONS(429),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(429),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(429),
    [anon_sym_GT] = ACTIONS(429),
  },
  [133] = {
    [sym_parameter_group] = STATE(164),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(118),
    [sym_operator] = STATE(119),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(164),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(529),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
  },
  [134] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(531),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(433),
    [anon_sym_LPAREN] = ACTIONS(433),
    [anon_sym_RPAREN] = ACTIONS(433),
    [anon_sym_LBRACK] = ACTIONS(433),
    [anon_sym_as] = ACTIONS(531),
    [anon_sym_using] = ACTIONS(531),
    [anon_sym_EQ] = ACTIONS(433),
    [anon_sym_BANG] = ACTIONS(433),
    [anon_sym_PLUS] = ACTIONS(433),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(433),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(433),
    [anon_sym_GT] = ACTIONS(433),
  },
  [135] = {
    [sym_expression] = STATE(166),
    [sym_curveBracket] = STATE(66),
    [sym_sequence] = STATE(66),
    [sym_string] = STATE(70),
    [aux_sym_unary_expression_repeat1] = STATE(166),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(111),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(533),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(117),
  },
  [136] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(535),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(437),
    [anon_sym_LPAREN] = ACTIONS(437),
    [anon_sym_RPAREN] = ACTIONS(437),
    [anon_sym_LBRACK] = ACTIONS(437),
    [anon_sym_as] = ACTIONS(535),
    [anon_sym_using] = ACTIONS(535),
    [anon_sym_EQ] = ACTIONS(437),
    [anon_sym_BANG] = ACTIONS(437),
    [anon_sym_PLUS] = ACTIONS(437),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(437),
    [anon_sym_GT] = ACTIONS(437),
  },
  [137] = {
    [sym_expression] = STATE(137),
    [sym_curveBracket] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_string] = STATE(82),
    [aux_sym_unary_expression_repeat1] = STATE(137),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(537),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(540),
    [anon_sym_LPAREN] = ACTIONS(543),
    [anon_sym_LBRACK] = ACTIONS(546),
    [anon_sym_as] = ACTIONS(549),
    [anon_sym_using] = ACTIONS(549),
    [anon_sym_EQ] = ACTIONS(451),
    [anon_sym_BANG] = ACTIONS(451),
    [anon_sym_PLUS] = ACTIONS(451),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(551),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(551),
    [anon_sym_GT] = ACTIONS(451),
  },
  [138] = {
    [sym_directive] = STATE(75),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_if_else] = STATE(172),
    [sym_elseif] = STATE(75),
    [sym_if_middle] = STATE(130),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_if_repeat1] = STATE(130),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(123),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(461),
    [anon_sym_LT_POUNDelseif] = ACTIONS(127),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(19),
    [sym_fallback] = ACTIONS(21),
    [sym_flush] = ACTIONS(21),
    [anon_sym_LT_POUNDftl] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [sym_lt] = ACTIONS(21),
    [sym_nt] = ACTIONS(21),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(29),
    [sym_rt] = ACTIONS(21),
    [anon_sym_LT_POUNDsetting] = ACTIONS(31),
    [sym_stop] = ACTIONS(21),
    [sym_t] = ACTIONS(21),
    [anon_sym_LT_POUNDvisit] = ACTIONS(33),
    [anon_sym_LT_POUNDassign] = ACTIONS(35),
    [sym_end_assign] = ACTIONS(37),
    [anon_sym_LT_POUNDglobal] = ACTIONS(39),
    [sym_end_global] = ACTIONS(41),
    [anon_sym_LT_POUNDlocal] = ACTIONS(43),
    [sym_end_local] = ACTIONS(45),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(554),
    [sym_comment] = ACTIONS(554),
    [anon_sym_LT_POUNDlist] = ACTIONS(554),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(554),
    [sym_break] = ACTIONS(554),
    [sym_continue] = ACTIONS(554),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(554),
    [anon_sym_LT_POUNDitems] = ACTIONS(554),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(554),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(554),
    [anon_sym_LT_POUNDif] = ACTIONS(554),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(554),
    [anon_sym_LT_POUNDelseif] = ACTIONS(554),
    [anon_sym_LT_POUNDswitch] = ACTIONS(554),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(554),
    [anon_sym_LT_POUNDcase] = ACTIONS(554),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(554),
    [anon_sym_LT_POUNDfunction] = ACTIONS(554),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(554),
    [anon_sym_LT_POUNDreturn] = ACTIONS(554),
    [anon_sym_LT_POUNDmacro] = ACTIONS(554),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(554),
    [anon_sym_LT_POUNDnested] = ACTIONS(554),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(554),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(554),
    [sym_recover] = ACTIONS(554),
    [sym_fallback] = ACTIONS(554),
    [sym_flush] = ACTIONS(554),
    [anon_sym_LT_POUNDftl] = ACTIONS(554),
    [anon_sym_LT_POUNDimport] = ACTIONS(554),
    [anon_sym_LT_POUNDinclude] = ACTIONS(554),
    [sym_lt] = ACTIONS(554),
    [sym_nt] = ACTIONS(554),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(554),
    [sym_rt] = ACTIONS(554),
    [anon_sym_LT_POUNDsetting] = ACTIONS(554),
    [sym_stop] = ACTIONS(554),
    [sym_t] = ACTIONS(554),
    [anon_sym_LT_POUNDvisit] = ACTIONS(554),
    [anon_sym_LT_POUNDassign] = ACTIONS(554),
    [sym_end_assign] = ACTIONS(554),
    [anon_sym_LT_POUNDglobal] = ACTIONS(554),
    [sym_end_global] = ACTIONS(554),
    [anon_sym_LT_POUNDlocal] = ACTIONS(554),
    [sym_end_local] = ACTIONS(554),
  },
  [140] = {
    [sym_parameter_group] = STATE(173),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [sym_string] = STATE(30),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(53),
  },
  [141] = {
    [sym_directive] = STATE(174),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_case_repeat1] = STATE(174),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(556),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(19),
    [sym_fallback] = ACTIONS(21),
    [sym_flush] = ACTIONS(21),
    [anon_sym_LT_POUNDftl] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [sym_lt] = ACTIONS(21),
    [sym_nt] = ACTIONS(21),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(29),
    [sym_rt] = ACTIONS(21),
    [anon_sym_LT_POUNDsetting] = ACTIONS(31),
    [sym_stop] = ACTIONS(21),
    [sym_t] = ACTIONS(21),
    [anon_sym_LT_POUNDvisit] = ACTIONS(33),
    [anon_sym_LT_POUNDassign] = ACTIONS(35),
    [sym_end_assign] = ACTIONS(37),
    [anon_sym_LT_POUNDglobal] = ACTIONS(39),
    [sym_end_global] = ACTIONS(41),
    [anon_sym_LT_POUNDlocal] = ACTIONS(43),
    [sym_end_local] = ACTIONS(45),
  },
  [142] = {
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(558),
    [anon_sym_LT_POUNDcase] = ACTIONS(558),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(558),
  },
  [143] = {
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(560),
  },
  [144] = {
    [sym_case] = STATE(142),
    [sym_default] = STATE(176),
    [sym_switch_middle] = STATE(177),
    [aux_sym_switch_repeat1] = STATE(177),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(560),
    [anon_sym_LT_POUNDcase] = ACTIONS(313),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(315),
  },
  [145] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(562),
    [anon_sym_LT_POUNDif] = ACTIONS(562),
    [anon_sym_LT_POUNDswitch] = ACTIONS(562),
    [anon_sym_LT_POUNDfunction] = ACTIONS(562),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(562),
    [anon_sym_LT_POUNDreturn] = ACTIONS(562),
    [anon_sym_LT_POUNDmacro] = ACTIONS(562),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(562),
    [anon_sym_LT_POUNDnested] = ACTIONS(562),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(562),
    [sym_fallback] = ACTIONS(562),
    [sym_flush] = ACTIONS(562),
    [anon_sym_LT_POUNDftl] = ACTIONS(562),
    [anon_sym_LT_POUNDimport] = ACTIONS(562),
    [anon_sym_LT_POUNDinclude] = ACTIONS(562),
    [sym_lt] = ACTIONS(562),
    [sym_nt] = ACTIONS(562),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(562),
    [sym_rt] = ACTIONS(562),
    [anon_sym_LT_POUNDsetting] = ACTIONS(562),
    [sym_stop] = ACTIONS(562),
    [sym_t] = ACTIONS(562),
    [anon_sym_LT_POUNDvisit] = ACTIONS(562),
    [anon_sym_LT_POUNDassign] = ACTIONS(562),
    [sym_end_assign] = ACTIONS(562),
    [anon_sym_LT_POUNDglobal] = ACTIONS(562),
    [sym_end_global] = ACTIONS(562),
    [anon_sym_LT_POUNDlocal] = ACTIONS(562),
    [sym_end_local] = ACTIONS(562),
  },
  [146] = {
    [anon_sym_GT] = ACTIONS(564),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(566),
    [sym_comment] = ACTIONS(566),
    [anon_sym_LT_POUNDlist] = ACTIONS(566),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(566),
    [sym_break] = ACTIONS(566),
    [sym_continue] = ACTIONS(566),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(566),
    [anon_sym_LT_POUNDitems] = ACTIONS(566),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(566),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(566),
    [anon_sym_LT_POUNDif] = ACTIONS(566),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(566),
    [anon_sym_LT_POUNDelseif] = ACTIONS(566),
    [anon_sym_LT_POUNDswitch] = ACTIONS(566),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(566),
    [anon_sym_LT_POUNDcase] = ACTIONS(566),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(566),
    [anon_sym_LT_POUNDfunction] = ACTIONS(566),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(566),
    [anon_sym_LT_POUNDreturn] = ACTIONS(566),
    [anon_sym_LT_POUNDmacro] = ACTIONS(566),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(566),
    [anon_sym_LT_POUNDnested] = ACTIONS(566),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(566),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(566),
    [sym_recover] = ACTIONS(566),
    [sym_fallback] = ACTIONS(566),
    [sym_flush] = ACTIONS(566),
    [anon_sym_LT_POUNDftl] = ACTIONS(566),
    [anon_sym_LT_POUNDimport] = ACTIONS(566),
    [anon_sym_LT_POUNDinclude] = ACTIONS(566),
    [sym_lt] = ACTIONS(566),
    [sym_nt] = ACTIONS(566),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(566),
    [sym_rt] = ACTIONS(566),
    [anon_sym_LT_POUNDsetting] = ACTIONS(566),
    [sym_stop] = ACTIONS(566),
    [sym_t] = ACTIONS(566),
    [anon_sym_LT_POUNDvisit] = ACTIONS(566),
    [anon_sym_LT_POUNDassign] = ACTIONS(566),
    [sym_end_assign] = ACTIONS(566),
    [anon_sym_LT_POUNDglobal] = ACTIONS(566),
    [sym_end_global] = ACTIONS(566),
    [anon_sym_LT_POUNDlocal] = ACTIONS(566),
    [sym_end_local] = ACTIONS(566),
  },
  [148] = {
    [sym_directive] = STATE(89),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_function_middle] = STATE(148),
    [sym_return] = STATE(89),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_function_repeat1] = STATE(148),
    [anon_sym_LT_POUNDlist] = ACTIONS(568),
    [anon_sym_LT_POUNDif] = ACTIONS(571),
    [anon_sym_LT_POUNDswitch] = ACTIONS(574),
    [anon_sym_LT_POUNDfunction] = ACTIONS(577),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(580),
    [anon_sym_LT_POUNDreturn] = ACTIONS(582),
    [anon_sym_LT_POUNDmacro] = ACTIONS(585),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(588),
    [sym_fallback] = ACTIONS(591),
    [sym_flush] = ACTIONS(591),
    [anon_sym_LT_POUNDftl] = ACTIONS(594),
    [anon_sym_LT_POUNDimport] = ACTIONS(597),
    [anon_sym_LT_POUNDinclude] = ACTIONS(600),
    [sym_lt] = ACTIONS(591),
    [sym_nt] = ACTIONS(591),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(603),
    [sym_rt] = ACTIONS(591),
    [anon_sym_LT_POUNDsetting] = ACTIONS(606),
    [sym_stop] = ACTIONS(591),
    [sym_t] = ACTIONS(591),
    [anon_sym_LT_POUNDvisit] = ACTIONS(609),
    [anon_sym_LT_POUNDassign] = ACTIONS(612),
    [sym_end_assign] = ACTIONS(615),
    [anon_sym_LT_POUNDglobal] = ACTIONS(618),
    [sym_end_global] = ACTIONS(621),
    [anon_sym_LT_POUNDlocal] = ACTIONS(624),
    [sym_end_local] = ACTIONS(627),
  },
  [149] = {
    [sym_directive] = STATE(89),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_function_middle] = STATE(148),
    [sym_return] = STATE(89),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_function_repeat1] = STATE(148),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(630),
    [anon_sym_LT_POUNDreturn] = ACTIONS(143),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(19),
    [sym_fallback] = ACTIONS(21),
    [sym_flush] = ACTIONS(21),
    [anon_sym_LT_POUNDftl] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [sym_lt] = ACTIONS(21),
    [sym_nt] = ACTIONS(21),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(29),
    [sym_rt] = ACTIONS(21),
    [anon_sym_LT_POUNDsetting] = ACTIONS(31),
    [sym_stop] = ACTIONS(21),
    [sym_t] = ACTIONS(21),
    [anon_sym_LT_POUNDvisit] = ACTIONS(33),
    [anon_sym_LT_POUNDassign] = ACTIONS(35),
    [sym_end_assign] = ACTIONS(37),
    [anon_sym_LT_POUNDglobal] = ACTIONS(39),
    [sym_end_global] = ACTIONS(41),
    [anon_sym_LT_POUNDlocal] = ACTIONS(43),
    [sym_end_local] = ACTIONS(45),
  },
  [150] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(632),
    [anon_sym_LT_POUNDif] = ACTIONS(632),
    [anon_sym_LT_POUNDswitch] = ACTIONS(632),
    [anon_sym_LT_POUNDfunction] = ACTIONS(632),
    [anon_sym_LT_POUNDreturn] = ACTIONS(632),
    [anon_sym_LT_POUNDmacro] = ACTIONS(632),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(632),
    [anon_sym_LT_POUNDnested] = ACTIONS(632),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(632),
    [sym_fallback] = ACTIONS(632),
    [sym_flush] = ACTIONS(632),
    [anon_sym_LT_POUNDftl] = ACTIONS(632),
    [anon_sym_LT_POUNDimport] = ACTIONS(632),
    [anon_sym_LT_POUNDinclude] = ACTIONS(632),
    [sym_lt] = ACTIONS(632),
    [sym_nt] = ACTIONS(632),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(632),
    [sym_rt] = ACTIONS(632),
    [anon_sym_LT_POUNDsetting] = ACTIONS(632),
    [sym_stop] = ACTIONS(632),
    [sym_t] = ACTIONS(632),
    [anon_sym_LT_POUNDvisit] = ACTIONS(632),
    [anon_sym_LT_POUNDassign] = ACTIONS(632),
    [sym_end_assign] = ACTIONS(632),
    [anon_sym_LT_POUNDglobal] = ACTIONS(632),
    [sym_end_global] = ACTIONS(632),
    [anon_sym_LT_POUNDlocal] = ACTIONS(632),
    [sym_end_local] = ACTIONS(632),
  },
  [151] = {
    [sym_parameter_group] = STATE(85),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(33),
    [sym_operator] = STATE(34),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(85),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(634),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(636),
    [sym_comment] = ACTIONS(636),
    [anon_sym_LT_POUNDlist] = ACTIONS(636),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(636),
    [sym_break] = ACTIONS(636),
    [sym_continue] = ACTIONS(636),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(636),
    [anon_sym_LT_POUNDitems] = ACTIONS(636),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(636),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(636),
    [anon_sym_LT_POUNDif] = ACTIONS(636),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(636),
    [anon_sym_LT_POUNDelseif] = ACTIONS(636),
    [anon_sym_LT_POUNDswitch] = ACTIONS(636),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(636),
    [anon_sym_LT_POUNDcase] = ACTIONS(636),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(636),
    [anon_sym_LT_POUNDfunction] = ACTIONS(636),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(636),
    [anon_sym_LT_POUNDreturn] = ACTIONS(636),
    [anon_sym_LT_POUNDmacro] = ACTIONS(636),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(636),
    [anon_sym_LT_POUNDnested] = ACTIONS(636),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(636),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(636),
    [sym_recover] = ACTIONS(636),
    [sym_fallback] = ACTIONS(636),
    [sym_flush] = ACTIONS(636),
    [anon_sym_LT_POUNDftl] = ACTIONS(636),
    [anon_sym_LT_POUNDimport] = ACTIONS(636),
    [anon_sym_LT_POUNDinclude] = ACTIONS(636),
    [sym_lt] = ACTIONS(636),
    [sym_nt] = ACTIONS(636),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(636),
    [sym_rt] = ACTIONS(636),
    [anon_sym_LT_POUNDsetting] = ACTIONS(636),
    [sym_stop] = ACTIONS(636),
    [sym_t] = ACTIONS(636),
    [anon_sym_LT_POUNDvisit] = ACTIONS(636),
    [anon_sym_LT_POUNDassign] = ACTIONS(636),
    [sym_end_assign] = ACTIONS(636),
    [anon_sym_LT_POUNDglobal] = ACTIONS(636),
    [sym_end_global] = ACTIONS(636),
    [anon_sym_LT_POUNDlocal] = ACTIONS(636),
    [sym_end_local] = ACTIONS(636),
  },
  [153] = {
    [sym_directive] = STATE(94),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_return] = STATE(94),
    [sym_macro] = STATE(8),
    [sym_macro_middle] = STATE(153),
    [sym_nested] = STATE(94),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_macro_repeat1] = STATE(153),
    [anon_sym_LT_POUNDlist] = ACTIONS(638),
    [anon_sym_LT_POUNDif] = ACTIONS(641),
    [anon_sym_LT_POUNDswitch] = ACTIONS(644),
    [anon_sym_LT_POUNDfunction] = ACTIONS(647),
    [anon_sym_LT_POUNDreturn] = ACTIONS(650),
    [anon_sym_LT_POUNDmacro] = ACTIONS(653),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(656),
    [anon_sym_LT_POUNDnested] = ACTIONS(658),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(661),
    [sym_fallback] = ACTIONS(664),
    [sym_flush] = ACTIONS(664),
    [anon_sym_LT_POUNDftl] = ACTIONS(667),
    [anon_sym_LT_POUNDimport] = ACTIONS(670),
    [anon_sym_LT_POUNDinclude] = ACTIONS(673),
    [sym_lt] = ACTIONS(664),
    [sym_nt] = ACTIONS(664),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(676),
    [sym_rt] = ACTIONS(664),
    [anon_sym_LT_POUNDsetting] = ACTIONS(679),
    [sym_stop] = ACTIONS(664),
    [sym_t] = ACTIONS(664),
    [anon_sym_LT_POUNDvisit] = ACTIONS(682),
    [anon_sym_LT_POUNDassign] = ACTIONS(685),
    [sym_end_assign] = ACTIONS(688),
    [anon_sym_LT_POUNDglobal] = ACTIONS(691),
    [sym_end_global] = ACTIONS(694),
    [anon_sym_LT_POUNDlocal] = ACTIONS(697),
    [sym_end_local] = ACTIONS(700),
  },
  [154] = {
    [sym_directive] = STATE(94),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_return] = STATE(94),
    [sym_macro] = STATE(8),
    [sym_macro_middle] = STATE(153),
    [sym_nested] = STATE(94),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_macro_repeat1] = STATE(153),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_POUNDreturn] = ACTIONS(143),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(703),
    [anon_sym_LT_POUNDnested] = ACTIONS(149),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(19),
    [sym_fallback] = ACTIONS(21),
    [sym_flush] = ACTIONS(21),
    [anon_sym_LT_POUNDftl] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [sym_lt] = ACTIONS(21),
    [sym_nt] = ACTIONS(21),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(29),
    [sym_rt] = ACTIONS(21),
    [anon_sym_LT_POUNDsetting] = ACTIONS(31),
    [sym_stop] = ACTIONS(21),
    [sym_t] = ACTIONS(21),
    [anon_sym_LT_POUNDvisit] = ACTIONS(33),
    [anon_sym_LT_POUNDassign] = ACTIONS(35),
    [sym_end_assign] = ACTIONS(37),
    [anon_sym_LT_POUNDglobal] = ACTIONS(39),
    [sym_end_global] = ACTIONS(41),
    [anon_sym_LT_POUNDlocal] = ACTIONS(43),
    [sym_end_local] = ACTIONS(45),
  },
  [155] = {
    [sym_directive] = STATE(109),
    [sym_list] = STATE(8),
    [sym_list_middle] = STATE(182),
    [sym_items] = STATE(109),
    [sym_sep] = STATE(109),
    [sym_sep_block] = STATE(114),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_list_repeat1] = STATE(182),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(705),
    [sym_break] = ACTIONS(259),
    [sym_continue] = ACTIONS(259),
    [anon_sym_LT_POUNDitems] = ACTIONS(263),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(265),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(19),
    [sym_fallback] = ACTIONS(21),
    [sym_flush] = ACTIONS(21),
    [anon_sym_LT_POUNDftl] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [sym_lt] = ACTIONS(21),
    [sym_nt] = ACTIONS(21),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(29),
    [sym_rt] = ACTIONS(21),
    [anon_sym_LT_POUNDsetting] = ACTIONS(31),
    [sym_stop] = ACTIONS(21),
    [sym_t] = ACTIONS(21),
    [anon_sym_LT_POUNDvisit] = ACTIONS(33),
    [anon_sym_LT_POUNDassign] = ACTIONS(35),
    [sym_end_assign] = ACTIONS(37),
    [anon_sym_LT_POUNDglobal] = ACTIONS(39),
    [sym_end_global] = ACTIONS(41),
    [anon_sym_LT_POUNDlocal] = ACTIONS(43),
    [sym_end_local] = ACTIONS(45),
  },
  [156] = {
    [anon_sym_GT] = ACTIONS(707),
  },
  [157] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(709),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(709),
    [sym_break] = ACTIONS(709),
    [sym_continue] = ACTIONS(709),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(709),
    [anon_sym_LT_POUNDitems] = ACTIONS(709),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(709),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(709),
    [anon_sym_LT_POUNDif] = ACTIONS(709),
    [anon_sym_LT_POUNDswitch] = ACTIONS(709),
    [anon_sym_LT_POUNDfunction] = ACTIONS(709),
    [anon_sym_LT_POUNDmacro] = ACTIONS(709),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(709),
    [sym_fallback] = ACTIONS(709),
    [sym_flush] = ACTIONS(709),
    [anon_sym_LT_POUNDftl] = ACTIONS(709),
    [anon_sym_LT_POUNDimport] = ACTIONS(709),
    [anon_sym_LT_POUNDinclude] = ACTIONS(709),
    [sym_lt] = ACTIONS(709),
    [sym_nt] = ACTIONS(709),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(709),
    [sym_rt] = ACTIONS(709),
    [anon_sym_LT_POUNDsetting] = ACTIONS(709),
    [sym_stop] = ACTIONS(709),
    [sym_t] = ACTIONS(709),
    [anon_sym_LT_POUNDvisit] = ACTIONS(709),
    [anon_sym_LT_POUNDassign] = ACTIONS(709),
    [sym_end_assign] = ACTIONS(709),
    [anon_sym_LT_POUNDglobal] = ACTIONS(709),
    [sym_end_global] = ACTIONS(709),
    [anon_sym_LT_POUNDlocal] = ACTIONS(709),
    [sym_end_local] = ACTIONS(709),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(711),
    [sym_comment] = ACTIONS(711),
    [anon_sym_LT_POUNDlist] = ACTIONS(711),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(711),
    [sym_break] = ACTIONS(711),
    [sym_continue] = ACTIONS(711),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(711),
    [anon_sym_LT_POUNDitems] = ACTIONS(711),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(711),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(711),
    [anon_sym_LT_POUNDif] = ACTIONS(711),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(711),
    [anon_sym_LT_POUNDelseif] = ACTIONS(711),
    [anon_sym_LT_POUNDswitch] = ACTIONS(711),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(711),
    [anon_sym_LT_POUNDcase] = ACTIONS(711),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(711),
    [anon_sym_LT_POUNDfunction] = ACTIONS(711),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(711),
    [anon_sym_LT_POUNDreturn] = ACTIONS(711),
    [anon_sym_LT_POUNDmacro] = ACTIONS(711),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(711),
    [anon_sym_LT_POUNDnested] = ACTIONS(711),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(711),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(711),
    [sym_recover] = ACTIONS(711),
    [sym_fallback] = ACTIONS(711),
    [sym_flush] = ACTIONS(711),
    [anon_sym_LT_POUNDftl] = ACTIONS(711),
    [anon_sym_LT_POUNDimport] = ACTIONS(711),
    [anon_sym_LT_POUNDinclude] = ACTIONS(711),
    [sym_lt] = ACTIONS(711),
    [sym_nt] = ACTIONS(711),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(711),
    [sym_rt] = ACTIONS(711),
    [anon_sym_LT_POUNDsetting] = ACTIONS(711),
    [sym_stop] = ACTIONS(711),
    [sym_t] = ACTIONS(711),
    [anon_sym_LT_POUNDvisit] = ACTIONS(711),
    [anon_sym_LT_POUNDassign] = ACTIONS(711),
    [sym_end_assign] = ACTIONS(711),
    [anon_sym_LT_POUNDglobal] = ACTIONS(711),
    [sym_end_global] = ACTIONS(711),
    [anon_sym_LT_POUNDlocal] = ACTIONS(711),
    [sym_end_local] = ACTIONS(711),
  },
  [159] = {
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(713),
  },
  [160] = {
    [sym_directive] = STATE(109),
    [sym_list] = STATE(8),
    [sym_list_middle] = STATE(160),
    [sym_items] = STATE(109),
    [sym_sep] = STATE(109),
    [sym_sep_block] = STATE(114),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_list_repeat1] = STATE(160),
    [anon_sym_LT_POUNDlist] = ACTIONS(715),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(718),
    [sym_break] = ACTIONS(720),
    [sym_continue] = ACTIONS(720),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(718),
    [anon_sym_LT_POUNDitems] = ACTIONS(723),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(726),
    [anon_sym_LT_POUNDif] = ACTIONS(729),
    [anon_sym_LT_POUNDswitch] = ACTIONS(732),
    [anon_sym_LT_POUNDfunction] = ACTIONS(735),
    [anon_sym_LT_POUNDmacro] = ACTIONS(738),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(741),
    [sym_fallback] = ACTIONS(744),
    [sym_flush] = ACTIONS(744),
    [anon_sym_LT_POUNDftl] = ACTIONS(747),
    [anon_sym_LT_POUNDimport] = ACTIONS(750),
    [anon_sym_LT_POUNDinclude] = ACTIONS(753),
    [sym_lt] = ACTIONS(744),
    [sym_nt] = ACTIONS(744),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(756),
    [sym_rt] = ACTIONS(744),
    [anon_sym_LT_POUNDsetting] = ACTIONS(759),
    [sym_stop] = ACTIONS(744),
    [sym_t] = ACTIONS(744),
    [anon_sym_LT_POUNDvisit] = ACTIONS(762),
    [anon_sym_LT_POUNDassign] = ACTIONS(765),
    [sym_end_assign] = ACTIONS(768),
    [anon_sym_LT_POUNDglobal] = ACTIONS(771),
    [sym_end_global] = ACTIONS(774),
    [anon_sym_LT_POUNDlocal] = ACTIONS(777),
    [sym_end_local] = ACTIONS(780),
  },
  [161] = {
    [sym_expression] = STATE(185),
    [sym_curveBracket] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_string] = STATE(82),
    [aux_sym_unary_expression_repeat1] = STATE(185),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(129),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(133),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
  },
  [162] = {
    [sym_expression] = STATE(186),
    [sym_curveBracket] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_string] = STATE(82),
    [aux_sym_unary_expression_repeat1] = STATE(186),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(295),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(275),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_as] = ACTIONS(295),
    [anon_sym_using] = ACTIONS(295),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_BANG] = ACTIONS(275),
    [anon_sym_PLUS] = ACTIONS(275),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(275),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(275),
  },
  [163] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(783),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(783),
    [anon_sym_LPAREN] = ACTIONS(783),
    [anon_sym_LBRACK] = ACTIONS(783),
    [anon_sym_RBRACK] = ACTIONS(783),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(783),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(783),
    [anon_sym_GT] = ACTIONS(783),
  },
  [164] = {
    [sym_parameter_group] = STATE(164),
    [sym_paramGroup] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_parameter] = STATE(118),
    [sym_operator] = STATE(119),
    [sym_string] = STATE(35),
    [aux_sym_curveBracket_repeat1] = STATE(164),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(297),
    [anon_sym_RPAREN] = ACTIONS(309),
    [anon_sym_as] = ACTIONS(300),
    [anon_sym_using] = ACTIONS(300),
    [anon_sym_EQ] = ACTIONS(303),
    [anon_sym_BANG] = ACTIONS(303),
    [anon_sym_PLUS] = ACTIONS(303),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(306),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(306),
  },
  [165] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(785),
    [anon_sym_LPAREN] = ACTIONS(785),
    [anon_sym_LBRACK] = ACTIONS(785),
    [anon_sym_RBRACK] = ACTIONS(785),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(785),
    [anon_sym_GT] = ACTIONS(785),
  },
  [166] = {
    [sym_expression] = STATE(166),
    [sym_curveBracket] = STATE(66),
    [sym_sequence] = STATE(66),
    [sym_string] = STATE(70),
    [aux_sym_unary_expression_repeat1] = STATE(166),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(439),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(439),
    [anon_sym_LPAREN] = ACTIONS(442),
    [anon_sym_LBRACK] = ACTIONS(445),
    [anon_sym_RBRACK] = ACTIONS(451),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(448),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(448),
  },
  [167] = {
    [sym_directive] = STATE(75),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_elseif] = STATE(75),
    [sym_if_middle] = STATE(167),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_if_repeat1] = STATE(167),
    [anon_sym_LT_POUNDlist] = ACTIONS(463),
    [anon_sym_LT_POUNDif] = ACTIONS(468),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(466),
    [anon_sym_LT_POUNDelseif] = ACTIONS(471),
    [anon_sym_LT_POUNDswitch] = ACTIONS(474),
    [anon_sym_LT_POUNDfunction] = ACTIONS(477),
    [anon_sym_LT_POUNDmacro] = ACTIONS(480),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(483),
    [sym_fallback] = ACTIONS(486),
    [sym_flush] = ACTIONS(486),
    [anon_sym_LT_POUNDftl] = ACTIONS(489),
    [anon_sym_LT_POUNDimport] = ACTIONS(492),
    [anon_sym_LT_POUNDinclude] = ACTIONS(495),
    [sym_lt] = ACTIONS(486),
    [sym_nt] = ACTIONS(486),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(498),
    [sym_rt] = ACTIONS(486),
    [anon_sym_LT_POUNDsetting] = ACTIONS(501),
    [sym_stop] = ACTIONS(486),
    [sym_t] = ACTIONS(486),
    [anon_sym_LT_POUNDvisit] = ACTIONS(504),
    [anon_sym_LT_POUNDassign] = ACTIONS(507),
    [sym_end_assign] = ACTIONS(510),
    [anon_sym_LT_POUNDglobal] = ACTIONS(513),
    [sym_end_global] = ACTIONS(516),
    [anon_sym_LT_POUNDlocal] = ACTIONS(519),
    [sym_end_local] = ACTIONS(522),
  },
  [168] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(787),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(787),
    [anon_sym_LT_POUNDif] = ACTIONS(787),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(787),
    [anon_sym_LT_POUNDelseif] = ACTIONS(787),
    [anon_sym_LT_POUNDswitch] = ACTIONS(787),
    [anon_sym_LT_POUNDfunction] = ACTIONS(787),
    [anon_sym_LT_POUNDmacro] = ACTIONS(787),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(787),
    [sym_fallback] = ACTIONS(787),
    [sym_flush] = ACTIONS(787),
    [anon_sym_LT_POUNDftl] = ACTIONS(787),
    [anon_sym_LT_POUNDimport] = ACTIONS(787),
    [anon_sym_LT_POUNDinclude] = ACTIONS(787),
    [sym_lt] = ACTIONS(787),
    [sym_nt] = ACTIONS(787),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(787),
    [sym_rt] = ACTIONS(787),
    [anon_sym_LT_POUNDsetting] = ACTIONS(787),
    [sym_stop] = ACTIONS(787),
    [sym_t] = ACTIONS(787),
    [anon_sym_LT_POUNDvisit] = ACTIONS(787),
    [anon_sym_LT_POUNDassign] = ACTIONS(787),
    [sym_end_assign] = ACTIONS(787),
    [anon_sym_LT_POUNDglobal] = ACTIONS(787),
    [sym_end_global] = ACTIONS(787),
    [anon_sym_LT_POUNDlocal] = ACTIONS(787),
    [sym_end_local] = ACTIONS(787),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(789),
    [sym_comment] = ACTIONS(789),
    [anon_sym_LT_POUNDlist] = ACTIONS(789),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(789),
    [sym_break] = ACTIONS(789),
    [sym_continue] = ACTIONS(789),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(789),
    [anon_sym_LT_POUNDitems] = ACTIONS(789),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(789),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(789),
    [anon_sym_LT_POUNDif] = ACTIONS(789),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(789),
    [anon_sym_LT_POUNDelseif] = ACTIONS(789),
    [anon_sym_LT_POUNDswitch] = ACTIONS(789),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(789),
    [anon_sym_LT_POUNDcase] = ACTIONS(789),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(789),
    [anon_sym_LT_POUNDfunction] = ACTIONS(789),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(789),
    [anon_sym_LT_POUNDreturn] = ACTIONS(789),
    [anon_sym_LT_POUNDmacro] = ACTIONS(789),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(789),
    [anon_sym_LT_POUNDnested] = ACTIONS(789),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(789),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(789),
    [sym_recover] = ACTIONS(789),
    [sym_fallback] = ACTIONS(789),
    [sym_flush] = ACTIONS(789),
    [anon_sym_LT_POUNDftl] = ACTIONS(789),
    [anon_sym_LT_POUNDimport] = ACTIONS(789),
    [anon_sym_LT_POUNDinclude] = ACTIONS(789),
    [sym_lt] = ACTIONS(789),
    [sym_nt] = ACTIONS(789),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(789),
    [sym_rt] = ACTIONS(789),
    [anon_sym_LT_POUNDsetting] = ACTIONS(789),
    [sym_stop] = ACTIONS(789),
    [sym_t] = ACTIONS(789),
    [anon_sym_LT_POUNDvisit] = ACTIONS(789),
    [anon_sym_LT_POUNDassign] = ACTIONS(789),
    [sym_end_assign] = ACTIONS(789),
    [anon_sym_LT_POUNDglobal] = ACTIONS(789),
    [sym_end_global] = ACTIONS(789),
    [anon_sym_LT_POUNDlocal] = ACTIONS(789),
    [sym_end_local] = ACTIONS(789),
  },
  [170] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(791),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(783),
    [anon_sym_LPAREN] = ACTIONS(783),
    [anon_sym_RPAREN] = ACTIONS(783),
    [anon_sym_LBRACK] = ACTIONS(783),
    [anon_sym_as] = ACTIONS(791),
    [anon_sym_using] = ACTIONS(791),
    [anon_sym_EQ] = ACTIONS(783),
    [anon_sym_BANG] = ACTIONS(783),
    [anon_sym_PLUS] = ACTIONS(783),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(783),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(783),
    [anon_sym_GT] = ACTIONS(783),
  },
  [171] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(785),
    [anon_sym_LPAREN] = ACTIONS(785),
    [anon_sym_RPAREN] = ACTIONS(785),
    [anon_sym_LBRACK] = ACTIONS(785),
    [anon_sym_as] = ACTIONS(793),
    [anon_sym_using] = ACTIONS(793),
    [anon_sym_EQ] = ACTIONS(785),
    [anon_sym_BANG] = ACTIONS(785),
    [anon_sym_PLUS] = ACTIONS(785),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(785),
    [anon_sym_GT] = ACTIONS(785),
  },
  [172] = {
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(795),
  },
  [173] = {
    [anon_sym_GT] = ACTIONS(797),
  },
  [174] = {
    [sym_directive] = STATE(189),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_case_repeat1] = STATE(189),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(799),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(19),
    [sym_fallback] = ACTIONS(21),
    [sym_flush] = ACTIONS(21),
    [anon_sym_LT_POUNDftl] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [sym_lt] = ACTIONS(21),
    [sym_nt] = ACTIONS(21),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(29),
    [sym_rt] = ACTIONS(21),
    [anon_sym_LT_POUNDsetting] = ACTIONS(31),
    [sym_stop] = ACTIONS(21),
    [sym_t] = ACTIONS(21),
    [anon_sym_LT_POUNDvisit] = ACTIONS(33),
    [anon_sym_LT_POUNDassign] = ACTIONS(35),
    [sym_end_assign] = ACTIONS(37),
    [anon_sym_LT_POUNDglobal] = ACTIONS(39),
    [sym_end_global] = ACTIONS(41),
    [anon_sym_LT_POUNDlocal] = ACTIONS(43),
    [sym_end_local] = ACTIONS(45),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(801),
    [sym_comment] = ACTIONS(801),
    [anon_sym_LT_POUNDlist] = ACTIONS(801),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(801),
    [sym_break] = ACTIONS(801),
    [sym_continue] = ACTIONS(801),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(801),
    [anon_sym_LT_POUNDitems] = ACTIONS(801),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(801),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(801),
    [anon_sym_LT_POUNDif] = ACTIONS(801),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(801),
    [anon_sym_LT_POUNDelseif] = ACTIONS(801),
    [anon_sym_LT_POUNDswitch] = ACTIONS(801),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(801),
    [anon_sym_LT_POUNDcase] = ACTIONS(801),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(801),
    [anon_sym_LT_POUNDfunction] = ACTIONS(801),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(801),
    [anon_sym_LT_POUNDreturn] = ACTIONS(801),
    [anon_sym_LT_POUNDmacro] = ACTIONS(801),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(801),
    [anon_sym_LT_POUNDnested] = ACTIONS(801),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(801),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(801),
    [sym_recover] = ACTIONS(801),
    [sym_fallback] = ACTIONS(801),
    [sym_flush] = ACTIONS(801),
    [anon_sym_LT_POUNDftl] = ACTIONS(801),
    [anon_sym_LT_POUNDimport] = ACTIONS(801),
    [anon_sym_LT_POUNDinclude] = ACTIONS(801),
    [sym_lt] = ACTIONS(801),
    [sym_nt] = ACTIONS(801),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(801),
    [sym_rt] = ACTIONS(801),
    [anon_sym_LT_POUNDsetting] = ACTIONS(801),
    [sym_stop] = ACTIONS(801),
    [sym_t] = ACTIONS(801),
    [anon_sym_LT_POUNDvisit] = ACTIONS(801),
    [anon_sym_LT_POUNDassign] = ACTIONS(801),
    [sym_end_assign] = ACTIONS(801),
    [anon_sym_LT_POUNDglobal] = ACTIONS(801),
    [sym_end_global] = ACTIONS(801),
    [anon_sym_LT_POUNDlocal] = ACTIONS(801),
    [sym_end_local] = ACTIONS(801),
  },
  [176] = {
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(803),
  },
  [177] = {
    [sym_case] = STATE(142),
    [sym_switch_middle] = STATE(177),
    [aux_sym_switch_repeat1] = STATE(177),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(805),
    [anon_sym_LT_POUNDcase] = ACTIONS(807),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(805),
  },
  [178] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(810),
    [anon_sym_LT_POUNDif] = ACTIONS(810),
    [anon_sym_LT_POUNDswitch] = ACTIONS(810),
    [anon_sym_LT_POUNDfunction] = ACTIONS(810),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(810),
    [anon_sym_LT_POUNDreturn] = ACTIONS(810),
    [anon_sym_LT_POUNDmacro] = ACTIONS(810),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(810),
    [anon_sym_LT_POUNDnested] = ACTIONS(810),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(810),
    [sym_fallback] = ACTIONS(810),
    [sym_flush] = ACTIONS(810),
    [anon_sym_LT_POUNDftl] = ACTIONS(810),
    [anon_sym_LT_POUNDimport] = ACTIONS(810),
    [anon_sym_LT_POUNDinclude] = ACTIONS(810),
    [sym_lt] = ACTIONS(810),
    [sym_nt] = ACTIONS(810),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(810),
    [sym_rt] = ACTIONS(810),
    [anon_sym_LT_POUNDsetting] = ACTIONS(810),
    [sym_stop] = ACTIONS(810),
    [sym_t] = ACTIONS(810),
    [anon_sym_LT_POUNDvisit] = ACTIONS(810),
    [anon_sym_LT_POUNDassign] = ACTIONS(810),
    [sym_end_assign] = ACTIONS(810),
    [anon_sym_LT_POUNDglobal] = ACTIONS(810),
    [sym_end_global] = ACTIONS(810),
    [anon_sym_LT_POUNDlocal] = ACTIONS(810),
    [sym_end_local] = ACTIONS(810),
  },
  [179] = {
    [ts_builtin_sym_end] = ACTIONS(812),
    [sym_comment] = ACTIONS(812),
    [anon_sym_LT_POUNDlist] = ACTIONS(812),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(812),
    [sym_break] = ACTIONS(812),
    [sym_continue] = ACTIONS(812),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(812),
    [anon_sym_LT_POUNDitems] = ACTIONS(812),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(812),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(812),
    [anon_sym_LT_POUNDif] = ACTIONS(812),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(812),
    [anon_sym_LT_POUNDelseif] = ACTIONS(812),
    [anon_sym_LT_POUNDswitch] = ACTIONS(812),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(812),
    [anon_sym_LT_POUNDcase] = ACTIONS(812),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(812),
    [anon_sym_LT_POUNDfunction] = ACTIONS(812),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(812),
    [anon_sym_LT_POUNDreturn] = ACTIONS(812),
    [anon_sym_LT_POUNDmacro] = ACTIONS(812),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(812),
    [anon_sym_LT_POUNDnested] = ACTIONS(812),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(812),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(812),
    [sym_recover] = ACTIONS(812),
    [sym_fallback] = ACTIONS(812),
    [sym_flush] = ACTIONS(812),
    [anon_sym_LT_POUNDftl] = ACTIONS(812),
    [anon_sym_LT_POUNDimport] = ACTIONS(812),
    [anon_sym_LT_POUNDinclude] = ACTIONS(812),
    [sym_lt] = ACTIONS(812),
    [sym_nt] = ACTIONS(812),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(812),
    [sym_rt] = ACTIONS(812),
    [anon_sym_LT_POUNDsetting] = ACTIONS(812),
    [sym_stop] = ACTIONS(812),
    [sym_t] = ACTIONS(812),
    [anon_sym_LT_POUNDvisit] = ACTIONS(812),
    [anon_sym_LT_POUNDassign] = ACTIONS(812),
    [sym_end_assign] = ACTIONS(812),
    [anon_sym_LT_POUNDglobal] = ACTIONS(812),
    [sym_end_global] = ACTIONS(812),
    [anon_sym_LT_POUNDlocal] = ACTIONS(812),
    [sym_end_local] = ACTIONS(812),
  },
  [180] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(814),
    [anon_sym_LT_POUNDif] = ACTIONS(814),
    [anon_sym_LT_POUNDswitch] = ACTIONS(814),
    [anon_sym_LT_POUNDfunction] = ACTIONS(814),
    [anon_sym_LT_POUNDreturn] = ACTIONS(814),
    [anon_sym_LT_POUNDmacro] = ACTIONS(814),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(814),
    [anon_sym_LT_POUNDnested] = ACTIONS(814),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(814),
    [sym_fallback] = ACTIONS(814),
    [sym_flush] = ACTIONS(814),
    [anon_sym_LT_POUNDftl] = ACTIONS(814),
    [anon_sym_LT_POUNDimport] = ACTIONS(814),
    [anon_sym_LT_POUNDinclude] = ACTIONS(814),
    [sym_lt] = ACTIONS(814),
    [sym_nt] = ACTIONS(814),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(814),
    [sym_rt] = ACTIONS(814),
    [anon_sym_LT_POUNDsetting] = ACTIONS(814),
    [sym_stop] = ACTIONS(814),
    [sym_t] = ACTIONS(814),
    [anon_sym_LT_POUNDvisit] = ACTIONS(814),
    [anon_sym_LT_POUNDassign] = ACTIONS(814),
    [sym_end_assign] = ACTIONS(814),
    [anon_sym_LT_POUNDglobal] = ACTIONS(814),
    [sym_end_global] = ACTIONS(814),
    [anon_sym_LT_POUNDlocal] = ACTIONS(814),
    [sym_end_local] = ACTIONS(814),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(816),
    [sym_comment] = ACTIONS(816),
    [anon_sym_LT_POUNDlist] = ACTIONS(816),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(816),
    [sym_break] = ACTIONS(816),
    [sym_continue] = ACTIONS(816),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(816),
    [anon_sym_LT_POUNDitems] = ACTIONS(816),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(816),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(816),
    [anon_sym_LT_POUNDif] = ACTIONS(816),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(816),
    [anon_sym_LT_POUNDelseif] = ACTIONS(816),
    [anon_sym_LT_POUNDswitch] = ACTIONS(816),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(816),
    [anon_sym_LT_POUNDcase] = ACTIONS(816),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(816),
    [anon_sym_LT_POUNDfunction] = ACTIONS(816),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(816),
    [anon_sym_LT_POUNDreturn] = ACTIONS(816),
    [anon_sym_LT_POUNDmacro] = ACTIONS(816),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(816),
    [anon_sym_LT_POUNDnested] = ACTIONS(816),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(816),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(816),
    [sym_recover] = ACTIONS(816),
    [sym_fallback] = ACTIONS(816),
    [sym_flush] = ACTIONS(816),
    [anon_sym_LT_POUNDftl] = ACTIONS(816),
    [anon_sym_LT_POUNDimport] = ACTIONS(816),
    [anon_sym_LT_POUNDinclude] = ACTIONS(816),
    [sym_lt] = ACTIONS(816),
    [sym_nt] = ACTIONS(816),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(816),
    [sym_rt] = ACTIONS(816),
    [anon_sym_LT_POUNDsetting] = ACTIONS(816),
    [sym_stop] = ACTIONS(816),
    [sym_t] = ACTIONS(816),
    [anon_sym_LT_POUNDvisit] = ACTIONS(816),
    [anon_sym_LT_POUNDassign] = ACTIONS(816),
    [sym_end_assign] = ACTIONS(816),
    [anon_sym_LT_POUNDglobal] = ACTIONS(816),
    [sym_end_global] = ACTIONS(816),
    [anon_sym_LT_POUNDlocal] = ACTIONS(816),
    [sym_end_local] = ACTIONS(816),
  },
  [182] = {
    [sym_directive] = STATE(109),
    [sym_list] = STATE(8),
    [sym_list_middle] = STATE(182),
    [sym_items] = STATE(109),
    [sym_sep] = STATE(109),
    [sym_sep_block] = STATE(114),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_list_repeat1] = STATE(182),
    [anon_sym_LT_POUNDlist] = ACTIONS(715),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(718),
    [sym_break] = ACTIONS(720),
    [sym_continue] = ACTIONS(720),
    [anon_sym_LT_POUNDitems] = ACTIONS(723),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(726),
    [anon_sym_LT_POUNDif] = ACTIONS(729),
    [anon_sym_LT_POUNDswitch] = ACTIONS(732),
    [anon_sym_LT_POUNDfunction] = ACTIONS(735),
    [anon_sym_LT_POUNDmacro] = ACTIONS(738),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(741),
    [sym_fallback] = ACTIONS(744),
    [sym_flush] = ACTIONS(744),
    [anon_sym_LT_POUNDftl] = ACTIONS(747),
    [anon_sym_LT_POUNDimport] = ACTIONS(750),
    [anon_sym_LT_POUNDinclude] = ACTIONS(753),
    [sym_lt] = ACTIONS(744),
    [sym_nt] = ACTIONS(744),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(756),
    [sym_rt] = ACTIONS(744),
    [anon_sym_LT_POUNDsetting] = ACTIONS(759),
    [sym_stop] = ACTIONS(744),
    [sym_t] = ACTIONS(744),
    [anon_sym_LT_POUNDvisit] = ACTIONS(762),
    [anon_sym_LT_POUNDassign] = ACTIONS(765),
    [sym_end_assign] = ACTIONS(768),
    [anon_sym_LT_POUNDglobal] = ACTIONS(771),
    [sym_end_global] = ACTIONS(774),
    [anon_sym_LT_POUNDlocal] = ACTIONS(777),
    [sym_end_local] = ACTIONS(780),
  },
  [183] = {
    [sym_directive] = STATE(191),
    [sym_list] = STATE(8),
    [sym_items_middle] = STATE(193),
    [sym_sep] = STATE(191),
    [sym_sep_block] = STATE(114),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_items_repeat1] = STATE(193),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [sym_break] = ACTIONS(818),
    [sym_continue] = ACTIONS(818),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(820),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(265),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(19),
    [sym_fallback] = ACTIONS(21),
    [sym_flush] = ACTIONS(21),
    [anon_sym_LT_POUNDftl] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [sym_lt] = ACTIONS(21),
    [sym_nt] = ACTIONS(21),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(29),
    [sym_rt] = ACTIONS(21),
    [anon_sym_LT_POUNDsetting] = ACTIONS(31),
    [sym_stop] = ACTIONS(21),
    [sym_t] = ACTIONS(21),
    [anon_sym_LT_POUNDvisit] = ACTIONS(33),
    [anon_sym_LT_POUNDassign] = ACTIONS(35),
    [sym_end_assign] = ACTIONS(37),
    [anon_sym_LT_POUNDglobal] = ACTIONS(39),
    [sym_end_global] = ACTIONS(41),
    [anon_sym_LT_POUNDlocal] = ACTIONS(43),
    [sym_end_local] = ACTIONS(45),
  },
  [184] = {
    [ts_builtin_sym_end] = ACTIONS(822),
    [sym_comment] = ACTIONS(822),
    [anon_sym_LT_POUNDlist] = ACTIONS(822),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(822),
    [sym_break] = ACTIONS(822),
    [sym_continue] = ACTIONS(822),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(822),
    [anon_sym_LT_POUNDitems] = ACTIONS(822),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(822),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(822),
    [anon_sym_LT_POUNDif] = ACTIONS(822),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(822),
    [anon_sym_LT_POUNDelseif] = ACTIONS(822),
    [anon_sym_LT_POUNDswitch] = ACTIONS(822),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(822),
    [anon_sym_LT_POUNDcase] = ACTIONS(822),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(822),
    [anon_sym_LT_POUNDfunction] = ACTIONS(822),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(822),
    [anon_sym_LT_POUNDreturn] = ACTIONS(822),
    [anon_sym_LT_POUNDmacro] = ACTIONS(822),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(822),
    [anon_sym_LT_POUNDnested] = ACTIONS(822),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(822),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(822),
    [sym_recover] = ACTIONS(822),
    [sym_fallback] = ACTIONS(822),
    [sym_flush] = ACTIONS(822),
    [anon_sym_LT_POUNDftl] = ACTIONS(822),
    [anon_sym_LT_POUNDimport] = ACTIONS(822),
    [anon_sym_LT_POUNDinclude] = ACTIONS(822),
    [sym_lt] = ACTIONS(822),
    [sym_nt] = ACTIONS(822),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(822),
    [sym_rt] = ACTIONS(822),
    [anon_sym_LT_POUNDsetting] = ACTIONS(822),
    [sym_stop] = ACTIONS(822),
    [sym_t] = ACTIONS(822),
    [anon_sym_LT_POUNDvisit] = ACTIONS(822),
    [anon_sym_LT_POUNDassign] = ACTIONS(822),
    [sym_end_assign] = ACTIONS(822),
    [anon_sym_LT_POUNDglobal] = ACTIONS(822),
    [sym_end_global] = ACTIONS(822),
    [anon_sym_LT_POUNDlocal] = ACTIONS(822),
    [sym_end_local] = ACTIONS(822),
  },
  [185] = {
    [sym_expression] = STATE(186),
    [sym_curveBracket] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_string] = STATE(82),
    [aux_sym_unary_expression_repeat1] = STATE(186),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(525),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(427),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_as] = ACTIONS(525),
    [anon_sym_using] = ACTIONS(525),
    [anon_sym_EQ] = ACTIONS(427),
    [anon_sym_BANG] = ACTIONS(427),
    [anon_sym_PLUS] = ACTIONS(427),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(427),
  },
  [186] = {
    [sym_expression] = STATE(186),
    [sym_curveBracket] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_string] = STATE(82),
    [aux_sym_unary_expression_repeat1] = STATE(186),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(537),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(540),
    [anon_sym_LPAREN] = ACTIONS(543),
    [anon_sym_RPAREN] = ACTIONS(451),
    [anon_sym_LBRACK] = ACTIONS(546),
    [anon_sym_as] = ACTIONS(549),
    [anon_sym_using] = ACTIONS(549),
    [anon_sym_EQ] = ACTIONS(451),
    [anon_sym_BANG] = ACTIONS(451),
    [anon_sym_PLUS] = ACTIONS(451),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_STAR_RPAREN_BSLASH_DQUOTE_SLASH] = ACTIONS(551),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_STAR_RPAREN_BSLASH_SQUOTE_SLASH] = ACTIONS(551),
  },
  [187] = {
    [ts_builtin_sym_end] = ACTIONS(824),
    [sym_comment] = ACTIONS(824),
    [anon_sym_LT_POUNDlist] = ACTIONS(824),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(824),
    [sym_break] = ACTIONS(824),
    [sym_continue] = ACTIONS(824),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(824),
    [anon_sym_LT_POUNDitems] = ACTIONS(824),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(824),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(824),
    [anon_sym_LT_POUNDif] = ACTIONS(824),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(824),
    [anon_sym_LT_POUNDelseif] = ACTIONS(824),
    [anon_sym_LT_POUNDswitch] = ACTIONS(824),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(824),
    [anon_sym_LT_POUNDcase] = ACTIONS(824),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(824),
    [anon_sym_LT_POUNDfunction] = ACTIONS(824),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(824),
    [anon_sym_LT_POUNDreturn] = ACTIONS(824),
    [anon_sym_LT_POUNDmacro] = ACTIONS(824),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(824),
    [anon_sym_LT_POUNDnested] = ACTIONS(824),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(824),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(824),
    [sym_recover] = ACTIONS(824),
    [sym_fallback] = ACTIONS(824),
    [sym_flush] = ACTIONS(824),
    [anon_sym_LT_POUNDftl] = ACTIONS(824),
    [anon_sym_LT_POUNDimport] = ACTIONS(824),
    [anon_sym_LT_POUNDinclude] = ACTIONS(824),
    [sym_lt] = ACTIONS(824),
    [sym_nt] = ACTIONS(824),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(824),
    [sym_rt] = ACTIONS(824),
    [anon_sym_LT_POUNDsetting] = ACTIONS(824),
    [sym_stop] = ACTIONS(824),
    [sym_t] = ACTIONS(824),
    [anon_sym_LT_POUNDvisit] = ACTIONS(824),
    [anon_sym_LT_POUNDassign] = ACTIONS(824),
    [sym_end_assign] = ACTIONS(824),
    [anon_sym_LT_POUNDglobal] = ACTIONS(824),
    [sym_end_global] = ACTIONS(824),
    [anon_sym_LT_POUNDlocal] = ACTIONS(824),
    [sym_end_local] = ACTIONS(824),
  },
  [188] = {
    [sym_directive] = STATE(194),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_case_repeat1] = STATE(194),
    [aux_sym_case_repeat2] = STATE(195),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [sym_break] = ACTIONS(826),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(828),
    [anon_sym_LT_POUNDcase] = ACTIONS(828),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(828),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(19),
    [sym_fallback] = ACTIONS(21),
    [sym_flush] = ACTIONS(21),
    [anon_sym_LT_POUNDftl] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [sym_lt] = ACTIONS(21),
    [sym_nt] = ACTIONS(21),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(29),
    [sym_rt] = ACTIONS(21),
    [anon_sym_LT_POUNDsetting] = ACTIONS(31),
    [sym_stop] = ACTIONS(21),
    [sym_t] = ACTIONS(21),
    [anon_sym_LT_POUNDvisit] = ACTIONS(33),
    [anon_sym_LT_POUNDassign] = ACTIONS(35),
    [sym_end_assign] = ACTIONS(37),
    [anon_sym_LT_POUNDglobal] = ACTIONS(39),
    [sym_end_global] = ACTIONS(41),
    [anon_sym_LT_POUNDlocal] = ACTIONS(43),
    [sym_end_local] = ACTIONS(45),
  },
  [189] = {
    [sym_directive] = STATE(189),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_case_repeat1] = STATE(189),
    [anon_sym_LT_POUNDlist] = ACTIONS(830),
    [anon_sym_LT_POUNDif] = ACTIONS(833),
    [anon_sym_LT_POUNDswitch] = ACTIONS(836),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(839),
    [anon_sym_LT_POUNDfunction] = ACTIONS(841),
    [anon_sym_LT_POUNDmacro] = ACTIONS(844),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(847),
    [sym_fallback] = ACTIONS(850),
    [sym_flush] = ACTIONS(850),
    [anon_sym_LT_POUNDftl] = ACTIONS(853),
    [anon_sym_LT_POUNDimport] = ACTIONS(856),
    [anon_sym_LT_POUNDinclude] = ACTIONS(859),
    [sym_lt] = ACTIONS(850),
    [sym_nt] = ACTIONS(850),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(862),
    [sym_rt] = ACTIONS(850),
    [anon_sym_LT_POUNDsetting] = ACTIONS(865),
    [sym_stop] = ACTIONS(850),
    [sym_t] = ACTIONS(850),
    [anon_sym_LT_POUNDvisit] = ACTIONS(868),
    [anon_sym_LT_POUNDassign] = ACTIONS(871),
    [sym_end_assign] = ACTIONS(874),
    [anon_sym_LT_POUNDglobal] = ACTIONS(877),
    [sym_end_global] = ACTIONS(880),
    [anon_sym_LT_POUNDlocal] = ACTIONS(883),
    [sym_end_local] = ACTIONS(886),
  },
  [190] = {
    [ts_builtin_sym_end] = ACTIONS(889),
    [sym_comment] = ACTIONS(889),
    [anon_sym_LT_POUNDlist] = ACTIONS(889),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(889),
    [sym_break] = ACTIONS(889),
    [sym_continue] = ACTIONS(889),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(889),
    [anon_sym_LT_POUNDitems] = ACTIONS(889),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(889),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(889),
    [anon_sym_LT_POUNDif] = ACTIONS(889),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(889),
    [anon_sym_LT_POUNDelseif] = ACTIONS(889),
    [anon_sym_LT_POUNDswitch] = ACTIONS(889),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(889),
    [anon_sym_LT_POUNDcase] = ACTIONS(889),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(889),
    [anon_sym_LT_POUNDfunction] = ACTIONS(889),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(889),
    [anon_sym_LT_POUNDreturn] = ACTIONS(889),
    [anon_sym_LT_POUNDmacro] = ACTIONS(889),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(889),
    [anon_sym_LT_POUNDnested] = ACTIONS(889),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(889),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(889),
    [sym_recover] = ACTIONS(889),
    [sym_fallback] = ACTIONS(889),
    [sym_flush] = ACTIONS(889),
    [anon_sym_LT_POUNDftl] = ACTIONS(889),
    [anon_sym_LT_POUNDimport] = ACTIONS(889),
    [anon_sym_LT_POUNDinclude] = ACTIONS(889),
    [sym_lt] = ACTIONS(889),
    [sym_nt] = ACTIONS(889),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(889),
    [sym_rt] = ACTIONS(889),
    [anon_sym_LT_POUNDsetting] = ACTIONS(889),
    [sym_stop] = ACTIONS(889),
    [sym_t] = ACTIONS(889),
    [anon_sym_LT_POUNDvisit] = ACTIONS(889),
    [anon_sym_LT_POUNDassign] = ACTIONS(889),
    [sym_end_assign] = ACTIONS(889),
    [anon_sym_LT_POUNDglobal] = ACTIONS(889),
    [sym_end_global] = ACTIONS(889),
    [anon_sym_LT_POUNDlocal] = ACTIONS(889),
    [sym_end_local] = ACTIONS(889),
  },
  [191] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(891),
    [sym_break] = ACTIONS(891),
    [sym_continue] = ACTIONS(891),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(891),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(891),
    [anon_sym_LT_POUNDif] = ACTIONS(891),
    [anon_sym_LT_POUNDswitch] = ACTIONS(891),
    [anon_sym_LT_POUNDfunction] = ACTIONS(891),
    [anon_sym_LT_POUNDmacro] = ACTIONS(891),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(891),
    [sym_fallback] = ACTIONS(891),
    [sym_flush] = ACTIONS(891),
    [anon_sym_LT_POUNDftl] = ACTIONS(891),
    [anon_sym_LT_POUNDimport] = ACTIONS(891),
    [anon_sym_LT_POUNDinclude] = ACTIONS(891),
    [sym_lt] = ACTIONS(891),
    [sym_nt] = ACTIONS(891),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(891),
    [sym_rt] = ACTIONS(891),
    [anon_sym_LT_POUNDsetting] = ACTIONS(891),
    [sym_stop] = ACTIONS(891),
    [sym_t] = ACTIONS(891),
    [anon_sym_LT_POUNDvisit] = ACTIONS(891),
    [anon_sym_LT_POUNDassign] = ACTIONS(891),
    [sym_end_assign] = ACTIONS(891),
    [anon_sym_LT_POUNDglobal] = ACTIONS(891),
    [sym_end_global] = ACTIONS(891),
    [anon_sym_LT_POUNDlocal] = ACTIONS(891),
    [sym_end_local] = ACTIONS(891),
  },
  [192] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(893),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(893),
    [sym_break] = ACTIONS(893),
    [sym_continue] = ACTIONS(893),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(893),
    [anon_sym_LT_POUNDitems] = ACTIONS(893),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(893),
    [anon_sym_LT_POUNDif] = ACTIONS(893),
    [anon_sym_LT_POUNDswitch] = ACTIONS(893),
    [anon_sym_LT_POUNDfunction] = ACTIONS(893),
    [anon_sym_LT_POUNDmacro] = ACTIONS(893),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(893),
    [sym_fallback] = ACTIONS(893),
    [sym_flush] = ACTIONS(893),
    [anon_sym_LT_POUNDftl] = ACTIONS(893),
    [anon_sym_LT_POUNDimport] = ACTIONS(893),
    [anon_sym_LT_POUNDinclude] = ACTIONS(893),
    [sym_lt] = ACTIONS(893),
    [sym_nt] = ACTIONS(893),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(893),
    [sym_rt] = ACTIONS(893),
    [anon_sym_LT_POUNDsetting] = ACTIONS(893),
    [sym_stop] = ACTIONS(893),
    [sym_t] = ACTIONS(893),
    [anon_sym_LT_POUNDvisit] = ACTIONS(893),
    [anon_sym_LT_POUNDassign] = ACTIONS(893),
    [sym_end_assign] = ACTIONS(893),
    [anon_sym_LT_POUNDglobal] = ACTIONS(893),
    [sym_end_global] = ACTIONS(893),
    [anon_sym_LT_POUNDlocal] = ACTIONS(893),
    [sym_end_local] = ACTIONS(893),
  },
  [193] = {
    [sym_directive] = STATE(191),
    [sym_list] = STATE(8),
    [sym_items_middle] = STATE(197),
    [sym_sep] = STATE(191),
    [sym_sep_block] = STATE(114),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_items_repeat1] = STATE(197),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [sym_break] = ACTIONS(818),
    [sym_continue] = ACTIONS(818),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(895),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(265),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(19),
    [sym_fallback] = ACTIONS(21),
    [sym_flush] = ACTIONS(21),
    [anon_sym_LT_POUNDftl] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [sym_lt] = ACTIONS(21),
    [sym_nt] = ACTIONS(21),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(29),
    [sym_rt] = ACTIONS(21),
    [anon_sym_LT_POUNDsetting] = ACTIONS(31),
    [sym_stop] = ACTIONS(21),
    [sym_t] = ACTIONS(21),
    [anon_sym_LT_POUNDvisit] = ACTIONS(33),
    [anon_sym_LT_POUNDassign] = ACTIONS(35),
    [sym_end_assign] = ACTIONS(37),
    [anon_sym_LT_POUNDglobal] = ACTIONS(39),
    [sym_end_global] = ACTIONS(41),
    [anon_sym_LT_POUNDlocal] = ACTIONS(43),
    [sym_end_local] = ACTIONS(45),
  },
  [194] = {
    [sym_directive] = STATE(198),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_case_repeat1] = STATE(198),
    [aux_sym_case_repeat2] = STATE(199),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [sym_break] = ACTIONS(897),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(899),
    [anon_sym_LT_POUNDcase] = ACTIONS(899),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(899),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(19),
    [sym_fallback] = ACTIONS(21),
    [sym_flush] = ACTIONS(21),
    [anon_sym_LT_POUNDftl] = ACTIONS(23),
    [anon_sym_LT_POUNDimport] = ACTIONS(25),
    [anon_sym_LT_POUNDinclude] = ACTIONS(27),
    [sym_lt] = ACTIONS(21),
    [sym_nt] = ACTIONS(21),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(29),
    [sym_rt] = ACTIONS(21),
    [anon_sym_LT_POUNDsetting] = ACTIONS(31),
    [sym_stop] = ACTIONS(21),
    [sym_t] = ACTIONS(21),
    [anon_sym_LT_POUNDvisit] = ACTIONS(33),
    [anon_sym_LT_POUNDassign] = ACTIONS(35),
    [sym_end_assign] = ACTIONS(37),
    [anon_sym_LT_POUNDglobal] = ACTIONS(39),
    [sym_end_global] = ACTIONS(41),
    [anon_sym_LT_POUNDlocal] = ACTIONS(43),
    [sym_end_local] = ACTIONS(45),
  },
  [195] = {
    [aux_sym_case_repeat2] = STATE(200),
    [sym_break] = ACTIONS(901),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(899),
    [anon_sym_LT_POUNDcase] = ACTIONS(899),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(899),
  },
  [196] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(903),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(903),
    [sym_break] = ACTIONS(903),
    [sym_continue] = ACTIONS(903),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(903),
    [anon_sym_LT_POUNDitems] = ACTIONS(903),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(903),
    [anon_sym_LT_POUNDif] = ACTIONS(903),
    [anon_sym_LT_POUNDswitch] = ACTIONS(903),
    [anon_sym_LT_POUNDfunction] = ACTIONS(903),
    [anon_sym_LT_POUNDmacro] = ACTIONS(903),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(903),
    [sym_fallback] = ACTIONS(903),
    [sym_flush] = ACTIONS(903),
    [anon_sym_LT_POUNDftl] = ACTIONS(903),
    [anon_sym_LT_POUNDimport] = ACTIONS(903),
    [anon_sym_LT_POUNDinclude] = ACTIONS(903),
    [sym_lt] = ACTIONS(903),
    [sym_nt] = ACTIONS(903),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(903),
    [sym_rt] = ACTIONS(903),
    [anon_sym_LT_POUNDsetting] = ACTIONS(903),
    [sym_stop] = ACTIONS(903),
    [sym_t] = ACTIONS(903),
    [anon_sym_LT_POUNDvisit] = ACTIONS(903),
    [anon_sym_LT_POUNDassign] = ACTIONS(903),
    [sym_end_assign] = ACTIONS(903),
    [anon_sym_LT_POUNDglobal] = ACTIONS(903),
    [sym_end_global] = ACTIONS(903),
    [anon_sym_LT_POUNDlocal] = ACTIONS(903),
    [sym_end_local] = ACTIONS(903),
  },
  [197] = {
    [sym_directive] = STATE(191),
    [sym_list] = STATE(8),
    [sym_items_middle] = STATE(197),
    [sym_sep] = STATE(191),
    [sym_sep_block] = STATE(114),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_items_repeat1] = STATE(197),
    [anon_sym_LT_POUNDlist] = ACTIONS(905),
    [sym_break] = ACTIONS(908),
    [sym_continue] = ACTIONS(908),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(911),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(913),
    [anon_sym_LT_POUNDif] = ACTIONS(916),
    [anon_sym_LT_POUNDswitch] = ACTIONS(919),
    [anon_sym_LT_POUNDfunction] = ACTIONS(922),
    [anon_sym_LT_POUNDmacro] = ACTIONS(925),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(928),
    [sym_fallback] = ACTIONS(931),
    [sym_flush] = ACTIONS(931),
    [anon_sym_LT_POUNDftl] = ACTIONS(934),
    [anon_sym_LT_POUNDimport] = ACTIONS(937),
    [anon_sym_LT_POUNDinclude] = ACTIONS(940),
    [sym_lt] = ACTIONS(931),
    [sym_nt] = ACTIONS(931),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(943),
    [sym_rt] = ACTIONS(931),
    [anon_sym_LT_POUNDsetting] = ACTIONS(946),
    [sym_stop] = ACTIONS(931),
    [sym_t] = ACTIONS(931),
    [anon_sym_LT_POUNDvisit] = ACTIONS(949),
    [anon_sym_LT_POUNDassign] = ACTIONS(952),
    [sym_end_assign] = ACTIONS(955),
    [anon_sym_LT_POUNDglobal] = ACTIONS(958),
    [sym_end_global] = ACTIONS(961),
    [anon_sym_LT_POUNDlocal] = ACTIONS(964),
    [sym_end_local] = ACTIONS(967),
  },
  [198] = {
    [sym_directive] = STATE(198),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_case_repeat1] = STATE(198),
    [anon_sym_LT_POUNDlist] = ACTIONS(830),
    [sym_break] = ACTIONS(839),
    [anon_sym_LT_POUNDif] = ACTIONS(833),
    [anon_sym_LT_POUNDswitch] = ACTIONS(836),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(839),
    [anon_sym_LT_POUNDcase] = ACTIONS(839),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(839),
    [anon_sym_LT_POUNDfunction] = ACTIONS(841),
    [anon_sym_LT_POUNDmacro] = ACTIONS(844),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(847),
    [sym_fallback] = ACTIONS(850),
    [sym_flush] = ACTIONS(850),
    [anon_sym_LT_POUNDftl] = ACTIONS(853),
    [anon_sym_LT_POUNDimport] = ACTIONS(856),
    [anon_sym_LT_POUNDinclude] = ACTIONS(859),
    [sym_lt] = ACTIONS(850),
    [sym_nt] = ACTIONS(850),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(862),
    [sym_rt] = ACTIONS(850),
    [anon_sym_LT_POUNDsetting] = ACTIONS(865),
    [sym_stop] = ACTIONS(850),
    [sym_t] = ACTIONS(850),
    [anon_sym_LT_POUNDvisit] = ACTIONS(868),
    [anon_sym_LT_POUNDassign] = ACTIONS(871),
    [sym_end_assign] = ACTIONS(874),
    [anon_sym_LT_POUNDglobal] = ACTIONS(877),
    [sym_end_global] = ACTIONS(880),
    [anon_sym_LT_POUNDlocal] = ACTIONS(883),
    [sym_end_local] = ACTIONS(886),
  },
  [199] = {
    [aux_sym_case_repeat2] = STATE(200),
    [sym_break] = ACTIONS(901),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(970),
    [anon_sym_LT_POUNDcase] = ACTIONS(970),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(970),
  },
  [200] = {
    [aux_sym_case_repeat2] = STATE(200),
    [sym_break] = ACTIONS(972),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(975),
    [anon_sym_LT_POUNDcase] = ACTIONS(975),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(975),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(22),
  [9] = {.count = 1, .reusable = true}, SHIFT(2),
  [11] = {.count = 1, .reusable = true}, SHIFT(3),
  [13] = {.count = 1, .reusable = true}, SHIFT(4),
  [15] = {.count = 1, .reusable = true}, SHIFT(5),
  [17] = {.count = 1, .reusable = true}, SHIFT(6),
  [19] = {.count = 1, .reusable = true}, SHIFT(7),
  [21] = {.count = 1, .reusable = true}, SHIFT(8),
  [23] = {.count = 1, .reusable = true}, SHIFT(9),
  [25] = {.count = 1, .reusable = true}, SHIFT(10),
  [27] = {.count = 1, .reusable = true}, SHIFT(11),
  [29] = {.count = 1, .reusable = true}, SHIFT(12),
  [31] = {.count = 1, .reusable = true}, SHIFT(13),
  [33] = {.count = 1, .reusable = true}, SHIFT(14),
  [35] = {.count = 1, .reusable = true}, SHIFT(15),
  [37] = {.count = 1, .reusable = true}, SHIFT(16),
  [39] = {.count = 1, .reusable = true}, SHIFT(17),
  [41] = {.count = 1, .reusable = true}, SHIFT(18),
  [43] = {.count = 1, .reusable = true}, SHIFT(19),
  [45] = {.count = 1, .reusable = true}, SHIFT(20),
  [47] = {.count = 1, .reusable = false}, SHIFT(23),
  [49] = {.count = 1, .reusable = false}, SHIFT(24),
  [51] = {.count = 1, .reusable = true}, SHIFT(24),
  [53] = {.count = 1, .reusable = true}, SHIFT(25),
  [55] = {.count = 1, .reusable = true}, SHIFT(31),
  [57] = {.count = 1, .reusable = true}, SHIFT(32),
  [59] = {.count = 1, .reusable = true}, SHIFT(38),
  [61] = {.count = 1, .reusable = true}, SHIFT(40),
  [63] = {.count = 1, .reusable = true}, SHIFT(42),
  [65] = {.count = 1, .reusable = true}, SHIFT(43),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_directive, 1),
  [69] = {.count = 1, .reusable = true}, SHIFT(45),
  [71] = {.count = 1, .reusable = true}, SHIFT(47),
  [73] = {.count = 1, .reusable = true}, SHIFT(49),
  [75] = {.count = 1, .reusable = true}, SHIFT(51),
  [77] = {.count = 1, .reusable = true}, SHIFT(53),
  [79] = {.count = 1, .reusable = true}, SHIFT(55),
  [81] = {.count = 1, .reusable = true}, SHIFT(57),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 1),
  [85] = {.count = 1, .reusable = true}, SHIFT(59),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_global, 1),
  [89] = {.count = 1, .reusable = true}, SHIFT(61),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_local, 1),
  [93] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [97] = {.count = 1, .reusable = true}, SHIFT(63),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 1),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_operator, 1),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [105] = {.count = 1, .reusable = true}, SHIFT(64),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_group, 1),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_group, 1),
  [111] = {.count = 1, .reusable = true}, SHIFT(66),
  [113] = {.count = 1, .reusable = true}, SHIFT(67),
  [115] = {.count = 1, .reusable = true}, SHIFT(68),
  [117] = {.count = 1, .reusable = true}, SHIFT(69),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_paramGroup, 1),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_string, 1),
  [123] = {.count = 1, .reusable = true}, SHIFT(72),
  [125] = {.count = 1, .reusable = true}, SHIFT(73),
  [127] = {.count = 1, .reusable = true}, SHIFT(74),
  [129] = {.count = 1, .reusable = true}, SHIFT(79),
  [131] = {.count = 1, .reusable = true}, SHIFT(80),
  [133] = {.count = 1, .reusable = true}, SHIFT(81),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym_paramGroup, 1),
  [137] = {.count = 1, .reusable = true}, SHIFT(84),
  [139] = {.count = 1, .reusable = true}, SHIFT(86),
  [141] = {.count = 1, .reusable = true}, SHIFT(87),
  [143] = {.count = 1, .reusable = true}, SHIFT(88),
  [145] = {.count = 1, .reusable = true}, SHIFT(91),
  [147] = {.count = 1, .reusable = true}, SHIFT(92),
  [149] = {.count = 1, .reusable = true}, SHIFT(93),
  [151] = {.count = 1, .reusable = true}, SHIFT(96),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_attempt, 2),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_attempt_middle, 1),
  [157] = {.count = 1, .reusable = true}, SHIFT(97),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_ftl, 2),
  [161] = {.count = 1, .reusable = true}, SHIFT(99),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_import, 2),
  [165] = {.count = 1, .reusable = true}, SHIFT(100),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [169] = {.count = 1, .reusable = true}, SHIFT(101),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_recurse, 2),
  [173] = {.count = 1, .reusable = true}, SHIFT(102),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_setting, 2),
  [177] = {.count = 1, .reusable = true}, SHIFT(103),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_visit, 2),
  [181] = {.count = 1, .reusable = true}, SHIFT(104),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 2),
  [185] = {.count = 1, .reusable = true}, SHIFT(105),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_global, 2),
  [189] = {.count = 1, .reusable = true}, SHIFT(106),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_local, 2),
  [193] = {.count = 1, .reusable = true}, SHIFT(107),
  [195] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [197] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [200] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [203] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [206] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [209] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [212] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [215] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [218] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [221] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [224] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [227] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [230] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [233] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [236] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [239] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [242] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [245] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [248] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [251] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [254] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [257] = {.count = 1, .reusable = true}, SHIFT(108),
  [259] = {.count = 1, .reusable = true}, SHIFT(109),
  [261] = {.count = 1, .reusable = true}, SHIFT(110),
  [263] = {.count = 1, .reusable = true}, SHIFT(111),
  [265] = {.count = 1, .reusable = true}, SHIFT(112),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [269] = {.count = 1, .reusable = true}, SHIFT(117),
  [271] = {.count = 1, .reusable = true}, SHIFT(121),
  [273] = {.count = 1, .reusable = true}, SHIFT(123),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_if_else, 1),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_if, 3),
  [281] = {.count = 1, .reusable = true}, SHIFT(126),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_if_middle, 1),
  [285] = {.count = 1, .reusable = true}, SHIFT(128),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 1),
  [289] = {.count = 1, .reusable = true}, SHIFT(132),
  [291] = {.count = 1, .reusable = true}, SHIFT(134),
  [293] = {.count = 1, .reusable = true}, SHIFT(136),
  [295] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2),
  [297] = {.count = 2, .reusable = false}, REDUCE(aux_sym_curveBracket_repeat1, 2), SHIFT_REPEAT(23),
  [300] = {.count = 2, .reusable = false}, REDUCE(aux_sym_curveBracket_repeat1, 2), SHIFT_REPEAT(24),
  [303] = {.count = 2, .reusable = true}, REDUCE(aux_sym_curveBracket_repeat1, 2), SHIFT_REPEAT(24),
  [306] = {.count = 2, .reusable = true}, REDUCE(aux_sym_curveBracket_repeat1, 2), SHIFT_REPEAT(31),
  [309] = {.count = 1, .reusable = true}, REDUCE(aux_sym_curveBracket_repeat1, 2),
  [311] = {.count = 1, .reusable = true}, SHIFT(139),
  [313] = {.count = 1, .reusable = true}, SHIFT(140),
  [315] = {.count = 1, .reusable = true}, SHIFT(141),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_function, 3),
  [319] = {.count = 1, .reusable = true}, SHIFT(145),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_function_middle, 1),
  [323] = {.count = 1, .reusable = true}, SHIFT(147),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_macro, 3),
  [327] = {.count = 1, .reusable = true}, SHIFT(150),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_macro_middle, 1),
  [331] = {.count = 1, .reusable = true}, SHIFT(152),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_attempt, 3),
  [335] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(2),
  [338] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(3),
  [341] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(4),
  [344] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(5),
  [347] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(6),
  [350] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(7),
  [353] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2),
  [355] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(43),
  [358] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(8),
  [361] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(9),
  [364] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(10),
  [367] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(11),
  [370] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(12),
  [373] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(13),
  [376] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(14),
  [379] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(15),
  [382] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(16),
  [385] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(17),
  [388] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(18),
  [391] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(19),
  [394] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(20),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_ftl, 3),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_import, 3),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_include, 3),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym_recurse, 3),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_setting, 3),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_visit, 3),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 3),
  [411] = {.count = 1, .reusable = true}, REDUCE(sym_global, 3),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym_local, 3),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_list, 4),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_list_middle, 1),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym_list_else, 1),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_sep, 1),
  [423] = {.count = 1, .reusable = true}, SHIFT(157),
  [425] = {.count = 1, .reusable = true}, SHIFT(158),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [429] = {.count = 1, .reusable = true}, REDUCE(sym_curveBracket, 2),
  [431] = {.count = 1, .reusable = true}, SHIFT(163),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_sequence, 2),
  [435] = {.count = 1, .reusable = true}, SHIFT(165),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 2),
  [439] = {.count = 2, .reusable = true}, REDUCE(aux_sym_unary_expression_repeat1, 2), SHIFT_REPEAT(66),
  [442] = {.count = 2, .reusable = true}, REDUCE(aux_sym_unary_expression_repeat1, 2), SHIFT_REPEAT(67),
  [445] = {.count = 2, .reusable = true}, REDUCE(aux_sym_unary_expression_repeat1, 2), SHIFT_REPEAT(68),
  [448] = {.count = 2, .reusable = true}, REDUCE(aux_sym_unary_expression_repeat1, 2), SHIFT_REPEAT(69),
  [451] = {.count = 1, .reusable = true}, REDUCE(aux_sym_unary_expression_repeat1, 2),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_if_else, 2),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_elseif, 2),
  [457] = {.count = 1, .reusable = true}, SHIFT(168),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4),
  [461] = {.count = 1, .reusable = true}, SHIFT(169),
  [463] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(2),
  [466] = {.count = 1, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2),
  [468] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(3),
  [471] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(74),
  [474] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(4),
  [477] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(5),
  [480] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(6),
  [483] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(7),
  [486] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(8),
  [489] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(9),
  [492] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(10),
  [495] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(11),
  [498] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(12),
  [501] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(13),
  [504] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(14),
  [507] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(15),
  [510] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(16),
  [513] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(17),
  [516] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(18),
  [519] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(19),
  [522] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(20),
  [525] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [527] = {.count = 1, .reusable = false}, REDUCE(sym_curveBracket, 2),
  [529] = {.count = 1, .reusable = true}, SHIFT(170),
  [531] = {.count = 1, .reusable = false}, REDUCE(sym_sequence, 2),
  [533] = {.count = 1, .reusable = true}, SHIFT(171),
  [535] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 2),
  [537] = {.count = 2, .reusable = false}, REDUCE(aux_sym_unary_expression_repeat1, 2), SHIFT_REPEAT(79),
  [540] = {.count = 2, .reusable = true}, REDUCE(aux_sym_unary_expression_repeat1, 2), SHIFT_REPEAT(79),
  [543] = {.count = 2, .reusable = true}, REDUCE(aux_sym_unary_expression_repeat1, 2), SHIFT_REPEAT(80),
  [546] = {.count = 2, .reusable = true}, REDUCE(aux_sym_unary_expression_repeat1, 2), SHIFT_REPEAT(81),
  [549] = {.count = 1, .reusable = false}, REDUCE(aux_sym_unary_expression_repeat1, 2),
  [551] = {.count = 2, .reusable = true}, REDUCE(aux_sym_unary_expression_repeat1, 2), SHIFT_REPEAT(31),
  [554] = {.count = 1, .reusable = true}, REDUCE(sym_switch, 4),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym_default, 1),
  [558] = {.count = 1, .reusable = true}, REDUCE(sym_switch_middle, 1),
  [560] = {.count = 1, .reusable = true}, SHIFT(175),
  [562] = {.count = 1, .reusable = true}, REDUCE(sym_return, 2),
  [564] = {.count = 1, .reusable = true}, SHIFT(178),
  [566] = {.count = 1, .reusable = true}, REDUCE(sym_function, 4),
  [568] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(2),
  [571] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(3),
  [574] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(4),
  [577] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(5),
  [580] = {.count = 1, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2),
  [582] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(88),
  [585] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(6),
  [588] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(7),
  [591] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(8),
  [594] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(9),
  [597] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(10),
  [600] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(11),
  [603] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(12),
  [606] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(13),
  [609] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(14),
  [612] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(15),
  [615] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(16),
  [618] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(17),
  [621] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(18),
  [624] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(19),
  [627] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(20),
  [630] = {.count = 1, .reusable = true}, SHIFT(179),
  [632] = {.count = 1, .reusable = true}, REDUCE(sym_nested, 2),
  [634] = {.count = 1, .reusable = true}, SHIFT(180),
  [636] = {.count = 1, .reusable = true}, REDUCE(sym_macro, 4),
  [638] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(2),
  [641] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(3),
  [644] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(4),
  [647] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(5),
  [650] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(88),
  [653] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(6),
  [656] = {.count = 1, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2),
  [658] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(93),
  [661] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(7),
  [664] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(8),
  [667] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(9),
  [670] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(10),
  [673] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(11),
  [676] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(12),
  [679] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(13),
  [682] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(14),
  [685] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(15),
  [688] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(16),
  [691] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(17),
  [694] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(18),
  [697] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(19),
  [700] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(20),
  [703] = {.count = 1, .reusable = true}, SHIFT(181),
  [705] = {.count = 1, .reusable = true}, REDUCE(sym_list_else, 2),
  [707] = {.count = 1, .reusable = true}, SHIFT(183),
  [709] = {.count = 1, .reusable = true}, REDUCE(sym_sep_block, 2),
  [711] = {.count = 1, .reusable = true}, REDUCE(sym_list, 5),
  [713] = {.count = 1, .reusable = true}, SHIFT(184),
  [715] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [718] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2),
  [720] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(109),
  [723] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(111),
  [726] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(112),
  [729] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(3),
  [732] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(4),
  [735] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(5),
  [738] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(6),
  [741] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(7),
  [744] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(8),
  [747] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(9),
  [750] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(10),
  [753] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(11),
  [756] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(12),
  [759] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(13),
  [762] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(14),
  [765] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(15),
  [768] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(16),
  [771] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(17),
  [774] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(18),
  [777] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(19),
  [780] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(20),
  [783] = {.count = 1, .reusable = true}, REDUCE(sym_curveBracket, 3),
  [785] = {.count = 1, .reusable = true}, REDUCE(sym_sequence, 3),
  [787] = {.count = 1, .reusable = true}, REDUCE(sym_elseif, 3),
  [789] = {.count = 1, .reusable = true}, REDUCE(sym_if, 5),
  [791] = {.count = 1, .reusable = false}, REDUCE(sym_curveBracket, 3),
  [793] = {.count = 1, .reusable = false}, REDUCE(sym_sequence, 3),
  [795] = {.count = 1, .reusable = true}, SHIFT(187),
  [797] = {.count = 1, .reusable = true}, SHIFT(188),
  [799] = {.count = 1, .reusable = true}, REDUCE(sym_default, 2),
  [801] = {.count = 1, .reusable = true}, REDUCE(sym_switch, 5),
  [803] = {.count = 1, .reusable = true}, SHIFT(190),
  [805] = {.count = 1, .reusable = true}, REDUCE(aux_sym_switch_repeat1, 2),
  [807] = {.count = 2, .reusable = true}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(140),
  [810] = {.count = 1, .reusable = true}, REDUCE(sym_return, 3),
  [812] = {.count = 1, .reusable = true}, REDUCE(sym_function, 5),
  [814] = {.count = 1, .reusable = true}, REDUCE(sym_nested, 3),
  [816] = {.count = 1, .reusable = true}, REDUCE(sym_macro, 5),
  [818] = {.count = 1, .reusable = true}, SHIFT(191),
  [820] = {.count = 1, .reusable = true}, SHIFT(192),
  [822] = {.count = 1, .reusable = true}, REDUCE(sym_list, 6),
  [824] = {.count = 1, .reusable = true}, REDUCE(sym_if, 6),
  [826] = {.count = 1, .reusable = true}, SHIFT(195),
  [828] = {.count = 1, .reusable = true}, REDUCE(sym_case, 3),
  [830] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(2),
  [833] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(3),
  [836] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(4),
  [839] = {.count = 1, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2),
  [841] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(5),
  [844] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(6),
  [847] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(7),
  [850] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(8),
  [853] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(9),
  [856] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(10),
  [859] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(11),
  [862] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(12),
  [865] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(13),
  [868] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(14),
  [871] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(15),
  [874] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(16),
  [877] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(17),
  [880] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(18),
  [883] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(19),
  [886] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(20),
  [889] = {.count = 1, .reusable = true}, REDUCE(sym_switch, 6),
  [891] = {.count = 1, .reusable = true}, REDUCE(sym_items_middle, 1),
  [893] = {.count = 1, .reusable = true}, REDUCE(sym_items, 4),
  [895] = {.count = 1, .reusable = true}, SHIFT(196),
  [897] = {.count = 1, .reusable = true}, SHIFT(199),
  [899] = {.count = 1, .reusable = true}, REDUCE(sym_case, 4),
  [901] = {.count = 1, .reusable = true}, SHIFT(200),
  [903] = {.count = 1, .reusable = true}, REDUCE(sym_items, 5),
  [905] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(2),
  [908] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(191),
  [911] = {.count = 1, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2),
  [913] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(112),
  [916] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(3),
  [919] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(4),
  [922] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(5),
  [925] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(6),
  [928] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(7),
  [931] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(8),
  [934] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(9),
  [937] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(10),
  [940] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(11),
  [943] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(12),
  [946] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(13),
  [949] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(14),
  [952] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(15),
  [955] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(16),
  [958] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(17),
  [961] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(18),
  [964] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(19),
  [967] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(20),
  [970] = {.count = 1, .reusable = true}, REDUCE(sym_case, 5),
  [972] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat2, 2), SHIFT_REPEAT(200),
  [975] = {.count = 1, .reusable = true}, REDUCE(aux_sym_case_repeat2, 2),
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
