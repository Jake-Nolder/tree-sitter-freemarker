#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 230
#define SYMBOL_COUNT 152
#define ALIAS_COUNT 0
#define TOKEN_COUNT 93
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_comment = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_as = 4,
  anon_sym_using = 5,
  anon_sym_COMMA = 6,
  anon_sym_DOT_DOT = 7,
  anon_sym_DOT_DOT_LT = 8,
  anon_sym_DOT_DOT_BANG = 9,
  anon_sym_COLON = 10,
  anon_sym_STAR = 11,
  anon_sym_PLUS = 12,
  anon_sym_SLASH = 13,
  anon_sym_DASH = 14,
  anon_sym_PERCENT = 15,
  anon_sym_EQ_EQ = 16,
  anon_sym_BANG_EQ = 17,
  anon_sym_LT = 18,
  anon_sym_GT = 19,
  anon_sym_GT_EQ = 20,
  anon_sym_LT_EQ = 21,
  anon_sym_lt = 22,
  anon_sym_lte = 23,
  anon_sym_gt = 24,
  anon_sym_gte = 25,
  anon_sym_BANG = 26,
  anon_sym_AMP_AMP = 27,
  anon_sym_PIPE_PIPE = 28,
  anon_sym_QMARK_QMARK = 29,
  anon_sym_EQ = 30,
  anon_sym_PLUS_EQ = 31,
  anon_sym_DASH_EQ = 32,
  anon_sym_STAR_EQ = 33,
  anon_sym_SLASH_EQ = 34,
  anon_sym_PERCENT_EQ = 35,
  anon_sym_PLUS_PLUS = 36,
  anon_sym_DASH_DASH = 37,
  aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH = 38,
  aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH = 39,
  sym_number = 40,
  anon_sym_true = 41,
  anon_sym_false = 42,
  anon_sym_LBRACK = 43,
  anon_sym_RBRACK = 44,
  anon_sym_LBRACE = 45,
  anon_sym_RBRACE = 46,
  sym_top_level = 47,
  sym_spec_var = 48,
  anon_sym_LT_POUNDlist = 49,
  anon_sym_LT_SLASH_POUNDlist_GT = 50,
  sym_break = 51,
  sym_continue = 52,
  anon_sym_LT_POUNDelse_GT = 53,
  anon_sym_LT_POUNDitems = 54,
  anon_sym_LT_SLASH_POUNDitems_GT = 55,
  anon_sym_LT_POUNDsep_GT = 56,
  anon_sym_LT_SLASH_POUNDsep_GT = 57,
  anon_sym_LT_POUNDif = 58,
  anon_sym_LT_SLASH_POUNDif_GT = 59,
  anon_sym_LT_POUNDelseif = 60,
  anon_sym_LT_POUNDswitch = 61,
  anon_sym_LT_SLASH_POUNDswitch_GT = 62,
  anon_sym_LT_POUNDcase = 63,
  anon_sym_LT_POUNDdefault_GT = 64,
  anon_sym_LT_POUNDfunction = 65,
  anon_sym_LT_SLASH_POUNDfunction_GT = 66,
  anon_sym_LT_POUNDreturn = 67,
  anon_sym_LT_POUNDmacro = 68,
  anon_sym_LT_SLASH_POUNDmacro_GT = 69,
  anon_sym_LT_POUNDnested = 70,
  anon_sym_LT_POUNDattempt_GT = 71,
  anon_sym_LT_SLASH_POUNDattempt_GT = 72,
  sym_recover = 73,
  sym_fallback = 74,
  sym_flush = 75,
  anon_sym_LT_POUNDftl = 76,
  anon_sym_LT_POUNDimport = 77,
  anon_sym_LT_POUNDinclude = 78,
  sym_lt = 79,
  sym_nt = 80,
  anon_sym_LT_POUNDrecurse = 81,
  sym_rt = 82,
  anon_sym_LT_POUNDsetting = 83,
  sym_stop = 84,
  sym_t = 85,
  anon_sym_LT_POUNDvisit = 86,
  anon_sym_LT_POUNDassign = 87,
  sym_end_assign = 88,
  anon_sym_LT_POUNDglobal = 89,
  sym_end_global = 90,
  anon_sym_LT_POUNDlocal = 91,
  sym_end_local = 92,
  sym_source_file = 93,
  sym__definition = 94,
  sym_directive = 95,
  sym_parameter_group = 96,
  sym_unary_expression = 97,
  sym_binary_expression = 98,
  sym_expression = 99,
  sym_group = 100,
  sym_operator = 101,
  sym_string = 102,
  sym_boolean = 103,
  sym_sequence = 104,
  sym_hash = 105,
  sym_method = 106,
  sym_list = 107,
  sym_list_middle = 108,
  sym_items_middle = 109,
  sym_list_else = 110,
  sym_items = 111,
  sym_sep = 112,
  sym_sep_block = 113,
  sym_if = 114,
  sym_if_else = 115,
  sym_elseif = 116,
  sym_if_middle = 117,
  sym_switch = 118,
  sym_case = 119,
  sym_default = 120,
  sym_switch_middle = 121,
  sym_function = 122,
  sym_function_middle = 123,
  sym_return = 124,
  sym_macro = 125,
  sym_macro_middle = 126,
  sym_nested = 127,
  sym_attempt = 128,
  sym_attempt_middle = 129,
  sym_ftl = 130,
  sym_import = 131,
  sym_include = 132,
  sym_recurse = 133,
  sym_setting = 134,
  sym_visit = 135,
  sym_assign = 136,
  sym_global = 137,
  sym_local = 138,
  aux_sym_source_file_repeat1 = 139,
  aux_sym_unary_expression_repeat1 = 140,
  aux_sym_group_repeat1 = 141,
  aux_sym_sequence_repeat1 = 142,
  aux_sym_list_repeat1 = 143,
  aux_sym_items_repeat1 = 144,
  aux_sym_if_repeat1 = 145,
  aux_sym_switch_repeat1 = 146,
  aux_sym_case_repeat1 = 147,
  aux_sym_case_repeat2 = 148,
  aux_sym_function_repeat1 = 149,
  aux_sym_macro_repeat1 = 150,
  aux_sym_attempt_repeat1 = 151,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_comment] = "comment",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_as] = "as",
  [anon_sym_using] = "using",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_DOT_DOT_LT] = "..<",
  [anon_sym_DOT_DOT_BANG] = "..!",
  [anon_sym_COLON] = ":",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_SLASH] = "/",
  [anon_sym_DASH] = "-",
  [anon_sym_PERCENT] = "%",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_lt] = "lt",
  [anon_sym_lte] = "lte",
  [anon_sym_gt] = "gt",
  [anon_sym_gte] = "gte",
  [anon_sym_BANG] = "!",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_QMARK_QMARK] = "??",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = "/\\\"(\\\\.|[^\\\"])*\\\"/",
  [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = "/\\'(\\\\.|[^\\'])*\\'/",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_top_level] = "top_level",
  [sym_spec_var] = "spec_var",
  [anon_sym_LT_POUNDlist] = "<#list",
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
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_expression] = "expression",
  [sym_group] = "group",
  [sym_operator] = "operator",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [sym_sequence] = "sequence",
  [sym_hash] = "hash",
  [sym_method] = "method",
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
  [aux_sym_group_repeat1] = "group_repeat1",
  [aux_sym_sequence_repeat1] = "sequence_repeat1",
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_top_level] = {
    .visible = true,
    .named = true,
  },
  [sym_spec_var] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_POUNDlist] = {
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
  [sym_group] = {
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
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_hash] = {
    .visible = true,
    .named = true,
  },
  [sym_method] = {
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
  [aux_sym_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_repeat1] = {
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
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '*')
        ADVANCE(18);
      if (lookahead == '+')
        ADVANCE(20);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(24);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead == '/')
        ADVANCE(32);
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '>')
        ADVANCE(270);
      if (lookahead == '?')
        ADVANCE(272);
      if (lookahead == '[')
        ADVANCE(274);
      if (lookahead == ']')
        ADVANCE(275);
      if (lookahead == 'a')
        ADVANCE(276);
      if (lookahead == 'f')
        ADVANCE(278);
      if (lookahead == 'g')
        ADVANCE(283);
      if (lookahead == 'l')
        ADVANCE(286);
      if (lookahead == 't')
        ADVANCE(289);
      if (lookahead == 'u')
        ADVANCE(293);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '|')
        ADVANCE(299);
      if (lookahead == '}')
        ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(302);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 4:
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\\')
        ADVANCE(6);
      if (lookahead != 0)
        ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH);
      END_STATE();
    case 6:
      if (lookahead == '\n')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(7);
      if (lookahead == '\\')
        ADVANCE(6);
      if (lookahead != 0)
        ADVANCE(4);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\\')
        ADVANCE(6);
      if (lookahead != 0)
        ADVANCE(4);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=')
        ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 10:
      if (lookahead == '&')
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 12:
      if (lookahead == '\'')
        ADVANCE(13);
      if (lookahead == '\\')
        ADVANCE(14);
      if (lookahead != 0)
        ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH);
      END_STATE();
    case 14:
      if (lookahead == '\n')
        ADVANCE(12);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '\\')
        ADVANCE(14);
      if (lookahead != 0)
        ADVANCE(12);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH);
      if (lookahead == '\'')
        ADVANCE(13);
      if (lookahead == '\\')
        ADVANCE(14);
      if (lookahead != 0)
        ADVANCE(12);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=')
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+')
        ADVANCE(21);
      if (lookahead == '=')
        ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '=')
        ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 27:
      if (lookahead == '.')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '!')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_BANG);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_LT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_spec_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=')
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '#')
        ADVANCE(36);
      if (lookahead == '/')
        ADVANCE(201);
      if (lookahead == '=')
        ADVANCE(267);
      END_STATE();
    case 36:
      if (lookahead == '-')
        ADVANCE(37);
      if (lookahead == 'a')
        ADVANCE(43);
      if (lookahead == 'b')
        ADVANCE(56);
      if (lookahead == 'c')
        ADVANCE(62);
      if (lookahead == 'd')
        ADVANCE(74);
      if (lookahead == 'e')
        ADVANCE(82);
      if (lookahead == 'f')
        ADVANCE(89);
      if (lookahead == 'g')
        ADVANCE(112);
      if (lookahead == 'i')
        ADVANCE(118);
      if (lookahead == 'l')
        ADVANCE(135);
      if (lookahead == 'm')
        ADVANCE(145);
      if (lookahead == 'n')
        ADVANCE(150);
      if (lookahead == 'r')
        ADVANCE(158);
      if (lookahead == 's')
        ADVANCE(176);
      if (lookahead == 't')
        ADVANCE(194);
      if (lookahead == 'v')
        ADVANCE(196);
      END_STATE();
    case 37:
      if (lookahead == '-')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == '-')
        ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '-')
        ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == '-')
        ADVANCE(41);
      if (lookahead == '>')
        ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(39);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-')
        ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(39);
      END_STATE();
    case 43:
      if (lookahead == 's')
        ADVANCE(44);
      if (lookahead == 't')
        ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == 's')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'i')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'g')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'n')
        ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT_POUNDassign);
      END_STATE();
    case 49:
      if (lookahead == 't')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'e')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'm')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'p')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 't')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == '>')
        ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LT_POUNDattempt_GT);
      END_STATE();
    case 56:
      if (lookahead == 'r')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'e')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'a')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'k')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == '>')
        ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_break);
      END_STATE();
    case 62:
      if (lookahead == 'a')
        ADVANCE(63);
      if (lookahead == 'o')
        ADVANCE(66);
      END_STATE();
    case 63:
      if (lookahead == 's')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'e')
        ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LT_POUNDcase);
      END_STATE();
    case 66:
      if (lookahead == 'n')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 't')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'i')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'n')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'u')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'e')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == '>')
        ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_continue);
      END_STATE();
    case 74:
      if (lookahead == 'e')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 'f')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'a')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 'u')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'l')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 't')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == '>')
        ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT_POUNDdefault_GT);
      END_STATE();
    case 82:
      if (lookahead == 'l')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 's')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'e')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == '>')
        ADVANCE(86);
      if (lookahead == 'i')
        ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LT_POUNDelse_GT);
      END_STATE();
    case 87:
      if (lookahead == 'f')
        ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LT_POUNDelseif);
      END_STATE();
    case 89:
      if (lookahead == 'a')
        ADVANCE(90);
      if (lookahead == 'l')
        ADVANCE(98);
      if (lookahead == 't')
        ADVANCE(103);
      if (lookahead == 'u')
        ADVANCE(105);
      END_STATE();
    case 90:
      if (lookahead == 'l')
        ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'l')
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
      if (lookahead == 'c')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'k')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == '>')
        ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_fallback);
      END_STATE();
    case 98:
      if (lookahead == 'u')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 's')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'h')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == '>')
        ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_flush);
      END_STATE();
    case 103:
      if (lookahead == 'l')
        ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LT_POUNDftl);
      END_STATE();
    case 105:
      if (lookahead == 'n')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'c')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 't')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'i')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'o')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'n')
        ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LT_POUNDfunction);
      END_STATE();
    case 112:
      if (lookahead == 'l')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'o')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'b')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'a')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'l')
        ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LT_POUNDglobal);
      END_STATE();
    case 118:
      if (lookahead == 'f')
        ADVANCE(119);
      if (lookahead == 'm')
        ADVANCE(120);
      if (lookahead == 'n')
        ADVANCE(125);
      if (lookahead == 't')
        ADVANCE(131);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LT_POUNDif);
      END_STATE();
    case 120:
      if (lookahead == 'p')
        ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 'o')
        ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 'r')
        ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == 't')
        ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LT_POUNDimport);
      END_STATE();
    case 125:
      if (lookahead == 'c')
        ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == 'l')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == 'u')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'd')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'e')
        ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LT_POUNDinclude);
      END_STATE();
    case 131:
      if (lookahead == 'e')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 'm')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 's')
        ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LT_POUNDitems);
      END_STATE();
    case 135:
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'o')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(143);
      END_STATE();
    case 136:
      if (lookahead == 's')
        ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == 't')
        ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LT_POUNDlist);
      END_STATE();
    case 139:
      if (lookahead == 'c')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == 'a')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == 'l')
        ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LT_POUNDlocal);
      END_STATE();
    case 143:
      if (lookahead == '>')
        ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_lt);
      END_STATE();
    case 145:
      if (lookahead == 'a')
        ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'c')
        ADVANCE(147);
      END_STATE();
    case 147:
      if (lookahead == 'r')
        ADVANCE(148);
      END_STATE();
    case 148:
      if (lookahead == 'o')
        ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LT_POUNDmacro);
      END_STATE();
    case 150:
      if (lookahead == 'e')
        ADVANCE(151);
      if (lookahead == 't')
        ADVANCE(156);
      END_STATE();
    case 151:
      if (lookahead == 's')
        ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 't')
        ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == 'e')
        ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == 'd')
        ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LT_POUNDnested);
      END_STATE();
    case 156:
      if (lookahead == '>')
        ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_nt);
      END_STATE();
    case 158:
      if (lookahead == 'e')
        ADVANCE(159);
      if (lookahead == 't')
        ADVANCE(174);
      END_STATE();
    case 159:
      if (lookahead == 'c')
        ADVANCE(160);
      if (lookahead == 't')
        ADVANCE(170);
      END_STATE();
    case 160:
      if (lookahead == 'o')
        ADVANCE(161);
      if (lookahead == 'u')
        ADVANCE(166);
      END_STATE();
    case 161:
      if (lookahead == 'v')
        ADVANCE(162);
      END_STATE();
    case 162:
      if (lookahead == 'e')
        ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == 'r')
        ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == '>')
        ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_recover);
      END_STATE();
    case 166:
      if (lookahead == 'r')
        ADVANCE(167);
      END_STATE();
    case 167:
      if (lookahead == 's')
        ADVANCE(168);
      END_STATE();
    case 168:
      if (lookahead == 'e')
        ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LT_POUNDrecurse);
      END_STATE();
    case 170:
      if (lookahead == 'u')
        ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == 'r')
        ADVANCE(172);
      END_STATE();
    case 172:
      if (lookahead == 'n')
        ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_LT_POUNDreturn);
      END_STATE();
    case 174:
      if (lookahead == '>')
        ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_rt);
      END_STATE();
    case 176:
      if (lookahead == 'e')
        ADVANCE(177);
      if (lookahead == 't')
        ADVANCE(185);
      if (lookahead == 'w')
        ADVANCE(189);
      END_STATE();
    case 177:
      if (lookahead == 'p')
        ADVANCE(178);
      if (lookahead == 't')
        ADVANCE(180);
      END_STATE();
    case 178:
      if (lookahead == '>')
        ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_LT_POUNDsep_GT);
      END_STATE();
    case 180:
      if (lookahead == 't')
        ADVANCE(181);
      END_STATE();
    case 181:
      if (lookahead == 'i')
        ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == 'n')
        ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == 'g')
        ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LT_POUNDsetting);
      END_STATE();
    case 185:
      if (lookahead == 'o')
        ADVANCE(186);
      END_STATE();
    case 186:
      if (lookahead == 'p')
        ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == '>')
        ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_stop);
      END_STATE();
    case 189:
      if (lookahead == 'i')
        ADVANCE(190);
      END_STATE();
    case 190:
      if (lookahead == 't')
        ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == 'c')
        ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == 'h')
        ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_LT_POUNDswitch);
      END_STATE();
    case 194:
      if (lookahead == '>')
        ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_t);
      END_STATE();
    case 196:
      if (lookahead == 'i')
        ADVANCE(197);
      END_STATE();
    case 197:
      if (lookahead == 's')
        ADVANCE(198);
      END_STATE();
    case 198:
      if (lookahead == 'i')
        ADVANCE(199);
      END_STATE();
    case 199:
      if (lookahead == 't')
        ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_LT_POUNDvisit);
      END_STATE();
    case 201:
      if (lookahead == '#')
        ADVANCE(202);
      END_STATE();
    case 202:
      if (lookahead == 'a')
        ADVANCE(203);
      if (lookahead == 'f')
        ADVANCE(217);
      if (lookahead == 'g')
        ADVANCE(226);
      if (lookahead == 'i')
        ADVANCE(233);
      if (lookahead == 'l')
        ADVANCE(241);
      if (lookahead == 'm')
        ADVANCE(251);
      if (lookahead == 's')
        ADVANCE(257);
      END_STATE();
    case 203:
      if (lookahead == 's')
        ADVANCE(204);
      if (lookahead == 't')
        ADVANCE(210);
      END_STATE();
    case 204:
      if (lookahead == 's')
        ADVANCE(205);
      END_STATE();
    case 205:
      if (lookahead == 'i')
        ADVANCE(206);
      END_STATE();
    case 206:
      if (lookahead == 'g')
        ADVANCE(207);
      END_STATE();
    case 207:
      if (lookahead == 'n')
        ADVANCE(208);
      END_STATE();
    case 208:
      if (lookahead == '>')
        ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_end_assign);
      END_STATE();
    case 210:
      if (lookahead == 't')
        ADVANCE(211);
      END_STATE();
    case 211:
      if (lookahead == 'e')
        ADVANCE(212);
      END_STATE();
    case 212:
      if (lookahead == 'm')
        ADVANCE(213);
      END_STATE();
    case 213:
      if (lookahead == 'p')
        ADVANCE(214);
      END_STATE();
    case 214:
      if (lookahead == 't')
        ADVANCE(215);
      END_STATE();
    case 215:
      if (lookahead == '>')
        ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDattempt_GT);
      END_STATE();
    case 217:
      if (lookahead == 'u')
        ADVANCE(218);
      END_STATE();
    case 218:
      if (lookahead == 'n')
        ADVANCE(219);
      END_STATE();
    case 219:
      if (lookahead == 'c')
        ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead == 't')
        ADVANCE(221);
      END_STATE();
    case 221:
      if (lookahead == 'i')
        ADVANCE(222);
      END_STATE();
    case 222:
      if (lookahead == 'o')
        ADVANCE(223);
      END_STATE();
    case 223:
      if (lookahead == 'n')
        ADVANCE(224);
      END_STATE();
    case 224:
      if (lookahead == '>')
        ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDfunction_GT);
      END_STATE();
    case 226:
      if (lookahead == 'l')
        ADVANCE(227);
      END_STATE();
    case 227:
      if (lookahead == 'o')
        ADVANCE(228);
      END_STATE();
    case 228:
      if (lookahead == 'b')
        ADVANCE(229);
      END_STATE();
    case 229:
      if (lookahead == 'a')
        ADVANCE(230);
      END_STATE();
    case 230:
      if (lookahead == 'l')
        ADVANCE(231);
      END_STATE();
    case 231:
      if (lookahead == '>')
        ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_end_global);
      END_STATE();
    case 233:
      if (lookahead == 'f')
        ADVANCE(234);
      if (lookahead == 't')
        ADVANCE(236);
      END_STATE();
    case 234:
      if (lookahead == '>')
        ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDif_GT);
      END_STATE();
    case 236:
      if (lookahead == 'e')
        ADVANCE(237);
      END_STATE();
    case 237:
      if (lookahead == 'm')
        ADVANCE(238);
      END_STATE();
    case 238:
      if (lookahead == 's')
        ADVANCE(239);
      END_STATE();
    case 239:
      if (lookahead == '>')
        ADVANCE(240);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDitems_GT);
      END_STATE();
    case 241:
      if (lookahead == 'i')
        ADVANCE(242);
      if (lookahead == 'o')
        ADVANCE(246);
      END_STATE();
    case 242:
      if (lookahead == 's')
        ADVANCE(243);
      END_STATE();
    case 243:
      if (lookahead == 't')
        ADVANCE(244);
      END_STATE();
    case 244:
      if (lookahead == '>')
        ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDlist_GT);
      END_STATE();
    case 246:
      if (lookahead == 'c')
        ADVANCE(247);
      END_STATE();
    case 247:
      if (lookahead == 'a')
        ADVANCE(248);
      END_STATE();
    case 248:
      if (lookahead == 'l')
        ADVANCE(249);
      END_STATE();
    case 249:
      if (lookahead == '>')
        ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_end_local);
      END_STATE();
    case 251:
      if (lookahead == 'a')
        ADVANCE(252);
      END_STATE();
    case 252:
      if (lookahead == 'c')
        ADVANCE(253);
      END_STATE();
    case 253:
      if (lookahead == 'r')
        ADVANCE(254);
      END_STATE();
    case 254:
      if (lookahead == 'o')
        ADVANCE(255);
      END_STATE();
    case 255:
      if (lookahead == '>')
        ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDmacro_GT);
      END_STATE();
    case 257:
      if (lookahead == 'e')
        ADVANCE(258);
      if (lookahead == 'w')
        ADVANCE(261);
      END_STATE();
    case 258:
      if (lookahead == 'p')
        ADVANCE(259);
      END_STATE();
    case 259:
      if (lookahead == '>')
        ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDsep_GT);
      END_STATE();
    case 261:
      if (lookahead == 'i')
        ADVANCE(262);
      END_STATE();
    case 262:
      if (lookahead == 't')
        ADVANCE(263);
      END_STATE();
    case 263:
      if (lookahead == 'c')
        ADVANCE(264);
      END_STATE();
    case 264:
      if (lookahead == 'h')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == '>')
        ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDswitch_GT);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 272:
      if (lookahead == '?')
        ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 276:
      if (lookahead == 's')
        ADVANCE(277);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 278:
      if (lookahead == 'a')
        ADVANCE(279);
      END_STATE();
    case 279:
      if (lookahead == 'l')
        ADVANCE(280);
      END_STATE();
    case 280:
      if (lookahead == 's')
        ADVANCE(281);
      END_STATE();
    case 281:
      if (lookahead == 'e')
        ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 283:
      if (lookahead == 't')
        ADVANCE(284);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_gt);
      if (lookahead == 'e')
        ADVANCE(285);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_gte);
      END_STATE();
    case 286:
      if (lookahead == 't')
        ADVANCE(287);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_lt);
      if (lookahead == 'e')
        ADVANCE(288);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_lte);
      END_STATE();
    case 289:
      if (lookahead == 'r')
        ADVANCE(290);
      END_STATE();
    case 290:
      if (lookahead == 'u')
        ADVANCE(291);
      END_STATE();
    case 291:
      if (lookahead == 'e')
        ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 293:
      if (lookahead == 's')
        ADVANCE(294);
      END_STATE();
    case 294:
      if (lookahead == 'i')
        ADVANCE(295);
      END_STATE();
    case 295:
      if (lookahead == 'n')
        ADVANCE(296);
      END_STATE();
    case 296:
      if (lookahead == 'g')
        ADVANCE(297);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 299:
      if (lookahead == '|')
        ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 303:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(303);
      END_STATE();
    case 304:
      if (lookahead == '#')
        ADVANCE(305);
      if (lookahead == '/')
        ADVANCE(313);
      END_STATE();
    case 305:
      if (lookahead == '-')
        ADVANCE(37);
      if (lookahead == 'a')
        ADVANCE(43);
      if (lookahead == 'f')
        ADVANCE(89);
      if (lookahead == 'g')
        ADVANCE(112);
      if (lookahead == 'i')
        ADVANCE(306);
      if (lookahead == 'l')
        ADVANCE(135);
      if (lookahead == 'm')
        ADVANCE(145);
      if (lookahead == 'n')
        ADVANCE(307);
      if (lookahead == 'r')
        ADVANCE(308);
      if (lookahead == 's')
        ADVANCE(311);
      if (lookahead == 't')
        ADVANCE(194);
      if (lookahead == 'v')
        ADVANCE(196);
      END_STATE();
    case 306:
      if (lookahead == 'f')
        ADVANCE(119);
      if (lookahead == 'm')
        ADVANCE(120);
      if (lookahead == 'n')
        ADVANCE(125);
      END_STATE();
    case 307:
      if (lookahead == 't')
        ADVANCE(156);
      END_STATE();
    case 308:
      if (lookahead == 'e')
        ADVANCE(309);
      if (lookahead == 't')
        ADVANCE(174);
      END_STATE();
    case 309:
      if (lookahead == 'c')
        ADVANCE(310);
      END_STATE();
    case 310:
      if (lookahead == 'u')
        ADVANCE(166);
      END_STATE();
    case 311:
      if (lookahead == 'e')
        ADVANCE(312);
      if (lookahead == 't')
        ADVANCE(185);
      if (lookahead == 'w')
        ADVANCE(189);
      END_STATE();
    case 312:
      if (lookahead == 't')
        ADVANCE(180);
      END_STATE();
    case 313:
      if (lookahead == '#')
        ADVANCE(314);
      END_STATE();
    case 314:
      if (lookahead == 'a')
        ADVANCE(315);
      if (lookahead == 'g')
        ADVANCE(226);
      if (lookahead == 'l')
        ADVANCE(316);
      END_STATE();
    case 315:
      if (lookahead == 's')
        ADVANCE(204);
      END_STATE();
    case 316:
      if (lookahead == 'o')
        ADVANCE(246);
      END_STATE();
    case 317:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '*')
        ADVANCE(18);
      if (lookahead == '+')
        ADVANCE(20);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(24);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead == '/')
        ADVANCE(32);
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(318);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '>')
        ADVANCE(270);
      if (lookahead == '?')
        ADVANCE(272);
      if (lookahead == '[')
        ADVANCE(274);
      if (lookahead == 'a')
        ADVANCE(319);
      if (lookahead == 'g')
        ADVANCE(322);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 't')
        ADVANCE(328);
      if (lookahead == 'u')
        ADVANCE(332);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '|')
        ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(317);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(321);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=')
        ADVANCE(267);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_top_level);
      if (lookahead == 's')
        ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(321);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(321);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_top_level);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_top_level);
      if (lookahead == 't')
        ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(321);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_gt);
      if (lookahead == 'e')
        ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(321);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_gte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(321);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_top_level);
      if (lookahead == 't')
        ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(321);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_lt);
      if (lookahead == 'e')
        ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(321);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_lte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(321);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_top_level);
      if (lookahead == 'r')
        ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(321);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_top_level);
      if (lookahead == 'u')
        ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(321);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_top_level);
      if (lookahead == 'e')
        ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(321);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(321);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_top_level);
      if (lookahead == 's')
        ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(321);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_top_level);
      if (lookahead == 'i')
        ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(321);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_top_level);
      if (lookahead == 'n')
        ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(321);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_top_level);
      if (lookahead == 'g')
        ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(321);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_using);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(321);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(321);
      END_STATE();
    case 338:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(339);
      if (lookahead == '<')
        ADVANCE(340);
      if (lookahead == '[')
        ADVANCE(274);
      if (lookahead == 't')
        ADVANCE(328);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(338);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(321);
      END_STATE();
    case 339:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 340:
      if (lookahead == '#')
        ADVANCE(341);
      if (lookahead == '/')
        ADVANCE(344);
      END_STATE();
    case 341:
      if (lookahead == 'a')
        ADVANCE(43);
      if (lookahead == 'f')
        ADVANCE(89);
      if (lookahead == 'g')
        ADVANCE(112);
      if (lookahead == 'i')
        ADVANCE(306);
      if (lookahead == 'l')
        ADVANCE(135);
      if (lookahead == 'm')
        ADVANCE(145);
      if (lookahead == 'n')
        ADVANCE(307);
      if (lookahead == 'r')
        ADVANCE(342);
      if (lookahead == 's')
        ADVANCE(311);
      if (lookahead == 't')
        ADVANCE(194);
      if (lookahead == 'v')
        ADVANCE(196);
      END_STATE();
    case 342:
      if (lookahead == 'e')
        ADVANCE(343);
      if (lookahead == 't')
        ADVANCE(174);
      END_STATE();
    case 343:
      if (lookahead == 'c')
        ADVANCE(160);
      END_STATE();
    case 344:
      if (lookahead == '#')
        ADVANCE(345);
      END_STATE();
    case 345:
      if (lookahead == 'a')
        ADVANCE(203);
      if (lookahead == 'g')
        ADVANCE(226);
      if (lookahead == 'l')
        ADVANCE(316);
      END_STATE();
    case 346:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(346);
      END_STATE();
    case 347:
      if (lookahead == '#')
        ADVANCE(36);
      if (lookahead == '/')
        ADVANCE(348);
      END_STATE();
    case 348:
      if (lookahead == '#')
        ADVANCE(349);
      END_STATE();
    case 349:
      if (lookahead == 'a')
        ADVANCE(203);
      if (lookahead == 'f')
        ADVANCE(217);
      if (lookahead == 'g')
        ADVANCE(226);
      if (lookahead == 'i')
        ADVANCE(233);
      if (lookahead == 'l')
        ADVANCE(241);
      if (lookahead == 'm')
        ADVANCE(251);
      if (lookahead == 's')
        ADVANCE(350);
      END_STATE();
    case 350:
      if (lookahead == 'w')
        ADVANCE(261);
      END_STATE();
    case 351:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(351);
      END_STATE();
    case 352:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '*')
        ADVANCE(18);
      if (lookahead == '+')
        ADVANCE(20);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(24);
      if (lookahead == '.')
        ADVANCE(353);
      if (lookahead == '/')
        ADVANCE(32);
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(318);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '>')
        ADVANCE(270);
      if (lookahead == '?')
        ADVANCE(272);
      if (lookahead == 'a')
        ADVANCE(276);
      if (lookahead == 'g')
        ADVANCE(283);
      if (lookahead == 'l')
        ADVANCE(286);
      if (lookahead == 'u')
        ADVANCE(293);
      if (lookahead == '|')
        ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(352);
      END_STATE();
    case 353:
      if (lookahead == '.')
        ADVANCE(28);
      END_STATE();
    case 354:
      if (lookahead == 'f')
        ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(354);
      END_STATE();
    case 355:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(339);
      if (lookahead == '[')
        ADVANCE(274);
      if (lookahead == ']')
        ADVANCE(275);
      if (lookahead == 't')
        ADVANCE(328);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(355);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(321);
      END_STATE();
    case 356:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(339);
      if (lookahead == '[')
        ADVANCE(274);
      if (lookahead == 't')
        ADVANCE(328);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '}')
        ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(356);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(321);
      END_STATE();
    case 357:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(339);
      if (lookahead == '<')
        ADVANCE(358);
      if (lookahead == '[')
        ADVANCE(274);
      if (lookahead == 't')
        ADVANCE(328);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(357);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(321);
      END_STATE();
    case 358:
      if (lookahead == '#')
        ADVANCE(359);
      if (lookahead == '/')
        ADVANCE(360);
      END_STATE();
    case 359:
      if (lookahead == 'a')
        ADVANCE(43);
      if (lookahead == 'e')
        ADVANCE(82);
      if (lookahead == 'f')
        ADVANCE(89);
      if (lookahead == 'g')
        ADVANCE(112);
      if (lookahead == 'i')
        ADVANCE(306);
      if (lookahead == 'l')
        ADVANCE(135);
      if (lookahead == 'm')
        ADVANCE(145);
      if (lookahead == 'n')
        ADVANCE(307);
      if (lookahead == 'r')
        ADVANCE(308);
      if (lookahead == 's')
        ADVANCE(311);
      if (lookahead == 't')
        ADVANCE(194);
      if (lookahead == 'v')
        ADVANCE(196);
      END_STATE();
    case 360:
      if (lookahead == '#')
        ADVANCE(361);
      END_STATE();
    case 361:
      if (lookahead == 'a')
        ADVANCE(315);
      if (lookahead == 'g')
        ADVANCE(226);
      if (lookahead == 'i')
        ADVANCE(362);
      if (lookahead == 'l')
        ADVANCE(316);
      END_STATE();
    case 362:
      if (lookahead == 'f')
        ADVANCE(234);
      END_STATE();
    case 363:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(339);
      if (lookahead == '<')
        ADVANCE(364);
      if (lookahead == '[')
        ADVANCE(274);
      if (lookahead == 't')
        ADVANCE(328);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(363);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(321);
      END_STATE();
    case 364:
      if (lookahead == '#')
        ADVANCE(365);
      if (lookahead == '/')
        ADVANCE(368);
      END_STATE();
    case 365:
      if (lookahead == 'a')
        ADVANCE(43);
      if (lookahead == 'f')
        ADVANCE(89);
      if (lookahead == 'g')
        ADVANCE(112);
      if (lookahead == 'i')
        ADVANCE(306);
      if (lookahead == 'l')
        ADVANCE(135);
      if (lookahead == 'm')
        ADVANCE(145);
      if (lookahead == 'n')
        ADVANCE(307);
      if (lookahead == 'r')
        ADVANCE(366);
      if (lookahead == 's')
        ADVANCE(311);
      if (lookahead == 't')
        ADVANCE(194);
      if (lookahead == 'v')
        ADVANCE(196);
      END_STATE();
    case 366:
      if (lookahead == 'e')
        ADVANCE(367);
      if (lookahead == 't')
        ADVANCE(174);
      END_STATE();
    case 367:
      if (lookahead == 'c')
        ADVANCE(310);
      if (lookahead == 't')
        ADVANCE(170);
      END_STATE();
    case 368:
      if (lookahead == '#')
        ADVANCE(369);
      END_STATE();
    case 369:
      if (lookahead == 'a')
        ADVANCE(315);
      if (lookahead == 'f')
        ADVANCE(217);
      if (lookahead == 'g')
        ADVANCE(226);
      if (lookahead == 'l')
        ADVANCE(316);
      END_STATE();
    case 370:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(339);
      if (lookahead == '<')
        ADVANCE(371);
      if (lookahead == '[')
        ADVANCE(274);
      if (lookahead == 't')
        ADVANCE(328);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(370);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(321);
      END_STATE();
    case 371:
      if (lookahead == '#')
        ADVANCE(372);
      if (lookahead == '/')
        ADVANCE(373);
      END_STATE();
    case 372:
      if (lookahead == 'a')
        ADVANCE(43);
      if (lookahead == 'f')
        ADVANCE(89);
      if (lookahead == 'g')
        ADVANCE(112);
      if (lookahead == 'i')
        ADVANCE(306);
      if (lookahead == 'l')
        ADVANCE(135);
      if (lookahead == 'm')
        ADVANCE(145);
      if (lookahead == 'n')
        ADVANCE(150);
      if (lookahead == 'r')
        ADVANCE(366);
      if (lookahead == 's')
        ADVANCE(311);
      if (lookahead == 't')
        ADVANCE(194);
      if (lookahead == 'v')
        ADVANCE(196);
      END_STATE();
    case 373:
      if (lookahead == '#')
        ADVANCE(374);
      END_STATE();
    case 374:
      if (lookahead == 'a')
        ADVANCE(315);
      if (lookahead == 'g')
        ADVANCE(226);
      if (lookahead == 'l')
        ADVANCE(316);
      if (lookahead == 'm')
        ADVANCE(251);
      END_STATE();
    case 375:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(339);
      if (lookahead == '<')
        ADVANCE(347);
      if (lookahead == '[')
        ADVANCE(274);
      if (lookahead == 't')
        ADVANCE(328);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(375);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(321);
      END_STATE();
    case 376:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(339);
      if (lookahead == '>')
        ADVANCE(377);
      if (lookahead == '[')
        ADVANCE(274);
      if (lookahead == ']')
        ADVANCE(275);
      if (lookahead == 't')
        ADVANCE(328);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '}')
        ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(376);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(321);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 378:
      if (lookahead == '<')
        ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(378);
      END_STATE();
    case 379:
      if (lookahead == '#')
        ADVANCE(380);
      if (lookahead == '/')
        ADVANCE(386);
      END_STATE();
    case 380:
      if (lookahead == 'a')
        ADVANCE(43);
      if (lookahead == 'b')
        ADVANCE(56);
      if (lookahead == 'c')
        ADVANCE(381);
      if (lookahead == 'e')
        ADVANCE(382);
      if (lookahead == 'f')
        ADVANCE(89);
      if (lookahead == 'g')
        ADVANCE(112);
      if (lookahead == 'i')
        ADVANCE(118);
      if (lookahead == 'l')
        ADVANCE(135);
      if (lookahead == 'm')
        ADVANCE(145);
      if (lookahead == 'n')
        ADVANCE(307);
      if (lookahead == 'r')
        ADVANCE(308);
      if (lookahead == 's')
        ADVANCE(176);
      if (lookahead == 't')
        ADVANCE(194);
      if (lookahead == 'v')
        ADVANCE(196);
      END_STATE();
    case 381:
      if (lookahead == 'o')
        ADVANCE(66);
      END_STATE();
    case 382:
      if (lookahead == 'l')
        ADVANCE(383);
      END_STATE();
    case 383:
      if (lookahead == 's')
        ADVANCE(384);
      END_STATE();
    case 384:
      if (lookahead == 'e')
        ADVANCE(385);
      END_STATE();
    case 385:
      if (lookahead == '>')
        ADVANCE(86);
      END_STATE();
    case 386:
      if (lookahead == '#')
        ADVANCE(387);
      END_STATE();
    case 387:
      if (lookahead == 'a')
        ADVANCE(315);
      if (lookahead == 'g')
        ADVANCE(226);
      if (lookahead == 'l')
        ADVANCE(241);
      END_STATE();
    case 388:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(339);
      if (lookahead == '>')
        ADVANCE(377);
      if (lookahead == '[')
        ADVANCE(274);
      if (lookahead == 't')
        ADVANCE(328);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(388);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(321);
      END_STATE();
    case 389:
      if (lookahead == '<')
        ADVANCE(390);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(389);
      END_STATE();
    case 390:
      if (lookahead == '#')
        ADVANCE(391);
      if (lookahead == '/')
        ADVANCE(393);
      END_STATE();
    case 391:
      if (lookahead == 'a')
        ADVANCE(43);
      if (lookahead == 'b')
        ADVANCE(56);
      if (lookahead == 'c')
        ADVANCE(392);
      if (lookahead == 'd')
        ADVANCE(74);
      if (lookahead == 'f')
        ADVANCE(89);
      if (lookahead == 'g')
        ADVANCE(112);
      if (lookahead == 'i')
        ADVANCE(306);
      if (lookahead == 'l')
        ADVANCE(135);
      if (lookahead == 'm')
        ADVANCE(145);
      if (lookahead == 'n')
        ADVANCE(307);
      if (lookahead == 'r')
        ADVANCE(308);
      if (lookahead == 's')
        ADVANCE(311);
      if (lookahead == 't')
        ADVANCE(194);
      if (lookahead == 'v')
        ADVANCE(196);
      END_STATE();
    case 392:
      if (lookahead == 'a')
        ADVANCE(63);
      END_STATE();
    case 393:
      if (lookahead == '#')
        ADVANCE(394);
      END_STATE();
    case 394:
      if (lookahead == 'a')
        ADVANCE(315);
      if (lookahead == 'g')
        ADVANCE(226);
      if (lookahead == 'l')
        ADVANCE(316);
      if (lookahead == 's')
        ADVANCE(350);
      END_STATE();
    case 395:
      if (lookahead == '<')
        ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(395);
      END_STATE();
    case 396:
      if (lookahead == '#')
        ADVANCE(380);
      if (lookahead == '/')
        ADVANCE(397);
      END_STATE();
    case 397:
      if (lookahead == '#')
        ADVANCE(398);
      END_STATE();
    case 398:
      if (lookahead == 'a')
        ADVANCE(315);
      if (lookahead == 'g')
        ADVANCE(226);
      if (lookahead == 'i')
        ADVANCE(399);
      if (lookahead == 'l')
        ADVANCE(241);
      if (lookahead == 's')
        ADVANCE(400);
      END_STATE();
    case 399:
      if (lookahead == 't')
        ADVANCE(236);
      END_STATE();
    case 400:
      if (lookahead == 'e')
        ADVANCE(258);
      END_STATE();
    case 401:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(339);
      if (lookahead == '<')
        ADVANCE(402);
      if (lookahead == '[')
        ADVANCE(274);
      if (lookahead == 't')
        ADVANCE(328);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(401);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(321);
      END_STATE();
    case 402:
      if (lookahead == '#')
        ADVANCE(372);
      if (lookahead == '/')
        ADVANCE(403);
      END_STATE();
    case 403:
      if (lookahead == '#')
        ADVANCE(404);
      END_STATE();
    case 404:
      if (lookahead == 'a')
        ADVANCE(315);
      if (lookahead == 'f')
        ADVANCE(217);
      if (lookahead == 'g')
        ADVANCE(226);
      if (lookahead == 'l')
        ADVANCE(316);
      if (lookahead == 'm')
        ADVANCE(251);
      END_STATE();
    case 405:
      if (lookahead == '<')
        ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(405);
      END_STATE();
    case 406:
      if (lookahead == '#')
        ADVANCE(407);
      if (lookahead == '/')
        ADVANCE(408);
      END_STATE();
    case 407:
      if (lookahead == 'a')
        ADVANCE(43);
      if (lookahead == 'b')
        ADVANCE(56);
      if (lookahead == 'c')
        ADVANCE(381);
      if (lookahead == 'f')
        ADVANCE(89);
      if (lookahead == 'g')
        ADVANCE(112);
      if (lookahead == 'i')
        ADVANCE(306);
      if (lookahead == 'l')
        ADVANCE(135);
      if (lookahead == 'm')
        ADVANCE(145);
      if (lookahead == 'n')
        ADVANCE(307);
      if (lookahead == 'r')
        ADVANCE(308);
      if (lookahead == 's')
        ADVANCE(176);
      if (lookahead == 't')
        ADVANCE(194);
      if (lookahead == 'v')
        ADVANCE(196);
      END_STATE();
    case 408:
      if (lookahead == '#')
        ADVANCE(409);
      END_STATE();
    case 409:
      if (lookahead == 'a')
        ADVANCE(315);
      if (lookahead == 'g')
        ADVANCE(226);
      if (lookahead == 'i')
        ADVANCE(399);
      if (lookahead == 'l')
        ADVANCE(316);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 303},
  [2] = {.lex_state = 317},
  [3] = {.lex_state = 317},
  [4] = {.lex_state = 317},
  [5] = {.lex_state = 317},
  [6] = {.lex_state = 317},
  [7] = {.lex_state = 338},
  [8] = {.lex_state = 346},
  [9] = {.lex_state = 317},
  [10] = {.lex_state = 317},
  [11] = {.lex_state = 317},
  [12] = {.lex_state = 317},
  [13] = {.lex_state = 317},
  [14] = {.lex_state = 317},
  [15] = {.lex_state = 317},
  [16] = {.lex_state = 346},
  [17] = {.lex_state = 317},
  [18] = {.lex_state = 346},
  [19] = {.lex_state = 317},
  [20] = {.lex_state = 346},
  [21] = {.lex_state = 351},
  [22] = {.lex_state = 303},
  [23] = {.lex_state = 338},
  [24] = {.lex_state = 352},
  [25] = {.lex_state = 352},
  [26] = {.lex_state = 354},
  [27] = {.lex_state = 355},
  [28] = {.lex_state = 356},
  [29] = {.lex_state = 352},
  [30] = {.lex_state = 317},
  [31] = {.lex_state = 317},
  [32] = {.lex_state = 352},
  [33] = {.lex_state = 338},
  [34] = {.lex_state = 357},
  [35] = {.lex_state = 352},
  [36] = {.lex_state = 338},
  [37] = {.lex_state = 317},
  [38] = {.lex_state = 317},
  [39] = {.lex_state = 363},
  [40] = {.lex_state = 317},
  [41] = {.lex_state = 370},
  [42] = {.lex_state = 317},
  [43] = {.lex_state = 346},
  [44] = {.lex_state = 338},
  [45] = {.lex_state = 338},
  [46] = {.lex_state = 375},
  [47] = {.lex_state = 317},
  [48] = {.lex_state = 375},
  [49] = {.lex_state = 317},
  [50] = {.lex_state = 375},
  [51] = {.lex_state = 317},
  [52] = {.lex_state = 375},
  [53] = {.lex_state = 317},
  [54] = {.lex_state = 375},
  [55] = {.lex_state = 317},
  [56] = {.lex_state = 375},
  [57] = {.lex_state = 317},
  [58] = {.lex_state = 375},
  [59] = {.lex_state = 317},
  [60] = {.lex_state = 375},
  [61] = {.lex_state = 317},
  [62] = {.lex_state = 375},
  [63] = {.lex_state = 317},
  [64] = {.lex_state = 303},
  [65] = {.lex_state = 352},
  [66] = {.lex_state = 376},
  [67] = {.lex_state = 376},
  [68] = {.lex_state = 354},
  [69] = {.lex_state = 355},
  [70] = {.lex_state = 352},
  [71] = {.lex_state = 356},
  [72] = {.lex_state = 376},
  [73] = {.lex_state = 355},
  [74] = {.lex_state = 355},
  [75] = {.lex_state = 352},
  [76] = {.lex_state = 356},
  [77] = {.lex_state = 317},
  [78] = {.lex_state = 352},
  [79] = {.lex_state = 378},
  [80] = {.lex_state = 338},
  [81] = {.lex_state = 388},
  [82] = {.lex_state = 357},
  [83] = {.lex_state = 346},
  [84] = {.lex_state = 317},
  [85] = {.lex_state = 357},
  [86] = {.lex_state = 357},
  [87] = {.lex_state = 357},
  [88] = {.lex_state = 338},
  [89] = {.lex_state = 317},
  [90] = {.lex_state = 317},
  [91] = {.lex_state = 354},
  [92] = {.lex_state = 355},
  [93] = {.lex_state = 356},
  [94] = {.lex_state = 317},
  [95] = {.lex_state = 317},
  [96] = {.lex_state = 357},
  [97] = {.lex_state = 317},
  [98] = {.lex_state = 389},
  [99] = {.lex_state = 346},
  [100] = {.lex_state = 317},
  [101] = {.lex_state = 363},
  [102] = {.lex_state = 363},
  [103] = {.lex_state = 363},
  [104] = {.lex_state = 346},
  [105] = {.lex_state = 317},
  [106] = {.lex_state = 370},
  [107] = {.lex_state = 370},
  [108] = {.lex_state = 370},
  [109] = {.lex_state = 346},
  [110] = {.lex_state = 338},
  [111] = {.lex_state = 375},
  [112] = {.lex_state = 375},
  [113] = {.lex_state = 375},
  [114] = {.lex_state = 375},
  [115] = {.lex_state = 375},
  [116] = {.lex_state = 375},
  [117] = {.lex_state = 375},
  [118] = {.lex_state = 375},
  [119] = {.lex_state = 375},
  [120] = {.lex_state = 376},
  [121] = {.lex_state = 376},
  [122] = {.lex_state = 355},
  [123] = {.lex_state = 376},
  [124] = {.lex_state = 356},
  [125] = {.lex_state = 317},
  [126] = {.lex_state = 376},
  [127] = {.lex_state = 355},
  [128] = {.lex_state = 352},
  [129] = {.lex_state = 355},
  [130] = {.lex_state = 352},
  [131] = {.lex_state = 356},
  [132] = {.lex_state = 352},
  [133] = {.lex_state = 352},
  [134] = {.lex_state = 338},
  [135] = {.lex_state = 317},
  [136] = {.lex_state = 346},
  [137] = {.lex_state = 378},
  [138] = {.lex_state = 378},
  [139] = {.lex_state = 317},
  [140] = {.lex_state = 395},
  [141] = {.lex_state = 378},
  [142] = {.lex_state = 395},
  [143] = {.lex_state = 378},
  [144] = {.lex_state = 388},
  [145] = {.lex_state = 388},
  [146] = {.lex_state = 357},
  [147] = {.lex_state = 357},
  [148] = {.lex_state = 317},
  [149] = {.lex_state = 346},
  [150] = {.lex_state = 357},
  [151] = {.lex_state = 357},
  [152] = {.lex_state = 317},
  [153] = {.lex_state = 317},
  [154] = {.lex_state = 317},
  [155] = {.lex_state = 355},
  [156] = {.lex_state = 317},
  [157] = {.lex_state = 356},
  [158] = {.lex_state = 317},
  [159] = {.lex_state = 317},
  [160] = {.lex_state = 317},
  [161] = {.lex_state = 357},
  [162] = {.lex_state = 346},
  [163] = {.lex_state = 317},
  [164] = {.lex_state = 389},
  [165] = {.lex_state = 389},
  [166] = {.lex_state = 389},
  [167] = {.lex_state = 389},
  [168] = {.lex_state = 401},
  [169] = {.lex_state = 317},
  [170] = {.lex_state = 346},
  [171] = {.lex_state = 363},
  [172] = {.lex_state = 363},
  [173] = {.lex_state = 370},
  [174] = {.lex_state = 317},
  [175] = {.lex_state = 346},
  [176] = {.lex_state = 370},
  [177] = {.lex_state = 370},
  [178] = {.lex_state = 376},
  [179] = {.lex_state = 376},
  [180] = {.lex_state = 376},
  [181] = {.lex_state = 317},
  [182] = {.lex_state = 338},
  [183] = {.lex_state = 317},
  [184] = {.lex_state = 352},
  [185] = {.lex_state = 317},
  [186] = {.lex_state = 378},
  [187] = {.lex_state = 317},
  [188] = {.lex_state = 395},
  [189] = {.lex_state = 346},
  [190] = {.lex_state = 378},
  [191] = {.lex_state = 378},
  [192] = {.lex_state = 357},
  [193] = {.lex_state = 357},
  [194] = {.lex_state = 346},
  [195] = {.lex_state = 317},
  [196] = {.lex_state = 317},
  [197] = {.lex_state = 317},
  [198] = {.lex_state = 317},
  [199] = {.lex_state = 357},
  [200] = {.lex_state = 317},
  [201] = {.lex_state = 389},
  [202] = {.lex_state = 346},
  [203] = {.lex_state = 389},
  [204] = {.lex_state = 389},
  [205] = {.lex_state = 401},
  [206] = {.lex_state = 346},
  [207] = {.lex_state = 370},
  [208] = {.lex_state = 346},
  [209] = {.lex_state = 376},
  [210] = {.lex_state = 317},
  [211] = {.lex_state = 317},
  [212] = {.lex_state = 378},
  [213] = {.lex_state = 405},
  [214] = {.lex_state = 346},
  [215] = {.lex_state = 317},
  [216] = {.lex_state = 346},
  [217] = {.lex_state = 389},
  [218] = {.lex_state = 389},
  [219] = {.lex_state = 346},
  [220] = {.lex_state = 405},
  [221] = {.lex_state = 378},
  [222] = {.lex_state = 405},
  [223] = {.lex_state = 389},
  [224] = {.lex_state = 389},
  [225] = {.lex_state = 378},
  [226] = {.lex_state = 405},
  [227] = {.lex_state = 389},
  [228] = {.lex_state = 389},
  [229] = {.lex_state = 389},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(3),
    [anon_sym_DOT_DOT_LT] = ACTIONS(1),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(3),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_lt] = ACTIONS(3),
    [anon_sym_lte] = ACTIONS(1),
    [anon_sym_gt] = ACTIONS(3),
    [anon_sym_gte] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_QMARK_QMARK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_spec_var] = ACTIONS(1),
    [anon_sym_LT_POUNDlist] = ACTIONS(1),
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
    [sym_parameter_group] = STATE(30),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_operator] = STATE(33),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [3] = {
    [sym_parameter_group] = STATE(37),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(35),
    [sym_operator] = STATE(36),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(37),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [4] = {
    [sym_parameter_group] = STATE(38),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_operator] = STATE(33),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [5] = {
    [sym_parameter_group] = STATE(40),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(35),
    [sym_operator] = STATE(36),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(40),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(67),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [6] = {
    [sym_parameter_group] = STATE(42),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(35),
    [sym_operator] = STATE(36),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(42),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [7] = {
    [sym_directive] = STATE(44),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_attempt_middle] = STATE(45),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_attempt_repeat1] = STATE(45),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(19),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(71),
    [sym_recover] = ACTIONS(73),
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
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_comment] = ACTIONS(75),
    [anon_sym_LT_POUNDlist] = ACTIONS(75),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(75),
    [sym_break] = ACTIONS(75),
    [sym_continue] = ACTIONS(75),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(75),
    [anon_sym_LT_POUNDitems] = ACTIONS(75),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(75),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(75),
    [anon_sym_LT_POUNDif] = ACTIONS(75),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(75),
    [anon_sym_LT_POUNDelseif] = ACTIONS(75),
    [anon_sym_LT_POUNDswitch] = ACTIONS(75),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(75),
    [anon_sym_LT_POUNDcase] = ACTIONS(75),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(75),
    [anon_sym_LT_POUNDfunction] = ACTIONS(75),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(75),
    [anon_sym_LT_POUNDreturn] = ACTIONS(75),
    [anon_sym_LT_POUNDmacro] = ACTIONS(75),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(75),
    [anon_sym_LT_POUNDnested] = ACTIONS(75),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(75),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(75),
    [sym_recover] = ACTIONS(75),
    [sym_fallback] = ACTIONS(75),
    [sym_flush] = ACTIONS(75),
    [anon_sym_LT_POUNDftl] = ACTIONS(75),
    [anon_sym_LT_POUNDimport] = ACTIONS(75),
    [anon_sym_LT_POUNDinclude] = ACTIONS(75),
    [sym_lt] = ACTIONS(75),
    [sym_nt] = ACTIONS(75),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(75),
    [sym_rt] = ACTIONS(75),
    [anon_sym_LT_POUNDsetting] = ACTIONS(75),
    [sym_stop] = ACTIONS(75),
    [sym_t] = ACTIONS(75),
    [anon_sym_LT_POUNDvisit] = ACTIONS(75),
    [anon_sym_LT_POUNDassign] = ACTIONS(75),
    [sym_end_assign] = ACTIONS(75),
    [anon_sym_LT_POUNDglobal] = ACTIONS(75),
    [sym_end_global] = ACTIONS(75),
    [anon_sym_LT_POUNDlocal] = ACTIONS(75),
    [sym_end_local] = ACTIONS(75),
  },
  [9] = {
    [sym_parameter_group] = STATE(47),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(35),
    [sym_operator] = STATE(36),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(47),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [10] = {
    [sym_parameter_group] = STATE(49),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(35),
    [sym_operator] = STATE(36),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(49),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [11] = {
    [sym_parameter_group] = STATE(51),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(35),
    [sym_operator] = STATE(36),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(51),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [12] = {
    [sym_parameter_group] = STATE(53),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(35),
    [sym_operator] = STATE(36),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(53),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [13] = {
    [sym_parameter_group] = STATE(55),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(35),
    [sym_operator] = STATE(36),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(55),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [14] = {
    [sym_parameter_group] = STATE(57),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(35),
    [sym_operator] = STATE(36),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(57),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [15] = {
    [sym_parameter_group] = STATE(59),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(35),
    [sym_operator] = STATE(36),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(59),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [16] = {
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
  [17] = {
    [sym_parameter_group] = STATE(61),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(35),
    [sym_operator] = STATE(36),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(61),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LT_POUNDlist] = ACTIONS(95),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(95),
    [sym_break] = ACTIONS(95),
    [sym_continue] = ACTIONS(95),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(95),
    [anon_sym_LT_POUNDitems] = ACTIONS(95),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(95),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(95),
    [anon_sym_LT_POUNDif] = ACTIONS(95),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(95),
    [anon_sym_LT_POUNDelseif] = ACTIONS(95),
    [anon_sym_LT_POUNDswitch] = ACTIONS(95),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(95),
    [anon_sym_LT_POUNDcase] = ACTIONS(95),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(95),
    [anon_sym_LT_POUNDfunction] = ACTIONS(95),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(95),
    [anon_sym_LT_POUNDreturn] = ACTIONS(95),
    [anon_sym_LT_POUNDmacro] = ACTIONS(95),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(95),
    [anon_sym_LT_POUNDnested] = ACTIONS(95),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(95),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(95),
    [sym_recover] = ACTIONS(95),
    [sym_fallback] = ACTIONS(95),
    [sym_flush] = ACTIONS(95),
    [anon_sym_LT_POUNDftl] = ACTIONS(95),
    [anon_sym_LT_POUNDimport] = ACTIONS(95),
    [anon_sym_LT_POUNDinclude] = ACTIONS(95),
    [sym_lt] = ACTIONS(95),
    [sym_nt] = ACTIONS(95),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(95),
    [sym_rt] = ACTIONS(95),
    [anon_sym_LT_POUNDsetting] = ACTIONS(95),
    [sym_stop] = ACTIONS(95),
    [sym_t] = ACTIONS(95),
    [anon_sym_LT_POUNDvisit] = ACTIONS(95),
    [anon_sym_LT_POUNDassign] = ACTIONS(95),
    [sym_end_assign] = ACTIONS(95),
    [anon_sym_LT_POUNDglobal] = ACTIONS(95),
    [sym_end_global] = ACTIONS(95),
    [anon_sym_LT_POUNDlocal] = ACTIONS(95),
    [sym_end_local] = ACTIONS(95),
  },
  [19] = {
    [sym_parameter_group] = STATE(63),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(35),
    [sym_operator] = STATE(36),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(63),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(97),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_comment] = ACTIONS(99),
    [anon_sym_LT_POUNDlist] = ACTIONS(99),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(99),
    [sym_break] = ACTIONS(99),
    [sym_continue] = ACTIONS(99),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(99),
    [anon_sym_LT_POUNDitems] = ACTIONS(99),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(99),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(99),
    [anon_sym_LT_POUNDif] = ACTIONS(99),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(99),
    [anon_sym_LT_POUNDelseif] = ACTIONS(99),
    [anon_sym_LT_POUNDswitch] = ACTIONS(99),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(99),
    [anon_sym_LT_POUNDcase] = ACTIONS(99),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(99),
    [anon_sym_LT_POUNDfunction] = ACTIONS(99),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(99),
    [anon_sym_LT_POUNDreturn] = ACTIONS(99),
    [anon_sym_LT_POUNDmacro] = ACTIONS(99),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(99),
    [anon_sym_LT_POUNDnested] = ACTIONS(99),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(99),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(99),
    [sym_recover] = ACTIONS(99),
    [sym_fallback] = ACTIONS(99),
    [sym_flush] = ACTIONS(99),
    [anon_sym_LT_POUNDftl] = ACTIONS(99),
    [anon_sym_LT_POUNDimport] = ACTIONS(99),
    [anon_sym_LT_POUNDinclude] = ACTIONS(99),
    [sym_lt] = ACTIONS(99),
    [sym_nt] = ACTIONS(99),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(99),
    [sym_rt] = ACTIONS(99),
    [anon_sym_LT_POUNDsetting] = ACTIONS(99),
    [sym_stop] = ACTIONS(99),
    [sym_t] = ACTIONS(99),
    [anon_sym_LT_POUNDvisit] = ACTIONS(99),
    [anon_sym_LT_POUNDassign] = ACTIONS(99),
    [sym_end_assign] = ACTIONS(99),
    [anon_sym_LT_POUNDglobal] = ACTIONS(99),
    [sym_end_global] = ACTIONS(99),
    [anon_sym_LT_POUNDlocal] = ACTIONS(99),
    [sym_end_local] = ACTIONS(99),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(101),
  },
  [22] = {
    [sym__definition] = STATE(64),
    [sym_directive] = STATE(64),
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
    [aux_sym_source_file_repeat1] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(103),
    [sym_comment] = ACTIONS(105),
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
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_top_level] = ACTIONS(109),
    [sym_spec_var] = ACTIONS(107),
  },
  [24] = {
    [anon_sym_as] = ACTIONS(111),
    [anon_sym_using] = ACTIONS(111),
    [anon_sym_COMMA] = ACTIONS(111),
    [anon_sym_DOT_DOT] = ACTIONS(113),
    [anon_sym_DOT_DOT_LT] = ACTIONS(111),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(111),
    [anon_sym_COLON] = ACTIONS(111),
    [anon_sym_STAR] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(113),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_PERCENT] = ACTIONS(113),
    [anon_sym_EQ_EQ] = ACTIONS(111),
    [anon_sym_BANG_EQ] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_GT_EQ] = ACTIONS(111),
    [anon_sym_LT_EQ] = ACTIONS(111),
    [anon_sym_lt] = ACTIONS(113),
    [anon_sym_lte] = ACTIONS(111),
    [anon_sym_gt] = ACTIONS(113),
    [anon_sym_gte] = ACTIONS(111),
    [anon_sym_BANG] = ACTIONS(113),
    [anon_sym_AMP_AMP] = ACTIONS(111),
    [anon_sym_PIPE_PIPE] = ACTIONS(111),
    [anon_sym_QMARK_QMARK] = ACTIONS(111),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_PLUS_EQ] = ACTIONS(111),
    [anon_sym_DASH_EQ] = ACTIONS(111),
    [anon_sym_STAR_EQ] = ACTIONS(111),
    [anon_sym_SLASH_EQ] = ACTIONS(111),
    [anon_sym_PERCENT_EQ] = ACTIONS(111),
    [anon_sym_PLUS_PLUS] = ACTIONS(111),
    [anon_sym_DASH_DASH] = ACTIONS(111),
  },
  [25] = {
    [anon_sym_as] = ACTIONS(115),
    [anon_sym_using] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_DOT_DOT] = ACTIONS(117),
    [anon_sym_DOT_DOT_LT] = ACTIONS(115),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(115),
    [anon_sym_COLON] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_PERCENT] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(115),
    [anon_sym_BANG_EQ] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(115),
    [anon_sym_LT_EQ] = ACTIONS(115),
    [anon_sym_lt] = ACTIONS(117),
    [anon_sym_lte] = ACTIONS(115),
    [anon_sym_gt] = ACTIONS(117),
    [anon_sym_gte] = ACTIONS(115),
    [anon_sym_BANG] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(115),
    [anon_sym_PIPE_PIPE] = ACTIONS(115),
    [anon_sym_QMARK_QMARK] = ACTIONS(115),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_PLUS_EQ] = ACTIONS(115),
    [anon_sym_DASH_EQ] = ACTIONS(115),
    [anon_sym_STAR_EQ] = ACTIONS(115),
    [anon_sym_SLASH_EQ] = ACTIONS(115),
    [anon_sym_PERCENT_EQ] = ACTIONS(115),
    [anon_sym_PLUS_PLUS] = ACTIONS(115),
    [anon_sym_DASH_DASH] = ACTIONS(115),
  },
  [26] = {
    [anon_sym_false] = ACTIONS(119),
  },
  [27] = {
    [sym_expression] = STATE(73),
    [sym_string] = STATE(67),
    [sym_boolean] = STATE(67),
    [sym_sequence] = STATE(67),
    [sym_hash] = STATE(67),
    [sym_method] = STATE(67),
    [aux_sym_sequence_repeat1] = STATE(74),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_RBRACK] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym_top_level] = ACTIONS(133),
    [sym_spec_var] = ACTIONS(135),
  },
  [28] = {
    [sym_expression] = STATE(76),
    [sym_string] = STATE(67),
    [sym_boolean] = STATE(67),
    [sym_sequence] = STATE(67),
    [sym_hash] = STATE(67),
    [sym_method] = STATE(67),
    [aux_sym_unary_expression_repeat1] = STATE(76),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(137),
    [sym_top_level] = ACTIONS(133),
    [sym_spec_var] = ACTIONS(135),
  },
  [29] = {
    [sym_group] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_as] = ACTIONS(115),
    [anon_sym_using] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_DOT_DOT] = ACTIONS(117),
    [anon_sym_DOT_DOT_LT] = ACTIONS(115),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(115),
    [anon_sym_COLON] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_PERCENT] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(115),
    [anon_sym_BANG_EQ] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(115),
    [anon_sym_LT_EQ] = ACTIONS(115),
    [anon_sym_lt] = ACTIONS(117),
    [anon_sym_lte] = ACTIONS(115),
    [anon_sym_gt] = ACTIONS(117),
    [anon_sym_gte] = ACTIONS(115),
    [anon_sym_BANG] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(115),
    [anon_sym_PIPE_PIPE] = ACTIONS(115),
    [anon_sym_QMARK_QMARK] = ACTIONS(115),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_PLUS_EQ] = ACTIONS(115),
    [anon_sym_DASH_EQ] = ACTIONS(115),
    [anon_sym_STAR_EQ] = ACTIONS(115),
    [anon_sym_SLASH_EQ] = ACTIONS(115),
    [anon_sym_PERCENT_EQ] = ACTIONS(115),
    [anon_sym_PLUS_PLUS] = ACTIONS(115),
    [anon_sym_DASH_DASH] = ACTIONS(115),
  },
  [30] = {
    [anon_sym_GT] = ACTIONS(141),
  },
  [31] = {
    [anon_sym_RPAREN] = ACTIONS(143),
    [anon_sym_as] = ACTIONS(145),
    [anon_sym_using] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(145),
    [anon_sym_DOT_DOT_LT] = ACTIONS(143),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(145),
    [anon_sym_PLUS] = ACTIONS(145),
    [anon_sym_SLASH] = ACTIONS(145),
    [anon_sym_DASH] = ACTIONS(145),
    [anon_sym_PERCENT] = ACTIONS(145),
    [anon_sym_EQ_EQ] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_GT] = ACTIONS(145),
    [anon_sym_GT_EQ] = ACTIONS(143),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_lt] = ACTIONS(145),
    [anon_sym_lte] = ACTIONS(145),
    [anon_sym_gt] = ACTIONS(145),
    [anon_sym_gte] = ACTIONS(145),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_QMARK_QMARK] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(145),
    [anon_sym_PLUS_EQ] = ACTIONS(143),
    [anon_sym_DASH_EQ] = ACTIONS(143),
    [anon_sym_STAR_EQ] = ACTIONS(143),
    [anon_sym_SLASH_EQ] = ACTIONS(143),
    [anon_sym_PERCENT_EQ] = ACTIONS(143),
    [anon_sym_PLUS_PLUS] = ACTIONS(143),
    [anon_sym_DASH_DASH] = ACTIONS(143),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(143),
    [sym_number] = ACTIONS(145),
    [anon_sym_true] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(143),
    [sym_top_level] = ACTIONS(145),
    [sym_spec_var] = ACTIONS(143),
  },
  [32] = {
    [sym_operator] = STATE(80),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(49),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
  },
  [33] = {
    [sym_expression] = STATE(81),
    [sym_string] = STATE(67),
    [sym_boolean] = STATE(67),
    [sym_sequence] = STATE(67),
    [sym_hash] = STATE(67),
    [sym_method] = STATE(67),
    [aux_sym_unary_expression_repeat1] = STATE(81),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym_top_level] = ACTIONS(133),
    [sym_spec_var] = ACTIONS(135),
  },
  [34] = {
    [sym_directive] = STATE(85),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_if_else] = STATE(86),
    [sym_elseif] = STATE(85),
    [sym_if_middle] = STATE(87),
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
    [aux_sym_if_repeat1] = STATE(87),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_top_level] = ACTIONS(109),
    [sym_spec_var] = ACTIONS(107),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(147),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(149),
    [anon_sym_LT_POUNDelseif] = ACTIONS(151),
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
  [35] = {
    [sym_operator] = STATE(88),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(49),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
  },
  [36] = {
    [sym_expression] = STATE(95),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_method] = STATE(90),
    [aux_sym_unary_expression_repeat1] = STATE(95),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(153),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(153),
    [sym_number] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_LBRACE] = ACTIONS(161),
    [sym_top_level] = ACTIONS(163),
    [sym_spec_var] = ACTIONS(165),
  },
  [37] = {
    [sym_parameter_group] = STATE(97),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(35),
    [sym_operator] = STATE(36),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(97),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(167),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [38] = {
    [anon_sym_GT] = ACTIONS(169),
  },
  [39] = {
    [sym_directive] = STATE(101),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_function_middle] = STATE(102),
    [sym_return] = STATE(101),
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
    [aux_sym_function_repeat1] = STATE(102),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_top_level] = ACTIONS(109),
    [sym_spec_var] = ACTIONS(107),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(171),
    [anon_sym_LT_POUNDreturn] = ACTIONS(173),
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
  [40] = {
    [sym_parameter_group] = STATE(97),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(35),
    [sym_operator] = STATE(36),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(97),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(175),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [41] = {
    [sym_directive] = STATE(106),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_return] = STATE(106),
    [sym_macro] = STATE(8),
    [sym_macro_middle] = STATE(107),
    [sym_nested] = STATE(106),
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
    [aux_sym_macro_repeat1] = STATE(107),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_top_level] = ACTIONS(109),
    [sym_spec_var] = ACTIONS(107),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_POUNDreturn] = ACTIONS(173),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(177),
    [anon_sym_LT_POUNDnested] = ACTIONS(179),
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
  [42] = {
    [sym_parameter_group] = STATE(97),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(35),
    [sym_operator] = STATE(36),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(97),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(181),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [43] = {
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
  [44] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(185),
    [anon_sym_LT_POUNDif] = ACTIONS(185),
    [anon_sym_LT_POUNDswitch] = ACTIONS(185),
    [anon_sym_LT_POUNDfunction] = ACTIONS(185),
    [anon_sym_LT_POUNDmacro] = ACTIONS(185),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(185),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(185),
    [sym_recover] = ACTIONS(185),
    [sym_fallback] = ACTIONS(185),
    [sym_flush] = ACTIONS(185),
    [anon_sym_LT_POUNDftl] = ACTIONS(185),
    [anon_sym_LT_POUNDimport] = ACTIONS(185),
    [anon_sym_LT_POUNDinclude] = ACTIONS(185),
    [sym_lt] = ACTIONS(185),
    [sym_nt] = ACTIONS(185),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(185),
    [sym_rt] = ACTIONS(185),
    [anon_sym_LT_POUNDsetting] = ACTIONS(185),
    [sym_stop] = ACTIONS(185),
    [sym_t] = ACTIONS(185),
    [anon_sym_LT_POUNDvisit] = ACTIONS(185),
    [anon_sym_LT_POUNDassign] = ACTIONS(185),
    [sym_end_assign] = ACTIONS(185),
    [anon_sym_LT_POUNDglobal] = ACTIONS(185),
    [sym_end_global] = ACTIONS(185),
    [anon_sym_LT_POUNDlocal] = ACTIONS(185),
    [sym_end_local] = ACTIONS(185),
  },
  [45] = {
    [sym_directive] = STATE(44),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_attempt_middle] = STATE(110),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_attempt_repeat1] = STATE(110),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(19),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(187),
    [sym_recover] = ACTIONS(73),
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
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_comment] = ACTIONS(189),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_top_level] = ACTIONS(109),
    [sym_spec_var] = ACTIONS(107),
    [anon_sym_LT_POUNDlist] = ACTIONS(189),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(189),
    [sym_break] = ACTIONS(189),
    [sym_continue] = ACTIONS(189),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(189),
    [anon_sym_LT_POUNDitems] = ACTIONS(189),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(189),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(189),
    [anon_sym_LT_POUNDif] = ACTIONS(189),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(189),
    [anon_sym_LT_POUNDelseif] = ACTIONS(189),
    [anon_sym_LT_POUNDswitch] = ACTIONS(189),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(189),
    [anon_sym_LT_POUNDcase] = ACTIONS(189),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(189),
    [anon_sym_LT_POUNDfunction] = ACTIONS(189),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(189),
    [anon_sym_LT_POUNDreturn] = ACTIONS(189),
    [anon_sym_LT_POUNDmacro] = ACTIONS(189),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(189),
    [anon_sym_LT_POUNDnested] = ACTIONS(189),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(189),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(189),
    [sym_recover] = ACTIONS(189),
    [sym_fallback] = ACTIONS(189),
    [sym_flush] = ACTIONS(189),
    [anon_sym_LT_POUNDftl] = ACTIONS(189),
    [anon_sym_LT_POUNDimport] = ACTIONS(189),
    [anon_sym_LT_POUNDinclude] = ACTIONS(189),
    [sym_lt] = ACTIONS(189),
    [sym_nt] = ACTIONS(189),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(189),
    [sym_rt] = ACTIONS(189),
    [anon_sym_LT_POUNDsetting] = ACTIONS(189),
    [sym_stop] = ACTIONS(189),
    [sym_t] = ACTIONS(189),
    [anon_sym_LT_POUNDvisit] = ACTIONS(189),
    [anon_sym_LT_POUNDassign] = ACTIONS(189),
    [sym_end_assign] = ACTIONS(189),
    [anon_sym_LT_POUNDglobal] = ACTIONS(189),
    [sym_end_global] = ACTIONS(189),
    [anon_sym_LT_POUNDlocal] = ACTIONS(189),
    [sym_end_local] = ACTIONS(189),
  },
  [47] = {
    [sym_parameter_group] = STATE(97),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(35),
    [sym_operator] = STATE(36),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(97),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(191),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [sym_comment] = ACTIONS(193),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_top_level] = ACTIONS(109),
    [sym_spec_var] = ACTIONS(107),
    [anon_sym_LT_POUNDlist] = ACTIONS(193),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(193),
    [sym_break] = ACTIONS(193),
    [sym_continue] = ACTIONS(193),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(193),
    [anon_sym_LT_POUNDitems] = ACTIONS(193),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(193),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(193),
    [anon_sym_LT_POUNDif] = ACTIONS(193),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(193),
    [anon_sym_LT_POUNDelseif] = ACTIONS(193),
    [anon_sym_LT_POUNDswitch] = ACTIONS(193),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(193),
    [anon_sym_LT_POUNDcase] = ACTIONS(193),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(193),
    [anon_sym_LT_POUNDfunction] = ACTIONS(193),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(193),
    [anon_sym_LT_POUNDreturn] = ACTIONS(193),
    [anon_sym_LT_POUNDmacro] = ACTIONS(193),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(193),
    [anon_sym_LT_POUNDnested] = ACTIONS(193),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(193),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(193),
    [sym_recover] = ACTIONS(193),
    [sym_fallback] = ACTIONS(193),
    [sym_flush] = ACTIONS(193),
    [anon_sym_LT_POUNDftl] = ACTIONS(193),
    [anon_sym_LT_POUNDimport] = ACTIONS(193),
    [anon_sym_LT_POUNDinclude] = ACTIONS(193),
    [sym_lt] = ACTIONS(193),
    [sym_nt] = ACTIONS(193),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(193),
    [sym_rt] = ACTIONS(193),
    [anon_sym_LT_POUNDsetting] = ACTIONS(193),
    [sym_stop] = ACTIONS(193),
    [sym_t] = ACTIONS(193),
    [anon_sym_LT_POUNDvisit] = ACTIONS(193),
    [anon_sym_LT_POUNDassign] = ACTIONS(193),
    [sym_end_assign] = ACTIONS(193),
    [anon_sym_LT_POUNDglobal] = ACTIONS(193),
    [sym_end_global] = ACTIONS(193),
    [anon_sym_LT_POUNDlocal] = ACTIONS(193),
    [sym_end_local] = ACTIONS(193),
  },
  [49] = {
    [sym_parameter_group] = STATE(97),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(35),
    [sym_operator] = STATE(36),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(97),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(195),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [sym_comment] = ACTIONS(197),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_top_level] = ACTIONS(109),
    [sym_spec_var] = ACTIONS(107),
    [anon_sym_LT_POUNDlist] = ACTIONS(197),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(197),
    [sym_break] = ACTIONS(197),
    [sym_continue] = ACTIONS(197),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(197),
    [anon_sym_LT_POUNDitems] = ACTIONS(197),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(197),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(197),
    [anon_sym_LT_POUNDif] = ACTIONS(197),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(197),
    [anon_sym_LT_POUNDelseif] = ACTIONS(197),
    [anon_sym_LT_POUNDswitch] = ACTIONS(197),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(197),
    [anon_sym_LT_POUNDcase] = ACTIONS(197),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(197),
    [anon_sym_LT_POUNDfunction] = ACTIONS(197),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(197),
    [anon_sym_LT_POUNDreturn] = ACTIONS(197),
    [anon_sym_LT_POUNDmacro] = ACTIONS(197),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(197),
    [anon_sym_LT_POUNDnested] = ACTIONS(197),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(197),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(197),
    [sym_recover] = ACTIONS(197),
    [sym_fallback] = ACTIONS(197),
    [sym_flush] = ACTIONS(197),
    [anon_sym_LT_POUNDftl] = ACTIONS(197),
    [anon_sym_LT_POUNDimport] = ACTIONS(197),
    [anon_sym_LT_POUNDinclude] = ACTIONS(197),
    [sym_lt] = ACTIONS(197),
    [sym_nt] = ACTIONS(197),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(197),
    [sym_rt] = ACTIONS(197),
    [anon_sym_LT_POUNDsetting] = ACTIONS(197),
    [sym_stop] = ACTIONS(197),
    [sym_t] = ACTIONS(197),
    [anon_sym_LT_POUNDvisit] = ACTIONS(197),
    [anon_sym_LT_POUNDassign] = ACTIONS(197),
    [sym_end_assign] = ACTIONS(197),
    [anon_sym_LT_POUNDglobal] = ACTIONS(197),
    [sym_end_global] = ACTIONS(197),
    [anon_sym_LT_POUNDlocal] = ACTIONS(197),
    [sym_end_local] = ACTIONS(197),
  },
  [51] = {
    [sym_parameter_group] = STATE(97),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(35),
    [sym_operator] = STATE(36),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(97),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(199),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [sym_comment] = ACTIONS(201),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_top_level] = ACTIONS(109),
    [sym_spec_var] = ACTIONS(107),
    [anon_sym_LT_POUNDlist] = ACTIONS(201),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(201),
    [sym_break] = ACTIONS(201),
    [sym_continue] = ACTIONS(201),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(201),
    [anon_sym_LT_POUNDitems] = ACTIONS(201),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(201),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(201),
    [anon_sym_LT_POUNDif] = ACTIONS(201),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(201),
    [anon_sym_LT_POUNDelseif] = ACTIONS(201),
    [anon_sym_LT_POUNDswitch] = ACTIONS(201),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(201),
    [anon_sym_LT_POUNDcase] = ACTIONS(201),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(201),
    [anon_sym_LT_POUNDfunction] = ACTIONS(201),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(201),
    [anon_sym_LT_POUNDreturn] = ACTIONS(201),
    [anon_sym_LT_POUNDmacro] = ACTIONS(201),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(201),
    [anon_sym_LT_POUNDnested] = ACTIONS(201),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(201),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(201),
    [sym_recover] = ACTIONS(201),
    [sym_fallback] = ACTIONS(201),
    [sym_flush] = ACTIONS(201),
    [anon_sym_LT_POUNDftl] = ACTIONS(201),
    [anon_sym_LT_POUNDimport] = ACTIONS(201),
    [anon_sym_LT_POUNDinclude] = ACTIONS(201),
    [sym_lt] = ACTIONS(201),
    [sym_nt] = ACTIONS(201),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(201),
    [sym_rt] = ACTIONS(201),
    [anon_sym_LT_POUNDsetting] = ACTIONS(201),
    [sym_stop] = ACTIONS(201),
    [sym_t] = ACTIONS(201),
    [anon_sym_LT_POUNDvisit] = ACTIONS(201),
    [anon_sym_LT_POUNDassign] = ACTIONS(201),
    [sym_end_assign] = ACTIONS(201),
    [anon_sym_LT_POUNDglobal] = ACTIONS(201),
    [sym_end_global] = ACTIONS(201),
    [anon_sym_LT_POUNDlocal] = ACTIONS(201),
    [sym_end_local] = ACTIONS(201),
  },
  [53] = {
    [sym_parameter_group] = STATE(97),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(35),
    [sym_operator] = STATE(36),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(97),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(203),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [sym_comment] = ACTIONS(205),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_top_level] = ACTIONS(109),
    [sym_spec_var] = ACTIONS(107),
    [anon_sym_LT_POUNDlist] = ACTIONS(205),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(205),
    [sym_break] = ACTIONS(205),
    [sym_continue] = ACTIONS(205),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(205),
    [anon_sym_LT_POUNDitems] = ACTIONS(205),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(205),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(205),
    [anon_sym_LT_POUNDif] = ACTIONS(205),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(205),
    [anon_sym_LT_POUNDelseif] = ACTIONS(205),
    [anon_sym_LT_POUNDswitch] = ACTIONS(205),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(205),
    [anon_sym_LT_POUNDcase] = ACTIONS(205),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(205),
    [anon_sym_LT_POUNDfunction] = ACTIONS(205),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(205),
    [anon_sym_LT_POUNDreturn] = ACTIONS(205),
    [anon_sym_LT_POUNDmacro] = ACTIONS(205),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(205),
    [anon_sym_LT_POUNDnested] = ACTIONS(205),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(205),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(205),
    [sym_recover] = ACTIONS(205),
    [sym_fallback] = ACTIONS(205),
    [sym_flush] = ACTIONS(205),
    [anon_sym_LT_POUNDftl] = ACTIONS(205),
    [anon_sym_LT_POUNDimport] = ACTIONS(205),
    [anon_sym_LT_POUNDinclude] = ACTIONS(205),
    [sym_lt] = ACTIONS(205),
    [sym_nt] = ACTIONS(205),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(205),
    [sym_rt] = ACTIONS(205),
    [anon_sym_LT_POUNDsetting] = ACTIONS(205),
    [sym_stop] = ACTIONS(205),
    [sym_t] = ACTIONS(205),
    [anon_sym_LT_POUNDvisit] = ACTIONS(205),
    [anon_sym_LT_POUNDassign] = ACTIONS(205),
    [sym_end_assign] = ACTIONS(205),
    [anon_sym_LT_POUNDglobal] = ACTIONS(205),
    [sym_end_global] = ACTIONS(205),
    [anon_sym_LT_POUNDlocal] = ACTIONS(205),
    [sym_end_local] = ACTIONS(205),
  },
  [55] = {
    [sym_parameter_group] = STATE(97),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(35),
    [sym_operator] = STATE(36),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(97),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(207),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [sym_comment] = ACTIONS(209),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_top_level] = ACTIONS(109),
    [sym_spec_var] = ACTIONS(107),
    [anon_sym_LT_POUNDlist] = ACTIONS(209),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(209),
    [sym_break] = ACTIONS(209),
    [sym_continue] = ACTIONS(209),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(209),
    [anon_sym_LT_POUNDitems] = ACTIONS(209),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(209),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(209),
    [anon_sym_LT_POUNDif] = ACTIONS(209),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(209),
    [anon_sym_LT_POUNDelseif] = ACTIONS(209),
    [anon_sym_LT_POUNDswitch] = ACTIONS(209),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(209),
    [anon_sym_LT_POUNDcase] = ACTIONS(209),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(209),
    [anon_sym_LT_POUNDfunction] = ACTIONS(209),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(209),
    [anon_sym_LT_POUNDreturn] = ACTIONS(209),
    [anon_sym_LT_POUNDmacro] = ACTIONS(209),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(209),
    [anon_sym_LT_POUNDnested] = ACTIONS(209),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(209),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(209),
    [sym_recover] = ACTIONS(209),
    [sym_fallback] = ACTIONS(209),
    [sym_flush] = ACTIONS(209),
    [anon_sym_LT_POUNDftl] = ACTIONS(209),
    [anon_sym_LT_POUNDimport] = ACTIONS(209),
    [anon_sym_LT_POUNDinclude] = ACTIONS(209),
    [sym_lt] = ACTIONS(209),
    [sym_nt] = ACTIONS(209),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(209),
    [sym_rt] = ACTIONS(209),
    [anon_sym_LT_POUNDsetting] = ACTIONS(209),
    [sym_stop] = ACTIONS(209),
    [sym_t] = ACTIONS(209),
    [anon_sym_LT_POUNDvisit] = ACTIONS(209),
    [anon_sym_LT_POUNDassign] = ACTIONS(209),
    [sym_end_assign] = ACTIONS(209),
    [anon_sym_LT_POUNDglobal] = ACTIONS(209),
    [sym_end_global] = ACTIONS(209),
    [anon_sym_LT_POUNDlocal] = ACTIONS(209),
    [sym_end_local] = ACTIONS(209),
  },
  [57] = {
    [sym_parameter_group] = STATE(97),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(35),
    [sym_operator] = STATE(36),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(97),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(211),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [sym_comment] = ACTIONS(213),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_top_level] = ACTIONS(109),
    [sym_spec_var] = ACTIONS(107),
    [anon_sym_LT_POUNDlist] = ACTIONS(213),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(213),
    [sym_break] = ACTIONS(213),
    [sym_continue] = ACTIONS(213),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(213),
    [anon_sym_LT_POUNDitems] = ACTIONS(213),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(213),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(213),
    [anon_sym_LT_POUNDif] = ACTIONS(213),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(213),
    [anon_sym_LT_POUNDelseif] = ACTIONS(213),
    [anon_sym_LT_POUNDswitch] = ACTIONS(213),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(213),
    [anon_sym_LT_POUNDcase] = ACTIONS(213),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(213),
    [anon_sym_LT_POUNDfunction] = ACTIONS(213),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(213),
    [anon_sym_LT_POUNDreturn] = ACTIONS(213),
    [anon_sym_LT_POUNDmacro] = ACTIONS(213),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(213),
    [anon_sym_LT_POUNDnested] = ACTIONS(213),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(213),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(213),
    [sym_recover] = ACTIONS(213),
    [sym_fallback] = ACTIONS(213),
    [sym_flush] = ACTIONS(213),
    [anon_sym_LT_POUNDftl] = ACTIONS(213),
    [anon_sym_LT_POUNDimport] = ACTIONS(213),
    [anon_sym_LT_POUNDinclude] = ACTIONS(213),
    [sym_lt] = ACTIONS(213),
    [sym_nt] = ACTIONS(213),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(213),
    [sym_rt] = ACTIONS(213),
    [anon_sym_LT_POUNDsetting] = ACTIONS(213),
    [sym_stop] = ACTIONS(213),
    [sym_t] = ACTIONS(213),
    [anon_sym_LT_POUNDvisit] = ACTIONS(213),
    [anon_sym_LT_POUNDassign] = ACTIONS(213),
    [sym_end_assign] = ACTIONS(213),
    [anon_sym_LT_POUNDglobal] = ACTIONS(213),
    [sym_end_global] = ACTIONS(213),
    [anon_sym_LT_POUNDlocal] = ACTIONS(213),
    [sym_end_local] = ACTIONS(213),
  },
  [59] = {
    [sym_parameter_group] = STATE(97),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(35),
    [sym_operator] = STATE(36),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(97),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [sym_comment] = ACTIONS(217),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_top_level] = ACTIONS(109),
    [sym_spec_var] = ACTIONS(107),
    [anon_sym_LT_POUNDlist] = ACTIONS(217),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(217),
    [sym_break] = ACTIONS(217),
    [sym_continue] = ACTIONS(217),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(217),
    [anon_sym_LT_POUNDitems] = ACTIONS(217),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(217),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(217),
    [anon_sym_LT_POUNDif] = ACTIONS(217),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(217),
    [anon_sym_LT_POUNDelseif] = ACTIONS(217),
    [anon_sym_LT_POUNDswitch] = ACTIONS(217),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(217),
    [anon_sym_LT_POUNDcase] = ACTIONS(217),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(217),
    [anon_sym_LT_POUNDfunction] = ACTIONS(217),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(217),
    [anon_sym_LT_POUNDreturn] = ACTIONS(217),
    [anon_sym_LT_POUNDmacro] = ACTIONS(217),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(217),
    [anon_sym_LT_POUNDnested] = ACTIONS(217),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(217),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(217),
    [sym_recover] = ACTIONS(217),
    [sym_fallback] = ACTIONS(217),
    [sym_flush] = ACTIONS(217),
    [anon_sym_LT_POUNDftl] = ACTIONS(217),
    [anon_sym_LT_POUNDimport] = ACTIONS(217),
    [anon_sym_LT_POUNDinclude] = ACTIONS(217),
    [sym_lt] = ACTIONS(217),
    [sym_nt] = ACTIONS(217),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(217),
    [sym_rt] = ACTIONS(217),
    [anon_sym_LT_POUNDsetting] = ACTIONS(217),
    [sym_stop] = ACTIONS(217),
    [sym_t] = ACTIONS(217),
    [anon_sym_LT_POUNDvisit] = ACTIONS(217),
    [anon_sym_LT_POUNDassign] = ACTIONS(217),
    [sym_end_assign] = ACTIONS(217),
    [anon_sym_LT_POUNDglobal] = ACTIONS(217),
    [sym_end_global] = ACTIONS(217),
    [anon_sym_LT_POUNDlocal] = ACTIONS(217),
    [sym_end_local] = ACTIONS(217),
  },
  [61] = {
    [sym_parameter_group] = STATE(97),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(35),
    [sym_operator] = STATE(36),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(97),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [sym_comment] = ACTIONS(221),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_top_level] = ACTIONS(109),
    [sym_spec_var] = ACTIONS(107),
    [anon_sym_LT_POUNDlist] = ACTIONS(221),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(221),
    [sym_break] = ACTIONS(221),
    [sym_continue] = ACTIONS(221),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(221),
    [anon_sym_LT_POUNDitems] = ACTIONS(221),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(221),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(221),
    [anon_sym_LT_POUNDif] = ACTIONS(221),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(221),
    [anon_sym_LT_POUNDelseif] = ACTIONS(221),
    [anon_sym_LT_POUNDswitch] = ACTIONS(221),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(221),
    [anon_sym_LT_POUNDcase] = ACTIONS(221),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(221),
    [anon_sym_LT_POUNDfunction] = ACTIONS(221),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(221),
    [anon_sym_LT_POUNDreturn] = ACTIONS(221),
    [anon_sym_LT_POUNDmacro] = ACTIONS(221),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(221),
    [anon_sym_LT_POUNDnested] = ACTIONS(221),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(221),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(221),
    [sym_recover] = ACTIONS(221),
    [sym_fallback] = ACTIONS(221),
    [sym_flush] = ACTIONS(221),
    [anon_sym_LT_POUNDftl] = ACTIONS(221),
    [anon_sym_LT_POUNDimport] = ACTIONS(221),
    [anon_sym_LT_POUNDinclude] = ACTIONS(221),
    [sym_lt] = ACTIONS(221),
    [sym_nt] = ACTIONS(221),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(221),
    [sym_rt] = ACTIONS(221),
    [anon_sym_LT_POUNDsetting] = ACTIONS(221),
    [sym_stop] = ACTIONS(221),
    [sym_t] = ACTIONS(221),
    [anon_sym_LT_POUNDvisit] = ACTIONS(221),
    [anon_sym_LT_POUNDassign] = ACTIONS(221),
    [sym_end_assign] = ACTIONS(221),
    [anon_sym_LT_POUNDglobal] = ACTIONS(221),
    [sym_end_global] = ACTIONS(221),
    [anon_sym_LT_POUNDlocal] = ACTIONS(221),
    [sym_end_local] = ACTIONS(221),
  },
  [63] = {
    [sym_parameter_group] = STATE(97),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(35),
    [sym_operator] = STATE(36),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(97),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(223),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [64] = {
    [sym__definition] = STATE(64),
    [sym_directive] = STATE(64),
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
    [aux_sym_source_file_repeat1] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(225),
    [sym_comment] = ACTIONS(227),
    [anon_sym_LT_POUNDlist] = ACTIONS(230),
    [anon_sym_LT_POUNDif] = ACTIONS(233),
    [anon_sym_LT_POUNDswitch] = ACTIONS(236),
    [anon_sym_LT_POUNDfunction] = ACTIONS(239),
    [anon_sym_LT_POUNDmacro] = ACTIONS(242),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(245),
    [sym_fallback] = ACTIONS(248),
    [sym_flush] = ACTIONS(248),
    [anon_sym_LT_POUNDftl] = ACTIONS(251),
    [anon_sym_LT_POUNDimport] = ACTIONS(254),
    [anon_sym_LT_POUNDinclude] = ACTIONS(257),
    [sym_lt] = ACTIONS(248),
    [sym_nt] = ACTIONS(248),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(260),
    [sym_rt] = ACTIONS(248),
    [anon_sym_LT_POUNDsetting] = ACTIONS(263),
    [sym_stop] = ACTIONS(248),
    [sym_t] = ACTIONS(248),
    [anon_sym_LT_POUNDvisit] = ACTIONS(266),
    [anon_sym_LT_POUNDassign] = ACTIONS(269),
    [sym_end_assign] = ACTIONS(272),
    [anon_sym_LT_POUNDglobal] = ACTIONS(275),
    [sym_end_global] = ACTIONS(278),
    [anon_sym_LT_POUNDlocal] = ACTIONS(281),
    [sym_end_local] = ACTIONS(284),
  },
  [65] = {
    [anon_sym_as] = ACTIONS(287),
    [anon_sym_using] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(287),
    [anon_sym_DOT_DOT] = ACTIONS(289),
    [anon_sym_DOT_DOT_LT] = ACTIONS(287),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(287),
    [anon_sym_COLON] = ACTIONS(287),
    [anon_sym_STAR] = ACTIONS(289),
    [anon_sym_PLUS] = ACTIONS(289),
    [anon_sym_SLASH] = ACTIONS(289),
    [anon_sym_DASH] = ACTIONS(289),
    [anon_sym_PERCENT] = ACTIONS(289),
    [anon_sym_EQ_EQ] = ACTIONS(287),
    [anon_sym_BANG_EQ] = ACTIONS(287),
    [anon_sym_LT] = ACTIONS(289),
    [anon_sym_GT] = ACTIONS(289),
    [anon_sym_GT_EQ] = ACTIONS(287),
    [anon_sym_LT_EQ] = ACTIONS(287),
    [anon_sym_lt] = ACTIONS(289),
    [anon_sym_lte] = ACTIONS(287),
    [anon_sym_gt] = ACTIONS(289),
    [anon_sym_gte] = ACTIONS(287),
    [anon_sym_BANG] = ACTIONS(289),
    [anon_sym_AMP_AMP] = ACTIONS(287),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [anon_sym_QMARK_QMARK] = ACTIONS(287),
    [anon_sym_EQ] = ACTIONS(289),
    [anon_sym_PLUS_EQ] = ACTIONS(287),
    [anon_sym_DASH_EQ] = ACTIONS(287),
    [anon_sym_STAR_EQ] = ACTIONS(287),
    [anon_sym_SLASH_EQ] = ACTIONS(287),
    [anon_sym_PERCENT_EQ] = ACTIONS(287),
    [anon_sym_PLUS_PLUS] = ACTIONS(287),
    [anon_sym_DASH_DASH] = ACTIONS(287),
  },
  [66] = {
    [anon_sym_COMMA] = ACTIONS(111),
    [anon_sym_GT] = ACTIONS(111),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(111),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(111),
    [sym_number] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [sym_top_level] = ACTIONS(113),
    [sym_spec_var] = ACTIONS(111),
  },
  [67] = {
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(115),
    [sym_number] = ACTIONS(117),
    [anon_sym_true] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(115),
    [sym_top_level] = ACTIONS(117),
    [sym_spec_var] = ACTIONS(115),
  },
  [68] = {
    [anon_sym_false] = ACTIONS(291),
  },
  [69] = {
    [sym_expression] = STATE(73),
    [sym_string] = STATE(67),
    [sym_boolean] = STATE(67),
    [sym_sequence] = STATE(67),
    [sym_hash] = STATE(67),
    [sym_method] = STATE(67),
    [aux_sym_sequence_repeat1] = STATE(122),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_RBRACK] = ACTIONS(293),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym_top_level] = ACTIONS(133),
    [sym_spec_var] = ACTIONS(135),
  },
  [70] = {
    [anon_sym_as] = ACTIONS(295),
    [anon_sym_using] = ACTIONS(295),
    [anon_sym_COMMA] = ACTIONS(295),
    [anon_sym_DOT_DOT] = ACTIONS(297),
    [anon_sym_DOT_DOT_LT] = ACTIONS(295),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(295),
    [anon_sym_STAR] = ACTIONS(297),
    [anon_sym_PLUS] = ACTIONS(297),
    [anon_sym_SLASH] = ACTIONS(297),
    [anon_sym_DASH] = ACTIONS(297),
    [anon_sym_PERCENT] = ACTIONS(297),
    [anon_sym_EQ_EQ] = ACTIONS(295),
    [anon_sym_BANG_EQ] = ACTIONS(295),
    [anon_sym_LT] = ACTIONS(297),
    [anon_sym_GT] = ACTIONS(297),
    [anon_sym_GT_EQ] = ACTIONS(295),
    [anon_sym_LT_EQ] = ACTIONS(295),
    [anon_sym_lt] = ACTIONS(297),
    [anon_sym_lte] = ACTIONS(295),
    [anon_sym_gt] = ACTIONS(297),
    [anon_sym_gte] = ACTIONS(295),
    [anon_sym_BANG] = ACTIONS(297),
    [anon_sym_AMP_AMP] = ACTIONS(295),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_QMARK_QMARK] = ACTIONS(295),
    [anon_sym_EQ] = ACTIONS(297),
    [anon_sym_PLUS_EQ] = ACTIONS(295),
    [anon_sym_DASH_EQ] = ACTIONS(295),
    [anon_sym_STAR_EQ] = ACTIONS(295),
    [anon_sym_SLASH_EQ] = ACTIONS(295),
    [anon_sym_PERCENT_EQ] = ACTIONS(295),
    [anon_sym_PLUS_PLUS] = ACTIONS(295),
    [anon_sym_DASH_DASH] = ACTIONS(295),
  },
  [71] = {
    [sym_expression] = STATE(124),
    [sym_string] = STATE(67),
    [sym_boolean] = STATE(67),
    [sym_sequence] = STATE(67),
    [sym_hash] = STATE(67),
    [sym_method] = STATE(67),
    [aux_sym_unary_expression_repeat1] = STATE(124),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(299),
    [sym_top_level] = ACTIONS(133),
    [sym_spec_var] = ACTIONS(135),
  },
  [72] = {
    [sym_group] = STATE(126),
    [anon_sym_LPAREN] = ACTIONS(301),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(115),
    [sym_number] = ACTIONS(117),
    [anon_sym_true] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(115),
    [sym_top_level] = ACTIONS(117),
    [sym_spec_var] = ACTIONS(115),
  },
  [73] = {
    [anon_sym_COMMA] = ACTIONS(303),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(305),
    [sym_number] = ACTIONS(307),
    [anon_sym_true] = ACTIONS(307),
    [anon_sym_LBRACK] = ACTIONS(305),
    [anon_sym_RBRACK] = ACTIONS(305),
    [anon_sym_LBRACE] = ACTIONS(305),
    [sym_top_level] = ACTIONS(307),
    [sym_spec_var] = ACTIONS(305),
  },
  [74] = {
    [sym_expression] = STATE(73),
    [sym_string] = STATE(67),
    [sym_boolean] = STATE(67),
    [sym_sequence] = STATE(67),
    [sym_hash] = STATE(67),
    [sym_method] = STATE(67),
    [aux_sym_sequence_repeat1] = STATE(129),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_RBRACK] = ACTIONS(309),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym_top_level] = ACTIONS(133),
    [sym_spec_var] = ACTIONS(135),
  },
  [75] = {
    [anon_sym_as] = ACTIONS(311),
    [anon_sym_using] = ACTIONS(311),
    [anon_sym_COMMA] = ACTIONS(311),
    [anon_sym_DOT_DOT] = ACTIONS(313),
    [anon_sym_DOT_DOT_LT] = ACTIONS(311),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(311),
    [anon_sym_COLON] = ACTIONS(311),
    [anon_sym_STAR] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(313),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_DASH] = ACTIONS(313),
    [anon_sym_PERCENT] = ACTIONS(313),
    [anon_sym_EQ_EQ] = ACTIONS(311),
    [anon_sym_BANG_EQ] = ACTIONS(311),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_GT_EQ] = ACTIONS(311),
    [anon_sym_LT_EQ] = ACTIONS(311),
    [anon_sym_lt] = ACTIONS(313),
    [anon_sym_lte] = ACTIONS(311),
    [anon_sym_gt] = ACTIONS(313),
    [anon_sym_gte] = ACTIONS(311),
    [anon_sym_BANG] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(311),
    [anon_sym_PIPE_PIPE] = ACTIONS(311),
    [anon_sym_QMARK_QMARK] = ACTIONS(311),
    [anon_sym_EQ] = ACTIONS(313),
    [anon_sym_PLUS_EQ] = ACTIONS(311),
    [anon_sym_DASH_EQ] = ACTIONS(311),
    [anon_sym_STAR_EQ] = ACTIONS(311),
    [anon_sym_SLASH_EQ] = ACTIONS(311),
    [anon_sym_PERCENT_EQ] = ACTIONS(311),
    [anon_sym_PLUS_PLUS] = ACTIONS(311),
    [anon_sym_DASH_DASH] = ACTIONS(311),
  },
  [76] = {
    [sym_expression] = STATE(131),
    [sym_string] = STATE(67),
    [sym_boolean] = STATE(67),
    [sym_sequence] = STATE(67),
    [sym_hash] = STATE(67),
    [sym_method] = STATE(67),
    [aux_sym_unary_expression_repeat1] = STATE(131),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(315),
    [sym_top_level] = ACTIONS(133),
    [sym_spec_var] = ACTIONS(135),
  },
  [77] = {
    [sym_parameter_group] = STATE(135),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(133),
    [sym_operator] = STATE(134),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(135),
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [78] = {
    [anon_sym_as] = ACTIONS(319),
    [anon_sym_using] = ACTIONS(319),
    [anon_sym_COMMA] = ACTIONS(319),
    [anon_sym_DOT_DOT] = ACTIONS(321),
    [anon_sym_DOT_DOT_LT] = ACTIONS(319),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(319),
    [anon_sym_COLON] = ACTIONS(319),
    [anon_sym_STAR] = ACTIONS(321),
    [anon_sym_PLUS] = ACTIONS(321),
    [anon_sym_SLASH] = ACTIONS(321),
    [anon_sym_DASH] = ACTIONS(321),
    [anon_sym_PERCENT] = ACTIONS(321),
    [anon_sym_EQ_EQ] = ACTIONS(319),
    [anon_sym_BANG_EQ] = ACTIONS(319),
    [anon_sym_LT] = ACTIONS(321),
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_GT_EQ] = ACTIONS(319),
    [anon_sym_LT_EQ] = ACTIONS(319),
    [anon_sym_lt] = ACTIONS(321),
    [anon_sym_lte] = ACTIONS(319),
    [anon_sym_gt] = ACTIONS(321),
    [anon_sym_gte] = ACTIONS(319),
    [anon_sym_BANG] = ACTIONS(321),
    [anon_sym_AMP_AMP] = ACTIONS(319),
    [anon_sym_PIPE_PIPE] = ACTIONS(319),
    [anon_sym_QMARK_QMARK] = ACTIONS(319),
    [anon_sym_EQ] = ACTIONS(321),
    [anon_sym_PLUS_EQ] = ACTIONS(319),
    [anon_sym_DASH_EQ] = ACTIONS(319),
    [anon_sym_STAR_EQ] = ACTIONS(319),
    [anon_sym_SLASH_EQ] = ACTIONS(319),
    [anon_sym_PERCENT_EQ] = ACTIONS(319),
    [anon_sym_PLUS_PLUS] = ACTIONS(319),
    [anon_sym_DASH_DASH] = ACTIONS(319),
  },
  [79] = {
    [sym_directive] = STATE(137),
    [sym_list] = STATE(8),
    [sym_list_middle] = STATE(143),
    [sym_list_else] = STATE(141),
    [sym_items] = STATE(137),
    [sym_sep] = STATE(137),
    [sym_sep_block] = STATE(142),
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
    [aux_sym_list_repeat1] = STATE(143),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(323),
    [sym_break] = ACTIONS(325),
    [sym_continue] = ACTIONS(325),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(327),
    [anon_sym_LT_POUNDitems] = ACTIONS(329),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(331),
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
  [80] = {
    [sym_expression] = STATE(144),
    [sym_string] = STATE(67),
    [sym_boolean] = STATE(67),
    [sym_sequence] = STATE(67),
    [sym_hash] = STATE(67),
    [sym_method] = STATE(67),
    [aux_sym_unary_expression_repeat1] = STATE(144),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym_top_level] = ACTIONS(133),
    [sym_spec_var] = ACTIONS(135),
  },
  [81] = {
    [sym_expression] = STATE(145),
    [sym_string] = STATE(67),
    [sym_boolean] = STATE(67),
    [sym_sequence] = STATE(67),
    [sym_hash] = STATE(67),
    [sym_method] = STATE(67),
    [aux_sym_unary_expression_repeat1] = STATE(145),
    [anon_sym_GT] = ACTIONS(333),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym_top_level] = ACTIONS(133),
    [sym_spec_var] = ACTIONS(135),
  },
  [82] = {
    [sym_directive] = STATE(85),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_elseif] = STATE(85),
    [sym_if_middle] = STATE(146),
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
    [aux_sym_if_repeat1] = STATE(146),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(335),
    [anon_sym_LT_POUNDelseif] = ACTIONS(151),
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
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(337),
    [sym_comment] = ACTIONS(337),
    [anon_sym_LT_POUNDlist] = ACTIONS(337),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(337),
    [sym_break] = ACTIONS(337),
    [sym_continue] = ACTIONS(337),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(337),
    [anon_sym_LT_POUNDitems] = ACTIONS(337),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(337),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(337),
    [anon_sym_LT_POUNDif] = ACTIONS(337),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(337),
    [anon_sym_LT_POUNDelseif] = ACTIONS(337),
    [anon_sym_LT_POUNDswitch] = ACTIONS(337),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(337),
    [anon_sym_LT_POUNDcase] = ACTIONS(337),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(337),
    [anon_sym_LT_POUNDfunction] = ACTIONS(337),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(337),
    [anon_sym_LT_POUNDreturn] = ACTIONS(337),
    [anon_sym_LT_POUNDmacro] = ACTIONS(337),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(337),
    [anon_sym_LT_POUNDnested] = ACTIONS(337),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(337),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(337),
    [sym_recover] = ACTIONS(337),
    [sym_fallback] = ACTIONS(337),
    [sym_flush] = ACTIONS(337),
    [anon_sym_LT_POUNDftl] = ACTIONS(337),
    [anon_sym_LT_POUNDimport] = ACTIONS(337),
    [anon_sym_LT_POUNDinclude] = ACTIONS(337),
    [sym_lt] = ACTIONS(337),
    [sym_nt] = ACTIONS(337),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(337),
    [sym_rt] = ACTIONS(337),
    [anon_sym_LT_POUNDsetting] = ACTIONS(337),
    [sym_stop] = ACTIONS(337),
    [sym_t] = ACTIONS(337),
    [anon_sym_LT_POUNDvisit] = ACTIONS(337),
    [anon_sym_LT_POUNDassign] = ACTIONS(337),
    [sym_end_assign] = ACTIONS(337),
    [anon_sym_LT_POUNDglobal] = ACTIONS(337),
    [sym_end_global] = ACTIONS(337),
    [anon_sym_LT_POUNDlocal] = ACTIONS(337),
    [sym_end_local] = ACTIONS(337),
  },
  [84] = {
    [sym_parameter_group] = STATE(148),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(35),
    [sym_operator] = STATE(36),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(148),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(339),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [85] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(341),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(341),
    [anon_sym_LT_POUNDif] = ACTIONS(341),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(341),
    [anon_sym_LT_POUNDelseif] = ACTIONS(341),
    [anon_sym_LT_POUNDswitch] = ACTIONS(341),
    [anon_sym_LT_POUNDfunction] = ACTIONS(341),
    [anon_sym_LT_POUNDmacro] = ACTIONS(341),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(341),
    [sym_fallback] = ACTIONS(341),
    [sym_flush] = ACTIONS(341),
    [anon_sym_LT_POUNDftl] = ACTIONS(341),
    [anon_sym_LT_POUNDimport] = ACTIONS(341),
    [anon_sym_LT_POUNDinclude] = ACTIONS(341),
    [sym_lt] = ACTIONS(341),
    [sym_nt] = ACTIONS(341),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(341),
    [sym_rt] = ACTIONS(341),
    [anon_sym_LT_POUNDsetting] = ACTIONS(341),
    [sym_stop] = ACTIONS(341),
    [sym_t] = ACTIONS(341),
    [anon_sym_LT_POUNDvisit] = ACTIONS(341),
    [anon_sym_LT_POUNDassign] = ACTIONS(341),
    [sym_end_assign] = ACTIONS(341),
    [anon_sym_LT_POUNDglobal] = ACTIONS(341),
    [sym_end_global] = ACTIONS(341),
    [anon_sym_LT_POUNDlocal] = ACTIONS(341),
    [sym_end_local] = ACTIONS(341),
  },
  [86] = {
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(343),
  },
  [87] = {
    [sym_directive] = STATE(85),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_if_else] = STATE(150),
    [sym_elseif] = STATE(85),
    [sym_if_middle] = STATE(151),
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
    [aux_sym_if_repeat1] = STATE(151),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(147),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(343),
    [anon_sym_LT_POUNDelseif] = ACTIONS(151),
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
  [88] = {
    [sym_expression] = STATE(152),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_method] = STATE(90),
    [aux_sym_unary_expression_repeat1] = STATE(152),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(153),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(153),
    [sym_number] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_LBRACE] = ACTIONS(161),
    [sym_top_level] = ACTIONS(163),
    [sym_spec_var] = ACTIONS(165),
  },
  [89] = {
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_as] = ACTIONS(113),
    [anon_sym_using] = ACTIONS(113),
    [anon_sym_COMMA] = ACTIONS(111),
    [anon_sym_DOT_DOT] = ACTIONS(113),
    [anon_sym_DOT_DOT_LT] = ACTIONS(111),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(111),
    [anon_sym_COLON] = ACTIONS(111),
    [anon_sym_STAR] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(113),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_PERCENT] = ACTIONS(113),
    [anon_sym_EQ_EQ] = ACTIONS(111),
    [anon_sym_BANG_EQ] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_GT_EQ] = ACTIONS(111),
    [anon_sym_LT_EQ] = ACTIONS(111),
    [anon_sym_lt] = ACTIONS(113),
    [anon_sym_lte] = ACTIONS(113),
    [anon_sym_gt] = ACTIONS(113),
    [anon_sym_gte] = ACTIONS(113),
    [anon_sym_BANG] = ACTIONS(113),
    [anon_sym_AMP_AMP] = ACTIONS(111),
    [anon_sym_PIPE_PIPE] = ACTIONS(111),
    [anon_sym_QMARK_QMARK] = ACTIONS(111),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_PLUS_EQ] = ACTIONS(111),
    [anon_sym_DASH_EQ] = ACTIONS(111),
    [anon_sym_STAR_EQ] = ACTIONS(111),
    [anon_sym_SLASH_EQ] = ACTIONS(111),
    [anon_sym_PERCENT_EQ] = ACTIONS(111),
    [anon_sym_PLUS_PLUS] = ACTIONS(111),
    [anon_sym_DASH_DASH] = ACTIONS(111),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(111),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(111),
    [sym_number] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [sym_top_level] = ACTIONS(113),
    [sym_spec_var] = ACTIONS(111),
  },
  [90] = {
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_as] = ACTIONS(117),
    [anon_sym_using] = ACTIONS(117),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_DOT_DOT] = ACTIONS(117),
    [anon_sym_DOT_DOT_LT] = ACTIONS(115),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(115),
    [anon_sym_COLON] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_PERCENT] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(115),
    [anon_sym_BANG_EQ] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(115),
    [anon_sym_LT_EQ] = ACTIONS(115),
    [anon_sym_lt] = ACTIONS(117),
    [anon_sym_lte] = ACTIONS(117),
    [anon_sym_gt] = ACTIONS(117),
    [anon_sym_gte] = ACTIONS(117),
    [anon_sym_BANG] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(115),
    [anon_sym_PIPE_PIPE] = ACTIONS(115),
    [anon_sym_QMARK_QMARK] = ACTIONS(115),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_PLUS_EQ] = ACTIONS(115),
    [anon_sym_DASH_EQ] = ACTIONS(115),
    [anon_sym_STAR_EQ] = ACTIONS(115),
    [anon_sym_SLASH_EQ] = ACTIONS(115),
    [anon_sym_PERCENT_EQ] = ACTIONS(115),
    [anon_sym_PLUS_PLUS] = ACTIONS(115),
    [anon_sym_DASH_DASH] = ACTIONS(115),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(115),
    [sym_number] = ACTIONS(117),
    [anon_sym_true] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(115),
    [sym_top_level] = ACTIONS(117),
    [sym_spec_var] = ACTIONS(115),
  },
  [91] = {
    [anon_sym_false] = ACTIONS(345),
  },
  [92] = {
    [sym_expression] = STATE(73),
    [sym_string] = STATE(67),
    [sym_boolean] = STATE(67),
    [sym_sequence] = STATE(67),
    [sym_hash] = STATE(67),
    [sym_method] = STATE(67),
    [aux_sym_sequence_repeat1] = STATE(155),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_RBRACK] = ACTIONS(347),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym_top_level] = ACTIONS(133),
    [sym_spec_var] = ACTIONS(135),
  },
  [93] = {
    [sym_expression] = STATE(157),
    [sym_string] = STATE(67),
    [sym_boolean] = STATE(67),
    [sym_sequence] = STATE(67),
    [sym_hash] = STATE(67),
    [sym_method] = STATE(67),
    [aux_sym_unary_expression_repeat1] = STATE(157),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(349),
    [sym_top_level] = ACTIONS(133),
    [sym_spec_var] = ACTIONS(135),
  },
  [94] = {
    [sym_group] = STATE(159),
    [anon_sym_LPAREN] = ACTIONS(351),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_as] = ACTIONS(117),
    [anon_sym_using] = ACTIONS(117),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_DOT_DOT] = ACTIONS(117),
    [anon_sym_DOT_DOT_LT] = ACTIONS(115),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(115),
    [anon_sym_COLON] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_PERCENT] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(115),
    [anon_sym_BANG_EQ] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(115),
    [anon_sym_LT_EQ] = ACTIONS(115),
    [anon_sym_lt] = ACTIONS(117),
    [anon_sym_lte] = ACTIONS(117),
    [anon_sym_gt] = ACTIONS(117),
    [anon_sym_gte] = ACTIONS(117),
    [anon_sym_BANG] = ACTIONS(117),
    [anon_sym_AMP_AMP] = ACTIONS(115),
    [anon_sym_PIPE_PIPE] = ACTIONS(115),
    [anon_sym_QMARK_QMARK] = ACTIONS(115),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_PLUS_EQ] = ACTIONS(115),
    [anon_sym_DASH_EQ] = ACTIONS(115),
    [anon_sym_STAR_EQ] = ACTIONS(115),
    [anon_sym_SLASH_EQ] = ACTIONS(115),
    [anon_sym_PERCENT_EQ] = ACTIONS(115),
    [anon_sym_PLUS_PLUS] = ACTIONS(115),
    [anon_sym_DASH_DASH] = ACTIONS(115),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(115),
    [sym_number] = ACTIONS(117),
    [anon_sym_true] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(115),
    [sym_top_level] = ACTIONS(117),
    [sym_spec_var] = ACTIONS(115),
  },
  [95] = {
    [sym_expression] = STATE(160),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_method] = STATE(90),
    [aux_sym_unary_expression_repeat1] = STATE(160),
    [anon_sym_as] = ACTIONS(353),
    [anon_sym_using] = ACTIONS(353),
    [anon_sym_COMMA] = ACTIONS(333),
    [anon_sym_DOT_DOT] = ACTIONS(353),
    [anon_sym_DOT_DOT_LT] = ACTIONS(333),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(333),
    [anon_sym_COLON] = ACTIONS(333),
    [anon_sym_STAR] = ACTIONS(353),
    [anon_sym_PLUS] = ACTIONS(353),
    [anon_sym_SLASH] = ACTIONS(353),
    [anon_sym_DASH] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(353),
    [anon_sym_EQ_EQ] = ACTIONS(333),
    [anon_sym_BANG_EQ] = ACTIONS(333),
    [anon_sym_LT] = ACTIONS(353),
    [anon_sym_GT] = ACTIONS(353),
    [anon_sym_GT_EQ] = ACTIONS(333),
    [anon_sym_LT_EQ] = ACTIONS(333),
    [anon_sym_lt] = ACTIONS(353),
    [anon_sym_lte] = ACTIONS(353),
    [anon_sym_gt] = ACTIONS(353),
    [anon_sym_gte] = ACTIONS(353),
    [anon_sym_BANG] = ACTIONS(353),
    [anon_sym_AMP_AMP] = ACTIONS(333),
    [anon_sym_PIPE_PIPE] = ACTIONS(333),
    [anon_sym_QMARK_QMARK] = ACTIONS(333),
    [anon_sym_EQ] = ACTIONS(353),
    [anon_sym_PLUS_EQ] = ACTIONS(333),
    [anon_sym_DASH_EQ] = ACTIONS(333),
    [anon_sym_STAR_EQ] = ACTIONS(333),
    [anon_sym_SLASH_EQ] = ACTIONS(333),
    [anon_sym_PERCENT_EQ] = ACTIONS(333),
    [anon_sym_PLUS_PLUS] = ACTIONS(333),
    [anon_sym_DASH_DASH] = ACTIONS(333),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(333),
    [sym_number] = ACTIONS(353),
    [anon_sym_true] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(333),
    [sym_top_level] = ACTIONS(353),
    [sym_spec_var] = ACTIONS(333),
  },
  [96] = {
    [sym_directive] = STATE(85),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_if_else] = STATE(150),
    [sym_elseif] = STATE(85),
    [sym_if_middle] = STATE(161),
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
    [aux_sym_if_repeat1] = STATE(161),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_top_level] = ACTIONS(109),
    [sym_spec_var] = ACTIONS(107),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(147),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(343),
    [anon_sym_LT_POUNDelseif] = ACTIONS(151),
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
  [97] = {
    [sym_parameter_group] = STATE(97),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(35),
    [sym_operator] = STATE(36),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(97),
    [anon_sym_as] = ACTIONS(355),
    [anon_sym_using] = ACTIONS(355),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_DOT_DOT] = ACTIONS(355),
    [anon_sym_DOT_DOT_LT] = ACTIONS(358),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(358),
    [anon_sym_COLON] = ACTIONS(358),
    [anon_sym_STAR] = ACTIONS(355),
    [anon_sym_PLUS] = ACTIONS(355),
    [anon_sym_SLASH] = ACTIONS(355),
    [anon_sym_DASH] = ACTIONS(355),
    [anon_sym_PERCENT] = ACTIONS(355),
    [anon_sym_EQ_EQ] = ACTIONS(358),
    [anon_sym_BANG_EQ] = ACTIONS(358),
    [anon_sym_LT] = ACTIONS(355),
    [anon_sym_GT] = ACTIONS(355),
    [anon_sym_GT_EQ] = ACTIONS(358),
    [anon_sym_LT_EQ] = ACTIONS(358),
    [anon_sym_lt] = ACTIONS(355),
    [anon_sym_lte] = ACTIONS(355),
    [anon_sym_gt] = ACTIONS(355),
    [anon_sym_gte] = ACTIONS(355),
    [anon_sym_BANG] = ACTIONS(355),
    [anon_sym_AMP_AMP] = ACTIONS(358),
    [anon_sym_PIPE_PIPE] = ACTIONS(358),
    [anon_sym_QMARK_QMARK] = ACTIONS(358),
    [anon_sym_EQ] = ACTIONS(355),
    [anon_sym_PLUS_EQ] = ACTIONS(358),
    [anon_sym_DASH_EQ] = ACTIONS(358),
    [anon_sym_STAR_EQ] = ACTIONS(358),
    [anon_sym_SLASH_EQ] = ACTIONS(358),
    [anon_sym_PERCENT_EQ] = ACTIONS(358),
    [anon_sym_PLUS_PLUS] = ACTIONS(358),
    [anon_sym_DASH_DASH] = ACTIONS(358),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(361),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(361),
    [sym_number] = ACTIONS(364),
    [anon_sym_true] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(370),
    [anon_sym_LBRACE] = ACTIONS(373),
    [sym_top_level] = ACTIONS(376),
    [sym_spec_var] = ACTIONS(379),
  },
  [98] = {
    [sym_case] = STATE(165),
    [sym_default] = STATE(166),
    [sym_switch_middle] = STATE(167),
    [aux_sym_switch_repeat1] = STATE(167),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(382),
    [anon_sym_LT_POUNDcase] = ACTIONS(384),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(386),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(388),
    [sym_comment] = ACTIONS(388),
    [anon_sym_LT_POUNDlist] = ACTIONS(388),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(388),
    [sym_break] = ACTIONS(388),
    [sym_continue] = ACTIONS(388),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(388),
    [anon_sym_LT_POUNDitems] = ACTIONS(388),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(388),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(388),
    [anon_sym_LT_POUNDif] = ACTIONS(388),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(388),
    [anon_sym_LT_POUNDelseif] = ACTIONS(388),
    [anon_sym_LT_POUNDswitch] = ACTIONS(388),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(388),
    [anon_sym_LT_POUNDcase] = ACTIONS(388),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(388),
    [anon_sym_LT_POUNDfunction] = ACTIONS(388),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(388),
    [anon_sym_LT_POUNDreturn] = ACTIONS(388),
    [anon_sym_LT_POUNDmacro] = ACTIONS(388),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(388),
    [anon_sym_LT_POUNDnested] = ACTIONS(388),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(388),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(388),
    [sym_recover] = ACTIONS(388),
    [sym_fallback] = ACTIONS(388),
    [sym_flush] = ACTIONS(388),
    [anon_sym_LT_POUNDftl] = ACTIONS(388),
    [anon_sym_LT_POUNDimport] = ACTIONS(388),
    [anon_sym_LT_POUNDinclude] = ACTIONS(388),
    [sym_lt] = ACTIONS(388),
    [sym_nt] = ACTIONS(388),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(388),
    [sym_rt] = ACTIONS(388),
    [anon_sym_LT_POUNDsetting] = ACTIONS(388),
    [sym_stop] = ACTIONS(388),
    [sym_t] = ACTIONS(388),
    [anon_sym_LT_POUNDvisit] = ACTIONS(388),
    [anon_sym_LT_POUNDassign] = ACTIONS(388),
    [sym_end_assign] = ACTIONS(388),
    [anon_sym_LT_POUNDglobal] = ACTIONS(388),
    [sym_end_global] = ACTIONS(388),
    [anon_sym_LT_POUNDlocal] = ACTIONS(388),
    [sym_end_local] = ACTIONS(388),
  },
  [100] = {
    [sym_parameter_group] = STATE(169),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_operator] = STATE(33),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(390),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [101] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(392),
    [anon_sym_LT_POUNDif] = ACTIONS(392),
    [anon_sym_LT_POUNDswitch] = ACTIONS(392),
    [anon_sym_LT_POUNDfunction] = ACTIONS(392),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(392),
    [anon_sym_LT_POUNDreturn] = ACTIONS(392),
    [anon_sym_LT_POUNDmacro] = ACTIONS(392),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(392),
    [sym_fallback] = ACTIONS(392),
    [sym_flush] = ACTIONS(392),
    [anon_sym_LT_POUNDftl] = ACTIONS(392),
    [anon_sym_LT_POUNDimport] = ACTIONS(392),
    [anon_sym_LT_POUNDinclude] = ACTIONS(392),
    [sym_lt] = ACTIONS(392),
    [sym_nt] = ACTIONS(392),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(392),
    [sym_rt] = ACTIONS(392),
    [anon_sym_LT_POUNDsetting] = ACTIONS(392),
    [sym_stop] = ACTIONS(392),
    [sym_t] = ACTIONS(392),
    [anon_sym_LT_POUNDvisit] = ACTIONS(392),
    [anon_sym_LT_POUNDassign] = ACTIONS(392),
    [sym_end_assign] = ACTIONS(392),
    [anon_sym_LT_POUNDglobal] = ACTIONS(392),
    [sym_end_global] = ACTIONS(392),
    [anon_sym_LT_POUNDlocal] = ACTIONS(392),
    [sym_end_local] = ACTIONS(392),
  },
  [102] = {
    [sym_directive] = STATE(101),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_function_middle] = STATE(171),
    [sym_return] = STATE(101),
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
    [aux_sym_function_repeat1] = STATE(171),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(394),
    [anon_sym_LT_POUNDreturn] = ACTIONS(173),
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
  [103] = {
    [sym_directive] = STATE(101),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_function_middle] = STATE(172),
    [sym_return] = STATE(101),
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
    [aux_sym_function_repeat1] = STATE(172),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_top_level] = ACTIONS(109),
    [sym_spec_var] = ACTIONS(107),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(394),
    [anon_sym_LT_POUNDreturn] = ACTIONS(173),
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
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(396),
    [sym_comment] = ACTIONS(396),
    [anon_sym_LT_POUNDlist] = ACTIONS(396),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(396),
    [sym_break] = ACTIONS(396),
    [sym_continue] = ACTIONS(396),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(396),
    [anon_sym_LT_POUNDitems] = ACTIONS(396),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(396),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(396),
    [anon_sym_LT_POUNDif] = ACTIONS(396),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(396),
    [anon_sym_LT_POUNDelseif] = ACTIONS(396),
    [anon_sym_LT_POUNDswitch] = ACTIONS(396),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(396),
    [anon_sym_LT_POUNDcase] = ACTIONS(396),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(396),
    [anon_sym_LT_POUNDfunction] = ACTIONS(396),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(396),
    [anon_sym_LT_POUNDreturn] = ACTIONS(396),
    [anon_sym_LT_POUNDmacro] = ACTIONS(396),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(396),
    [anon_sym_LT_POUNDnested] = ACTIONS(396),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(396),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(396),
    [sym_recover] = ACTIONS(396),
    [sym_fallback] = ACTIONS(396),
    [sym_flush] = ACTIONS(396),
    [anon_sym_LT_POUNDftl] = ACTIONS(396),
    [anon_sym_LT_POUNDimport] = ACTIONS(396),
    [anon_sym_LT_POUNDinclude] = ACTIONS(396),
    [sym_lt] = ACTIONS(396),
    [sym_nt] = ACTIONS(396),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(396),
    [sym_rt] = ACTIONS(396),
    [anon_sym_LT_POUNDsetting] = ACTIONS(396),
    [sym_stop] = ACTIONS(396),
    [sym_t] = ACTIONS(396),
    [anon_sym_LT_POUNDvisit] = ACTIONS(396),
    [anon_sym_LT_POUNDassign] = ACTIONS(396),
    [sym_end_assign] = ACTIONS(396),
    [anon_sym_LT_POUNDglobal] = ACTIONS(396),
    [sym_end_global] = ACTIONS(396),
    [anon_sym_LT_POUNDlocal] = ACTIONS(396),
    [sym_end_local] = ACTIONS(396),
  },
  [105] = {
    [sym_parameter_group] = STATE(174),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(35),
    [sym_operator] = STATE(36),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(174),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(398),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [106] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(400),
    [anon_sym_LT_POUNDif] = ACTIONS(400),
    [anon_sym_LT_POUNDswitch] = ACTIONS(400),
    [anon_sym_LT_POUNDfunction] = ACTIONS(400),
    [anon_sym_LT_POUNDreturn] = ACTIONS(400),
    [anon_sym_LT_POUNDmacro] = ACTIONS(400),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(400),
    [anon_sym_LT_POUNDnested] = ACTIONS(400),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(400),
    [sym_fallback] = ACTIONS(400),
    [sym_flush] = ACTIONS(400),
    [anon_sym_LT_POUNDftl] = ACTIONS(400),
    [anon_sym_LT_POUNDimport] = ACTIONS(400),
    [anon_sym_LT_POUNDinclude] = ACTIONS(400),
    [sym_lt] = ACTIONS(400),
    [sym_nt] = ACTIONS(400),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(400),
    [sym_rt] = ACTIONS(400),
    [anon_sym_LT_POUNDsetting] = ACTIONS(400),
    [sym_stop] = ACTIONS(400),
    [sym_t] = ACTIONS(400),
    [anon_sym_LT_POUNDvisit] = ACTIONS(400),
    [anon_sym_LT_POUNDassign] = ACTIONS(400),
    [sym_end_assign] = ACTIONS(400),
    [anon_sym_LT_POUNDglobal] = ACTIONS(400),
    [sym_end_global] = ACTIONS(400),
    [anon_sym_LT_POUNDlocal] = ACTIONS(400),
    [sym_end_local] = ACTIONS(400),
  },
  [107] = {
    [sym_directive] = STATE(106),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_return] = STATE(106),
    [sym_macro] = STATE(8),
    [sym_macro_middle] = STATE(176),
    [sym_nested] = STATE(106),
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
    [aux_sym_macro_repeat1] = STATE(176),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_POUNDreturn] = ACTIONS(173),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(402),
    [anon_sym_LT_POUNDnested] = ACTIONS(179),
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
  [108] = {
    [sym_directive] = STATE(106),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_return] = STATE(106),
    [sym_macro] = STATE(8),
    [sym_macro_middle] = STATE(177),
    [sym_nested] = STATE(106),
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
    [aux_sym_macro_repeat1] = STATE(177),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_top_level] = ACTIONS(109),
    [sym_spec_var] = ACTIONS(107),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_POUNDreturn] = ACTIONS(173),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(402),
    [anon_sym_LT_POUNDnested] = ACTIONS(179),
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
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(404),
    [sym_comment] = ACTIONS(404),
    [anon_sym_LT_POUNDlist] = ACTIONS(404),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(404),
    [sym_break] = ACTIONS(404),
    [sym_continue] = ACTIONS(404),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(404),
    [anon_sym_LT_POUNDitems] = ACTIONS(404),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(404),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(404),
    [anon_sym_LT_POUNDif] = ACTIONS(404),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(404),
    [anon_sym_LT_POUNDelseif] = ACTIONS(404),
    [anon_sym_LT_POUNDswitch] = ACTIONS(404),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(404),
    [anon_sym_LT_POUNDcase] = ACTIONS(404),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(404),
    [anon_sym_LT_POUNDfunction] = ACTIONS(404),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(404),
    [anon_sym_LT_POUNDreturn] = ACTIONS(404),
    [anon_sym_LT_POUNDmacro] = ACTIONS(404),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(404),
    [anon_sym_LT_POUNDnested] = ACTIONS(404),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(404),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(404),
    [sym_recover] = ACTIONS(404),
    [sym_fallback] = ACTIONS(404),
    [sym_flush] = ACTIONS(404),
    [anon_sym_LT_POUNDftl] = ACTIONS(404),
    [anon_sym_LT_POUNDimport] = ACTIONS(404),
    [anon_sym_LT_POUNDinclude] = ACTIONS(404),
    [sym_lt] = ACTIONS(404),
    [sym_nt] = ACTIONS(404),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(404),
    [sym_rt] = ACTIONS(404),
    [anon_sym_LT_POUNDsetting] = ACTIONS(404),
    [sym_stop] = ACTIONS(404),
    [sym_t] = ACTIONS(404),
    [anon_sym_LT_POUNDvisit] = ACTIONS(404),
    [anon_sym_LT_POUNDassign] = ACTIONS(404),
    [sym_end_assign] = ACTIONS(404),
    [anon_sym_LT_POUNDglobal] = ACTIONS(404),
    [sym_end_global] = ACTIONS(404),
    [anon_sym_LT_POUNDlocal] = ACTIONS(404),
    [sym_end_local] = ACTIONS(404),
  },
  [110] = {
    [sym_directive] = STATE(44),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_attempt_middle] = STATE(110),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_attempt_repeat1] = STATE(110),
    [anon_sym_LT_POUNDlist] = ACTIONS(406),
    [anon_sym_LT_POUNDif] = ACTIONS(409),
    [anon_sym_LT_POUNDswitch] = ACTIONS(412),
    [anon_sym_LT_POUNDfunction] = ACTIONS(415),
    [anon_sym_LT_POUNDmacro] = ACTIONS(418),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(421),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(424),
    [sym_recover] = ACTIONS(426),
    [sym_fallback] = ACTIONS(429),
    [sym_flush] = ACTIONS(429),
    [anon_sym_LT_POUNDftl] = ACTIONS(432),
    [anon_sym_LT_POUNDimport] = ACTIONS(435),
    [anon_sym_LT_POUNDinclude] = ACTIONS(438),
    [sym_lt] = ACTIONS(429),
    [sym_nt] = ACTIONS(429),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(441),
    [sym_rt] = ACTIONS(429),
    [anon_sym_LT_POUNDsetting] = ACTIONS(444),
    [sym_stop] = ACTIONS(429),
    [sym_t] = ACTIONS(429),
    [anon_sym_LT_POUNDvisit] = ACTIONS(447),
    [anon_sym_LT_POUNDassign] = ACTIONS(450),
    [sym_end_assign] = ACTIONS(453),
    [anon_sym_LT_POUNDglobal] = ACTIONS(456),
    [sym_end_global] = ACTIONS(459),
    [anon_sym_LT_POUNDlocal] = ACTIONS(462),
    [sym_end_local] = ACTIONS(465),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(468),
    [sym_comment] = ACTIONS(468),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_top_level] = ACTIONS(109),
    [sym_spec_var] = ACTIONS(107),
    [anon_sym_LT_POUNDlist] = ACTIONS(468),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(468),
    [sym_break] = ACTIONS(468),
    [sym_continue] = ACTIONS(468),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(468),
    [anon_sym_LT_POUNDitems] = ACTIONS(468),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(468),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(468),
    [anon_sym_LT_POUNDif] = ACTIONS(468),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(468),
    [anon_sym_LT_POUNDelseif] = ACTIONS(468),
    [anon_sym_LT_POUNDswitch] = ACTIONS(468),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(468),
    [anon_sym_LT_POUNDcase] = ACTIONS(468),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(468),
    [anon_sym_LT_POUNDfunction] = ACTIONS(468),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(468),
    [anon_sym_LT_POUNDreturn] = ACTIONS(468),
    [anon_sym_LT_POUNDmacro] = ACTIONS(468),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(468),
    [anon_sym_LT_POUNDnested] = ACTIONS(468),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(468),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(468),
    [sym_recover] = ACTIONS(468),
    [sym_fallback] = ACTIONS(468),
    [sym_flush] = ACTIONS(468),
    [anon_sym_LT_POUNDftl] = ACTIONS(468),
    [anon_sym_LT_POUNDimport] = ACTIONS(468),
    [anon_sym_LT_POUNDinclude] = ACTIONS(468),
    [sym_lt] = ACTIONS(468),
    [sym_nt] = ACTIONS(468),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(468),
    [sym_rt] = ACTIONS(468),
    [anon_sym_LT_POUNDsetting] = ACTIONS(468),
    [sym_stop] = ACTIONS(468),
    [sym_t] = ACTIONS(468),
    [anon_sym_LT_POUNDvisit] = ACTIONS(468),
    [anon_sym_LT_POUNDassign] = ACTIONS(468),
    [sym_end_assign] = ACTIONS(468),
    [anon_sym_LT_POUNDglobal] = ACTIONS(468),
    [sym_end_global] = ACTIONS(468),
    [anon_sym_LT_POUNDlocal] = ACTIONS(468),
    [sym_end_local] = ACTIONS(468),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(470),
    [sym_comment] = ACTIONS(470),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_top_level] = ACTIONS(109),
    [sym_spec_var] = ACTIONS(107),
    [anon_sym_LT_POUNDlist] = ACTIONS(470),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(470),
    [sym_break] = ACTIONS(470),
    [sym_continue] = ACTIONS(470),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(470),
    [anon_sym_LT_POUNDitems] = ACTIONS(470),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(470),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(470),
    [anon_sym_LT_POUNDif] = ACTIONS(470),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(470),
    [anon_sym_LT_POUNDelseif] = ACTIONS(470),
    [anon_sym_LT_POUNDswitch] = ACTIONS(470),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(470),
    [anon_sym_LT_POUNDcase] = ACTIONS(470),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(470),
    [anon_sym_LT_POUNDfunction] = ACTIONS(470),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(470),
    [anon_sym_LT_POUNDreturn] = ACTIONS(470),
    [anon_sym_LT_POUNDmacro] = ACTIONS(470),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(470),
    [anon_sym_LT_POUNDnested] = ACTIONS(470),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(470),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(470),
    [sym_recover] = ACTIONS(470),
    [sym_fallback] = ACTIONS(470),
    [sym_flush] = ACTIONS(470),
    [anon_sym_LT_POUNDftl] = ACTIONS(470),
    [anon_sym_LT_POUNDimport] = ACTIONS(470),
    [anon_sym_LT_POUNDinclude] = ACTIONS(470),
    [sym_lt] = ACTIONS(470),
    [sym_nt] = ACTIONS(470),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(470),
    [sym_rt] = ACTIONS(470),
    [anon_sym_LT_POUNDsetting] = ACTIONS(470),
    [sym_stop] = ACTIONS(470),
    [sym_t] = ACTIONS(470),
    [anon_sym_LT_POUNDvisit] = ACTIONS(470),
    [anon_sym_LT_POUNDassign] = ACTIONS(470),
    [sym_end_assign] = ACTIONS(470),
    [anon_sym_LT_POUNDglobal] = ACTIONS(470),
    [sym_end_global] = ACTIONS(470),
    [anon_sym_LT_POUNDlocal] = ACTIONS(470),
    [sym_end_local] = ACTIONS(470),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(472),
    [sym_comment] = ACTIONS(472),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_top_level] = ACTIONS(109),
    [sym_spec_var] = ACTIONS(107),
    [anon_sym_LT_POUNDlist] = ACTIONS(472),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(472),
    [sym_break] = ACTIONS(472),
    [sym_continue] = ACTIONS(472),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(472),
    [anon_sym_LT_POUNDitems] = ACTIONS(472),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(472),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(472),
    [anon_sym_LT_POUNDif] = ACTIONS(472),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(472),
    [anon_sym_LT_POUNDelseif] = ACTIONS(472),
    [anon_sym_LT_POUNDswitch] = ACTIONS(472),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(472),
    [anon_sym_LT_POUNDcase] = ACTIONS(472),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(472),
    [anon_sym_LT_POUNDfunction] = ACTIONS(472),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(472),
    [anon_sym_LT_POUNDreturn] = ACTIONS(472),
    [anon_sym_LT_POUNDmacro] = ACTIONS(472),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(472),
    [anon_sym_LT_POUNDnested] = ACTIONS(472),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(472),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(472),
    [sym_recover] = ACTIONS(472),
    [sym_fallback] = ACTIONS(472),
    [sym_flush] = ACTIONS(472),
    [anon_sym_LT_POUNDftl] = ACTIONS(472),
    [anon_sym_LT_POUNDimport] = ACTIONS(472),
    [anon_sym_LT_POUNDinclude] = ACTIONS(472),
    [sym_lt] = ACTIONS(472),
    [sym_nt] = ACTIONS(472),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(472),
    [sym_rt] = ACTIONS(472),
    [anon_sym_LT_POUNDsetting] = ACTIONS(472),
    [sym_stop] = ACTIONS(472),
    [sym_t] = ACTIONS(472),
    [anon_sym_LT_POUNDvisit] = ACTIONS(472),
    [anon_sym_LT_POUNDassign] = ACTIONS(472),
    [sym_end_assign] = ACTIONS(472),
    [anon_sym_LT_POUNDglobal] = ACTIONS(472),
    [sym_end_global] = ACTIONS(472),
    [anon_sym_LT_POUNDlocal] = ACTIONS(472),
    [sym_end_local] = ACTIONS(472),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(474),
    [sym_comment] = ACTIONS(474),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_top_level] = ACTIONS(109),
    [sym_spec_var] = ACTIONS(107),
    [anon_sym_LT_POUNDlist] = ACTIONS(474),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(474),
    [sym_break] = ACTIONS(474),
    [sym_continue] = ACTIONS(474),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(474),
    [anon_sym_LT_POUNDitems] = ACTIONS(474),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(474),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(474),
    [anon_sym_LT_POUNDif] = ACTIONS(474),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(474),
    [anon_sym_LT_POUNDelseif] = ACTIONS(474),
    [anon_sym_LT_POUNDswitch] = ACTIONS(474),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(474),
    [anon_sym_LT_POUNDcase] = ACTIONS(474),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(474),
    [anon_sym_LT_POUNDfunction] = ACTIONS(474),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(474),
    [anon_sym_LT_POUNDreturn] = ACTIONS(474),
    [anon_sym_LT_POUNDmacro] = ACTIONS(474),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(474),
    [anon_sym_LT_POUNDnested] = ACTIONS(474),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(474),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(474),
    [sym_recover] = ACTIONS(474),
    [sym_fallback] = ACTIONS(474),
    [sym_flush] = ACTIONS(474),
    [anon_sym_LT_POUNDftl] = ACTIONS(474),
    [anon_sym_LT_POUNDimport] = ACTIONS(474),
    [anon_sym_LT_POUNDinclude] = ACTIONS(474),
    [sym_lt] = ACTIONS(474),
    [sym_nt] = ACTIONS(474),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(474),
    [sym_rt] = ACTIONS(474),
    [anon_sym_LT_POUNDsetting] = ACTIONS(474),
    [sym_stop] = ACTIONS(474),
    [sym_t] = ACTIONS(474),
    [anon_sym_LT_POUNDvisit] = ACTIONS(474),
    [anon_sym_LT_POUNDassign] = ACTIONS(474),
    [sym_end_assign] = ACTIONS(474),
    [anon_sym_LT_POUNDglobal] = ACTIONS(474),
    [sym_end_global] = ACTIONS(474),
    [anon_sym_LT_POUNDlocal] = ACTIONS(474),
    [sym_end_local] = ACTIONS(474),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(476),
    [sym_comment] = ACTIONS(476),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_top_level] = ACTIONS(109),
    [sym_spec_var] = ACTIONS(107),
    [anon_sym_LT_POUNDlist] = ACTIONS(476),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(476),
    [sym_break] = ACTIONS(476),
    [sym_continue] = ACTIONS(476),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(476),
    [anon_sym_LT_POUNDitems] = ACTIONS(476),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(476),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(476),
    [anon_sym_LT_POUNDif] = ACTIONS(476),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(476),
    [anon_sym_LT_POUNDelseif] = ACTIONS(476),
    [anon_sym_LT_POUNDswitch] = ACTIONS(476),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(476),
    [anon_sym_LT_POUNDcase] = ACTIONS(476),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(476),
    [anon_sym_LT_POUNDfunction] = ACTIONS(476),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(476),
    [anon_sym_LT_POUNDreturn] = ACTIONS(476),
    [anon_sym_LT_POUNDmacro] = ACTIONS(476),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(476),
    [anon_sym_LT_POUNDnested] = ACTIONS(476),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(476),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(476),
    [sym_recover] = ACTIONS(476),
    [sym_fallback] = ACTIONS(476),
    [sym_flush] = ACTIONS(476),
    [anon_sym_LT_POUNDftl] = ACTIONS(476),
    [anon_sym_LT_POUNDimport] = ACTIONS(476),
    [anon_sym_LT_POUNDinclude] = ACTIONS(476),
    [sym_lt] = ACTIONS(476),
    [sym_nt] = ACTIONS(476),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(476),
    [sym_rt] = ACTIONS(476),
    [anon_sym_LT_POUNDsetting] = ACTIONS(476),
    [sym_stop] = ACTIONS(476),
    [sym_t] = ACTIONS(476),
    [anon_sym_LT_POUNDvisit] = ACTIONS(476),
    [anon_sym_LT_POUNDassign] = ACTIONS(476),
    [sym_end_assign] = ACTIONS(476),
    [anon_sym_LT_POUNDglobal] = ACTIONS(476),
    [sym_end_global] = ACTIONS(476),
    [anon_sym_LT_POUNDlocal] = ACTIONS(476),
    [sym_end_local] = ACTIONS(476),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(478),
    [sym_comment] = ACTIONS(478),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_top_level] = ACTIONS(109),
    [sym_spec_var] = ACTIONS(107),
    [anon_sym_LT_POUNDlist] = ACTIONS(478),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(478),
    [sym_break] = ACTIONS(478),
    [sym_continue] = ACTIONS(478),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(478),
    [anon_sym_LT_POUNDitems] = ACTIONS(478),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(478),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(478),
    [anon_sym_LT_POUNDif] = ACTIONS(478),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(478),
    [anon_sym_LT_POUNDelseif] = ACTIONS(478),
    [anon_sym_LT_POUNDswitch] = ACTIONS(478),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(478),
    [anon_sym_LT_POUNDcase] = ACTIONS(478),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(478),
    [anon_sym_LT_POUNDfunction] = ACTIONS(478),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(478),
    [anon_sym_LT_POUNDreturn] = ACTIONS(478),
    [anon_sym_LT_POUNDmacro] = ACTIONS(478),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(478),
    [anon_sym_LT_POUNDnested] = ACTIONS(478),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(478),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(478),
    [sym_recover] = ACTIONS(478),
    [sym_fallback] = ACTIONS(478),
    [sym_flush] = ACTIONS(478),
    [anon_sym_LT_POUNDftl] = ACTIONS(478),
    [anon_sym_LT_POUNDimport] = ACTIONS(478),
    [anon_sym_LT_POUNDinclude] = ACTIONS(478),
    [sym_lt] = ACTIONS(478),
    [sym_nt] = ACTIONS(478),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(478),
    [sym_rt] = ACTIONS(478),
    [anon_sym_LT_POUNDsetting] = ACTIONS(478),
    [sym_stop] = ACTIONS(478),
    [sym_t] = ACTIONS(478),
    [anon_sym_LT_POUNDvisit] = ACTIONS(478),
    [anon_sym_LT_POUNDassign] = ACTIONS(478),
    [sym_end_assign] = ACTIONS(478),
    [anon_sym_LT_POUNDglobal] = ACTIONS(478),
    [sym_end_global] = ACTIONS(478),
    [anon_sym_LT_POUNDlocal] = ACTIONS(478),
    [sym_end_local] = ACTIONS(478),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(480),
    [sym_comment] = ACTIONS(480),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_top_level] = ACTIONS(109),
    [sym_spec_var] = ACTIONS(107),
    [anon_sym_LT_POUNDlist] = ACTIONS(480),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(480),
    [sym_break] = ACTIONS(480),
    [sym_continue] = ACTIONS(480),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(480),
    [anon_sym_LT_POUNDitems] = ACTIONS(480),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(480),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(480),
    [anon_sym_LT_POUNDif] = ACTIONS(480),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(480),
    [anon_sym_LT_POUNDelseif] = ACTIONS(480),
    [anon_sym_LT_POUNDswitch] = ACTIONS(480),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(480),
    [anon_sym_LT_POUNDcase] = ACTIONS(480),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(480),
    [anon_sym_LT_POUNDfunction] = ACTIONS(480),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(480),
    [anon_sym_LT_POUNDreturn] = ACTIONS(480),
    [anon_sym_LT_POUNDmacro] = ACTIONS(480),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(480),
    [anon_sym_LT_POUNDnested] = ACTIONS(480),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(480),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(480),
    [sym_recover] = ACTIONS(480),
    [sym_fallback] = ACTIONS(480),
    [sym_flush] = ACTIONS(480),
    [anon_sym_LT_POUNDftl] = ACTIONS(480),
    [anon_sym_LT_POUNDimport] = ACTIONS(480),
    [anon_sym_LT_POUNDinclude] = ACTIONS(480),
    [sym_lt] = ACTIONS(480),
    [sym_nt] = ACTIONS(480),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(480),
    [sym_rt] = ACTIONS(480),
    [anon_sym_LT_POUNDsetting] = ACTIONS(480),
    [sym_stop] = ACTIONS(480),
    [sym_t] = ACTIONS(480),
    [anon_sym_LT_POUNDvisit] = ACTIONS(480),
    [anon_sym_LT_POUNDassign] = ACTIONS(480),
    [sym_end_assign] = ACTIONS(480),
    [anon_sym_LT_POUNDglobal] = ACTIONS(480),
    [sym_end_global] = ACTIONS(480),
    [anon_sym_LT_POUNDlocal] = ACTIONS(480),
    [sym_end_local] = ACTIONS(480),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(482),
    [sym_comment] = ACTIONS(482),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_top_level] = ACTIONS(109),
    [sym_spec_var] = ACTIONS(107),
    [anon_sym_LT_POUNDlist] = ACTIONS(482),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(482),
    [sym_break] = ACTIONS(482),
    [sym_continue] = ACTIONS(482),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(482),
    [anon_sym_LT_POUNDitems] = ACTIONS(482),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(482),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(482),
    [anon_sym_LT_POUNDif] = ACTIONS(482),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(482),
    [anon_sym_LT_POUNDelseif] = ACTIONS(482),
    [anon_sym_LT_POUNDswitch] = ACTIONS(482),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(482),
    [anon_sym_LT_POUNDcase] = ACTIONS(482),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(482),
    [anon_sym_LT_POUNDfunction] = ACTIONS(482),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(482),
    [anon_sym_LT_POUNDreturn] = ACTIONS(482),
    [anon_sym_LT_POUNDmacro] = ACTIONS(482),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(482),
    [anon_sym_LT_POUNDnested] = ACTIONS(482),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(482),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(482),
    [sym_recover] = ACTIONS(482),
    [sym_fallback] = ACTIONS(482),
    [sym_flush] = ACTIONS(482),
    [anon_sym_LT_POUNDftl] = ACTIONS(482),
    [anon_sym_LT_POUNDimport] = ACTIONS(482),
    [anon_sym_LT_POUNDinclude] = ACTIONS(482),
    [sym_lt] = ACTIONS(482),
    [sym_nt] = ACTIONS(482),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(482),
    [sym_rt] = ACTIONS(482),
    [anon_sym_LT_POUNDsetting] = ACTIONS(482),
    [sym_stop] = ACTIONS(482),
    [sym_t] = ACTIONS(482),
    [anon_sym_LT_POUNDvisit] = ACTIONS(482),
    [anon_sym_LT_POUNDassign] = ACTIONS(482),
    [sym_end_assign] = ACTIONS(482),
    [anon_sym_LT_POUNDglobal] = ACTIONS(482),
    [sym_end_global] = ACTIONS(482),
    [anon_sym_LT_POUNDlocal] = ACTIONS(482),
    [sym_end_local] = ACTIONS(482),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(484),
    [sym_comment] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_top_level] = ACTIONS(109),
    [sym_spec_var] = ACTIONS(107),
    [anon_sym_LT_POUNDlist] = ACTIONS(484),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(484),
    [sym_break] = ACTIONS(484),
    [sym_continue] = ACTIONS(484),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(484),
    [anon_sym_LT_POUNDitems] = ACTIONS(484),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(484),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(484),
    [anon_sym_LT_POUNDif] = ACTIONS(484),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(484),
    [anon_sym_LT_POUNDelseif] = ACTIONS(484),
    [anon_sym_LT_POUNDswitch] = ACTIONS(484),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(484),
    [anon_sym_LT_POUNDcase] = ACTIONS(484),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(484),
    [anon_sym_LT_POUNDfunction] = ACTIONS(484),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(484),
    [anon_sym_LT_POUNDreturn] = ACTIONS(484),
    [anon_sym_LT_POUNDmacro] = ACTIONS(484),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(484),
    [anon_sym_LT_POUNDnested] = ACTIONS(484),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(484),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(484),
    [sym_recover] = ACTIONS(484),
    [sym_fallback] = ACTIONS(484),
    [sym_flush] = ACTIONS(484),
    [anon_sym_LT_POUNDftl] = ACTIONS(484),
    [anon_sym_LT_POUNDimport] = ACTIONS(484),
    [anon_sym_LT_POUNDinclude] = ACTIONS(484),
    [sym_lt] = ACTIONS(484),
    [sym_nt] = ACTIONS(484),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(484),
    [sym_rt] = ACTIONS(484),
    [anon_sym_LT_POUNDsetting] = ACTIONS(484),
    [sym_stop] = ACTIONS(484),
    [sym_t] = ACTIONS(484),
    [anon_sym_LT_POUNDvisit] = ACTIONS(484),
    [anon_sym_LT_POUNDassign] = ACTIONS(484),
    [sym_end_assign] = ACTIONS(484),
    [anon_sym_LT_POUNDglobal] = ACTIONS(484),
    [sym_end_global] = ACTIONS(484),
    [anon_sym_LT_POUNDlocal] = ACTIONS(484),
    [sym_end_local] = ACTIONS(484),
  },
  [120] = {
    [anon_sym_COMMA] = ACTIONS(287),
    [anon_sym_GT] = ACTIONS(287),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(287),
    [sym_number] = ACTIONS(289),
    [anon_sym_true] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(287),
    [anon_sym_RBRACK] = ACTIONS(287),
    [anon_sym_LBRACE] = ACTIONS(287),
    [anon_sym_RBRACE] = ACTIONS(287),
    [sym_top_level] = ACTIONS(289),
    [sym_spec_var] = ACTIONS(287),
  },
  [121] = {
    [anon_sym_COMMA] = ACTIONS(295),
    [anon_sym_GT] = ACTIONS(295),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(295),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(295),
    [sym_number] = ACTIONS(297),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_RBRACK] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(295),
    [anon_sym_RBRACE] = ACTIONS(295),
    [sym_top_level] = ACTIONS(297),
    [sym_spec_var] = ACTIONS(295),
  },
  [122] = {
    [sym_expression] = STATE(73),
    [sym_string] = STATE(67),
    [sym_boolean] = STATE(67),
    [sym_sequence] = STATE(67),
    [sym_hash] = STATE(67),
    [sym_method] = STATE(67),
    [aux_sym_sequence_repeat1] = STATE(129),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_RBRACK] = ACTIONS(486),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym_top_level] = ACTIONS(133),
    [sym_spec_var] = ACTIONS(135),
  },
  [123] = {
    [anon_sym_COMMA] = ACTIONS(311),
    [anon_sym_GT] = ACTIONS(311),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(311),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(311),
    [sym_number] = ACTIONS(313),
    [anon_sym_true] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(311),
    [anon_sym_RBRACK] = ACTIONS(311),
    [anon_sym_LBRACE] = ACTIONS(311),
    [anon_sym_RBRACE] = ACTIONS(311),
    [sym_top_level] = ACTIONS(313),
    [sym_spec_var] = ACTIONS(311),
  },
  [124] = {
    [sym_expression] = STATE(131),
    [sym_string] = STATE(67),
    [sym_boolean] = STATE(67),
    [sym_sequence] = STATE(67),
    [sym_hash] = STATE(67),
    [sym_method] = STATE(67),
    [aux_sym_unary_expression_repeat1] = STATE(131),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(488),
    [sym_top_level] = ACTIONS(133),
    [sym_spec_var] = ACTIONS(135),
  },
  [125] = {
    [sym_parameter_group] = STATE(181),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(133),
    [sym_operator] = STATE(134),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(181),
    [anon_sym_RPAREN] = ACTIONS(490),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [126] = {
    [anon_sym_COMMA] = ACTIONS(319),
    [anon_sym_GT] = ACTIONS(319),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(319),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(319),
    [sym_number] = ACTIONS(321),
    [anon_sym_true] = ACTIONS(321),
    [anon_sym_LBRACK] = ACTIONS(319),
    [anon_sym_RBRACK] = ACTIONS(319),
    [anon_sym_LBRACE] = ACTIONS(319),
    [anon_sym_RBRACE] = ACTIONS(319),
    [sym_top_level] = ACTIONS(321),
    [sym_spec_var] = ACTIONS(319),
  },
  [127] = {
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(492),
    [sym_number] = ACTIONS(494),
    [anon_sym_true] = ACTIONS(494),
    [anon_sym_LBRACK] = ACTIONS(492),
    [anon_sym_RBRACK] = ACTIONS(492),
    [anon_sym_LBRACE] = ACTIONS(492),
    [sym_top_level] = ACTIONS(494),
    [sym_spec_var] = ACTIONS(492),
  },
  [128] = {
    [anon_sym_as] = ACTIONS(496),
    [anon_sym_using] = ACTIONS(496),
    [anon_sym_COMMA] = ACTIONS(496),
    [anon_sym_DOT_DOT] = ACTIONS(498),
    [anon_sym_DOT_DOT_LT] = ACTIONS(496),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(496),
    [anon_sym_COLON] = ACTIONS(496),
    [anon_sym_STAR] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(498),
    [anon_sym_SLASH] = ACTIONS(498),
    [anon_sym_DASH] = ACTIONS(498),
    [anon_sym_PERCENT] = ACTIONS(498),
    [anon_sym_EQ_EQ] = ACTIONS(496),
    [anon_sym_BANG_EQ] = ACTIONS(496),
    [anon_sym_LT] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(498),
    [anon_sym_GT_EQ] = ACTIONS(496),
    [anon_sym_LT_EQ] = ACTIONS(496),
    [anon_sym_lt] = ACTIONS(498),
    [anon_sym_lte] = ACTIONS(496),
    [anon_sym_gt] = ACTIONS(498),
    [anon_sym_gte] = ACTIONS(496),
    [anon_sym_BANG] = ACTIONS(498),
    [anon_sym_AMP_AMP] = ACTIONS(496),
    [anon_sym_PIPE_PIPE] = ACTIONS(496),
    [anon_sym_QMARK_QMARK] = ACTIONS(496),
    [anon_sym_EQ] = ACTIONS(498),
    [anon_sym_PLUS_EQ] = ACTIONS(496),
    [anon_sym_DASH_EQ] = ACTIONS(496),
    [anon_sym_STAR_EQ] = ACTIONS(496),
    [anon_sym_SLASH_EQ] = ACTIONS(496),
    [anon_sym_PERCENT_EQ] = ACTIONS(496),
    [anon_sym_PLUS_PLUS] = ACTIONS(496),
    [anon_sym_DASH_DASH] = ACTIONS(496),
  },
  [129] = {
    [sym_expression] = STATE(73),
    [sym_string] = STATE(67),
    [sym_boolean] = STATE(67),
    [sym_sequence] = STATE(67),
    [sym_hash] = STATE(67),
    [sym_method] = STATE(67),
    [aux_sym_sequence_repeat1] = STATE(129),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(500),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(500),
    [sym_number] = ACTIONS(503),
    [anon_sym_true] = ACTIONS(506),
    [anon_sym_LBRACK] = ACTIONS(509),
    [anon_sym_RBRACK] = ACTIONS(492),
    [anon_sym_LBRACE] = ACTIONS(512),
    [sym_top_level] = ACTIONS(515),
    [sym_spec_var] = ACTIONS(518),
  },
  [130] = {
    [anon_sym_as] = ACTIONS(521),
    [anon_sym_using] = ACTIONS(521),
    [anon_sym_COMMA] = ACTIONS(521),
    [anon_sym_DOT_DOT] = ACTIONS(523),
    [anon_sym_DOT_DOT_LT] = ACTIONS(521),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(521),
    [anon_sym_COLON] = ACTIONS(521),
    [anon_sym_STAR] = ACTIONS(523),
    [anon_sym_PLUS] = ACTIONS(523),
    [anon_sym_SLASH] = ACTIONS(523),
    [anon_sym_DASH] = ACTIONS(523),
    [anon_sym_PERCENT] = ACTIONS(523),
    [anon_sym_EQ_EQ] = ACTIONS(521),
    [anon_sym_BANG_EQ] = ACTIONS(521),
    [anon_sym_LT] = ACTIONS(523),
    [anon_sym_GT] = ACTIONS(523),
    [anon_sym_GT_EQ] = ACTIONS(521),
    [anon_sym_LT_EQ] = ACTIONS(521),
    [anon_sym_lt] = ACTIONS(523),
    [anon_sym_lte] = ACTIONS(521),
    [anon_sym_gt] = ACTIONS(523),
    [anon_sym_gte] = ACTIONS(521),
    [anon_sym_BANG] = ACTIONS(523),
    [anon_sym_AMP_AMP] = ACTIONS(521),
    [anon_sym_PIPE_PIPE] = ACTIONS(521),
    [anon_sym_QMARK_QMARK] = ACTIONS(521),
    [anon_sym_EQ] = ACTIONS(523),
    [anon_sym_PLUS_EQ] = ACTIONS(521),
    [anon_sym_DASH_EQ] = ACTIONS(521),
    [anon_sym_STAR_EQ] = ACTIONS(521),
    [anon_sym_SLASH_EQ] = ACTIONS(521),
    [anon_sym_PERCENT_EQ] = ACTIONS(521),
    [anon_sym_PLUS_PLUS] = ACTIONS(521),
    [anon_sym_DASH_DASH] = ACTIONS(521),
  },
  [131] = {
    [sym_expression] = STATE(131),
    [sym_string] = STATE(67),
    [sym_boolean] = STATE(67),
    [sym_sequence] = STATE(67),
    [sym_hash] = STATE(67),
    [sym_method] = STATE(67),
    [aux_sym_unary_expression_repeat1] = STATE(131),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(525),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(525),
    [sym_number] = ACTIONS(528),
    [anon_sym_true] = ACTIONS(531),
    [anon_sym_LBRACK] = ACTIONS(534),
    [anon_sym_LBRACE] = ACTIONS(537),
    [anon_sym_RBRACE] = ACTIONS(540),
    [sym_top_level] = ACTIONS(542),
    [sym_spec_var] = ACTIONS(545),
  },
  [132] = {
    [anon_sym_as] = ACTIONS(548),
    [anon_sym_using] = ACTIONS(548),
    [anon_sym_COMMA] = ACTIONS(548),
    [anon_sym_DOT_DOT] = ACTIONS(550),
    [anon_sym_DOT_DOT_LT] = ACTIONS(548),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(548),
    [anon_sym_COLON] = ACTIONS(548),
    [anon_sym_STAR] = ACTIONS(550),
    [anon_sym_PLUS] = ACTIONS(550),
    [anon_sym_SLASH] = ACTIONS(550),
    [anon_sym_DASH] = ACTIONS(550),
    [anon_sym_PERCENT] = ACTIONS(550),
    [anon_sym_EQ_EQ] = ACTIONS(548),
    [anon_sym_BANG_EQ] = ACTIONS(548),
    [anon_sym_LT] = ACTIONS(550),
    [anon_sym_GT] = ACTIONS(550),
    [anon_sym_GT_EQ] = ACTIONS(548),
    [anon_sym_LT_EQ] = ACTIONS(548),
    [anon_sym_lt] = ACTIONS(550),
    [anon_sym_lte] = ACTIONS(548),
    [anon_sym_gt] = ACTIONS(550),
    [anon_sym_gte] = ACTIONS(548),
    [anon_sym_BANG] = ACTIONS(550),
    [anon_sym_AMP_AMP] = ACTIONS(548),
    [anon_sym_PIPE_PIPE] = ACTIONS(548),
    [anon_sym_QMARK_QMARK] = ACTIONS(548),
    [anon_sym_EQ] = ACTIONS(550),
    [anon_sym_PLUS_EQ] = ACTIONS(548),
    [anon_sym_DASH_EQ] = ACTIONS(548),
    [anon_sym_STAR_EQ] = ACTIONS(548),
    [anon_sym_SLASH_EQ] = ACTIONS(548),
    [anon_sym_PERCENT_EQ] = ACTIONS(548),
    [anon_sym_PLUS_PLUS] = ACTIONS(548),
    [anon_sym_DASH_DASH] = ACTIONS(548),
  },
  [133] = {
    [sym_operator] = STATE(182),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_using] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(49),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
  },
  [134] = {
    [sym_expression] = STATE(183),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_method] = STATE(90),
    [aux_sym_unary_expression_repeat1] = STATE(183),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(153),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(153),
    [sym_number] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_LBRACE] = ACTIONS(161),
    [sym_top_level] = ACTIONS(163),
    [sym_spec_var] = ACTIONS(165),
  },
  [135] = {
    [sym_parameter_group] = STATE(185),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(133),
    [sym_operator] = STATE(134),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(185),
    [anon_sym_RPAREN] = ACTIONS(552),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [136] = {
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
  [137] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(556),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(556),
    [sym_break] = ACTIONS(556),
    [sym_continue] = ACTIONS(556),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(556),
    [anon_sym_LT_POUNDitems] = ACTIONS(556),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(556),
    [anon_sym_LT_POUNDif] = ACTIONS(556),
    [anon_sym_LT_POUNDswitch] = ACTIONS(556),
    [anon_sym_LT_POUNDfunction] = ACTIONS(556),
    [anon_sym_LT_POUNDmacro] = ACTIONS(556),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(556),
    [sym_fallback] = ACTIONS(556),
    [sym_flush] = ACTIONS(556),
    [anon_sym_LT_POUNDftl] = ACTIONS(556),
    [anon_sym_LT_POUNDimport] = ACTIONS(556),
    [anon_sym_LT_POUNDinclude] = ACTIONS(556),
    [sym_lt] = ACTIONS(556),
    [sym_nt] = ACTIONS(556),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(556),
    [sym_rt] = ACTIONS(556),
    [anon_sym_LT_POUNDsetting] = ACTIONS(556),
    [sym_stop] = ACTIONS(556),
    [sym_t] = ACTIONS(556),
    [anon_sym_LT_POUNDvisit] = ACTIONS(556),
    [anon_sym_LT_POUNDassign] = ACTIONS(556),
    [sym_end_assign] = ACTIONS(556),
    [anon_sym_LT_POUNDglobal] = ACTIONS(556),
    [sym_end_global] = ACTIONS(556),
    [anon_sym_LT_POUNDlocal] = ACTIONS(556),
    [sym_end_local] = ACTIONS(556),
  },
  [138] = {
    [sym_directive] = STATE(137),
    [sym_list] = STATE(8),
    [sym_list_middle] = STATE(186),
    [sym_items] = STATE(137),
    [sym_sep] = STATE(137),
    [sym_sep_block] = STATE(142),
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
    [aux_sym_list_repeat1] = STATE(186),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(558),
    [sym_break] = ACTIONS(325),
    [sym_continue] = ACTIONS(325),
    [anon_sym_LT_POUNDitems] = ACTIONS(329),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(331),
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
  [139] = {
    [sym_parameter_group] = STATE(187),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_operator] = STATE(33),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [140] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(560),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(560),
    [sym_break] = ACTIONS(560),
    [sym_continue] = ACTIONS(560),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(560),
    [anon_sym_LT_POUNDitems] = ACTIONS(560),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(560),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(560),
    [anon_sym_LT_SLASH_POUNDsep_GT] = ACTIONS(562),
    [anon_sym_LT_POUNDif] = ACTIONS(560),
    [anon_sym_LT_POUNDswitch] = ACTIONS(560),
    [anon_sym_LT_POUNDfunction] = ACTIONS(560),
    [anon_sym_LT_POUNDmacro] = ACTIONS(560),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(560),
    [sym_fallback] = ACTIONS(560),
    [sym_flush] = ACTIONS(560),
    [anon_sym_LT_POUNDftl] = ACTIONS(560),
    [anon_sym_LT_POUNDimport] = ACTIONS(560),
    [anon_sym_LT_POUNDinclude] = ACTIONS(560),
    [sym_lt] = ACTIONS(560),
    [sym_nt] = ACTIONS(560),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(560),
    [sym_rt] = ACTIONS(560),
    [anon_sym_LT_POUNDsetting] = ACTIONS(560),
    [sym_stop] = ACTIONS(560),
    [sym_t] = ACTIONS(560),
    [anon_sym_LT_POUNDvisit] = ACTIONS(560),
    [anon_sym_LT_POUNDassign] = ACTIONS(560),
    [sym_end_assign] = ACTIONS(560),
    [anon_sym_LT_POUNDglobal] = ACTIONS(560),
    [sym_end_global] = ACTIONS(560),
    [anon_sym_LT_POUNDlocal] = ACTIONS(560),
    [sym_end_local] = ACTIONS(560),
  },
  [141] = {
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(564),
  },
  [142] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(560),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(560),
    [sym_break] = ACTIONS(560),
    [sym_continue] = ACTIONS(560),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(560),
    [anon_sym_LT_POUNDitems] = ACTIONS(560),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(560),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(560),
    [anon_sym_LT_POUNDif] = ACTIONS(560),
    [anon_sym_LT_POUNDswitch] = ACTIONS(560),
    [anon_sym_LT_POUNDfunction] = ACTIONS(560),
    [anon_sym_LT_POUNDmacro] = ACTIONS(560),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(560),
    [sym_fallback] = ACTIONS(560),
    [sym_flush] = ACTIONS(560),
    [anon_sym_LT_POUNDftl] = ACTIONS(560),
    [anon_sym_LT_POUNDimport] = ACTIONS(560),
    [anon_sym_LT_POUNDinclude] = ACTIONS(560),
    [sym_lt] = ACTIONS(560),
    [sym_nt] = ACTIONS(560),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(560),
    [sym_rt] = ACTIONS(560),
    [anon_sym_LT_POUNDsetting] = ACTIONS(560),
    [sym_stop] = ACTIONS(560),
    [sym_t] = ACTIONS(560),
    [anon_sym_LT_POUNDvisit] = ACTIONS(560),
    [anon_sym_LT_POUNDassign] = ACTIONS(560),
    [sym_end_assign] = ACTIONS(560),
    [anon_sym_LT_POUNDglobal] = ACTIONS(560),
    [sym_end_global] = ACTIONS(560),
    [anon_sym_LT_POUNDlocal] = ACTIONS(560),
    [sym_end_local] = ACTIONS(560),
  },
  [143] = {
    [sym_directive] = STATE(137),
    [sym_list] = STATE(8),
    [sym_list_middle] = STATE(191),
    [sym_list_else] = STATE(190),
    [sym_items] = STATE(137),
    [sym_sep] = STATE(137),
    [sym_sep_block] = STATE(142),
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
    [aux_sym_list_repeat1] = STATE(191),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(564),
    [sym_break] = ACTIONS(325),
    [sym_continue] = ACTIONS(325),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(327),
    [anon_sym_LT_POUNDitems] = ACTIONS(329),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(331),
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
  [144] = {
    [sym_expression] = STATE(145),
    [sym_string] = STATE(67),
    [sym_boolean] = STATE(67),
    [sym_sequence] = STATE(67),
    [sym_hash] = STATE(67),
    [sym_method] = STATE(67),
    [aux_sym_unary_expression_repeat1] = STATE(145),
    [anon_sym_GT] = ACTIONS(566),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym_top_level] = ACTIONS(133),
    [sym_spec_var] = ACTIONS(135),
  },
  [145] = {
    [sym_expression] = STATE(145),
    [sym_string] = STATE(67),
    [sym_boolean] = STATE(67),
    [sym_sequence] = STATE(67),
    [sym_hash] = STATE(67),
    [sym_method] = STATE(67),
    [aux_sym_unary_expression_repeat1] = STATE(145),
    [anon_sym_GT] = ACTIONS(540),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(525),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(525),
    [sym_number] = ACTIONS(528),
    [anon_sym_true] = ACTIONS(531),
    [anon_sym_LBRACK] = ACTIONS(534),
    [anon_sym_LBRACE] = ACTIONS(537),
    [sym_top_level] = ACTIONS(542),
    [sym_spec_var] = ACTIONS(545),
  },
  [146] = {
    [sym_directive] = STATE(85),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_elseif] = STATE(85),
    [sym_if_middle] = STATE(192),
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
    [aux_sym_if_repeat1] = STATE(192),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(568),
    [anon_sym_LT_POUNDelseif] = ACTIONS(151),
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
  [147] = {
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_top_level] = ACTIONS(109),
    [sym_spec_var] = ACTIONS(107),
    [anon_sym_LT_POUNDlist] = ACTIONS(570),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(570),
    [anon_sym_LT_POUNDif] = ACTIONS(570),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(570),
    [anon_sym_LT_POUNDelseif] = ACTIONS(570),
    [anon_sym_LT_POUNDswitch] = ACTIONS(570),
    [anon_sym_LT_POUNDfunction] = ACTIONS(570),
    [anon_sym_LT_POUNDmacro] = ACTIONS(570),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(570),
    [sym_fallback] = ACTIONS(570),
    [sym_flush] = ACTIONS(570),
    [anon_sym_LT_POUNDftl] = ACTIONS(570),
    [anon_sym_LT_POUNDimport] = ACTIONS(570),
    [anon_sym_LT_POUNDinclude] = ACTIONS(570),
    [sym_lt] = ACTIONS(570),
    [sym_nt] = ACTIONS(570),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(570),
    [sym_rt] = ACTIONS(570),
    [anon_sym_LT_POUNDsetting] = ACTIONS(570),
    [sym_stop] = ACTIONS(570),
    [sym_t] = ACTIONS(570),
    [anon_sym_LT_POUNDvisit] = ACTIONS(570),
    [anon_sym_LT_POUNDassign] = ACTIONS(570),
    [sym_end_assign] = ACTIONS(570),
    [anon_sym_LT_POUNDglobal] = ACTIONS(570),
    [sym_end_global] = ACTIONS(570),
    [anon_sym_LT_POUNDlocal] = ACTIONS(570),
    [sym_end_local] = ACTIONS(570),
  },
  [148] = {
    [sym_parameter_group] = STATE(97),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(35),
    [sym_operator] = STATE(36),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(97),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(572),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(574),
    [sym_comment] = ACTIONS(574),
    [anon_sym_LT_POUNDlist] = ACTIONS(574),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(574),
    [sym_break] = ACTIONS(574),
    [sym_continue] = ACTIONS(574),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(574),
    [anon_sym_LT_POUNDitems] = ACTIONS(574),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(574),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(574),
    [anon_sym_LT_POUNDif] = ACTIONS(574),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(574),
    [anon_sym_LT_POUNDelseif] = ACTIONS(574),
    [anon_sym_LT_POUNDswitch] = ACTIONS(574),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(574),
    [anon_sym_LT_POUNDcase] = ACTIONS(574),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(574),
    [anon_sym_LT_POUNDfunction] = ACTIONS(574),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(574),
    [anon_sym_LT_POUNDreturn] = ACTIONS(574),
    [anon_sym_LT_POUNDmacro] = ACTIONS(574),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(574),
    [anon_sym_LT_POUNDnested] = ACTIONS(574),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(574),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(574),
    [sym_recover] = ACTIONS(574),
    [sym_fallback] = ACTIONS(574),
    [sym_flush] = ACTIONS(574),
    [anon_sym_LT_POUNDftl] = ACTIONS(574),
    [anon_sym_LT_POUNDimport] = ACTIONS(574),
    [anon_sym_LT_POUNDinclude] = ACTIONS(574),
    [sym_lt] = ACTIONS(574),
    [sym_nt] = ACTIONS(574),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(574),
    [sym_rt] = ACTIONS(574),
    [anon_sym_LT_POUNDsetting] = ACTIONS(574),
    [sym_stop] = ACTIONS(574),
    [sym_t] = ACTIONS(574),
    [anon_sym_LT_POUNDvisit] = ACTIONS(574),
    [anon_sym_LT_POUNDassign] = ACTIONS(574),
    [sym_end_assign] = ACTIONS(574),
    [anon_sym_LT_POUNDglobal] = ACTIONS(574),
    [sym_end_global] = ACTIONS(574),
    [anon_sym_LT_POUNDlocal] = ACTIONS(574),
    [sym_end_local] = ACTIONS(574),
  },
  [150] = {
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(576),
  },
  [151] = {
    [sym_directive] = STATE(85),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_elseif] = STATE(85),
    [sym_if_middle] = STATE(151),
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
    [aux_sym_if_repeat1] = STATE(151),
    [anon_sym_LT_POUNDlist] = ACTIONS(578),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(581),
    [anon_sym_LT_POUNDif] = ACTIONS(583),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(581),
    [anon_sym_LT_POUNDelseif] = ACTIONS(586),
    [anon_sym_LT_POUNDswitch] = ACTIONS(589),
    [anon_sym_LT_POUNDfunction] = ACTIONS(592),
    [anon_sym_LT_POUNDmacro] = ACTIONS(595),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(598),
    [sym_fallback] = ACTIONS(601),
    [sym_flush] = ACTIONS(601),
    [anon_sym_LT_POUNDftl] = ACTIONS(604),
    [anon_sym_LT_POUNDimport] = ACTIONS(607),
    [anon_sym_LT_POUNDinclude] = ACTIONS(610),
    [sym_lt] = ACTIONS(601),
    [sym_nt] = ACTIONS(601),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(613),
    [sym_rt] = ACTIONS(601),
    [anon_sym_LT_POUNDsetting] = ACTIONS(616),
    [sym_stop] = ACTIONS(601),
    [sym_t] = ACTIONS(601),
    [anon_sym_LT_POUNDvisit] = ACTIONS(619),
    [anon_sym_LT_POUNDassign] = ACTIONS(622),
    [sym_end_assign] = ACTIONS(625),
    [anon_sym_LT_POUNDglobal] = ACTIONS(628),
    [sym_end_global] = ACTIONS(631),
    [anon_sym_LT_POUNDlocal] = ACTIONS(634),
    [sym_end_local] = ACTIONS(637),
  },
  [152] = {
    [sym_expression] = STATE(160),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_method] = STATE(90),
    [aux_sym_unary_expression_repeat1] = STATE(160),
    [anon_sym_as] = ACTIONS(640),
    [anon_sym_using] = ACTIONS(640),
    [anon_sym_COMMA] = ACTIONS(566),
    [anon_sym_DOT_DOT] = ACTIONS(640),
    [anon_sym_DOT_DOT_LT] = ACTIONS(566),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(566),
    [anon_sym_COLON] = ACTIONS(566),
    [anon_sym_STAR] = ACTIONS(640),
    [anon_sym_PLUS] = ACTIONS(640),
    [anon_sym_SLASH] = ACTIONS(640),
    [anon_sym_DASH] = ACTIONS(640),
    [anon_sym_PERCENT] = ACTIONS(640),
    [anon_sym_EQ_EQ] = ACTIONS(566),
    [anon_sym_BANG_EQ] = ACTIONS(566),
    [anon_sym_LT] = ACTIONS(640),
    [anon_sym_GT] = ACTIONS(640),
    [anon_sym_GT_EQ] = ACTIONS(566),
    [anon_sym_LT_EQ] = ACTIONS(566),
    [anon_sym_lt] = ACTIONS(640),
    [anon_sym_lte] = ACTIONS(640),
    [anon_sym_gt] = ACTIONS(640),
    [anon_sym_gte] = ACTIONS(640),
    [anon_sym_BANG] = ACTIONS(640),
    [anon_sym_AMP_AMP] = ACTIONS(566),
    [anon_sym_PIPE_PIPE] = ACTIONS(566),
    [anon_sym_QMARK_QMARK] = ACTIONS(566),
    [anon_sym_EQ] = ACTIONS(640),
    [anon_sym_PLUS_EQ] = ACTIONS(566),
    [anon_sym_DASH_EQ] = ACTIONS(566),
    [anon_sym_STAR_EQ] = ACTIONS(566),
    [anon_sym_SLASH_EQ] = ACTIONS(566),
    [anon_sym_PERCENT_EQ] = ACTIONS(566),
    [anon_sym_PLUS_PLUS] = ACTIONS(566),
    [anon_sym_DASH_DASH] = ACTIONS(566),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(566),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(566),
    [sym_number] = ACTIONS(640),
    [anon_sym_true] = ACTIONS(640),
    [anon_sym_LBRACK] = ACTIONS(566),
    [anon_sym_LBRACE] = ACTIONS(566),
    [sym_top_level] = ACTIONS(640),
    [sym_spec_var] = ACTIONS(566),
  },
  [153] = {
    [anon_sym_RPAREN] = ACTIONS(287),
    [anon_sym_as] = ACTIONS(289),
    [anon_sym_using] = ACTIONS(289),
    [anon_sym_COMMA] = ACTIONS(287),
    [anon_sym_DOT_DOT] = ACTIONS(289),
    [anon_sym_DOT_DOT_LT] = ACTIONS(287),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(287),
    [anon_sym_COLON] = ACTIONS(287),
    [anon_sym_STAR] = ACTIONS(289),
    [anon_sym_PLUS] = ACTIONS(289),
    [anon_sym_SLASH] = ACTIONS(289),
    [anon_sym_DASH] = ACTIONS(289),
    [anon_sym_PERCENT] = ACTIONS(289),
    [anon_sym_EQ_EQ] = ACTIONS(287),
    [anon_sym_BANG_EQ] = ACTIONS(287),
    [anon_sym_LT] = ACTIONS(289),
    [anon_sym_GT] = ACTIONS(289),
    [anon_sym_GT_EQ] = ACTIONS(287),
    [anon_sym_LT_EQ] = ACTIONS(287),
    [anon_sym_lt] = ACTIONS(289),
    [anon_sym_lte] = ACTIONS(289),
    [anon_sym_gt] = ACTIONS(289),
    [anon_sym_gte] = ACTIONS(289),
    [anon_sym_BANG] = ACTIONS(289),
    [anon_sym_AMP_AMP] = ACTIONS(287),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [anon_sym_QMARK_QMARK] = ACTIONS(287),
    [anon_sym_EQ] = ACTIONS(289),
    [anon_sym_PLUS_EQ] = ACTIONS(287),
    [anon_sym_DASH_EQ] = ACTIONS(287),
    [anon_sym_STAR_EQ] = ACTIONS(287),
    [anon_sym_SLASH_EQ] = ACTIONS(287),
    [anon_sym_PERCENT_EQ] = ACTIONS(287),
    [anon_sym_PLUS_PLUS] = ACTIONS(287),
    [anon_sym_DASH_DASH] = ACTIONS(287),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(287),
    [sym_number] = ACTIONS(289),
    [anon_sym_true] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(287),
    [anon_sym_LBRACE] = ACTIONS(287),
    [sym_top_level] = ACTIONS(289),
    [sym_spec_var] = ACTIONS(287),
  },
  [154] = {
    [anon_sym_RPAREN] = ACTIONS(295),
    [anon_sym_as] = ACTIONS(297),
    [anon_sym_using] = ACTIONS(297),
    [anon_sym_COMMA] = ACTIONS(295),
    [anon_sym_DOT_DOT] = ACTIONS(297),
    [anon_sym_DOT_DOT_LT] = ACTIONS(295),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(295),
    [anon_sym_STAR] = ACTIONS(297),
    [anon_sym_PLUS] = ACTIONS(297),
    [anon_sym_SLASH] = ACTIONS(297),
    [anon_sym_DASH] = ACTIONS(297),
    [anon_sym_PERCENT] = ACTIONS(297),
    [anon_sym_EQ_EQ] = ACTIONS(295),
    [anon_sym_BANG_EQ] = ACTIONS(295),
    [anon_sym_LT] = ACTIONS(297),
    [anon_sym_GT] = ACTIONS(297),
    [anon_sym_GT_EQ] = ACTIONS(295),
    [anon_sym_LT_EQ] = ACTIONS(295),
    [anon_sym_lt] = ACTIONS(297),
    [anon_sym_lte] = ACTIONS(297),
    [anon_sym_gt] = ACTIONS(297),
    [anon_sym_gte] = ACTIONS(297),
    [anon_sym_BANG] = ACTIONS(297),
    [anon_sym_AMP_AMP] = ACTIONS(295),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_QMARK_QMARK] = ACTIONS(295),
    [anon_sym_EQ] = ACTIONS(297),
    [anon_sym_PLUS_EQ] = ACTIONS(295),
    [anon_sym_DASH_EQ] = ACTIONS(295),
    [anon_sym_STAR_EQ] = ACTIONS(295),
    [anon_sym_SLASH_EQ] = ACTIONS(295),
    [anon_sym_PERCENT_EQ] = ACTIONS(295),
    [anon_sym_PLUS_PLUS] = ACTIONS(295),
    [anon_sym_DASH_DASH] = ACTIONS(295),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(295),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(295),
    [sym_number] = ACTIONS(297),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(295),
    [sym_top_level] = ACTIONS(297),
    [sym_spec_var] = ACTIONS(295),
  },
  [155] = {
    [sym_expression] = STATE(73),
    [sym_string] = STATE(67),
    [sym_boolean] = STATE(67),
    [sym_sequence] = STATE(67),
    [sym_hash] = STATE(67),
    [sym_method] = STATE(67),
    [aux_sym_sequence_repeat1] = STATE(129),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_RBRACK] = ACTIONS(642),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym_top_level] = ACTIONS(133),
    [sym_spec_var] = ACTIONS(135),
  },
  [156] = {
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_as] = ACTIONS(313),
    [anon_sym_using] = ACTIONS(313),
    [anon_sym_COMMA] = ACTIONS(311),
    [anon_sym_DOT_DOT] = ACTIONS(313),
    [anon_sym_DOT_DOT_LT] = ACTIONS(311),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(311),
    [anon_sym_COLON] = ACTIONS(311),
    [anon_sym_STAR] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(313),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_DASH] = ACTIONS(313),
    [anon_sym_PERCENT] = ACTIONS(313),
    [anon_sym_EQ_EQ] = ACTIONS(311),
    [anon_sym_BANG_EQ] = ACTIONS(311),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_GT_EQ] = ACTIONS(311),
    [anon_sym_LT_EQ] = ACTIONS(311),
    [anon_sym_lt] = ACTIONS(313),
    [anon_sym_lte] = ACTIONS(313),
    [anon_sym_gt] = ACTIONS(313),
    [anon_sym_gte] = ACTIONS(313),
    [anon_sym_BANG] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(311),
    [anon_sym_PIPE_PIPE] = ACTIONS(311),
    [anon_sym_QMARK_QMARK] = ACTIONS(311),
    [anon_sym_EQ] = ACTIONS(313),
    [anon_sym_PLUS_EQ] = ACTIONS(311),
    [anon_sym_DASH_EQ] = ACTIONS(311),
    [anon_sym_STAR_EQ] = ACTIONS(311),
    [anon_sym_SLASH_EQ] = ACTIONS(311),
    [anon_sym_PERCENT_EQ] = ACTIONS(311),
    [anon_sym_PLUS_PLUS] = ACTIONS(311),
    [anon_sym_DASH_DASH] = ACTIONS(311),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(311),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(311),
    [sym_number] = ACTIONS(313),
    [anon_sym_true] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(311),
    [anon_sym_LBRACE] = ACTIONS(311),
    [sym_top_level] = ACTIONS(313),
    [sym_spec_var] = ACTIONS(311),
  },
  [157] = {
    [sym_expression] = STATE(131),
    [sym_string] = STATE(67),
    [sym_boolean] = STATE(67),
    [sym_sequence] = STATE(67),
    [sym_hash] = STATE(67),
    [sym_method] = STATE(67),
    [aux_sym_unary_expression_repeat1] = STATE(131),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(644),
    [sym_top_level] = ACTIONS(133),
    [sym_spec_var] = ACTIONS(135),
  },
  [158] = {
    [sym_parameter_group] = STATE(198),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(133),
    [sym_operator] = STATE(134),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(198),
    [anon_sym_RPAREN] = ACTIONS(646),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [159] = {
    [anon_sym_RPAREN] = ACTIONS(319),
    [anon_sym_as] = ACTIONS(321),
    [anon_sym_using] = ACTIONS(321),
    [anon_sym_COMMA] = ACTIONS(319),
    [anon_sym_DOT_DOT] = ACTIONS(321),
    [anon_sym_DOT_DOT_LT] = ACTIONS(319),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(319),
    [anon_sym_COLON] = ACTIONS(319),
    [anon_sym_STAR] = ACTIONS(321),
    [anon_sym_PLUS] = ACTIONS(321),
    [anon_sym_SLASH] = ACTIONS(321),
    [anon_sym_DASH] = ACTIONS(321),
    [anon_sym_PERCENT] = ACTIONS(321),
    [anon_sym_EQ_EQ] = ACTIONS(319),
    [anon_sym_BANG_EQ] = ACTIONS(319),
    [anon_sym_LT] = ACTIONS(321),
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_GT_EQ] = ACTIONS(319),
    [anon_sym_LT_EQ] = ACTIONS(319),
    [anon_sym_lt] = ACTIONS(321),
    [anon_sym_lte] = ACTIONS(321),
    [anon_sym_gt] = ACTIONS(321),
    [anon_sym_gte] = ACTIONS(321),
    [anon_sym_BANG] = ACTIONS(321),
    [anon_sym_AMP_AMP] = ACTIONS(319),
    [anon_sym_PIPE_PIPE] = ACTIONS(319),
    [anon_sym_QMARK_QMARK] = ACTIONS(319),
    [anon_sym_EQ] = ACTIONS(321),
    [anon_sym_PLUS_EQ] = ACTIONS(319),
    [anon_sym_DASH_EQ] = ACTIONS(319),
    [anon_sym_STAR_EQ] = ACTIONS(319),
    [anon_sym_SLASH_EQ] = ACTIONS(319),
    [anon_sym_PERCENT_EQ] = ACTIONS(319),
    [anon_sym_PLUS_PLUS] = ACTIONS(319),
    [anon_sym_DASH_DASH] = ACTIONS(319),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(319),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(319),
    [sym_number] = ACTIONS(321),
    [anon_sym_true] = ACTIONS(321),
    [anon_sym_LBRACK] = ACTIONS(319),
    [anon_sym_LBRACE] = ACTIONS(319),
    [sym_top_level] = ACTIONS(321),
    [sym_spec_var] = ACTIONS(319),
  },
  [160] = {
    [sym_expression] = STATE(160),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_method] = STATE(90),
    [aux_sym_unary_expression_repeat1] = STATE(160),
    [anon_sym_as] = ACTIONS(648),
    [anon_sym_using] = ACTIONS(648),
    [anon_sym_COMMA] = ACTIONS(540),
    [anon_sym_DOT_DOT] = ACTIONS(648),
    [anon_sym_DOT_DOT_LT] = ACTIONS(540),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(540),
    [anon_sym_COLON] = ACTIONS(540),
    [anon_sym_STAR] = ACTIONS(648),
    [anon_sym_PLUS] = ACTIONS(648),
    [anon_sym_SLASH] = ACTIONS(648),
    [anon_sym_DASH] = ACTIONS(648),
    [anon_sym_PERCENT] = ACTIONS(648),
    [anon_sym_EQ_EQ] = ACTIONS(540),
    [anon_sym_BANG_EQ] = ACTIONS(540),
    [anon_sym_LT] = ACTIONS(648),
    [anon_sym_GT] = ACTIONS(648),
    [anon_sym_GT_EQ] = ACTIONS(540),
    [anon_sym_LT_EQ] = ACTIONS(540),
    [anon_sym_lt] = ACTIONS(648),
    [anon_sym_lte] = ACTIONS(648),
    [anon_sym_gt] = ACTIONS(648),
    [anon_sym_gte] = ACTIONS(648),
    [anon_sym_BANG] = ACTIONS(648),
    [anon_sym_AMP_AMP] = ACTIONS(540),
    [anon_sym_PIPE_PIPE] = ACTIONS(540),
    [anon_sym_QMARK_QMARK] = ACTIONS(540),
    [anon_sym_EQ] = ACTIONS(648),
    [anon_sym_PLUS_EQ] = ACTIONS(540),
    [anon_sym_DASH_EQ] = ACTIONS(540),
    [anon_sym_STAR_EQ] = ACTIONS(540),
    [anon_sym_SLASH_EQ] = ACTIONS(540),
    [anon_sym_PERCENT_EQ] = ACTIONS(540),
    [anon_sym_PLUS_PLUS] = ACTIONS(540),
    [anon_sym_DASH_DASH] = ACTIONS(540),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(650),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(650),
    [sym_number] = ACTIONS(653),
    [anon_sym_true] = ACTIONS(656),
    [anon_sym_LBRACK] = ACTIONS(659),
    [anon_sym_LBRACE] = ACTIONS(662),
    [sym_top_level] = ACTIONS(665),
    [sym_spec_var] = ACTIONS(668),
  },
  [161] = {
    [sym_directive] = STATE(85),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_if_else] = STATE(199),
    [sym_elseif] = STATE(85),
    [sym_if_middle] = STATE(151),
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
    [aux_sym_if_repeat1] = STATE(151),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(147),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(576),
    [anon_sym_LT_POUNDelseif] = ACTIONS(151),
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
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(671),
    [sym_comment] = ACTIONS(671),
    [anon_sym_LT_POUNDlist] = ACTIONS(671),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(671),
    [sym_break] = ACTIONS(671),
    [sym_continue] = ACTIONS(671),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(671),
    [anon_sym_LT_POUNDitems] = ACTIONS(671),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(671),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(671),
    [anon_sym_LT_POUNDif] = ACTIONS(671),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(671),
    [anon_sym_LT_POUNDelseif] = ACTIONS(671),
    [anon_sym_LT_POUNDswitch] = ACTIONS(671),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(671),
    [anon_sym_LT_POUNDcase] = ACTIONS(671),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(671),
    [anon_sym_LT_POUNDfunction] = ACTIONS(671),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(671),
    [anon_sym_LT_POUNDreturn] = ACTIONS(671),
    [anon_sym_LT_POUNDmacro] = ACTIONS(671),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(671),
    [anon_sym_LT_POUNDnested] = ACTIONS(671),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(671),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(671),
    [sym_recover] = ACTIONS(671),
    [sym_fallback] = ACTIONS(671),
    [sym_flush] = ACTIONS(671),
    [anon_sym_LT_POUNDftl] = ACTIONS(671),
    [anon_sym_LT_POUNDimport] = ACTIONS(671),
    [anon_sym_LT_POUNDinclude] = ACTIONS(671),
    [sym_lt] = ACTIONS(671),
    [sym_nt] = ACTIONS(671),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(671),
    [sym_rt] = ACTIONS(671),
    [anon_sym_LT_POUNDsetting] = ACTIONS(671),
    [sym_stop] = ACTIONS(671),
    [sym_t] = ACTIONS(671),
    [anon_sym_LT_POUNDvisit] = ACTIONS(671),
    [anon_sym_LT_POUNDassign] = ACTIONS(671),
    [sym_end_assign] = ACTIONS(671),
    [anon_sym_LT_POUNDglobal] = ACTIONS(671),
    [sym_end_global] = ACTIONS(671),
    [anon_sym_LT_POUNDlocal] = ACTIONS(671),
    [sym_end_local] = ACTIONS(671),
  },
  [163] = {
    [sym_parameter_group] = STATE(200),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(32),
    [sym_operator] = STATE(33),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [164] = {
    [sym_directive] = STATE(201),
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
    [aux_sym_case_repeat1] = STATE(201),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(673),
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
  [165] = {
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(675),
    [anon_sym_LT_POUNDcase] = ACTIONS(675),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(675),
  },
  [166] = {
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(677),
  },
  [167] = {
    [sym_case] = STATE(165),
    [sym_default] = STATE(203),
    [sym_switch_middle] = STATE(204),
    [aux_sym_switch_repeat1] = STATE(204),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(677),
    [anon_sym_LT_POUNDcase] = ACTIONS(384),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(386),
  },
  [168] = {
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_top_level] = ACTIONS(109),
    [sym_spec_var] = ACTIONS(107),
    [anon_sym_LT_POUNDlist] = ACTIONS(679),
    [anon_sym_LT_POUNDif] = ACTIONS(679),
    [anon_sym_LT_POUNDswitch] = ACTIONS(679),
    [anon_sym_LT_POUNDfunction] = ACTIONS(679),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(679),
    [anon_sym_LT_POUNDreturn] = ACTIONS(679),
    [anon_sym_LT_POUNDmacro] = ACTIONS(679),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(679),
    [anon_sym_LT_POUNDnested] = ACTIONS(679),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(679),
    [sym_fallback] = ACTIONS(679),
    [sym_flush] = ACTIONS(679),
    [anon_sym_LT_POUNDftl] = ACTIONS(679),
    [anon_sym_LT_POUNDimport] = ACTIONS(679),
    [anon_sym_LT_POUNDinclude] = ACTIONS(679),
    [sym_lt] = ACTIONS(679),
    [sym_nt] = ACTIONS(679),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(679),
    [sym_rt] = ACTIONS(679),
    [anon_sym_LT_POUNDsetting] = ACTIONS(679),
    [sym_stop] = ACTIONS(679),
    [sym_t] = ACTIONS(679),
    [anon_sym_LT_POUNDvisit] = ACTIONS(679),
    [anon_sym_LT_POUNDassign] = ACTIONS(679),
    [sym_end_assign] = ACTIONS(679),
    [anon_sym_LT_POUNDglobal] = ACTIONS(679),
    [sym_end_global] = ACTIONS(679),
    [anon_sym_LT_POUNDlocal] = ACTIONS(679),
    [sym_end_local] = ACTIONS(679),
  },
  [169] = {
    [anon_sym_GT] = ACTIONS(681),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(683),
    [sym_comment] = ACTIONS(683),
    [anon_sym_LT_POUNDlist] = ACTIONS(683),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(683),
    [sym_break] = ACTIONS(683),
    [sym_continue] = ACTIONS(683),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(683),
    [anon_sym_LT_POUNDitems] = ACTIONS(683),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(683),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(683),
    [anon_sym_LT_POUNDif] = ACTIONS(683),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(683),
    [anon_sym_LT_POUNDelseif] = ACTIONS(683),
    [anon_sym_LT_POUNDswitch] = ACTIONS(683),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(683),
    [anon_sym_LT_POUNDcase] = ACTIONS(683),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(683),
    [anon_sym_LT_POUNDfunction] = ACTIONS(683),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(683),
    [anon_sym_LT_POUNDreturn] = ACTIONS(683),
    [anon_sym_LT_POUNDmacro] = ACTIONS(683),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(683),
    [anon_sym_LT_POUNDnested] = ACTIONS(683),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(683),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(683),
    [sym_recover] = ACTIONS(683),
    [sym_fallback] = ACTIONS(683),
    [sym_flush] = ACTIONS(683),
    [anon_sym_LT_POUNDftl] = ACTIONS(683),
    [anon_sym_LT_POUNDimport] = ACTIONS(683),
    [anon_sym_LT_POUNDinclude] = ACTIONS(683),
    [sym_lt] = ACTIONS(683),
    [sym_nt] = ACTIONS(683),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(683),
    [sym_rt] = ACTIONS(683),
    [anon_sym_LT_POUNDsetting] = ACTIONS(683),
    [sym_stop] = ACTIONS(683),
    [sym_t] = ACTIONS(683),
    [anon_sym_LT_POUNDvisit] = ACTIONS(683),
    [anon_sym_LT_POUNDassign] = ACTIONS(683),
    [sym_end_assign] = ACTIONS(683),
    [anon_sym_LT_POUNDglobal] = ACTIONS(683),
    [sym_end_global] = ACTIONS(683),
    [anon_sym_LT_POUNDlocal] = ACTIONS(683),
    [sym_end_local] = ACTIONS(683),
  },
  [171] = {
    [sym_directive] = STATE(101),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_function_middle] = STATE(171),
    [sym_return] = STATE(101),
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
    [aux_sym_function_repeat1] = STATE(171),
    [anon_sym_LT_POUNDlist] = ACTIONS(685),
    [anon_sym_LT_POUNDif] = ACTIONS(688),
    [anon_sym_LT_POUNDswitch] = ACTIONS(691),
    [anon_sym_LT_POUNDfunction] = ACTIONS(694),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(697),
    [anon_sym_LT_POUNDreturn] = ACTIONS(699),
    [anon_sym_LT_POUNDmacro] = ACTIONS(702),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(705),
    [sym_fallback] = ACTIONS(708),
    [sym_flush] = ACTIONS(708),
    [anon_sym_LT_POUNDftl] = ACTIONS(711),
    [anon_sym_LT_POUNDimport] = ACTIONS(714),
    [anon_sym_LT_POUNDinclude] = ACTIONS(717),
    [sym_lt] = ACTIONS(708),
    [sym_nt] = ACTIONS(708),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(720),
    [sym_rt] = ACTIONS(708),
    [anon_sym_LT_POUNDsetting] = ACTIONS(723),
    [sym_stop] = ACTIONS(708),
    [sym_t] = ACTIONS(708),
    [anon_sym_LT_POUNDvisit] = ACTIONS(726),
    [anon_sym_LT_POUNDassign] = ACTIONS(729),
    [sym_end_assign] = ACTIONS(732),
    [anon_sym_LT_POUNDglobal] = ACTIONS(735),
    [sym_end_global] = ACTIONS(738),
    [anon_sym_LT_POUNDlocal] = ACTIONS(741),
    [sym_end_local] = ACTIONS(744),
  },
  [172] = {
    [sym_directive] = STATE(101),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_function_middle] = STATE(171),
    [sym_return] = STATE(101),
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
    [aux_sym_function_repeat1] = STATE(171),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(747),
    [anon_sym_LT_POUNDreturn] = ACTIONS(173),
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
  [173] = {
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_top_level] = ACTIONS(109),
    [sym_spec_var] = ACTIONS(107),
    [anon_sym_LT_POUNDlist] = ACTIONS(749),
    [anon_sym_LT_POUNDif] = ACTIONS(749),
    [anon_sym_LT_POUNDswitch] = ACTIONS(749),
    [anon_sym_LT_POUNDfunction] = ACTIONS(749),
    [anon_sym_LT_POUNDreturn] = ACTIONS(749),
    [anon_sym_LT_POUNDmacro] = ACTIONS(749),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(749),
    [anon_sym_LT_POUNDnested] = ACTIONS(749),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(749),
    [sym_fallback] = ACTIONS(749),
    [sym_flush] = ACTIONS(749),
    [anon_sym_LT_POUNDftl] = ACTIONS(749),
    [anon_sym_LT_POUNDimport] = ACTIONS(749),
    [anon_sym_LT_POUNDinclude] = ACTIONS(749),
    [sym_lt] = ACTIONS(749),
    [sym_nt] = ACTIONS(749),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(749),
    [sym_rt] = ACTIONS(749),
    [anon_sym_LT_POUNDsetting] = ACTIONS(749),
    [sym_stop] = ACTIONS(749),
    [sym_t] = ACTIONS(749),
    [anon_sym_LT_POUNDvisit] = ACTIONS(749),
    [anon_sym_LT_POUNDassign] = ACTIONS(749),
    [sym_end_assign] = ACTIONS(749),
    [anon_sym_LT_POUNDglobal] = ACTIONS(749),
    [sym_end_global] = ACTIONS(749),
    [anon_sym_LT_POUNDlocal] = ACTIONS(749),
    [sym_end_local] = ACTIONS(749),
  },
  [174] = {
    [sym_parameter_group] = STATE(97),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(35),
    [sym_operator] = STATE(36),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(97),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(751),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(753),
    [sym_comment] = ACTIONS(753),
    [anon_sym_LT_POUNDlist] = ACTIONS(753),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(753),
    [sym_break] = ACTIONS(753),
    [sym_continue] = ACTIONS(753),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(753),
    [anon_sym_LT_POUNDitems] = ACTIONS(753),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(753),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(753),
    [anon_sym_LT_POUNDif] = ACTIONS(753),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(753),
    [anon_sym_LT_POUNDelseif] = ACTIONS(753),
    [anon_sym_LT_POUNDswitch] = ACTIONS(753),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(753),
    [anon_sym_LT_POUNDcase] = ACTIONS(753),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(753),
    [anon_sym_LT_POUNDfunction] = ACTIONS(753),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(753),
    [anon_sym_LT_POUNDreturn] = ACTIONS(753),
    [anon_sym_LT_POUNDmacro] = ACTIONS(753),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(753),
    [anon_sym_LT_POUNDnested] = ACTIONS(753),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(753),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(753),
    [sym_recover] = ACTIONS(753),
    [sym_fallback] = ACTIONS(753),
    [sym_flush] = ACTIONS(753),
    [anon_sym_LT_POUNDftl] = ACTIONS(753),
    [anon_sym_LT_POUNDimport] = ACTIONS(753),
    [anon_sym_LT_POUNDinclude] = ACTIONS(753),
    [sym_lt] = ACTIONS(753),
    [sym_nt] = ACTIONS(753),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(753),
    [sym_rt] = ACTIONS(753),
    [anon_sym_LT_POUNDsetting] = ACTIONS(753),
    [sym_stop] = ACTIONS(753),
    [sym_t] = ACTIONS(753),
    [anon_sym_LT_POUNDvisit] = ACTIONS(753),
    [anon_sym_LT_POUNDassign] = ACTIONS(753),
    [sym_end_assign] = ACTIONS(753),
    [anon_sym_LT_POUNDglobal] = ACTIONS(753),
    [sym_end_global] = ACTIONS(753),
    [anon_sym_LT_POUNDlocal] = ACTIONS(753),
    [sym_end_local] = ACTIONS(753),
  },
  [176] = {
    [sym_directive] = STATE(106),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_return] = STATE(106),
    [sym_macro] = STATE(8),
    [sym_macro_middle] = STATE(176),
    [sym_nested] = STATE(106),
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
    [aux_sym_macro_repeat1] = STATE(176),
    [anon_sym_LT_POUNDlist] = ACTIONS(755),
    [anon_sym_LT_POUNDif] = ACTIONS(758),
    [anon_sym_LT_POUNDswitch] = ACTIONS(761),
    [anon_sym_LT_POUNDfunction] = ACTIONS(764),
    [anon_sym_LT_POUNDreturn] = ACTIONS(767),
    [anon_sym_LT_POUNDmacro] = ACTIONS(770),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(773),
    [anon_sym_LT_POUNDnested] = ACTIONS(775),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(778),
    [sym_fallback] = ACTIONS(781),
    [sym_flush] = ACTIONS(781),
    [anon_sym_LT_POUNDftl] = ACTIONS(784),
    [anon_sym_LT_POUNDimport] = ACTIONS(787),
    [anon_sym_LT_POUNDinclude] = ACTIONS(790),
    [sym_lt] = ACTIONS(781),
    [sym_nt] = ACTIONS(781),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(793),
    [sym_rt] = ACTIONS(781),
    [anon_sym_LT_POUNDsetting] = ACTIONS(796),
    [sym_stop] = ACTIONS(781),
    [sym_t] = ACTIONS(781),
    [anon_sym_LT_POUNDvisit] = ACTIONS(799),
    [anon_sym_LT_POUNDassign] = ACTIONS(802),
    [sym_end_assign] = ACTIONS(805),
    [anon_sym_LT_POUNDglobal] = ACTIONS(808),
    [sym_end_global] = ACTIONS(811),
    [anon_sym_LT_POUNDlocal] = ACTIONS(814),
    [sym_end_local] = ACTIONS(817),
  },
  [177] = {
    [sym_directive] = STATE(106),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_return] = STATE(106),
    [sym_macro] = STATE(8),
    [sym_macro_middle] = STATE(176),
    [sym_nested] = STATE(106),
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
    [aux_sym_macro_repeat1] = STATE(176),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_POUNDfunction] = ACTIONS(15),
    [anon_sym_LT_POUNDreturn] = ACTIONS(173),
    [anon_sym_LT_POUNDmacro] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(820),
    [anon_sym_LT_POUNDnested] = ACTIONS(179),
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
  [178] = {
    [anon_sym_COMMA] = ACTIONS(496),
    [anon_sym_GT] = ACTIONS(496),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(496),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(496),
    [sym_number] = ACTIONS(498),
    [anon_sym_true] = ACTIONS(498),
    [anon_sym_LBRACK] = ACTIONS(496),
    [anon_sym_RBRACK] = ACTIONS(496),
    [anon_sym_LBRACE] = ACTIONS(496),
    [anon_sym_RBRACE] = ACTIONS(496),
    [sym_top_level] = ACTIONS(498),
    [sym_spec_var] = ACTIONS(496),
  },
  [179] = {
    [anon_sym_COMMA] = ACTIONS(521),
    [anon_sym_GT] = ACTIONS(521),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(521),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(521),
    [sym_number] = ACTIONS(523),
    [anon_sym_true] = ACTIONS(523),
    [anon_sym_LBRACK] = ACTIONS(521),
    [anon_sym_RBRACK] = ACTIONS(521),
    [anon_sym_LBRACE] = ACTIONS(521),
    [anon_sym_RBRACE] = ACTIONS(521),
    [sym_top_level] = ACTIONS(523),
    [sym_spec_var] = ACTIONS(521),
  },
  [180] = {
    [anon_sym_COMMA] = ACTIONS(548),
    [anon_sym_GT] = ACTIONS(548),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(548),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(548),
    [sym_number] = ACTIONS(550),
    [anon_sym_true] = ACTIONS(550),
    [anon_sym_LBRACK] = ACTIONS(548),
    [anon_sym_RBRACK] = ACTIONS(548),
    [anon_sym_LBRACE] = ACTIONS(548),
    [anon_sym_RBRACE] = ACTIONS(548),
    [sym_top_level] = ACTIONS(550),
    [sym_spec_var] = ACTIONS(548),
  },
  [181] = {
    [sym_parameter_group] = STATE(185),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(133),
    [sym_operator] = STATE(134),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(185),
    [anon_sym_RPAREN] = ACTIONS(822),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [182] = {
    [sym_expression] = STATE(210),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_method] = STATE(90),
    [aux_sym_unary_expression_repeat1] = STATE(210),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(153),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(153),
    [sym_number] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_LBRACE] = ACTIONS(161),
    [sym_top_level] = ACTIONS(163),
    [sym_spec_var] = ACTIONS(165),
  },
  [183] = {
    [sym_expression] = STATE(211),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_method] = STATE(90),
    [aux_sym_unary_expression_repeat1] = STATE(211),
    [anon_sym_RPAREN] = ACTIONS(333),
    [anon_sym_as] = ACTIONS(353),
    [anon_sym_using] = ACTIONS(353),
    [anon_sym_COMMA] = ACTIONS(333),
    [anon_sym_DOT_DOT] = ACTIONS(353),
    [anon_sym_DOT_DOT_LT] = ACTIONS(333),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(333),
    [anon_sym_COLON] = ACTIONS(333),
    [anon_sym_STAR] = ACTIONS(353),
    [anon_sym_PLUS] = ACTIONS(353),
    [anon_sym_SLASH] = ACTIONS(353),
    [anon_sym_DASH] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(353),
    [anon_sym_EQ_EQ] = ACTIONS(333),
    [anon_sym_BANG_EQ] = ACTIONS(333),
    [anon_sym_LT] = ACTIONS(353),
    [anon_sym_GT] = ACTIONS(353),
    [anon_sym_GT_EQ] = ACTIONS(333),
    [anon_sym_LT_EQ] = ACTIONS(333),
    [anon_sym_lt] = ACTIONS(353),
    [anon_sym_lte] = ACTIONS(353),
    [anon_sym_gt] = ACTIONS(353),
    [anon_sym_gte] = ACTIONS(353),
    [anon_sym_BANG] = ACTIONS(353),
    [anon_sym_AMP_AMP] = ACTIONS(333),
    [anon_sym_PIPE_PIPE] = ACTIONS(333),
    [anon_sym_QMARK_QMARK] = ACTIONS(333),
    [anon_sym_EQ] = ACTIONS(353),
    [anon_sym_PLUS_EQ] = ACTIONS(333),
    [anon_sym_DASH_EQ] = ACTIONS(333),
    [anon_sym_STAR_EQ] = ACTIONS(333),
    [anon_sym_SLASH_EQ] = ACTIONS(333),
    [anon_sym_PERCENT_EQ] = ACTIONS(333),
    [anon_sym_PLUS_PLUS] = ACTIONS(333),
    [anon_sym_DASH_DASH] = ACTIONS(333),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(333),
    [sym_number] = ACTIONS(353),
    [anon_sym_true] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(333),
    [sym_top_level] = ACTIONS(353),
    [sym_spec_var] = ACTIONS(333),
  },
  [184] = {
    [anon_sym_as] = ACTIONS(824),
    [anon_sym_using] = ACTIONS(824),
    [anon_sym_COMMA] = ACTIONS(824),
    [anon_sym_DOT_DOT] = ACTIONS(826),
    [anon_sym_DOT_DOT_LT] = ACTIONS(824),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(824),
    [anon_sym_COLON] = ACTIONS(824),
    [anon_sym_STAR] = ACTIONS(826),
    [anon_sym_PLUS] = ACTIONS(826),
    [anon_sym_SLASH] = ACTIONS(826),
    [anon_sym_DASH] = ACTIONS(826),
    [anon_sym_PERCENT] = ACTIONS(826),
    [anon_sym_EQ_EQ] = ACTIONS(824),
    [anon_sym_BANG_EQ] = ACTIONS(824),
    [anon_sym_LT] = ACTIONS(826),
    [anon_sym_GT] = ACTIONS(826),
    [anon_sym_GT_EQ] = ACTIONS(824),
    [anon_sym_LT_EQ] = ACTIONS(824),
    [anon_sym_lt] = ACTIONS(826),
    [anon_sym_lte] = ACTIONS(824),
    [anon_sym_gt] = ACTIONS(826),
    [anon_sym_gte] = ACTIONS(824),
    [anon_sym_BANG] = ACTIONS(826),
    [anon_sym_AMP_AMP] = ACTIONS(824),
    [anon_sym_PIPE_PIPE] = ACTIONS(824),
    [anon_sym_QMARK_QMARK] = ACTIONS(824),
    [anon_sym_EQ] = ACTIONS(826),
    [anon_sym_PLUS_EQ] = ACTIONS(824),
    [anon_sym_DASH_EQ] = ACTIONS(824),
    [anon_sym_STAR_EQ] = ACTIONS(824),
    [anon_sym_SLASH_EQ] = ACTIONS(824),
    [anon_sym_PERCENT_EQ] = ACTIONS(824),
    [anon_sym_PLUS_PLUS] = ACTIONS(824),
    [anon_sym_DASH_DASH] = ACTIONS(824),
  },
  [185] = {
    [sym_parameter_group] = STATE(185),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(133),
    [sym_operator] = STATE(134),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(185),
    [anon_sym_RPAREN] = ACTIONS(828),
    [anon_sym_as] = ACTIONS(355),
    [anon_sym_using] = ACTIONS(355),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_DOT_DOT] = ACTIONS(355),
    [anon_sym_DOT_DOT_LT] = ACTIONS(358),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(358),
    [anon_sym_COLON] = ACTIONS(358),
    [anon_sym_STAR] = ACTIONS(355),
    [anon_sym_PLUS] = ACTIONS(355),
    [anon_sym_SLASH] = ACTIONS(355),
    [anon_sym_DASH] = ACTIONS(355),
    [anon_sym_PERCENT] = ACTIONS(355),
    [anon_sym_EQ_EQ] = ACTIONS(358),
    [anon_sym_BANG_EQ] = ACTIONS(358),
    [anon_sym_LT] = ACTIONS(355),
    [anon_sym_GT] = ACTIONS(355),
    [anon_sym_GT_EQ] = ACTIONS(358),
    [anon_sym_LT_EQ] = ACTIONS(358),
    [anon_sym_lt] = ACTIONS(355),
    [anon_sym_lte] = ACTIONS(355),
    [anon_sym_gt] = ACTIONS(355),
    [anon_sym_gte] = ACTIONS(355),
    [anon_sym_BANG] = ACTIONS(355),
    [anon_sym_AMP_AMP] = ACTIONS(358),
    [anon_sym_PIPE_PIPE] = ACTIONS(358),
    [anon_sym_QMARK_QMARK] = ACTIONS(358),
    [anon_sym_EQ] = ACTIONS(355),
    [anon_sym_PLUS_EQ] = ACTIONS(358),
    [anon_sym_DASH_EQ] = ACTIONS(358),
    [anon_sym_STAR_EQ] = ACTIONS(358),
    [anon_sym_SLASH_EQ] = ACTIONS(358),
    [anon_sym_PERCENT_EQ] = ACTIONS(358),
    [anon_sym_PLUS_PLUS] = ACTIONS(358),
    [anon_sym_DASH_DASH] = ACTIONS(358),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(361),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(361),
    [sym_number] = ACTIONS(364),
    [anon_sym_true] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(370),
    [anon_sym_LBRACE] = ACTIONS(373),
    [sym_top_level] = ACTIONS(376),
    [sym_spec_var] = ACTIONS(379),
  },
  [186] = {
    [sym_directive] = STATE(137),
    [sym_list] = STATE(8),
    [sym_list_middle] = STATE(212),
    [sym_items] = STATE(137),
    [sym_sep] = STATE(137),
    [sym_sep_block] = STATE(142),
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
    [aux_sym_list_repeat1] = STATE(212),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(830),
    [sym_break] = ACTIONS(325),
    [sym_continue] = ACTIONS(325),
    [anon_sym_LT_POUNDitems] = ACTIONS(329),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(331),
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
  [187] = {
    [anon_sym_GT] = ACTIONS(832),
  },
  [188] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(834),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(834),
    [sym_break] = ACTIONS(834),
    [sym_continue] = ACTIONS(834),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(834),
    [anon_sym_LT_POUNDitems] = ACTIONS(834),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(834),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(834),
    [anon_sym_LT_POUNDif] = ACTIONS(834),
    [anon_sym_LT_POUNDswitch] = ACTIONS(834),
    [anon_sym_LT_POUNDfunction] = ACTIONS(834),
    [anon_sym_LT_POUNDmacro] = ACTIONS(834),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(834),
    [sym_fallback] = ACTIONS(834),
    [sym_flush] = ACTIONS(834),
    [anon_sym_LT_POUNDftl] = ACTIONS(834),
    [anon_sym_LT_POUNDimport] = ACTIONS(834),
    [anon_sym_LT_POUNDinclude] = ACTIONS(834),
    [sym_lt] = ACTIONS(834),
    [sym_nt] = ACTIONS(834),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(834),
    [sym_rt] = ACTIONS(834),
    [anon_sym_LT_POUNDsetting] = ACTIONS(834),
    [sym_stop] = ACTIONS(834),
    [sym_t] = ACTIONS(834),
    [anon_sym_LT_POUNDvisit] = ACTIONS(834),
    [anon_sym_LT_POUNDassign] = ACTIONS(834),
    [sym_end_assign] = ACTIONS(834),
    [anon_sym_LT_POUNDglobal] = ACTIONS(834),
    [sym_end_global] = ACTIONS(834),
    [anon_sym_LT_POUNDlocal] = ACTIONS(834),
    [sym_end_local] = ACTIONS(834),
  },
  [189] = {
    [ts_builtin_sym_end] = ACTIONS(836),
    [sym_comment] = ACTIONS(836),
    [anon_sym_LT_POUNDlist] = ACTIONS(836),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(836),
    [sym_break] = ACTIONS(836),
    [sym_continue] = ACTIONS(836),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(836),
    [anon_sym_LT_POUNDitems] = ACTIONS(836),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(836),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(836),
    [anon_sym_LT_POUNDif] = ACTIONS(836),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(836),
    [anon_sym_LT_POUNDelseif] = ACTIONS(836),
    [anon_sym_LT_POUNDswitch] = ACTIONS(836),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(836),
    [anon_sym_LT_POUNDcase] = ACTIONS(836),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(836),
    [anon_sym_LT_POUNDfunction] = ACTIONS(836),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(836),
    [anon_sym_LT_POUNDreturn] = ACTIONS(836),
    [anon_sym_LT_POUNDmacro] = ACTIONS(836),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(836),
    [anon_sym_LT_POUNDnested] = ACTIONS(836),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(836),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(836),
    [sym_recover] = ACTIONS(836),
    [sym_fallback] = ACTIONS(836),
    [sym_flush] = ACTIONS(836),
    [anon_sym_LT_POUNDftl] = ACTIONS(836),
    [anon_sym_LT_POUNDimport] = ACTIONS(836),
    [anon_sym_LT_POUNDinclude] = ACTIONS(836),
    [sym_lt] = ACTIONS(836),
    [sym_nt] = ACTIONS(836),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(836),
    [sym_rt] = ACTIONS(836),
    [anon_sym_LT_POUNDsetting] = ACTIONS(836),
    [sym_stop] = ACTIONS(836),
    [sym_t] = ACTIONS(836),
    [anon_sym_LT_POUNDvisit] = ACTIONS(836),
    [anon_sym_LT_POUNDassign] = ACTIONS(836),
    [sym_end_assign] = ACTIONS(836),
    [anon_sym_LT_POUNDglobal] = ACTIONS(836),
    [sym_end_global] = ACTIONS(836),
    [anon_sym_LT_POUNDlocal] = ACTIONS(836),
    [sym_end_local] = ACTIONS(836),
  },
  [190] = {
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(838),
  },
  [191] = {
    [sym_directive] = STATE(137),
    [sym_list] = STATE(8),
    [sym_list_middle] = STATE(191),
    [sym_items] = STATE(137),
    [sym_sep] = STATE(137),
    [sym_sep_block] = STATE(142),
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
    [aux_sym_list_repeat1] = STATE(191),
    [anon_sym_LT_POUNDlist] = ACTIONS(840),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(843),
    [sym_break] = ACTIONS(845),
    [sym_continue] = ACTIONS(845),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(843),
    [anon_sym_LT_POUNDitems] = ACTIONS(848),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(851),
    [anon_sym_LT_POUNDif] = ACTIONS(854),
    [anon_sym_LT_POUNDswitch] = ACTIONS(857),
    [anon_sym_LT_POUNDfunction] = ACTIONS(860),
    [anon_sym_LT_POUNDmacro] = ACTIONS(863),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(866),
    [sym_fallback] = ACTIONS(869),
    [sym_flush] = ACTIONS(869),
    [anon_sym_LT_POUNDftl] = ACTIONS(872),
    [anon_sym_LT_POUNDimport] = ACTIONS(875),
    [anon_sym_LT_POUNDinclude] = ACTIONS(878),
    [sym_lt] = ACTIONS(869),
    [sym_nt] = ACTIONS(869),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(881),
    [sym_rt] = ACTIONS(869),
    [anon_sym_LT_POUNDsetting] = ACTIONS(884),
    [sym_stop] = ACTIONS(869),
    [sym_t] = ACTIONS(869),
    [anon_sym_LT_POUNDvisit] = ACTIONS(887),
    [anon_sym_LT_POUNDassign] = ACTIONS(890),
    [sym_end_assign] = ACTIONS(893),
    [anon_sym_LT_POUNDglobal] = ACTIONS(896),
    [sym_end_global] = ACTIONS(899),
    [anon_sym_LT_POUNDlocal] = ACTIONS(902),
    [sym_end_local] = ACTIONS(905),
  },
  [192] = {
    [sym_directive] = STATE(85),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_elseif] = STATE(85),
    [sym_if_middle] = STATE(192),
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
    [aux_sym_if_repeat1] = STATE(192),
    [anon_sym_LT_POUNDlist] = ACTIONS(578),
    [anon_sym_LT_POUNDif] = ACTIONS(583),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(581),
    [anon_sym_LT_POUNDelseif] = ACTIONS(586),
    [anon_sym_LT_POUNDswitch] = ACTIONS(589),
    [anon_sym_LT_POUNDfunction] = ACTIONS(592),
    [anon_sym_LT_POUNDmacro] = ACTIONS(595),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(598),
    [sym_fallback] = ACTIONS(601),
    [sym_flush] = ACTIONS(601),
    [anon_sym_LT_POUNDftl] = ACTIONS(604),
    [anon_sym_LT_POUNDimport] = ACTIONS(607),
    [anon_sym_LT_POUNDinclude] = ACTIONS(610),
    [sym_lt] = ACTIONS(601),
    [sym_nt] = ACTIONS(601),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(613),
    [sym_rt] = ACTIONS(601),
    [anon_sym_LT_POUNDsetting] = ACTIONS(616),
    [sym_stop] = ACTIONS(601),
    [sym_t] = ACTIONS(601),
    [anon_sym_LT_POUNDvisit] = ACTIONS(619),
    [anon_sym_LT_POUNDassign] = ACTIONS(622),
    [sym_end_assign] = ACTIONS(625),
    [anon_sym_LT_POUNDglobal] = ACTIONS(628),
    [sym_end_global] = ACTIONS(631),
    [anon_sym_LT_POUNDlocal] = ACTIONS(634),
    [sym_end_local] = ACTIONS(637),
  },
  [193] = {
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_top_level] = ACTIONS(109),
    [sym_spec_var] = ACTIONS(107),
    [anon_sym_LT_POUNDlist] = ACTIONS(908),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(908),
    [anon_sym_LT_POUNDif] = ACTIONS(908),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(908),
    [anon_sym_LT_POUNDelseif] = ACTIONS(908),
    [anon_sym_LT_POUNDswitch] = ACTIONS(908),
    [anon_sym_LT_POUNDfunction] = ACTIONS(908),
    [anon_sym_LT_POUNDmacro] = ACTIONS(908),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(908),
    [sym_fallback] = ACTIONS(908),
    [sym_flush] = ACTIONS(908),
    [anon_sym_LT_POUNDftl] = ACTIONS(908),
    [anon_sym_LT_POUNDimport] = ACTIONS(908),
    [anon_sym_LT_POUNDinclude] = ACTIONS(908),
    [sym_lt] = ACTIONS(908),
    [sym_nt] = ACTIONS(908),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(908),
    [sym_rt] = ACTIONS(908),
    [anon_sym_LT_POUNDsetting] = ACTIONS(908),
    [sym_stop] = ACTIONS(908),
    [sym_t] = ACTIONS(908),
    [anon_sym_LT_POUNDvisit] = ACTIONS(908),
    [anon_sym_LT_POUNDassign] = ACTIONS(908),
    [sym_end_assign] = ACTIONS(908),
    [anon_sym_LT_POUNDglobal] = ACTIONS(908),
    [sym_end_global] = ACTIONS(908),
    [anon_sym_LT_POUNDlocal] = ACTIONS(908),
    [sym_end_local] = ACTIONS(908),
  },
  [194] = {
    [ts_builtin_sym_end] = ACTIONS(910),
    [sym_comment] = ACTIONS(910),
    [anon_sym_LT_POUNDlist] = ACTIONS(910),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(910),
    [sym_break] = ACTIONS(910),
    [sym_continue] = ACTIONS(910),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(910),
    [anon_sym_LT_POUNDitems] = ACTIONS(910),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(910),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(910),
    [anon_sym_LT_POUNDif] = ACTIONS(910),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(910),
    [anon_sym_LT_POUNDelseif] = ACTIONS(910),
    [anon_sym_LT_POUNDswitch] = ACTIONS(910),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(910),
    [anon_sym_LT_POUNDcase] = ACTIONS(910),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(910),
    [anon_sym_LT_POUNDfunction] = ACTIONS(910),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(910),
    [anon_sym_LT_POUNDreturn] = ACTIONS(910),
    [anon_sym_LT_POUNDmacro] = ACTIONS(910),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(910),
    [anon_sym_LT_POUNDnested] = ACTIONS(910),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(910),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(910),
    [sym_recover] = ACTIONS(910),
    [sym_fallback] = ACTIONS(910),
    [sym_flush] = ACTIONS(910),
    [anon_sym_LT_POUNDftl] = ACTIONS(910),
    [anon_sym_LT_POUNDimport] = ACTIONS(910),
    [anon_sym_LT_POUNDinclude] = ACTIONS(910),
    [sym_lt] = ACTIONS(910),
    [sym_nt] = ACTIONS(910),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(910),
    [sym_rt] = ACTIONS(910),
    [anon_sym_LT_POUNDsetting] = ACTIONS(910),
    [sym_stop] = ACTIONS(910),
    [sym_t] = ACTIONS(910),
    [anon_sym_LT_POUNDvisit] = ACTIONS(910),
    [anon_sym_LT_POUNDassign] = ACTIONS(910),
    [sym_end_assign] = ACTIONS(910),
    [anon_sym_LT_POUNDglobal] = ACTIONS(910),
    [sym_end_global] = ACTIONS(910),
    [anon_sym_LT_POUNDlocal] = ACTIONS(910),
    [sym_end_local] = ACTIONS(910),
  },
  [195] = {
    [anon_sym_RPAREN] = ACTIONS(496),
    [anon_sym_as] = ACTIONS(498),
    [anon_sym_using] = ACTIONS(498),
    [anon_sym_COMMA] = ACTIONS(496),
    [anon_sym_DOT_DOT] = ACTIONS(498),
    [anon_sym_DOT_DOT_LT] = ACTIONS(496),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(496),
    [anon_sym_COLON] = ACTIONS(496),
    [anon_sym_STAR] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(498),
    [anon_sym_SLASH] = ACTIONS(498),
    [anon_sym_DASH] = ACTIONS(498),
    [anon_sym_PERCENT] = ACTIONS(498),
    [anon_sym_EQ_EQ] = ACTIONS(496),
    [anon_sym_BANG_EQ] = ACTIONS(496),
    [anon_sym_LT] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(498),
    [anon_sym_GT_EQ] = ACTIONS(496),
    [anon_sym_LT_EQ] = ACTIONS(496),
    [anon_sym_lt] = ACTIONS(498),
    [anon_sym_lte] = ACTIONS(498),
    [anon_sym_gt] = ACTIONS(498),
    [anon_sym_gte] = ACTIONS(498),
    [anon_sym_BANG] = ACTIONS(498),
    [anon_sym_AMP_AMP] = ACTIONS(496),
    [anon_sym_PIPE_PIPE] = ACTIONS(496),
    [anon_sym_QMARK_QMARK] = ACTIONS(496),
    [anon_sym_EQ] = ACTIONS(498),
    [anon_sym_PLUS_EQ] = ACTIONS(496),
    [anon_sym_DASH_EQ] = ACTIONS(496),
    [anon_sym_STAR_EQ] = ACTIONS(496),
    [anon_sym_SLASH_EQ] = ACTIONS(496),
    [anon_sym_PERCENT_EQ] = ACTIONS(496),
    [anon_sym_PLUS_PLUS] = ACTIONS(496),
    [anon_sym_DASH_DASH] = ACTIONS(496),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(496),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(496),
    [sym_number] = ACTIONS(498),
    [anon_sym_true] = ACTIONS(498),
    [anon_sym_LBRACK] = ACTIONS(496),
    [anon_sym_LBRACE] = ACTIONS(496),
    [sym_top_level] = ACTIONS(498),
    [sym_spec_var] = ACTIONS(496),
  },
  [196] = {
    [anon_sym_RPAREN] = ACTIONS(521),
    [anon_sym_as] = ACTIONS(523),
    [anon_sym_using] = ACTIONS(523),
    [anon_sym_COMMA] = ACTIONS(521),
    [anon_sym_DOT_DOT] = ACTIONS(523),
    [anon_sym_DOT_DOT_LT] = ACTIONS(521),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(521),
    [anon_sym_COLON] = ACTIONS(521),
    [anon_sym_STAR] = ACTIONS(523),
    [anon_sym_PLUS] = ACTIONS(523),
    [anon_sym_SLASH] = ACTIONS(523),
    [anon_sym_DASH] = ACTIONS(523),
    [anon_sym_PERCENT] = ACTIONS(523),
    [anon_sym_EQ_EQ] = ACTIONS(521),
    [anon_sym_BANG_EQ] = ACTIONS(521),
    [anon_sym_LT] = ACTIONS(523),
    [anon_sym_GT] = ACTIONS(523),
    [anon_sym_GT_EQ] = ACTIONS(521),
    [anon_sym_LT_EQ] = ACTIONS(521),
    [anon_sym_lt] = ACTIONS(523),
    [anon_sym_lte] = ACTIONS(523),
    [anon_sym_gt] = ACTIONS(523),
    [anon_sym_gte] = ACTIONS(523),
    [anon_sym_BANG] = ACTIONS(523),
    [anon_sym_AMP_AMP] = ACTIONS(521),
    [anon_sym_PIPE_PIPE] = ACTIONS(521),
    [anon_sym_QMARK_QMARK] = ACTIONS(521),
    [anon_sym_EQ] = ACTIONS(523),
    [anon_sym_PLUS_EQ] = ACTIONS(521),
    [anon_sym_DASH_EQ] = ACTIONS(521),
    [anon_sym_STAR_EQ] = ACTIONS(521),
    [anon_sym_SLASH_EQ] = ACTIONS(521),
    [anon_sym_PERCENT_EQ] = ACTIONS(521),
    [anon_sym_PLUS_PLUS] = ACTIONS(521),
    [anon_sym_DASH_DASH] = ACTIONS(521),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(521),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(521),
    [sym_number] = ACTIONS(523),
    [anon_sym_true] = ACTIONS(523),
    [anon_sym_LBRACK] = ACTIONS(521),
    [anon_sym_LBRACE] = ACTIONS(521),
    [sym_top_level] = ACTIONS(523),
    [sym_spec_var] = ACTIONS(521),
  },
  [197] = {
    [anon_sym_RPAREN] = ACTIONS(548),
    [anon_sym_as] = ACTIONS(550),
    [anon_sym_using] = ACTIONS(550),
    [anon_sym_COMMA] = ACTIONS(548),
    [anon_sym_DOT_DOT] = ACTIONS(550),
    [anon_sym_DOT_DOT_LT] = ACTIONS(548),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(548),
    [anon_sym_COLON] = ACTIONS(548),
    [anon_sym_STAR] = ACTIONS(550),
    [anon_sym_PLUS] = ACTIONS(550),
    [anon_sym_SLASH] = ACTIONS(550),
    [anon_sym_DASH] = ACTIONS(550),
    [anon_sym_PERCENT] = ACTIONS(550),
    [anon_sym_EQ_EQ] = ACTIONS(548),
    [anon_sym_BANG_EQ] = ACTIONS(548),
    [anon_sym_LT] = ACTIONS(550),
    [anon_sym_GT] = ACTIONS(550),
    [anon_sym_GT_EQ] = ACTIONS(548),
    [anon_sym_LT_EQ] = ACTIONS(548),
    [anon_sym_lt] = ACTIONS(550),
    [anon_sym_lte] = ACTIONS(550),
    [anon_sym_gt] = ACTIONS(550),
    [anon_sym_gte] = ACTIONS(550),
    [anon_sym_BANG] = ACTIONS(550),
    [anon_sym_AMP_AMP] = ACTIONS(548),
    [anon_sym_PIPE_PIPE] = ACTIONS(548),
    [anon_sym_QMARK_QMARK] = ACTIONS(548),
    [anon_sym_EQ] = ACTIONS(550),
    [anon_sym_PLUS_EQ] = ACTIONS(548),
    [anon_sym_DASH_EQ] = ACTIONS(548),
    [anon_sym_STAR_EQ] = ACTIONS(548),
    [anon_sym_SLASH_EQ] = ACTIONS(548),
    [anon_sym_PERCENT_EQ] = ACTIONS(548),
    [anon_sym_PLUS_PLUS] = ACTIONS(548),
    [anon_sym_DASH_DASH] = ACTIONS(548),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(548),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(548),
    [sym_number] = ACTIONS(550),
    [anon_sym_true] = ACTIONS(550),
    [anon_sym_LBRACK] = ACTIONS(548),
    [anon_sym_LBRACE] = ACTIONS(548),
    [sym_top_level] = ACTIONS(550),
    [sym_spec_var] = ACTIONS(548),
  },
  [198] = {
    [sym_parameter_group] = STATE(185),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_expression] = STATE(133),
    [sym_operator] = STATE(134),
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_sequence] = STATE(25),
    [sym_hash] = STATE(25),
    [sym_method] = STATE(25),
    [aux_sym_group_repeat1] = STATE(185),
    [anon_sym_RPAREN] = ACTIONS(912),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_DOT_DOT_LT] = ACTIONS(49),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(47),
    [anon_sym_lte] = ACTIONS(47),
    [anon_sym_gt] = ACTIONS(47),
    [anon_sym_gte] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_QMARK_QMARK] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_PLUS_EQ] = ACTIONS(49),
    [anon_sym_DASH_EQ] = ACTIONS(49),
    [anon_sym_STAR_EQ] = ACTIONS(49),
    [anon_sym_SLASH_EQ] = ACTIONS(49),
    [anon_sym_PERCENT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_DASH_DASH] = ACTIONS(49),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_top_level] = ACTIONS(61),
    [sym_spec_var] = ACTIONS(63),
  },
  [199] = {
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(914),
  },
  [200] = {
    [anon_sym_GT] = ACTIONS(916),
  },
  [201] = {
    [sym_directive] = STATE(218),
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
    [aux_sym_case_repeat1] = STATE(218),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(918),
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
  [202] = {
    [ts_builtin_sym_end] = ACTIONS(920),
    [sym_comment] = ACTIONS(920),
    [anon_sym_LT_POUNDlist] = ACTIONS(920),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(920),
    [sym_break] = ACTIONS(920),
    [sym_continue] = ACTIONS(920),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(920),
    [anon_sym_LT_POUNDitems] = ACTIONS(920),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(920),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(920),
    [anon_sym_LT_POUNDif] = ACTIONS(920),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(920),
    [anon_sym_LT_POUNDelseif] = ACTIONS(920),
    [anon_sym_LT_POUNDswitch] = ACTIONS(920),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(920),
    [anon_sym_LT_POUNDcase] = ACTIONS(920),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(920),
    [anon_sym_LT_POUNDfunction] = ACTIONS(920),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(920),
    [anon_sym_LT_POUNDreturn] = ACTIONS(920),
    [anon_sym_LT_POUNDmacro] = ACTIONS(920),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(920),
    [anon_sym_LT_POUNDnested] = ACTIONS(920),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(920),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(920),
    [sym_recover] = ACTIONS(920),
    [sym_fallback] = ACTIONS(920),
    [sym_flush] = ACTIONS(920),
    [anon_sym_LT_POUNDftl] = ACTIONS(920),
    [anon_sym_LT_POUNDimport] = ACTIONS(920),
    [anon_sym_LT_POUNDinclude] = ACTIONS(920),
    [sym_lt] = ACTIONS(920),
    [sym_nt] = ACTIONS(920),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(920),
    [sym_rt] = ACTIONS(920),
    [anon_sym_LT_POUNDsetting] = ACTIONS(920),
    [sym_stop] = ACTIONS(920),
    [sym_t] = ACTIONS(920),
    [anon_sym_LT_POUNDvisit] = ACTIONS(920),
    [anon_sym_LT_POUNDassign] = ACTIONS(920),
    [sym_end_assign] = ACTIONS(920),
    [anon_sym_LT_POUNDglobal] = ACTIONS(920),
    [sym_end_global] = ACTIONS(920),
    [anon_sym_LT_POUNDlocal] = ACTIONS(920),
    [sym_end_local] = ACTIONS(920),
  },
  [203] = {
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(922),
  },
  [204] = {
    [sym_case] = STATE(165),
    [sym_switch_middle] = STATE(204),
    [aux_sym_switch_repeat1] = STATE(204),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(924),
    [anon_sym_LT_POUNDcase] = ACTIONS(926),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(924),
  },
  [205] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(929),
    [anon_sym_LT_POUNDif] = ACTIONS(929),
    [anon_sym_LT_POUNDswitch] = ACTIONS(929),
    [anon_sym_LT_POUNDfunction] = ACTIONS(929),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(929),
    [anon_sym_LT_POUNDreturn] = ACTIONS(929),
    [anon_sym_LT_POUNDmacro] = ACTIONS(929),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(929),
    [anon_sym_LT_POUNDnested] = ACTIONS(929),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(929),
    [sym_fallback] = ACTIONS(929),
    [sym_flush] = ACTIONS(929),
    [anon_sym_LT_POUNDftl] = ACTIONS(929),
    [anon_sym_LT_POUNDimport] = ACTIONS(929),
    [anon_sym_LT_POUNDinclude] = ACTIONS(929),
    [sym_lt] = ACTIONS(929),
    [sym_nt] = ACTIONS(929),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(929),
    [sym_rt] = ACTIONS(929),
    [anon_sym_LT_POUNDsetting] = ACTIONS(929),
    [sym_stop] = ACTIONS(929),
    [sym_t] = ACTIONS(929),
    [anon_sym_LT_POUNDvisit] = ACTIONS(929),
    [anon_sym_LT_POUNDassign] = ACTIONS(929),
    [sym_end_assign] = ACTIONS(929),
    [anon_sym_LT_POUNDglobal] = ACTIONS(929),
    [sym_end_global] = ACTIONS(929),
    [anon_sym_LT_POUNDlocal] = ACTIONS(929),
    [sym_end_local] = ACTIONS(929),
  },
  [206] = {
    [ts_builtin_sym_end] = ACTIONS(931),
    [sym_comment] = ACTIONS(931),
    [anon_sym_LT_POUNDlist] = ACTIONS(931),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(931),
    [sym_break] = ACTIONS(931),
    [sym_continue] = ACTIONS(931),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(931),
    [anon_sym_LT_POUNDitems] = ACTIONS(931),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(931),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(931),
    [anon_sym_LT_POUNDif] = ACTIONS(931),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(931),
    [anon_sym_LT_POUNDelseif] = ACTIONS(931),
    [anon_sym_LT_POUNDswitch] = ACTIONS(931),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(931),
    [anon_sym_LT_POUNDcase] = ACTIONS(931),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(931),
    [anon_sym_LT_POUNDfunction] = ACTIONS(931),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(931),
    [anon_sym_LT_POUNDreturn] = ACTIONS(931),
    [anon_sym_LT_POUNDmacro] = ACTIONS(931),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(931),
    [anon_sym_LT_POUNDnested] = ACTIONS(931),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(931),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(931),
    [sym_recover] = ACTIONS(931),
    [sym_fallback] = ACTIONS(931),
    [sym_flush] = ACTIONS(931),
    [anon_sym_LT_POUNDftl] = ACTIONS(931),
    [anon_sym_LT_POUNDimport] = ACTIONS(931),
    [anon_sym_LT_POUNDinclude] = ACTIONS(931),
    [sym_lt] = ACTIONS(931),
    [sym_nt] = ACTIONS(931),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(931),
    [sym_rt] = ACTIONS(931),
    [anon_sym_LT_POUNDsetting] = ACTIONS(931),
    [sym_stop] = ACTIONS(931),
    [sym_t] = ACTIONS(931),
    [anon_sym_LT_POUNDvisit] = ACTIONS(931),
    [anon_sym_LT_POUNDassign] = ACTIONS(931),
    [sym_end_assign] = ACTIONS(931),
    [anon_sym_LT_POUNDglobal] = ACTIONS(931),
    [sym_end_global] = ACTIONS(931),
    [anon_sym_LT_POUNDlocal] = ACTIONS(931),
    [sym_end_local] = ACTIONS(931),
  },
  [207] = {
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_top_level] = ACTIONS(109),
    [sym_spec_var] = ACTIONS(107),
    [anon_sym_LT_POUNDlist] = ACTIONS(933),
    [anon_sym_LT_POUNDif] = ACTIONS(933),
    [anon_sym_LT_POUNDswitch] = ACTIONS(933),
    [anon_sym_LT_POUNDfunction] = ACTIONS(933),
    [anon_sym_LT_POUNDreturn] = ACTIONS(933),
    [anon_sym_LT_POUNDmacro] = ACTIONS(933),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(933),
    [anon_sym_LT_POUNDnested] = ACTIONS(933),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(933),
    [sym_fallback] = ACTIONS(933),
    [sym_flush] = ACTIONS(933),
    [anon_sym_LT_POUNDftl] = ACTIONS(933),
    [anon_sym_LT_POUNDimport] = ACTIONS(933),
    [anon_sym_LT_POUNDinclude] = ACTIONS(933),
    [sym_lt] = ACTIONS(933),
    [sym_nt] = ACTIONS(933),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(933),
    [sym_rt] = ACTIONS(933),
    [anon_sym_LT_POUNDsetting] = ACTIONS(933),
    [sym_stop] = ACTIONS(933),
    [sym_t] = ACTIONS(933),
    [anon_sym_LT_POUNDvisit] = ACTIONS(933),
    [anon_sym_LT_POUNDassign] = ACTIONS(933),
    [sym_end_assign] = ACTIONS(933),
    [anon_sym_LT_POUNDglobal] = ACTIONS(933),
    [sym_end_global] = ACTIONS(933),
    [anon_sym_LT_POUNDlocal] = ACTIONS(933),
    [sym_end_local] = ACTIONS(933),
  },
  [208] = {
    [ts_builtin_sym_end] = ACTIONS(935),
    [sym_comment] = ACTIONS(935),
    [anon_sym_LT_POUNDlist] = ACTIONS(935),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(935),
    [sym_break] = ACTIONS(935),
    [sym_continue] = ACTIONS(935),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(935),
    [anon_sym_LT_POUNDitems] = ACTIONS(935),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(935),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(935),
    [anon_sym_LT_POUNDif] = ACTIONS(935),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(935),
    [anon_sym_LT_POUNDelseif] = ACTIONS(935),
    [anon_sym_LT_POUNDswitch] = ACTIONS(935),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(935),
    [anon_sym_LT_POUNDcase] = ACTIONS(935),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(935),
    [anon_sym_LT_POUNDfunction] = ACTIONS(935),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(935),
    [anon_sym_LT_POUNDreturn] = ACTIONS(935),
    [anon_sym_LT_POUNDmacro] = ACTIONS(935),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(935),
    [anon_sym_LT_POUNDnested] = ACTIONS(935),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(935),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(935),
    [sym_recover] = ACTIONS(935),
    [sym_fallback] = ACTIONS(935),
    [sym_flush] = ACTIONS(935),
    [anon_sym_LT_POUNDftl] = ACTIONS(935),
    [anon_sym_LT_POUNDimport] = ACTIONS(935),
    [anon_sym_LT_POUNDinclude] = ACTIONS(935),
    [sym_lt] = ACTIONS(935),
    [sym_nt] = ACTIONS(935),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(935),
    [sym_rt] = ACTIONS(935),
    [anon_sym_LT_POUNDsetting] = ACTIONS(935),
    [sym_stop] = ACTIONS(935),
    [sym_t] = ACTIONS(935),
    [anon_sym_LT_POUNDvisit] = ACTIONS(935),
    [anon_sym_LT_POUNDassign] = ACTIONS(935),
    [sym_end_assign] = ACTIONS(935),
    [anon_sym_LT_POUNDglobal] = ACTIONS(935),
    [sym_end_global] = ACTIONS(935),
    [anon_sym_LT_POUNDlocal] = ACTIONS(935),
    [sym_end_local] = ACTIONS(935),
  },
  [209] = {
    [anon_sym_COMMA] = ACTIONS(824),
    [anon_sym_GT] = ACTIONS(824),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(824),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(824),
    [sym_number] = ACTIONS(826),
    [anon_sym_true] = ACTIONS(826),
    [anon_sym_LBRACK] = ACTIONS(824),
    [anon_sym_RBRACK] = ACTIONS(824),
    [anon_sym_LBRACE] = ACTIONS(824),
    [anon_sym_RBRACE] = ACTIONS(824),
    [sym_top_level] = ACTIONS(826),
    [sym_spec_var] = ACTIONS(824),
  },
  [210] = {
    [sym_expression] = STATE(211),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_method] = STATE(90),
    [aux_sym_unary_expression_repeat1] = STATE(211),
    [anon_sym_RPAREN] = ACTIONS(566),
    [anon_sym_as] = ACTIONS(640),
    [anon_sym_using] = ACTIONS(640),
    [anon_sym_COMMA] = ACTIONS(566),
    [anon_sym_DOT_DOT] = ACTIONS(640),
    [anon_sym_DOT_DOT_LT] = ACTIONS(566),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(566),
    [anon_sym_COLON] = ACTIONS(566),
    [anon_sym_STAR] = ACTIONS(640),
    [anon_sym_PLUS] = ACTIONS(640),
    [anon_sym_SLASH] = ACTIONS(640),
    [anon_sym_DASH] = ACTIONS(640),
    [anon_sym_PERCENT] = ACTIONS(640),
    [anon_sym_EQ_EQ] = ACTIONS(566),
    [anon_sym_BANG_EQ] = ACTIONS(566),
    [anon_sym_LT] = ACTIONS(640),
    [anon_sym_GT] = ACTIONS(640),
    [anon_sym_GT_EQ] = ACTIONS(566),
    [anon_sym_LT_EQ] = ACTIONS(566),
    [anon_sym_lt] = ACTIONS(640),
    [anon_sym_lte] = ACTIONS(640),
    [anon_sym_gt] = ACTIONS(640),
    [anon_sym_gte] = ACTIONS(640),
    [anon_sym_BANG] = ACTIONS(640),
    [anon_sym_AMP_AMP] = ACTIONS(566),
    [anon_sym_PIPE_PIPE] = ACTIONS(566),
    [anon_sym_QMARK_QMARK] = ACTIONS(566),
    [anon_sym_EQ] = ACTIONS(640),
    [anon_sym_PLUS_EQ] = ACTIONS(566),
    [anon_sym_DASH_EQ] = ACTIONS(566),
    [anon_sym_STAR_EQ] = ACTIONS(566),
    [anon_sym_SLASH_EQ] = ACTIONS(566),
    [anon_sym_PERCENT_EQ] = ACTIONS(566),
    [anon_sym_PLUS_PLUS] = ACTIONS(566),
    [anon_sym_DASH_DASH] = ACTIONS(566),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(566),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(566),
    [sym_number] = ACTIONS(640),
    [anon_sym_true] = ACTIONS(640),
    [anon_sym_LBRACK] = ACTIONS(566),
    [anon_sym_LBRACE] = ACTIONS(566),
    [sym_top_level] = ACTIONS(640),
    [sym_spec_var] = ACTIONS(566),
  },
  [211] = {
    [sym_expression] = STATE(211),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_method] = STATE(90),
    [aux_sym_unary_expression_repeat1] = STATE(211),
    [anon_sym_RPAREN] = ACTIONS(540),
    [anon_sym_as] = ACTIONS(648),
    [anon_sym_using] = ACTIONS(648),
    [anon_sym_COMMA] = ACTIONS(540),
    [anon_sym_DOT_DOT] = ACTIONS(648),
    [anon_sym_DOT_DOT_LT] = ACTIONS(540),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(540),
    [anon_sym_COLON] = ACTIONS(540),
    [anon_sym_STAR] = ACTIONS(648),
    [anon_sym_PLUS] = ACTIONS(648),
    [anon_sym_SLASH] = ACTIONS(648),
    [anon_sym_DASH] = ACTIONS(648),
    [anon_sym_PERCENT] = ACTIONS(648),
    [anon_sym_EQ_EQ] = ACTIONS(540),
    [anon_sym_BANG_EQ] = ACTIONS(540),
    [anon_sym_LT] = ACTIONS(648),
    [anon_sym_GT] = ACTIONS(648),
    [anon_sym_GT_EQ] = ACTIONS(540),
    [anon_sym_LT_EQ] = ACTIONS(540),
    [anon_sym_lt] = ACTIONS(648),
    [anon_sym_lte] = ACTIONS(648),
    [anon_sym_gt] = ACTIONS(648),
    [anon_sym_gte] = ACTIONS(648),
    [anon_sym_BANG] = ACTIONS(648),
    [anon_sym_AMP_AMP] = ACTIONS(540),
    [anon_sym_PIPE_PIPE] = ACTIONS(540),
    [anon_sym_QMARK_QMARK] = ACTIONS(540),
    [anon_sym_EQ] = ACTIONS(648),
    [anon_sym_PLUS_EQ] = ACTIONS(540),
    [anon_sym_DASH_EQ] = ACTIONS(540),
    [anon_sym_STAR_EQ] = ACTIONS(540),
    [anon_sym_SLASH_EQ] = ACTIONS(540),
    [anon_sym_PERCENT_EQ] = ACTIONS(540),
    [anon_sym_PLUS_PLUS] = ACTIONS(540),
    [anon_sym_DASH_DASH] = ACTIONS(540),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(650),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(650),
    [sym_number] = ACTIONS(653),
    [anon_sym_true] = ACTIONS(656),
    [anon_sym_LBRACK] = ACTIONS(659),
    [anon_sym_LBRACE] = ACTIONS(662),
    [sym_top_level] = ACTIONS(665),
    [sym_spec_var] = ACTIONS(668),
  },
  [212] = {
    [sym_directive] = STATE(137),
    [sym_list] = STATE(8),
    [sym_list_middle] = STATE(212),
    [sym_items] = STATE(137),
    [sym_sep] = STATE(137),
    [sym_sep_block] = STATE(142),
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
    [aux_sym_list_repeat1] = STATE(212),
    [anon_sym_LT_POUNDlist] = ACTIONS(840),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(843),
    [sym_break] = ACTIONS(845),
    [sym_continue] = ACTIONS(845),
    [anon_sym_LT_POUNDitems] = ACTIONS(848),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(851),
    [anon_sym_LT_POUNDif] = ACTIONS(854),
    [anon_sym_LT_POUNDswitch] = ACTIONS(857),
    [anon_sym_LT_POUNDfunction] = ACTIONS(860),
    [anon_sym_LT_POUNDmacro] = ACTIONS(863),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(866),
    [sym_fallback] = ACTIONS(869),
    [sym_flush] = ACTIONS(869),
    [anon_sym_LT_POUNDftl] = ACTIONS(872),
    [anon_sym_LT_POUNDimport] = ACTIONS(875),
    [anon_sym_LT_POUNDinclude] = ACTIONS(878),
    [sym_lt] = ACTIONS(869),
    [sym_nt] = ACTIONS(869),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(881),
    [sym_rt] = ACTIONS(869),
    [anon_sym_LT_POUNDsetting] = ACTIONS(884),
    [sym_stop] = ACTIONS(869),
    [sym_t] = ACTIONS(869),
    [anon_sym_LT_POUNDvisit] = ACTIONS(887),
    [anon_sym_LT_POUNDassign] = ACTIONS(890),
    [sym_end_assign] = ACTIONS(893),
    [anon_sym_LT_POUNDglobal] = ACTIONS(896),
    [sym_end_global] = ACTIONS(899),
    [anon_sym_LT_POUNDlocal] = ACTIONS(902),
    [sym_end_local] = ACTIONS(905),
  },
  [213] = {
    [sym_directive] = STATE(220),
    [sym_list] = STATE(8),
    [sym_items_middle] = STATE(222),
    [sym_sep] = STATE(220),
    [sym_sep_block] = STATE(142),
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
    [aux_sym_items_repeat1] = STATE(222),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [sym_break] = ACTIONS(937),
    [sym_continue] = ACTIONS(937),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(939),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(331),
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
  [214] = {
    [ts_builtin_sym_end] = ACTIONS(941),
    [sym_comment] = ACTIONS(941),
    [anon_sym_LT_POUNDlist] = ACTIONS(941),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(941),
    [sym_break] = ACTIONS(941),
    [sym_continue] = ACTIONS(941),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(941),
    [anon_sym_LT_POUNDitems] = ACTIONS(941),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(941),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(941),
    [anon_sym_LT_POUNDif] = ACTIONS(941),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(941),
    [anon_sym_LT_POUNDelseif] = ACTIONS(941),
    [anon_sym_LT_POUNDswitch] = ACTIONS(941),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(941),
    [anon_sym_LT_POUNDcase] = ACTIONS(941),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(941),
    [anon_sym_LT_POUNDfunction] = ACTIONS(941),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(941),
    [anon_sym_LT_POUNDreturn] = ACTIONS(941),
    [anon_sym_LT_POUNDmacro] = ACTIONS(941),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(941),
    [anon_sym_LT_POUNDnested] = ACTIONS(941),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(941),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(941),
    [sym_recover] = ACTIONS(941),
    [sym_fallback] = ACTIONS(941),
    [sym_flush] = ACTIONS(941),
    [anon_sym_LT_POUNDftl] = ACTIONS(941),
    [anon_sym_LT_POUNDimport] = ACTIONS(941),
    [anon_sym_LT_POUNDinclude] = ACTIONS(941),
    [sym_lt] = ACTIONS(941),
    [sym_nt] = ACTIONS(941),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(941),
    [sym_rt] = ACTIONS(941),
    [anon_sym_LT_POUNDsetting] = ACTIONS(941),
    [sym_stop] = ACTIONS(941),
    [sym_t] = ACTIONS(941),
    [anon_sym_LT_POUNDvisit] = ACTIONS(941),
    [anon_sym_LT_POUNDassign] = ACTIONS(941),
    [sym_end_assign] = ACTIONS(941),
    [anon_sym_LT_POUNDglobal] = ACTIONS(941),
    [sym_end_global] = ACTIONS(941),
    [anon_sym_LT_POUNDlocal] = ACTIONS(941),
    [sym_end_local] = ACTIONS(941),
  },
  [215] = {
    [anon_sym_RPAREN] = ACTIONS(824),
    [anon_sym_as] = ACTIONS(826),
    [anon_sym_using] = ACTIONS(826),
    [anon_sym_COMMA] = ACTIONS(824),
    [anon_sym_DOT_DOT] = ACTIONS(826),
    [anon_sym_DOT_DOT_LT] = ACTIONS(824),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(824),
    [anon_sym_COLON] = ACTIONS(824),
    [anon_sym_STAR] = ACTIONS(826),
    [anon_sym_PLUS] = ACTIONS(826),
    [anon_sym_SLASH] = ACTIONS(826),
    [anon_sym_DASH] = ACTIONS(826),
    [anon_sym_PERCENT] = ACTIONS(826),
    [anon_sym_EQ_EQ] = ACTIONS(824),
    [anon_sym_BANG_EQ] = ACTIONS(824),
    [anon_sym_LT] = ACTIONS(826),
    [anon_sym_GT] = ACTIONS(826),
    [anon_sym_GT_EQ] = ACTIONS(824),
    [anon_sym_LT_EQ] = ACTIONS(824),
    [anon_sym_lt] = ACTIONS(826),
    [anon_sym_lte] = ACTIONS(826),
    [anon_sym_gt] = ACTIONS(826),
    [anon_sym_gte] = ACTIONS(826),
    [anon_sym_BANG] = ACTIONS(826),
    [anon_sym_AMP_AMP] = ACTIONS(824),
    [anon_sym_PIPE_PIPE] = ACTIONS(824),
    [anon_sym_QMARK_QMARK] = ACTIONS(824),
    [anon_sym_EQ] = ACTIONS(826),
    [anon_sym_PLUS_EQ] = ACTIONS(824),
    [anon_sym_DASH_EQ] = ACTIONS(824),
    [anon_sym_STAR_EQ] = ACTIONS(824),
    [anon_sym_SLASH_EQ] = ACTIONS(824),
    [anon_sym_PERCENT_EQ] = ACTIONS(824),
    [anon_sym_PLUS_PLUS] = ACTIONS(824),
    [anon_sym_DASH_DASH] = ACTIONS(824),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(824),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(824),
    [sym_number] = ACTIONS(826),
    [anon_sym_true] = ACTIONS(826),
    [anon_sym_LBRACK] = ACTIONS(824),
    [anon_sym_LBRACE] = ACTIONS(824),
    [sym_top_level] = ACTIONS(826),
    [sym_spec_var] = ACTIONS(824),
  },
  [216] = {
    [ts_builtin_sym_end] = ACTIONS(943),
    [sym_comment] = ACTIONS(943),
    [anon_sym_LT_POUNDlist] = ACTIONS(943),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(943),
    [sym_break] = ACTIONS(943),
    [sym_continue] = ACTIONS(943),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(943),
    [anon_sym_LT_POUNDitems] = ACTIONS(943),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(943),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(943),
    [anon_sym_LT_POUNDif] = ACTIONS(943),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(943),
    [anon_sym_LT_POUNDelseif] = ACTIONS(943),
    [anon_sym_LT_POUNDswitch] = ACTIONS(943),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(943),
    [anon_sym_LT_POUNDcase] = ACTIONS(943),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(943),
    [anon_sym_LT_POUNDfunction] = ACTIONS(943),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(943),
    [anon_sym_LT_POUNDreturn] = ACTIONS(943),
    [anon_sym_LT_POUNDmacro] = ACTIONS(943),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(943),
    [anon_sym_LT_POUNDnested] = ACTIONS(943),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(943),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(943),
    [sym_recover] = ACTIONS(943),
    [sym_fallback] = ACTIONS(943),
    [sym_flush] = ACTIONS(943),
    [anon_sym_LT_POUNDftl] = ACTIONS(943),
    [anon_sym_LT_POUNDimport] = ACTIONS(943),
    [anon_sym_LT_POUNDinclude] = ACTIONS(943),
    [sym_lt] = ACTIONS(943),
    [sym_nt] = ACTIONS(943),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(943),
    [sym_rt] = ACTIONS(943),
    [anon_sym_LT_POUNDsetting] = ACTIONS(943),
    [sym_stop] = ACTIONS(943),
    [sym_t] = ACTIONS(943),
    [anon_sym_LT_POUNDvisit] = ACTIONS(943),
    [anon_sym_LT_POUNDassign] = ACTIONS(943),
    [sym_end_assign] = ACTIONS(943),
    [anon_sym_LT_POUNDglobal] = ACTIONS(943),
    [sym_end_global] = ACTIONS(943),
    [anon_sym_LT_POUNDlocal] = ACTIONS(943),
    [sym_end_local] = ACTIONS(943),
  },
  [217] = {
    [sym_directive] = STATE(223),
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
    [aux_sym_case_repeat1] = STATE(223),
    [aux_sym_case_repeat2] = STATE(224),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [sym_break] = ACTIONS(945),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(947),
    [anon_sym_LT_POUNDcase] = ACTIONS(947),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(947),
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
  [218] = {
    [sym_directive] = STATE(218),
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
    [aux_sym_case_repeat1] = STATE(218),
    [anon_sym_LT_POUNDlist] = ACTIONS(949),
    [anon_sym_LT_POUNDif] = ACTIONS(952),
    [anon_sym_LT_POUNDswitch] = ACTIONS(955),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(958),
    [anon_sym_LT_POUNDfunction] = ACTIONS(960),
    [anon_sym_LT_POUNDmacro] = ACTIONS(963),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(966),
    [sym_fallback] = ACTIONS(969),
    [sym_flush] = ACTIONS(969),
    [anon_sym_LT_POUNDftl] = ACTIONS(972),
    [anon_sym_LT_POUNDimport] = ACTIONS(975),
    [anon_sym_LT_POUNDinclude] = ACTIONS(978),
    [sym_lt] = ACTIONS(969),
    [sym_nt] = ACTIONS(969),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(981),
    [sym_rt] = ACTIONS(969),
    [anon_sym_LT_POUNDsetting] = ACTIONS(984),
    [sym_stop] = ACTIONS(969),
    [sym_t] = ACTIONS(969),
    [anon_sym_LT_POUNDvisit] = ACTIONS(987),
    [anon_sym_LT_POUNDassign] = ACTIONS(990),
    [sym_end_assign] = ACTIONS(993),
    [anon_sym_LT_POUNDglobal] = ACTIONS(996),
    [sym_end_global] = ACTIONS(999),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1002),
    [sym_end_local] = ACTIONS(1005),
  },
  [219] = {
    [ts_builtin_sym_end] = ACTIONS(1008),
    [sym_comment] = ACTIONS(1008),
    [anon_sym_LT_POUNDlist] = ACTIONS(1008),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1008),
    [sym_break] = ACTIONS(1008),
    [sym_continue] = ACTIONS(1008),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1008),
    [anon_sym_LT_POUNDitems] = ACTIONS(1008),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1008),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1008),
    [anon_sym_LT_POUNDif] = ACTIONS(1008),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1008),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1008),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1008),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1008),
    [anon_sym_LT_POUNDcase] = ACTIONS(1008),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1008),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1008),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1008),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1008),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1008),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1008),
    [anon_sym_LT_POUNDnested] = ACTIONS(1008),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1008),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1008),
    [sym_recover] = ACTIONS(1008),
    [sym_fallback] = ACTIONS(1008),
    [sym_flush] = ACTIONS(1008),
    [anon_sym_LT_POUNDftl] = ACTIONS(1008),
    [anon_sym_LT_POUNDimport] = ACTIONS(1008),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1008),
    [sym_lt] = ACTIONS(1008),
    [sym_nt] = ACTIONS(1008),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1008),
    [sym_rt] = ACTIONS(1008),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1008),
    [sym_stop] = ACTIONS(1008),
    [sym_t] = ACTIONS(1008),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1008),
    [anon_sym_LT_POUNDassign] = ACTIONS(1008),
    [sym_end_assign] = ACTIONS(1008),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1008),
    [sym_end_global] = ACTIONS(1008),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1008),
    [sym_end_local] = ACTIONS(1008),
  },
  [220] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(1010),
    [sym_break] = ACTIONS(1010),
    [sym_continue] = ACTIONS(1010),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1010),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1010),
    [anon_sym_LT_POUNDif] = ACTIONS(1010),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1010),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1010),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1010),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1010),
    [sym_fallback] = ACTIONS(1010),
    [sym_flush] = ACTIONS(1010),
    [anon_sym_LT_POUNDftl] = ACTIONS(1010),
    [anon_sym_LT_POUNDimport] = ACTIONS(1010),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1010),
    [sym_lt] = ACTIONS(1010),
    [sym_nt] = ACTIONS(1010),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1010),
    [sym_rt] = ACTIONS(1010),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1010),
    [sym_stop] = ACTIONS(1010),
    [sym_t] = ACTIONS(1010),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1010),
    [anon_sym_LT_POUNDassign] = ACTIONS(1010),
    [sym_end_assign] = ACTIONS(1010),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1010),
    [sym_end_global] = ACTIONS(1010),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1010),
    [sym_end_local] = ACTIONS(1010),
  },
  [221] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(1012),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1012),
    [sym_break] = ACTIONS(1012),
    [sym_continue] = ACTIONS(1012),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1012),
    [anon_sym_LT_POUNDitems] = ACTIONS(1012),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1012),
    [anon_sym_LT_POUNDif] = ACTIONS(1012),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1012),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1012),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1012),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1012),
    [sym_fallback] = ACTIONS(1012),
    [sym_flush] = ACTIONS(1012),
    [anon_sym_LT_POUNDftl] = ACTIONS(1012),
    [anon_sym_LT_POUNDimport] = ACTIONS(1012),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1012),
    [sym_lt] = ACTIONS(1012),
    [sym_nt] = ACTIONS(1012),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1012),
    [sym_rt] = ACTIONS(1012),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1012),
    [sym_stop] = ACTIONS(1012),
    [sym_t] = ACTIONS(1012),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1012),
    [anon_sym_LT_POUNDassign] = ACTIONS(1012),
    [sym_end_assign] = ACTIONS(1012),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1012),
    [sym_end_global] = ACTIONS(1012),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1012),
    [sym_end_local] = ACTIONS(1012),
  },
  [222] = {
    [sym_directive] = STATE(220),
    [sym_list] = STATE(8),
    [sym_items_middle] = STATE(226),
    [sym_sep] = STATE(220),
    [sym_sep_block] = STATE(142),
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
    [aux_sym_items_repeat1] = STATE(226),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [sym_break] = ACTIONS(937),
    [sym_continue] = ACTIONS(937),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1014),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(331),
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
  [223] = {
    [sym_directive] = STATE(227),
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
    [aux_sym_case_repeat1] = STATE(227),
    [aux_sym_case_repeat2] = STATE(228),
    [anon_sym_LT_POUNDlist] = ACTIONS(9),
    [sym_break] = ACTIONS(1016),
    [anon_sym_LT_POUNDif] = ACTIONS(11),
    [anon_sym_LT_POUNDswitch] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1018),
    [anon_sym_LT_POUNDcase] = ACTIONS(1018),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1018),
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
  [224] = {
    [aux_sym_case_repeat2] = STATE(229),
    [sym_break] = ACTIONS(1020),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1018),
    [anon_sym_LT_POUNDcase] = ACTIONS(1018),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1018),
  },
  [225] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(1022),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1022),
    [sym_break] = ACTIONS(1022),
    [sym_continue] = ACTIONS(1022),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1022),
    [anon_sym_LT_POUNDitems] = ACTIONS(1022),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1022),
    [anon_sym_LT_POUNDif] = ACTIONS(1022),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1022),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1022),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1022),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1022),
    [sym_fallback] = ACTIONS(1022),
    [sym_flush] = ACTIONS(1022),
    [anon_sym_LT_POUNDftl] = ACTIONS(1022),
    [anon_sym_LT_POUNDimport] = ACTIONS(1022),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1022),
    [sym_lt] = ACTIONS(1022),
    [sym_nt] = ACTIONS(1022),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1022),
    [sym_rt] = ACTIONS(1022),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1022),
    [sym_stop] = ACTIONS(1022),
    [sym_t] = ACTIONS(1022),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1022),
    [anon_sym_LT_POUNDassign] = ACTIONS(1022),
    [sym_end_assign] = ACTIONS(1022),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1022),
    [sym_end_global] = ACTIONS(1022),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1022),
    [sym_end_local] = ACTIONS(1022),
  },
  [226] = {
    [sym_directive] = STATE(220),
    [sym_list] = STATE(8),
    [sym_items_middle] = STATE(226),
    [sym_sep] = STATE(220),
    [sym_sep_block] = STATE(142),
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
    [aux_sym_items_repeat1] = STATE(226),
    [anon_sym_LT_POUNDlist] = ACTIONS(1024),
    [sym_break] = ACTIONS(1027),
    [sym_continue] = ACTIONS(1027),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1030),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1032),
    [anon_sym_LT_POUNDif] = ACTIONS(1035),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1038),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1041),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1044),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1047),
    [sym_fallback] = ACTIONS(1050),
    [sym_flush] = ACTIONS(1050),
    [anon_sym_LT_POUNDftl] = ACTIONS(1053),
    [anon_sym_LT_POUNDimport] = ACTIONS(1056),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1059),
    [sym_lt] = ACTIONS(1050),
    [sym_nt] = ACTIONS(1050),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1062),
    [sym_rt] = ACTIONS(1050),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1065),
    [sym_stop] = ACTIONS(1050),
    [sym_t] = ACTIONS(1050),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1068),
    [anon_sym_LT_POUNDassign] = ACTIONS(1071),
    [sym_end_assign] = ACTIONS(1074),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1077),
    [sym_end_global] = ACTIONS(1080),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1083),
    [sym_end_local] = ACTIONS(1086),
  },
  [227] = {
    [sym_directive] = STATE(227),
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
    [aux_sym_case_repeat1] = STATE(227),
    [anon_sym_LT_POUNDlist] = ACTIONS(949),
    [sym_break] = ACTIONS(958),
    [anon_sym_LT_POUNDif] = ACTIONS(952),
    [anon_sym_LT_POUNDswitch] = ACTIONS(955),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(958),
    [anon_sym_LT_POUNDcase] = ACTIONS(958),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(958),
    [anon_sym_LT_POUNDfunction] = ACTIONS(960),
    [anon_sym_LT_POUNDmacro] = ACTIONS(963),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(966),
    [sym_fallback] = ACTIONS(969),
    [sym_flush] = ACTIONS(969),
    [anon_sym_LT_POUNDftl] = ACTIONS(972),
    [anon_sym_LT_POUNDimport] = ACTIONS(975),
    [anon_sym_LT_POUNDinclude] = ACTIONS(978),
    [sym_lt] = ACTIONS(969),
    [sym_nt] = ACTIONS(969),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(981),
    [sym_rt] = ACTIONS(969),
    [anon_sym_LT_POUNDsetting] = ACTIONS(984),
    [sym_stop] = ACTIONS(969),
    [sym_t] = ACTIONS(969),
    [anon_sym_LT_POUNDvisit] = ACTIONS(987),
    [anon_sym_LT_POUNDassign] = ACTIONS(990),
    [sym_end_assign] = ACTIONS(993),
    [anon_sym_LT_POUNDglobal] = ACTIONS(996),
    [sym_end_global] = ACTIONS(999),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1002),
    [sym_end_local] = ACTIONS(1005),
  },
  [228] = {
    [aux_sym_case_repeat2] = STATE(229),
    [sym_break] = ACTIONS(1020),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1089),
    [anon_sym_LT_POUNDcase] = ACTIONS(1089),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1089),
  },
  [229] = {
    [aux_sym_case_repeat2] = STATE(229),
    [sym_break] = ACTIONS(1091),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1094),
    [anon_sym_LT_POUNDcase] = ACTIONS(1094),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1094),
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
  [49] = {.count = 1, .reusable = true}, SHIFT(23),
  [51] = {.count = 1, .reusable = true}, SHIFT(24),
  [53] = {.count = 1, .reusable = false}, SHIFT(25),
  [55] = {.count = 1, .reusable = false}, SHIFT(26),
  [57] = {.count = 1, .reusable = true}, SHIFT(27),
  [59] = {.count = 1, .reusable = true}, SHIFT(28),
  [61] = {.count = 1, .reusable = false}, SHIFT(29),
  [63] = {.count = 1, .reusable = true}, SHIFT(29),
  [65] = {.count = 1, .reusable = false}, SHIFT(34),
  [67] = {.count = 1, .reusable = false}, SHIFT(39),
  [69] = {.count = 1, .reusable = false}, SHIFT(41),
  [71] = {.count = 1, .reusable = true}, SHIFT(43),
  [73] = {.count = 1, .reusable = true}, SHIFT(44),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_directive, 1),
  [77] = {.count = 1, .reusable = false}, SHIFT(46),
  [79] = {.count = 1, .reusable = false}, SHIFT(48),
  [81] = {.count = 1, .reusable = false}, SHIFT(50),
  [83] = {.count = 1, .reusable = false}, SHIFT(52),
  [85] = {.count = 1, .reusable = false}, SHIFT(54),
  [87] = {.count = 1, .reusable = false}, SHIFT(56),
  [89] = {.count = 1, .reusable = false}, SHIFT(58),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 1),
  [93] = {.count = 1, .reusable = false}, SHIFT(60),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_global, 1),
  [97] = {.count = 1, .reusable = false}, SHIFT(62),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_local, 1),
  [101] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [105] = {.count = 1, .reusable = true}, SHIFT(64),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_operator, 1),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_operator, 1),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym_string, 1),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 1),
  [119] = {.count = 1, .reusable = true}, SHIFT(65),
  [121] = {.count = 1, .reusable = true}, SHIFT(66),
  [123] = {.count = 1, .reusable = false}, SHIFT(67),
  [125] = {.count = 1, .reusable = false}, SHIFT(68),
  [127] = {.count = 1, .reusable = true}, SHIFT(69),
  [129] = {.count = 1, .reusable = true}, SHIFT(70),
  [131] = {.count = 1, .reusable = true}, SHIFT(71),
  [133] = {.count = 1, .reusable = false}, SHIFT(72),
  [135] = {.count = 1, .reusable = true}, SHIFT(72),
  [137] = {.count = 1, .reusable = true}, SHIFT(75),
  [139] = {.count = 1, .reusable = true}, SHIFT(77),
  [141] = {.count = 1, .reusable = true}, SHIFT(79),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_group, 1),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_group, 1),
  [147] = {.count = 1, .reusable = true}, SHIFT(82),
  [149] = {.count = 1, .reusable = true}, SHIFT(83),
  [151] = {.count = 1, .reusable = true}, SHIFT(84),
  [153] = {.count = 1, .reusable = true}, SHIFT(89),
  [155] = {.count = 1, .reusable = false}, SHIFT(90),
  [157] = {.count = 1, .reusable = false}, SHIFT(91),
  [159] = {.count = 1, .reusable = true}, SHIFT(92),
  [161] = {.count = 1, .reusable = true}, SHIFT(93),
  [163] = {.count = 1, .reusable = false}, SHIFT(94),
  [165] = {.count = 1, .reusable = true}, SHIFT(94),
  [167] = {.count = 1, .reusable = false}, SHIFT(96),
  [169] = {.count = 1, .reusable = true}, SHIFT(98),
  [171] = {.count = 1, .reusable = true}, SHIFT(99),
  [173] = {.count = 1, .reusable = true}, SHIFT(100),
  [175] = {.count = 1, .reusable = false}, SHIFT(103),
  [177] = {.count = 1, .reusable = true}, SHIFT(104),
  [179] = {.count = 1, .reusable = true}, SHIFT(105),
  [181] = {.count = 1, .reusable = false}, SHIFT(108),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_attempt, 2),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_attempt_middle, 1),
  [187] = {.count = 1, .reusable = true}, SHIFT(109),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_ftl, 2),
  [191] = {.count = 1, .reusable = false}, SHIFT(111),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_import, 2),
  [195] = {.count = 1, .reusable = false}, SHIFT(112),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [199] = {.count = 1, .reusable = false}, SHIFT(113),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_recurse, 2),
  [203] = {.count = 1, .reusable = false}, SHIFT(114),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_setting, 2),
  [207] = {.count = 1, .reusable = false}, SHIFT(115),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_visit, 2),
  [211] = {.count = 1, .reusable = false}, SHIFT(116),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 2),
  [215] = {.count = 1, .reusable = false}, SHIFT(117),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_global, 2),
  [219] = {.count = 1, .reusable = false}, SHIFT(118),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_local, 2),
  [223] = {.count = 1, .reusable = false}, SHIFT(119),
  [225] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [227] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [230] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [233] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [236] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [239] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [242] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [245] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [248] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [251] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [254] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [257] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [260] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [263] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [266] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [269] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [272] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [275] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [278] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [281] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [284] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 2),
  [289] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 2),
  [291] = {.count = 1, .reusable = true}, SHIFT(120),
  [293] = {.count = 1, .reusable = true}, SHIFT(121),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_sequence, 2),
  [297] = {.count = 1, .reusable = false}, REDUCE(sym_sequence, 2),
  [299] = {.count = 1, .reusable = true}, SHIFT(123),
  [301] = {.count = 1, .reusable = true}, SHIFT(125),
  [303] = {.count = 1, .reusable = true}, SHIFT(127),
  [305] = {.count = 1, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 1),
  [307] = {.count = 1, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 1),
  [309] = {.count = 1, .reusable = true}, SHIFT(128),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_hash, 2),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym_hash, 2),
  [315] = {.count = 1, .reusable = true}, SHIFT(130),
  [317] = {.count = 1, .reusable = true}, SHIFT(132),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_method, 2),
  [321] = {.count = 1, .reusable = false}, REDUCE(sym_method, 2),
  [323] = {.count = 1, .reusable = true}, SHIFT(136),
  [325] = {.count = 1, .reusable = true}, SHIFT(137),
  [327] = {.count = 1, .reusable = true}, SHIFT(138),
  [329] = {.count = 1, .reusable = true}, SHIFT(139),
  [331] = {.count = 1, .reusable = true}, SHIFT(140),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_if_else, 1),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_if, 3),
  [339] = {.count = 1, .reusable = false}, SHIFT(147),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_if_middle, 1),
  [343] = {.count = 1, .reusable = true}, SHIFT(149),
  [345] = {.count = 1, .reusable = true}, SHIFT(153),
  [347] = {.count = 1, .reusable = true}, SHIFT(154),
  [349] = {.count = 1, .reusable = true}, SHIFT(156),
  [351] = {.count = 1, .reusable = true}, SHIFT(158),
  [353] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2),
  [355] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(23),
  [358] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(23),
  [361] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(24),
  [364] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(25),
  [367] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(26),
  [370] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(27),
  [373] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(28),
  [376] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(29),
  [379] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(29),
  [382] = {.count = 1, .reusable = true}, SHIFT(162),
  [384] = {.count = 1, .reusable = true}, SHIFT(163),
  [386] = {.count = 1, .reusable = true}, SHIFT(164),
  [388] = {.count = 1, .reusable = true}, REDUCE(sym_function, 3),
  [390] = {.count = 1, .reusable = false}, SHIFT(168),
  [392] = {.count = 1, .reusable = true}, REDUCE(sym_function_middle, 1),
  [394] = {.count = 1, .reusable = true}, SHIFT(170),
  [396] = {.count = 1, .reusable = true}, REDUCE(sym_macro, 3),
  [398] = {.count = 1, .reusable = false}, SHIFT(173),
  [400] = {.count = 1, .reusable = true}, REDUCE(sym_macro_middle, 1),
  [402] = {.count = 1, .reusable = true}, SHIFT(175),
  [404] = {.count = 1, .reusable = true}, REDUCE(sym_attempt, 3),
  [406] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(2),
  [409] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(3),
  [412] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(4),
  [415] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(5),
  [418] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(6),
  [421] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(7),
  [424] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2),
  [426] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(44),
  [429] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(8),
  [432] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(9),
  [435] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(10),
  [438] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(11),
  [441] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(12),
  [444] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(13),
  [447] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(14),
  [450] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(15),
  [453] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(16),
  [456] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(17),
  [459] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(18),
  [462] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(19),
  [465] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(20),
  [468] = {.count = 1, .reusable = true}, REDUCE(sym_ftl, 3),
  [470] = {.count = 1, .reusable = true}, REDUCE(sym_import, 3),
  [472] = {.count = 1, .reusable = true}, REDUCE(sym_include, 3),
  [474] = {.count = 1, .reusable = true}, REDUCE(sym_recurse, 3),
  [476] = {.count = 1, .reusable = true}, REDUCE(sym_setting, 3),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym_visit, 3),
  [480] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 3),
  [482] = {.count = 1, .reusable = true}, REDUCE(sym_global, 3),
  [484] = {.count = 1, .reusable = true}, REDUCE(sym_local, 3),
  [486] = {.count = 1, .reusable = true}, SHIFT(178),
  [488] = {.count = 1, .reusable = true}, SHIFT(179),
  [490] = {.count = 1, .reusable = true}, SHIFT(180),
  [492] = {.count = 1, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2),
  [494] = {.count = 1, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 2),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym_sequence, 3),
  [498] = {.count = 1, .reusable = false}, REDUCE(sym_sequence, 3),
  [500] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(66),
  [503] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(67),
  [506] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(68),
  [509] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(69),
  [512] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(71),
  [515] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(72),
  [518] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(72),
  [521] = {.count = 1, .reusable = true}, REDUCE(sym_hash, 3),
  [523] = {.count = 1, .reusable = false}, REDUCE(sym_hash, 3),
  [525] = {.count = 2, .reusable = true}, REDUCE(aux_sym_unary_expression_repeat1, 2), SHIFT_REPEAT(66),
  [528] = {.count = 2, .reusable = false}, REDUCE(aux_sym_unary_expression_repeat1, 2), SHIFT_REPEAT(67),
  [531] = {.count = 2, .reusable = false}, REDUCE(aux_sym_unary_expression_repeat1, 2), SHIFT_REPEAT(68),
  [534] = {.count = 2, .reusable = true}, REDUCE(aux_sym_unary_expression_repeat1, 2), SHIFT_REPEAT(69),
  [537] = {.count = 2, .reusable = true}, REDUCE(aux_sym_unary_expression_repeat1, 2), SHIFT_REPEAT(71),
  [540] = {.count = 1, .reusable = true}, REDUCE(aux_sym_unary_expression_repeat1, 2),
  [542] = {.count = 2, .reusable = false}, REDUCE(aux_sym_unary_expression_repeat1, 2), SHIFT_REPEAT(72),
  [545] = {.count = 2, .reusable = true}, REDUCE(aux_sym_unary_expression_repeat1, 2), SHIFT_REPEAT(72),
  [548] = {.count = 1, .reusable = true}, REDUCE(sym_group, 2),
  [550] = {.count = 1, .reusable = false}, REDUCE(sym_group, 2),
  [552] = {.count = 1, .reusable = true}, SHIFT(184),
  [554] = {.count = 1, .reusable = true}, REDUCE(sym_list, 4),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym_list_middle, 1),
  [558] = {.count = 1, .reusable = true}, REDUCE(sym_list_else, 1),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym_sep, 1),
  [562] = {.count = 1, .reusable = true}, SHIFT(188),
  [564] = {.count = 1, .reusable = true}, SHIFT(189),
  [566] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [568] = {.count = 1, .reusable = true}, REDUCE(sym_if_else, 2),
  [570] = {.count = 1, .reusable = true}, REDUCE(sym_elseif, 2),
  [572] = {.count = 1, .reusable = false}, SHIFT(193),
  [574] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4),
  [576] = {.count = 1, .reusable = true}, SHIFT(194),
  [578] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(2),
  [581] = {.count = 1, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2),
  [583] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(3),
  [586] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(84),
  [589] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(4),
  [592] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(5),
  [595] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(6),
  [598] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(7),
  [601] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(8),
  [604] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(9),
  [607] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(10),
  [610] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(11),
  [613] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(12),
  [616] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(13),
  [619] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(14),
  [622] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(15),
  [625] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(16),
  [628] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(17),
  [631] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(18),
  [634] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(19),
  [637] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(20),
  [640] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [642] = {.count = 1, .reusable = true}, SHIFT(195),
  [644] = {.count = 1, .reusable = true}, SHIFT(196),
  [646] = {.count = 1, .reusable = true}, SHIFT(197),
  [648] = {.count = 1, .reusable = false}, REDUCE(aux_sym_unary_expression_repeat1, 2),
  [650] = {.count = 2, .reusable = true}, REDUCE(aux_sym_unary_expression_repeat1, 2), SHIFT_REPEAT(89),
  [653] = {.count = 2, .reusable = false}, REDUCE(aux_sym_unary_expression_repeat1, 2), SHIFT_REPEAT(90),
  [656] = {.count = 2, .reusable = false}, REDUCE(aux_sym_unary_expression_repeat1, 2), SHIFT_REPEAT(91),
  [659] = {.count = 2, .reusable = true}, REDUCE(aux_sym_unary_expression_repeat1, 2), SHIFT_REPEAT(92),
  [662] = {.count = 2, .reusable = true}, REDUCE(aux_sym_unary_expression_repeat1, 2), SHIFT_REPEAT(93),
  [665] = {.count = 2, .reusable = false}, REDUCE(aux_sym_unary_expression_repeat1, 2), SHIFT_REPEAT(94),
  [668] = {.count = 2, .reusable = true}, REDUCE(aux_sym_unary_expression_repeat1, 2), SHIFT_REPEAT(94),
  [671] = {.count = 1, .reusable = true}, REDUCE(sym_switch, 4),
  [673] = {.count = 1, .reusable = true}, REDUCE(sym_default, 1),
  [675] = {.count = 1, .reusable = true}, REDUCE(sym_switch_middle, 1),
  [677] = {.count = 1, .reusable = true}, SHIFT(202),
  [679] = {.count = 1, .reusable = true}, REDUCE(sym_return, 2),
  [681] = {.count = 1, .reusable = true}, SHIFT(205),
  [683] = {.count = 1, .reusable = true}, REDUCE(sym_function, 4),
  [685] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(2),
  [688] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(3),
  [691] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(4),
  [694] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(5),
  [697] = {.count = 1, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2),
  [699] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(100),
  [702] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(6),
  [705] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(7),
  [708] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(8),
  [711] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(9),
  [714] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(10),
  [717] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(11),
  [720] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(12),
  [723] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(13),
  [726] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(14),
  [729] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(15),
  [732] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(16),
  [735] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(17),
  [738] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(18),
  [741] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(19),
  [744] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(20),
  [747] = {.count = 1, .reusable = true}, SHIFT(206),
  [749] = {.count = 1, .reusable = true}, REDUCE(sym_nested, 2),
  [751] = {.count = 1, .reusable = false}, SHIFT(207),
  [753] = {.count = 1, .reusable = true}, REDUCE(sym_macro, 4),
  [755] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(2),
  [758] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(3),
  [761] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(4),
  [764] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(5),
  [767] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(100),
  [770] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(6),
  [773] = {.count = 1, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2),
  [775] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(105),
  [778] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(7),
  [781] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(8),
  [784] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(9),
  [787] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(10),
  [790] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(11),
  [793] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(12),
  [796] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(13),
  [799] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(14),
  [802] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(15),
  [805] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(16),
  [808] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(17),
  [811] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(18),
  [814] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(19),
  [817] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(20),
  [820] = {.count = 1, .reusable = true}, SHIFT(208),
  [822] = {.count = 1, .reusable = true}, SHIFT(209),
  [824] = {.count = 1, .reusable = true}, REDUCE(sym_group, 3),
  [826] = {.count = 1, .reusable = false}, REDUCE(sym_group, 3),
  [828] = {.count = 1, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2),
  [830] = {.count = 1, .reusable = true}, REDUCE(sym_list_else, 2),
  [832] = {.count = 1, .reusable = true}, SHIFT(213),
  [834] = {.count = 1, .reusable = true}, REDUCE(sym_sep_block, 2),
  [836] = {.count = 1, .reusable = true}, REDUCE(sym_list, 5),
  [838] = {.count = 1, .reusable = true}, SHIFT(214),
  [840] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [843] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2),
  [845] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(137),
  [848] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(139),
  [851] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(140),
  [854] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(3),
  [857] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(4),
  [860] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(5),
  [863] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(6),
  [866] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(7),
  [869] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(8),
  [872] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(9),
  [875] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(10),
  [878] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(11),
  [881] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(12),
  [884] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(13),
  [887] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(14),
  [890] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(15),
  [893] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(16),
  [896] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(17),
  [899] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(18),
  [902] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(19),
  [905] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(20),
  [908] = {.count = 1, .reusable = true}, REDUCE(sym_elseif, 3),
  [910] = {.count = 1, .reusable = true}, REDUCE(sym_if, 5),
  [912] = {.count = 1, .reusable = true}, SHIFT(215),
  [914] = {.count = 1, .reusable = true}, SHIFT(216),
  [916] = {.count = 1, .reusable = true}, SHIFT(217),
  [918] = {.count = 1, .reusable = true}, REDUCE(sym_default, 2),
  [920] = {.count = 1, .reusable = true}, REDUCE(sym_switch, 5),
  [922] = {.count = 1, .reusable = true}, SHIFT(219),
  [924] = {.count = 1, .reusable = true}, REDUCE(aux_sym_switch_repeat1, 2),
  [926] = {.count = 2, .reusable = true}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(163),
  [929] = {.count = 1, .reusable = true}, REDUCE(sym_return, 3),
  [931] = {.count = 1, .reusable = true}, REDUCE(sym_function, 5),
  [933] = {.count = 1, .reusable = true}, REDUCE(sym_nested, 3),
  [935] = {.count = 1, .reusable = true}, REDUCE(sym_macro, 5),
  [937] = {.count = 1, .reusable = true}, SHIFT(220),
  [939] = {.count = 1, .reusable = true}, SHIFT(221),
  [941] = {.count = 1, .reusable = true}, REDUCE(sym_list, 6),
  [943] = {.count = 1, .reusable = true}, REDUCE(sym_if, 6),
  [945] = {.count = 1, .reusable = true}, SHIFT(224),
  [947] = {.count = 1, .reusable = true}, REDUCE(sym_case, 3),
  [949] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(2),
  [952] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(3),
  [955] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(4),
  [958] = {.count = 1, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2),
  [960] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(5),
  [963] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(6),
  [966] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(7),
  [969] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(8),
  [972] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(9),
  [975] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(10),
  [978] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(11),
  [981] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(12),
  [984] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(13),
  [987] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(14),
  [990] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(15),
  [993] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(16),
  [996] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(17),
  [999] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(18),
  [1002] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(19),
  [1005] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(20),
  [1008] = {.count = 1, .reusable = true}, REDUCE(sym_switch, 6),
  [1010] = {.count = 1, .reusable = true}, REDUCE(sym_items_middle, 1),
  [1012] = {.count = 1, .reusable = true}, REDUCE(sym_items, 4),
  [1014] = {.count = 1, .reusable = true}, SHIFT(225),
  [1016] = {.count = 1, .reusable = true}, SHIFT(228),
  [1018] = {.count = 1, .reusable = true}, REDUCE(sym_case, 4),
  [1020] = {.count = 1, .reusable = true}, SHIFT(229),
  [1022] = {.count = 1, .reusable = true}, REDUCE(sym_items, 5),
  [1024] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(2),
  [1027] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(220),
  [1030] = {.count = 1, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2),
  [1032] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(140),
  [1035] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(3),
  [1038] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(4),
  [1041] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(5),
  [1044] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(6),
  [1047] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(7),
  [1050] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(8),
  [1053] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(9),
  [1056] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(10),
  [1059] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(11),
  [1062] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(12),
  [1065] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(13),
  [1068] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(14),
  [1071] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(15),
  [1074] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(16),
  [1077] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(17),
  [1080] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(18),
  [1083] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(19),
  [1086] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(20),
  [1089] = {.count = 1, .reusable = true}, REDUCE(sym_case, 5),
  [1091] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat2, 2), SHIFT_REPEAT(229),
  [1094] = {.count = 1, .reusable = true}, REDUCE(aux_sym_case_repeat2, 2),
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
