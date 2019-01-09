#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 322
#define SYMBOL_COUNT 161
#define ALIAS_COUNT 0
#define TOKEN_COUNT 96
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_comment = 1,
  anon_sym_DOLLAR_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_as = 4,
  anon_sym_QMARK = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_using = 8,
  anon_sym_COMMA = 9,
  anon_sym_DOT_DOT = 10,
  anon_sym_DOT_DOT_LT = 11,
  anon_sym_DOT_DOT_BANG = 12,
  anon_sym_COLON = 13,
  anon_sym_STAR = 14,
  anon_sym_PLUS = 15,
  anon_sym_SLASH = 16,
  anon_sym_DASH = 17,
  anon_sym_PERCENT = 18,
  anon_sym_EQ_EQ = 19,
  anon_sym_BANG_EQ = 20,
  anon_sym_LT = 21,
  anon_sym_LT_EQ = 22,
  anon_sym_lt = 23,
  anon_sym_lte = 24,
  anon_sym_gt = 25,
  anon_sym_gte = 26,
  anon_sym_BANG = 27,
  anon_sym_AMP_AMP = 28,
  anon_sym_PIPE_PIPE = 29,
  anon_sym_QMARK_QMARK = 30,
  anon_sym_EQ = 31,
  anon_sym_PLUS_EQ = 32,
  anon_sym_DASH_EQ = 33,
  anon_sym_STAR_EQ = 34,
  anon_sym_SLASH_EQ = 35,
  anon_sym_PERCENT_EQ = 36,
  anon_sym_PLUS_PLUS = 37,
  anon_sym_DASH_DASH = 38,
  aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH = 39,
  aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH = 40,
  sym_number = 41,
  anon_sym_true = 42,
  anon_sym_false = 43,
  anon_sym_LBRACK = 44,
  anon_sym_RBRACK = 45,
  anon_sym_LBRACE = 46,
  aux_sym_SLASH_BSLASHw_PLUS_SLASH = 47,
  aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH = 48,
  anon_sym_LT_AT = 49,
  anon_sym_GT = 50,
  anon_sym_SLASH_GT = 51,
  anon_sym_LT_POUNDlist = 52,
  anon_sym_LT_SLASH_POUNDlist_GT = 53,
  sym_break = 54,
  sym_continue = 55,
  anon_sym_LT_POUNDelse_GT = 56,
  anon_sym_LT_POUNDitems = 57,
  anon_sym_LT_SLASH_POUNDitems_GT = 58,
  anon_sym_LT_POUNDsep_GT = 59,
  anon_sym_LT_SLASH_POUNDsep_GT = 60,
  anon_sym_LT_POUNDif = 61,
  anon_sym_LT_SLASH_POUNDif_GT = 62,
  anon_sym_LT_POUNDelseif = 63,
  anon_sym_LT_POUNDswitch = 64,
  anon_sym_LT_SLASH_POUNDswitch_GT = 65,
  anon_sym_LT_POUNDcase = 66,
  anon_sym_LT_POUNDdefault_GT = 67,
  anon_sym_LT_POUNDfunction = 68,
  anon_sym_LT_SLASH_POUNDfunction_GT = 69,
  anon_sym_LT_POUNDreturn = 70,
  anon_sym_LT_POUNDmacro = 71,
  anon_sym_LT_SLASH_POUNDmacro_GT = 72,
  anon_sym_LT_POUNDnested = 73,
  anon_sym_LT_POUNDattempt_GT = 74,
  anon_sym_LT_SLASH_POUNDattempt_GT = 75,
  sym_recover = 76,
  sym_fallback = 77,
  sym_flush = 78,
  anon_sym_LT_POUNDftl = 79,
  anon_sym_LT_POUNDimport = 80,
  anon_sym_LT_POUNDinclude = 81,
  sym_lt = 82,
  sym_nt = 83,
  anon_sym_LT_POUNDrecurse = 84,
  sym_rt = 85,
  anon_sym_LT_POUNDsetting = 86,
  sym_stop = 87,
  sym_t = 88,
  anon_sym_LT_POUNDvisit = 89,
  anon_sym_LT_POUNDassign = 90,
  sym_end_assign = 91,
  anon_sym_LT_POUNDglobal = 92,
  sym_end_global = 93,
  anon_sym_LT_POUNDlocal = 94,
  sym_end_local = 95,
  sym_source_file = 96,
  sym__definition = 97,
  sym_interpolation = 98,
  sym_directive = 99,
  sym_parameter_group = 100,
  sym_as_expression = 101,
  sym_expression = 102,
  sym_type = 103,
  sym_built_in = 104,
  sym_group = 105,
  sym_operator = 106,
  sym_string = 107,
  sym_boolean = 108,
  sym_sequence = 109,
  sym_hash = 110,
  sym_top_level = 111,
  sym_spec_var = 112,
  sym_user_defined = 113,
  sym_list = 114,
  sym_list_middle = 115,
  sym_items_middle = 116,
  sym_list_else = 117,
  sym_items = 118,
  sym_sep = 119,
  sym_sep_block = 120,
  sym_if = 121,
  sym_if_else = 122,
  sym_elseif = 123,
  sym_if_middle = 124,
  sym_switch = 125,
  sym_case = 126,
  sym_default = 127,
  sym_switch_middle = 128,
  sym_function = 129,
  sym_function_middle = 130,
  sym_return = 131,
  sym_macro = 132,
  sym_macro_middle = 133,
  sym_nested = 134,
  sym_attempt = 135,
  sym_attempt_middle = 136,
  sym_ftl = 137,
  sym_import = 138,
  sym_include = 139,
  sym_recurse = 140,
  sym_setting = 141,
  sym_visit = 142,
  sym_assign = 143,
  sym_global = 144,
  sym_local = 145,
  aux_sym_source_file_repeat1 = 146,
  aux_sym_interpolation_repeat1 = 147,
  aux_sym_as_expression_repeat1 = 148,
  aux_sym_as_expression_repeat2 = 149,
  aux_sym_group_repeat1 = 150,
  aux_sym_sequence_repeat1 = 151,
  aux_sym_list_repeat1 = 152,
  aux_sym_items_repeat1 = 153,
  aux_sym_if_repeat1 = 154,
  aux_sym_switch_repeat1 = 155,
  aux_sym_case_repeat1 = 156,
  aux_sym_case_repeat2 = 157,
  aux_sym_function_repeat1 = 158,
  aux_sym_macro_repeat1 = 159,
  aux_sym_attempt_repeat1 = 160,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_comment] = "comment",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_as] = "as",
  [anon_sym_QMARK] = "?",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
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
  [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = "/\\w+/",
  [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = "/\\.([a-zA-Z0-9\\_]+)/",
  [anon_sym_LT_AT] = "<@",
  [anon_sym_GT] = ">",
  [anon_sym_SLASH_GT] = "/>",
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
  [sym_interpolation] = "interpolation",
  [sym_directive] = "directive",
  [sym_parameter_group] = "parameter_group",
  [sym_as_expression] = "as_expression",
  [sym_expression] = "expression",
  [sym_type] = "type",
  [sym_built_in] = "built_in",
  [sym_group] = "group",
  [sym_operator] = "operator",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [sym_sequence] = "sequence",
  [sym_hash] = "hash",
  [sym_top_level] = "top_level",
  [sym_spec_var] = "spec_var",
  [sym_user_defined] = "user_defined",
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
  [aux_sym_interpolation_repeat1] = "interpolation_repeat1",
  [aux_sym_as_expression_repeat1] = "as_expression_repeat1",
  [aux_sym_as_expression_repeat2] = "as_expression_repeat2",
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
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_QMARK] = {
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
  [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_AT] = {
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
  [sym_interpolation] = {
    .visible = true,
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
  [sym_as_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_built_in] = {
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
  [sym_top_level] = {
    .visible = true,
    .named = true,
  },
  [sym_spec_var] = {
    .visible = true,
    .named = true,
  },
  [sym_user_defined] = {
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
  [aux_sym_interpolation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_as_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_as_expression_repeat2] = {
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
      if (lookahead == '$')
        ADVANCE(8);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(12);
      if (lookahead == '\'')
        ADVANCE(14);
      if (lookahead == '(')
        ADVANCE(18);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(25);
      if (lookahead == '-')
        ADVANCE(26);
      if (lookahead == '.')
        ADVANCE(29);
      if (lookahead == '/')
        ADVANCE(34);
      if (lookahead == ':')
        ADVANCE(37);
      if (lookahead == '<')
        ADVANCE(38);
      if (lookahead == '=')
        ADVANCE(206);
      if (lookahead == '>')
        ADVANCE(208);
      if (lookahead == '?')
        ADVANCE(209);
      if (lookahead == '[')
        ADVANCE(211);
      if (lookahead == ']')
        ADVANCE(212);
      if (lookahead == 'a')
        ADVANCE(213);
      if (lookahead == 'f')
        ADVANCE(215);
      if (lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'l')
        ADVANCE(223);
      if (lookahead == 't')
        ADVANCE(226);
      if (lookahead == 'u')
        ADVANCE(230);
      if (lookahead == '{')
        ADVANCE(235);
      if (lookahead == '|')
        ADVANCE(236);
      if (lookahead == '}')
        ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(239);
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
      if (lookahead == '{')
        ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=')
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 12:
      if (lookahead == '&')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 14:
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '\\')
        ADVANCE(16);
      if (lookahead != 0)
        ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH);
      END_STATE();
    case 16:
      if (lookahead == '\n')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(16);
      if (lookahead != 0)
        ADVANCE(14);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '\\')
        ADVANCE(16);
      if (lookahead != 0)
        ADVANCE(14);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=')
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+')
        ADVANCE(23);
      if (lookahead == '=')
        ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 29:
      if (lookahead == '.')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '!')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_BANG);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_LT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=')
        ADVANCE(35);
      if (lookahead == '>')
        ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '#')
        ADVANCE(39);
      if (lookahead == '=')
        ADVANCE(204);
      if (lookahead == '@')
        ADVANCE(205);
      END_STATE();
    case 39:
      if (lookahead == '-')
        ADVANCE(40);
      if (lookahead == 'a')
        ADVANCE(46);
      if (lookahead == 'b')
        ADVANCE(59);
      if (lookahead == 'c')
        ADVANCE(65);
      if (lookahead == 'd')
        ADVANCE(77);
      if (lookahead == 'e')
        ADVANCE(85);
      if (lookahead == 'f')
        ADVANCE(92);
      if (lookahead == 'g')
        ADVANCE(115);
      if (lookahead == 'i')
        ADVANCE(121);
      if (lookahead == 'l')
        ADVANCE(138);
      if (lookahead == 'm')
        ADVANCE(148);
      if (lookahead == 'n')
        ADVANCE(153);
      if (lookahead == 'r')
        ADVANCE(161);
      if (lookahead == 's')
        ADVANCE(179);
      if (lookahead == 't')
        ADVANCE(197);
      if (lookahead == 'v')
        ADVANCE(199);
      END_STATE();
    case 40:
      if (lookahead == '-')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == '-')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '-')
        ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == '-')
        ADVANCE(44);
      if (lookahead == '>')
        ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(42);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(42);
      END_STATE();
    case 46:
      if (lookahead == 's')
        ADVANCE(47);
      if (lookahead == 't')
        ADVANCE(52);
      END_STATE();
    case 47:
      if (lookahead == 's')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'i')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'g')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'n')
        ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT_POUNDassign);
      END_STATE();
    case 52:
      if (lookahead == 't')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'e')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'm')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'p')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 't')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == '>')
        ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT_POUNDattempt_GT);
      END_STATE();
    case 59:
      if (lookahead == 'r')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'e')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'a')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'k')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == '>')
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_break);
      END_STATE();
    case 65:
      if (lookahead == 'a')
        ADVANCE(66);
      if (lookahead == 'o')
        ADVANCE(69);
      END_STATE();
    case 66:
      if (lookahead == 's')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'e')
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LT_POUNDcase);
      END_STATE();
    case 69:
      if (lookahead == 'n')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 't')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'i')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'n')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'u')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'e')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == '>')
        ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_continue);
      END_STATE();
    case 77:
      if (lookahead == 'e')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'f')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'a')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'u')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'l')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 't')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == '>')
        ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LT_POUNDdefault_GT);
      END_STATE();
    case 85:
      if (lookahead == 'l')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 's')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 'e')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == '>')
        ADVANCE(89);
      if (lookahead == 'i')
        ADVANCE(90);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LT_POUNDelse_GT);
      END_STATE();
    case 90:
      if (lookahead == 'f')
        ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LT_POUNDelseif);
      END_STATE();
    case 92:
      if (lookahead == 'a')
        ADVANCE(93);
      if (lookahead == 'l')
        ADVANCE(101);
      if (lookahead == 't')
        ADVANCE(106);
      if (lookahead == 'u')
        ADVANCE(108);
      END_STATE();
    case 93:
      if (lookahead == 'l')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'l')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'b')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'a')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'c')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'k')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == '>')
        ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_fallback);
      END_STATE();
    case 101:
      if (lookahead == 'u')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 's')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'h')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == '>')
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_flush);
      END_STATE();
    case 106:
      if (lookahead == 'l')
        ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LT_POUNDftl);
      END_STATE();
    case 108:
      if (lookahead == 'n')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'c')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 't')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'i')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'o')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'n')
        ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LT_POUNDfunction);
      END_STATE();
    case 115:
      if (lookahead == 'l')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'o')
        ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == 'b')
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
      ACCEPT_TOKEN(anon_sym_LT_POUNDglobal);
      END_STATE();
    case 121:
      if (lookahead == 'f')
        ADVANCE(122);
      if (lookahead == 'm')
        ADVANCE(123);
      if (lookahead == 'n')
        ADVANCE(128);
      if (lookahead == 't')
        ADVANCE(134);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LT_POUNDif);
      END_STATE();
    case 123:
      if (lookahead == 'p')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 'o')
        ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == 'r')
        ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == 't')
        ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LT_POUNDimport);
      END_STATE();
    case 128:
      if (lookahead == 'c')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'l')
        ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 'u')
        ADVANCE(131);
      END_STATE();
    case 131:
      if (lookahead == 'd')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 'e')
        ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LT_POUNDinclude);
      END_STATE();
    case 134:
      if (lookahead == 'e')
        ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 'm')
        ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 's')
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LT_POUNDitems);
      END_STATE();
    case 138:
      if (lookahead == 'i')
        ADVANCE(139);
      if (lookahead == 'o')
        ADVANCE(142);
      if (lookahead == 't')
        ADVANCE(146);
      END_STATE();
    case 139:
      if (lookahead == 's')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == 't')
        ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LT_POUNDlist);
      END_STATE();
    case 142:
      if (lookahead == 'c')
        ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 'a')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'l')
        ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LT_POUNDlocal);
      END_STATE();
    case 146:
      if (lookahead == '>')
        ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_lt);
      END_STATE();
    case 148:
      if (lookahead == 'a')
        ADVANCE(149);
      END_STATE();
    case 149:
      if (lookahead == 'c')
        ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'r')
        ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == 'o')
        ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LT_POUNDmacro);
      END_STATE();
    case 153:
      if (lookahead == 'e')
        ADVANCE(154);
      if (lookahead == 't')
        ADVANCE(159);
      END_STATE();
    case 154:
      if (lookahead == 's')
        ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == 't')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 'e')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'd')
        ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LT_POUNDnested);
      END_STATE();
    case 159:
      if (lookahead == '>')
        ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_nt);
      END_STATE();
    case 161:
      if (lookahead == 'e')
        ADVANCE(162);
      if (lookahead == 't')
        ADVANCE(177);
      END_STATE();
    case 162:
      if (lookahead == 'c')
        ADVANCE(163);
      if (lookahead == 't')
        ADVANCE(173);
      END_STATE();
    case 163:
      if (lookahead == 'o')
        ADVANCE(164);
      if (lookahead == 'u')
        ADVANCE(169);
      END_STATE();
    case 164:
      if (lookahead == 'v')
        ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == 'e')
        ADVANCE(166);
      END_STATE();
    case 166:
      if (lookahead == 'r')
        ADVANCE(167);
      END_STATE();
    case 167:
      if (lookahead == '>')
        ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_recover);
      END_STATE();
    case 169:
      if (lookahead == 'r')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 's')
        ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == 'e')
        ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LT_POUNDrecurse);
      END_STATE();
    case 173:
      if (lookahead == 'u')
        ADVANCE(174);
      END_STATE();
    case 174:
      if (lookahead == 'r')
        ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead == 'n')
        ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LT_POUNDreturn);
      END_STATE();
    case 177:
      if (lookahead == '>')
        ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_rt);
      END_STATE();
    case 179:
      if (lookahead == 'e')
        ADVANCE(180);
      if (lookahead == 't')
        ADVANCE(188);
      if (lookahead == 'w')
        ADVANCE(192);
      END_STATE();
    case 180:
      if (lookahead == 'p')
        ADVANCE(181);
      if (lookahead == 't')
        ADVANCE(183);
      END_STATE();
    case 181:
      if (lookahead == '>')
        ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_LT_POUNDsep_GT);
      END_STATE();
    case 183:
      if (lookahead == 't')
        ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead == 'i')
        ADVANCE(185);
      END_STATE();
    case 185:
      if (lookahead == 'n')
        ADVANCE(186);
      END_STATE();
    case 186:
      if (lookahead == 'g')
        ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_LT_POUNDsetting);
      END_STATE();
    case 188:
      if (lookahead == 'o')
        ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == 'p')
        ADVANCE(190);
      END_STATE();
    case 190:
      if (lookahead == '>')
        ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_stop);
      END_STATE();
    case 192:
      if (lookahead == 'i')
        ADVANCE(193);
      END_STATE();
    case 193:
      if (lookahead == 't')
        ADVANCE(194);
      END_STATE();
    case 194:
      if (lookahead == 'c')
        ADVANCE(195);
      END_STATE();
    case 195:
      if (lookahead == 'h')
        ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LT_POUNDswitch);
      END_STATE();
    case 197:
      if (lookahead == '>')
        ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_t);
      END_STATE();
    case 199:
      if (lookahead == 'i')
        ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead == 's')
        ADVANCE(201);
      END_STATE();
    case 201:
      if (lookahead == 'i')
        ADVANCE(202);
      END_STATE();
    case 202:
      if (lookahead == 't')
        ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_LT_POUNDvisit);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_LT_AT);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '?')
        ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 213:
      if (lookahead == 's')
        ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 215:
      if (lookahead == 'a')
        ADVANCE(216);
      END_STATE();
    case 216:
      if (lookahead == 'l')
        ADVANCE(217);
      END_STATE();
    case 217:
      if (lookahead == 's')
        ADVANCE(218);
      END_STATE();
    case 218:
      if (lookahead == 'e')
        ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 220:
      if (lookahead == 't')
        ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_gt);
      if (lookahead == 'e')
        ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_gte);
      END_STATE();
    case 223:
      if (lookahead == 't')
        ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_lt);
      if (lookahead == 'e')
        ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_lte);
      END_STATE();
    case 226:
      if (lookahead == 'r')
        ADVANCE(227);
      END_STATE();
    case 227:
      if (lookahead == 'u')
        ADVANCE(228);
      END_STATE();
    case 228:
      if (lookahead == 'e')
        ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 230:
      if (lookahead == 's')
        ADVANCE(231);
      END_STATE();
    case 231:
      if (lookahead == 'i')
        ADVANCE(232);
      END_STATE();
    case 232:
      if (lookahead == 'n')
        ADVANCE(233);
      END_STATE();
    case 233:
      if (lookahead == 'g')
        ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 236:
      if (lookahead == '|')
        ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 240:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(240);
      END_STATE();
    case 241:
      if (lookahead == '#')
        ADVANCE(242);
      if (lookahead == '/')
        ADVANCE(250);
      if (lookahead == '@')
        ADVANCE(205);
      END_STATE();
    case 242:
      if (lookahead == '-')
        ADVANCE(40);
      if (lookahead == 'a')
        ADVANCE(46);
      if (lookahead == 'f')
        ADVANCE(92);
      if (lookahead == 'g')
        ADVANCE(115);
      if (lookahead == 'i')
        ADVANCE(243);
      if (lookahead == 'l')
        ADVANCE(138);
      if (lookahead == 'm')
        ADVANCE(148);
      if (lookahead == 'n')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(245);
      if (lookahead == 's')
        ADVANCE(248);
      if (lookahead == 't')
        ADVANCE(197);
      if (lookahead == 'v')
        ADVANCE(199);
      END_STATE();
    case 243:
      if (lookahead == 'f')
        ADVANCE(122);
      if (lookahead == 'm')
        ADVANCE(123);
      if (lookahead == 'n')
        ADVANCE(128);
      END_STATE();
    case 244:
      if (lookahead == 't')
        ADVANCE(159);
      END_STATE();
    case 245:
      if (lookahead == 'e')
        ADVANCE(246);
      if (lookahead == 't')
        ADVANCE(177);
      END_STATE();
    case 246:
      if (lookahead == 'c')
        ADVANCE(247);
      END_STATE();
    case 247:
      if (lookahead == 'u')
        ADVANCE(169);
      END_STATE();
    case 248:
      if (lookahead == 'e')
        ADVANCE(249);
      if (lookahead == 't')
        ADVANCE(188);
      if (lookahead == 'w')
        ADVANCE(192);
      END_STATE();
    case 249:
      if (lookahead == 't')
        ADVANCE(183);
      END_STATE();
    case 250:
      if (lookahead == '#')
        ADVANCE(251);
      END_STATE();
    case 251:
      if (lookahead == 'a')
        ADVANCE(252);
      if (lookahead == 'g')
        ADVANCE(259);
      if (lookahead == 'l')
        ADVANCE(266);
      END_STATE();
    case 252:
      if (lookahead == 's')
        ADVANCE(253);
      END_STATE();
    case 253:
      if (lookahead == 's')
        ADVANCE(254);
      END_STATE();
    case 254:
      if (lookahead == 'i')
        ADVANCE(255);
      END_STATE();
    case 255:
      if (lookahead == 'g')
        ADVANCE(256);
      END_STATE();
    case 256:
      if (lookahead == 'n')
        ADVANCE(257);
      END_STATE();
    case 257:
      if (lookahead == '>')
        ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_end_assign);
      END_STATE();
    case 259:
      if (lookahead == 'l')
        ADVANCE(260);
      END_STATE();
    case 260:
      if (lookahead == 'o')
        ADVANCE(261);
      END_STATE();
    case 261:
      if (lookahead == 'b')
        ADVANCE(262);
      END_STATE();
    case 262:
      if (lookahead == 'a')
        ADVANCE(263);
      END_STATE();
    case 263:
      if (lookahead == 'l')
        ADVANCE(264);
      END_STATE();
    case 264:
      if (lookahead == '>')
        ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_end_global);
      END_STATE();
    case 266:
      if (lookahead == 'o')
        ADVANCE(267);
      END_STATE();
    case 267:
      if (lookahead == 'c')
        ADVANCE(268);
      END_STATE();
    case 268:
      if (lookahead == 'a')
        ADVANCE(269);
      END_STATE();
    case 269:
      if (lookahead == 'l')
        ADVANCE(270);
      END_STATE();
    case 270:
      if (lookahead == '>')
        ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_end_local);
      END_STATE();
    case 272:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(273);
      if (lookahead == '[')
        ADVANCE(211);
      if (lookahead == 't')
        ADVANCE(274);
      if (lookahead == '{')
        ADVANCE(235);
      if (lookahead == '}')
        ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(272);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 273:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'u')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 280:
      if (lookahead == '(')
        ADVANCE(18);
      if (lookahead == '>')
        ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 281:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(273);
      if (lookahead == '/')
        ADVANCE(282);
      if (lookahead == '>')
        ADVANCE(208);
      if (lookahead == '?')
        ADVANCE(283);
      if (lookahead == '[')
        ADVANCE(211);
      if (lookahead == 'a')
        ADVANCE(284);
      if (lookahead == 't')
        ADVANCE(274);
      if (lookahead == '{')
        ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(281);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 282:
      if (lookahead == '>')
        ADVANCE(36);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 286:
      if (lookahead == '<')
        ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(286);
      END_STATE();
    case 287:
      if (lookahead == '#')
        ADVANCE(288);
      if (lookahead == '/')
        ADVANCE(291);
      if (lookahead == '@')
        ADVANCE(205);
      END_STATE();
    case 288:
      if (lookahead == 'a')
        ADVANCE(46);
      if (lookahead == 'f')
        ADVANCE(92);
      if (lookahead == 'g')
        ADVANCE(115);
      if (lookahead == 'i')
        ADVANCE(243);
      if (lookahead == 'l')
        ADVANCE(138);
      if (lookahead == 'm')
        ADVANCE(148);
      if (lookahead == 'n')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(289);
      if (lookahead == 's')
        ADVANCE(248);
      if (lookahead == 't')
        ADVANCE(197);
      if (lookahead == 'v')
        ADVANCE(199);
      END_STATE();
    case 289:
      if (lookahead == 'e')
        ADVANCE(290);
      if (lookahead == 't')
        ADVANCE(177);
      END_STATE();
    case 290:
      if (lookahead == 'c')
        ADVANCE(163);
      END_STATE();
    case 291:
      if (lookahead == '#')
        ADVANCE(292);
      END_STATE();
    case 292:
      if (lookahead == 'a')
        ADVANCE(293);
      if (lookahead == 'g')
        ADVANCE(259);
      if (lookahead == 'l')
        ADVANCE(266);
      END_STATE();
    case 293:
      if (lookahead == 's')
        ADVANCE(253);
      if (lookahead == 't')
        ADVANCE(294);
      END_STATE();
    case 294:
      if (lookahead == 't')
        ADVANCE(295);
      END_STATE();
    case 295:
      if (lookahead == 'e')
        ADVANCE(296);
      END_STATE();
    case 296:
      if (lookahead == 'm')
        ADVANCE(297);
      END_STATE();
    case 297:
      if (lookahead == 'p')
        ADVANCE(298);
      END_STATE();
    case 298:
      if (lookahead == 't')
        ADVANCE(299);
      END_STATE();
    case 299:
      if (lookahead == '>')
        ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDattempt_GT);
      END_STATE();
    case 301:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(8);
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
        ADVANCE(39);
      if (lookahead == '/')
        ADVANCE(303);
      if (lookahead == '@')
        ADVANCE(205);
      END_STATE();
    case 303:
      if (lookahead == '#')
        ADVANCE(304);
      END_STATE();
    case 304:
      if (lookahead == 'a')
        ADVANCE(293);
      if (lookahead == 'f')
        ADVANCE(305);
      if (lookahead == 'g')
        ADVANCE(259);
      if (lookahead == 'i')
        ADVANCE(314);
      if (lookahead == 'l')
        ADVANCE(322);
      if (lookahead == 'm')
        ADVANCE(327);
      if (lookahead == 's')
        ADVANCE(333);
      END_STATE();
    case 305:
      if (lookahead == 'u')
        ADVANCE(306);
      END_STATE();
    case 306:
      if (lookahead == 'n')
        ADVANCE(307);
      END_STATE();
    case 307:
      if (lookahead == 'c')
        ADVANCE(308);
      END_STATE();
    case 308:
      if (lookahead == 't')
        ADVANCE(309);
      END_STATE();
    case 309:
      if (lookahead == 'i')
        ADVANCE(310);
      END_STATE();
    case 310:
      if (lookahead == 'o')
        ADVANCE(311);
      END_STATE();
    case 311:
      if (lookahead == 'n')
        ADVANCE(312);
      END_STATE();
    case 312:
      if (lookahead == '>')
        ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDfunction_GT);
      END_STATE();
    case 314:
      if (lookahead == 'f')
        ADVANCE(315);
      if (lookahead == 't')
        ADVANCE(317);
      END_STATE();
    case 315:
      if (lookahead == '>')
        ADVANCE(316);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDif_GT);
      END_STATE();
    case 317:
      if (lookahead == 'e')
        ADVANCE(318);
      END_STATE();
    case 318:
      if (lookahead == 'm')
        ADVANCE(319);
      END_STATE();
    case 319:
      if (lookahead == 's')
        ADVANCE(320);
      END_STATE();
    case 320:
      if (lookahead == '>')
        ADVANCE(321);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDitems_GT);
      END_STATE();
    case 322:
      if (lookahead == 'i')
        ADVANCE(323);
      if (lookahead == 'o')
        ADVANCE(267);
      END_STATE();
    case 323:
      if (lookahead == 's')
        ADVANCE(324);
      END_STATE();
    case 324:
      if (lookahead == 't')
        ADVANCE(325);
      END_STATE();
    case 325:
      if (lookahead == '>')
        ADVANCE(326);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDlist_GT);
      END_STATE();
    case 327:
      if (lookahead == 'a')
        ADVANCE(328);
      END_STATE();
    case 328:
      if (lookahead == 'c')
        ADVANCE(329);
      END_STATE();
    case 329:
      if (lookahead == 'r')
        ADVANCE(330);
      END_STATE();
    case 330:
      if (lookahead == 'o')
        ADVANCE(331);
      END_STATE();
    case 331:
      if (lookahead == '>')
        ADVANCE(332);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDmacro_GT);
      END_STATE();
    case 333:
      if (lookahead == 'w')
        ADVANCE(334);
      END_STATE();
    case 334:
      if (lookahead == 'i')
        ADVANCE(335);
      END_STATE();
    case 335:
      if (lookahead == 't')
        ADVANCE(336);
      END_STATE();
    case 336:
      if (lookahead == 'c')
        ADVANCE(337);
      END_STATE();
    case 337:
      if (lookahead == 'h')
        ADVANCE(338);
      END_STATE();
    case 338:
      if (lookahead == '>')
        ADVANCE(339);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDswitch_GT);
      END_STATE();
    case 340:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(340);
      END_STATE();
    case 341:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(12);
      if (lookahead == '\'')
        ADVANCE(14);
      if (lookahead == '(')
        ADVANCE(18);
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(25);
      if (lookahead == '-')
        ADVANCE(26);
      if (lookahead == '.')
        ADVANCE(29);
      if (lookahead == '/')
        ADVANCE(342);
      if (lookahead == ':')
        ADVANCE(37);
      if (lookahead == '<')
        ADVANCE(343);
      if (lookahead == '=')
        ADVANCE(206);
      if (lookahead == '?')
        ADVANCE(344);
      if (lookahead == '[')
        ADVANCE(211);
      if (lookahead == ']')
        ADVANCE(212);
      if (lookahead == 'g')
        ADVANCE(345);
      if (lookahead == 'l')
        ADVANCE(348);
      if (lookahead == 't')
        ADVANCE(274);
      if (lookahead == 'u')
        ADVANCE(351);
      if (lookahead == '{')
        ADVANCE(235);
      if (lookahead == '|')
        ADVANCE(236);
      if (lookahead == '}')
        ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(341);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=')
        ADVANCE(35);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=')
        ADVANCE(204);
      END_STATE();
    case 344:
      if (lookahead == '?')
        ADVANCE(210);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_gt);
      if (lookahead == 'e')
        ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_gte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_lt);
      if (lookahead == 'e')
        ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_lte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'g')
        ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_using);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 356:
      if (lookahead == 'f')
        ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(356);
      END_STATE();
    case 357:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(14);
      if (lookahead == ',')
        ADVANCE(25);
      if (lookahead == '.')
        ADVANCE(273);
      if (lookahead == '[')
        ADVANCE(211);
      if (lookahead == ']')
        ADVANCE(212);
      if (lookahead == 't')
        ADVANCE(274);
      if (lookahead == '{')
        ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(357);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 358:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(12);
      if (lookahead == '\'')
        ADVANCE(14);
      if (lookahead == '(')
        ADVANCE(18);
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(25);
      if (lookahead == '-')
        ADVANCE(26);
      if (lookahead == '.')
        ADVANCE(29);
      if (lookahead == '/')
        ADVANCE(342);
      if (lookahead == ':')
        ADVANCE(37);
      if (lookahead == '<')
        ADVANCE(343);
      if (lookahead == '=')
        ADVANCE(206);
      if (lookahead == '>')
        ADVANCE(208);
      if (lookahead == '?')
        ADVANCE(344);
      if (lookahead == '[')
        ADVANCE(211);
      if (lookahead == ']')
        ADVANCE(212);
      if (lookahead == 'g')
        ADVANCE(345);
      if (lookahead == 'l')
        ADVANCE(348);
      if (lookahead == 't')
        ADVANCE(274);
      if (lookahead == 'u')
        ADVANCE(351);
      if (lookahead == '{')
        ADVANCE(235);
      if (lookahead == '|')
        ADVANCE(236);
      if (lookahead == '}')
        ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(358);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 359:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(12);
      if (lookahead == '\'')
        ADVANCE(14);
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(25);
      if (lookahead == '-')
        ADVANCE(26);
      if (lookahead == '.')
        ADVANCE(29);
      if (lookahead == '/')
        ADVANCE(342);
      if (lookahead == ':')
        ADVANCE(37);
      if (lookahead == '<')
        ADVANCE(343);
      if (lookahead == '=')
        ADVANCE(206);
      if (lookahead == '?')
        ADVANCE(344);
      if (lookahead == '[')
        ADVANCE(211);
      if (lookahead == 'g')
        ADVANCE(345);
      if (lookahead == 'l')
        ADVANCE(348);
      if (lookahead == 't')
        ADVANCE(274);
      if (lookahead == 'u')
        ADVANCE(351);
      if (lookahead == '{')
        ADVANCE(235);
      if (lookahead == '|')
        ADVANCE(236);
      if (lookahead == '}')
        ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(359);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 360:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(12);
      if (lookahead == '\'')
        ADVANCE(14);
      if (lookahead == '(')
        ADVANCE(18);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(25);
      if (lookahead == '-')
        ADVANCE(26);
      if (lookahead == '.')
        ADVANCE(29);
      if (lookahead == '/')
        ADVANCE(342);
      if (lookahead == ':')
        ADVANCE(37);
      if (lookahead == '<')
        ADVANCE(343);
      if (lookahead == '=')
        ADVANCE(206);
      if (lookahead == '>')
        ADVANCE(208);
      if (lookahead == '?')
        ADVANCE(209);
      if (lookahead == '[')
        ADVANCE(211);
      if (lookahead == 'a')
        ADVANCE(284);
      if (lookahead == 'g')
        ADVANCE(345);
      if (lookahead == 'l')
        ADVANCE(348);
      if (lookahead == 't')
        ADVANCE(274);
      if (lookahead == 'u')
        ADVANCE(351);
      if (lookahead == '{')
        ADVANCE(235);
      if (lookahead == '|')
        ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(360);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 361:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(14);
      if (lookahead == '(')
        ADVANCE(18);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '.')
        ADVANCE(273);
      if (lookahead == '/')
        ADVANCE(282);
      if (lookahead == '>')
        ADVANCE(208);
      if (lookahead == '?')
        ADVANCE(283);
      if (lookahead == '[')
        ADVANCE(211);
      if (lookahead == 'a')
        ADVANCE(284);
      if (lookahead == 't')
        ADVANCE(274);
      if (lookahead == '{')
        ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(361);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 362:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(12);
      if (lookahead == '\'')
        ADVANCE(14);
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(25);
      if (lookahead == '-')
        ADVANCE(26);
      if (lookahead == '.')
        ADVANCE(29);
      if (lookahead == '/')
        ADVANCE(342);
      if (lookahead == ':')
        ADVANCE(37);
      if (lookahead == '<')
        ADVANCE(343);
      if (lookahead == '=')
        ADVANCE(206);
      if (lookahead == '>')
        ADVANCE(208);
      if (lookahead == '?')
        ADVANCE(209);
      if (lookahead == '[')
        ADVANCE(211);
      if (lookahead == 'a')
        ADVANCE(284);
      if (lookahead == 'g')
        ADVANCE(345);
      if (lookahead == 'l')
        ADVANCE(348);
      if (lookahead == 't')
        ADVANCE(274);
      if (lookahead == 'u')
        ADVANCE(351);
      if (lookahead == '{')
        ADVANCE(235);
      if (lookahead == '|')
        ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(362);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 363:
      if (lookahead == '<')
        ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(363);
      END_STATE();
    case 364:
      if (lookahead == '#')
        ADVANCE(365);
      if (lookahead == '/')
        ADVANCE(368);
      if (lookahead == '@')
        ADVANCE(205);
      END_STATE();
    case 365:
      if (lookahead == 'a')
        ADVANCE(46);
      if (lookahead == 'f')
        ADVANCE(92);
      if (lookahead == 'g')
        ADVANCE(115);
      if (lookahead == 'i')
        ADVANCE(243);
      if (lookahead == 'l')
        ADVANCE(138);
      if (lookahead == 'm')
        ADVANCE(148);
      if (lookahead == 'n')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(366);
      if (lookahead == 's')
        ADVANCE(248);
      if (lookahead == 't')
        ADVANCE(197);
      if (lookahead == 'v')
        ADVANCE(199);
      END_STATE();
    case 366:
      if (lookahead == 'e')
        ADVANCE(367);
      if (lookahead == 't')
        ADVANCE(177);
      END_STATE();
    case 367:
      if (lookahead == 'c')
        ADVANCE(247);
      if (lookahead == 't')
        ADVANCE(173);
      END_STATE();
    case 368:
      if (lookahead == '#')
        ADVANCE(369);
      END_STATE();
    case 369:
      if (lookahead == 'a')
        ADVANCE(252);
      if (lookahead == 'f')
        ADVANCE(305);
      if (lookahead == 'g')
        ADVANCE(259);
      if (lookahead == 'l')
        ADVANCE(266);
      END_STATE();
    case 370:
      if (lookahead == '<')
        ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(370);
      END_STATE();
    case 371:
      if (lookahead == '#')
        ADVANCE(372);
      if (lookahead == '/')
        ADVANCE(373);
      if (lookahead == '@')
        ADVANCE(205);
      END_STATE();
    case 372:
      if (lookahead == 'a')
        ADVANCE(46);
      if (lookahead == 'f')
        ADVANCE(92);
      if (lookahead == 'g')
        ADVANCE(115);
      if (lookahead == 'i')
        ADVANCE(243);
      if (lookahead == 'l')
        ADVANCE(138);
      if (lookahead == 'm')
        ADVANCE(148);
      if (lookahead == 'n')
        ADVANCE(153);
      if (lookahead == 'r')
        ADVANCE(366);
      if (lookahead == 's')
        ADVANCE(248);
      if (lookahead == 't')
        ADVANCE(197);
      if (lookahead == 'v')
        ADVANCE(199);
      END_STATE();
    case 373:
      if (lookahead == '#')
        ADVANCE(374);
      END_STATE();
    case 374:
      if (lookahead == 'a')
        ADVANCE(252);
      if (lookahead == 'g')
        ADVANCE(259);
      if (lookahead == 'l')
        ADVANCE(266);
      if (lookahead == 'm')
        ADVANCE(327);
      END_STATE();
    case 375:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(12);
      if (lookahead == '\'')
        ADVANCE(14);
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(25);
      if (lookahead == '-')
        ADVANCE(26);
      if (lookahead == '.')
        ADVANCE(29);
      if (lookahead == '/')
        ADVANCE(342);
      if (lookahead == ':')
        ADVANCE(37);
      if (lookahead == '<')
        ADVANCE(343);
      if (lookahead == '=')
        ADVANCE(206);
      if (lookahead == '?')
        ADVANCE(344);
      if (lookahead == '[')
        ADVANCE(211);
      if (lookahead == ']')
        ADVANCE(212);
      if (lookahead == 'g')
        ADVANCE(345);
      if (lookahead == 'l')
        ADVANCE(348);
      if (lookahead == 't')
        ADVANCE(274);
      if (lookahead == 'u')
        ADVANCE(351);
      if (lookahead == '{')
        ADVANCE(235);
      if (lookahead == '|')
        ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(375);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 376:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(14);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '.')
        ADVANCE(273);
      if (lookahead == '?')
        ADVANCE(283);
      if (lookahead == '[')
        ADVANCE(211);
      if (lookahead == 'a')
        ADVANCE(284);
      if (lookahead == 't')
        ADVANCE(274);
      if (lookahead == '{')
        ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(376);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 377:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(14);
      if (lookahead == '(')
        ADVANCE(18);
      if (lookahead == ',')
        ADVANCE(25);
      if (lookahead == '.')
        ADVANCE(273);
      if (lookahead == '>')
        ADVANCE(208);
      if (lookahead == '[')
        ADVANCE(211);
      if (lookahead == ']')
        ADVANCE(212);
      if (lookahead == 't')
        ADVANCE(274);
      if (lookahead == '{')
        ADVANCE(235);
      if (lookahead == '}')
        ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(377);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 378:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(12);
      if (lookahead == '\'')
        ADVANCE(14);
      if (lookahead == '(')
        ADVANCE(18);
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(25);
      if (lookahead == '-')
        ADVANCE(26);
      if (lookahead == '.')
        ADVANCE(29);
      if (lookahead == '/')
        ADVANCE(34);
      if (lookahead == ':')
        ADVANCE(37);
      if (lookahead == '<')
        ADVANCE(343);
      if (lookahead == '=')
        ADVANCE(206);
      if (lookahead == '>')
        ADVANCE(208);
      if (lookahead == '?')
        ADVANCE(209);
      if (lookahead == '[')
        ADVANCE(211);
      if (lookahead == 'a')
        ADVANCE(284);
      if (lookahead == 'g')
        ADVANCE(345);
      if (lookahead == 'l')
        ADVANCE(348);
      if (lookahead == 't')
        ADVANCE(274);
      if (lookahead == 'u')
        ADVANCE(351);
      if (lookahead == '{')
        ADVANCE(235);
      if (lookahead == '|')
        ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(378);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 379:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(273);
      if (lookahead == '>')
        ADVANCE(208);
      if (lookahead == '[')
        ADVANCE(211);
      if (lookahead == 't')
        ADVANCE(274);
      if (lookahead == '{')
        ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(379);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 380:
      if (lookahead == '<')
        ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(380);
      END_STATE();
    case 381:
      if (lookahead == '#')
        ADVANCE(382);
      if (lookahead == '/')
        ADVANCE(388);
      if (lookahead == '@')
        ADVANCE(205);
      END_STATE();
    case 382:
      if (lookahead == 'a')
        ADVANCE(46);
      if (lookahead == 'b')
        ADVANCE(59);
      if (lookahead == 'c')
        ADVANCE(383);
      if (lookahead == 'e')
        ADVANCE(384);
      if (lookahead == 'f')
        ADVANCE(92);
      if (lookahead == 'g')
        ADVANCE(115);
      if (lookahead == 'i')
        ADVANCE(121);
      if (lookahead == 'l')
        ADVANCE(138);
      if (lookahead == 'm')
        ADVANCE(148);
      if (lookahead == 'n')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(245);
      if (lookahead == 's')
        ADVANCE(179);
      if (lookahead == 't')
        ADVANCE(197);
      if (lookahead == 'v')
        ADVANCE(199);
      END_STATE();
    case 383:
      if (lookahead == 'o')
        ADVANCE(69);
      END_STATE();
    case 384:
      if (lookahead == 'l')
        ADVANCE(385);
      END_STATE();
    case 385:
      if (lookahead == 's')
        ADVANCE(386);
      END_STATE();
    case 386:
      if (lookahead == 'e')
        ADVANCE(387);
      END_STATE();
    case 387:
      if (lookahead == '>')
        ADVANCE(89);
      END_STATE();
    case 388:
      if (lookahead == '#')
        ADVANCE(389);
      END_STATE();
    case 389:
      if (lookahead == 'a')
        ADVANCE(252);
      if (lookahead == 'g')
        ADVANCE(259);
      if (lookahead == 'l')
        ADVANCE(322);
      END_STATE();
    case 390:
      if (lookahead == '<')
        ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(390);
      END_STATE();
    case 391:
      if (lookahead == '#')
        ADVANCE(392);
      if (lookahead == '/')
        ADVANCE(393);
      if (lookahead == '@')
        ADVANCE(205);
      END_STATE();
    case 392:
      if (lookahead == 'a')
        ADVANCE(46);
      if (lookahead == 'e')
        ADVANCE(85);
      if (lookahead == 'f')
        ADVANCE(92);
      if (lookahead == 'g')
        ADVANCE(115);
      if (lookahead == 'i')
        ADVANCE(243);
      if (lookahead == 'l')
        ADVANCE(138);
      if (lookahead == 'm')
        ADVANCE(148);
      if (lookahead == 'n')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(245);
      if (lookahead == 's')
        ADVANCE(248);
      if (lookahead == 't')
        ADVANCE(197);
      if (lookahead == 'v')
        ADVANCE(199);
      END_STATE();
    case 393:
      if (lookahead == '#')
        ADVANCE(394);
      END_STATE();
    case 394:
      if (lookahead == 'a')
        ADVANCE(252);
      if (lookahead == 'g')
        ADVANCE(259);
      if (lookahead == 'i')
        ADVANCE(395);
      if (lookahead == 'l')
        ADVANCE(266);
      END_STATE();
    case 395:
      if (lookahead == 'f')
        ADVANCE(315);
      END_STATE();
    case 396:
      if (lookahead == '<')
        ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(396);
      END_STATE();
    case 397:
      if (lookahead == '#')
        ADVANCE(398);
      if (lookahead == '/')
        ADVANCE(400);
      if (lookahead == '@')
        ADVANCE(205);
      END_STATE();
    case 398:
      if (lookahead == 'a')
        ADVANCE(46);
      if (lookahead == 'b')
        ADVANCE(59);
      if (lookahead == 'c')
        ADVANCE(399);
      if (lookahead == 'd')
        ADVANCE(77);
      if (lookahead == 'f')
        ADVANCE(92);
      if (lookahead == 'g')
        ADVANCE(115);
      if (lookahead == 'i')
        ADVANCE(243);
      if (lookahead == 'l')
        ADVANCE(138);
      if (lookahead == 'm')
        ADVANCE(148);
      if (lookahead == 'n')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(245);
      if (lookahead == 's')
        ADVANCE(248);
      if (lookahead == 't')
        ADVANCE(197);
      if (lookahead == 'v')
        ADVANCE(199);
      END_STATE();
    case 399:
      if (lookahead == 'a')
        ADVANCE(66);
      END_STATE();
    case 400:
      if (lookahead == '#')
        ADVANCE(401);
      END_STATE();
    case 401:
      if (lookahead == 'a')
        ADVANCE(252);
      if (lookahead == 'g')
        ADVANCE(259);
      if (lookahead == 'l')
        ADVANCE(266);
      if (lookahead == 's')
        ADVANCE(333);
      END_STATE();
    case 402:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(12);
      if (lookahead == '\'')
        ADVANCE(14);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(25);
      if (lookahead == '-')
        ADVANCE(26);
      if (lookahead == '.')
        ADVANCE(29);
      if (lookahead == '/')
        ADVANCE(342);
      if (lookahead == ':')
        ADVANCE(37);
      if (lookahead == '<')
        ADVANCE(343);
      if (lookahead == '=')
        ADVANCE(206);
      if (lookahead == '?')
        ADVANCE(209);
      if (lookahead == '[')
        ADVANCE(211);
      if (lookahead == 'a')
        ADVANCE(284);
      if (lookahead == 'g')
        ADVANCE(345);
      if (lookahead == 'l')
        ADVANCE(348);
      if (lookahead == 't')
        ADVANCE(274);
      if (lookahead == 'u')
        ADVANCE(351);
      if (lookahead == '{')
        ADVANCE(235);
      if (lookahead == '|')
        ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(402);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 403:
      if (lookahead == '<')
        ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(403);
      END_STATE();
    case 404:
      if (lookahead == '#')
        ADVANCE(382);
      if (lookahead == '/')
        ADVANCE(405);
      if (lookahead == '@')
        ADVANCE(205);
      END_STATE();
    case 405:
      if (lookahead == '#')
        ADVANCE(406);
      END_STATE();
    case 406:
      if (lookahead == 'a')
        ADVANCE(252);
      if (lookahead == 'g')
        ADVANCE(259);
      if (lookahead == 'i')
        ADVANCE(407);
      if (lookahead == 'l')
        ADVANCE(322);
      if (lookahead == 's')
        ADVANCE(408);
      END_STATE();
    case 407:
      if (lookahead == 't')
        ADVANCE(317);
      END_STATE();
    case 408:
      if (lookahead == 'e')
        ADVANCE(409);
      END_STATE();
    case 409:
      if (lookahead == 'p')
        ADVANCE(410);
      END_STATE();
    case 410:
      if (lookahead == '>')
        ADVANCE(411);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDsep_GT);
      END_STATE();
    case 412:
      if (lookahead == '<')
        ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(412);
      END_STATE();
    case 413:
      if (lookahead == '#')
        ADVANCE(372);
      if (lookahead == '/')
        ADVANCE(414);
      if (lookahead == '@')
        ADVANCE(205);
      END_STATE();
    case 414:
      if (lookahead == '#')
        ADVANCE(415);
      END_STATE();
    case 415:
      if (lookahead == 'a')
        ADVANCE(252);
      if (lookahead == 'f')
        ADVANCE(305);
      if (lookahead == 'g')
        ADVANCE(259);
      if (lookahead == 'l')
        ADVANCE(266);
      if (lookahead == 'm')
        ADVANCE(327);
      END_STATE();
    case 416:
      if (lookahead == '<')
        ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(416);
      END_STATE();
    case 417:
      if (lookahead == '#')
        ADVANCE(418);
      if (lookahead == '/')
        ADVANCE(419);
      if (lookahead == '@')
        ADVANCE(205);
      END_STATE();
    case 418:
      if (lookahead == 'a')
        ADVANCE(46);
      if (lookahead == 'b')
        ADVANCE(59);
      if (lookahead == 'c')
        ADVANCE(383);
      if (lookahead == 'f')
        ADVANCE(92);
      if (lookahead == 'g')
        ADVANCE(115);
      if (lookahead == 'i')
        ADVANCE(243);
      if (lookahead == 'l')
        ADVANCE(138);
      if (lookahead == 'm')
        ADVANCE(148);
      if (lookahead == 'n')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(245);
      if (lookahead == 's')
        ADVANCE(179);
      if (lookahead == 't')
        ADVANCE(197);
      if (lookahead == 'v')
        ADVANCE(199);
      END_STATE();
    case 419:
      if (lookahead == '#')
        ADVANCE(420);
      END_STATE();
    case 420:
      if (lookahead == 'a')
        ADVANCE(252);
      if (lookahead == 'g')
        ADVANCE(259);
      if (lookahead == 'i')
        ADVANCE(407);
      if (lookahead == 'l')
        ADVANCE(266);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 240},
  [2] = {.lex_state = 272},
  [3] = {.lex_state = 280},
  [4] = {.lex_state = 281},
  [5] = {.lex_state = 281},
  [6] = {.lex_state = 281},
  [7] = {.lex_state = 281},
  [8] = {.lex_state = 281},
  [9] = {.lex_state = 286},
  [10] = {.lex_state = 301},
  [11] = {.lex_state = 281},
  [12] = {.lex_state = 281},
  [13] = {.lex_state = 281},
  [14] = {.lex_state = 281},
  [15] = {.lex_state = 281},
  [16] = {.lex_state = 281},
  [17] = {.lex_state = 281},
  [18] = {.lex_state = 301},
  [19] = {.lex_state = 281},
  [20] = {.lex_state = 301},
  [21] = {.lex_state = 281},
  [22] = {.lex_state = 301},
  [23] = {.lex_state = 340},
  [24] = {.lex_state = 240},
  [25] = {.lex_state = 240},
  [26] = {.lex_state = 341},
  [27] = {.lex_state = 341},
  [28] = {.lex_state = 356},
  [29] = {.lex_state = 357},
  [30] = {.lex_state = 272},
  [31] = {.lex_state = 358},
  [32] = {.lex_state = 341},
  [33] = {.lex_state = 272},
  [34] = {.lex_state = 359},
  [35] = {.lex_state = 281},
  [36] = {.lex_state = 272},
  [37] = {.lex_state = 280},
  [38] = {.lex_state = 360},
  [39] = {.lex_state = 360},
  [40] = {.lex_state = 356},
  [41] = {.lex_state = 357},
  [42] = {.lex_state = 272},
  [43] = {.lex_state = 360},
  [44] = {.lex_state = 360},
  [45] = {.lex_state = 280},
  [46] = {.lex_state = 361},
  [47] = {.lex_state = 362},
  [48] = {.lex_state = 272},
  [49] = {.lex_state = 280},
  [50] = {.lex_state = 362},
  [51] = {.lex_state = 281},
  [52] = {.lex_state = 280},
  [53] = {.lex_state = 363},
  [54] = {.lex_state = 281},
  [55] = {.lex_state = 370},
  [56] = {.lex_state = 281},
  [57] = {.lex_state = 301},
  [58] = {.lex_state = 286},
  [59] = {.lex_state = 286},
  [60] = {.lex_state = 301},
  [61] = {.lex_state = 281},
  [62] = {.lex_state = 301},
  [63] = {.lex_state = 281},
  [64] = {.lex_state = 301},
  [65] = {.lex_state = 281},
  [66] = {.lex_state = 301},
  [67] = {.lex_state = 281},
  [68] = {.lex_state = 301},
  [69] = {.lex_state = 281},
  [70] = {.lex_state = 301},
  [71] = {.lex_state = 281},
  [72] = {.lex_state = 301},
  [73] = {.lex_state = 281},
  [74] = {.lex_state = 301},
  [75] = {.lex_state = 281},
  [76] = {.lex_state = 301},
  [77] = {.lex_state = 281},
  [78] = {.lex_state = 240},
  [79] = {.lex_state = 341},
  [80] = {.lex_state = 341},
  [81] = {.lex_state = 357},
  [82] = {.lex_state = 375},
  [83] = {.lex_state = 357},
  [84] = {.lex_state = 341},
  [85] = {.lex_state = 272},
  [86] = {.lex_state = 376},
  [87] = {.lex_state = 358},
  [88] = {.lex_state = 341},
  [89] = {.lex_state = 240},
  [90] = {.lex_state = 272},
  [91] = {.lex_state = 377},
  [92] = {.lex_state = 272},
  [93] = {.lex_state = 359},
  [94] = {.lex_state = 272},
  [95] = {.lex_state = 272},
  [96] = {.lex_state = 378},
  [97] = {.lex_state = 378},
  [98] = {.lex_state = 356},
  [99] = {.lex_state = 357},
  [100] = {.lex_state = 272},
  [101] = {.lex_state = 378},
  [102] = {.lex_state = 378},
  [103] = {.lex_state = 301},
  [104] = {.lex_state = 378},
  [105] = {.lex_state = 281},
  [106] = {.lex_state = 377},
  [107] = {.lex_state = 377},
  [108] = {.lex_state = 356},
  [109] = {.lex_state = 357},
  [110] = {.lex_state = 272},
  [111] = {.lex_state = 377},
  [112] = {.lex_state = 377},
  [113] = {.lex_state = 379},
  [114] = {.lex_state = 280},
  [115] = {.lex_state = 360},
  [116] = {.lex_state = 360},
  [117] = {.lex_state = 357},
  [118] = {.lex_state = 360},
  [119] = {.lex_state = 272},
  [120] = {.lex_state = 376},
  [121] = {.lex_state = 360},
  [122] = {.lex_state = 360},
  [123] = {.lex_state = 380},
  [124] = {.lex_state = 272},
  [125] = {.lex_state = 379},
  [126] = {.lex_state = 362},
  [127] = {.lex_state = 379},
  [128] = {.lex_state = 361},
  [129] = {.lex_state = 361},
  [130] = {.lex_state = 356},
  [131] = {.lex_state = 357},
  [132] = {.lex_state = 272},
  [133] = {.lex_state = 361},
  [134] = {.lex_state = 361},
  [135] = {.lex_state = 281},
  [136] = {.lex_state = 361},
  [137] = {.lex_state = 272},
  [138] = {.lex_state = 361},
  [139] = {.lex_state = 281},
  [140] = {.lex_state = 362},
  [141] = {.lex_state = 281},
  [142] = {.lex_state = 390},
  [143] = {.lex_state = 281},
  [144] = {.lex_state = 396},
  [145] = {.lex_state = 301},
  [146] = {.lex_state = 281},
  [147] = {.lex_state = 363},
  [148] = {.lex_state = 363},
  [149] = {.lex_state = 363},
  [150] = {.lex_state = 301},
  [151] = {.lex_state = 281},
  [152] = {.lex_state = 370},
  [153] = {.lex_state = 370},
  [154] = {.lex_state = 370},
  [155] = {.lex_state = 301},
  [156] = {.lex_state = 286},
  [157] = {.lex_state = 301},
  [158] = {.lex_state = 301},
  [159] = {.lex_state = 301},
  [160] = {.lex_state = 301},
  [161] = {.lex_state = 301},
  [162] = {.lex_state = 301},
  [163] = {.lex_state = 301},
  [164] = {.lex_state = 301},
  [165] = {.lex_state = 301},
  [166] = {.lex_state = 357},
  [167] = {.lex_state = 357},
  [168] = {.lex_state = 375},
  [169] = {.lex_state = 357},
  [170] = {.lex_state = 341},
  [171] = {.lex_state = 357},
  [172] = {.lex_state = 341},
  [173] = {.lex_state = 272},
  [174] = {.lex_state = 358},
  [175] = {.lex_state = 402},
  [176] = {.lex_state = 376},
  [177] = {.lex_state = 272},
  [178] = {.lex_state = 272},
  [179] = {.lex_state = 281},
  [180] = {.lex_state = 378},
  [181] = {.lex_state = 378},
  [182] = {.lex_state = 357},
  [183] = {.lex_state = 378},
  [184] = {.lex_state = 272},
  [185] = {.lex_state = 376},
  [186] = {.lex_state = 378},
  [187] = {.lex_state = 378},
  [188] = {.lex_state = 272},
  [189] = {.lex_state = 281},
  [190] = {.lex_state = 378},
  [191] = {.lex_state = 281},
  [192] = {.lex_state = 301},
  [193] = {.lex_state = 281},
  [194] = {.lex_state = 377},
  [195] = {.lex_state = 377},
  [196] = {.lex_state = 357},
  [197] = {.lex_state = 377},
  [198] = {.lex_state = 272},
  [199] = {.lex_state = 376},
  [200] = {.lex_state = 377},
  [201] = {.lex_state = 377},
  [202] = {.lex_state = 379},
  [203] = {.lex_state = 361},
  [204] = {.lex_state = 360},
  [205] = {.lex_state = 360},
  [206] = {.lex_state = 360},
  [207] = {.lex_state = 376},
  [208] = {.lex_state = 301},
  [209] = {.lex_state = 380},
  [210] = {.lex_state = 380},
  [211] = {.lex_state = 281},
  [212] = {.lex_state = 403},
  [213] = {.lex_state = 380},
  [214] = {.lex_state = 403},
  [215] = {.lex_state = 380},
  [216] = {.lex_state = 379},
  [217] = {.lex_state = 379},
  [218] = {.lex_state = 361},
  [219] = {.lex_state = 361},
  [220] = {.lex_state = 357},
  [221] = {.lex_state = 361},
  [222] = {.lex_state = 272},
  [223] = {.lex_state = 376},
  [224] = {.lex_state = 361},
  [225] = {.lex_state = 361},
  [226] = {.lex_state = 281},
  [227] = {.lex_state = 281},
  [228] = {.lex_state = 281},
  [229] = {.lex_state = 390},
  [230] = {.lex_state = 301},
  [231] = {.lex_state = 281},
  [232] = {.lex_state = 390},
  [233] = {.lex_state = 390},
  [234] = {.lex_state = 390},
  [235] = {.lex_state = 301},
  [236] = {.lex_state = 281},
  [237] = {.lex_state = 396},
  [238] = {.lex_state = 396},
  [239] = {.lex_state = 396},
  [240] = {.lex_state = 396},
  [241] = {.lex_state = 412},
  [242] = {.lex_state = 280},
  [243] = {.lex_state = 301},
  [244] = {.lex_state = 363},
  [245] = {.lex_state = 363},
  [246] = {.lex_state = 370},
  [247] = {.lex_state = 281},
  [248] = {.lex_state = 301},
  [249] = {.lex_state = 370},
  [250] = {.lex_state = 370},
  [251] = {.lex_state = 357},
  [252] = {.lex_state = 357},
  [253] = {.lex_state = 376},
  [254] = {.lex_state = 272},
  [255] = {.lex_state = 376},
  [256] = {.lex_state = 402},
  [257] = {.lex_state = 376},
  [258] = {.lex_state = 358},
  [259] = {.lex_state = 376},
  [260] = {.lex_state = 281},
  [261] = {.lex_state = 378},
  [262] = {.lex_state = 378},
  [263] = {.lex_state = 378},
  [264] = {.lex_state = 376},
  [265] = {.lex_state = 281},
  [266] = {.lex_state = 281},
  [267] = {.lex_state = 377},
  [268] = {.lex_state = 377},
  [269] = {.lex_state = 377},
  [270] = {.lex_state = 376},
  [271] = {.lex_state = 360},
  [272] = {.lex_state = 380},
  [273] = {.lex_state = 280},
  [274] = {.lex_state = 403},
  [275] = {.lex_state = 301},
  [276] = {.lex_state = 380},
  [277] = {.lex_state = 380},
  [278] = {.lex_state = 361},
  [279] = {.lex_state = 361},
  [280] = {.lex_state = 361},
  [281] = {.lex_state = 376},
  [282] = {.lex_state = 390},
  [283] = {.lex_state = 390},
  [284] = {.lex_state = 281},
  [285] = {.lex_state = 301},
  [286] = {.lex_state = 390},
  [287] = {.lex_state = 390},
  [288] = {.lex_state = 280},
  [289] = {.lex_state = 396},
  [290] = {.lex_state = 301},
  [291] = {.lex_state = 396},
  [292] = {.lex_state = 396},
  [293] = {.lex_state = 412},
  [294] = {.lex_state = 301},
  [295] = {.lex_state = 370},
  [296] = {.lex_state = 301},
  [297] = {.lex_state = 376},
  [298] = {.lex_state = 376},
  [299] = {.lex_state = 376},
  [300] = {.lex_state = 378},
  [301] = {.lex_state = 377},
  [302] = {.lex_state = 380},
  [303] = {.lex_state = 416},
  [304] = {.lex_state = 301},
  [305] = {.lex_state = 361},
  [306] = {.lex_state = 390},
  [307] = {.lex_state = 390},
  [308] = {.lex_state = 301},
  [309] = {.lex_state = 396},
  [310] = {.lex_state = 396},
  [311] = {.lex_state = 301},
  [312] = {.lex_state = 416},
  [313] = {.lex_state = 380},
  [314] = {.lex_state = 416},
  [315] = {.lex_state = 396},
  [316] = {.lex_state = 396},
  [317] = {.lex_state = 380},
  [318] = {.lex_state = 416},
  [319] = {.lex_state = 396},
  [320] = {.lex_state = 396},
  [321] = {.lex_state = 396},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1),
    [anon_sym_LT_AT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_POUNDlist] = ACTIONS(1),
    [sym_break] = ACTIONS(1),
    [sym_continue] = ACTIONS(1),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1),
    [anon_sym_LT_POUNDitems] = ACTIONS(1),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1),
    [anon_sym_LT_POUNDif] = ACTIONS(1),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1),
    [anon_sym_LT_POUNDcase] = ACTIONS(1),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1),
    [anon_sym_LT_POUNDnested] = ACTIONS(1),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1),
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
    [anon_sym_LT_POUNDglobal] = ACTIONS(1),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [sym__definition] = STATE(24),
    [sym_interpolation] = STATE(24),
    [sym_directive] = STATE(24),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(9),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUNDlist] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(23),
    [sym_fallback] = ACTIONS(25),
    [sym_flush] = ACTIONS(25),
    [anon_sym_LT_POUNDftl] = ACTIONS(27),
    [anon_sym_LT_POUNDimport] = ACTIONS(29),
    [anon_sym_LT_POUNDinclude] = ACTIONS(31),
    [sym_lt] = ACTIONS(25),
    [sym_nt] = ACTIONS(25),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(33),
    [sym_rt] = ACTIONS(25),
    [anon_sym_LT_POUNDsetting] = ACTIONS(35),
    [sym_stop] = ACTIONS(25),
    [sym_t] = ACTIONS(25),
    [anon_sym_LT_POUNDvisit] = ACTIONS(37),
    [anon_sym_LT_POUNDassign] = ACTIONS(39),
    [sym_end_assign] = ACTIONS(41),
    [anon_sym_LT_POUNDglobal] = ACTIONS(43),
    [sym_end_global] = ACTIONS(45),
    [anon_sym_LT_POUNDlocal] = ACTIONS(47),
    [sym_end_local] = ACTIONS(49),
  },
  [2] = {
    [sym_expression] = STATE(33),
    [sym_type] = STATE(34),
    [sym_string] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_sequence] = STATE(27),
    [sym_hash] = STATE(27),
    [sym_top_level] = STATE(27),
    [sym_spec_var] = STATE(27),
    [aux_sym_interpolation_repeat1] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(53),
    [sym_number] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(65),
  },
  [3] = {
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(67),
  },
  [4] = {
    [sym_parameter_group] = STATE(45),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(47),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(47),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
  },
  [5] = {
    [sym_parameter_group] = STATE(51),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(50),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(50),
    [aux_sym_group_repeat1] = STATE(51),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
  },
  [6] = {
    [sym_parameter_group] = STATE(52),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(47),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(47),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
  },
  [7] = {
    [sym_parameter_group] = STATE(54),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(50),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(50),
    [aux_sym_group_repeat1] = STATE(54),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(91),
  },
  [8] = {
    [sym_parameter_group] = STATE(56),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(50),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(50),
    [aux_sym_group_repeat1] = STATE(56),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(93),
  },
  [9] = {
    [sym_directive] = STATE(58),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_attempt_middle] = STATE(59),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_attempt_repeat1] = STATE(59),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUNDlist] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(23),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(95),
    [sym_recover] = ACTIONS(97),
    [sym_fallback] = ACTIONS(25),
    [sym_flush] = ACTIONS(25),
    [anon_sym_LT_POUNDftl] = ACTIONS(27),
    [anon_sym_LT_POUNDimport] = ACTIONS(29),
    [anon_sym_LT_POUNDinclude] = ACTIONS(31),
    [sym_lt] = ACTIONS(25),
    [sym_nt] = ACTIONS(25),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(33),
    [sym_rt] = ACTIONS(25),
    [anon_sym_LT_POUNDsetting] = ACTIONS(35),
    [sym_stop] = ACTIONS(25),
    [sym_t] = ACTIONS(25),
    [anon_sym_LT_POUNDvisit] = ACTIONS(37),
    [anon_sym_LT_POUNDassign] = ACTIONS(39),
    [sym_end_assign] = ACTIONS(41),
    [anon_sym_LT_POUNDglobal] = ACTIONS(43),
    [sym_end_global] = ACTIONS(45),
    [anon_sym_LT_POUNDlocal] = ACTIONS(47),
    [sym_end_local] = ACTIONS(49),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_comment] = ACTIONS(99),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(99),
    [anon_sym_LT_AT] = ACTIONS(99),
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
  [11] = {
    [sym_parameter_group] = STATE(61),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(50),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(50),
    [aux_sym_group_repeat1] = STATE(61),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(101),
  },
  [12] = {
    [sym_parameter_group] = STATE(63),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(50),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(50),
    [aux_sym_group_repeat1] = STATE(63),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(103),
  },
  [13] = {
    [sym_parameter_group] = STATE(65),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(50),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(50),
    [aux_sym_group_repeat1] = STATE(65),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(105),
  },
  [14] = {
    [sym_parameter_group] = STATE(67),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(50),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(50),
    [aux_sym_group_repeat1] = STATE(67),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(107),
  },
  [15] = {
    [sym_parameter_group] = STATE(69),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(50),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(50),
    [aux_sym_group_repeat1] = STATE(69),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(109),
  },
  [16] = {
    [sym_parameter_group] = STATE(71),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(50),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(50),
    [aux_sym_group_repeat1] = STATE(71),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(111),
  },
  [17] = {
    [sym_parameter_group] = STATE(73),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(50),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(50),
    [aux_sym_group_repeat1] = STATE(73),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(113),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_comment] = ACTIONS(115),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_LT_AT] = ACTIONS(115),
    [anon_sym_LT_POUNDlist] = ACTIONS(115),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(115),
    [sym_break] = ACTIONS(115),
    [sym_continue] = ACTIONS(115),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(115),
    [anon_sym_LT_POUNDitems] = ACTIONS(115),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(115),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(115),
    [anon_sym_LT_POUNDif] = ACTIONS(115),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(115),
    [anon_sym_LT_POUNDelseif] = ACTIONS(115),
    [anon_sym_LT_POUNDswitch] = ACTIONS(115),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(115),
    [anon_sym_LT_POUNDcase] = ACTIONS(115),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(115),
    [anon_sym_LT_POUNDfunction] = ACTIONS(115),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(115),
    [anon_sym_LT_POUNDreturn] = ACTIONS(115),
    [anon_sym_LT_POUNDmacro] = ACTIONS(115),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(115),
    [anon_sym_LT_POUNDnested] = ACTIONS(115),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(115),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(115),
    [sym_recover] = ACTIONS(115),
    [sym_fallback] = ACTIONS(115),
    [sym_flush] = ACTIONS(115),
    [anon_sym_LT_POUNDftl] = ACTIONS(115),
    [anon_sym_LT_POUNDimport] = ACTIONS(115),
    [anon_sym_LT_POUNDinclude] = ACTIONS(115),
    [sym_lt] = ACTIONS(115),
    [sym_nt] = ACTIONS(115),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(115),
    [sym_rt] = ACTIONS(115),
    [anon_sym_LT_POUNDsetting] = ACTIONS(115),
    [sym_stop] = ACTIONS(115),
    [sym_t] = ACTIONS(115),
    [anon_sym_LT_POUNDvisit] = ACTIONS(115),
    [anon_sym_LT_POUNDassign] = ACTIONS(115),
    [sym_end_assign] = ACTIONS(115),
    [anon_sym_LT_POUNDglobal] = ACTIONS(115),
    [sym_end_global] = ACTIONS(115),
    [anon_sym_LT_POUNDlocal] = ACTIONS(115),
    [sym_end_local] = ACTIONS(115),
  },
  [19] = {
    [sym_parameter_group] = STATE(75),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(50),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(50),
    [aux_sym_group_repeat1] = STATE(75),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(117),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_comment] = ACTIONS(119),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_LT_AT] = ACTIONS(119),
    [anon_sym_LT_POUNDlist] = ACTIONS(119),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(119),
    [sym_break] = ACTIONS(119),
    [sym_continue] = ACTIONS(119),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(119),
    [anon_sym_LT_POUNDitems] = ACTIONS(119),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(119),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(119),
    [anon_sym_LT_POUNDif] = ACTIONS(119),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(119),
    [anon_sym_LT_POUNDelseif] = ACTIONS(119),
    [anon_sym_LT_POUNDswitch] = ACTIONS(119),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(119),
    [anon_sym_LT_POUNDcase] = ACTIONS(119),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(119),
    [anon_sym_LT_POUNDfunction] = ACTIONS(119),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(119),
    [anon_sym_LT_POUNDreturn] = ACTIONS(119),
    [anon_sym_LT_POUNDmacro] = ACTIONS(119),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(119),
    [anon_sym_LT_POUNDnested] = ACTIONS(119),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(119),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(119),
    [sym_recover] = ACTIONS(119),
    [sym_fallback] = ACTIONS(119),
    [sym_flush] = ACTIONS(119),
    [anon_sym_LT_POUNDftl] = ACTIONS(119),
    [anon_sym_LT_POUNDimport] = ACTIONS(119),
    [anon_sym_LT_POUNDinclude] = ACTIONS(119),
    [sym_lt] = ACTIONS(119),
    [sym_nt] = ACTIONS(119),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(119),
    [sym_rt] = ACTIONS(119),
    [anon_sym_LT_POUNDsetting] = ACTIONS(119),
    [sym_stop] = ACTIONS(119),
    [sym_t] = ACTIONS(119),
    [anon_sym_LT_POUNDvisit] = ACTIONS(119),
    [anon_sym_LT_POUNDassign] = ACTIONS(119),
    [sym_end_assign] = ACTIONS(119),
    [anon_sym_LT_POUNDglobal] = ACTIONS(119),
    [sym_end_global] = ACTIONS(119),
    [anon_sym_LT_POUNDlocal] = ACTIONS(119),
    [sym_end_local] = ACTIONS(119),
  },
  [21] = {
    [sym_parameter_group] = STATE(77),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(50),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(50),
    [aux_sym_group_repeat1] = STATE(77),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(121),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_comment] = ACTIONS(123),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(123),
    [anon_sym_LT_AT] = ACTIONS(123),
    [anon_sym_LT_POUNDlist] = ACTIONS(123),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(123),
    [sym_break] = ACTIONS(123),
    [sym_continue] = ACTIONS(123),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(123),
    [anon_sym_LT_POUNDitems] = ACTIONS(123),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(123),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(123),
    [anon_sym_LT_POUNDif] = ACTIONS(123),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(123),
    [anon_sym_LT_POUNDelseif] = ACTIONS(123),
    [anon_sym_LT_POUNDswitch] = ACTIONS(123),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(123),
    [anon_sym_LT_POUNDcase] = ACTIONS(123),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(123),
    [anon_sym_LT_POUNDfunction] = ACTIONS(123),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(123),
    [anon_sym_LT_POUNDreturn] = ACTIONS(123),
    [anon_sym_LT_POUNDmacro] = ACTIONS(123),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(123),
    [anon_sym_LT_POUNDnested] = ACTIONS(123),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(123),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(123),
    [sym_recover] = ACTIONS(123),
    [sym_fallback] = ACTIONS(123),
    [sym_flush] = ACTIONS(123),
    [anon_sym_LT_POUNDftl] = ACTIONS(123),
    [anon_sym_LT_POUNDimport] = ACTIONS(123),
    [anon_sym_LT_POUNDinclude] = ACTIONS(123),
    [sym_lt] = ACTIONS(123),
    [sym_nt] = ACTIONS(123),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(123),
    [sym_rt] = ACTIONS(123),
    [anon_sym_LT_POUNDsetting] = ACTIONS(123),
    [sym_stop] = ACTIONS(123),
    [sym_t] = ACTIONS(123),
    [anon_sym_LT_POUNDvisit] = ACTIONS(123),
    [anon_sym_LT_POUNDassign] = ACTIONS(123),
    [sym_end_assign] = ACTIONS(123),
    [anon_sym_LT_POUNDglobal] = ACTIONS(123),
    [sym_end_global] = ACTIONS(123),
    [anon_sym_LT_POUNDlocal] = ACTIONS(123),
    [sym_end_local] = ACTIONS(123),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(125),
  },
  [24] = {
    [sym__definition] = STATE(78),
    [sym_interpolation] = STATE(78),
    [sym_directive] = STATE(78),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(78),
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_comment] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(9),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUNDlist] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(23),
    [sym_fallback] = ACTIONS(25),
    [sym_flush] = ACTIONS(25),
    [anon_sym_LT_POUNDftl] = ACTIONS(27),
    [anon_sym_LT_POUNDimport] = ACTIONS(29),
    [anon_sym_LT_POUNDinclude] = ACTIONS(31),
    [sym_lt] = ACTIONS(25),
    [sym_nt] = ACTIONS(25),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(33),
    [sym_rt] = ACTIONS(25),
    [anon_sym_LT_POUNDsetting] = ACTIONS(35),
    [sym_stop] = ACTIONS(25),
    [sym_t] = ACTIONS(25),
    [anon_sym_LT_POUNDvisit] = ACTIONS(37),
    [anon_sym_LT_POUNDassign] = ACTIONS(39),
    [sym_end_assign] = ACTIONS(41),
    [anon_sym_LT_POUNDglobal] = ACTIONS(43),
    [sym_end_global] = ACTIONS(45),
    [anon_sym_LT_POUNDlocal] = ACTIONS(47),
    [sym_end_local] = ACTIONS(49),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym_comment] = ACTIONS(131),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_LT_AT] = ACTIONS(131),
    [anon_sym_LT_POUNDlist] = ACTIONS(131),
    [anon_sym_LT_POUNDif] = ACTIONS(131),
    [anon_sym_LT_POUNDswitch] = ACTIONS(131),
    [anon_sym_LT_POUNDfunction] = ACTIONS(131),
    [anon_sym_LT_POUNDmacro] = ACTIONS(131),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(131),
    [sym_fallback] = ACTIONS(131),
    [sym_flush] = ACTIONS(131),
    [anon_sym_LT_POUNDftl] = ACTIONS(131),
    [anon_sym_LT_POUNDimport] = ACTIONS(131),
    [anon_sym_LT_POUNDinclude] = ACTIONS(131),
    [sym_lt] = ACTIONS(131),
    [sym_nt] = ACTIONS(131),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(131),
    [sym_rt] = ACTIONS(131),
    [anon_sym_LT_POUNDsetting] = ACTIONS(131),
    [sym_stop] = ACTIONS(131),
    [sym_t] = ACTIONS(131),
    [anon_sym_LT_POUNDvisit] = ACTIONS(131),
    [anon_sym_LT_POUNDassign] = ACTIONS(131),
    [sym_end_assign] = ACTIONS(131),
    [anon_sym_LT_POUNDglobal] = ACTIONS(131),
    [sym_end_global] = ACTIONS(131),
    [anon_sym_LT_POUNDlocal] = ACTIONS(131),
    [sym_end_local] = ACTIONS(131),
  },
  [26] = {
    [anon_sym_RBRACE] = ACTIONS(133),
    [anon_sym_using] = ACTIONS(135),
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_DOT_DOT] = ACTIONS(135),
    [anon_sym_DOT_DOT_LT] = ACTIONS(133),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(133),
    [anon_sym_COLON] = ACTIONS(133),
    [anon_sym_STAR] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(135),
    [anon_sym_SLASH] = ACTIONS(135),
    [anon_sym_DASH] = ACTIONS(135),
    [anon_sym_PERCENT] = ACTIONS(135),
    [anon_sym_EQ_EQ] = ACTIONS(133),
    [anon_sym_BANG_EQ] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(135),
    [anon_sym_LT_EQ] = ACTIONS(133),
    [anon_sym_lt] = ACTIONS(135),
    [anon_sym_lte] = ACTIONS(135),
    [anon_sym_gt] = ACTIONS(135),
    [anon_sym_gte] = ACTIONS(135),
    [anon_sym_BANG] = ACTIONS(135),
    [anon_sym_AMP_AMP] = ACTIONS(133),
    [anon_sym_PIPE_PIPE] = ACTIONS(133),
    [anon_sym_QMARK_QMARK] = ACTIONS(133),
    [anon_sym_EQ] = ACTIONS(135),
    [anon_sym_PLUS_EQ] = ACTIONS(133),
    [anon_sym_DASH_EQ] = ACTIONS(133),
    [anon_sym_STAR_EQ] = ACTIONS(133),
    [anon_sym_SLASH_EQ] = ACTIONS(133),
    [anon_sym_PERCENT_EQ] = ACTIONS(133),
    [anon_sym_PLUS_PLUS] = ACTIONS(133),
    [anon_sym_DASH_DASH] = ACTIONS(133),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(133),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(133),
    [sym_number] = ACTIONS(135),
    [anon_sym_true] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(133),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(133),
  },
  [27] = {
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_using] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_DOT_DOT] = ACTIONS(139),
    [anon_sym_DOT_DOT_LT] = ACTIONS(137),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(137),
    [anon_sym_COLON] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_PERCENT] = ACTIONS(139),
    [anon_sym_EQ_EQ] = ACTIONS(137),
    [anon_sym_BANG_EQ] = ACTIONS(137),
    [anon_sym_LT] = ACTIONS(139),
    [anon_sym_LT_EQ] = ACTIONS(137),
    [anon_sym_lt] = ACTIONS(139),
    [anon_sym_lte] = ACTIONS(139),
    [anon_sym_gt] = ACTIONS(139),
    [anon_sym_gte] = ACTIONS(139),
    [anon_sym_BANG] = ACTIONS(139),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_QMARK_QMARK] = ACTIONS(137),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_PLUS_EQ] = ACTIONS(137),
    [anon_sym_DASH_EQ] = ACTIONS(137),
    [anon_sym_STAR_EQ] = ACTIONS(137),
    [anon_sym_SLASH_EQ] = ACTIONS(137),
    [anon_sym_PERCENT_EQ] = ACTIONS(137),
    [anon_sym_PLUS_PLUS] = ACTIONS(137),
    [anon_sym_DASH_DASH] = ACTIONS(137),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(137),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(137),
    [sym_number] = ACTIONS(139),
    [anon_sym_true] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(137),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(137),
  },
  [28] = {
    [anon_sym_false] = ACTIONS(141),
  },
  [29] = {
    [sym_expression] = STATE(81),
    [sym_type] = STATE(82),
    [sym_string] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_sequence] = STATE(27),
    [sym_hash] = STATE(27),
    [sym_top_level] = STATE(27),
    [sym_spec_var] = STATE(27),
    [aux_sym_as_expression_repeat1] = STATE(82),
    [aux_sym_sequence_repeat1] = STATE(83),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(53),
    [sym_number] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(61),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(65),
  },
  [30] = {
    [sym_expression] = STATE(85),
    [sym_type] = STATE(34),
    [sym_string] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_sequence] = STATE(27),
    [sym_hash] = STATE(27),
    [sym_top_level] = STATE(27),
    [sym_spec_var] = STATE(27),
    [aux_sym_interpolation_repeat1] = STATE(85),
    [aux_sym_as_expression_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(53),
    [sym_number] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(65),
  },
  [31] = {
    [sym_group] = STATE(87),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_using] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_DOT_DOT] = ACTIONS(151),
    [anon_sym_DOT_DOT_LT] = ACTIONS(147),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(151),
    [anon_sym_SLASH] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(151),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_lt] = ACTIONS(151),
    [anon_sym_lte] = ACTIONS(151),
    [anon_sym_gt] = ACTIONS(151),
    [anon_sym_gte] = ACTIONS(151),
    [anon_sym_BANG] = ACTIONS(151),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_QMARK_QMARK] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(151),
    [anon_sym_PLUS_EQ] = ACTIONS(147),
    [anon_sym_DASH_EQ] = ACTIONS(147),
    [anon_sym_STAR_EQ] = ACTIONS(147),
    [anon_sym_SLASH_EQ] = ACTIONS(147),
    [anon_sym_PERCENT_EQ] = ACTIONS(147),
    [anon_sym_PLUS_PLUS] = ACTIONS(147),
    [anon_sym_DASH_DASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(147),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_RBRACK] = ACTIONS(147),
    [anon_sym_LBRACE] = ACTIONS(147),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(151),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_GT] = ACTIONS(147),
  },
  [32] = {
    [sym_group] = STATE(88),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_using] = ACTIONS(155),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_DOT_DOT] = ACTIONS(155),
    [anon_sym_DOT_DOT_LT] = ACTIONS(153),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(155),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(155),
    [anon_sym_PERCENT] = ACTIONS(155),
    [anon_sym_EQ_EQ] = ACTIONS(153),
    [anon_sym_BANG_EQ] = ACTIONS(153),
    [anon_sym_LT] = ACTIONS(155),
    [anon_sym_LT_EQ] = ACTIONS(153),
    [anon_sym_lt] = ACTIONS(155),
    [anon_sym_lte] = ACTIONS(155),
    [anon_sym_gt] = ACTIONS(155),
    [anon_sym_gte] = ACTIONS(155),
    [anon_sym_BANG] = ACTIONS(155),
    [anon_sym_AMP_AMP] = ACTIONS(153),
    [anon_sym_PIPE_PIPE] = ACTIONS(153),
    [anon_sym_QMARK_QMARK] = ACTIONS(153),
    [anon_sym_EQ] = ACTIONS(155),
    [anon_sym_PLUS_EQ] = ACTIONS(153),
    [anon_sym_DASH_EQ] = ACTIONS(153),
    [anon_sym_STAR_EQ] = ACTIONS(153),
    [anon_sym_SLASH_EQ] = ACTIONS(153),
    [anon_sym_PERCENT_EQ] = ACTIONS(153),
    [anon_sym_PLUS_PLUS] = ACTIONS(153),
    [anon_sym_DASH_DASH] = ACTIONS(153),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(153),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(153),
    [sym_number] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(153),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(155),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(153),
  },
  [33] = {
    [sym_expression] = STATE(90),
    [sym_type] = STATE(34),
    [sym_string] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_sequence] = STATE(27),
    [sym_hash] = STATE(27),
    [sym_top_level] = STATE(27),
    [sym_spec_var] = STATE(27),
    [aux_sym_interpolation_repeat1] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(53),
    [sym_number] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(65),
  },
  [34] = {
    [sym_type] = STATE(93),
    [sym_operator] = STATE(92),
    [sym_string] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_sequence] = STATE(27),
    [sym_hash] = STATE(27),
    [sym_top_level] = STATE(27),
    [sym_spec_var] = STATE(27),
    [aux_sym_as_expression_repeat1] = STATE(93),
    [aux_sym_as_expression_repeat2] = STATE(94),
    [anon_sym_RBRACE] = ACTIONS(159),
    [anon_sym_using] = ACTIONS(161),
    [anon_sym_COMMA] = ACTIONS(163),
    [anon_sym_DOT_DOT] = ACTIONS(161),
    [anon_sym_DOT_DOT_LT] = ACTIONS(163),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(163),
    [anon_sym_COLON] = ACTIONS(163),
    [anon_sym_STAR] = ACTIONS(161),
    [anon_sym_PLUS] = ACTIONS(161),
    [anon_sym_SLASH] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(161),
    [anon_sym_PERCENT] = ACTIONS(161),
    [anon_sym_EQ_EQ] = ACTIONS(163),
    [anon_sym_BANG_EQ] = ACTIONS(163),
    [anon_sym_LT] = ACTIONS(161),
    [anon_sym_LT_EQ] = ACTIONS(163),
    [anon_sym_lt] = ACTIONS(161),
    [anon_sym_lte] = ACTIONS(161),
    [anon_sym_gt] = ACTIONS(161),
    [anon_sym_gte] = ACTIONS(161),
    [anon_sym_BANG] = ACTIONS(161),
    [anon_sym_AMP_AMP] = ACTIONS(163),
    [anon_sym_PIPE_PIPE] = ACTIONS(163),
    [anon_sym_QMARK_QMARK] = ACTIONS(163),
    [anon_sym_EQ] = ACTIONS(161),
    [anon_sym_PLUS_EQ] = ACTIONS(163),
    [anon_sym_DASH_EQ] = ACTIONS(163),
    [anon_sym_STAR_EQ] = ACTIONS(163),
    [anon_sym_SLASH_EQ] = ACTIONS(163),
    [anon_sym_PERCENT_EQ] = ACTIONS(163),
    [anon_sym_PLUS_PLUS] = ACTIONS(163),
    [anon_sym_DASH_DASH] = ACTIONS(163),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(159),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(159),
    [sym_number] = ACTIONS(165),
    [anon_sym_true] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_LBRACE] = ACTIONS(159),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(165),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(159),
  },
  [35] = {
    [sym_parameter_group] = STATE(105),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(104),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(97),
    [sym_boolean] = STATE(97),
    [sym_sequence] = STATE(97),
    [sym_hash] = STATE(97),
    [sym_top_level] = STATE(97),
    [sym_spec_var] = STATE(97),
    [aux_sym_as_expression_repeat1] = STATE(104),
    [aux_sym_group_repeat1] = STATE(105),
    [anon_sym_as] = ACTIONS(167),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(169),
    [sym_number] = ACTIONS(171),
    [anon_sym_true] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(175),
    [anon_sym_LBRACE] = ACTIONS(177),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(179),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(181),
    [anon_sym_GT] = ACTIONS(183),
    [anon_sym_SLASH_GT] = ACTIONS(183),
  },
  [36] = {
    [sym_type] = STATE(113),
    [sym_string] = STATE(107),
    [sym_boolean] = STATE(107),
    [sym_sequence] = STATE(107),
    [sym_hash] = STATE(107),
    [sym_top_level] = STATE(107),
    [sym_spec_var] = STATE(107),
    [aux_sym_as_expression_repeat2] = STATE(113),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(185),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(185),
    [sym_number] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(193),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(195),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(197),
  },
  [37] = {
    [sym_top_level] = STATE(114),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(199),
  },
  [38] = {
    [anon_sym_as] = ACTIONS(135),
    [anon_sym_QMARK] = ACTIONS(135),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_using] = ACTIONS(135),
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_DOT_DOT] = ACTIONS(135),
    [anon_sym_DOT_DOT_LT] = ACTIONS(133),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(133),
    [anon_sym_COLON] = ACTIONS(133),
    [anon_sym_STAR] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(135),
    [anon_sym_SLASH] = ACTIONS(135),
    [anon_sym_DASH] = ACTIONS(135),
    [anon_sym_PERCENT] = ACTIONS(135),
    [anon_sym_EQ_EQ] = ACTIONS(133),
    [anon_sym_BANG_EQ] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(135),
    [anon_sym_LT_EQ] = ACTIONS(133),
    [anon_sym_lt] = ACTIONS(135),
    [anon_sym_lte] = ACTIONS(135),
    [anon_sym_gt] = ACTIONS(135),
    [anon_sym_gte] = ACTIONS(135),
    [anon_sym_BANG] = ACTIONS(135),
    [anon_sym_AMP_AMP] = ACTIONS(133),
    [anon_sym_PIPE_PIPE] = ACTIONS(133),
    [anon_sym_QMARK_QMARK] = ACTIONS(133),
    [anon_sym_EQ] = ACTIONS(135),
    [anon_sym_PLUS_EQ] = ACTIONS(133),
    [anon_sym_DASH_EQ] = ACTIONS(133),
    [anon_sym_STAR_EQ] = ACTIONS(133),
    [anon_sym_SLASH_EQ] = ACTIONS(133),
    [anon_sym_PERCENT_EQ] = ACTIONS(133),
    [anon_sym_PLUS_PLUS] = ACTIONS(133),
    [anon_sym_DASH_DASH] = ACTIONS(133),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(133),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(133),
    [sym_number] = ACTIONS(135),
    [anon_sym_true] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(133),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(133),
    [anon_sym_GT] = ACTIONS(133),
  },
  [39] = {
    [anon_sym_as] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(139),
    [anon_sym_RPAREN] = ACTIONS(137),
    [anon_sym_using] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_DOT_DOT] = ACTIONS(139),
    [anon_sym_DOT_DOT_LT] = ACTIONS(137),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(137),
    [anon_sym_COLON] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_PERCENT] = ACTIONS(139),
    [anon_sym_EQ_EQ] = ACTIONS(137),
    [anon_sym_BANG_EQ] = ACTIONS(137),
    [anon_sym_LT] = ACTIONS(139),
    [anon_sym_LT_EQ] = ACTIONS(137),
    [anon_sym_lt] = ACTIONS(139),
    [anon_sym_lte] = ACTIONS(139),
    [anon_sym_gt] = ACTIONS(139),
    [anon_sym_gte] = ACTIONS(139),
    [anon_sym_BANG] = ACTIONS(139),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_QMARK_QMARK] = ACTIONS(137),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_PLUS_EQ] = ACTIONS(137),
    [anon_sym_DASH_EQ] = ACTIONS(137),
    [anon_sym_STAR_EQ] = ACTIONS(137),
    [anon_sym_SLASH_EQ] = ACTIONS(137),
    [anon_sym_PERCENT_EQ] = ACTIONS(137),
    [anon_sym_PLUS_PLUS] = ACTIONS(137),
    [anon_sym_DASH_DASH] = ACTIONS(137),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(137),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(137),
    [sym_number] = ACTIONS(139),
    [anon_sym_true] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(137),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_GT] = ACTIONS(137),
  },
  [40] = {
    [anon_sym_false] = ACTIONS(201),
  },
  [41] = {
    [sym_expression] = STATE(81),
    [sym_type] = STATE(82),
    [sym_string] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_sequence] = STATE(27),
    [sym_hash] = STATE(27),
    [sym_top_level] = STATE(27),
    [sym_spec_var] = STATE(27),
    [aux_sym_as_expression_repeat1] = STATE(82),
    [aux_sym_sequence_repeat1] = STATE(117),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(53),
    [sym_number] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(61),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(65),
  },
  [42] = {
    [sym_expression] = STATE(119),
    [sym_type] = STATE(34),
    [sym_string] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_sequence] = STATE(27),
    [sym_hash] = STATE(27),
    [sym_top_level] = STATE(27),
    [sym_spec_var] = STATE(27),
    [aux_sym_interpolation_repeat1] = STATE(119),
    [aux_sym_as_expression_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(205),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(53),
    [sym_number] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(65),
  },
  [43] = {
    [sym_group] = STATE(121),
    [anon_sym_as] = ACTIONS(151),
    [anon_sym_QMARK] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_using] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_DOT_DOT] = ACTIONS(151),
    [anon_sym_DOT_DOT_LT] = ACTIONS(147),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(151),
    [anon_sym_SLASH] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(151),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_lt] = ACTIONS(151),
    [anon_sym_lte] = ACTIONS(151),
    [anon_sym_gt] = ACTIONS(151),
    [anon_sym_gte] = ACTIONS(151),
    [anon_sym_BANG] = ACTIONS(151),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_QMARK_QMARK] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(151),
    [anon_sym_PLUS_EQ] = ACTIONS(147),
    [anon_sym_DASH_EQ] = ACTIONS(147),
    [anon_sym_STAR_EQ] = ACTIONS(147),
    [anon_sym_SLASH_EQ] = ACTIONS(147),
    [anon_sym_PERCENT_EQ] = ACTIONS(147),
    [anon_sym_PLUS_PLUS] = ACTIONS(147),
    [anon_sym_DASH_DASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(147),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_LBRACE] = ACTIONS(147),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(151),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_GT] = ACTIONS(147),
  },
  [44] = {
    [sym_group] = STATE(122),
    [anon_sym_as] = ACTIONS(155),
    [anon_sym_QMARK] = ACTIONS(155),
    [anon_sym_LPAREN] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(153),
    [anon_sym_using] = ACTIONS(155),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_DOT_DOT] = ACTIONS(155),
    [anon_sym_DOT_DOT_LT] = ACTIONS(153),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(155),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(155),
    [anon_sym_PERCENT] = ACTIONS(155),
    [anon_sym_EQ_EQ] = ACTIONS(153),
    [anon_sym_BANG_EQ] = ACTIONS(153),
    [anon_sym_LT] = ACTIONS(155),
    [anon_sym_LT_EQ] = ACTIONS(153),
    [anon_sym_lt] = ACTIONS(155),
    [anon_sym_lte] = ACTIONS(155),
    [anon_sym_gt] = ACTIONS(155),
    [anon_sym_gte] = ACTIONS(155),
    [anon_sym_BANG] = ACTIONS(155),
    [anon_sym_AMP_AMP] = ACTIONS(153),
    [anon_sym_PIPE_PIPE] = ACTIONS(153),
    [anon_sym_QMARK_QMARK] = ACTIONS(153),
    [anon_sym_EQ] = ACTIONS(155),
    [anon_sym_PLUS_EQ] = ACTIONS(153),
    [anon_sym_DASH_EQ] = ACTIONS(153),
    [anon_sym_STAR_EQ] = ACTIONS(153),
    [anon_sym_SLASH_EQ] = ACTIONS(153),
    [anon_sym_PERCENT_EQ] = ACTIONS(153),
    [anon_sym_PLUS_PLUS] = ACTIONS(153),
    [anon_sym_DASH_DASH] = ACTIONS(153),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(153),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(153),
    [sym_number] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(153),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(155),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
  },
  [45] = {
    [anon_sym_GT] = ACTIONS(209),
  },
  [46] = {
    [anon_sym_as] = ACTIONS(211),
    [anon_sym_QMARK] = ACTIONS(213),
    [anon_sym_RPAREN] = ACTIONS(213),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(213),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(213),
    [sym_number] = ACTIONS(211),
    [anon_sym_true] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(213),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(211),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(213),
    [anon_sym_GT] = ACTIONS(213),
    [anon_sym_SLASH_GT] = ACTIONS(213),
  },
  [47] = {
    [sym_type] = STATE(126),
    [sym_operator] = STATE(125),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(126),
    [aux_sym_as_expression_repeat2] = STATE(127),
    [anon_sym_as] = ACTIONS(215),
    [anon_sym_using] = ACTIONS(161),
    [anon_sym_COMMA] = ACTIONS(163),
    [anon_sym_DOT_DOT] = ACTIONS(161),
    [anon_sym_DOT_DOT_LT] = ACTIONS(163),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(163),
    [anon_sym_COLON] = ACTIONS(163),
    [anon_sym_STAR] = ACTIONS(161),
    [anon_sym_PLUS] = ACTIONS(161),
    [anon_sym_SLASH] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(161),
    [anon_sym_PERCENT] = ACTIONS(161),
    [anon_sym_EQ_EQ] = ACTIONS(163),
    [anon_sym_BANG_EQ] = ACTIONS(163),
    [anon_sym_LT] = ACTIONS(161),
    [anon_sym_LT_EQ] = ACTIONS(163),
    [anon_sym_lt] = ACTIONS(161),
    [anon_sym_lte] = ACTIONS(161),
    [anon_sym_gt] = ACTIONS(161),
    [anon_sym_gte] = ACTIONS(161),
    [anon_sym_BANG] = ACTIONS(161),
    [anon_sym_AMP_AMP] = ACTIONS(163),
    [anon_sym_PIPE_PIPE] = ACTIONS(163),
    [anon_sym_QMARK_QMARK] = ACTIONS(163),
    [anon_sym_EQ] = ACTIONS(161),
    [anon_sym_PLUS_EQ] = ACTIONS(163),
    [anon_sym_DASH_EQ] = ACTIONS(163),
    [anon_sym_STAR_EQ] = ACTIONS(163),
    [anon_sym_SLASH_EQ] = ACTIONS(163),
    [anon_sym_PERCENT_EQ] = ACTIONS(163),
    [anon_sym_PLUS_PLUS] = ACTIONS(163),
    [anon_sym_DASH_DASH] = ACTIONS(163),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(159),
  },
  [48] = {
    [sym_type] = STATE(135),
    [sym_string] = STATE(129),
    [sym_boolean] = STATE(129),
    [sym_sequence] = STATE(129),
    [sym_hash] = STATE(129),
    [sym_top_level] = STATE(129),
    [sym_spec_var] = STATE(129),
    [aux_sym_as_expression_repeat2] = STATE(135),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(217),
    [sym_number] = ACTIONS(219),
    [anon_sym_true] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(225),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(229),
  },
  [49] = {
    [sym_top_level] = STATE(136),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(231),
  },
  [50] = {
    [sym_type] = STATE(140),
    [sym_operator] = STATE(139),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(140),
    [aux_sym_as_expression_repeat2] = STATE(141),
    [anon_sym_as] = ACTIONS(233),
    [anon_sym_QMARK] = ACTIONS(165),
    [anon_sym_using] = ACTIONS(235),
    [anon_sym_COMMA] = ACTIONS(237),
    [anon_sym_DOT_DOT] = ACTIONS(235),
    [anon_sym_DOT_DOT_LT] = ACTIONS(237),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(237),
    [anon_sym_COLON] = ACTIONS(237),
    [anon_sym_STAR] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(235),
    [anon_sym_DASH] = ACTIONS(235),
    [anon_sym_PERCENT] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(237),
    [anon_sym_BANG_EQ] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(235),
    [anon_sym_LT_EQ] = ACTIONS(237),
    [anon_sym_lt] = ACTIONS(235),
    [anon_sym_lte] = ACTIONS(235),
    [anon_sym_gt] = ACTIONS(235),
    [anon_sym_gte] = ACTIONS(235),
    [anon_sym_BANG] = ACTIONS(235),
    [anon_sym_AMP_AMP] = ACTIONS(237),
    [anon_sym_PIPE_PIPE] = ACTIONS(237),
    [anon_sym_QMARK_QMARK] = ACTIONS(237),
    [anon_sym_EQ] = ACTIONS(235),
    [anon_sym_PLUS_EQ] = ACTIONS(237),
    [anon_sym_DASH_EQ] = ACTIONS(237),
    [anon_sym_STAR_EQ] = ACTIONS(237),
    [anon_sym_SLASH_EQ] = ACTIONS(237),
    [anon_sym_PERCENT_EQ] = ACTIONS(237),
    [anon_sym_PLUS_PLUS] = ACTIONS(237),
    [anon_sym_DASH_DASH] = ACTIONS(237),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(159),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(159),
    [sym_number] = ACTIONS(165),
    [anon_sym_true] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_LBRACE] = ACTIONS(159),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(165),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(159),
    [anon_sym_GT] = ACTIONS(159),
  },
  [51] = {
    [sym_parameter_group] = STATE(143),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(50),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(50),
    [aux_sym_group_repeat1] = STATE(143),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(239),
  },
  [52] = {
    [anon_sym_GT] = ACTIONS(241),
  },
  [53] = {
    [sym_directive] = STATE(147),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_function_middle] = STATE(148),
    [sym_return] = STATE(147),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_function_repeat1] = STATE(148),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUNDlist] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(243),
    [anon_sym_LT_POUNDreturn] = ACTIONS(245),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(23),
    [sym_fallback] = ACTIONS(25),
    [sym_flush] = ACTIONS(25),
    [anon_sym_LT_POUNDftl] = ACTIONS(27),
    [anon_sym_LT_POUNDimport] = ACTIONS(29),
    [anon_sym_LT_POUNDinclude] = ACTIONS(31),
    [sym_lt] = ACTIONS(25),
    [sym_nt] = ACTIONS(25),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(33),
    [sym_rt] = ACTIONS(25),
    [anon_sym_LT_POUNDsetting] = ACTIONS(35),
    [sym_stop] = ACTIONS(25),
    [sym_t] = ACTIONS(25),
    [anon_sym_LT_POUNDvisit] = ACTIONS(37),
    [anon_sym_LT_POUNDassign] = ACTIONS(39),
    [sym_end_assign] = ACTIONS(41),
    [anon_sym_LT_POUNDglobal] = ACTIONS(43),
    [sym_end_global] = ACTIONS(45),
    [anon_sym_LT_POUNDlocal] = ACTIONS(47),
    [sym_end_local] = ACTIONS(49),
  },
  [54] = {
    [sym_parameter_group] = STATE(143),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(50),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(50),
    [aux_sym_group_repeat1] = STATE(143),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(247),
  },
  [55] = {
    [sym_directive] = STATE(152),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_return] = STATE(152),
    [sym_macro] = STATE(10),
    [sym_macro_middle] = STATE(153),
    [sym_nested] = STATE(152),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_macro_repeat1] = STATE(153),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUNDlist] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDreturn] = ACTIONS(245),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(249),
    [anon_sym_LT_POUNDnested] = ACTIONS(251),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(23),
    [sym_fallback] = ACTIONS(25),
    [sym_flush] = ACTIONS(25),
    [anon_sym_LT_POUNDftl] = ACTIONS(27),
    [anon_sym_LT_POUNDimport] = ACTIONS(29),
    [anon_sym_LT_POUNDinclude] = ACTIONS(31),
    [sym_lt] = ACTIONS(25),
    [sym_nt] = ACTIONS(25),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(33),
    [sym_rt] = ACTIONS(25),
    [anon_sym_LT_POUNDsetting] = ACTIONS(35),
    [sym_stop] = ACTIONS(25),
    [sym_t] = ACTIONS(25),
    [anon_sym_LT_POUNDvisit] = ACTIONS(37),
    [anon_sym_LT_POUNDassign] = ACTIONS(39),
    [sym_end_assign] = ACTIONS(41),
    [anon_sym_LT_POUNDglobal] = ACTIONS(43),
    [sym_end_global] = ACTIONS(45),
    [anon_sym_LT_POUNDlocal] = ACTIONS(47),
    [sym_end_local] = ACTIONS(49),
  },
  [56] = {
    [sym_parameter_group] = STATE(143),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(50),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(50),
    [aux_sym_group_repeat1] = STATE(143),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(253),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(255),
    [sym_comment] = ACTIONS(255),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(255),
    [anon_sym_LT_AT] = ACTIONS(255),
    [anon_sym_LT_POUNDlist] = ACTIONS(255),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(255),
    [sym_break] = ACTIONS(255),
    [sym_continue] = ACTIONS(255),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(255),
    [anon_sym_LT_POUNDitems] = ACTIONS(255),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(255),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(255),
    [anon_sym_LT_POUNDif] = ACTIONS(255),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(255),
    [anon_sym_LT_POUNDelseif] = ACTIONS(255),
    [anon_sym_LT_POUNDswitch] = ACTIONS(255),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(255),
    [anon_sym_LT_POUNDcase] = ACTIONS(255),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(255),
    [anon_sym_LT_POUNDfunction] = ACTIONS(255),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(255),
    [anon_sym_LT_POUNDreturn] = ACTIONS(255),
    [anon_sym_LT_POUNDmacro] = ACTIONS(255),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(255),
    [anon_sym_LT_POUNDnested] = ACTIONS(255),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(255),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(255),
    [sym_recover] = ACTIONS(255),
    [sym_fallback] = ACTIONS(255),
    [sym_flush] = ACTIONS(255),
    [anon_sym_LT_POUNDftl] = ACTIONS(255),
    [anon_sym_LT_POUNDimport] = ACTIONS(255),
    [anon_sym_LT_POUNDinclude] = ACTIONS(255),
    [sym_lt] = ACTIONS(255),
    [sym_nt] = ACTIONS(255),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(255),
    [sym_rt] = ACTIONS(255),
    [anon_sym_LT_POUNDsetting] = ACTIONS(255),
    [sym_stop] = ACTIONS(255),
    [sym_t] = ACTIONS(255),
    [anon_sym_LT_POUNDvisit] = ACTIONS(255),
    [anon_sym_LT_POUNDassign] = ACTIONS(255),
    [sym_end_assign] = ACTIONS(255),
    [anon_sym_LT_POUNDglobal] = ACTIONS(255),
    [sym_end_global] = ACTIONS(255),
    [anon_sym_LT_POUNDlocal] = ACTIONS(255),
    [sym_end_local] = ACTIONS(255),
  },
  [58] = {
    [anon_sym_LT_AT] = ACTIONS(257),
    [anon_sym_LT_POUNDlist] = ACTIONS(257),
    [anon_sym_LT_POUNDif] = ACTIONS(257),
    [anon_sym_LT_POUNDswitch] = ACTIONS(257),
    [anon_sym_LT_POUNDfunction] = ACTIONS(257),
    [anon_sym_LT_POUNDmacro] = ACTIONS(257),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(257),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(257),
    [sym_recover] = ACTIONS(257),
    [sym_fallback] = ACTIONS(257),
    [sym_flush] = ACTIONS(257),
    [anon_sym_LT_POUNDftl] = ACTIONS(257),
    [anon_sym_LT_POUNDimport] = ACTIONS(257),
    [anon_sym_LT_POUNDinclude] = ACTIONS(257),
    [sym_lt] = ACTIONS(257),
    [sym_nt] = ACTIONS(257),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(257),
    [sym_rt] = ACTIONS(257),
    [anon_sym_LT_POUNDsetting] = ACTIONS(257),
    [sym_stop] = ACTIONS(257),
    [sym_t] = ACTIONS(257),
    [anon_sym_LT_POUNDvisit] = ACTIONS(257),
    [anon_sym_LT_POUNDassign] = ACTIONS(257),
    [sym_end_assign] = ACTIONS(257),
    [anon_sym_LT_POUNDglobal] = ACTIONS(257),
    [sym_end_global] = ACTIONS(257),
    [anon_sym_LT_POUNDlocal] = ACTIONS(257),
    [sym_end_local] = ACTIONS(257),
  },
  [59] = {
    [sym_directive] = STATE(58),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_attempt_middle] = STATE(156),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_attempt_repeat1] = STATE(156),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUNDlist] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(23),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(259),
    [sym_recover] = ACTIONS(97),
    [sym_fallback] = ACTIONS(25),
    [sym_flush] = ACTIONS(25),
    [anon_sym_LT_POUNDftl] = ACTIONS(27),
    [anon_sym_LT_POUNDimport] = ACTIONS(29),
    [anon_sym_LT_POUNDinclude] = ACTIONS(31),
    [sym_lt] = ACTIONS(25),
    [sym_nt] = ACTIONS(25),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(33),
    [sym_rt] = ACTIONS(25),
    [anon_sym_LT_POUNDsetting] = ACTIONS(35),
    [sym_stop] = ACTIONS(25),
    [sym_t] = ACTIONS(25),
    [anon_sym_LT_POUNDvisit] = ACTIONS(37),
    [anon_sym_LT_POUNDassign] = ACTIONS(39),
    [sym_end_assign] = ACTIONS(41),
    [anon_sym_LT_POUNDglobal] = ACTIONS(43),
    [sym_end_global] = ACTIONS(45),
    [anon_sym_LT_POUNDlocal] = ACTIONS(47),
    [sym_end_local] = ACTIONS(49),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [sym_comment] = ACTIONS(261),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(261),
    [anon_sym_LT_AT] = ACTIONS(261),
    [anon_sym_LT_POUNDlist] = ACTIONS(261),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(261),
    [sym_break] = ACTIONS(261),
    [sym_continue] = ACTIONS(261),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(261),
    [anon_sym_LT_POUNDitems] = ACTIONS(261),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(261),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(261),
    [anon_sym_LT_POUNDif] = ACTIONS(261),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(261),
    [anon_sym_LT_POUNDelseif] = ACTIONS(261),
    [anon_sym_LT_POUNDswitch] = ACTIONS(261),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(261),
    [anon_sym_LT_POUNDcase] = ACTIONS(261),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(261),
    [anon_sym_LT_POUNDfunction] = ACTIONS(261),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(261),
    [anon_sym_LT_POUNDreturn] = ACTIONS(261),
    [anon_sym_LT_POUNDmacro] = ACTIONS(261),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(261),
    [anon_sym_LT_POUNDnested] = ACTIONS(261),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(261),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(261),
    [sym_recover] = ACTIONS(261),
    [sym_fallback] = ACTIONS(261),
    [sym_flush] = ACTIONS(261),
    [anon_sym_LT_POUNDftl] = ACTIONS(261),
    [anon_sym_LT_POUNDimport] = ACTIONS(261),
    [anon_sym_LT_POUNDinclude] = ACTIONS(261),
    [sym_lt] = ACTIONS(261),
    [sym_nt] = ACTIONS(261),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(261),
    [sym_rt] = ACTIONS(261),
    [anon_sym_LT_POUNDsetting] = ACTIONS(261),
    [sym_stop] = ACTIONS(261),
    [sym_t] = ACTIONS(261),
    [anon_sym_LT_POUNDvisit] = ACTIONS(261),
    [anon_sym_LT_POUNDassign] = ACTIONS(261),
    [sym_end_assign] = ACTIONS(261),
    [anon_sym_LT_POUNDglobal] = ACTIONS(261),
    [sym_end_global] = ACTIONS(261),
    [anon_sym_LT_POUNDlocal] = ACTIONS(261),
    [sym_end_local] = ACTIONS(261),
  },
  [61] = {
    [sym_parameter_group] = STATE(143),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(50),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(50),
    [aux_sym_group_repeat1] = STATE(143),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(263),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [sym_comment] = ACTIONS(265),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(265),
    [anon_sym_LT_AT] = ACTIONS(265),
    [anon_sym_LT_POUNDlist] = ACTIONS(265),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(265),
    [sym_break] = ACTIONS(265),
    [sym_continue] = ACTIONS(265),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(265),
    [anon_sym_LT_POUNDitems] = ACTIONS(265),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(265),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(265),
    [anon_sym_LT_POUNDif] = ACTIONS(265),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(265),
    [anon_sym_LT_POUNDelseif] = ACTIONS(265),
    [anon_sym_LT_POUNDswitch] = ACTIONS(265),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(265),
    [anon_sym_LT_POUNDcase] = ACTIONS(265),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(265),
    [anon_sym_LT_POUNDfunction] = ACTIONS(265),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(265),
    [anon_sym_LT_POUNDreturn] = ACTIONS(265),
    [anon_sym_LT_POUNDmacro] = ACTIONS(265),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(265),
    [anon_sym_LT_POUNDnested] = ACTIONS(265),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(265),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(265),
    [sym_recover] = ACTIONS(265),
    [sym_fallback] = ACTIONS(265),
    [sym_flush] = ACTIONS(265),
    [anon_sym_LT_POUNDftl] = ACTIONS(265),
    [anon_sym_LT_POUNDimport] = ACTIONS(265),
    [anon_sym_LT_POUNDinclude] = ACTIONS(265),
    [sym_lt] = ACTIONS(265),
    [sym_nt] = ACTIONS(265),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(265),
    [sym_rt] = ACTIONS(265),
    [anon_sym_LT_POUNDsetting] = ACTIONS(265),
    [sym_stop] = ACTIONS(265),
    [sym_t] = ACTIONS(265),
    [anon_sym_LT_POUNDvisit] = ACTIONS(265),
    [anon_sym_LT_POUNDassign] = ACTIONS(265),
    [sym_end_assign] = ACTIONS(265),
    [anon_sym_LT_POUNDglobal] = ACTIONS(265),
    [sym_end_global] = ACTIONS(265),
    [anon_sym_LT_POUNDlocal] = ACTIONS(265),
    [sym_end_local] = ACTIONS(265),
  },
  [63] = {
    [sym_parameter_group] = STATE(143),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(50),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(50),
    [aux_sym_group_repeat1] = STATE(143),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(267),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [sym_comment] = ACTIONS(269),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(269),
    [anon_sym_LT_AT] = ACTIONS(269),
    [anon_sym_LT_POUNDlist] = ACTIONS(269),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(269),
    [sym_break] = ACTIONS(269),
    [sym_continue] = ACTIONS(269),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(269),
    [anon_sym_LT_POUNDitems] = ACTIONS(269),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(269),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(269),
    [anon_sym_LT_POUNDif] = ACTIONS(269),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(269),
    [anon_sym_LT_POUNDelseif] = ACTIONS(269),
    [anon_sym_LT_POUNDswitch] = ACTIONS(269),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(269),
    [anon_sym_LT_POUNDcase] = ACTIONS(269),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(269),
    [anon_sym_LT_POUNDfunction] = ACTIONS(269),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(269),
    [anon_sym_LT_POUNDreturn] = ACTIONS(269),
    [anon_sym_LT_POUNDmacro] = ACTIONS(269),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(269),
    [anon_sym_LT_POUNDnested] = ACTIONS(269),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(269),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(269),
    [sym_recover] = ACTIONS(269),
    [sym_fallback] = ACTIONS(269),
    [sym_flush] = ACTIONS(269),
    [anon_sym_LT_POUNDftl] = ACTIONS(269),
    [anon_sym_LT_POUNDimport] = ACTIONS(269),
    [anon_sym_LT_POUNDinclude] = ACTIONS(269),
    [sym_lt] = ACTIONS(269),
    [sym_nt] = ACTIONS(269),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(269),
    [sym_rt] = ACTIONS(269),
    [anon_sym_LT_POUNDsetting] = ACTIONS(269),
    [sym_stop] = ACTIONS(269),
    [sym_t] = ACTIONS(269),
    [anon_sym_LT_POUNDvisit] = ACTIONS(269),
    [anon_sym_LT_POUNDassign] = ACTIONS(269),
    [sym_end_assign] = ACTIONS(269),
    [anon_sym_LT_POUNDglobal] = ACTIONS(269),
    [sym_end_global] = ACTIONS(269),
    [anon_sym_LT_POUNDlocal] = ACTIONS(269),
    [sym_end_local] = ACTIONS(269),
  },
  [65] = {
    [sym_parameter_group] = STATE(143),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(50),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(50),
    [aux_sym_group_repeat1] = STATE(143),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(271),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(273),
    [sym_comment] = ACTIONS(273),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(273),
    [anon_sym_LT_AT] = ACTIONS(273),
    [anon_sym_LT_POUNDlist] = ACTIONS(273),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(273),
    [sym_break] = ACTIONS(273),
    [sym_continue] = ACTIONS(273),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(273),
    [anon_sym_LT_POUNDitems] = ACTIONS(273),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(273),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(273),
    [anon_sym_LT_POUNDif] = ACTIONS(273),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(273),
    [anon_sym_LT_POUNDelseif] = ACTIONS(273),
    [anon_sym_LT_POUNDswitch] = ACTIONS(273),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(273),
    [anon_sym_LT_POUNDcase] = ACTIONS(273),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(273),
    [anon_sym_LT_POUNDfunction] = ACTIONS(273),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(273),
    [anon_sym_LT_POUNDreturn] = ACTIONS(273),
    [anon_sym_LT_POUNDmacro] = ACTIONS(273),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(273),
    [anon_sym_LT_POUNDnested] = ACTIONS(273),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(273),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(273),
    [sym_recover] = ACTIONS(273),
    [sym_fallback] = ACTIONS(273),
    [sym_flush] = ACTIONS(273),
    [anon_sym_LT_POUNDftl] = ACTIONS(273),
    [anon_sym_LT_POUNDimport] = ACTIONS(273),
    [anon_sym_LT_POUNDinclude] = ACTIONS(273),
    [sym_lt] = ACTIONS(273),
    [sym_nt] = ACTIONS(273),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(273),
    [sym_rt] = ACTIONS(273),
    [anon_sym_LT_POUNDsetting] = ACTIONS(273),
    [sym_stop] = ACTIONS(273),
    [sym_t] = ACTIONS(273),
    [anon_sym_LT_POUNDvisit] = ACTIONS(273),
    [anon_sym_LT_POUNDassign] = ACTIONS(273),
    [sym_end_assign] = ACTIONS(273),
    [anon_sym_LT_POUNDglobal] = ACTIONS(273),
    [sym_end_global] = ACTIONS(273),
    [anon_sym_LT_POUNDlocal] = ACTIONS(273),
    [sym_end_local] = ACTIONS(273),
  },
  [67] = {
    [sym_parameter_group] = STATE(143),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(50),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(50),
    [aux_sym_group_repeat1] = STATE(143),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(275),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(277),
    [sym_comment] = ACTIONS(277),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(277),
    [anon_sym_LT_AT] = ACTIONS(277),
    [anon_sym_LT_POUNDlist] = ACTIONS(277),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(277),
    [sym_break] = ACTIONS(277),
    [sym_continue] = ACTIONS(277),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(277),
    [anon_sym_LT_POUNDitems] = ACTIONS(277),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(277),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(277),
    [anon_sym_LT_POUNDif] = ACTIONS(277),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(277),
    [anon_sym_LT_POUNDelseif] = ACTIONS(277),
    [anon_sym_LT_POUNDswitch] = ACTIONS(277),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(277),
    [anon_sym_LT_POUNDcase] = ACTIONS(277),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(277),
    [anon_sym_LT_POUNDfunction] = ACTIONS(277),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(277),
    [anon_sym_LT_POUNDreturn] = ACTIONS(277),
    [anon_sym_LT_POUNDmacro] = ACTIONS(277),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(277),
    [anon_sym_LT_POUNDnested] = ACTIONS(277),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(277),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(277),
    [sym_recover] = ACTIONS(277),
    [sym_fallback] = ACTIONS(277),
    [sym_flush] = ACTIONS(277),
    [anon_sym_LT_POUNDftl] = ACTIONS(277),
    [anon_sym_LT_POUNDimport] = ACTIONS(277),
    [anon_sym_LT_POUNDinclude] = ACTIONS(277),
    [sym_lt] = ACTIONS(277),
    [sym_nt] = ACTIONS(277),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(277),
    [sym_rt] = ACTIONS(277),
    [anon_sym_LT_POUNDsetting] = ACTIONS(277),
    [sym_stop] = ACTIONS(277),
    [sym_t] = ACTIONS(277),
    [anon_sym_LT_POUNDvisit] = ACTIONS(277),
    [anon_sym_LT_POUNDassign] = ACTIONS(277),
    [sym_end_assign] = ACTIONS(277),
    [anon_sym_LT_POUNDglobal] = ACTIONS(277),
    [sym_end_global] = ACTIONS(277),
    [anon_sym_LT_POUNDlocal] = ACTIONS(277),
    [sym_end_local] = ACTIONS(277),
  },
  [69] = {
    [sym_parameter_group] = STATE(143),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(50),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(50),
    [aux_sym_group_repeat1] = STATE(143),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(279),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(281),
    [sym_comment] = ACTIONS(281),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(281),
    [anon_sym_LT_AT] = ACTIONS(281),
    [anon_sym_LT_POUNDlist] = ACTIONS(281),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(281),
    [sym_break] = ACTIONS(281),
    [sym_continue] = ACTIONS(281),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(281),
    [anon_sym_LT_POUNDitems] = ACTIONS(281),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(281),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(281),
    [anon_sym_LT_POUNDif] = ACTIONS(281),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(281),
    [anon_sym_LT_POUNDelseif] = ACTIONS(281),
    [anon_sym_LT_POUNDswitch] = ACTIONS(281),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(281),
    [anon_sym_LT_POUNDcase] = ACTIONS(281),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(281),
    [anon_sym_LT_POUNDfunction] = ACTIONS(281),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(281),
    [anon_sym_LT_POUNDreturn] = ACTIONS(281),
    [anon_sym_LT_POUNDmacro] = ACTIONS(281),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(281),
    [anon_sym_LT_POUNDnested] = ACTIONS(281),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(281),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(281),
    [sym_recover] = ACTIONS(281),
    [sym_fallback] = ACTIONS(281),
    [sym_flush] = ACTIONS(281),
    [anon_sym_LT_POUNDftl] = ACTIONS(281),
    [anon_sym_LT_POUNDimport] = ACTIONS(281),
    [anon_sym_LT_POUNDinclude] = ACTIONS(281),
    [sym_lt] = ACTIONS(281),
    [sym_nt] = ACTIONS(281),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(281),
    [sym_rt] = ACTIONS(281),
    [anon_sym_LT_POUNDsetting] = ACTIONS(281),
    [sym_stop] = ACTIONS(281),
    [sym_t] = ACTIONS(281),
    [anon_sym_LT_POUNDvisit] = ACTIONS(281),
    [anon_sym_LT_POUNDassign] = ACTIONS(281),
    [sym_end_assign] = ACTIONS(281),
    [anon_sym_LT_POUNDglobal] = ACTIONS(281),
    [sym_end_global] = ACTIONS(281),
    [anon_sym_LT_POUNDlocal] = ACTIONS(281),
    [sym_end_local] = ACTIONS(281),
  },
  [71] = {
    [sym_parameter_group] = STATE(143),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(50),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(50),
    [aux_sym_group_repeat1] = STATE(143),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(283),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(285),
    [sym_comment] = ACTIONS(285),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(285),
    [anon_sym_LT_AT] = ACTIONS(285),
    [anon_sym_LT_POUNDlist] = ACTIONS(285),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(285),
    [sym_break] = ACTIONS(285),
    [sym_continue] = ACTIONS(285),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(285),
    [anon_sym_LT_POUNDitems] = ACTIONS(285),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(285),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(285),
    [anon_sym_LT_POUNDif] = ACTIONS(285),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(285),
    [anon_sym_LT_POUNDelseif] = ACTIONS(285),
    [anon_sym_LT_POUNDswitch] = ACTIONS(285),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(285),
    [anon_sym_LT_POUNDcase] = ACTIONS(285),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(285),
    [anon_sym_LT_POUNDfunction] = ACTIONS(285),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(285),
    [anon_sym_LT_POUNDreturn] = ACTIONS(285),
    [anon_sym_LT_POUNDmacro] = ACTIONS(285),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(285),
    [anon_sym_LT_POUNDnested] = ACTIONS(285),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(285),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(285),
    [sym_recover] = ACTIONS(285),
    [sym_fallback] = ACTIONS(285),
    [sym_flush] = ACTIONS(285),
    [anon_sym_LT_POUNDftl] = ACTIONS(285),
    [anon_sym_LT_POUNDimport] = ACTIONS(285),
    [anon_sym_LT_POUNDinclude] = ACTIONS(285),
    [sym_lt] = ACTIONS(285),
    [sym_nt] = ACTIONS(285),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(285),
    [sym_rt] = ACTIONS(285),
    [anon_sym_LT_POUNDsetting] = ACTIONS(285),
    [sym_stop] = ACTIONS(285),
    [sym_t] = ACTIONS(285),
    [anon_sym_LT_POUNDvisit] = ACTIONS(285),
    [anon_sym_LT_POUNDassign] = ACTIONS(285),
    [sym_end_assign] = ACTIONS(285),
    [anon_sym_LT_POUNDglobal] = ACTIONS(285),
    [sym_end_global] = ACTIONS(285),
    [anon_sym_LT_POUNDlocal] = ACTIONS(285),
    [sym_end_local] = ACTIONS(285),
  },
  [73] = {
    [sym_parameter_group] = STATE(143),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(50),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(50),
    [aux_sym_group_repeat1] = STATE(143),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(287),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [sym_comment] = ACTIONS(289),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(289),
    [anon_sym_LT_AT] = ACTIONS(289),
    [anon_sym_LT_POUNDlist] = ACTIONS(289),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(289),
    [sym_break] = ACTIONS(289),
    [sym_continue] = ACTIONS(289),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(289),
    [anon_sym_LT_POUNDitems] = ACTIONS(289),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(289),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(289),
    [anon_sym_LT_POUNDif] = ACTIONS(289),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(289),
    [anon_sym_LT_POUNDelseif] = ACTIONS(289),
    [anon_sym_LT_POUNDswitch] = ACTIONS(289),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(289),
    [anon_sym_LT_POUNDcase] = ACTIONS(289),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(289),
    [anon_sym_LT_POUNDfunction] = ACTIONS(289),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(289),
    [anon_sym_LT_POUNDreturn] = ACTIONS(289),
    [anon_sym_LT_POUNDmacro] = ACTIONS(289),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(289),
    [anon_sym_LT_POUNDnested] = ACTIONS(289),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(289),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(289),
    [sym_recover] = ACTIONS(289),
    [sym_fallback] = ACTIONS(289),
    [sym_flush] = ACTIONS(289),
    [anon_sym_LT_POUNDftl] = ACTIONS(289),
    [anon_sym_LT_POUNDimport] = ACTIONS(289),
    [anon_sym_LT_POUNDinclude] = ACTIONS(289),
    [sym_lt] = ACTIONS(289),
    [sym_nt] = ACTIONS(289),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(289),
    [sym_rt] = ACTIONS(289),
    [anon_sym_LT_POUNDsetting] = ACTIONS(289),
    [sym_stop] = ACTIONS(289),
    [sym_t] = ACTIONS(289),
    [anon_sym_LT_POUNDvisit] = ACTIONS(289),
    [anon_sym_LT_POUNDassign] = ACTIONS(289),
    [sym_end_assign] = ACTIONS(289),
    [anon_sym_LT_POUNDglobal] = ACTIONS(289),
    [sym_end_global] = ACTIONS(289),
    [anon_sym_LT_POUNDlocal] = ACTIONS(289),
    [sym_end_local] = ACTIONS(289),
  },
  [75] = {
    [sym_parameter_group] = STATE(143),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(50),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(50),
    [aux_sym_group_repeat1] = STATE(143),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(291),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(293),
    [sym_comment] = ACTIONS(293),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(293),
    [anon_sym_LT_AT] = ACTIONS(293),
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
    [sym_fallback] = ACTIONS(293),
    [sym_flush] = ACTIONS(293),
    [anon_sym_LT_POUNDftl] = ACTIONS(293),
    [anon_sym_LT_POUNDimport] = ACTIONS(293),
    [anon_sym_LT_POUNDinclude] = ACTIONS(293),
    [sym_lt] = ACTIONS(293),
    [sym_nt] = ACTIONS(293),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(293),
    [sym_rt] = ACTIONS(293),
    [anon_sym_LT_POUNDsetting] = ACTIONS(293),
    [sym_stop] = ACTIONS(293),
    [sym_t] = ACTIONS(293),
    [anon_sym_LT_POUNDvisit] = ACTIONS(293),
    [anon_sym_LT_POUNDassign] = ACTIONS(293),
    [sym_end_assign] = ACTIONS(293),
    [anon_sym_LT_POUNDglobal] = ACTIONS(293),
    [sym_end_global] = ACTIONS(293),
    [anon_sym_LT_POUNDlocal] = ACTIONS(293),
    [sym_end_local] = ACTIONS(293),
  },
  [77] = {
    [sym_parameter_group] = STATE(143),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(50),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(50),
    [aux_sym_group_repeat1] = STATE(143),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(295),
  },
  [78] = {
    [sym__definition] = STATE(78),
    [sym_interpolation] = STATE(78),
    [sym_directive] = STATE(78),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(78),
    [ts_builtin_sym_end] = ACTIONS(297),
    [sym_comment] = ACTIONS(299),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(302),
    [anon_sym_LT_AT] = ACTIONS(305),
    [anon_sym_LT_POUNDlist] = ACTIONS(308),
    [anon_sym_LT_POUNDif] = ACTIONS(311),
    [anon_sym_LT_POUNDswitch] = ACTIONS(314),
    [anon_sym_LT_POUNDfunction] = ACTIONS(317),
    [anon_sym_LT_POUNDmacro] = ACTIONS(320),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(323),
    [sym_fallback] = ACTIONS(326),
    [sym_flush] = ACTIONS(326),
    [anon_sym_LT_POUNDftl] = ACTIONS(329),
    [anon_sym_LT_POUNDimport] = ACTIONS(332),
    [anon_sym_LT_POUNDinclude] = ACTIONS(335),
    [sym_lt] = ACTIONS(326),
    [sym_nt] = ACTIONS(326),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(338),
    [sym_rt] = ACTIONS(326),
    [anon_sym_LT_POUNDsetting] = ACTIONS(341),
    [sym_stop] = ACTIONS(326),
    [sym_t] = ACTIONS(326),
    [anon_sym_LT_POUNDvisit] = ACTIONS(344),
    [anon_sym_LT_POUNDassign] = ACTIONS(347),
    [sym_end_assign] = ACTIONS(350),
    [anon_sym_LT_POUNDglobal] = ACTIONS(353),
    [sym_end_global] = ACTIONS(356),
    [anon_sym_LT_POUNDlocal] = ACTIONS(359),
    [sym_end_local] = ACTIONS(362),
  },
  [79] = {
    [anon_sym_RBRACE] = ACTIONS(365),
    [anon_sym_using] = ACTIONS(367),
    [anon_sym_COMMA] = ACTIONS(365),
    [anon_sym_DOT_DOT] = ACTIONS(367),
    [anon_sym_DOT_DOT_LT] = ACTIONS(365),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(365),
    [anon_sym_STAR] = ACTIONS(367),
    [anon_sym_PLUS] = ACTIONS(367),
    [anon_sym_SLASH] = ACTIONS(367),
    [anon_sym_DASH] = ACTIONS(367),
    [anon_sym_PERCENT] = ACTIONS(367),
    [anon_sym_EQ_EQ] = ACTIONS(365),
    [anon_sym_BANG_EQ] = ACTIONS(365),
    [anon_sym_LT] = ACTIONS(367),
    [anon_sym_LT_EQ] = ACTIONS(365),
    [anon_sym_lt] = ACTIONS(367),
    [anon_sym_lte] = ACTIONS(367),
    [anon_sym_gt] = ACTIONS(367),
    [anon_sym_gte] = ACTIONS(367),
    [anon_sym_BANG] = ACTIONS(367),
    [anon_sym_AMP_AMP] = ACTIONS(365),
    [anon_sym_PIPE_PIPE] = ACTIONS(365),
    [anon_sym_QMARK_QMARK] = ACTIONS(365),
    [anon_sym_EQ] = ACTIONS(367),
    [anon_sym_PLUS_EQ] = ACTIONS(365),
    [anon_sym_DASH_EQ] = ACTIONS(365),
    [anon_sym_STAR_EQ] = ACTIONS(365),
    [anon_sym_SLASH_EQ] = ACTIONS(365),
    [anon_sym_PERCENT_EQ] = ACTIONS(365),
    [anon_sym_PLUS_PLUS] = ACTIONS(365),
    [anon_sym_DASH_DASH] = ACTIONS(365),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(365),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(365),
    [sym_number] = ACTIONS(367),
    [anon_sym_true] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_RBRACK] = ACTIONS(365),
    [anon_sym_LBRACE] = ACTIONS(365),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(365),
  },
  [80] = {
    [anon_sym_RBRACE] = ACTIONS(369),
    [anon_sym_using] = ACTIONS(371),
    [anon_sym_COMMA] = ACTIONS(369),
    [anon_sym_DOT_DOT] = ACTIONS(371),
    [anon_sym_DOT_DOT_LT] = ACTIONS(369),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(369),
    [anon_sym_COLON] = ACTIONS(369),
    [anon_sym_STAR] = ACTIONS(371),
    [anon_sym_PLUS] = ACTIONS(371),
    [anon_sym_SLASH] = ACTIONS(371),
    [anon_sym_DASH] = ACTIONS(371),
    [anon_sym_PERCENT] = ACTIONS(371),
    [anon_sym_EQ_EQ] = ACTIONS(369),
    [anon_sym_BANG_EQ] = ACTIONS(369),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_LT_EQ] = ACTIONS(369),
    [anon_sym_lt] = ACTIONS(371),
    [anon_sym_lte] = ACTIONS(371),
    [anon_sym_gt] = ACTIONS(371),
    [anon_sym_gte] = ACTIONS(371),
    [anon_sym_BANG] = ACTIONS(371),
    [anon_sym_AMP_AMP] = ACTIONS(369),
    [anon_sym_PIPE_PIPE] = ACTIONS(369),
    [anon_sym_QMARK_QMARK] = ACTIONS(369),
    [anon_sym_EQ] = ACTIONS(371),
    [anon_sym_PLUS_EQ] = ACTIONS(369),
    [anon_sym_DASH_EQ] = ACTIONS(369),
    [anon_sym_STAR_EQ] = ACTIONS(369),
    [anon_sym_SLASH_EQ] = ACTIONS(369),
    [anon_sym_PERCENT_EQ] = ACTIONS(369),
    [anon_sym_PLUS_PLUS] = ACTIONS(369),
    [anon_sym_DASH_DASH] = ACTIONS(369),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(369),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(369),
    [sym_number] = ACTIONS(371),
    [anon_sym_true] = ACTIONS(371),
    [anon_sym_LBRACK] = ACTIONS(369),
    [anon_sym_RBRACK] = ACTIONS(369),
    [anon_sym_LBRACE] = ACTIONS(369),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(369),
  },
  [81] = {
    [anon_sym_COMMA] = ACTIONS(373),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(375),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(375),
    [sym_number] = ACTIONS(377),
    [anon_sym_true] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_RBRACK] = ACTIONS(375),
    [anon_sym_LBRACE] = ACTIONS(375),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(375),
  },
  [82] = {
    [sym_type] = STATE(168),
    [sym_operator] = STATE(167),
    [sym_string] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_sequence] = STATE(27),
    [sym_hash] = STATE(27),
    [sym_top_level] = STATE(27),
    [sym_spec_var] = STATE(27),
    [aux_sym_as_expression_repeat1] = STATE(168),
    [aux_sym_as_expression_repeat2] = STATE(169),
    [anon_sym_using] = ACTIONS(161),
    [anon_sym_COMMA] = ACTIONS(163),
    [anon_sym_DOT_DOT] = ACTIONS(161),
    [anon_sym_DOT_DOT_LT] = ACTIONS(163),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(163),
    [anon_sym_COLON] = ACTIONS(163),
    [anon_sym_STAR] = ACTIONS(161),
    [anon_sym_PLUS] = ACTIONS(161),
    [anon_sym_SLASH] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(161),
    [anon_sym_PERCENT] = ACTIONS(161),
    [anon_sym_EQ_EQ] = ACTIONS(163),
    [anon_sym_BANG_EQ] = ACTIONS(163),
    [anon_sym_LT] = ACTIONS(161),
    [anon_sym_LT_EQ] = ACTIONS(163),
    [anon_sym_lt] = ACTIONS(161),
    [anon_sym_lte] = ACTIONS(161),
    [anon_sym_gt] = ACTIONS(161),
    [anon_sym_gte] = ACTIONS(161),
    [anon_sym_BANG] = ACTIONS(161),
    [anon_sym_AMP_AMP] = ACTIONS(163),
    [anon_sym_PIPE_PIPE] = ACTIONS(163),
    [anon_sym_QMARK_QMARK] = ACTIONS(163),
    [anon_sym_EQ] = ACTIONS(161),
    [anon_sym_PLUS_EQ] = ACTIONS(163),
    [anon_sym_DASH_EQ] = ACTIONS(163),
    [anon_sym_STAR_EQ] = ACTIONS(163),
    [anon_sym_SLASH_EQ] = ACTIONS(163),
    [anon_sym_PERCENT_EQ] = ACTIONS(163),
    [anon_sym_PLUS_PLUS] = ACTIONS(163),
    [anon_sym_DASH_DASH] = ACTIONS(163),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(159),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(159),
    [sym_number] = ACTIONS(165),
    [anon_sym_true] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_RBRACK] = ACTIONS(159),
    [anon_sym_LBRACE] = ACTIONS(159),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(165),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(159),
  },
  [83] = {
    [sym_expression] = STATE(81),
    [sym_type] = STATE(82),
    [sym_string] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_sequence] = STATE(27),
    [sym_hash] = STATE(27),
    [sym_top_level] = STATE(27),
    [sym_spec_var] = STATE(27),
    [aux_sym_as_expression_repeat1] = STATE(82),
    [aux_sym_sequence_repeat1] = STATE(171),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(53),
    [sym_number] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(61),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(65),
  },
  [84] = {
    [anon_sym_RBRACE] = ACTIONS(381),
    [anon_sym_using] = ACTIONS(383),
    [anon_sym_COMMA] = ACTIONS(381),
    [anon_sym_DOT_DOT] = ACTIONS(383),
    [anon_sym_DOT_DOT_LT] = ACTIONS(381),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(381),
    [anon_sym_COLON] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_PLUS] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_DASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_EQ_EQ] = ACTIONS(381),
    [anon_sym_BANG_EQ] = ACTIONS(381),
    [anon_sym_LT] = ACTIONS(383),
    [anon_sym_LT_EQ] = ACTIONS(381),
    [anon_sym_lt] = ACTIONS(383),
    [anon_sym_lte] = ACTIONS(383),
    [anon_sym_gt] = ACTIONS(383),
    [anon_sym_gte] = ACTIONS(383),
    [anon_sym_BANG] = ACTIONS(383),
    [anon_sym_AMP_AMP] = ACTIONS(381),
    [anon_sym_PIPE_PIPE] = ACTIONS(381),
    [anon_sym_QMARK_QMARK] = ACTIONS(381),
    [anon_sym_EQ] = ACTIONS(383),
    [anon_sym_PLUS_EQ] = ACTIONS(381),
    [anon_sym_DASH_EQ] = ACTIONS(381),
    [anon_sym_STAR_EQ] = ACTIONS(381),
    [anon_sym_SLASH_EQ] = ACTIONS(381),
    [anon_sym_PERCENT_EQ] = ACTIONS(381),
    [anon_sym_PLUS_PLUS] = ACTIONS(381),
    [anon_sym_DASH_DASH] = ACTIONS(381),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(381),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(381),
    [sym_number] = ACTIONS(383),
    [anon_sym_true] = ACTIONS(383),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_RBRACK] = ACTIONS(381),
    [anon_sym_LBRACE] = ACTIONS(381),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(383),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(381),
  },
  [85] = {
    [sym_expression] = STATE(90),
    [sym_type] = STATE(34),
    [sym_string] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_sequence] = STATE(27),
    [sym_hash] = STATE(27),
    [sym_top_level] = STATE(27),
    [sym_spec_var] = STATE(27),
    [aux_sym_interpolation_repeat1] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(385),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(53),
    [sym_number] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(65),
  },
  [86] = {
    [sym_parameter_group] = STATE(176),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(175),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(175),
    [aux_sym_group_repeat1] = STATE(176),
    [anon_sym_as] = ACTIONS(387),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(389),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
  },
  [87] = {
    [anon_sym_RBRACE] = ACTIONS(391),
    [anon_sym_LPAREN] = ACTIONS(391),
    [anon_sym_using] = ACTIONS(393),
    [anon_sym_COMMA] = ACTIONS(391),
    [anon_sym_DOT_DOT] = ACTIONS(393),
    [anon_sym_DOT_DOT_LT] = ACTIONS(391),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(391),
    [anon_sym_COLON] = ACTIONS(391),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [anon_sym_PERCENT] = ACTIONS(393),
    [anon_sym_EQ_EQ] = ACTIONS(391),
    [anon_sym_BANG_EQ] = ACTIONS(391),
    [anon_sym_LT] = ACTIONS(393),
    [anon_sym_LT_EQ] = ACTIONS(391),
    [anon_sym_lt] = ACTIONS(393),
    [anon_sym_lte] = ACTIONS(393),
    [anon_sym_gt] = ACTIONS(393),
    [anon_sym_gte] = ACTIONS(393),
    [anon_sym_BANG] = ACTIONS(393),
    [anon_sym_AMP_AMP] = ACTIONS(391),
    [anon_sym_PIPE_PIPE] = ACTIONS(391),
    [anon_sym_QMARK_QMARK] = ACTIONS(391),
    [anon_sym_EQ] = ACTIONS(393),
    [anon_sym_PLUS_EQ] = ACTIONS(391),
    [anon_sym_DASH_EQ] = ACTIONS(391),
    [anon_sym_STAR_EQ] = ACTIONS(391),
    [anon_sym_SLASH_EQ] = ACTIONS(391),
    [anon_sym_PERCENT_EQ] = ACTIONS(391),
    [anon_sym_PLUS_PLUS] = ACTIONS(391),
    [anon_sym_DASH_DASH] = ACTIONS(391),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(391),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(391),
    [sym_number] = ACTIONS(393),
    [anon_sym_true] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_RBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(391),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(391),
    [anon_sym_GT] = ACTIONS(391),
  },
  [88] = {
    [anon_sym_RBRACE] = ACTIONS(395),
    [anon_sym_using] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(395),
    [anon_sym_DOT_DOT] = ACTIONS(397),
    [anon_sym_DOT_DOT_LT] = ACTIONS(395),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(395),
    [anon_sym_COLON] = ACTIONS(395),
    [anon_sym_STAR] = ACTIONS(397),
    [anon_sym_PLUS] = ACTIONS(397),
    [anon_sym_SLASH] = ACTIONS(397),
    [anon_sym_DASH] = ACTIONS(397),
    [anon_sym_PERCENT] = ACTIONS(397),
    [anon_sym_EQ_EQ] = ACTIONS(395),
    [anon_sym_BANG_EQ] = ACTIONS(395),
    [anon_sym_LT] = ACTIONS(397),
    [anon_sym_LT_EQ] = ACTIONS(395),
    [anon_sym_lt] = ACTIONS(397),
    [anon_sym_lte] = ACTIONS(397),
    [anon_sym_gt] = ACTIONS(397),
    [anon_sym_gte] = ACTIONS(397),
    [anon_sym_BANG] = ACTIONS(397),
    [anon_sym_AMP_AMP] = ACTIONS(395),
    [anon_sym_PIPE_PIPE] = ACTIONS(395),
    [anon_sym_QMARK_QMARK] = ACTIONS(395),
    [anon_sym_EQ] = ACTIONS(397),
    [anon_sym_PLUS_EQ] = ACTIONS(395),
    [anon_sym_DASH_EQ] = ACTIONS(395),
    [anon_sym_STAR_EQ] = ACTIONS(395),
    [anon_sym_SLASH_EQ] = ACTIONS(395),
    [anon_sym_PERCENT_EQ] = ACTIONS(395),
    [anon_sym_PLUS_PLUS] = ACTIONS(395),
    [anon_sym_DASH_DASH] = ACTIONS(395),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(395),
    [sym_number] = ACTIONS(397),
    [anon_sym_true] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(395),
    [anon_sym_RBRACK] = ACTIONS(395),
    [anon_sym_LBRACE] = ACTIONS(395),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(397),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(395),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(399),
    [sym_comment] = ACTIONS(399),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(399),
    [anon_sym_LT_AT] = ACTIONS(399),
    [anon_sym_LT_POUNDlist] = ACTIONS(399),
    [anon_sym_LT_POUNDif] = ACTIONS(399),
    [anon_sym_LT_POUNDswitch] = ACTIONS(399),
    [anon_sym_LT_POUNDfunction] = ACTIONS(399),
    [anon_sym_LT_POUNDmacro] = ACTIONS(399),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(399),
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
  [90] = {
    [sym_expression] = STATE(90),
    [sym_type] = STATE(34),
    [sym_string] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_sequence] = STATE(27),
    [sym_hash] = STATE(27),
    [sym_top_level] = STATE(27),
    [sym_spec_var] = STATE(27),
    [aux_sym_interpolation_repeat1] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(401),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(403),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(403),
    [sym_number] = ACTIONS(406),
    [anon_sym_true] = ACTIONS(409),
    [anon_sym_LBRACK] = ACTIONS(412),
    [anon_sym_LBRACE] = ACTIONS(415),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(421),
  },
  [91] = {
    [anon_sym_RBRACE] = ACTIONS(424),
    [anon_sym_COMMA] = ACTIONS(424),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(424),
    [sym_number] = ACTIONS(426),
    [anon_sym_true] = ACTIONS(426),
    [anon_sym_LBRACK] = ACTIONS(424),
    [anon_sym_RBRACK] = ACTIONS(424),
    [anon_sym_LBRACE] = ACTIONS(424),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(426),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(424),
    [anon_sym_GT] = ACTIONS(424),
  },
  [92] = {
    [sym_type] = STATE(177),
    [sym_string] = STATE(107),
    [sym_boolean] = STATE(107),
    [sym_sequence] = STATE(107),
    [sym_hash] = STATE(107),
    [sym_top_level] = STATE(107),
    [sym_spec_var] = STATE(107),
    [aux_sym_as_expression_repeat2] = STATE(177),
    [anon_sym_RBRACE] = ACTIONS(428),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(185),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(185),
    [sym_number] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(193),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(195),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(197),
  },
  [93] = {
    [sym_type] = STATE(93),
    [sym_string] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_sequence] = STATE(27),
    [sym_hash] = STATE(27),
    [sym_top_level] = STATE(27),
    [sym_spec_var] = STATE(27),
    [aux_sym_as_expression_repeat1] = STATE(93),
    [anon_sym_RBRACE] = ACTIONS(430),
    [anon_sym_using] = ACTIONS(432),
    [anon_sym_COMMA] = ACTIONS(430),
    [anon_sym_DOT_DOT] = ACTIONS(432),
    [anon_sym_DOT_DOT_LT] = ACTIONS(430),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(430),
    [anon_sym_COLON] = ACTIONS(430),
    [anon_sym_STAR] = ACTIONS(432),
    [anon_sym_PLUS] = ACTIONS(432),
    [anon_sym_SLASH] = ACTIONS(432),
    [anon_sym_DASH] = ACTIONS(432),
    [anon_sym_PERCENT] = ACTIONS(432),
    [anon_sym_EQ_EQ] = ACTIONS(430),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_LT] = ACTIONS(432),
    [anon_sym_LT_EQ] = ACTIONS(430),
    [anon_sym_lt] = ACTIONS(432),
    [anon_sym_lte] = ACTIONS(432),
    [anon_sym_gt] = ACTIONS(432),
    [anon_sym_gte] = ACTIONS(432),
    [anon_sym_BANG] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(430),
    [anon_sym_PIPE_PIPE] = ACTIONS(430),
    [anon_sym_QMARK_QMARK] = ACTIONS(430),
    [anon_sym_EQ] = ACTIONS(432),
    [anon_sym_PLUS_EQ] = ACTIONS(430),
    [anon_sym_DASH_EQ] = ACTIONS(430),
    [anon_sym_STAR_EQ] = ACTIONS(430),
    [anon_sym_SLASH_EQ] = ACTIONS(430),
    [anon_sym_PERCENT_EQ] = ACTIONS(430),
    [anon_sym_PLUS_PLUS] = ACTIONS(430),
    [anon_sym_DASH_DASH] = ACTIONS(430),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(434),
    [sym_number] = ACTIONS(437),
    [anon_sym_true] = ACTIONS(440),
    [anon_sym_LBRACK] = ACTIONS(443),
    [anon_sym_LBRACE] = ACTIONS(446),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(449),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(452),
  },
  [94] = {
    [sym_type] = STATE(178),
    [sym_string] = STATE(107),
    [sym_boolean] = STATE(107),
    [sym_sequence] = STATE(107),
    [sym_hash] = STATE(107),
    [sym_top_level] = STATE(107),
    [sym_spec_var] = STATE(107),
    [aux_sym_as_expression_repeat2] = STATE(178),
    [anon_sym_RBRACE] = ACTIONS(428),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(428),
    [sym_number] = ACTIONS(455),
    [anon_sym_true] = ACTIONS(455),
    [anon_sym_LBRACK] = ACTIONS(428),
    [anon_sym_LBRACE] = ACTIONS(428),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(428),
  },
  [95] = {
    [sym_type] = STATE(179),
    [sym_string] = STATE(129),
    [sym_boolean] = STATE(129),
    [sym_sequence] = STATE(129),
    [sym_hash] = STATE(129),
    [sym_top_level] = STATE(129),
    [sym_spec_var] = STATE(129),
    [aux_sym_as_expression_repeat2] = STATE(179),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(217),
    [sym_number] = ACTIONS(219),
    [anon_sym_true] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(225),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(229),
  },
  [96] = {
    [anon_sym_as] = ACTIONS(135),
    [anon_sym_QMARK] = ACTIONS(135),
    [anon_sym_using] = ACTIONS(135),
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_DOT_DOT] = ACTIONS(135),
    [anon_sym_DOT_DOT_LT] = ACTIONS(133),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(133),
    [anon_sym_COLON] = ACTIONS(133),
    [anon_sym_STAR] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(135),
    [anon_sym_SLASH] = ACTIONS(135),
    [anon_sym_DASH] = ACTIONS(135),
    [anon_sym_PERCENT] = ACTIONS(135),
    [anon_sym_EQ_EQ] = ACTIONS(133),
    [anon_sym_BANG_EQ] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(135),
    [anon_sym_LT_EQ] = ACTIONS(133),
    [anon_sym_lt] = ACTIONS(135),
    [anon_sym_lte] = ACTIONS(135),
    [anon_sym_gt] = ACTIONS(135),
    [anon_sym_gte] = ACTIONS(135),
    [anon_sym_BANG] = ACTIONS(135),
    [anon_sym_AMP_AMP] = ACTIONS(133),
    [anon_sym_PIPE_PIPE] = ACTIONS(133),
    [anon_sym_QMARK_QMARK] = ACTIONS(133),
    [anon_sym_EQ] = ACTIONS(135),
    [anon_sym_PLUS_EQ] = ACTIONS(133),
    [anon_sym_DASH_EQ] = ACTIONS(133),
    [anon_sym_STAR_EQ] = ACTIONS(133),
    [anon_sym_SLASH_EQ] = ACTIONS(133),
    [anon_sym_PERCENT_EQ] = ACTIONS(133),
    [anon_sym_PLUS_PLUS] = ACTIONS(133),
    [anon_sym_DASH_DASH] = ACTIONS(133),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(133),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(133),
    [sym_number] = ACTIONS(135),
    [anon_sym_true] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(133),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(133),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_SLASH_GT] = ACTIONS(133),
  },
  [97] = {
    [anon_sym_as] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(139),
    [anon_sym_using] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_DOT_DOT] = ACTIONS(139),
    [anon_sym_DOT_DOT_LT] = ACTIONS(137),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(137),
    [anon_sym_COLON] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_PERCENT] = ACTIONS(139),
    [anon_sym_EQ_EQ] = ACTIONS(137),
    [anon_sym_BANG_EQ] = ACTIONS(137),
    [anon_sym_LT] = ACTIONS(139),
    [anon_sym_LT_EQ] = ACTIONS(137),
    [anon_sym_lt] = ACTIONS(139),
    [anon_sym_lte] = ACTIONS(139),
    [anon_sym_gt] = ACTIONS(139),
    [anon_sym_gte] = ACTIONS(139),
    [anon_sym_BANG] = ACTIONS(139),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_QMARK_QMARK] = ACTIONS(137),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_PLUS_EQ] = ACTIONS(137),
    [anon_sym_DASH_EQ] = ACTIONS(137),
    [anon_sym_STAR_EQ] = ACTIONS(137),
    [anon_sym_SLASH_EQ] = ACTIONS(137),
    [anon_sym_PERCENT_EQ] = ACTIONS(137),
    [anon_sym_PLUS_PLUS] = ACTIONS(137),
    [anon_sym_DASH_DASH] = ACTIONS(137),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(137),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(137),
    [sym_number] = ACTIONS(139),
    [anon_sym_true] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(137),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_GT] = ACTIONS(137),
    [anon_sym_SLASH_GT] = ACTIONS(137),
  },
  [98] = {
    [anon_sym_false] = ACTIONS(457),
  },
  [99] = {
    [sym_expression] = STATE(81),
    [sym_type] = STATE(82),
    [sym_string] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_sequence] = STATE(27),
    [sym_hash] = STATE(27),
    [sym_top_level] = STATE(27),
    [sym_spec_var] = STATE(27),
    [aux_sym_as_expression_repeat1] = STATE(82),
    [aux_sym_sequence_repeat1] = STATE(182),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(53),
    [sym_number] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(459),
    [anon_sym_LBRACE] = ACTIONS(61),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(65),
  },
  [100] = {
    [sym_expression] = STATE(184),
    [sym_type] = STATE(34),
    [sym_string] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_sequence] = STATE(27),
    [sym_hash] = STATE(27),
    [sym_top_level] = STATE(27),
    [sym_spec_var] = STATE(27),
    [aux_sym_interpolation_repeat1] = STATE(184),
    [aux_sym_as_expression_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(461),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(53),
    [sym_number] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(65),
  },
  [101] = {
    [sym_group] = STATE(186),
    [anon_sym_as] = ACTIONS(151),
    [anon_sym_QMARK] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(463),
    [anon_sym_using] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_DOT_DOT] = ACTIONS(151),
    [anon_sym_DOT_DOT_LT] = ACTIONS(147),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(151),
    [anon_sym_SLASH] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(151),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_lt] = ACTIONS(151),
    [anon_sym_lte] = ACTIONS(151),
    [anon_sym_gt] = ACTIONS(151),
    [anon_sym_gte] = ACTIONS(151),
    [anon_sym_BANG] = ACTIONS(151),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_QMARK_QMARK] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(151),
    [anon_sym_PLUS_EQ] = ACTIONS(147),
    [anon_sym_DASH_EQ] = ACTIONS(147),
    [anon_sym_STAR_EQ] = ACTIONS(147),
    [anon_sym_SLASH_EQ] = ACTIONS(147),
    [anon_sym_PERCENT_EQ] = ACTIONS(147),
    [anon_sym_PLUS_PLUS] = ACTIONS(147),
    [anon_sym_DASH_DASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(147),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_LBRACE] = ACTIONS(147),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(151),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_GT] = ACTIONS(147),
    [anon_sym_SLASH_GT] = ACTIONS(147),
  },
  [102] = {
    [sym_group] = STATE(187),
    [anon_sym_as] = ACTIONS(155),
    [anon_sym_QMARK] = ACTIONS(155),
    [anon_sym_LPAREN] = ACTIONS(463),
    [anon_sym_using] = ACTIONS(155),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_DOT_DOT] = ACTIONS(155),
    [anon_sym_DOT_DOT_LT] = ACTIONS(153),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(155),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(155),
    [anon_sym_PERCENT] = ACTIONS(155),
    [anon_sym_EQ_EQ] = ACTIONS(153),
    [anon_sym_BANG_EQ] = ACTIONS(153),
    [anon_sym_LT] = ACTIONS(155),
    [anon_sym_LT_EQ] = ACTIONS(153),
    [anon_sym_lt] = ACTIONS(155),
    [anon_sym_lte] = ACTIONS(155),
    [anon_sym_gt] = ACTIONS(155),
    [anon_sym_gte] = ACTIONS(155),
    [anon_sym_BANG] = ACTIONS(155),
    [anon_sym_AMP_AMP] = ACTIONS(153),
    [anon_sym_PIPE_PIPE] = ACTIONS(153),
    [anon_sym_QMARK_QMARK] = ACTIONS(153),
    [anon_sym_EQ] = ACTIONS(155),
    [anon_sym_PLUS_EQ] = ACTIONS(153),
    [anon_sym_DASH_EQ] = ACTIONS(153),
    [anon_sym_STAR_EQ] = ACTIONS(153),
    [anon_sym_SLASH_EQ] = ACTIONS(153),
    [anon_sym_PERCENT_EQ] = ACTIONS(153),
    [anon_sym_PLUS_PLUS] = ACTIONS(153),
    [anon_sym_DASH_DASH] = ACTIONS(153),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(153),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(153),
    [sym_number] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(153),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(155),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_SLASH_GT] = ACTIONS(153),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(465),
    [sym_comment] = ACTIONS(465),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(465),
    [anon_sym_LT_AT] = ACTIONS(465),
    [anon_sym_LT_POUNDlist] = ACTIONS(465),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(465),
    [sym_break] = ACTIONS(465),
    [sym_continue] = ACTIONS(465),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(465),
    [anon_sym_LT_POUNDitems] = ACTIONS(465),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(465),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(465),
    [anon_sym_LT_POUNDif] = ACTIONS(465),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(465),
    [anon_sym_LT_POUNDelseif] = ACTIONS(465),
    [anon_sym_LT_POUNDswitch] = ACTIONS(465),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(465),
    [anon_sym_LT_POUNDcase] = ACTIONS(465),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(465),
    [anon_sym_LT_POUNDfunction] = ACTIONS(465),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(465),
    [anon_sym_LT_POUNDreturn] = ACTIONS(465),
    [anon_sym_LT_POUNDmacro] = ACTIONS(465),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(465),
    [anon_sym_LT_POUNDnested] = ACTIONS(465),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(465),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(465),
    [sym_recover] = ACTIONS(465),
    [sym_fallback] = ACTIONS(465),
    [sym_flush] = ACTIONS(465),
    [anon_sym_LT_POUNDftl] = ACTIONS(465),
    [anon_sym_LT_POUNDimport] = ACTIONS(465),
    [anon_sym_LT_POUNDinclude] = ACTIONS(465),
    [sym_lt] = ACTIONS(465),
    [sym_nt] = ACTIONS(465),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(465),
    [sym_rt] = ACTIONS(465),
    [anon_sym_LT_POUNDsetting] = ACTIONS(465),
    [sym_stop] = ACTIONS(465),
    [sym_t] = ACTIONS(465),
    [anon_sym_LT_POUNDvisit] = ACTIONS(465),
    [anon_sym_LT_POUNDassign] = ACTIONS(465),
    [sym_end_assign] = ACTIONS(465),
    [anon_sym_LT_POUNDglobal] = ACTIONS(465),
    [sym_end_global] = ACTIONS(465),
    [anon_sym_LT_POUNDlocal] = ACTIONS(465),
    [sym_end_local] = ACTIONS(465),
  },
  [104] = {
    [sym_type] = STATE(190),
    [sym_operator] = STATE(189),
    [sym_string] = STATE(97),
    [sym_boolean] = STATE(97),
    [sym_sequence] = STATE(97),
    [sym_hash] = STATE(97),
    [sym_top_level] = STATE(97),
    [sym_spec_var] = STATE(97),
    [aux_sym_as_expression_repeat1] = STATE(190),
    [aux_sym_as_expression_repeat2] = STATE(191),
    [anon_sym_as] = ACTIONS(467),
    [anon_sym_QMARK] = ACTIONS(165),
    [anon_sym_using] = ACTIONS(235),
    [anon_sym_COMMA] = ACTIONS(237),
    [anon_sym_DOT_DOT] = ACTIONS(235),
    [anon_sym_DOT_DOT_LT] = ACTIONS(237),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(237),
    [anon_sym_COLON] = ACTIONS(237),
    [anon_sym_STAR] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(235),
    [anon_sym_DASH] = ACTIONS(235),
    [anon_sym_PERCENT] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(237),
    [anon_sym_BANG_EQ] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(235),
    [anon_sym_LT_EQ] = ACTIONS(237),
    [anon_sym_lt] = ACTIONS(235),
    [anon_sym_lte] = ACTIONS(235),
    [anon_sym_gt] = ACTIONS(235),
    [anon_sym_gte] = ACTIONS(235),
    [anon_sym_BANG] = ACTIONS(235),
    [anon_sym_AMP_AMP] = ACTIONS(237),
    [anon_sym_PIPE_PIPE] = ACTIONS(237),
    [anon_sym_QMARK_QMARK] = ACTIONS(237),
    [anon_sym_EQ] = ACTIONS(235),
    [anon_sym_PLUS_EQ] = ACTIONS(237),
    [anon_sym_DASH_EQ] = ACTIONS(237),
    [anon_sym_STAR_EQ] = ACTIONS(237),
    [anon_sym_SLASH_EQ] = ACTIONS(237),
    [anon_sym_PERCENT_EQ] = ACTIONS(237),
    [anon_sym_PLUS_PLUS] = ACTIONS(237),
    [anon_sym_DASH_DASH] = ACTIONS(237),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(159),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(159),
    [sym_number] = ACTIONS(165),
    [anon_sym_true] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_LBRACE] = ACTIONS(159),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(165),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(159),
    [anon_sym_GT] = ACTIONS(159),
    [anon_sym_SLASH_GT] = ACTIONS(159),
  },
  [105] = {
    [sym_parameter_group] = STATE(193),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(104),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(97),
    [sym_boolean] = STATE(97),
    [sym_sequence] = STATE(97),
    [sym_hash] = STATE(97),
    [sym_top_level] = STATE(97),
    [sym_spec_var] = STATE(97),
    [aux_sym_as_expression_repeat1] = STATE(104),
    [aux_sym_group_repeat1] = STATE(193),
    [anon_sym_as] = ACTIONS(167),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(169),
    [sym_number] = ACTIONS(171),
    [anon_sym_true] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(175),
    [anon_sym_LBRACE] = ACTIONS(177),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(179),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(181),
    [anon_sym_GT] = ACTIONS(469),
    [anon_sym_SLASH_GT] = ACTIONS(469),
  },
  [106] = {
    [anon_sym_RBRACE] = ACTIONS(133),
    [anon_sym_COMMA] = ACTIONS(133),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(133),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(133),
    [sym_number] = ACTIONS(135),
    [anon_sym_true] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(133),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(133),
    [anon_sym_GT] = ACTIONS(133),
  },
  [107] = {
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(137),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(137),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(137),
    [sym_number] = ACTIONS(139),
    [anon_sym_true] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(137),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_GT] = ACTIONS(137),
  },
  [108] = {
    [anon_sym_false] = ACTIONS(471),
  },
  [109] = {
    [sym_expression] = STATE(81),
    [sym_type] = STATE(82),
    [sym_string] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_sequence] = STATE(27),
    [sym_hash] = STATE(27),
    [sym_top_level] = STATE(27),
    [sym_spec_var] = STATE(27),
    [aux_sym_as_expression_repeat1] = STATE(82),
    [aux_sym_sequence_repeat1] = STATE(196),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(53),
    [sym_number] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(473),
    [anon_sym_LBRACE] = ACTIONS(61),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(65),
  },
  [110] = {
    [sym_expression] = STATE(198),
    [sym_type] = STATE(34),
    [sym_string] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_sequence] = STATE(27),
    [sym_hash] = STATE(27),
    [sym_top_level] = STATE(27),
    [sym_spec_var] = STATE(27),
    [aux_sym_interpolation_repeat1] = STATE(198),
    [aux_sym_as_expression_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(475),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(53),
    [sym_number] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(65),
  },
  [111] = {
    [sym_group] = STATE(200),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(477),
    [anon_sym_COMMA] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(147),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_RBRACK] = ACTIONS(147),
    [anon_sym_LBRACE] = ACTIONS(147),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(151),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_GT] = ACTIONS(147),
  },
  [112] = {
    [sym_group] = STATE(201),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(477),
    [anon_sym_COMMA] = ACTIONS(153),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(153),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(153),
    [sym_number] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(153),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(155),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
  },
  [113] = {
    [sym_type] = STATE(202),
    [sym_string] = STATE(107),
    [sym_boolean] = STATE(107),
    [sym_sequence] = STATE(107),
    [sym_hash] = STATE(107),
    [sym_top_level] = STATE(107),
    [sym_spec_var] = STATE(107),
    [aux_sym_as_expression_repeat2] = STATE(202),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(185),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(185),
    [sym_number] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(193),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(195),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(197),
    [anon_sym_GT] = ACTIONS(479),
  },
  [114] = {
    [sym_group] = STATE(203),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(481),
  },
  [115] = {
    [anon_sym_as] = ACTIONS(367),
    [anon_sym_QMARK] = ACTIONS(367),
    [anon_sym_RPAREN] = ACTIONS(365),
    [anon_sym_using] = ACTIONS(367),
    [anon_sym_COMMA] = ACTIONS(365),
    [anon_sym_DOT_DOT] = ACTIONS(367),
    [anon_sym_DOT_DOT_LT] = ACTIONS(365),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(365),
    [anon_sym_STAR] = ACTIONS(367),
    [anon_sym_PLUS] = ACTIONS(367),
    [anon_sym_SLASH] = ACTIONS(367),
    [anon_sym_DASH] = ACTIONS(367),
    [anon_sym_PERCENT] = ACTIONS(367),
    [anon_sym_EQ_EQ] = ACTIONS(365),
    [anon_sym_BANG_EQ] = ACTIONS(365),
    [anon_sym_LT] = ACTIONS(367),
    [anon_sym_LT_EQ] = ACTIONS(365),
    [anon_sym_lt] = ACTIONS(367),
    [anon_sym_lte] = ACTIONS(367),
    [anon_sym_gt] = ACTIONS(367),
    [anon_sym_gte] = ACTIONS(367),
    [anon_sym_BANG] = ACTIONS(367),
    [anon_sym_AMP_AMP] = ACTIONS(365),
    [anon_sym_PIPE_PIPE] = ACTIONS(365),
    [anon_sym_QMARK_QMARK] = ACTIONS(365),
    [anon_sym_EQ] = ACTIONS(367),
    [anon_sym_PLUS_EQ] = ACTIONS(365),
    [anon_sym_DASH_EQ] = ACTIONS(365),
    [anon_sym_STAR_EQ] = ACTIONS(365),
    [anon_sym_SLASH_EQ] = ACTIONS(365),
    [anon_sym_PERCENT_EQ] = ACTIONS(365),
    [anon_sym_PLUS_PLUS] = ACTIONS(365),
    [anon_sym_DASH_DASH] = ACTIONS(365),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(365),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(365),
    [sym_number] = ACTIONS(367),
    [anon_sym_true] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_LBRACE] = ACTIONS(365),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(365),
    [anon_sym_GT] = ACTIONS(365),
  },
  [116] = {
    [anon_sym_as] = ACTIONS(371),
    [anon_sym_QMARK] = ACTIONS(371),
    [anon_sym_RPAREN] = ACTIONS(369),
    [anon_sym_using] = ACTIONS(371),
    [anon_sym_COMMA] = ACTIONS(369),
    [anon_sym_DOT_DOT] = ACTIONS(371),
    [anon_sym_DOT_DOT_LT] = ACTIONS(369),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(369),
    [anon_sym_COLON] = ACTIONS(369),
    [anon_sym_STAR] = ACTIONS(371),
    [anon_sym_PLUS] = ACTIONS(371),
    [anon_sym_SLASH] = ACTIONS(371),
    [anon_sym_DASH] = ACTIONS(371),
    [anon_sym_PERCENT] = ACTIONS(371),
    [anon_sym_EQ_EQ] = ACTIONS(369),
    [anon_sym_BANG_EQ] = ACTIONS(369),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_LT_EQ] = ACTIONS(369),
    [anon_sym_lt] = ACTIONS(371),
    [anon_sym_lte] = ACTIONS(371),
    [anon_sym_gt] = ACTIONS(371),
    [anon_sym_gte] = ACTIONS(371),
    [anon_sym_BANG] = ACTIONS(371),
    [anon_sym_AMP_AMP] = ACTIONS(369),
    [anon_sym_PIPE_PIPE] = ACTIONS(369),
    [anon_sym_QMARK_QMARK] = ACTIONS(369),
    [anon_sym_EQ] = ACTIONS(371),
    [anon_sym_PLUS_EQ] = ACTIONS(369),
    [anon_sym_DASH_EQ] = ACTIONS(369),
    [anon_sym_STAR_EQ] = ACTIONS(369),
    [anon_sym_SLASH_EQ] = ACTIONS(369),
    [anon_sym_PERCENT_EQ] = ACTIONS(369),
    [anon_sym_PLUS_PLUS] = ACTIONS(369),
    [anon_sym_DASH_DASH] = ACTIONS(369),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(369),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(369),
    [sym_number] = ACTIONS(371),
    [anon_sym_true] = ACTIONS(371),
    [anon_sym_LBRACK] = ACTIONS(369),
    [anon_sym_LBRACE] = ACTIONS(369),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(369),
  },
  [117] = {
    [sym_expression] = STATE(81),
    [sym_type] = STATE(82),
    [sym_string] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_sequence] = STATE(27),
    [sym_hash] = STATE(27),
    [sym_top_level] = STATE(27),
    [sym_spec_var] = STATE(27),
    [aux_sym_as_expression_repeat1] = STATE(82),
    [aux_sym_sequence_repeat1] = STATE(171),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(53),
    [sym_number] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(483),
    [anon_sym_LBRACE] = ACTIONS(61),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(65),
  },
  [118] = {
    [anon_sym_as] = ACTIONS(383),
    [anon_sym_QMARK] = ACTIONS(383),
    [anon_sym_RPAREN] = ACTIONS(381),
    [anon_sym_using] = ACTIONS(383),
    [anon_sym_COMMA] = ACTIONS(381),
    [anon_sym_DOT_DOT] = ACTIONS(383),
    [anon_sym_DOT_DOT_LT] = ACTIONS(381),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(381),
    [anon_sym_COLON] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_PLUS] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_DASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_EQ_EQ] = ACTIONS(381),
    [anon_sym_BANG_EQ] = ACTIONS(381),
    [anon_sym_LT] = ACTIONS(383),
    [anon_sym_LT_EQ] = ACTIONS(381),
    [anon_sym_lt] = ACTIONS(383),
    [anon_sym_lte] = ACTIONS(383),
    [anon_sym_gt] = ACTIONS(383),
    [anon_sym_gte] = ACTIONS(383),
    [anon_sym_BANG] = ACTIONS(383),
    [anon_sym_AMP_AMP] = ACTIONS(381),
    [anon_sym_PIPE_PIPE] = ACTIONS(381),
    [anon_sym_QMARK_QMARK] = ACTIONS(381),
    [anon_sym_EQ] = ACTIONS(383),
    [anon_sym_PLUS_EQ] = ACTIONS(381),
    [anon_sym_DASH_EQ] = ACTIONS(381),
    [anon_sym_STAR_EQ] = ACTIONS(381),
    [anon_sym_SLASH_EQ] = ACTIONS(381),
    [anon_sym_PERCENT_EQ] = ACTIONS(381),
    [anon_sym_PLUS_PLUS] = ACTIONS(381),
    [anon_sym_DASH_DASH] = ACTIONS(381),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(381),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(381),
    [sym_number] = ACTIONS(383),
    [anon_sym_true] = ACTIONS(383),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_LBRACE] = ACTIONS(381),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(383),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(381),
    [anon_sym_GT] = ACTIONS(381),
  },
  [119] = {
    [sym_expression] = STATE(90),
    [sym_type] = STATE(34),
    [sym_string] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_sequence] = STATE(27),
    [sym_hash] = STATE(27),
    [sym_top_level] = STATE(27),
    [sym_spec_var] = STATE(27),
    [aux_sym_interpolation_repeat1] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(485),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(53),
    [sym_number] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(65),
  },
  [120] = {
    [sym_parameter_group] = STATE(207),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(175),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(175),
    [aux_sym_group_repeat1] = STATE(207),
    [anon_sym_as] = ACTIONS(387),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(487),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
  },
  [121] = {
    [anon_sym_as] = ACTIONS(393),
    [anon_sym_QMARK] = ACTIONS(393),
    [anon_sym_RPAREN] = ACTIONS(391),
    [anon_sym_using] = ACTIONS(393),
    [anon_sym_COMMA] = ACTIONS(391),
    [anon_sym_DOT_DOT] = ACTIONS(393),
    [anon_sym_DOT_DOT_LT] = ACTIONS(391),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(391),
    [anon_sym_COLON] = ACTIONS(391),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [anon_sym_PERCENT] = ACTIONS(393),
    [anon_sym_EQ_EQ] = ACTIONS(391),
    [anon_sym_BANG_EQ] = ACTIONS(391),
    [anon_sym_LT] = ACTIONS(393),
    [anon_sym_LT_EQ] = ACTIONS(391),
    [anon_sym_lt] = ACTIONS(393),
    [anon_sym_lte] = ACTIONS(393),
    [anon_sym_gt] = ACTIONS(393),
    [anon_sym_gte] = ACTIONS(393),
    [anon_sym_BANG] = ACTIONS(393),
    [anon_sym_AMP_AMP] = ACTIONS(391),
    [anon_sym_PIPE_PIPE] = ACTIONS(391),
    [anon_sym_QMARK_QMARK] = ACTIONS(391),
    [anon_sym_EQ] = ACTIONS(393),
    [anon_sym_PLUS_EQ] = ACTIONS(391),
    [anon_sym_DASH_EQ] = ACTIONS(391),
    [anon_sym_STAR_EQ] = ACTIONS(391),
    [anon_sym_SLASH_EQ] = ACTIONS(391),
    [anon_sym_PERCENT_EQ] = ACTIONS(391),
    [anon_sym_PLUS_PLUS] = ACTIONS(391),
    [anon_sym_DASH_DASH] = ACTIONS(391),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(391),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(391),
    [sym_number] = ACTIONS(393),
    [anon_sym_true] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(391),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(391),
    [anon_sym_GT] = ACTIONS(391),
  },
  [122] = {
    [anon_sym_as] = ACTIONS(397),
    [anon_sym_QMARK] = ACTIONS(397),
    [anon_sym_RPAREN] = ACTIONS(395),
    [anon_sym_using] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(395),
    [anon_sym_DOT_DOT] = ACTIONS(397),
    [anon_sym_DOT_DOT_LT] = ACTIONS(395),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(395),
    [anon_sym_COLON] = ACTIONS(395),
    [anon_sym_STAR] = ACTIONS(397),
    [anon_sym_PLUS] = ACTIONS(397),
    [anon_sym_SLASH] = ACTIONS(397),
    [anon_sym_DASH] = ACTIONS(397),
    [anon_sym_PERCENT] = ACTIONS(397),
    [anon_sym_EQ_EQ] = ACTIONS(395),
    [anon_sym_BANG_EQ] = ACTIONS(395),
    [anon_sym_LT] = ACTIONS(397),
    [anon_sym_LT_EQ] = ACTIONS(395),
    [anon_sym_lt] = ACTIONS(397),
    [anon_sym_lte] = ACTIONS(397),
    [anon_sym_gt] = ACTIONS(397),
    [anon_sym_gte] = ACTIONS(397),
    [anon_sym_BANG] = ACTIONS(397),
    [anon_sym_AMP_AMP] = ACTIONS(395),
    [anon_sym_PIPE_PIPE] = ACTIONS(395),
    [anon_sym_QMARK_QMARK] = ACTIONS(395),
    [anon_sym_EQ] = ACTIONS(397),
    [anon_sym_PLUS_EQ] = ACTIONS(395),
    [anon_sym_DASH_EQ] = ACTIONS(395),
    [anon_sym_STAR_EQ] = ACTIONS(395),
    [anon_sym_SLASH_EQ] = ACTIONS(395),
    [anon_sym_PERCENT_EQ] = ACTIONS(395),
    [anon_sym_PLUS_PLUS] = ACTIONS(395),
    [anon_sym_DASH_DASH] = ACTIONS(395),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(395),
    [sym_number] = ACTIONS(397),
    [anon_sym_true] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(395),
    [anon_sym_LBRACE] = ACTIONS(395),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(397),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(395),
    [anon_sym_GT] = ACTIONS(395),
  },
  [123] = {
    [sym_directive] = STATE(209),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_list_middle] = STATE(215),
    [sym_list_else] = STATE(213),
    [sym_items] = STATE(209),
    [sym_sep] = STATE(209),
    [sym_sep_block] = STATE(214),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_list_repeat1] = STATE(215),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUNDlist] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(489),
    [sym_break] = ACTIONS(491),
    [sym_continue] = ACTIONS(491),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(493),
    [anon_sym_LT_POUNDitems] = ACTIONS(495),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(497),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(23),
    [sym_fallback] = ACTIONS(25),
    [sym_flush] = ACTIONS(25),
    [anon_sym_LT_POUNDftl] = ACTIONS(27),
    [anon_sym_LT_POUNDimport] = ACTIONS(29),
    [anon_sym_LT_POUNDinclude] = ACTIONS(31),
    [sym_lt] = ACTIONS(25),
    [sym_nt] = ACTIONS(25),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(33),
    [sym_rt] = ACTIONS(25),
    [anon_sym_LT_POUNDsetting] = ACTIONS(35),
    [sym_stop] = ACTIONS(25),
    [sym_t] = ACTIONS(25),
    [anon_sym_LT_POUNDvisit] = ACTIONS(37),
    [anon_sym_LT_POUNDassign] = ACTIONS(39),
    [sym_end_assign] = ACTIONS(41),
    [anon_sym_LT_POUNDglobal] = ACTIONS(43),
    [sym_end_global] = ACTIONS(45),
    [anon_sym_LT_POUNDlocal] = ACTIONS(47),
    [sym_end_local] = ACTIONS(49),
  },
  [124] = {
    [sym_type] = STATE(216),
    [sym_string] = STATE(107),
    [sym_boolean] = STATE(107),
    [sym_sequence] = STATE(107),
    [sym_hash] = STATE(107),
    [sym_top_level] = STATE(107),
    [sym_spec_var] = STATE(107),
    [aux_sym_as_expression_repeat2] = STATE(216),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(185),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(185),
    [sym_number] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(193),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(195),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(197),
  },
  [125] = {
    [sym_type] = STATE(217),
    [sym_string] = STATE(107),
    [sym_boolean] = STATE(107),
    [sym_sequence] = STATE(107),
    [sym_hash] = STATE(107),
    [sym_top_level] = STATE(107),
    [sym_spec_var] = STATE(107),
    [aux_sym_as_expression_repeat2] = STATE(217),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(185),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(185),
    [sym_number] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(193),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(195),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(197),
    [anon_sym_GT] = ACTIONS(428),
  },
  [126] = {
    [sym_type] = STATE(126),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(126),
    [anon_sym_as] = ACTIONS(432),
    [anon_sym_using] = ACTIONS(432),
    [anon_sym_COMMA] = ACTIONS(430),
    [anon_sym_DOT_DOT] = ACTIONS(432),
    [anon_sym_DOT_DOT_LT] = ACTIONS(430),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(430),
    [anon_sym_COLON] = ACTIONS(430),
    [anon_sym_STAR] = ACTIONS(432),
    [anon_sym_PLUS] = ACTIONS(432),
    [anon_sym_SLASH] = ACTIONS(432),
    [anon_sym_DASH] = ACTIONS(432),
    [anon_sym_PERCENT] = ACTIONS(432),
    [anon_sym_EQ_EQ] = ACTIONS(430),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_LT] = ACTIONS(432),
    [anon_sym_LT_EQ] = ACTIONS(430),
    [anon_sym_lt] = ACTIONS(432),
    [anon_sym_lte] = ACTIONS(432),
    [anon_sym_gt] = ACTIONS(432),
    [anon_sym_gte] = ACTIONS(432),
    [anon_sym_BANG] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(430),
    [anon_sym_PIPE_PIPE] = ACTIONS(430),
    [anon_sym_QMARK_QMARK] = ACTIONS(430),
    [anon_sym_EQ] = ACTIONS(432),
    [anon_sym_PLUS_EQ] = ACTIONS(430),
    [anon_sym_DASH_EQ] = ACTIONS(430),
    [anon_sym_STAR_EQ] = ACTIONS(430),
    [anon_sym_SLASH_EQ] = ACTIONS(430),
    [anon_sym_PERCENT_EQ] = ACTIONS(430),
    [anon_sym_PLUS_PLUS] = ACTIONS(430),
    [anon_sym_DASH_DASH] = ACTIONS(430),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(499),
    [sym_number] = ACTIONS(502),
    [anon_sym_true] = ACTIONS(505),
    [anon_sym_LBRACK] = ACTIONS(508),
    [anon_sym_LBRACE] = ACTIONS(511),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(514),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(517),
    [anon_sym_GT] = ACTIONS(430),
  },
  [127] = {
    [sym_type] = STATE(202),
    [sym_string] = STATE(107),
    [sym_boolean] = STATE(107),
    [sym_sequence] = STATE(107),
    [sym_hash] = STATE(107),
    [sym_top_level] = STATE(107),
    [sym_spec_var] = STATE(107),
    [aux_sym_as_expression_repeat2] = STATE(202),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(185),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(185),
    [sym_number] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(193),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(195),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(197),
    [anon_sym_GT] = ACTIONS(428),
  },
  [128] = {
    [anon_sym_as] = ACTIONS(135),
    [anon_sym_QMARK] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(133),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(133),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(133),
    [sym_number] = ACTIONS(135),
    [anon_sym_true] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(133),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(133),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_SLASH_GT] = ACTIONS(133),
  },
  [129] = {
    [anon_sym_as] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(137),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(137),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(137),
    [sym_number] = ACTIONS(139),
    [anon_sym_true] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(137),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_GT] = ACTIONS(137),
    [anon_sym_SLASH_GT] = ACTIONS(137),
  },
  [130] = {
    [anon_sym_false] = ACTIONS(520),
  },
  [131] = {
    [sym_expression] = STATE(81),
    [sym_type] = STATE(82),
    [sym_string] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_sequence] = STATE(27),
    [sym_hash] = STATE(27),
    [sym_top_level] = STATE(27),
    [sym_spec_var] = STATE(27),
    [aux_sym_as_expression_repeat1] = STATE(82),
    [aux_sym_sequence_repeat1] = STATE(220),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(53),
    [sym_number] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(522),
    [anon_sym_LBRACE] = ACTIONS(61),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(65),
  },
  [132] = {
    [sym_expression] = STATE(222),
    [sym_type] = STATE(34),
    [sym_string] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_sequence] = STATE(27),
    [sym_hash] = STATE(27),
    [sym_top_level] = STATE(27),
    [sym_spec_var] = STATE(27),
    [aux_sym_interpolation_repeat1] = STATE(222),
    [aux_sym_as_expression_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(524),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(53),
    [sym_number] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(65),
  },
  [133] = {
    [sym_group] = STATE(224),
    [anon_sym_as] = ACTIONS(151),
    [anon_sym_QMARK] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(526),
    [anon_sym_RPAREN] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(147),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_LBRACE] = ACTIONS(147),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(151),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_GT] = ACTIONS(147),
    [anon_sym_SLASH_GT] = ACTIONS(147),
  },
  [134] = {
    [sym_group] = STATE(225),
    [anon_sym_as] = ACTIONS(155),
    [anon_sym_QMARK] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(526),
    [anon_sym_RPAREN] = ACTIONS(153),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(153),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(153),
    [sym_number] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(153),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(155),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_SLASH_GT] = ACTIONS(153),
  },
  [135] = {
    [sym_type] = STATE(226),
    [sym_string] = STATE(129),
    [sym_boolean] = STATE(129),
    [sym_sequence] = STATE(129),
    [sym_hash] = STATE(129),
    [sym_top_level] = STATE(129),
    [sym_spec_var] = STATE(129),
    [aux_sym_as_expression_repeat2] = STATE(226),
    [anon_sym_as] = ACTIONS(528),
    [anon_sym_QMARK] = ACTIONS(479),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(479),
    [sym_number] = ACTIONS(528),
    [anon_sym_true] = ACTIONS(528),
    [anon_sym_LBRACK] = ACTIONS(479),
    [anon_sym_LBRACE] = ACTIONS(479),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(528),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(479),
    [anon_sym_GT] = ACTIONS(479),
  },
  [136] = {
    [sym_group] = STATE(203),
    [anon_sym_as] = ACTIONS(530),
    [anon_sym_QMARK] = ACTIONS(481),
    [anon_sym_LPAREN] = ACTIONS(526),
    [anon_sym_RPAREN] = ACTIONS(481),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(481),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(481),
    [sym_number] = ACTIONS(530),
    [anon_sym_true] = ACTIONS(530),
    [anon_sym_LBRACK] = ACTIONS(481),
    [anon_sym_LBRACE] = ACTIONS(481),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(481),
    [anon_sym_GT] = ACTIONS(481),
    [anon_sym_SLASH_GT] = ACTIONS(481),
  },
  [137] = {
    [sym_type] = STATE(227),
    [sym_string] = STATE(129),
    [sym_boolean] = STATE(129),
    [sym_sequence] = STATE(129),
    [sym_hash] = STATE(129),
    [sym_top_level] = STATE(129),
    [sym_spec_var] = STATE(129),
    [aux_sym_as_expression_repeat2] = STATE(227),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(217),
    [sym_number] = ACTIONS(219),
    [anon_sym_true] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(225),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(229),
  },
  [138] = {
    [anon_sym_as] = ACTIONS(426),
    [anon_sym_QMARK] = ACTIONS(424),
    [anon_sym_RPAREN] = ACTIONS(424),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(424),
    [sym_number] = ACTIONS(426),
    [anon_sym_true] = ACTIONS(426),
    [anon_sym_LBRACK] = ACTIONS(424),
    [anon_sym_LBRACE] = ACTIONS(424),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(426),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(424),
    [anon_sym_GT] = ACTIONS(424),
    [anon_sym_SLASH_GT] = ACTIONS(424),
  },
  [139] = {
    [sym_type] = STATE(228),
    [sym_string] = STATE(129),
    [sym_boolean] = STATE(129),
    [sym_sequence] = STATE(129),
    [sym_hash] = STATE(129),
    [sym_top_level] = STATE(129),
    [sym_spec_var] = STATE(129),
    [aux_sym_as_expression_repeat2] = STATE(228),
    [anon_sym_as] = ACTIONS(455),
    [anon_sym_QMARK] = ACTIONS(428),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(217),
    [sym_number] = ACTIONS(219),
    [anon_sym_true] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(225),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(229),
    [anon_sym_GT] = ACTIONS(428),
  },
  [140] = {
    [sym_type] = STATE(140),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(140),
    [anon_sym_as] = ACTIONS(432),
    [anon_sym_QMARK] = ACTIONS(432),
    [anon_sym_using] = ACTIONS(432),
    [anon_sym_COMMA] = ACTIONS(430),
    [anon_sym_DOT_DOT] = ACTIONS(432),
    [anon_sym_DOT_DOT_LT] = ACTIONS(430),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(430),
    [anon_sym_COLON] = ACTIONS(430),
    [anon_sym_STAR] = ACTIONS(432),
    [anon_sym_PLUS] = ACTIONS(432),
    [anon_sym_SLASH] = ACTIONS(432),
    [anon_sym_DASH] = ACTIONS(432),
    [anon_sym_PERCENT] = ACTIONS(432),
    [anon_sym_EQ_EQ] = ACTIONS(430),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_LT] = ACTIONS(432),
    [anon_sym_LT_EQ] = ACTIONS(430),
    [anon_sym_lt] = ACTIONS(432),
    [anon_sym_lte] = ACTIONS(432),
    [anon_sym_gt] = ACTIONS(432),
    [anon_sym_gte] = ACTIONS(432),
    [anon_sym_BANG] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(430),
    [anon_sym_PIPE_PIPE] = ACTIONS(430),
    [anon_sym_QMARK_QMARK] = ACTIONS(430),
    [anon_sym_EQ] = ACTIONS(432),
    [anon_sym_PLUS_EQ] = ACTIONS(430),
    [anon_sym_DASH_EQ] = ACTIONS(430),
    [anon_sym_STAR_EQ] = ACTIONS(430),
    [anon_sym_SLASH_EQ] = ACTIONS(430),
    [anon_sym_PERCENT_EQ] = ACTIONS(430),
    [anon_sym_PLUS_PLUS] = ACTIONS(430),
    [anon_sym_DASH_DASH] = ACTIONS(430),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(499),
    [sym_number] = ACTIONS(502),
    [anon_sym_true] = ACTIONS(505),
    [anon_sym_LBRACK] = ACTIONS(508),
    [anon_sym_LBRACE] = ACTIONS(511),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(514),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(517),
    [anon_sym_GT] = ACTIONS(430),
  },
  [141] = {
    [sym_type] = STATE(226),
    [sym_string] = STATE(129),
    [sym_boolean] = STATE(129),
    [sym_sequence] = STATE(129),
    [sym_hash] = STATE(129),
    [sym_top_level] = STATE(129),
    [sym_spec_var] = STATE(129),
    [aux_sym_as_expression_repeat2] = STATE(226),
    [anon_sym_as] = ACTIONS(455),
    [anon_sym_QMARK] = ACTIONS(428),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(428),
    [sym_number] = ACTIONS(455),
    [anon_sym_true] = ACTIONS(455),
    [anon_sym_LBRACK] = ACTIONS(428),
    [anon_sym_LBRACE] = ACTIONS(428),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(428),
    [anon_sym_GT] = ACTIONS(428),
  },
  [142] = {
    [sym_directive] = STATE(232),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_if_else] = STATE(233),
    [sym_elseif] = STATE(232),
    [sym_if_middle] = STATE(234),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_if_repeat1] = STATE(234),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUNDlist] = ACTIONS(13),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(532),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(534),
    [anon_sym_LT_POUNDelseif] = ACTIONS(536),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(23),
    [sym_fallback] = ACTIONS(25),
    [sym_flush] = ACTIONS(25),
    [anon_sym_LT_POUNDftl] = ACTIONS(27),
    [anon_sym_LT_POUNDimport] = ACTIONS(29),
    [anon_sym_LT_POUNDinclude] = ACTIONS(31),
    [sym_lt] = ACTIONS(25),
    [sym_nt] = ACTIONS(25),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(33),
    [sym_rt] = ACTIONS(25),
    [anon_sym_LT_POUNDsetting] = ACTIONS(35),
    [sym_stop] = ACTIONS(25),
    [sym_t] = ACTIONS(25),
    [anon_sym_LT_POUNDvisit] = ACTIONS(37),
    [anon_sym_LT_POUNDassign] = ACTIONS(39),
    [sym_end_assign] = ACTIONS(41),
    [anon_sym_LT_POUNDglobal] = ACTIONS(43),
    [sym_end_global] = ACTIONS(45),
    [anon_sym_LT_POUNDlocal] = ACTIONS(47),
    [sym_end_local] = ACTIONS(49),
  },
  [143] = {
    [sym_parameter_group] = STATE(143),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(50),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(50),
    [aux_sym_group_repeat1] = STATE(143),
    [anon_sym_as] = ACTIONS(538),
    [anon_sym_QMARK] = ACTIONS(541),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(544),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(544),
    [sym_number] = ACTIONS(547),
    [anon_sym_true] = ACTIONS(550),
    [anon_sym_LBRACK] = ACTIONS(553),
    [anon_sym_LBRACE] = ACTIONS(556),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(559),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(562),
    [anon_sym_GT] = ACTIONS(565),
  },
  [144] = {
    [sym_case] = STATE(238),
    [sym_default] = STATE(239),
    [sym_switch_middle] = STATE(240),
    [aux_sym_switch_repeat1] = STATE(240),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(567),
    [anon_sym_LT_POUNDcase] = ACTIONS(569),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(571),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(573),
    [sym_comment] = ACTIONS(573),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(573),
    [anon_sym_LT_AT] = ACTIONS(573),
    [anon_sym_LT_POUNDlist] = ACTIONS(573),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(573),
    [sym_break] = ACTIONS(573),
    [sym_continue] = ACTIONS(573),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(573),
    [anon_sym_LT_POUNDitems] = ACTIONS(573),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(573),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(573),
    [anon_sym_LT_POUNDif] = ACTIONS(573),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(573),
    [anon_sym_LT_POUNDelseif] = ACTIONS(573),
    [anon_sym_LT_POUNDswitch] = ACTIONS(573),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(573),
    [anon_sym_LT_POUNDcase] = ACTIONS(573),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(573),
    [anon_sym_LT_POUNDfunction] = ACTIONS(573),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(573),
    [anon_sym_LT_POUNDreturn] = ACTIONS(573),
    [anon_sym_LT_POUNDmacro] = ACTIONS(573),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(573),
    [anon_sym_LT_POUNDnested] = ACTIONS(573),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(573),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(573),
    [sym_recover] = ACTIONS(573),
    [sym_fallback] = ACTIONS(573),
    [sym_flush] = ACTIONS(573),
    [anon_sym_LT_POUNDftl] = ACTIONS(573),
    [anon_sym_LT_POUNDimport] = ACTIONS(573),
    [anon_sym_LT_POUNDinclude] = ACTIONS(573),
    [sym_lt] = ACTIONS(573),
    [sym_nt] = ACTIONS(573),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(573),
    [sym_rt] = ACTIONS(573),
    [anon_sym_LT_POUNDsetting] = ACTIONS(573),
    [sym_stop] = ACTIONS(573),
    [sym_t] = ACTIONS(573),
    [anon_sym_LT_POUNDvisit] = ACTIONS(573),
    [anon_sym_LT_POUNDassign] = ACTIONS(573),
    [sym_end_assign] = ACTIONS(573),
    [anon_sym_LT_POUNDglobal] = ACTIONS(573),
    [sym_end_global] = ACTIONS(573),
    [anon_sym_LT_POUNDlocal] = ACTIONS(573),
    [sym_end_local] = ACTIONS(573),
  },
  [146] = {
    [sym_parameter_group] = STATE(242),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(47),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(47),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(575),
  },
  [147] = {
    [anon_sym_LT_AT] = ACTIONS(577),
    [anon_sym_LT_POUNDlist] = ACTIONS(577),
    [anon_sym_LT_POUNDif] = ACTIONS(577),
    [anon_sym_LT_POUNDswitch] = ACTIONS(577),
    [anon_sym_LT_POUNDfunction] = ACTIONS(577),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(577),
    [anon_sym_LT_POUNDreturn] = ACTIONS(577),
    [anon_sym_LT_POUNDmacro] = ACTIONS(577),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(577),
    [sym_fallback] = ACTIONS(577),
    [sym_flush] = ACTIONS(577),
    [anon_sym_LT_POUNDftl] = ACTIONS(577),
    [anon_sym_LT_POUNDimport] = ACTIONS(577),
    [anon_sym_LT_POUNDinclude] = ACTIONS(577),
    [sym_lt] = ACTIONS(577),
    [sym_nt] = ACTIONS(577),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(577),
    [sym_rt] = ACTIONS(577),
    [anon_sym_LT_POUNDsetting] = ACTIONS(577),
    [sym_stop] = ACTIONS(577),
    [sym_t] = ACTIONS(577),
    [anon_sym_LT_POUNDvisit] = ACTIONS(577),
    [anon_sym_LT_POUNDassign] = ACTIONS(577),
    [sym_end_assign] = ACTIONS(577),
    [anon_sym_LT_POUNDglobal] = ACTIONS(577),
    [sym_end_global] = ACTIONS(577),
    [anon_sym_LT_POUNDlocal] = ACTIONS(577),
    [sym_end_local] = ACTIONS(577),
  },
  [148] = {
    [sym_directive] = STATE(147),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_function_middle] = STATE(244),
    [sym_return] = STATE(147),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_function_repeat1] = STATE(244),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUNDlist] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(579),
    [anon_sym_LT_POUNDreturn] = ACTIONS(245),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(23),
    [sym_fallback] = ACTIONS(25),
    [sym_flush] = ACTIONS(25),
    [anon_sym_LT_POUNDftl] = ACTIONS(27),
    [anon_sym_LT_POUNDimport] = ACTIONS(29),
    [anon_sym_LT_POUNDinclude] = ACTIONS(31),
    [sym_lt] = ACTIONS(25),
    [sym_nt] = ACTIONS(25),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(33),
    [sym_rt] = ACTIONS(25),
    [anon_sym_LT_POUNDsetting] = ACTIONS(35),
    [sym_stop] = ACTIONS(25),
    [sym_t] = ACTIONS(25),
    [anon_sym_LT_POUNDvisit] = ACTIONS(37),
    [anon_sym_LT_POUNDassign] = ACTIONS(39),
    [sym_end_assign] = ACTIONS(41),
    [anon_sym_LT_POUNDglobal] = ACTIONS(43),
    [sym_end_global] = ACTIONS(45),
    [anon_sym_LT_POUNDlocal] = ACTIONS(47),
    [sym_end_local] = ACTIONS(49),
  },
  [149] = {
    [sym_directive] = STATE(147),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_function_middle] = STATE(245),
    [sym_return] = STATE(147),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_function_repeat1] = STATE(245),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUNDlist] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(579),
    [anon_sym_LT_POUNDreturn] = ACTIONS(245),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(23),
    [sym_fallback] = ACTIONS(25),
    [sym_flush] = ACTIONS(25),
    [anon_sym_LT_POUNDftl] = ACTIONS(27),
    [anon_sym_LT_POUNDimport] = ACTIONS(29),
    [anon_sym_LT_POUNDinclude] = ACTIONS(31),
    [sym_lt] = ACTIONS(25),
    [sym_nt] = ACTIONS(25),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(33),
    [sym_rt] = ACTIONS(25),
    [anon_sym_LT_POUNDsetting] = ACTIONS(35),
    [sym_stop] = ACTIONS(25),
    [sym_t] = ACTIONS(25),
    [anon_sym_LT_POUNDvisit] = ACTIONS(37),
    [anon_sym_LT_POUNDassign] = ACTIONS(39),
    [sym_end_assign] = ACTIONS(41),
    [anon_sym_LT_POUNDglobal] = ACTIONS(43),
    [sym_end_global] = ACTIONS(45),
    [anon_sym_LT_POUNDlocal] = ACTIONS(47),
    [sym_end_local] = ACTIONS(49),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(581),
    [sym_comment] = ACTIONS(581),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(581),
    [anon_sym_LT_AT] = ACTIONS(581),
    [anon_sym_LT_POUNDlist] = ACTIONS(581),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(581),
    [sym_break] = ACTIONS(581),
    [sym_continue] = ACTIONS(581),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(581),
    [anon_sym_LT_POUNDitems] = ACTIONS(581),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(581),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(581),
    [anon_sym_LT_POUNDif] = ACTIONS(581),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(581),
    [anon_sym_LT_POUNDelseif] = ACTIONS(581),
    [anon_sym_LT_POUNDswitch] = ACTIONS(581),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(581),
    [anon_sym_LT_POUNDcase] = ACTIONS(581),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(581),
    [anon_sym_LT_POUNDfunction] = ACTIONS(581),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(581),
    [anon_sym_LT_POUNDreturn] = ACTIONS(581),
    [anon_sym_LT_POUNDmacro] = ACTIONS(581),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(581),
    [anon_sym_LT_POUNDnested] = ACTIONS(581),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(581),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(581),
    [sym_recover] = ACTIONS(581),
    [sym_fallback] = ACTIONS(581),
    [sym_flush] = ACTIONS(581),
    [anon_sym_LT_POUNDftl] = ACTIONS(581),
    [anon_sym_LT_POUNDimport] = ACTIONS(581),
    [anon_sym_LT_POUNDinclude] = ACTIONS(581),
    [sym_lt] = ACTIONS(581),
    [sym_nt] = ACTIONS(581),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(581),
    [sym_rt] = ACTIONS(581),
    [anon_sym_LT_POUNDsetting] = ACTIONS(581),
    [sym_stop] = ACTIONS(581),
    [sym_t] = ACTIONS(581),
    [anon_sym_LT_POUNDvisit] = ACTIONS(581),
    [anon_sym_LT_POUNDassign] = ACTIONS(581),
    [sym_end_assign] = ACTIONS(581),
    [anon_sym_LT_POUNDglobal] = ACTIONS(581),
    [sym_end_global] = ACTIONS(581),
    [anon_sym_LT_POUNDlocal] = ACTIONS(581),
    [sym_end_local] = ACTIONS(581),
  },
  [151] = {
    [sym_parameter_group] = STATE(247),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(50),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(50),
    [aux_sym_group_repeat1] = STATE(247),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(583),
  },
  [152] = {
    [anon_sym_LT_AT] = ACTIONS(585),
    [anon_sym_LT_POUNDlist] = ACTIONS(585),
    [anon_sym_LT_POUNDif] = ACTIONS(585),
    [anon_sym_LT_POUNDswitch] = ACTIONS(585),
    [anon_sym_LT_POUNDfunction] = ACTIONS(585),
    [anon_sym_LT_POUNDreturn] = ACTIONS(585),
    [anon_sym_LT_POUNDmacro] = ACTIONS(585),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(585),
    [anon_sym_LT_POUNDnested] = ACTIONS(585),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(585),
    [sym_fallback] = ACTIONS(585),
    [sym_flush] = ACTIONS(585),
    [anon_sym_LT_POUNDftl] = ACTIONS(585),
    [anon_sym_LT_POUNDimport] = ACTIONS(585),
    [anon_sym_LT_POUNDinclude] = ACTIONS(585),
    [sym_lt] = ACTIONS(585),
    [sym_nt] = ACTIONS(585),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(585),
    [sym_rt] = ACTIONS(585),
    [anon_sym_LT_POUNDsetting] = ACTIONS(585),
    [sym_stop] = ACTIONS(585),
    [sym_t] = ACTIONS(585),
    [anon_sym_LT_POUNDvisit] = ACTIONS(585),
    [anon_sym_LT_POUNDassign] = ACTIONS(585),
    [sym_end_assign] = ACTIONS(585),
    [anon_sym_LT_POUNDglobal] = ACTIONS(585),
    [sym_end_global] = ACTIONS(585),
    [anon_sym_LT_POUNDlocal] = ACTIONS(585),
    [sym_end_local] = ACTIONS(585),
  },
  [153] = {
    [sym_directive] = STATE(152),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_return] = STATE(152),
    [sym_macro] = STATE(10),
    [sym_macro_middle] = STATE(249),
    [sym_nested] = STATE(152),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_macro_repeat1] = STATE(249),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUNDlist] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDreturn] = ACTIONS(245),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(587),
    [anon_sym_LT_POUNDnested] = ACTIONS(251),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(23),
    [sym_fallback] = ACTIONS(25),
    [sym_flush] = ACTIONS(25),
    [anon_sym_LT_POUNDftl] = ACTIONS(27),
    [anon_sym_LT_POUNDimport] = ACTIONS(29),
    [anon_sym_LT_POUNDinclude] = ACTIONS(31),
    [sym_lt] = ACTIONS(25),
    [sym_nt] = ACTIONS(25),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(33),
    [sym_rt] = ACTIONS(25),
    [anon_sym_LT_POUNDsetting] = ACTIONS(35),
    [sym_stop] = ACTIONS(25),
    [sym_t] = ACTIONS(25),
    [anon_sym_LT_POUNDvisit] = ACTIONS(37),
    [anon_sym_LT_POUNDassign] = ACTIONS(39),
    [sym_end_assign] = ACTIONS(41),
    [anon_sym_LT_POUNDglobal] = ACTIONS(43),
    [sym_end_global] = ACTIONS(45),
    [anon_sym_LT_POUNDlocal] = ACTIONS(47),
    [sym_end_local] = ACTIONS(49),
  },
  [154] = {
    [sym_directive] = STATE(152),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_return] = STATE(152),
    [sym_macro] = STATE(10),
    [sym_macro_middle] = STATE(250),
    [sym_nested] = STATE(152),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_macro_repeat1] = STATE(250),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUNDlist] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDreturn] = ACTIONS(245),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(587),
    [anon_sym_LT_POUNDnested] = ACTIONS(251),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(23),
    [sym_fallback] = ACTIONS(25),
    [sym_flush] = ACTIONS(25),
    [anon_sym_LT_POUNDftl] = ACTIONS(27),
    [anon_sym_LT_POUNDimport] = ACTIONS(29),
    [anon_sym_LT_POUNDinclude] = ACTIONS(31),
    [sym_lt] = ACTIONS(25),
    [sym_nt] = ACTIONS(25),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(33),
    [sym_rt] = ACTIONS(25),
    [anon_sym_LT_POUNDsetting] = ACTIONS(35),
    [sym_stop] = ACTIONS(25),
    [sym_t] = ACTIONS(25),
    [anon_sym_LT_POUNDvisit] = ACTIONS(37),
    [anon_sym_LT_POUNDassign] = ACTIONS(39),
    [sym_end_assign] = ACTIONS(41),
    [anon_sym_LT_POUNDglobal] = ACTIONS(43),
    [sym_end_global] = ACTIONS(45),
    [anon_sym_LT_POUNDlocal] = ACTIONS(47),
    [sym_end_local] = ACTIONS(49),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(589),
    [sym_comment] = ACTIONS(589),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(589),
    [anon_sym_LT_AT] = ACTIONS(589),
    [anon_sym_LT_POUNDlist] = ACTIONS(589),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(589),
    [sym_break] = ACTIONS(589),
    [sym_continue] = ACTIONS(589),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(589),
    [anon_sym_LT_POUNDitems] = ACTIONS(589),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(589),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(589),
    [anon_sym_LT_POUNDif] = ACTIONS(589),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(589),
    [anon_sym_LT_POUNDelseif] = ACTIONS(589),
    [anon_sym_LT_POUNDswitch] = ACTIONS(589),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(589),
    [anon_sym_LT_POUNDcase] = ACTIONS(589),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(589),
    [anon_sym_LT_POUNDfunction] = ACTIONS(589),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(589),
    [anon_sym_LT_POUNDreturn] = ACTIONS(589),
    [anon_sym_LT_POUNDmacro] = ACTIONS(589),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(589),
    [anon_sym_LT_POUNDnested] = ACTIONS(589),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(589),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(589),
    [sym_recover] = ACTIONS(589),
    [sym_fallback] = ACTIONS(589),
    [sym_flush] = ACTIONS(589),
    [anon_sym_LT_POUNDftl] = ACTIONS(589),
    [anon_sym_LT_POUNDimport] = ACTIONS(589),
    [anon_sym_LT_POUNDinclude] = ACTIONS(589),
    [sym_lt] = ACTIONS(589),
    [sym_nt] = ACTIONS(589),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(589),
    [sym_rt] = ACTIONS(589),
    [anon_sym_LT_POUNDsetting] = ACTIONS(589),
    [sym_stop] = ACTIONS(589),
    [sym_t] = ACTIONS(589),
    [anon_sym_LT_POUNDvisit] = ACTIONS(589),
    [anon_sym_LT_POUNDassign] = ACTIONS(589),
    [sym_end_assign] = ACTIONS(589),
    [anon_sym_LT_POUNDglobal] = ACTIONS(589),
    [sym_end_global] = ACTIONS(589),
    [anon_sym_LT_POUNDlocal] = ACTIONS(589),
    [sym_end_local] = ACTIONS(589),
  },
  [156] = {
    [sym_directive] = STATE(58),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_attempt_middle] = STATE(156),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_attempt_repeat1] = STATE(156),
    [anon_sym_LT_AT] = ACTIONS(591),
    [anon_sym_LT_POUNDlist] = ACTIONS(594),
    [anon_sym_LT_POUNDif] = ACTIONS(597),
    [anon_sym_LT_POUNDswitch] = ACTIONS(600),
    [anon_sym_LT_POUNDfunction] = ACTIONS(603),
    [anon_sym_LT_POUNDmacro] = ACTIONS(606),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(609),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(612),
    [sym_recover] = ACTIONS(614),
    [sym_fallback] = ACTIONS(617),
    [sym_flush] = ACTIONS(617),
    [anon_sym_LT_POUNDftl] = ACTIONS(620),
    [anon_sym_LT_POUNDimport] = ACTIONS(623),
    [anon_sym_LT_POUNDinclude] = ACTIONS(626),
    [sym_lt] = ACTIONS(617),
    [sym_nt] = ACTIONS(617),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(629),
    [sym_rt] = ACTIONS(617),
    [anon_sym_LT_POUNDsetting] = ACTIONS(632),
    [sym_stop] = ACTIONS(617),
    [sym_t] = ACTIONS(617),
    [anon_sym_LT_POUNDvisit] = ACTIONS(635),
    [anon_sym_LT_POUNDassign] = ACTIONS(638),
    [sym_end_assign] = ACTIONS(641),
    [anon_sym_LT_POUNDglobal] = ACTIONS(644),
    [sym_end_global] = ACTIONS(647),
    [anon_sym_LT_POUNDlocal] = ACTIONS(650),
    [sym_end_local] = ACTIONS(653),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(656),
    [sym_comment] = ACTIONS(656),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(656),
    [anon_sym_LT_AT] = ACTIONS(656),
    [anon_sym_LT_POUNDlist] = ACTIONS(656),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(656),
    [sym_break] = ACTIONS(656),
    [sym_continue] = ACTIONS(656),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(656),
    [anon_sym_LT_POUNDitems] = ACTIONS(656),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(656),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(656),
    [anon_sym_LT_POUNDif] = ACTIONS(656),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(656),
    [anon_sym_LT_POUNDelseif] = ACTIONS(656),
    [anon_sym_LT_POUNDswitch] = ACTIONS(656),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(656),
    [anon_sym_LT_POUNDcase] = ACTIONS(656),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(656),
    [anon_sym_LT_POUNDfunction] = ACTIONS(656),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(656),
    [anon_sym_LT_POUNDreturn] = ACTIONS(656),
    [anon_sym_LT_POUNDmacro] = ACTIONS(656),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(656),
    [anon_sym_LT_POUNDnested] = ACTIONS(656),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(656),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(656),
    [sym_recover] = ACTIONS(656),
    [sym_fallback] = ACTIONS(656),
    [sym_flush] = ACTIONS(656),
    [anon_sym_LT_POUNDftl] = ACTIONS(656),
    [anon_sym_LT_POUNDimport] = ACTIONS(656),
    [anon_sym_LT_POUNDinclude] = ACTIONS(656),
    [sym_lt] = ACTIONS(656),
    [sym_nt] = ACTIONS(656),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(656),
    [sym_rt] = ACTIONS(656),
    [anon_sym_LT_POUNDsetting] = ACTIONS(656),
    [sym_stop] = ACTIONS(656),
    [sym_t] = ACTIONS(656),
    [anon_sym_LT_POUNDvisit] = ACTIONS(656),
    [anon_sym_LT_POUNDassign] = ACTIONS(656),
    [sym_end_assign] = ACTIONS(656),
    [anon_sym_LT_POUNDglobal] = ACTIONS(656),
    [sym_end_global] = ACTIONS(656),
    [anon_sym_LT_POUNDlocal] = ACTIONS(656),
    [sym_end_local] = ACTIONS(656),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(658),
    [sym_comment] = ACTIONS(658),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(658),
    [anon_sym_LT_AT] = ACTIONS(658),
    [anon_sym_LT_POUNDlist] = ACTIONS(658),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(658),
    [sym_break] = ACTIONS(658),
    [sym_continue] = ACTIONS(658),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(658),
    [anon_sym_LT_POUNDitems] = ACTIONS(658),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(658),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(658),
    [anon_sym_LT_POUNDif] = ACTIONS(658),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(658),
    [anon_sym_LT_POUNDelseif] = ACTIONS(658),
    [anon_sym_LT_POUNDswitch] = ACTIONS(658),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(658),
    [anon_sym_LT_POUNDcase] = ACTIONS(658),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(658),
    [anon_sym_LT_POUNDfunction] = ACTIONS(658),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(658),
    [anon_sym_LT_POUNDreturn] = ACTIONS(658),
    [anon_sym_LT_POUNDmacro] = ACTIONS(658),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(658),
    [anon_sym_LT_POUNDnested] = ACTIONS(658),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(658),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(658),
    [sym_recover] = ACTIONS(658),
    [sym_fallback] = ACTIONS(658),
    [sym_flush] = ACTIONS(658),
    [anon_sym_LT_POUNDftl] = ACTIONS(658),
    [anon_sym_LT_POUNDimport] = ACTIONS(658),
    [anon_sym_LT_POUNDinclude] = ACTIONS(658),
    [sym_lt] = ACTIONS(658),
    [sym_nt] = ACTIONS(658),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(658),
    [sym_rt] = ACTIONS(658),
    [anon_sym_LT_POUNDsetting] = ACTIONS(658),
    [sym_stop] = ACTIONS(658),
    [sym_t] = ACTIONS(658),
    [anon_sym_LT_POUNDvisit] = ACTIONS(658),
    [anon_sym_LT_POUNDassign] = ACTIONS(658),
    [sym_end_assign] = ACTIONS(658),
    [anon_sym_LT_POUNDglobal] = ACTIONS(658),
    [sym_end_global] = ACTIONS(658),
    [anon_sym_LT_POUNDlocal] = ACTIONS(658),
    [sym_end_local] = ACTIONS(658),
  },
  [159] = {
    [ts_builtin_sym_end] = ACTIONS(660),
    [sym_comment] = ACTIONS(660),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(660),
    [anon_sym_LT_AT] = ACTIONS(660),
    [anon_sym_LT_POUNDlist] = ACTIONS(660),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(660),
    [sym_break] = ACTIONS(660),
    [sym_continue] = ACTIONS(660),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(660),
    [anon_sym_LT_POUNDitems] = ACTIONS(660),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(660),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(660),
    [anon_sym_LT_POUNDif] = ACTIONS(660),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(660),
    [anon_sym_LT_POUNDelseif] = ACTIONS(660),
    [anon_sym_LT_POUNDswitch] = ACTIONS(660),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(660),
    [anon_sym_LT_POUNDcase] = ACTIONS(660),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(660),
    [anon_sym_LT_POUNDfunction] = ACTIONS(660),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(660),
    [anon_sym_LT_POUNDreturn] = ACTIONS(660),
    [anon_sym_LT_POUNDmacro] = ACTIONS(660),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(660),
    [anon_sym_LT_POUNDnested] = ACTIONS(660),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(660),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(660),
    [sym_recover] = ACTIONS(660),
    [sym_fallback] = ACTIONS(660),
    [sym_flush] = ACTIONS(660),
    [anon_sym_LT_POUNDftl] = ACTIONS(660),
    [anon_sym_LT_POUNDimport] = ACTIONS(660),
    [anon_sym_LT_POUNDinclude] = ACTIONS(660),
    [sym_lt] = ACTIONS(660),
    [sym_nt] = ACTIONS(660),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(660),
    [sym_rt] = ACTIONS(660),
    [anon_sym_LT_POUNDsetting] = ACTIONS(660),
    [sym_stop] = ACTIONS(660),
    [sym_t] = ACTIONS(660),
    [anon_sym_LT_POUNDvisit] = ACTIONS(660),
    [anon_sym_LT_POUNDassign] = ACTIONS(660),
    [sym_end_assign] = ACTIONS(660),
    [anon_sym_LT_POUNDglobal] = ACTIONS(660),
    [sym_end_global] = ACTIONS(660),
    [anon_sym_LT_POUNDlocal] = ACTIONS(660),
    [sym_end_local] = ACTIONS(660),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(662),
    [sym_comment] = ACTIONS(662),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(662),
    [anon_sym_LT_AT] = ACTIONS(662),
    [anon_sym_LT_POUNDlist] = ACTIONS(662),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(662),
    [sym_break] = ACTIONS(662),
    [sym_continue] = ACTIONS(662),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(662),
    [anon_sym_LT_POUNDitems] = ACTIONS(662),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(662),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(662),
    [anon_sym_LT_POUNDif] = ACTIONS(662),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(662),
    [anon_sym_LT_POUNDelseif] = ACTIONS(662),
    [anon_sym_LT_POUNDswitch] = ACTIONS(662),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(662),
    [anon_sym_LT_POUNDcase] = ACTIONS(662),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(662),
    [anon_sym_LT_POUNDfunction] = ACTIONS(662),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(662),
    [anon_sym_LT_POUNDreturn] = ACTIONS(662),
    [anon_sym_LT_POUNDmacro] = ACTIONS(662),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(662),
    [anon_sym_LT_POUNDnested] = ACTIONS(662),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(662),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(662),
    [sym_recover] = ACTIONS(662),
    [sym_fallback] = ACTIONS(662),
    [sym_flush] = ACTIONS(662),
    [anon_sym_LT_POUNDftl] = ACTIONS(662),
    [anon_sym_LT_POUNDimport] = ACTIONS(662),
    [anon_sym_LT_POUNDinclude] = ACTIONS(662),
    [sym_lt] = ACTIONS(662),
    [sym_nt] = ACTIONS(662),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(662),
    [sym_rt] = ACTIONS(662),
    [anon_sym_LT_POUNDsetting] = ACTIONS(662),
    [sym_stop] = ACTIONS(662),
    [sym_t] = ACTIONS(662),
    [anon_sym_LT_POUNDvisit] = ACTIONS(662),
    [anon_sym_LT_POUNDassign] = ACTIONS(662),
    [sym_end_assign] = ACTIONS(662),
    [anon_sym_LT_POUNDglobal] = ACTIONS(662),
    [sym_end_global] = ACTIONS(662),
    [anon_sym_LT_POUNDlocal] = ACTIONS(662),
    [sym_end_local] = ACTIONS(662),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(664),
    [sym_comment] = ACTIONS(664),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(664),
    [anon_sym_LT_AT] = ACTIONS(664),
    [anon_sym_LT_POUNDlist] = ACTIONS(664),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(664),
    [sym_break] = ACTIONS(664),
    [sym_continue] = ACTIONS(664),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(664),
    [anon_sym_LT_POUNDitems] = ACTIONS(664),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(664),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(664),
    [anon_sym_LT_POUNDif] = ACTIONS(664),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(664),
    [anon_sym_LT_POUNDelseif] = ACTIONS(664),
    [anon_sym_LT_POUNDswitch] = ACTIONS(664),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(664),
    [anon_sym_LT_POUNDcase] = ACTIONS(664),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(664),
    [anon_sym_LT_POUNDfunction] = ACTIONS(664),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(664),
    [anon_sym_LT_POUNDreturn] = ACTIONS(664),
    [anon_sym_LT_POUNDmacro] = ACTIONS(664),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(664),
    [anon_sym_LT_POUNDnested] = ACTIONS(664),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(664),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(664),
    [sym_recover] = ACTIONS(664),
    [sym_fallback] = ACTIONS(664),
    [sym_flush] = ACTIONS(664),
    [anon_sym_LT_POUNDftl] = ACTIONS(664),
    [anon_sym_LT_POUNDimport] = ACTIONS(664),
    [anon_sym_LT_POUNDinclude] = ACTIONS(664),
    [sym_lt] = ACTIONS(664),
    [sym_nt] = ACTIONS(664),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(664),
    [sym_rt] = ACTIONS(664),
    [anon_sym_LT_POUNDsetting] = ACTIONS(664),
    [sym_stop] = ACTIONS(664),
    [sym_t] = ACTIONS(664),
    [anon_sym_LT_POUNDvisit] = ACTIONS(664),
    [anon_sym_LT_POUNDassign] = ACTIONS(664),
    [sym_end_assign] = ACTIONS(664),
    [anon_sym_LT_POUNDglobal] = ACTIONS(664),
    [sym_end_global] = ACTIONS(664),
    [anon_sym_LT_POUNDlocal] = ACTIONS(664),
    [sym_end_local] = ACTIONS(664),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(666),
    [sym_comment] = ACTIONS(666),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(666),
    [anon_sym_LT_AT] = ACTIONS(666),
    [anon_sym_LT_POUNDlist] = ACTIONS(666),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(666),
    [sym_break] = ACTIONS(666),
    [sym_continue] = ACTIONS(666),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(666),
    [anon_sym_LT_POUNDitems] = ACTIONS(666),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(666),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(666),
    [anon_sym_LT_POUNDif] = ACTIONS(666),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(666),
    [anon_sym_LT_POUNDelseif] = ACTIONS(666),
    [anon_sym_LT_POUNDswitch] = ACTIONS(666),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(666),
    [anon_sym_LT_POUNDcase] = ACTIONS(666),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(666),
    [anon_sym_LT_POUNDfunction] = ACTIONS(666),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(666),
    [anon_sym_LT_POUNDreturn] = ACTIONS(666),
    [anon_sym_LT_POUNDmacro] = ACTIONS(666),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(666),
    [anon_sym_LT_POUNDnested] = ACTIONS(666),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(666),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(666),
    [sym_recover] = ACTIONS(666),
    [sym_fallback] = ACTIONS(666),
    [sym_flush] = ACTIONS(666),
    [anon_sym_LT_POUNDftl] = ACTIONS(666),
    [anon_sym_LT_POUNDimport] = ACTIONS(666),
    [anon_sym_LT_POUNDinclude] = ACTIONS(666),
    [sym_lt] = ACTIONS(666),
    [sym_nt] = ACTIONS(666),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(666),
    [sym_rt] = ACTIONS(666),
    [anon_sym_LT_POUNDsetting] = ACTIONS(666),
    [sym_stop] = ACTIONS(666),
    [sym_t] = ACTIONS(666),
    [anon_sym_LT_POUNDvisit] = ACTIONS(666),
    [anon_sym_LT_POUNDassign] = ACTIONS(666),
    [sym_end_assign] = ACTIONS(666),
    [anon_sym_LT_POUNDglobal] = ACTIONS(666),
    [sym_end_global] = ACTIONS(666),
    [anon_sym_LT_POUNDlocal] = ACTIONS(666),
    [sym_end_local] = ACTIONS(666),
  },
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(668),
    [sym_comment] = ACTIONS(668),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(668),
    [anon_sym_LT_AT] = ACTIONS(668),
    [anon_sym_LT_POUNDlist] = ACTIONS(668),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(668),
    [sym_break] = ACTIONS(668),
    [sym_continue] = ACTIONS(668),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(668),
    [anon_sym_LT_POUNDitems] = ACTIONS(668),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(668),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(668),
    [anon_sym_LT_POUNDif] = ACTIONS(668),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(668),
    [anon_sym_LT_POUNDelseif] = ACTIONS(668),
    [anon_sym_LT_POUNDswitch] = ACTIONS(668),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(668),
    [anon_sym_LT_POUNDcase] = ACTIONS(668),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(668),
    [anon_sym_LT_POUNDfunction] = ACTIONS(668),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(668),
    [anon_sym_LT_POUNDreturn] = ACTIONS(668),
    [anon_sym_LT_POUNDmacro] = ACTIONS(668),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(668),
    [anon_sym_LT_POUNDnested] = ACTIONS(668),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(668),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(668),
    [sym_recover] = ACTIONS(668),
    [sym_fallback] = ACTIONS(668),
    [sym_flush] = ACTIONS(668),
    [anon_sym_LT_POUNDftl] = ACTIONS(668),
    [anon_sym_LT_POUNDimport] = ACTIONS(668),
    [anon_sym_LT_POUNDinclude] = ACTIONS(668),
    [sym_lt] = ACTIONS(668),
    [sym_nt] = ACTIONS(668),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(668),
    [sym_rt] = ACTIONS(668),
    [anon_sym_LT_POUNDsetting] = ACTIONS(668),
    [sym_stop] = ACTIONS(668),
    [sym_t] = ACTIONS(668),
    [anon_sym_LT_POUNDvisit] = ACTIONS(668),
    [anon_sym_LT_POUNDassign] = ACTIONS(668),
    [sym_end_assign] = ACTIONS(668),
    [anon_sym_LT_POUNDglobal] = ACTIONS(668),
    [sym_end_global] = ACTIONS(668),
    [anon_sym_LT_POUNDlocal] = ACTIONS(668),
    [sym_end_local] = ACTIONS(668),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(670),
    [sym_comment] = ACTIONS(670),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(670),
    [anon_sym_LT_AT] = ACTIONS(670),
    [anon_sym_LT_POUNDlist] = ACTIONS(670),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(670),
    [sym_break] = ACTIONS(670),
    [sym_continue] = ACTIONS(670),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(670),
    [anon_sym_LT_POUNDitems] = ACTIONS(670),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(670),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(670),
    [anon_sym_LT_POUNDif] = ACTIONS(670),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(670),
    [anon_sym_LT_POUNDelseif] = ACTIONS(670),
    [anon_sym_LT_POUNDswitch] = ACTIONS(670),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(670),
    [anon_sym_LT_POUNDcase] = ACTIONS(670),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(670),
    [anon_sym_LT_POUNDfunction] = ACTIONS(670),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(670),
    [anon_sym_LT_POUNDreturn] = ACTIONS(670),
    [anon_sym_LT_POUNDmacro] = ACTIONS(670),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(670),
    [anon_sym_LT_POUNDnested] = ACTIONS(670),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(670),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(670),
    [sym_recover] = ACTIONS(670),
    [sym_fallback] = ACTIONS(670),
    [sym_flush] = ACTIONS(670),
    [anon_sym_LT_POUNDftl] = ACTIONS(670),
    [anon_sym_LT_POUNDimport] = ACTIONS(670),
    [anon_sym_LT_POUNDinclude] = ACTIONS(670),
    [sym_lt] = ACTIONS(670),
    [sym_nt] = ACTIONS(670),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(670),
    [sym_rt] = ACTIONS(670),
    [anon_sym_LT_POUNDsetting] = ACTIONS(670),
    [sym_stop] = ACTIONS(670),
    [sym_t] = ACTIONS(670),
    [anon_sym_LT_POUNDvisit] = ACTIONS(670),
    [anon_sym_LT_POUNDassign] = ACTIONS(670),
    [sym_end_assign] = ACTIONS(670),
    [anon_sym_LT_POUNDglobal] = ACTIONS(670),
    [sym_end_global] = ACTIONS(670),
    [anon_sym_LT_POUNDlocal] = ACTIONS(670),
    [sym_end_local] = ACTIONS(670),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(672),
    [sym_comment] = ACTIONS(672),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(672),
    [anon_sym_LT_AT] = ACTIONS(672),
    [anon_sym_LT_POUNDlist] = ACTIONS(672),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(672),
    [sym_break] = ACTIONS(672),
    [sym_continue] = ACTIONS(672),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(672),
    [anon_sym_LT_POUNDitems] = ACTIONS(672),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(672),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(672),
    [anon_sym_LT_POUNDif] = ACTIONS(672),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(672),
    [anon_sym_LT_POUNDelseif] = ACTIONS(672),
    [anon_sym_LT_POUNDswitch] = ACTIONS(672),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(672),
    [anon_sym_LT_POUNDcase] = ACTIONS(672),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(672),
    [anon_sym_LT_POUNDfunction] = ACTIONS(672),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(672),
    [anon_sym_LT_POUNDreturn] = ACTIONS(672),
    [anon_sym_LT_POUNDmacro] = ACTIONS(672),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(672),
    [anon_sym_LT_POUNDnested] = ACTIONS(672),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(672),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(672),
    [sym_recover] = ACTIONS(672),
    [sym_fallback] = ACTIONS(672),
    [sym_flush] = ACTIONS(672),
    [anon_sym_LT_POUNDftl] = ACTIONS(672),
    [anon_sym_LT_POUNDimport] = ACTIONS(672),
    [anon_sym_LT_POUNDinclude] = ACTIONS(672),
    [sym_lt] = ACTIONS(672),
    [sym_nt] = ACTIONS(672),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(672),
    [sym_rt] = ACTIONS(672),
    [anon_sym_LT_POUNDsetting] = ACTIONS(672),
    [sym_stop] = ACTIONS(672),
    [sym_t] = ACTIONS(672),
    [anon_sym_LT_POUNDvisit] = ACTIONS(672),
    [anon_sym_LT_POUNDassign] = ACTIONS(672),
    [sym_end_assign] = ACTIONS(672),
    [anon_sym_LT_POUNDglobal] = ACTIONS(672),
    [sym_end_global] = ACTIONS(672),
    [anon_sym_LT_POUNDlocal] = ACTIONS(672),
    [sym_end_local] = ACTIONS(672),
  },
  [166] = {
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(674),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(674),
    [sym_number] = ACTIONS(676),
    [anon_sym_true] = ACTIONS(676),
    [anon_sym_LBRACK] = ACTIONS(674),
    [anon_sym_RBRACK] = ACTIONS(674),
    [anon_sym_LBRACE] = ACTIONS(674),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(674),
  },
  [167] = {
    [sym_type] = STATE(251),
    [sym_string] = STATE(107),
    [sym_boolean] = STATE(107),
    [sym_sequence] = STATE(107),
    [sym_hash] = STATE(107),
    [sym_top_level] = STATE(107),
    [sym_spec_var] = STATE(107),
    [aux_sym_as_expression_repeat2] = STATE(251),
    [anon_sym_COMMA] = ACTIONS(428),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(185),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(185),
    [sym_number] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_RBRACK] = ACTIONS(428),
    [anon_sym_LBRACE] = ACTIONS(193),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(195),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(197),
  },
  [168] = {
    [sym_type] = STATE(168),
    [sym_string] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_sequence] = STATE(27),
    [sym_hash] = STATE(27),
    [sym_top_level] = STATE(27),
    [sym_spec_var] = STATE(27),
    [aux_sym_as_expression_repeat1] = STATE(168),
    [anon_sym_using] = ACTIONS(432),
    [anon_sym_COMMA] = ACTIONS(430),
    [anon_sym_DOT_DOT] = ACTIONS(432),
    [anon_sym_DOT_DOT_LT] = ACTIONS(430),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(430),
    [anon_sym_COLON] = ACTIONS(430),
    [anon_sym_STAR] = ACTIONS(432),
    [anon_sym_PLUS] = ACTIONS(432),
    [anon_sym_SLASH] = ACTIONS(432),
    [anon_sym_DASH] = ACTIONS(432),
    [anon_sym_PERCENT] = ACTIONS(432),
    [anon_sym_EQ_EQ] = ACTIONS(430),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_LT] = ACTIONS(432),
    [anon_sym_LT_EQ] = ACTIONS(430),
    [anon_sym_lt] = ACTIONS(432),
    [anon_sym_lte] = ACTIONS(432),
    [anon_sym_gt] = ACTIONS(432),
    [anon_sym_gte] = ACTIONS(432),
    [anon_sym_BANG] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(430),
    [anon_sym_PIPE_PIPE] = ACTIONS(430),
    [anon_sym_QMARK_QMARK] = ACTIONS(430),
    [anon_sym_EQ] = ACTIONS(432),
    [anon_sym_PLUS_EQ] = ACTIONS(430),
    [anon_sym_DASH_EQ] = ACTIONS(430),
    [anon_sym_STAR_EQ] = ACTIONS(430),
    [anon_sym_SLASH_EQ] = ACTIONS(430),
    [anon_sym_PERCENT_EQ] = ACTIONS(430),
    [anon_sym_PLUS_PLUS] = ACTIONS(430),
    [anon_sym_DASH_DASH] = ACTIONS(430),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(434),
    [sym_number] = ACTIONS(437),
    [anon_sym_true] = ACTIONS(440),
    [anon_sym_LBRACK] = ACTIONS(443),
    [anon_sym_RBRACK] = ACTIONS(430),
    [anon_sym_LBRACE] = ACTIONS(446),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(449),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(452),
  },
  [169] = {
    [sym_type] = STATE(252),
    [sym_string] = STATE(107),
    [sym_boolean] = STATE(107),
    [sym_sequence] = STATE(107),
    [sym_hash] = STATE(107),
    [sym_top_level] = STATE(107),
    [sym_spec_var] = STATE(107),
    [aux_sym_as_expression_repeat2] = STATE(252),
    [anon_sym_COMMA] = ACTIONS(428),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(428),
    [sym_number] = ACTIONS(455),
    [anon_sym_true] = ACTIONS(455),
    [anon_sym_LBRACK] = ACTIONS(428),
    [anon_sym_RBRACK] = ACTIONS(428),
    [anon_sym_LBRACE] = ACTIONS(428),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(428),
  },
  [170] = {
    [anon_sym_RBRACE] = ACTIONS(678),
    [anon_sym_using] = ACTIONS(680),
    [anon_sym_COMMA] = ACTIONS(678),
    [anon_sym_DOT_DOT] = ACTIONS(680),
    [anon_sym_DOT_DOT_LT] = ACTIONS(678),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(678),
    [anon_sym_COLON] = ACTIONS(678),
    [anon_sym_STAR] = ACTIONS(680),
    [anon_sym_PLUS] = ACTIONS(680),
    [anon_sym_SLASH] = ACTIONS(680),
    [anon_sym_DASH] = ACTIONS(680),
    [anon_sym_PERCENT] = ACTIONS(680),
    [anon_sym_EQ_EQ] = ACTIONS(678),
    [anon_sym_BANG_EQ] = ACTIONS(678),
    [anon_sym_LT] = ACTIONS(680),
    [anon_sym_LT_EQ] = ACTIONS(678),
    [anon_sym_lt] = ACTIONS(680),
    [anon_sym_lte] = ACTIONS(680),
    [anon_sym_gt] = ACTIONS(680),
    [anon_sym_gte] = ACTIONS(680),
    [anon_sym_BANG] = ACTIONS(680),
    [anon_sym_AMP_AMP] = ACTIONS(678),
    [anon_sym_PIPE_PIPE] = ACTIONS(678),
    [anon_sym_QMARK_QMARK] = ACTIONS(678),
    [anon_sym_EQ] = ACTIONS(680),
    [anon_sym_PLUS_EQ] = ACTIONS(678),
    [anon_sym_DASH_EQ] = ACTIONS(678),
    [anon_sym_STAR_EQ] = ACTIONS(678),
    [anon_sym_SLASH_EQ] = ACTIONS(678),
    [anon_sym_PERCENT_EQ] = ACTIONS(678),
    [anon_sym_PLUS_PLUS] = ACTIONS(678),
    [anon_sym_DASH_DASH] = ACTIONS(678),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(678),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(678),
    [sym_number] = ACTIONS(680),
    [anon_sym_true] = ACTIONS(680),
    [anon_sym_LBRACK] = ACTIONS(678),
    [anon_sym_RBRACK] = ACTIONS(678),
    [anon_sym_LBRACE] = ACTIONS(678),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(678),
  },
  [171] = {
    [sym_expression] = STATE(81),
    [sym_type] = STATE(82),
    [sym_string] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_sequence] = STATE(27),
    [sym_hash] = STATE(27),
    [sym_top_level] = STATE(27),
    [sym_spec_var] = STATE(27),
    [aux_sym_as_expression_repeat1] = STATE(82),
    [aux_sym_sequence_repeat1] = STATE(171),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(682),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(682),
    [sym_number] = ACTIONS(685),
    [anon_sym_true] = ACTIONS(688),
    [anon_sym_LBRACK] = ACTIONS(691),
    [anon_sym_RBRACK] = ACTIONS(674),
    [anon_sym_LBRACE] = ACTIONS(694),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(697),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(700),
  },
  [172] = {
    [anon_sym_RBRACE] = ACTIONS(703),
    [anon_sym_using] = ACTIONS(705),
    [anon_sym_COMMA] = ACTIONS(703),
    [anon_sym_DOT_DOT] = ACTIONS(705),
    [anon_sym_DOT_DOT_LT] = ACTIONS(703),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(703),
    [anon_sym_COLON] = ACTIONS(703),
    [anon_sym_STAR] = ACTIONS(705),
    [anon_sym_PLUS] = ACTIONS(705),
    [anon_sym_SLASH] = ACTIONS(705),
    [anon_sym_DASH] = ACTIONS(705),
    [anon_sym_PERCENT] = ACTIONS(705),
    [anon_sym_EQ_EQ] = ACTIONS(703),
    [anon_sym_BANG_EQ] = ACTIONS(703),
    [anon_sym_LT] = ACTIONS(705),
    [anon_sym_LT_EQ] = ACTIONS(703),
    [anon_sym_lt] = ACTIONS(705),
    [anon_sym_lte] = ACTIONS(705),
    [anon_sym_gt] = ACTIONS(705),
    [anon_sym_gte] = ACTIONS(705),
    [anon_sym_BANG] = ACTIONS(705),
    [anon_sym_AMP_AMP] = ACTIONS(703),
    [anon_sym_PIPE_PIPE] = ACTIONS(703),
    [anon_sym_QMARK_QMARK] = ACTIONS(703),
    [anon_sym_EQ] = ACTIONS(705),
    [anon_sym_PLUS_EQ] = ACTIONS(703),
    [anon_sym_DASH_EQ] = ACTIONS(703),
    [anon_sym_STAR_EQ] = ACTIONS(703),
    [anon_sym_SLASH_EQ] = ACTIONS(703),
    [anon_sym_PERCENT_EQ] = ACTIONS(703),
    [anon_sym_PLUS_PLUS] = ACTIONS(703),
    [anon_sym_DASH_DASH] = ACTIONS(703),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(703),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(703),
    [sym_number] = ACTIONS(705),
    [anon_sym_true] = ACTIONS(705),
    [anon_sym_LBRACK] = ACTIONS(703),
    [anon_sym_RBRACK] = ACTIONS(703),
    [anon_sym_LBRACE] = ACTIONS(703),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(703),
  },
  [173] = {
    [sym_type] = STATE(253),
    [sym_string] = STATE(129),
    [sym_boolean] = STATE(129),
    [sym_sequence] = STATE(129),
    [sym_hash] = STATE(129),
    [sym_top_level] = STATE(129),
    [sym_spec_var] = STATE(129),
    [aux_sym_as_expression_repeat2] = STATE(253),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(217),
    [sym_number] = ACTIONS(219),
    [anon_sym_true] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(225),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(229),
  },
  [174] = {
    [anon_sym_RBRACE] = ACTIONS(707),
    [anon_sym_LPAREN] = ACTIONS(707),
    [anon_sym_using] = ACTIONS(709),
    [anon_sym_COMMA] = ACTIONS(707),
    [anon_sym_DOT_DOT] = ACTIONS(709),
    [anon_sym_DOT_DOT_LT] = ACTIONS(707),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(707),
    [anon_sym_COLON] = ACTIONS(707),
    [anon_sym_STAR] = ACTIONS(709),
    [anon_sym_PLUS] = ACTIONS(709),
    [anon_sym_SLASH] = ACTIONS(709),
    [anon_sym_DASH] = ACTIONS(709),
    [anon_sym_PERCENT] = ACTIONS(709),
    [anon_sym_EQ_EQ] = ACTIONS(707),
    [anon_sym_BANG_EQ] = ACTIONS(707),
    [anon_sym_LT] = ACTIONS(709),
    [anon_sym_LT_EQ] = ACTIONS(707),
    [anon_sym_lt] = ACTIONS(709),
    [anon_sym_lte] = ACTIONS(709),
    [anon_sym_gt] = ACTIONS(709),
    [anon_sym_gte] = ACTIONS(709),
    [anon_sym_BANG] = ACTIONS(709),
    [anon_sym_AMP_AMP] = ACTIONS(707),
    [anon_sym_PIPE_PIPE] = ACTIONS(707),
    [anon_sym_QMARK_QMARK] = ACTIONS(707),
    [anon_sym_EQ] = ACTIONS(709),
    [anon_sym_PLUS_EQ] = ACTIONS(707),
    [anon_sym_DASH_EQ] = ACTIONS(707),
    [anon_sym_STAR_EQ] = ACTIONS(707),
    [anon_sym_SLASH_EQ] = ACTIONS(707),
    [anon_sym_PERCENT_EQ] = ACTIONS(707),
    [anon_sym_PLUS_PLUS] = ACTIONS(707),
    [anon_sym_DASH_DASH] = ACTIONS(707),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(707),
    [sym_number] = ACTIONS(709),
    [anon_sym_true] = ACTIONS(709),
    [anon_sym_LBRACK] = ACTIONS(707),
    [anon_sym_RBRACK] = ACTIONS(707),
    [anon_sym_LBRACE] = ACTIONS(707),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(707),
    [anon_sym_GT] = ACTIONS(707),
  },
  [175] = {
    [sym_type] = STATE(256),
    [sym_operator] = STATE(255),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(256),
    [aux_sym_as_expression_repeat2] = STATE(257),
    [anon_sym_as] = ACTIONS(711),
    [anon_sym_QMARK] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(159),
    [anon_sym_using] = ACTIONS(235),
    [anon_sym_COMMA] = ACTIONS(237),
    [anon_sym_DOT_DOT] = ACTIONS(235),
    [anon_sym_DOT_DOT_LT] = ACTIONS(237),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(237),
    [anon_sym_COLON] = ACTIONS(237),
    [anon_sym_STAR] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(235),
    [anon_sym_DASH] = ACTIONS(235),
    [anon_sym_PERCENT] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(237),
    [anon_sym_BANG_EQ] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(235),
    [anon_sym_LT_EQ] = ACTIONS(237),
    [anon_sym_lt] = ACTIONS(235),
    [anon_sym_lte] = ACTIONS(235),
    [anon_sym_gt] = ACTIONS(235),
    [anon_sym_gte] = ACTIONS(235),
    [anon_sym_BANG] = ACTIONS(235),
    [anon_sym_AMP_AMP] = ACTIONS(237),
    [anon_sym_PIPE_PIPE] = ACTIONS(237),
    [anon_sym_QMARK_QMARK] = ACTIONS(237),
    [anon_sym_EQ] = ACTIONS(235),
    [anon_sym_PLUS_EQ] = ACTIONS(237),
    [anon_sym_DASH_EQ] = ACTIONS(237),
    [anon_sym_STAR_EQ] = ACTIONS(237),
    [anon_sym_SLASH_EQ] = ACTIONS(237),
    [anon_sym_PERCENT_EQ] = ACTIONS(237),
    [anon_sym_PLUS_PLUS] = ACTIONS(237),
    [anon_sym_DASH_DASH] = ACTIONS(237),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(159),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(159),
    [sym_number] = ACTIONS(165),
    [anon_sym_true] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_LBRACE] = ACTIONS(159),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(165),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(159),
  },
  [176] = {
    [sym_parameter_group] = STATE(259),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(175),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(175),
    [aux_sym_group_repeat1] = STATE(259),
    [anon_sym_as] = ACTIONS(387),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(713),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
  },
  [177] = {
    [sym_type] = STATE(178),
    [sym_string] = STATE(107),
    [sym_boolean] = STATE(107),
    [sym_sequence] = STATE(107),
    [sym_hash] = STATE(107),
    [sym_top_level] = STATE(107),
    [sym_spec_var] = STATE(107),
    [aux_sym_as_expression_repeat2] = STATE(178),
    [anon_sym_RBRACE] = ACTIONS(715),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(715),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(715),
    [sym_number] = ACTIONS(717),
    [anon_sym_true] = ACTIONS(717),
    [anon_sym_LBRACK] = ACTIONS(715),
    [anon_sym_LBRACE] = ACTIONS(715),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(715),
  },
  [178] = {
    [sym_type] = STATE(178),
    [sym_string] = STATE(107),
    [sym_boolean] = STATE(107),
    [sym_sequence] = STATE(107),
    [sym_hash] = STATE(107),
    [sym_top_level] = STATE(107),
    [sym_spec_var] = STATE(107),
    [aux_sym_as_expression_repeat2] = STATE(178),
    [anon_sym_RBRACE] = ACTIONS(719),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(721),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(721),
    [sym_number] = ACTIONS(724),
    [anon_sym_true] = ACTIONS(727),
    [anon_sym_LBRACK] = ACTIONS(730),
    [anon_sym_LBRACE] = ACTIONS(733),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(739),
  },
  [179] = {
    [sym_type] = STATE(260),
    [sym_string] = STATE(129),
    [sym_boolean] = STATE(129),
    [sym_sequence] = STATE(129),
    [sym_hash] = STATE(129),
    [sym_top_level] = STATE(129),
    [sym_spec_var] = STATE(129),
    [aux_sym_as_expression_repeat2] = STATE(260),
    [anon_sym_as] = ACTIONS(528),
    [anon_sym_QMARK] = ACTIONS(479),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(479),
    [sym_number] = ACTIONS(528),
    [anon_sym_true] = ACTIONS(528),
    [anon_sym_LBRACK] = ACTIONS(479),
    [anon_sym_LBRACE] = ACTIONS(479),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(528),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(479),
    [anon_sym_GT] = ACTIONS(479),
    [anon_sym_SLASH_GT] = ACTIONS(479),
  },
  [180] = {
    [anon_sym_as] = ACTIONS(367),
    [anon_sym_QMARK] = ACTIONS(367),
    [anon_sym_using] = ACTIONS(367),
    [anon_sym_COMMA] = ACTIONS(365),
    [anon_sym_DOT_DOT] = ACTIONS(367),
    [anon_sym_DOT_DOT_LT] = ACTIONS(365),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(365),
    [anon_sym_STAR] = ACTIONS(367),
    [anon_sym_PLUS] = ACTIONS(367),
    [anon_sym_SLASH] = ACTIONS(367),
    [anon_sym_DASH] = ACTIONS(367),
    [anon_sym_PERCENT] = ACTIONS(367),
    [anon_sym_EQ_EQ] = ACTIONS(365),
    [anon_sym_BANG_EQ] = ACTIONS(365),
    [anon_sym_LT] = ACTIONS(367),
    [anon_sym_LT_EQ] = ACTIONS(365),
    [anon_sym_lt] = ACTIONS(367),
    [anon_sym_lte] = ACTIONS(367),
    [anon_sym_gt] = ACTIONS(367),
    [anon_sym_gte] = ACTIONS(367),
    [anon_sym_BANG] = ACTIONS(367),
    [anon_sym_AMP_AMP] = ACTIONS(365),
    [anon_sym_PIPE_PIPE] = ACTIONS(365),
    [anon_sym_QMARK_QMARK] = ACTIONS(365),
    [anon_sym_EQ] = ACTIONS(367),
    [anon_sym_PLUS_EQ] = ACTIONS(365),
    [anon_sym_DASH_EQ] = ACTIONS(365),
    [anon_sym_STAR_EQ] = ACTIONS(365),
    [anon_sym_SLASH_EQ] = ACTIONS(365),
    [anon_sym_PERCENT_EQ] = ACTIONS(365),
    [anon_sym_PLUS_PLUS] = ACTIONS(365),
    [anon_sym_DASH_DASH] = ACTIONS(365),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(365),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(365),
    [sym_number] = ACTIONS(367),
    [anon_sym_true] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_LBRACE] = ACTIONS(365),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(365),
    [anon_sym_GT] = ACTIONS(365),
    [anon_sym_SLASH_GT] = ACTIONS(365),
  },
  [181] = {
    [anon_sym_as] = ACTIONS(371),
    [anon_sym_QMARK] = ACTIONS(371),
    [anon_sym_using] = ACTIONS(371),
    [anon_sym_COMMA] = ACTIONS(369),
    [anon_sym_DOT_DOT] = ACTIONS(371),
    [anon_sym_DOT_DOT_LT] = ACTIONS(369),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(369),
    [anon_sym_COLON] = ACTIONS(369),
    [anon_sym_STAR] = ACTIONS(371),
    [anon_sym_PLUS] = ACTIONS(371),
    [anon_sym_SLASH] = ACTIONS(371),
    [anon_sym_DASH] = ACTIONS(371),
    [anon_sym_PERCENT] = ACTIONS(371),
    [anon_sym_EQ_EQ] = ACTIONS(369),
    [anon_sym_BANG_EQ] = ACTIONS(369),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_LT_EQ] = ACTIONS(369),
    [anon_sym_lt] = ACTIONS(371),
    [anon_sym_lte] = ACTIONS(371),
    [anon_sym_gt] = ACTIONS(371),
    [anon_sym_gte] = ACTIONS(371),
    [anon_sym_BANG] = ACTIONS(371),
    [anon_sym_AMP_AMP] = ACTIONS(369),
    [anon_sym_PIPE_PIPE] = ACTIONS(369),
    [anon_sym_QMARK_QMARK] = ACTIONS(369),
    [anon_sym_EQ] = ACTIONS(371),
    [anon_sym_PLUS_EQ] = ACTIONS(369),
    [anon_sym_DASH_EQ] = ACTIONS(369),
    [anon_sym_STAR_EQ] = ACTIONS(369),
    [anon_sym_SLASH_EQ] = ACTIONS(369),
    [anon_sym_PERCENT_EQ] = ACTIONS(369),
    [anon_sym_PLUS_PLUS] = ACTIONS(369),
    [anon_sym_DASH_DASH] = ACTIONS(369),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(369),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(369),
    [sym_number] = ACTIONS(371),
    [anon_sym_true] = ACTIONS(371),
    [anon_sym_LBRACK] = ACTIONS(369),
    [anon_sym_LBRACE] = ACTIONS(369),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(369),
    [anon_sym_SLASH_GT] = ACTIONS(369),
  },
  [182] = {
    [sym_expression] = STATE(81),
    [sym_type] = STATE(82),
    [sym_string] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_sequence] = STATE(27),
    [sym_hash] = STATE(27),
    [sym_top_level] = STATE(27),
    [sym_spec_var] = STATE(27),
    [aux_sym_as_expression_repeat1] = STATE(82),
    [aux_sym_sequence_repeat1] = STATE(171),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(53),
    [sym_number] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(742),
    [anon_sym_LBRACE] = ACTIONS(61),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(65),
  },
  [183] = {
    [anon_sym_as] = ACTIONS(383),
    [anon_sym_QMARK] = ACTIONS(383),
    [anon_sym_using] = ACTIONS(383),
    [anon_sym_COMMA] = ACTIONS(381),
    [anon_sym_DOT_DOT] = ACTIONS(383),
    [anon_sym_DOT_DOT_LT] = ACTIONS(381),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(381),
    [anon_sym_COLON] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_PLUS] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_DASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_EQ_EQ] = ACTIONS(381),
    [anon_sym_BANG_EQ] = ACTIONS(381),
    [anon_sym_LT] = ACTIONS(383),
    [anon_sym_LT_EQ] = ACTIONS(381),
    [anon_sym_lt] = ACTIONS(383),
    [anon_sym_lte] = ACTIONS(383),
    [anon_sym_gt] = ACTIONS(383),
    [anon_sym_gte] = ACTIONS(383),
    [anon_sym_BANG] = ACTIONS(383),
    [anon_sym_AMP_AMP] = ACTIONS(381),
    [anon_sym_PIPE_PIPE] = ACTIONS(381),
    [anon_sym_QMARK_QMARK] = ACTIONS(381),
    [anon_sym_EQ] = ACTIONS(383),
    [anon_sym_PLUS_EQ] = ACTIONS(381),
    [anon_sym_DASH_EQ] = ACTIONS(381),
    [anon_sym_STAR_EQ] = ACTIONS(381),
    [anon_sym_SLASH_EQ] = ACTIONS(381),
    [anon_sym_PERCENT_EQ] = ACTIONS(381),
    [anon_sym_PLUS_PLUS] = ACTIONS(381),
    [anon_sym_DASH_DASH] = ACTIONS(381),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(381),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(381),
    [sym_number] = ACTIONS(383),
    [anon_sym_true] = ACTIONS(383),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_LBRACE] = ACTIONS(381),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(383),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(381),
    [anon_sym_GT] = ACTIONS(381),
    [anon_sym_SLASH_GT] = ACTIONS(381),
  },
  [184] = {
    [sym_expression] = STATE(90),
    [sym_type] = STATE(34),
    [sym_string] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_sequence] = STATE(27),
    [sym_hash] = STATE(27),
    [sym_top_level] = STATE(27),
    [sym_spec_var] = STATE(27),
    [aux_sym_interpolation_repeat1] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(744),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(53),
    [sym_number] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(65),
  },
  [185] = {
    [sym_parameter_group] = STATE(264),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(175),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(175),
    [aux_sym_group_repeat1] = STATE(264),
    [anon_sym_as] = ACTIONS(387),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(746),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
  },
  [186] = {
    [anon_sym_as] = ACTIONS(393),
    [anon_sym_QMARK] = ACTIONS(393),
    [anon_sym_using] = ACTIONS(393),
    [anon_sym_COMMA] = ACTIONS(391),
    [anon_sym_DOT_DOT] = ACTIONS(393),
    [anon_sym_DOT_DOT_LT] = ACTIONS(391),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(391),
    [anon_sym_COLON] = ACTIONS(391),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [anon_sym_PERCENT] = ACTIONS(393),
    [anon_sym_EQ_EQ] = ACTIONS(391),
    [anon_sym_BANG_EQ] = ACTIONS(391),
    [anon_sym_LT] = ACTIONS(393),
    [anon_sym_LT_EQ] = ACTIONS(391),
    [anon_sym_lt] = ACTIONS(393),
    [anon_sym_lte] = ACTIONS(393),
    [anon_sym_gt] = ACTIONS(393),
    [anon_sym_gte] = ACTIONS(393),
    [anon_sym_BANG] = ACTIONS(393),
    [anon_sym_AMP_AMP] = ACTIONS(391),
    [anon_sym_PIPE_PIPE] = ACTIONS(391),
    [anon_sym_QMARK_QMARK] = ACTIONS(391),
    [anon_sym_EQ] = ACTIONS(393),
    [anon_sym_PLUS_EQ] = ACTIONS(391),
    [anon_sym_DASH_EQ] = ACTIONS(391),
    [anon_sym_STAR_EQ] = ACTIONS(391),
    [anon_sym_SLASH_EQ] = ACTIONS(391),
    [anon_sym_PERCENT_EQ] = ACTIONS(391),
    [anon_sym_PLUS_PLUS] = ACTIONS(391),
    [anon_sym_DASH_DASH] = ACTIONS(391),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(391),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(391),
    [sym_number] = ACTIONS(393),
    [anon_sym_true] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(391),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(391),
    [anon_sym_GT] = ACTIONS(391),
    [anon_sym_SLASH_GT] = ACTIONS(391),
  },
  [187] = {
    [anon_sym_as] = ACTIONS(397),
    [anon_sym_QMARK] = ACTIONS(397),
    [anon_sym_using] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(395),
    [anon_sym_DOT_DOT] = ACTIONS(397),
    [anon_sym_DOT_DOT_LT] = ACTIONS(395),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(395),
    [anon_sym_COLON] = ACTIONS(395),
    [anon_sym_STAR] = ACTIONS(397),
    [anon_sym_PLUS] = ACTIONS(397),
    [anon_sym_SLASH] = ACTIONS(397),
    [anon_sym_DASH] = ACTIONS(397),
    [anon_sym_PERCENT] = ACTIONS(397),
    [anon_sym_EQ_EQ] = ACTIONS(395),
    [anon_sym_BANG_EQ] = ACTIONS(395),
    [anon_sym_LT] = ACTIONS(397),
    [anon_sym_LT_EQ] = ACTIONS(395),
    [anon_sym_lt] = ACTIONS(397),
    [anon_sym_lte] = ACTIONS(397),
    [anon_sym_gt] = ACTIONS(397),
    [anon_sym_gte] = ACTIONS(397),
    [anon_sym_BANG] = ACTIONS(397),
    [anon_sym_AMP_AMP] = ACTIONS(395),
    [anon_sym_PIPE_PIPE] = ACTIONS(395),
    [anon_sym_QMARK_QMARK] = ACTIONS(395),
    [anon_sym_EQ] = ACTIONS(397),
    [anon_sym_PLUS_EQ] = ACTIONS(395),
    [anon_sym_DASH_EQ] = ACTIONS(395),
    [anon_sym_STAR_EQ] = ACTIONS(395),
    [anon_sym_SLASH_EQ] = ACTIONS(395),
    [anon_sym_PERCENT_EQ] = ACTIONS(395),
    [anon_sym_PLUS_PLUS] = ACTIONS(395),
    [anon_sym_DASH_DASH] = ACTIONS(395),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(395),
    [sym_number] = ACTIONS(397),
    [anon_sym_true] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(395),
    [anon_sym_LBRACE] = ACTIONS(395),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(397),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(395),
    [anon_sym_GT] = ACTIONS(395),
    [anon_sym_SLASH_GT] = ACTIONS(395),
  },
  [188] = {
    [sym_type] = STATE(265),
    [sym_string] = STATE(129),
    [sym_boolean] = STATE(129),
    [sym_sequence] = STATE(129),
    [sym_hash] = STATE(129),
    [sym_top_level] = STATE(129),
    [sym_spec_var] = STATE(129),
    [aux_sym_as_expression_repeat2] = STATE(265),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(217),
    [sym_number] = ACTIONS(219),
    [anon_sym_true] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(225),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(229),
  },
  [189] = {
    [sym_type] = STATE(266),
    [sym_string] = STATE(129),
    [sym_boolean] = STATE(129),
    [sym_sequence] = STATE(129),
    [sym_hash] = STATE(129),
    [sym_top_level] = STATE(129),
    [sym_spec_var] = STATE(129),
    [aux_sym_as_expression_repeat2] = STATE(266),
    [anon_sym_as] = ACTIONS(455),
    [anon_sym_QMARK] = ACTIONS(428),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(217),
    [sym_number] = ACTIONS(219),
    [anon_sym_true] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(225),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(229),
    [anon_sym_GT] = ACTIONS(428),
    [anon_sym_SLASH_GT] = ACTIONS(428),
  },
  [190] = {
    [sym_type] = STATE(190),
    [sym_string] = STATE(97),
    [sym_boolean] = STATE(97),
    [sym_sequence] = STATE(97),
    [sym_hash] = STATE(97),
    [sym_top_level] = STATE(97),
    [sym_spec_var] = STATE(97),
    [aux_sym_as_expression_repeat1] = STATE(190),
    [anon_sym_as] = ACTIONS(432),
    [anon_sym_QMARK] = ACTIONS(432),
    [anon_sym_using] = ACTIONS(432),
    [anon_sym_COMMA] = ACTIONS(430),
    [anon_sym_DOT_DOT] = ACTIONS(432),
    [anon_sym_DOT_DOT_LT] = ACTIONS(430),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(430),
    [anon_sym_COLON] = ACTIONS(430),
    [anon_sym_STAR] = ACTIONS(432),
    [anon_sym_PLUS] = ACTIONS(432),
    [anon_sym_SLASH] = ACTIONS(432),
    [anon_sym_DASH] = ACTIONS(432),
    [anon_sym_PERCENT] = ACTIONS(432),
    [anon_sym_EQ_EQ] = ACTIONS(430),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_LT] = ACTIONS(432),
    [anon_sym_LT_EQ] = ACTIONS(430),
    [anon_sym_lt] = ACTIONS(432),
    [anon_sym_lte] = ACTIONS(432),
    [anon_sym_gt] = ACTIONS(432),
    [anon_sym_gte] = ACTIONS(432),
    [anon_sym_BANG] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(430),
    [anon_sym_PIPE_PIPE] = ACTIONS(430),
    [anon_sym_QMARK_QMARK] = ACTIONS(430),
    [anon_sym_EQ] = ACTIONS(432),
    [anon_sym_PLUS_EQ] = ACTIONS(430),
    [anon_sym_DASH_EQ] = ACTIONS(430),
    [anon_sym_STAR_EQ] = ACTIONS(430),
    [anon_sym_SLASH_EQ] = ACTIONS(430),
    [anon_sym_PERCENT_EQ] = ACTIONS(430),
    [anon_sym_PLUS_PLUS] = ACTIONS(430),
    [anon_sym_DASH_DASH] = ACTIONS(430),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(748),
    [sym_number] = ACTIONS(751),
    [anon_sym_true] = ACTIONS(754),
    [anon_sym_LBRACK] = ACTIONS(757),
    [anon_sym_LBRACE] = ACTIONS(760),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(766),
    [anon_sym_GT] = ACTIONS(430),
    [anon_sym_SLASH_GT] = ACTIONS(430),
  },
  [191] = {
    [sym_type] = STATE(260),
    [sym_string] = STATE(129),
    [sym_boolean] = STATE(129),
    [sym_sequence] = STATE(129),
    [sym_hash] = STATE(129),
    [sym_top_level] = STATE(129),
    [sym_spec_var] = STATE(129),
    [aux_sym_as_expression_repeat2] = STATE(260),
    [anon_sym_as] = ACTIONS(455),
    [anon_sym_QMARK] = ACTIONS(428),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(428),
    [sym_number] = ACTIONS(455),
    [anon_sym_true] = ACTIONS(455),
    [anon_sym_LBRACK] = ACTIONS(428),
    [anon_sym_LBRACE] = ACTIONS(428),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(428),
    [anon_sym_GT] = ACTIONS(428),
    [anon_sym_SLASH_GT] = ACTIONS(428),
  },
  [192] = {
    [ts_builtin_sym_end] = ACTIONS(769),
    [sym_comment] = ACTIONS(769),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(769),
    [anon_sym_LT_AT] = ACTIONS(769),
    [anon_sym_LT_POUNDlist] = ACTIONS(769),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(769),
    [sym_break] = ACTIONS(769),
    [sym_continue] = ACTIONS(769),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(769),
    [anon_sym_LT_POUNDitems] = ACTIONS(769),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(769),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(769),
    [anon_sym_LT_POUNDif] = ACTIONS(769),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(769),
    [anon_sym_LT_POUNDelseif] = ACTIONS(769),
    [anon_sym_LT_POUNDswitch] = ACTIONS(769),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(769),
    [anon_sym_LT_POUNDcase] = ACTIONS(769),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(769),
    [anon_sym_LT_POUNDfunction] = ACTIONS(769),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(769),
    [anon_sym_LT_POUNDreturn] = ACTIONS(769),
    [anon_sym_LT_POUNDmacro] = ACTIONS(769),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(769),
    [anon_sym_LT_POUNDnested] = ACTIONS(769),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(769),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(769),
    [sym_recover] = ACTIONS(769),
    [sym_fallback] = ACTIONS(769),
    [sym_flush] = ACTIONS(769),
    [anon_sym_LT_POUNDftl] = ACTIONS(769),
    [anon_sym_LT_POUNDimport] = ACTIONS(769),
    [anon_sym_LT_POUNDinclude] = ACTIONS(769),
    [sym_lt] = ACTIONS(769),
    [sym_nt] = ACTIONS(769),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(769),
    [sym_rt] = ACTIONS(769),
    [anon_sym_LT_POUNDsetting] = ACTIONS(769),
    [sym_stop] = ACTIONS(769),
    [sym_t] = ACTIONS(769),
    [anon_sym_LT_POUNDvisit] = ACTIONS(769),
    [anon_sym_LT_POUNDassign] = ACTIONS(769),
    [sym_end_assign] = ACTIONS(769),
    [anon_sym_LT_POUNDglobal] = ACTIONS(769),
    [sym_end_global] = ACTIONS(769),
    [anon_sym_LT_POUNDlocal] = ACTIONS(769),
    [sym_end_local] = ACTIONS(769),
  },
  [193] = {
    [sym_parameter_group] = STATE(193),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(104),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(97),
    [sym_boolean] = STATE(97),
    [sym_sequence] = STATE(97),
    [sym_hash] = STATE(97),
    [sym_top_level] = STATE(97),
    [sym_spec_var] = STATE(97),
    [aux_sym_as_expression_repeat1] = STATE(104),
    [aux_sym_group_repeat1] = STATE(193),
    [anon_sym_as] = ACTIONS(771),
    [anon_sym_QMARK] = ACTIONS(541),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(774),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(774),
    [sym_number] = ACTIONS(777),
    [anon_sym_true] = ACTIONS(780),
    [anon_sym_LBRACK] = ACTIONS(783),
    [anon_sym_LBRACE] = ACTIONS(786),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(789),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(792),
    [anon_sym_GT] = ACTIONS(565),
    [anon_sym_SLASH_GT] = ACTIONS(565),
  },
  [194] = {
    [anon_sym_RBRACE] = ACTIONS(365),
    [anon_sym_COMMA] = ACTIONS(365),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(365),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(365),
    [sym_number] = ACTIONS(367),
    [anon_sym_true] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_RBRACK] = ACTIONS(365),
    [anon_sym_LBRACE] = ACTIONS(365),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(365),
    [anon_sym_GT] = ACTIONS(365),
  },
  [195] = {
    [anon_sym_RBRACE] = ACTIONS(369),
    [anon_sym_COMMA] = ACTIONS(369),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(369),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(369),
    [sym_number] = ACTIONS(371),
    [anon_sym_true] = ACTIONS(371),
    [anon_sym_LBRACK] = ACTIONS(369),
    [anon_sym_RBRACK] = ACTIONS(369),
    [anon_sym_LBRACE] = ACTIONS(369),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(369),
  },
  [196] = {
    [sym_expression] = STATE(81),
    [sym_type] = STATE(82),
    [sym_string] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_sequence] = STATE(27),
    [sym_hash] = STATE(27),
    [sym_top_level] = STATE(27),
    [sym_spec_var] = STATE(27),
    [aux_sym_as_expression_repeat1] = STATE(82),
    [aux_sym_sequence_repeat1] = STATE(171),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(53),
    [sym_number] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(795),
    [anon_sym_LBRACE] = ACTIONS(61),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(65),
  },
  [197] = {
    [anon_sym_RBRACE] = ACTIONS(381),
    [anon_sym_COMMA] = ACTIONS(381),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(381),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(381),
    [sym_number] = ACTIONS(383),
    [anon_sym_true] = ACTIONS(383),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_RBRACK] = ACTIONS(381),
    [anon_sym_LBRACE] = ACTIONS(381),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(383),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(381),
    [anon_sym_GT] = ACTIONS(381),
  },
  [198] = {
    [sym_expression] = STATE(90),
    [sym_type] = STATE(34),
    [sym_string] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_sequence] = STATE(27),
    [sym_hash] = STATE(27),
    [sym_top_level] = STATE(27),
    [sym_spec_var] = STATE(27),
    [aux_sym_interpolation_repeat1] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(797),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(53),
    [sym_number] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(65),
  },
  [199] = {
    [sym_parameter_group] = STATE(270),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(175),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(175),
    [aux_sym_group_repeat1] = STATE(270),
    [anon_sym_as] = ACTIONS(387),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(799),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
  },
  [200] = {
    [anon_sym_RBRACE] = ACTIONS(391),
    [anon_sym_COMMA] = ACTIONS(391),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(391),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(391),
    [sym_number] = ACTIONS(393),
    [anon_sym_true] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_RBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(391),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(391),
    [anon_sym_GT] = ACTIONS(391),
  },
  [201] = {
    [anon_sym_RBRACE] = ACTIONS(395),
    [anon_sym_COMMA] = ACTIONS(395),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(395),
    [sym_number] = ACTIONS(397),
    [anon_sym_true] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(395),
    [anon_sym_RBRACK] = ACTIONS(395),
    [anon_sym_LBRACE] = ACTIONS(395),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(397),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(395),
    [anon_sym_GT] = ACTIONS(395),
  },
  [202] = {
    [sym_type] = STATE(202),
    [sym_string] = STATE(107),
    [sym_boolean] = STATE(107),
    [sym_sequence] = STATE(107),
    [sym_hash] = STATE(107),
    [sym_top_level] = STATE(107),
    [sym_spec_var] = STATE(107),
    [aux_sym_as_expression_repeat2] = STATE(202),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(721),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(721),
    [sym_number] = ACTIONS(724),
    [anon_sym_true] = ACTIONS(727),
    [anon_sym_LBRACK] = ACTIONS(730),
    [anon_sym_LBRACE] = ACTIONS(733),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(739),
    [anon_sym_GT] = ACTIONS(719),
  },
  [203] = {
    [anon_sym_as] = ACTIONS(801),
    [anon_sym_QMARK] = ACTIONS(803),
    [anon_sym_RPAREN] = ACTIONS(803),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(803),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(803),
    [sym_number] = ACTIONS(801),
    [anon_sym_true] = ACTIONS(801),
    [anon_sym_LBRACK] = ACTIONS(803),
    [anon_sym_LBRACE] = ACTIONS(803),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(803),
    [anon_sym_GT] = ACTIONS(803),
    [anon_sym_SLASH_GT] = ACTIONS(803),
  },
  [204] = {
    [anon_sym_as] = ACTIONS(680),
    [anon_sym_QMARK] = ACTIONS(680),
    [anon_sym_RPAREN] = ACTIONS(678),
    [anon_sym_using] = ACTIONS(680),
    [anon_sym_COMMA] = ACTIONS(678),
    [anon_sym_DOT_DOT] = ACTIONS(680),
    [anon_sym_DOT_DOT_LT] = ACTIONS(678),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(678),
    [anon_sym_COLON] = ACTIONS(678),
    [anon_sym_STAR] = ACTIONS(680),
    [anon_sym_PLUS] = ACTIONS(680),
    [anon_sym_SLASH] = ACTIONS(680),
    [anon_sym_DASH] = ACTIONS(680),
    [anon_sym_PERCENT] = ACTIONS(680),
    [anon_sym_EQ_EQ] = ACTIONS(678),
    [anon_sym_BANG_EQ] = ACTIONS(678),
    [anon_sym_LT] = ACTIONS(680),
    [anon_sym_LT_EQ] = ACTIONS(678),
    [anon_sym_lt] = ACTIONS(680),
    [anon_sym_lte] = ACTIONS(680),
    [anon_sym_gt] = ACTIONS(680),
    [anon_sym_gte] = ACTIONS(680),
    [anon_sym_BANG] = ACTIONS(680),
    [anon_sym_AMP_AMP] = ACTIONS(678),
    [anon_sym_PIPE_PIPE] = ACTIONS(678),
    [anon_sym_QMARK_QMARK] = ACTIONS(678),
    [anon_sym_EQ] = ACTIONS(680),
    [anon_sym_PLUS_EQ] = ACTIONS(678),
    [anon_sym_DASH_EQ] = ACTIONS(678),
    [anon_sym_STAR_EQ] = ACTIONS(678),
    [anon_sym_SLASH_EQ] = ACTIONS(678),
    [anon_sym_PERCENT_EQ] = ACTIONS(678),
    [anon_sym_PLUS_PLUS] = ACTIONS(678),
    [anon_sym_DASH_DASH] = ACTIONS(678),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(678),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(678),
    [sym_number] = ACTIONS(680),
    [anon_sym_true] = ACTIONS(680),
    [anon_sym_LBRACK] = ACTIONS(678),
    [anon_sym_LBRACE] = ACTIONS(678),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(678),
    [anon_sym_GT] = ACTIONS(678),
  },
  [205] = {
    [anon_sym_as] = ACTIONS(705),
    [anon_sym_QMARK] = ACTIONS(705),
    [anon_sym_RPAREN] = ACTIONS(703),
    [anon_sym_using] = ACTIONS(705),
    [anon_sym_COMMA] = ACTIONS(703),
    [anon_sym_DOT_DOT] = ACTIONS(705),
    [anon_sym_DOT_DOT_LT] = ACTIONS(703),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(703),
    [anon_sym_COLON] = ACTIONS(703),
    [anon_sym_STAR] = ACTIONS(705),
    [anon_sym_PLUS] = ACTIONS(705),
    [anon_sym_SLASH] = ACTIONS(705),
    [anon_sym_DASH] = ACTIONS(705),
    [anon_sym_PERCENT] = ACTIONS(705),
    [anon_sym_EQ_EQ] = ACTIONS(703),
    [anon_sym_BANG_EQ] = ACTIONS(703),
    [anon_sym_LT] = ACTIONS(705),
    [anon_sym_LT_EQ] = ACTIONS(703),
    [anon_sym_lt] = ACTIONS(705),
    [anon_sym_lte] = ACTIONS(705),
    [anon_sym_gt] = ACTIONS(705),
    [anon_sym_gte] = ACTIONS(705),
    [anon_sym_BANG] = ACTIONS(705),
    [anon_sym_AMP_AMP] = ACTIONS(703),
    [anon_sym_PIPE_PIPE] = ACTIONS(703),
    [anon_sym_QMARK_QMARK] = ACTIONS(703),
    [anon_sym_EQ] = ACTIONS(705),
    [anon_sym_PLUS_EQ] = ACTIONS(703),
    [anon_sym_DASH_EQ] = ACTIONS(703),
    [anon_sym_STAR_EQ] = ACTIONS(703),
    [anon_sym_SLASH_EQ] = ACTIONS(703),
    [anon_sym_PERCENT_EQ] = ACTIONS(703),
    [anon_sym_PLUS_PLUS] = ACTIONS(703),
    [anon_sym_DASH_DASH] = ACTIONS(703),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(703),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(703),
    [sym_number] = ACTIONS(705),
    [anon_sym_true] = ACTIONS(705),
    [anon_sym_LBRACK] = ACTIONS(703),
    [anon_sym_LBRACE] = ACTIONS(703),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(703),
    [anon_sym_GT] = ACTIONS(703),
  },
  [206] = {
    [anon_sym_as] = ACTIONS(709),
    [anon_sym_QMARK] = ACTIONS(709),
    [anon_sym_RPAREN] = ACTIONS(707),
    [anon_sym_using] = ACTIONS(709),
    [anon_sym_COMMA] = ACTIONS(707),
    [anon_sym_DOT_DOT] = ACTIONS(709),
    [anon_sym_DOT_DOT_LT] = ACTIONS(707),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(707),
    [anon_sym_COLON] = ACTIONS(707),
    [anon_sym_STAR] = ACTIONS(709),
    [anon_sym_PLUS] = ACTIONS(709),
    [anon_sym_SLASH] = ACTIONS(709),
    [anon_sym_DASH] = ACTIONS(709),
    [anon_sym_PERCENT] = ACTIONS(709),
    [anon_sym_EQ_EQ] = ACTIONS(707),
    [anon_sym_BANG_EQ] = ACTIONS(707),
    [anon_sym_LT] = ACTIONS(709),
    [anon_sym_LT_EQ] = ACTIONS(707),
    [anon_sym_lt] = ACTIONS(709),
    [anon_sym_lte] = ACTIONS(709),
    [anon_sym_gt] = ACTIONS(709),
    [anon_sym_gte] = ACTIONS(709),
    [anon_sym_BANG] = ACTIONS(709),
    [anon_sym_AMP_AMP] = ACTIONS(707),
    [anon_sym_PIPE_PIPE] = ACTIONS(707),
    [anon_sym_QMARK_QMARK] = ACTIONS(707),
    [anon_sym_EQ] = ACTIONS(709),
    [anon_sym_PLUS_EQ] = ACTIONS(707),
    [anon_sym_DASH_EQ] = ACTIONS(707),
    [anon_sym_STAR_EQ] = ACTIONS(707),
    [anon_sym_SLASH_EQ] = ACTIONS(707),
    [anon_sym_PERCENT_EQ] = ACTIONS(707),
    [anon_sym_PLUS_PLUS] = ACTIONS(707),
    [anon_sym_DASH_DASH] = ACTIONS(707),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(707),
    [sym_number] = ACTIONS(709),
    [anon_sym_true] = ACTIONS(709),
    [anon_sym_LBRACK] = ACTIONS(707),
    [anon_sym_LBRACE] = ACTIONS(707),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(707),
    [anon_sym_GT] = ACTIONS(707),
  },
  [207] = {
    [sym_parameter_group] = STATE(259),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(175),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(175),
    [aux_sym_group_repeat1] = STATE(259),
    [anon_sym_as] = ACTIONS(387),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(805),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
  },
  [208] = {
    [ts_builtin_sym_end] = ACTIONS(807),
    [sym_comment] = ACTIONS(807),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(807),
    [anon_sym_LT_AT] = ACTIONS(807),
    [anon_sym_LT_POUNDlist] = ACTIONS(807),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(807),
    [sym_break] = ACTIONS(807),
    [sym_continue] = ACTIONS(807),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(807),
    [anon_sym_LT_POUNDitems] = ACTIONS(807),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(807),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(807),
    [anon_sym_LT_POUNDif] = ACTIONS(807),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(807),
    [anon_sym_LT_POUNDelseif] = ACTIONS(807),
    [anon_sym_LT_POUNDswitch] = ACTIONS(807),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(807),
    [anon_sym_LT_POUNDcase] = ACTIONS(807),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(807),
    [anon_sym_LT_POUNDfunction] = ACTIONS(807),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(807),
    [anon_sym_LT_POUNDreturn] = ACTIONS(807),
    [anon_sym_LT_POUNDmacro] = ACTIONS(807),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(807),
    [anon_sym_LT_POUNDnested] = ACTIONS(807),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(807),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(807),
    [sym_recover] = ACTIONS(807),
    [sym_fallback] = ACTIONS(807),
    [sym_flush] = ACTIONS(807),
    [anon_sym_LT_POUNDftl] = ACTIONS(807),
    [anon_sym_LT_POUNDimport] = ACTIONS(807),
    [anon_sym_LT_POUNDinclude] = ACTIONS(807),
    [sym_lt] = ACTIONS(807),
    [sym_nt] = ACTIONS(807),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(807),
    [sym_rt] = ACTIONS(807),
    [anon_sym_LT_POUNDsetting] = ACTIONS(807),
    [sym_stop] = ACTIONS(807),
    [sym_t] = ACTIONS(807),
    [anon_sym_LT_POUNDvisit] = ACTIONS(807),
    [anon_sym_LT_POUNDassign] = ACTIONS(807),
    [sym_end_assign] = ACTIONS(807),
    [anon_sym_LT_POUNDglobal] = ACTIONS(807),
    [sym_end_global] = ACTIONS(807),
    [anon_sym_LT_POUNDlocal] = ACTIONS(807),
    [sym_end_local] = ACTIONS(807),
  },
  [209] = {
    [anon_sym_LT_AT] = ACTIONS(809),
    [anon_sym_LT_POUNDlist] = ACTIONS(809),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(809),
    [sym_break] = ACTIONS(809),
    [sym_continue] = ACTIONS(809),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(809),
    [anon_sym_LT_POUNDitems] = ACTIONS(809),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(809),
    [anon_sym_LT_POUNDif] = ACTIONS(809),
    [anon_sym_LT_POUNDswitch] = ACTIONS(809),
    [anon_sym_LT_POUNDfunction] = ACTIONS(809),
    [anon_sym_LT_POUNDmacro] = ACTIONS(809),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(809),
    [sym_fallback] = ACTIONS(809),
    [sym_flush] = ACTIONS(809),
    [anon_sym_LT_POUNDftl] = ACTIONS(809),
    [anon_sym_LT_POUNDimport] = ACTIONS(809),
    [anon_sym_LT_POUNDinclude] = ACTIONS(809),
    [sym_lt] = ACTIONS(809),
    [sym_nt] = ACTIONS(809),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(809),
    [sym_rt] = ACTIONS(809),
    [anon_sym_LT_POUNDsetting] = ACTIONS(809),
    [sym_stop] = ACTIONS(809),
    [sym_t] = ACTIONS(809),
    [anon_sym_LT_POUNDvisit] = ACTIONS(809),
    [anon_sym_LT_POUNDassign] = ACTIONS(809),
    [sym_end_assign] = ACTIONS(809),
    [anon_sym_LT_POUNDglobal] = ACTIONS(809),
    [sym_end_global] = ACTIONS(809),
    [anon_sym_LT_POUNDlocal] = ACTIONS(809),
    [sym_end_local] = ACTIONS(809),
  },
  [210] = {
    [sym_directive] = STATE(209),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_list_middle] = STATE(272),
    [sym_items] = STATE(209),
    [sym_sep] = STATE(209),
    [sym_sep_block] = STATE(214),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_list_repeat1] = STATE(272),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUNDlist] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(811),
    [sym_break] = ACTIONS(491),
    [sym_continue] = ACTIONS(491),
    [anon_sym_LT_POUNDitems] = ACTIONS(495),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(497),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(23),
    [sym_fallback] = ACTIONS(25),
    [sym_flush] = ACTIONS(25),
    [anon_sym_LT_POUNDftl] = ACTIONS(27),
    [anon_sym_LT_POUNDimport] = ACTIONS(29),
    [anon_sym_LT_POUNDinclude] = ACTIONS(31),
    [sym_lt] = ACTIONS(25),
    [sym_nt] = ACTIONS(25),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(33),
    [sym_rt] = ACTIONS(25),
    [anon_sym_LT_POUNDsetting] = ACTIONS(35),
    [sym_stop] = ACTIONS(25),
    [sym_t] = ACTIONS(25),
    [anon_sym_LT_POUNDvisit] = ACTIONS(37),
    [anon_sym_LT_POUNDassign] = ACTIONS(39),
    [sym_end_assign] = ACTIONS(41),
    [anon_sym_LT_POUNDglobal] = ACTIONS(43),
    [sym_end_global] = ACTIONS(45),
    [anon_sym_LT_POUNDlocal] = ACTIONS(47),
    [sym_end_local] = ACTIONS(49),
  },
  [211] = {
    [sym_parameter_group] = STATE(273),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(47),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(47),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
  },
  [212] = {
    [anon_sym_LT_AT] = ACTIONS(813),
    [anon_sym_LT_POUNDlist] = ACTIONS(813),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(813),
    [sym_break] = ACTIONS(813),
    [sym_continue] = ACTIONS(813),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(813),
    [anon_sym_LT_POUNDitems] = ACTIONS(813),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(813),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(813),
    [anon_sym_LT_SLASH_POUNDsep_GT] = ACTIONS(815),
    [anon_sym_LT_POUNDif] = ACTIONS(813),
    [anon_sym_LT_POUNDswitch] = ACTIONS(813),
    [anon_sym_LT_POUNDfunction] = ACTIONS(813),
    [anon_sym_LT_POUNDmacro] = ACTIONS(813),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(813),
    [sym_fallback] = ACTIONS(813),
    [sym_flush] = ACTIONS(813),
    [anon_sym_LT_POUNDftl] = ACTIONS(813),
    [anon_sym_LT_POUNDimport] = ACTIONS(813),
    [anon_sym_LT_POUNDinclude] = ACTIONS(813),
    [sym_lt] = ACTIONS(813),
    [sym_nt] = ACTIONS(813),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(813),
    [sym_rt] = ACTIONS(813),
    [anon_sym_LT_POUNDsetting] = ACTIONS(813),
    [sym_stop] = ACTIONS(813),
    [sym_t] = ACTIONS(813),
    [anon_sym_LT_POUNDvisit] = ACTIONS(813),
    [anon_sym_LT_POUNDassign] = ACTIONS(813),
    [sym_end_assign] = ACTIONS(813),
    [anon_sym_LT_POUNDglobal] = ACTIONS(813),
    [sym_end_global] = ACTIONS(813),
    [anon_sym_LT_POUNDlocal] = ACTIONS(813),
    [sym_end_local] = ACTIONS(813),
  },
  [213] = {
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(817),
  },
  [214] = {
    [anon_sym_LT_AT] = ACTIONS(813),
    [anon_sym_LT_POUNDlist] = ACTIONS(813),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(813),
    [sym_break] = ACTIONS(813),
    [sym_continue] = ACTIONS(813),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(813),
    [anon_sym_LT_POUNDitems] = ACTIONS(813),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(813),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(813),
    [anon_sym_LT_POUNDif] = ACTIONS(813),
    [anon_sym_LT_POUNDswitch] = ACTIONS(813),
    [anon_sym_LT_POUNDfunction] = ACTIONS(813),
    [anon_sym_LT_POUNDmacro] = ACTIONS(813),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(813),
    [sym_fallback] = ACTIONS(813),
    [sym_flush] = ACTIONS(813),
    [anon_sym_LT_POUNDftl] = ACTIONS(813),
    [anon_sym_LT_POUNDimport] = ACTIONS(813),
    [anon_sym_LT_POUNDinclude] = ACTIONS(813),
    [sym_lt] = ACTIONS(813),
    [sym_nt] = ACTIONS(813),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(813),
    [sym_rt] = ACTIONS(813),
    [anon_sym_LT_POUNDsetting] = ACTIONS(813),
    [sym_stop] = ACTIONS(813),
    [sym_t] = ACTIONS(813),
    [anon_sym_LT_POUNDvisit] = ACTIONS(813),
    [anon_sym_LT_POUNDassign] = ACTIONS(813),
    [sym_end_assign] = ACTIONS(813),
    [anon_sym_LT_POUNDglobal] = ACTIONS(813),
    [sym_end_global] = ACTIONS(813),
    [anon_sym_LT_POUNDlocal] = ACTIONS(813),
    [sym_end_local] = ACTIONS(813),
  },
  [215] = {
    [sym_directive] = STATE(209),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_list_middle] = STATE(277),
    [sym_list_else] = STATE(276),
    [sym_items] = STATE(209),
    [sym_sep] = STATE(209),
    [sym_sep_block] = STATE(214),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_list_repeat1] = STATE(277),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUNDlist] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(817),
    [sym_break] = ACTIONS(491),
    [sym_continue] = ACTIONS(491),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(493),
    [anon_sym_LT_POUNDitems] = ACTIONS(495),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(497),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(23),
    [sym_fallback] = ACTIONS(25),
    [sym_flush] = ACTIONS(25),
    [anon_sym_LT_POUNDftl] = ACTIONS(27),
    [anon_sym_LT_POUNDimport] = ACTIONS(29),
    [anon_sym_LT_POUNDinclude] = ACTIONS(31),
    [sym_lt] = ACTIONS(25),
    [sym_nt] = ACTIONS(25),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(33),
    [sym_rt] = ACTIONS(25),
    [anon_sym_LT_POUNDsetting] = ACTIONS(35),
    [sym_stop] = ACTIONS(25),
    [sym_t] = ACTIONS(25),
    [anon_sym_LT_POUNDvisit] = ACTIONS(37),
    [anon_sym_LT_POUNDassign] = ACTIONS(39),
    [sym_end_assign] = ACTIONS(41),
    [anon_sym_LT_POUNDglobal] = ACTIONS(43),
    [sym_end_global] = ACTIONS(45),
    [anon_sym_LT_POUNDlocal] = ACTIONS(47),
    [sym_end_local] = ACTIONS(49),
  },
  [216] = {
    [sym_type] = STATE(202),
    [sym_string] = STATE(107),
    [sym_boolean] = STATE(107),
    [sym_sequence] = STATE(107),
    [sym_hash] = STATE(107),
    [sym_top_level] = STATE(107),
    [sym_spec_var] = STATE(107),
    [aux_sym_as_expression_repeat2] = STATE(202),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(185),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(185),
    [sym_number] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(193),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(195),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(197),
    [anon_sym_GT] = ACTIONS(819),
  },
  [217] = {
    [sym_type] = STATE(202),
    [sym_string] = STATE(107),
    [sym_boolean] = STATE(107),
    [sym_sequence] = STATE(107),
    [sym_hash] = STATE(107),
    [sym_top_level] = STATE(107),
    [sym_spec_var] = STATE(107),
    [aux_sym_as_expression_repeat2] = STATE(202),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(185),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(185),
    [sym_number] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(193),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(195),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(197),
    [anon_sym_GT] = ACTIONS(715),
  },
  [218] = {
    [anon_sym_as] = ACTIONS(367),
    [anon_sym_QMARK] = ACTIONS(365),
    [anon_sym_RPAREN] = ACTIONS(365),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(365),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(365),
    [sym_number] = ACTIONS(367),
    [anon_sym_true] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_LBRACE] = ACTIONS(365),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(365),
    [anon_sym_GT] = ACTIONS(365),
    [anon_sym_SLASH_GT] = ACTIONS(365),
  },
  [219] = {
    [anon_sym_as] = ACTIONS(371),
    [anon_sym_QMARK] = ACTIONS(369),
    [anon_sym_RPAREN] = ACTIONS(369),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(369),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(369),
    [sym_number] = ACTIONS(371),
    [anon_sym_true] = ACTIONS(371),
    [anon_sym_LBRACK] = ACTIONS(369),
    [anon_sym_LBRACE] = ACTIONS(369),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(369),
    [anon_sym_SLASH_GT] = ACTIONS(369),
  },
  [220] = {
    [sym_expression] = STATE(81),
    [sym_type] = STATE(82),
    [sym_string] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_sequence] = STATE(27),
    [sym_hash] = STATE(27),
    [sym_top_level] = STATE(27),
    [sym_spec_var] = STATE(27),
    [aux_sym_as_expression_repeat1] = STATE(82),
    [aux_sym_sequence_repeat1] = STATE(171),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(53),
    [sym_number] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(821),
    [anon_sym_LBRACE] = ACTIONS(61),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(65),
  },
  [221] = {
    [anon_sym_as] = ACTIONS(383),
    [anon_sym_QMARK] = ACTIONS(381),
    [anon_sym_RPAREN] = ACTIONS(381),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(381),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(381),
    [sym_number] = ACTIONS(383),
    [anon_sym_true] = ACTIONS(383),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_LBRACE] = ACTIONS(381),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(383),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(381),
    [anon_sym_GT] = ACTIONS(381),
    [anon_sym_SLASH_GT] = ACTIONS(381),
  },
  [222] = {
    [sym_expression] = STATE(90),
    [sym_type] = STATE(34),
    [sym_string] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_sequence] = STATE(27),
    [sym_hash] = STATE(27),
    [sym_top_level] = STATE(27),
    [sym_spec_var] = STATE(27),
    [aux_sym_interpolation_repeat1] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(823),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(53),
    [sym_number] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(65),
  },
  [223] = {
    [sym_parameter_group] = STATE(281),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(175),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(175),
    [aux_sym_group_repeat1] = STATE(281),
    [anon_sym_as] = ACTIONS(387),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(825),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
  },
  [224] = {
    [anon_sym_as] = ACTIONS(393),
    [anon_sym_QMARK] = ACTIONS(391),
    [anon_sym_LPAREN] = ACTIONS(391),
    [anon_sym_RPAREN] = ACTIONS(391),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(391),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(391),
    [sym_number] = ACTIONS(393),
    [anon_sym_true] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(391),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(391),
    [anon_sym_GT] = ACTIONS(391),
    [anon_sym_SLASH_GT] = ACTIONS(391),
  },
  [225] = {
    [anon_sym_as] = ACTIONS(397),
    [anon_sym_QMARK] = ACTIONS(395),
    [anon_sym_RPAREN] = ACTIONS(395),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(395),
    [sym_number] = ACTIONS(397),
    [anon_sym_true] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(395),
    [anon_sym_LBRACE] = ACTIONS(395),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(397),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(395),
    [anon_sym_GT] = ACTIONS(395),
    [anon_sym_SLASH_GT] = ACTIONS(395),
  },
  [226] = {
    [sym_type] = STATE(226),
    [sym_string] = STATE(129),
    [sym_boolean] = STATE(129),
    [sym_sequence] = STATE(129),
    [sym_hash] = STATE(129),
    [sym_top_level] = STATE(129),
    [sym_spec_var] = STATE(129),
    [aux_sym_as_expression_repeat2] = STATE(226),
    [anon_sym_as] = ACTIONS(827),
    [anon_sym_QMARK] = ACTIONS(719),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(829),
    [sym_number] = ACTIONS(832),
    [anon_sym_true] = ACTIONS(835),
    [anon_sym_LBRACK] = ACTIONS(838),
    [anon_sym_LBRACE] = ACTIONS(841),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(844),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(847),
    [anon_sym_GT] = ACTIONS(719),
  },
  [227] = {
    [sym_type] = STATE(226),
    [sym_string] = STATE(129),
    [sym_boolean] = STATE(129),
    [sym_sequence] = STATE(129),
    [sym_hash] = STATE(129),
    [sym_top_level] = STATE(129),
    [sym_spec_var] = STATE(129),
    [aux_sym_as_expression_repeat2] = STATE(226),
    [anon_sym_as] = ACTIONS(850),
    [anon_sym_QMARK] = ACTIONS(819),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(819),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(819),
    [sym_number] = ACTIONS(850),
    [anon_sym_true] = ACTIONS(850),
    [anon_sym_LBRACK] = ACTIONS(819),
    [anon_sym_LBRACE] = ACTIONS(819),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(850),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(819),
    [anon_sym_GT] = ACTIONS(819),
  },
  [228] = {
    [sym_type] = STATE(226),
    [sym_string] = STATE(129),
    [sym_boolean] = STATE(129),
    [sym_sequence] = STATE(129),
    [sym_hash] = STATE(129),
    [sym_top_level] = STATE(129),
    [sym_spec_var] = STATE(129),
    [aux_sym_as_expression_repeat2] = STATE(226),
    [anon_sym_as] = ACTIONS(717),
    [anon_sym_QMARK] = ACTIONS(715),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(715),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(715),
    [sym_number] = ACTIONS(717),
    [anon_sym_true] = ACTIONS(717),
    [anon_sym_LBRACK] = ACTIONS(715),
    [anon_sym_LBRACE] = ACTIONS(715),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(715),
    [anon_sym_GT] = ACTIONS(715),
  },
  [229] = {
    [sym_directive] = STATE(232),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_elseif] = STATE(232),
    [sym_if_middle] = STATE(282),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_if_repeat1] = STATE(282),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUNDlist] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(852),
    [anon_sym_LT_POUNDelseif] = ACTIONS(536),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(23),
    [sym_fallback] = ACTIONS(25),
    [sym_flush] = ACTIONS(25),
    [anon_sym_LT_POUNDftl] = ACTIONS(27),
    [anon_sym_LT_POUNDimport] = ACTIONS(29),
    [anon_sym_LT_POUNDinclude] = ACTIONS(31),
    [sym_lt] = ACTIONS(25),
    [sym_nt] = ACTIONS(25),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(33),
    [sym_rt] = ACTIONS(25),
    [anon_sym_LT_POUNDsetting] = ACTIONS(35),
    [sym_stop] = ACTIONS(25),
    [sym_t] = ACTIONS(25),
    [anon_sym_LT_POUNDvisit] = ACTIONS(37),
    [anon_sym_LT_POUNDassign] = ACTIONS(39),
    [sym_end_assign] = ACTIONS(41),
    [anon_sym_LT_POUNDglobal] = ACTIONS(43),
    [sym_end_global] = ACTIONS(45),
    [anon_sym_LT_POUNDlocal] = ACTIONS(47),
    [sym_end_local] = ACTIONS(49),
  },
  [230] = {
    [ts_builtin_sym_end] = ACTIONS(854),
    [sym_comment] = ACTIONS(854),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(854),
    [anon_sym_LT_AT] = ACTIONS(854),
    [anon_sym_LT_POUNDlist] = ACTIONS(854),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(854),
    [sym_break] = ACTIONS(854),
    [sym_continue] = ACTIONS(854),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(854),
    [anon_sym_LT_POUNDitems] = ACTIONS(854),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(854),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(854),
    [anon_sym_LT_POUNDif] = ACTIONS(854),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(854),
    [anon_sym_LT_POUNDelseif] = ACTIONS(854),
    [anon_sym_LT_POUNDswitch] = ACTIONS(854),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(854),
    [anon_sym_LT_POUNDcase] = ACTIONS(854),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(854),
    [anon_sym_LT_POUNDfunction] = ACTIONS(854),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(854),
    [anon_sym_LT_POUNDreturn] = ACTIONS(854),
    [anon_sym_LT_POUNDmacro] = ACTIONS(854),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(854),
    [anon_sym_LT_POUNDnested] = ACTIONS(854),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(854),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(854),
    [sym_recover] = ACTIONS(854),
    [sym_fallback] = ACTIONS(854),
    [sym_flush] = ACTIONS(854),
    [anon_sym_LT_POUNDftl] = ACTIONS(854),
    [anon_sym_LT_POUNDimport] = ACTIONS(854),
    [anon_sym_LT_POUNDinclude] = ACTIONS(854),
    [sym_lt] = ACTIONS(854),
    [sym_nt] = ACTIONS(854),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(854),
    [sym_rt] = ACTIONS(854),
    [anon_sym_LT_POUNDsetting] = ACTIONS(854),
    [sym_stop] = ACTIONS(854),
    [sym_t] = ACTIONS(854),
    [anon_sym_LT_POUNDvisit] = ACTIONS(854),
    [anon_sym_LT_POUNDassign] = ACTIONS(854),
    [sym_end_assign] = ACTIONS(854),
    [anon_sym_LT_POUNDglobal] = ACTIONS(854),
    [sym_end_global] = ACTIONS(854),
    [anon_sym_LT_POUNDlocal] = ACTIONS(854),
    [sym_end_local] = ACTIONS(854),
  },
  [231] = {
    [sym_parameter_group] = STATE(284),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(50),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(50),
    [aux_sym_group_repeat1] = STATE(284),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(856),
  },
  [232] = {
    [anon_sym_LT_AT] = ACTIONS(858),
    [anon_sym_LT_POUNDlist] = ACTIONS(858),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(858),
    [anon_sym_LT_POUNDif] = ACTIONS(858),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(858),
    [anon_sym_LT_POUNDelseif] = ACTIONS(858),
    [anon_sym_LT_POUNDswitch] = ACTIONS(858),
    [anon_sym_LT_POUNDfunction] = ACTIONS(858),
    [anon_sym_LT_POUNDmacro] = ACTIONS(858),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(858),
    [sym_fallback] = ACTIONS(858),
    [sym_flush] = ACTIONS(858),
    [anon_sym_LT_POUNDftl] = ACTIONS(858),
    [anon_sym_LT_POUNDimport] = ACTIONS(858),
    [anon_sym_LT_POUNDinclude] = ACTIONS(858),
    [sym_lt] = ACTIONS(858),
    [sym_nt] = ACTIONS(858),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(858),
    [sym_rt] = ACTIONS(858),
    [anon_sym_LT_POUNDsetting] = ACTIONS(858),
    [sym_stop] = ACTIONS(858),
    [sym_t] = ACTIONS(858),
    [anon_sym_LT_POUNDvisit] = ACTIONS(858),
    [anon_sym_LT_POUNDassign] = ACTIONS(858),
    [sym_end_assign] = ACTIONS(858),
    [anon_sym_LT_POUNDglobal] = ACTIONS(858),
    [sym_end_global] = ACTIONS(858),
    [anon_sym_LT_POUNDlocal] = ACTIONS(858),
    [sym_end_local] = ACTIONS(858),
  },
  [233] = {
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(860),
  },
  [234] = {
    [sym_directive] = STATE(232),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_if_else] = STATE(286),
    [sym_elseif] = STATE(232),
    [sym_if_middle] = STATE(287),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_if_repeat1] = STATE(287),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUNDlist] = ACTIONS(13),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(532),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(860),
    [anon_sym_LT_POUNDelseif] = ACTIONS(536),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(23),
    [sym_fallback] = ACTIONS(25),
    [sym_flush] = ACTIONS(25),
    [anon_sym_LT_POUNDftl] = ACTIONS(27),
    [anon_sym_LT_POUNDimport] = ACTIONS(29),
    [anon_sym_LT_POUNDinclude] = ACTIONS(31),
    [sym_lt] = ACTIONS(25),
    [sym_nt] = ACTIONS(25),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(33),
    [sym_rt] = ACTIONS(25),
    [anon_sym_LT_POUNDsetting] = ACTIONS(35),
    [sym_stop] = ACTIONS(25),
    [sym_t] = ACTIONS(25),
    [anon_sym_LT_POUNDvisit] = ACTIONS(37),
    [anon_sym_LT_POUNDassign] = ACTIONS(39),
    [sym_end_assign] = ACTIONS(41),
    [anon_sym_LT_POUNDglobal] = ACTIONS(43),
    [sym_end_global] = ACTIONS(45),
    [anon_sym_LT_POUNDlocal] = ACTIONS(47),
    [sym_end_local] = ACTIONS(49),
  },
  [235] = {
    [ts_builtin_sym_end] = ACTIONS(862),
    [sym_comment] = ACTIONS(862),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(862),
    [anon_sym_LT_AT] = ACTIONS(862),
    [anon_sym_LT_POUNDlist] = ACTIONS(862),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(862),
    [sym_break] = ACTIONS(862),
    [sym_continue] = ACTIONS(862),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(862),
    [anon_sym_LT_POUNDitems] = ACTIONS(862),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(862),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(862),
    [anon_sym_LT_POUNDif] = ACTIONS(862),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(862),
    [anon_sym_LT_POUNDelseif] = ACTIONS(862),
    [anon_sym_LT_POUNDswitch] = ACTIONS(862),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(862),
    [anon_sym_LT_POUNDcase] = ACTIONS(862),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(862),
    [anon_sym_LT_POUNDfunction] = ACTIONS(862),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(862),
    [anon_sym_LT_POUNDreturn] = ACTIONS(862),
    [anon_sym_LT_POUNDmacro] = ACTIONS(862),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(862),
    [anon_sym_LT_POUNDnested] = ACTIONS(862),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(862),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(862),
    [sym_recover] = ACTIONS(862),
    [sym_fallback] = ACTIONS(862),
    [sym_flush] = ACTIONS(862),
    [anon_sym_LT_POUNDftl] = ACTIONS(862),
    [anon_sym_LT_POUNDimport] = ACTIONS(862),
    [anon_sym_LT_POUNDinclude] = ACTIONS(862),
    [sym_lt] = ACTIONS(862),
    [sym_nt] = ACTIONS(862),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(862),
    [sym_rt] = ACTIONS(862),
    [anon_sym_LT_POUNDsetting] = ACTIONS(862),
    [sym_stop] = ACTIONS(862),
    [sym_t] = ACTIONS(862),
    [anon_sym_LT_POUNDvisit] = ACTIONS(862),
    [anon_sym_LT_POUNDassign] = ACTIONS(862),
    [sym_end_assign] = ACTIONS(862),
    [anon_sym_LT_POUNDglobal] = ACTIONS(862),
    [sym_end_global] = ACTIONS(862),
    [anon_sym_LT_POUNDlocal] = ACTIONS(862),
    [sym_end_local] = ACTIONS(862),
  },
  [236] = {
    [sym_parameter_group] = STATE(288),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(47),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(47),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
  },
  [237] = {
    [sym_directive] = STATE(289),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_case_repeat1] = STATE(289),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUNDlist] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(864),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(23),
    [sym_fallback] = ACTIONS(25),
    [sym_flush] = ACTIONS(25),
    [anon_sym_LT_POUNDftl] = ACTIONS(27),
    [anon_sym_LT_POUNDimport] = ACTIONS(29),
    [anon_sym_LT_POUNDinclude] = ACTIONS(31),
    [sym_lt] = ACTIONS(25),
    [sym_nt] = ACTIONS(25),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(33),
    [sym_rt] = ACTIONS(25),
    [anon_sym_LT_POUNDsetting] = ACTIONS(35),
    [sym_stop] = ACTIONS(25),
    [sym_t] = ACTIONS(25),
    [anon_sym_LT_POUNDvisit] = ACTIONS(37),
    [anon_sym_LT_POUNDassign] = ACTIONS(39),
    [sym_end_assign] = ACTIONS(41),
    [anon_sym_LT_POUNDglobal] = ACTIONS(43),
    [sym_end_global] = ACTIONS(45),
    [anon_sym_LT_POUNDlocal] = ACTIONS(47),
    [sym_end_local] = ACTIONS(49),
  },
  [238] = {
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(866),
    [anon_sym_LT_POUNDcase] = ACTIONS(866),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(866),
  },
  [239] = {
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(868),
  },
  [240] = {
    [sym_case] = STATE(238),
    [sym_default] = STATE(291),
    [sym_switch_middle] = STATE(292),
    [aux_sym_switch_repeat1] = STATE(292),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(868),
    [anon_sym_LT_POUNDcase] = ACTIONS(569),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(571),
  },
  [241] = {
    [anon_sym_LT_AT] = ACTIONS(870),
    [anon_sym_LT_POUNDlist] = ACTIONS(870),
    [anon_sym_LT_POUNDif] = ACTIONS(870),
    [anon_sym_LT_POUNDswitch] = ACTIONS(870),
    [anon_sym_LT_POUNDfunction] = ACTIONS(870),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(870),
    [anon_sym_LT_POUNDreturn] = ACTIONS(870),
    [anon_sym_LT_POUNDmacro] = ACTIONS(870),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(870),
    [anon_sym_LT_POUNDnested] = ACTIONS(870),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(870),
    [sym_fallback] = ACTIONS(870),
    [sym_flush] = ACTIONS(870),
    [anon_sym_LT_POUNDftl] = ACTIONS(870),
    [anon_sym_LT_POUNDimport] = ACTIONS(870),
    [anon_sym_LT_POUNDinclude] = ACTIONS(870),
    [sym_lt] = ACTIONS(870),
    [sym_nt] = ACTIONS(870),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(870),
    [sym_rt] = ACTIONS(870),
    [anon_sym_LT_POUNDsetting] = ACTIONS(870),
    [sym_stop] = ACTIONS(870),
    [sym_t] = ACTIONS(870),
    [anon_sym_LT_POUNDvisit] = ACTIONS(870),
    [anon_sym_LT_POUNDassign] = ACTIONS(870),
    [sym_end_assign] = ACTIONS(870),
    [anon_sym_LT_POUNDglobal] = ACTIONS(870),
    [sym_end_global] = ACTIONS(870),
    [anon_sym_LT_POUNDlocal] = ACTIONS(870),
    [sym_end_local] = ACTIONS(870),
  },
  [242] = {
    [anon_sym_GT] = ACTIONS(872),
  },
  [243] = {
    [ts_builtin_sym_end] = ACTIONS(874),
    [sym_comment] = ACTIONS(874),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(874),
    [anon_sym_LT_AT] = ACTIONS(874),
    [anon_sym_LT_POUNDlist] = ACTIONS(874),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(874),
    [sym_break] = ACTIONS(874),
    [sym_continue] = ACTIONS(874),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(874),
    [anon_sym_LT_POUNDitems] = ACTIONS(874),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(874),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(874),
    [anon_sym_LT_POUNDif] = ACTIONS(874),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(874),
    [anon_sym_LT_POUNDelseif] = ACTIONS(874),
    [anon_sym_LT_POUNDswitch] = ACTIONS(874),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(874),
    [anon_sym_LT_POUNDcase] = ACTIONS(874),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(874),
    [anon_sym_LT_POUNDfunction] = ACTIONS(874),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(874),
    [anon_sym_LT_POUNDreturn] = ACTIONS(874),
    [anon_sym_LT_POUNDmacro] = ACTIONS(874),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(874),
    [anon_sym_LT_POUNDnested] = ACTIONS(874),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(874),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(874),
    [sym_recover] = ACTIONS(874),
    [sym_fallback] = ACTIONS(874),
    [sym_flush] = ACTIONS(874),
    [anon_sym_LT_POUNDftl] = ACTIONS(874),
    [anon_sym_LT_POUNDimport] = ACTIONS(874),
    [anon_sym_LT_POUNDinclude] = ACTIONS(874),
    [sym_lt] = ACTIONS(874),
    [sym_nt] = ACTIONS(874),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(874),
    [sym_rt] = ACTIONS(874),
    [anon_sym_LT_POUNDsetting] = ACTIONS(874),
    [sym_stop] = ACTIONS(874),
    [sym_t] = ACTIONS(874),
    [anon_sym_LT_POUNDvisit] = ACTIONS(874),
    [anon_sym_LT_POUNDassign] = ACTIONS(874),
    [sym_end_assign] = ACTIONS(874),
    [anon_sym_LT_POUNDglobal] = ACTIONS(874),
    [sym_end_global] = ACTIONS(874),
    [anon_sym_LT_POUNDlocal] = ACTIONS(874),
    [sym_end_local] = ACTIONS(874),
  },
  [244] = {
    [sym_directive] = STATE(147),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_function_middle] = STATE(244),
    [sym_return] = STATE(147),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_function_repeat1] = STATE(244),
    [anon_sym_LT_AT] = ACTIONS(876),
    [anon_sym_LT_POUNDlist] = ACTIONS(879),
    [anon_sym_LT_POUNDif] = ACTIONS(882),
    [anon_sym_LT_POUNDswitch] = ACTIONS(885),
    [anon_sym_LT_POUNDfunction] = ACTIONS(888),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(891),
    [anon_sym_LT_POUNDreturn] = ACTIONS(893),
    [anon_sym_LT_POUNDmacro] = ACTIONS(896),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(899),
    [sym_fallback] = ACTIONS(902),
    [sym_flush] = ACTIONS(902),
    [anon_sym_LT_POUNDftl] = ACTIONS(905),
    [anon_sym_LT_POUNDimport] = ACTIONS(908),
    [anon_sym_LT_POUNDinclude] = ACTIONS(911),
    [sym_lt] = ACTIONS(902),
    [sym_nt] = ACTIONS(902),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(914),
    [sym_rt] = ACTIONS(902),
    [anon_sym_LT_POUNDsetting] = ACTIONS(917),
    [sym_stop] = ACTIONS(902),
    [sym_t] = ACTIONS(902),
    [anon_sym_LT_POUNDvisit] = ACTIONS(920),
    [anon_sym_LT_POUNDassign] = ACTIONS(923),
    [sym_end_assign] = ACTIONS(926),
    [anon_sym_LT_POUNDglobal] = ACTIONS(929),
    [sym_end_global] = ACTIONS(932),
    [anon_sym_LT_POUNDlocal] = ACTIONS(935),
    [sym_end_local] = ACTIONS(938),
  },
  [245] = {
    [sym_directive] = STATE(147),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_function_middle] = STATE(244),
    [sym_return] = STATE(147),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_function_repeat1] = STATE(244),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUNDlist] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(941),
    [anon_sym_LT_POUNDreturn] = ACTIONS(245),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(23),
    [sym_fallback] = ACTIONS(25),
    [sym_flush] = ACTIONS(25),
    [anon_sym_LT_POUNDftl] = ACTIONS(27),
    [anon_sym_LT_POUNDimport] = ACTIONS(29),
    [anon_sym_LT_POUNDinclude] = ACTIONS(31),
    [sym_lt] = ACTIONS(25),
    [sym_nt] = ACTIONS(25),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(33),
    [sym_rt] = ACTIONS(25),
    [anon_sym_LT_POUNDsetting] = ACTIONS(35),
    [sym_stop] = ACTIONS(25),
    [sym_t] = ACTIONS(25),
    [anon_sym_LT_POUNDvisit] = ACTIONS(37),
    [anon_sym_LT_POUNDassign] = ACTIONS(39),
    [sym_end_assign] = ACTIONS(41),
    [anon_sym_LT_POUNDglobal] = ACTIONS(43),
    [sym_end_global] = ACTIONS(45),
    [anon_sym_LT_POUNDlocal] = ACTIONS(47),
    [sym_end_local] = ACTIONS(49),
  },
  [246] = {
    [anon_sym_LT_AT] = ACTIONS(943),
    [anon_sym_LT_POUNDlist] = ACTIONS(943),
    [anon_sym_LT_POUNDif] = ACTIONS(943),
    [anon_sym_LT_POUNDswitch] = ACTIONS(943),
    [anon_sym_LT_POUNDfunction] = ACTIONS(943),
    [anon_sym_LT_POUNDreturn] = ACTIONS(943),
    [anon_sym_LT_POUNDmacro] = ACTIONS(943),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(943),
    [anon_sym_LT_POUNDnested] = ACTIONS(943),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(943),
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
  [247] = {
    [sym_parameter_group] = STATE(143),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(50),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(50),
    [aux_sym_group_repeat1] = STATE(143),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(945),
  },
  [248] = {
    [ts_builtin_sym_end] = ACTIONS(947),
    [sym_comment] = ACTIONS(947),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(947),
    [anon_sym_LT_AT] = ACTIONS(947),
    [anon_sym_LT_POUNDlist] = ACTIONS(947),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(947),
    [sym_break] = ACTIONS(947),
    [sym_continue] = ACTIONS(947),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(947),
    [anon_sym_LT_POUNDitems] = ACTIONS(947),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(947),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(947),
    [anon_sym_LT_POUNDif] = ACTIONS(947),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(947),
    [anon_sym_LT_POUNDelseif] = ACTIONS(947),
    [anon_sym_LT_POUNDswitch] = ACTIONS(947),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(947),
    [anon_sym_LT_POUNDcase] = ACTIONS(947),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(947),
    [anon_sym_LT_POUNDfunction] = ACTIONS(947),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(947),
    [anon_sym_LT_POUNDreturn] = ACTIONS(947),
    [anon_sym_LT_POUNDmacro] = ACTIONS(947),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(947),
    [anon_sym_LT_POUNDnested] = ACTIONS(947),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(947),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(947),
    [sym_recover] = ACTIONS(947),
    [sym_fallback] = ACTIONS(947),
    [sym_flush] = ACTIONS(947),
    [anon_sym_LT_POUNDftl] = ACTIONS(947),
    [anon_sym_LT_POUNDimport] = ACTIONS(947),
    [anon_sym_LT_POUNDinclude] = ACTIONS(947),
    [sym_lt] = ACTIONS(947),
    [sym_nt] = ACTIONS(947),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(947),
    [sym_rt] = ACTIONS(947),
    [anon_sym_LT_POUNDsetting] = ACTIONS(947),
    [sym_stop] = ACTIONS(947),
    [sym_t] = ACTIONS(947),
    [anon_sym_LT_POUNDvisit] = ACTIONS(947),
    [anon_sym_LT_POUNDassign] = ACTIONS(947),
    [sym_end_assign] = ACTIONS(947),
    [anon_sym_LT_POUNDglobal] = ACTIONS(947),
    [sym_end_global] = ACTIONS(947),
    [anon_sym_LT_POUNDlocal] = ACTIONS(947),
    [sym_end_local] = ACTIONS(947),
  },
  [249] = {
    [sym_directive] = STATE(152),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_return] = STATE(152),
    [sym_macro] = STATE(10),
    [sym_macro_middle] = STATE(249),
    [sym_nested] = STATE(152),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_macro_repeat1] = STATE(249),
    [anon_sym_LT_AT] = ACTIONS(949),
    [anon_sym_LT_POUNDlist] = ACTIONS(952),
    [anon_sym_LT_POUNDif] = ACTIONS(955),
    [anon_sym_LT_POUNDswitch] = ACTIONS(958),
    [anon_sym_LT_POUNDfunction] = ACTIONS(961),
    [anon_sym_LT_POUNDreturn] = ACTIONS(964),
    [anon_sym_LT_POUNDmacro] = ACTIONS(967),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(970),
    [anon_sym_LT_POUNDnested] = ACTIONS(972),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(975),
    [sym_fallback] = ACTIONS(978),
    [sym_flush] = ACTIONS(978),
    [anon_sym_LT_POUNDftl] = ACTIONS(981),
    [anon_sym_LT_POUNDimport] = ACTIONS(984),
    [anon_sym_LT_POUNDinclude] = ACTIONS(987),
    [sym_lt] = ACTIONS(978),
    [sym_nt] = ACTIONS(978),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(990),
    [sym_rt] = ACTIONS(978),
    [anon_sym_LT_POUNDsetting] = ACTIONS(993),
    [sym_stop] = ACTIONS(978),
    [sym_t] = ACTIONS(978),
    [anon_sym_LT_POUNDvisit] = ACTIONS(996),
    [anon_sym_LT_POUNDassign] = ACTIONS(999),
    [sym_end_assign] = ACTIONS(1002),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1005),
    [sym_end_global] = ACTIONS(1008),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1011),
    [sym_end_local] = ACTIONS(1014),
  },
  [250] = {
    [sym_directive] = STATE(152),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_return] = STATE(152),
    [sym_macro] = STATE(10),
    [sym_macro_middle] = STATE(249),
    [sym_nested] = STATE(152),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_macro_repeat1] = STATE(249),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUNDlist] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDreturn] = ACTIONS(245),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1017),
    [anon_sym_LT_POUNDnested] = ACTIONS(251),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(23),
    [sym_fallback] = ACTIONS(25),
    [sym_flush] = ACTIONS(25),
    [anon_sym_LT_POUNDftl] = ACTIONS(27),
    [anon_sym_LT_POUNDimport] = ACTIONS(29),
    [anon_sym_LT_POUNDinclude] = ACTIONS(31),
    [sym_lt] = ACTIONS(25),
    [sym_nt] = ACTIONS(25),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(33),
    [sym_rt] = ACTIONS(25),
    [anon_sym_LT_POUNDsetting] = ACTIONS(35),
    [sym_stop] = ACTIONS(25),
    [sym_t] = ACTIONS(25),
    [anon_sym_LT_POUNDvisit] = ACTIONS(37),
    [anon_sym_LT_POUNDassign] = ACTIONS(39),
    [sym_end_assign] = ACTIONS(41),
    [anon_sym_LT_POUNDglobal] = ACTIONS(43),
    [sym_end_global] = ACTIONS(45),
    [anon_sym_LT_POUNDlocal] = ACTIONS(47),
    [sym_end_local] = ACTIONS(49),
  },
  [251] = {
    [sym_type] = STATE(252),
    [sym_string] = STATE(107),
    [sym_boolean] = STATE(107),
    [sym_sequence] = STATE(107),
    [sym_hash] = STATE(107),
    [sym_top_level] = STATE(107),
    [sym_spec_var] = STATE(107),
    [aux_sym_as_expression_repeat2] = STATE(252),
    [anon_sym_COMMA] = ACTIONS(715),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(715),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(715),
    [sym_number] = ACTIONS(717),
    [anon_sym_true] = ACTIONS(717),
    [anon_sym_LBRACK] = ACTIONS(715),
    [anon_sym_RBRACK] = ACTIONS(715),
    [anon_sym_LBRACE] = ACTIONS(715),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(715),
  },
  [252] = {
    [sym_type] = STATE(252),
    [sym_string] = STATE(107),
    [sym_boolean] = STATE(107),
    [sym_sequence] = STATE(107),
    [sym_hash] = STATE(107),
    [sym_top_level] = STATE(107),
    [sym_spec_var] = STATE(107),
    [aux_sym_as_expression_repeat2] = STATE(252),
    [anon_sym_COMMA] = ACTIONS(719),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(721),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(721),
    [sym_number] = ACTIONS(724),
    [anon_sym_true] = ACTIONS(727),
    [anon_sym_LBRACK] = ACTIONS(730),
    [anon_sym_RBRACK] = ACTIONS(719),
    [anon_sym_LBRACE] = ACTIONS(733),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(736),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(739),
  },
  [253] = {
    [sym_type] = STATE(297),
    [sym_string] = STATE(129),
    [sym_boolean] = STATE(129),
    [sym_sequence] = STATE(129),
    [sym_hash] = STATE(129),
    [sym_top_level] = STATE(129),
    [sym_spec_var] = STATE(129),
    [aux_sym_as_expression_repeat2] = STATE(297),
    [anon_sym_as] = ACTIONS(528),
    [anon_sym_QMARK] = ACTIONS(479),
    [anon_sym_RPAREN] = ACTIONS(479),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(479),
    [sym_number] = ACTIONS(528),
    [anon_sym_true] = ACTIONS(528),
    [anon_sym_LBRACK] = ACTIONS(479),
    [anon_sym_LBRACE] = ACTIONS(479),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(528),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(479),
  },
  [254] = {
    [sym_type] = STATE(298),
    [sym_string] = STATE(129),
    [sym_boolean] = STATE(129),
    [sym_sequence] = STATE(129),
    [sym_hash] = STATE(129),
    [sym_top_level] = STATE(129),
    [sym_spec_var] = STATE(129),
    [aux_sym_as_expression_repeat2] = STATE(298),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(217),
    [sym_number] = ACTIONS(219),
    [anon_sym_true] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(225),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(229),
  },
  [255] = {
    [sym_type] = STATE(299),
    [sym_string] = STATE(129),
    [sym_boolean] = STATE(129),
    [sym_sequence] = STATE(129),
    [sym_hash] = STATE(129),
    [sym_top_level] = STATE(129),
    [sym_spec_var] = STATE(129),
    [aux_sym_as_expression_repeat2] = STATE(299),
    [anon_sym_as] = ACTIONS(455),
    [anon_sym_QMARK] = ACTIONS(428),
    [anon_sym_RPAREN] = ACTIONS(428),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(217),
    [sym_number] = ACTIONS(219),
    [anon_sym_true] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(225),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(229),
  },
  [256] = {
    [sym_type] = STATE(256),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(256),
    [anon_sym_as] = ACTIONS(432),
    [anon_sym_QMARK] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(430),
    [anon_sym_using] = ACTIONS(432),
    [anon_sym_COMMA] = ACTIONS(430),
    [anon_sym_DOT_DOT] = ACTIONS(432),
    [anon_sym_DOT_DOT_LT] = ACTIONS(430),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(430),
    [anon_sym_COLON] = ACTIONS(430),
    [anon_sym_STAR] = ACTIONS(432),
    [anon_sym_PLUS] = ACTIONS(432),
    [anon_sym_SLASH] = ACTIONS(432),
    [anon_sym_DASH] = ACTIONS(432),
    [anon_sym_PERCENT] = ACTIONS(432),
    [anon_sym_EQ_EQ] = ACTIONS(430),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_LT] = ACTIONS(432),
    [anon_sym_LT_EQ] = ACTIONS(430),
    [anon_sym_lt] = ACTIONS(432),
    [anon_sym_lte] = ACTIONS(432),
    [anon_sym_gt] = ACTIONS(432),
    [anon_sym_gte] = ACTIONS(432),
    [anon_sym_BANG] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(430),
    [anon_sym_PIPE_PIPE] = ACTIONS(430),
    [anon_sym_QMARK_QMARK] = ACTIONS(430),
    [anon_sym_EQ] = ACTIONS(432),
    [anon_sym_PLUS_EQ] = ACTIONS(430),
    [anon_sym_DASH_EQ] = ACTIONS(430),
    [anon_sym_STAR_EQ] = ACTIONS(430),
    [anon_sym_SLASH_EQ] = ACTIONS(430),
    [anon_sym_PERCENT_EQ] = ACTIONS(430),
    [anon_sym_PLUS_PLUS] = ACTIONS(430),
    [anon_sym_DASH_DASH] = ACTIONS(430),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(499),
    [sym_number] = ACTIONS(502),
    [anon_sym_true] = ACTIONS(505),
    [anon_sym_LBRACK] = ACTIONS(508),
    [anon_sym_LBRACE] = ACTIONS(511),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(514),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(517),
  },
  [257] = {
    [sym_type] = STATE(297),
    [sym_string] = STATE(129),
    [sym_boolean] = STATE(129),
    [sym_sequence] = STATE(129),
    [sym_hash] = STATE(129),
    [sym_top_level] = STATE(129),
    [sym_spec_var] = STATE(129),
    [aux_sym_as_expression_repeat2] = STATE(297),
    [anon_sym_as] = ACTIONS(455),
    [anon_sym_QMARK] = ACTIONS(428),
    [anon_sym_RPAREN] = ACTIONS(428),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(428),
    [sym_number] = ACTIONS(455),
    [anon_sym_true] = ACTIONS(455),
    [anon_sym_LBRACK] = ACTIONS(428),
    [anon_sym_LBRACE] = ACTIONS(428),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(428),
  },
  [258] = {
    [anon_sym_RBRACE] = ACTIONS(1019),
    [anon_sym_LPAREN] = ACTIONS(1019),
    [anon_sym_using] = ACTIONS(1021),
    [anon_sym_COMMA] = ACTIONS(1019),
    [anon_sym_DOT_DOT] = ACTIONS(1021),
    [anon_sym_DOT_DOT_LT] = ACTIONS(1019),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(1019),
    [anon_sym_COLON] = ACTIONS(1019),
    [anon_sym_STAR] = ACTIONS(1021),
    [anon_sym_PLUS] = ACTIONS(1021),
    [anon_sym_SLASH] = ACTIONS(1021),
    [anon_sym_DASH] = ACTIONS(1021),
    [anon_sym_PERCENT] = ACTIONS(1021),
    [anon_sym_EQ_EQ] = ACTIONS(1019),
    [anon_sym_BANG_EQ] = ACTIONS(1019),
    [anon_sym_LT] = ACTIONS(1021),
    [anon_sym_LT_EQ] = ACTIONS(1019),
    [anon_sym_lt] = ACTIONS(1021),
    [anon_sym_lte] = ACTIONS(1021),
    [anon_sym_gt] = ACTIONS(1021),
    [anon_sym_gte] = ACTIONS(1021),
    [anon_sym_BANG] = ACTIONS(1021),
    [anon_sym_AMP_AMP] = ACTIONS(1019),
    [anon_sym_PIPE_PIPE] = ACTIONS(1019),
    [anon_sym_QMARK_QMARK] = ACTIONS(1019),
    [anon_sym_EQ] = ACTIONS(1021),
    [anon_sym_PLUS_EQ] = ACTIONS(1019),
    [anon_sym_DASH_EQ] = ACTIONS(1019),
    [anon_sym_STAR_EQ] = ACTIONS(1019),
    [anon_sym_SLASH_EQ] = ACTIONS(1019),
    [anon_sym_PERCENT_EQ] = ACTIONS(1019),
    [anon_sym_PLUS_PLUS] = ACTIONS(1019),
    [anon_sym_DASH_DASH] = ACTIONS(1019),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1019),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1019),
    [sym_number] = ACTIONS(1021),
    [anon_sym_true] = ACTIONS(1021),
    [anon_sym_LBRACK] = ACTIONS(1019),
    [anon_sym_RBRACK] = ACTIONS(1019),
    [anon_sym_LBRACE] = ACTIONS(1019),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1021),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1019),
    [anon_sym_GT] = ACTIONS(1019),
  },
  [259] = {
    [sym_parameter_group] = STATE(259),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(175),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(175),
    [aux_sym_group_repeat1] = STATE(259),
    [anon_sym_as] = ACTIONS(1023),
    [anon_sym_QMARK] = ACTIONS(541),
    [anon_sym_RPAREN] = ACTIONS(565),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(544),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(544),
    [sym_number] = ACTIONS(547),
    [anon_sym_true] = ACTIONS(550),
    [anon_sym_LBRACK] = ACTIONS(553),
    [anon_sym_LBRACE] = ACTIONS(556),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(559),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(562),
  },
  [260] = {
    [sym_type] = STATE(260),
    [sym_string] = STATE(129),
    [sym_boolean] = STATE(129),
    [sym_sequence] = STATE(129),
    [sym_hash] = STATE(129),
    [sym_top_level] = STATE(129),
    [sym_spec_var] = STATE(129),
    [aux_sym_as_expression_repeat2] = STATE(260),
    [anon_sym_as] = ACTIONS(827),
    [anon_sym_QMARK] = ACTIONS(719),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(829),
    [sym_number] = ACTIONS(832),
    [anon_sym_true] = ACTIONS(835),
    [anon_sym_LBRACK] = ACTIONS(838),
    [anon_sym_LBRACE] = ACTIONS(841),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(844),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(847),
    [anon_sym_GT] = ACTIONS(719),
    [anon_sym_SLASH_GT] = ACTIONS(719),
  },
  [261] = {
    [anon_sym_as] = ACTIONS(680),
    [anon_sym_QMARK] = ACTIONS(680),
    [anon_sym_using] = ACTIONS(680),
    [anon_sym_COMMA] = ACTIONS(678),
    [anon_sym_DOT_DOT] = ACTIONS(680),
    [anon_sym_DOT_DOT_LT] = ACTIONS(678),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(678),
    [anon_sym_COLON] = ACTIONS(678),
    [anon_sym_STAR] = ACTIONS(680),
    [anon_sym_PLUS] = ACTIONS(680),
    [anon_sym_SLASH] = ACTIONS(680),
    [anon_sym_DASH] = ACTIONS(680),
    [anon_sym_PERCENT] = ACTIONS(680),
    [anon_sym_EQ_EQ] = ACTIONS(678),
    [anon_sym_BANG_EQ] = ACTIONS(678),
    [anon_sym_LT] = ACTIONS(680),
    [anon_sym_LT_EQ] = ACTIONS(678),
    [anon_sym_lt] = ACTIONS(680),
    [anon_sym_lte] = ACTIONS(680),
    [anon_sym_gt] = ACTIONS(680),
    [anon_sym_gte] = ACTIONS(680),
    [anon_sym_BANG] = ACTIONS(680),
    [anon_sym_AMP_AMP] = ACTIONS(678),
    [anon_sym_PIPE_PIPE] = ACTIONS(678),
    [anon_sym_QMARK_QMARK] = ACTIONS(678),
    [anon_sym_EQ] = ACTIONS(680),
    [anon_sym_PLUS_EQ] = ACTIONS(678),
    [anon_sym_DASH_EQ] = ACTIONS(678),
    [anon_sym_STAR_EQ] = ACTIONS(678),
    [anon_sym_SLASH_EQ] = ACTIONS(678),
    [anon_sym_PERCENT_EQ] = ACTIONS(678),
    [anon_sym_PLUS_PLUS] = ACTIONS(678),
    [anon_sym_DASH_DASH] = ACTIONS(678),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(678),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(678),
    [sym_number] = ACTIONS(680),
    [anon_sym_true] = ACTIONS(680),
    [anon_sym_LBRACK] = ACTIONS(678),
    [anon_sym_LBRACE] = ACTIONS(678),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(678),
    [anon_sym_GT] = ACTIONS(678),
    [anon_sym_SLASH_GT] = ACTIONS(678),
  },
  [262] = {
    [anon_sym_as] = ACTIONS(705),
    [anon_sym_QMARK] = ACTIONS(705),
    [anon_sym_using] = ACTIONS(705),
    [anon_sym_COMMA] = ACTIONS(703),
    [anon_sym_DOT_DOT] = ACTIONS(705),
    [anon_sym_DOT_DOT_LT] = ACTIONS(703),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(703),
    [anon_sym_COLON] = ACTIONS(703),
    [anon_sym_STAR] = ACTIONS(705),
    [anon_sym_PLUS] = ACTIONS(705),
    [anon_sym_SLASH] = ACTIONS(705),
    [anon_sym_DASH] = ACTIONS(705),
    [anon_sym_PERCENT] = ACTIONS(705),
    [anon_sym_EQ_EQ] = ACTIONS(703),
    [anon_sym_BANG_EQ] = ACTIONS(703),
    [anon_sym_LT] = ACTIONS(705),
    [anon_sym_LT_EQ] = ACTIONS(703),
    [anon_sym_lt] = ACTIONS(705),
    [anon_sym_lte] = ACTIONS(705),
    [anon_sym_gt] = ACTIONS(705),
    [anon_sym_gte] = ACTIONS(705),
    [anon_sym_BANG] = ACTIONS(705),
    [anon_sym_AMP_AMP] = ACTIONS(703),
    [anon_sym_PIPE_PIPE] = ACTIONS(703),
    [anon_sym_QMARK_QMARK] = ACTIONS(703),
    [anon_sym_EQ] = ACTIONS(705),
    [anon_sym_PLUS_EQ] = ACTIONS(703),
    [anon_sym_DASH_EQ] = ACTIONS(703),
    [anon_sym_STAR_EQ] = ACTIONS(703),
    [anon_sym_SLASH_EQ] = ACTIONS(703),
    [anon_sym_PERCENT_EQ] = ACTIONS(703),
    [anon_sym_PLUS_PLUS] = ACTIONS(703),
    [anon_sym_DASH_DASH] = ACTIONS(703),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(703),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(703),
    [sym_number] = ACTIONS(705),
    [anon_sym_true] = ACTIONS(705),
    [anon_sym_LBRACK] = ACTIONS(703),
    [anon_sym_LBRACE] = ACTIONS(703),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(703),
    [anon_sym_GT] = ACTIONS(703),
    [anon_sym_SLASH_GT] = ACTIONS(703),
  },
  [263] = {
    [anon_sym_as] = ACTIONS(709),
    [anon_sym_QMARK] = ACTIONS(709),
    [anon_sym_using] = ACTIONS(709),
    [anon_sym_COMMA] = ACTIONS(707),
    [anon_sym_DOT_DOT] = ACTIONS(709),
    [anon_sym_DOT_DOT_LT] = ACTIONS(707),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(707),
    [anon_sym_COLON] = ACTIONS(707),
    [anon_sym_STAR] = ACTIONS(709),
    [anon_sym_PLUS] = ACTIONS(709),
    [anon_sym_SLASH] = ACTIONS(709),
    [anon_sym_DASH] = ACTIONS(709),
    [anon_sym_PERCENT] = ACTIONS(709),
    [anon_sym_EQ_EQ] = ACTIONS(707),
    [anon_sym_BANG_EQ] = ACTIONS(707),
    [anon_sym_LT] = ACTIONS(709),
    [anon_sym_LT_EQ] = ACTIONS(707),
    [anon_sym_lt] = ACTIONS(709),
    [anon_sym_lte] = ACTIONS(709),
    [anon_sym_gt] = ACTIONS(709),
    [anon_sym_gte] = ACTIONS(709),
    [anon_sym_BANG] = ACTIONS(709),
    [anon_sym_AMP_AMP] = ACTIONS(707),
    [anon_sym_PIPE_PIPE] = ACTIONS(707),
    [anon_sym_QMARK_QMARK] = ACTIONS(707),
    [anon_sym_EQ] = ACTIONS(709),
    [anon_sym_PLUS_EQ] = ACTIONS(707),
    [anon_sym_DASH_EQ] = ACTIONS(707),
    [anon_sym_STAR_EQ] = ACTIONS(707),
    [anon_sym_SLASH_EQ] = ACTIONS(707),
    [anon_sym_PERCENT_EQ] = ACTIONS(707),
    [anon_sym_PLUS_PLUS] = ACTIONS(707),
    [anon_sym_DASH_DASH] = ACTIONS(707),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(707),
    [sym_number] = ACTIONS(709),
    [anon_sym_true] = ACTIONS(709),
    [anon_sym_LBRACK] = ACTIONS(707),
    [anon_sym_LBRACE] = ACTIONS(707),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(707),
    [anon_sym_GT] = ACTIONS(707),
    [anon_sym_SLASH_GT] = ACTIONS(707),
  },
  [264] = {
    [sym_parameter_group] = STATE(259),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(175),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(175),
    [aux_sym_group_repeat1] = STATE(259),
    [anon_sym_as] = ACTIONS(387),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(1026),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
  },
  [265] = {
    [sym_type] = STATE(260),
    [sym_string] = STATE(129),
    [sym_boolean] = STATE(129),
    [sym_sequence] = STATE(129),
    [sym_hash] = STATE(129),
    [sym_top_level] = STATE(129),
    [sym_spec_var] = STATE(129),
    [aux_sym_as_expression_repeat2] = STATE(260),
    [anon_sym_as] = ACTIONS(850),
    [anon_sym_QMARK] = ACTIONS(819),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(819),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(819),
    [sym_number] = ACTIONS(850),
    [anon_sym_true] = ACTIONS(850),
    [anon_sym_LBRACK] = ACTIONS(819),
    [anon_sym_LBRACE] = ACTIONS(819),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(850),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(819),
    [anon_sym_GT] = ACTIONS(819),
    [anon_sym_SLASH_GT] = ACTIONS(819),
  },
  [266] = {
    [sym_type] = STATE(260),
    [sym_string] = STATE(129),
    [sym_boolean] = STATE(129),
    [sym_sequence] = STATE(129),
    [sym_hash] = STATE(129),
    [sym_top_level] = STATE(129),
    [sym_spec_var] = STATE(129),
    [aux_sym_as_expression_repeat2] = STATE(260),
    [anon_sym_as] = ACTIONS(717),
    [anon_sym_QMARK] = ACTIONS(715),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(715),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(715),
    [sym_number] = ACTIONS(717),
    [anon_sym_true] = ACTIONS(717),
    [anon_sym_LBRACK] = ACTIONS(715),
    [anon_sym_LBRACE] = ACTIONS(715),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(715),
    [anon_sym_GT] = ACTIONS(715),
    [anon_sym_SLASH_GT] = ACTIONS(715),
  },
  [267] = {
    [anon_sym_RBRACE] = ACTIONS(678),
    [anon_sym_COMMA] = ACTIONS(678),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(678),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(678),
    [sym_number] = ACTIONS(680),
    [anon_sym_true] = ACTIONS(680),
    [anon_sym_LBRACK] = ACTIONS(678),
    [anon_sym_RBRACK] = ACTIONS(678),
    [anon_sym_LBRACE] = ACTIONS(678),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(678),
    [anon_sym_GT] = ACTIONS(678),
  },
  [268] = {
    [anon_sym_RBRACE] = ACTIONS(703),
    [anon_sym_COMMA] = ACTIONS(703),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(703),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(703),
    [sym_number] = ACTIONS(705),
    [anon_sym_true] = ACTIONS(705),
    [anon_sym_LBRACK] = ACTIONS(703),
    [anon_sym_RBRACK] = ACTIONS(703),
    [anon_sym_LBRACE] = ACTIONS(703),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(703),
    [anon_sym_GT] = ACTIONS(703),
  },
  [269] = {
    [anon_sym_RBRACE] = ACTIONS(707),
    [anon_sym_COMMA] = ACTIONS(707),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(707),
    [sym_number] = ACTIONS(709),
    [anon_sym_true] = ACTIONS(709),
    [anon_sym_LBRACK] = ACTIONS(707),
    [anon_sym_RBRACK] = ACTIONS(707),
    [anon_sym_LBRACE] = ACTIONS(707),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(707),
    [anon_sym_GT] = ACTIONS(707),
  },
  [270] = {
    [sym_parameter_group] = STATE(259),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(175),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(175),
    [aux_sym_group_repeat1] = STATE(259),
    [anon_sym_as] = ACTIONS(387),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(1028),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
  },
  [271] = {
    [anon_sym_as] = ACTIONS(1021),
    [anon_sym_QMARK] = ACTIONS(1021),
    [anon_sym_RPAREN] = ACTIONS(1019),
    [anon_sym_using] = ACTIONS(1021),
    [anon_sym_COMMA] = ACTIONS(1019),
    [anon_sym_DOT_DOT] = ACTIONS(1021),
    [anon_sym_DOT_DOT_LT] = ACTIONS(1019),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(1019),
    [anon_sym_COLON] = ACTIONS(1019),
    [anon_sym_STAR] = ACTIONS(1021),
    [anon_sym_PLUS] = ACTIONS(1021),
    [anon_sym_SLASH] = ACTIONS(1021),
    [anon_sym_DASH] = ACTIONS(1021),
    [anon_sym_PERCENT] = ACTIONS(1021),
    [anon_sym_EQ_EQ] = ACTIONS(1019),
    [anon_sym_BANG_EQ] = ACTIONS(1019),
    [anon_sym_LT] = ACTIONS(1021),
    [anon_sym_LT_EQ] = ACTIONS(1019),
    [anon_sym_lt] = ACTIONS(1021),
    [anon_sym_lte] = ACTIONS(1021),
    [anon_sym_gt] = ACTIONS(1021),
    [anon_sym_gte] = ACTIONS(1021),
    [anon_sym_BANG] = ACTIONS(1021),
    [anon_sym_AMP_AMP] = ACTIONS(1019),
    [anon_sym_PIPE_PIPE] = ACTIONS(1019),
    [anon_sym_QMARK_QMARK] = ACTIONS(1019),
    [anon_sym_EQ] = ACTIONS(1021),
    [anon_sym_PLUS_EQ] = ACTIONS(1019),
    [anon_sym_DASH_EQ] = ACTIONS(1019),
    [anon_sym_STAR_EQ] = ACTIONS(1019),
    [anon_sym_SLASH_EQ] = ACTIONS(1019),
    [anon_sym_PERCENT_EQ] = ACTIONS(1019),
    [anon_sym_PLUS_PLUS] = ACTIONS(1019),
    [anon_sym_DASH_DASH] = ACTIONS(1019),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1019),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1019),
    [sym_number] = ACTIONS(1021),
    [anon_sym_true] = ACTIONS(1021),
    [anon_sym_LBRACK] = ACTIONS(1019),
    [anon_sym_LBRACE] = ACTIONS(1019),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1021),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1019),
    [anon_sym_GT] = ACTIONS(1019),
  },
  [272] = {
    [sym_directive] = STATE(209),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_list_middle] = STATE(302),
    [sym_items] = STATE(209),
    [sym_sep] = STATE(209),
    [sym_sep_block] = STATE(214),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_list_repeat1] = STATE(302),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUNDlist] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1030),
    [sym_break] = ACTIONS(491),
    [sym_continue] = ACTIONS(491),
    [anon_sym_LT_POUNDitems] = ACTIONS(495),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(497),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(23),
    [sym_fallback] = ACTIONS(25),
    [sym_flush] = ACTIONS(25),
    [anon_sym_LT_POUNDftl] = ACTIONS(27),
    [anon_sym_LT_POUNDimport] = ACTIONS(29),
    [anon_sym_LT_POUNDinclude] = ACTIONS(31),
    [sym_lt] = ACTIONS(25),
    [sym_nt] = ACTIONS(25),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(33),
    [sym_rt] = ACTIONS(25),
    [anon_sym_LT_POUNDsetting] = ACTIONS(35),
    [sym_stop] = ACTIONS(25),
    [sym_t] = ACTIONS(25),
    [anon_sym_LT_POUNDvisit] = ACTIONS(37),
    [anon_sym_LT_POUNDassign] = ACTIONS(39),
    [sym_end_assign] = ACTIONS(41),
    [anon_sym_LT_POUNDglobal] = ACTIONS(43),
    [sym_end_global] = ACTIONS(45),
    [anon_sym_LT_POUNDlocal] = ACTIONS(47),
    [sym_end_local] = ACTIONS(49),
  },
  [273] = {
    [anon_sym_GT] = ACTIONS(1032),
  },
  [274] = {
    [anon_sym_LT_AT] = ACTIONS(1034),
    [anon_sym_LT_POUNDlist] = ACTIONS(1034),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1034),
    [sym_break] = ACTIONS(1034),
    [sym_continue] = ACTIONS(1034),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1034),
    [anon_sym_LT_POUNDitems] = ACTIONS(1034),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1034),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1034),
    [anon_sym_LT_POUNDif] = ACTIONS(1034),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1034),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1034),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1034),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1034),
    [sym_fallback] = ACTIONS(1034),
    [sym_flush] = ACTIONS(1034),
    [anon_sym_LT_POUNDftl] = ACTIONS(1034),
    [anon_sym_LT_POUNDimport] = ACTIONS(1034),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1034),
    [sym_lt] = ACTIONS(1034),
    [sym_nt] = ACTIONS(1034),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1034),
    [sym_rt] = ACTIONS(1034),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1034),
    [sym_stop] = ACTIONS(1034),
    [sym_t] = ACTIONS(1034),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1034),
    [anon_sym_LT_POUNDassign] = ACTIONS(1034),
    [sym_end_assign] = ACTIONS(1034),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1034),
    [sym_end_global] = ACTIONS(1034),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1034),
    [sym_end_local] = ACTIONS(1034),
  },
  [275] = {
    [ts_builtin_sym_end] = ACTIONS(1036),
    [sym_comment] = ACTIONS(1036),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1036),
    [anon_sym_LT_AT] = ACTIONS(1036),
    [anon_sym_LT_POUNDlist] = ACTIONS(1036),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1036),
    [sym_break] = ACTIONS(1036),
    [sym_continue] = ACTIONS(1036),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1036),
    [anon_sym_LT_POUNDitems] = ACTIONS(1036),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1036),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1036),
    [anon_sym_LT_POUNDif] = ACTIONS(1036),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1036),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1036),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1036),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1036),
    [anon_sym_LT_POUNDcase] = ACTIONS(1036),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1036),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1036),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1036),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1036),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1036),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1036),
    [anon_sym_LT_POUNDnested] = ACTIONS(1036),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1036),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1036),
    [sym_recover] = ACTIONS(1036),
    [sym_fallback] = ACTIONS(1036),
    [sym_flush] = ACTIONS(1036),
    [anon_sym_LT_POUNDftl] = ACTIONS(1036),
    [anon_sym_LT_POUNDimport] = ACTIONS(1036),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1036),
    [sym_lt] = ACTIONS(1036),
    [sym_nt] = ACTIONS(1036),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1036),
    [sym_rt] = ACTIONS(1036),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1036),
    [sym_stop] = ACTIONS(1036),
    [sym_t] = ACTIONS(1036),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1036),
    [anon_sym_LT_POUNDassign] = ACTIONS(1036),
    [sym_end_assign] = ACTIONS(1036),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1036),
    [sym_end_global] = ACTIONS(1036),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1036),
    [sym_end_local] = ACTIONS(1036),
  },
  [276] = {
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1038),
  },
  [277] = {
    [sym_directive] = STATE(209),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_list_middle] = STATE(277),
    [sym_items] = STATE(209),
    [sym_sep] = STATE(209),
    [sym_sep_block] = STATE(214),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_list_repeat1] = STATE(277),
    [anon_sym_LT_AT] = ACTIONS(1040),
    [anon_sym_LT_POUNDlist] = ACTIONS(1043),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1046),
    [sym_break] = ACTIONS(1048),
    [sym_continue] = ACTIONS(1048),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1046),
    [anon_sym_LT_POUNDitems] = ACTIONS(1051),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1054),
    [anon_sym_LT_POUNDif] = ACTIONS(1057),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1060),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1063),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1066),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1069),
    [sym_fallback] = ACTIONS(1072),
    [sym_flush] = ACTIONS(1072),
    [anon_sym_LT_POUNDftl] = ACTIONS(1075),
    [anon_sym_LT_POUNDimport] = ACTIONS(1078),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1081),
    [sym_lt] = ACTIONS(1072),
    [sym_nt] = ACTIONS(1072),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1084),
    [sym_rt] = ACTIONS(1072),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1087),
    [sym_stop] = ACTIONS(1072),
    [sym_t] = ACTIONS(1072),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1090),
    [anon_sym_LT_POUNDassign] = ACTIONS(1093),
    [sym_end_assign] = ACTIONS(1096),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1099),
    [sym_end_global] = ACTIONS(1102),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1105),
    [sym_end_local] = ACTIONS(1108),
  },
  [278] = {
    [anon_sym_as] = ACTIONS(680),
    [anon_sym_QMARK] = ACTIONS(678),
    [anon_sym_RPAREN] = ACTIONS(678),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(678),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(678),
    [sym_number] = ACTIONS(680),
    [anon_sym_true] = ACTIONS(680),
    [anon_sym_LBRACK] = ACTIONS(678),
    [anon_sym_LBRACE] = ACTIONS(678),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(678),
    [anon_sym_GT] = ACTIONS(678),
    [anon_sym_SLASH_GT] = ACTIONS(678),
  },
  [279] = {
    [anon_sym_as] = ACTIONS(705),
    [anon_sym_QMARK] = ACTIONS(703),
    [anon_sym_RPAREN] = ACTIONS(703),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(703),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(703),
    [sym_number] = ACTIONS(705),
    [anon_sym_true] = ACTIONS(705),
    [anon_sym_LBRACK] = ACTIONS(703),
    [anon_sym_LBRACE] = ACTIONS(703),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(703),
    [anon_sym_GT] = ACTIONS(703),
    [anon_sym_SLASH_GT] = ACTIONS(703),
  },
  [280] = {
    [anon_sym_as] = ACTIONS(709),
    [anon_sym_QMARK] = ACTIONS(707),
    [anon_sym_LPAREN] = ACTIONS(707),
    [anon_sym_RPAREN] = ACTIONS(707),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(707),
    [sym_number] = ACTIONS(709),
    [anon_sym_true] = ACTIONS(709),
    [anon_sym_LBRACK] = ACTIONS(707),
    [anon_sym_LBRACE] = ACTIONS(707),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(707),
    [anon_sym_GT] = ACTIONS(707),
    [anon_sym_SLASH_GT] = ACTIONS(707),
  },
  [281] = {
    [sym_parameter_group] = STATE(259),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(175),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(175),
    [aux_sym_group_repeat1] = STATE(259),
    [anon_sym_as] = ACTIONS(387),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(1111),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
  },
  [282] = {
    [sym_directive] = STATE(232),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_elseif] = STATE(232),
    [sym_if_middle] = STATE(306),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_if_repeat1] = STATE(306),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUNDlist] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1113),
    [anon_sym_LT_POUNDelseif] = ACTIONS(536),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(23),
    [sym_fallback] = ACTIONS(25),
    [sym_flush] = ACTIONS(25),
    [anon_sym_LT_POUNDftl] = ACTIONS(27),
    [anon_sym_LT_POUNDimport] = ACTIONS(29),
    [anon_sym_LT_POUNDinclude] = ACTIONS(31),
    [sym_lt] = ACTIONS(25),
    [sym_nt] = ACTIONS(25),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(33),
    [sym_rt] = ACTIONS(25),
    [anon_sym_LT_POUNDsetting] = ACTIONS(35),
    [sym_stop] = ACTIONS(25),
    [sym_t] = ACTIONS(25),
    [anon_sym_LT_POUNDvisit] = ACTIONS(37),
    [anon_sym_LT_POUNDassign] = ACTIONS(39),
    [sym_end_assign] = ACTIONS(41),
    [anon_sym_LT_POUNDglobal] = ACTIONS(43),
    [sym_end_global] = ACTIONS(45),
    [anon_sym_LT_POUNDlocal] = ACTIONS(47),
    [sym_end_local] = ACTIONS(49),
  },
  [283] = {
    [anon_sym_LT_AT] = ACTIONS(1115),
    [anon_sym_LT_POUNDlist] = ACTIONS(1115),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1115),
    [anon_sym_LT_POUNDif] = ACTIONS(1115),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1115),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1115),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1115),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1115),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1115),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1115),
    [sym_fallback] = ACTIONS(1115),
    [sym_flush] = ACTIONS(1115),
    [anon_sym_LT_POUNDftl] = ACTIONS(1115),
    [anon_sym_LT_POUNDimport] = ACTIONS(1115),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1115),
    [sym_lt] = ACTIONS(1115),
    [sym_nt] = ACTIONS(1115),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1115),
    [sym_rt] = ACTIONS(1115),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1115),
    [sym_stop] = ACTIONS(1115),
    [sym_t] = ACTIONS(1115),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1115),
    [anon_sym_LT_POUNDassign] = ACTIONS(1115),
    [sym_end_assign] = ACTIONS(1115),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1115),
    [sym_end_global] = ACTIONS(1115),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1115),
    [sym_end_local] = ACTIONS(1115),
  },
  [284] = {
    [sym_parameter_group] = STATE(143),
    [sym_as_expression] = STATE(46),
    [sym_expression] = STATE(46),
    [sym_type] = STATE(50),
    [sym_built_in] = STATE(46),
    [sym_string] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_sequence] = STATE(39),
    [sym_hash] = STATE(39),
    [sym_top_level] = STATE(39),
    [sym_spec_var] = STATE(39),
    [aux_sym_as_expression_repeat1] = STATE(50),
    [aux_sym_group_repeat1] = STATE(143),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(1117),
  },
  [285] = {
    [ts_builtin_sym_end] = ACTIONS(1119),
    [sym_comment] = ACTIONS(1119),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1119),
    [anon_sym_LT_AT] = ACTIONS(1119),
    [anon_sym_LT_POUNDlist] = ACTIONS(1119),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1119),
    [sym_break] = ACTIONS(1119),
    [sym_continue] = ACTIONS(1119),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1119),
    [anon_sym_LT_POUNDitems] = ACTIONS(1119),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1119),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1119),
    [anon_sym_LT_POUNDif] = ACTIONS(1119),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1119),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1119),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1119),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1119),
    [anon_sym_LT_POUNDcase] = ACTIONS(1119),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1119),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1119),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1119),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1119),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1119),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1119),
    [anon_sym_LT_POUNDnested] = ACTIONS(1119),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1119),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1119),
    [sym_recover] = ACTIONS(1119),
    [sym_fallback] = ACTIONS(1119),
    [sym_flush] = ACTIONS(1119),
    [anon_sym_LT_POUNDftl] = ACTIONS(1119),
    [anon_sym_LT_POUNDimport] = ACTIONS(1119),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1119),
    [sym_lt] = ACTIONS(1119),
    [sym_nt] = ACTIONS(1119),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1119),
    [sym_rt] = ACTIONS(1119),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1119),
    [sym_stop] = ACTIONS(1119),
    [sym_t] = ACTIONS(1119),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1119),
    [anon_sym_LT_POUNDassign] = ACTIONS(1119),
    [sym_end_assign] = ACTIONS(1119),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1119),
    [sym_end_global] = ACTIONS(1119),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1119),
    [sym_end_local] = ACTIONS(1119),
  },
  [286] = {
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1121),
  },
  [287] = {
    [sym_directive] = STATE(232),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_elseif] = STATE(232),
    [sym_if_middle] = STATE(287),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_if_repeat1] = STATE(287),
    [anon_sym_LT_AT] = ACTIONS(1123),
    [anon_sym_LT_POUNDlist] = ACTIONS(1126),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1129),
    [anon_sym_LT_POUNDif] = ACTIONS(1131),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1129),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1134),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1137),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1140),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1143),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1146),
    [sym_fallback] = ACTIONS(1149),
    [sym_flush] = ACTIONS(1149),
    [anon_sym_LT_POUNDftl] = ACTIONS(1152),
    [anon_sym_LT_POUNDimport] = ACTIONS(1155),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1158),
    [sym_lt] = ACTIONS(1149),
    [sym_nt] = ACTIONS(1149),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1161),
    [sym_rt] = ACTIONS(1149),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1164),
    [sym_stop] = ACTIONS(1149),
    [sym_t] = ACTIONS(1149),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1167),
    [anon_sym_LT_POUNDassign] = ACTIONS(1170),
    [sym_end_assign] = ACTIONS(1173),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1176),
    [sym_end_global] = ACTIONS(1179),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1182),
    [sym_end_local] = ACTIONS(1185),
  },
  [288] = {
    [anon_sym_GT] = ACTIONS(1188),
  },
  [289] = {
    [sym_directive] = STATE(310),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_case_repeat1] = STATE(310),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUNDlist] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1190),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(23),
    [sym_fallback] = ACTIONS(25),
    [sym_flush] = ACTIONS(25),
    [anon_sym_LT_POUNDftl] = ACTIONS(27),
    [anon_sym_LT_POUNDimport] = ACTIONS(29),
    [anon_sym_LT_POUNDinclude] = ACTIONS(31),
    [sym_lt] = ACTIONS(25),
    [sym_nt] = ACTIONS(25),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(33),
    [sym_rt] = ACTIONS(25),
    [anon_sym_LT_POUNDsetting] = ACTIONS(35),
    [sym_stop] = ACTIONS(25),
    [sym_t] = ACTIONS(25),
    [anon_sym_LT_POUNDvisit] = ACTIONS(37),
    [anon_sym_LT_POUNDassign] = ACTIONS(39),
    [sym_end_assign] = ACTIONS(41),
    [anon_sym_LT_POUNDglobal] = ACTIONS(43),
    [sym_end_global] = ACTIONS(45),
    [anon_sym_LT_POUNDlocal] = ACTIONS(47),
    [sym_end_local] = ACTIONS(49),
  },
  [290] = {
    [ts_builtin_sym_end] = ACTIONS(1192),
    [sym_comment] = ACTIONS(1192),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1192),
    [anon_sym_LT_AT] = ACTIONS(1192),
    [anon_sym_LT_POUNDlist] = ACTIONS(1192),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1192),
    [sym_break] = ACTIONS(1192),
    [sym_continue] = ACTIONS(1192),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1192),
    [anon_sym_LT_POUNDitems] = ACTIONS(1192),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1192),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1192),
    [anon_sym_LT_POUNDif] = ACTIONS(1192),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1192),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1192),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1192),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1192),
    [anon_sym_LT_POUNDcase] = ACTIONS(1192),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1192),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1192),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1192),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1192),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1192),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1192),
    [anon_sym_LT_POUNDnested] = ACTIONS(1192),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1192),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1192),
    [sym_recover] = ACTIONS(1192),
    [sym_fallback] = ACTIONS(1192),
    [sym_flush] = ACTIONS(1192),
    [anon_sym_LT_POUNDftl] = ACTIONS(1192),
    [anon_sym_LT_POUNDimport] = ACTIONS(1192),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1192),
    [sym_lt] = ACTIONS(1192),
    [sym_nt] = ACTIONS(1192),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1192),
    [sym_rt] = ACTIONS(1192),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1192),
    [sym_stop] = ACTIONS(1192),
    [sym_t] = ACTIONS(1192),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1192),
    [anon_sym_LT_POUNDassign] = ACTIONS(1192),
    [sym_end_assign] = ACTIONS(1192),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1192),
    [sym_end_global] = ACTIONS(1192),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1192),
    [sym_end_local] = ACTIONS(1192),
  },
  [291] = {
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1194),
  },
  [292] = {
    [sym_case] = STATE(238),
    [sym_switch_middle] = STATE(292),
    [aux_sym_switch_repeat1] = STATE(292),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1196),
    [anon_sym_LT_POUNDcase] = ACTIONS(1198),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1196),
  },
  [293] = {
    [anon_sym_LT_AT] = ACTIONS(1201),
    [anon_sym_LT_POUNDlist] = ACTIONS(1201),
    [anon_sym_LT_POUNDif] = ACTIONS(1201),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1201),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1201),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1201),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1201),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1201),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1201),
    [anon_sym_LT_POUNDnested] = ACTIONS(1201),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1201),
    [sym_fallback] = ACTIONS(1201),
    [sym_flush] = ACTIONS(1201),
    [anon_sym_LT_POUNDftl] = ACTIONS(1201),
    [anon_sym_LT_POUNDimport] = ACTIONS(1201),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1201),
    [sym_lt] = ACTIONS(1201),
    [sym_nt] = ACTIONS(1201),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1201),
    [sym_rt] = ACTIONS(1201),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1201),
    [sym_stop] = ACTIONS(1201),
    [sym_t] = ACTIONS(1201),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1201),
    [anon_sym_LT_POUNDassign] = ACTIONS(1201),
    [sym_end_assign] = ACTIONS(1201),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1201),
    [sym_end_global] = ACTIONS(1201),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1201),
    [sym_end_local] = ACTIONS(1201),
  },
  [294] = {
    [ts_builtin_sym_end] = ACTIONS(1203),
    [sym_comment] = ACTIONS(1203),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1203),
    [anon_sym_LT_AT] = ACTIONS(1203),
    [anon_sym_LT_POUNDlist] = ACTIONS(1203),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1203),
    [sym_break] = ACTIONS(1203),
    [sym_continue] = ACTIONS(1203),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1203),
    [anon_sym_LT_POUNDitems] = ACTIONS(1203),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1203),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1203),
    [anon_sym_LT_POUNDif] = ACTIONS(1203),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1203),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1203),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1203),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1203),
    [anon_sym_LT_POUNDcase] = ACTIONS(1203),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1203),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1203),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1203),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1203),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1203),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1203),
    [anon_sym_LT_POUNDnested] = ACTIONS(1203),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1203),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1203),
    [sym_recover] = ACTIONS(1203),
    [sym_fallback] = ACTIONS(1203),
    [sym_flush] = ACTIONS(1203),
    [anon_sym_LT_POUNDftl] = ACTIONS(1203),
    [anon_sym_LT_POUNDimport] = ACTIONS(1203),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1203),
    [sym_lt] = ACTIONS(1203),
    [sym_nt] = ACTIONS(1203),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1203),
    [sym_rt] = ACTIONS(1203),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1203),
    [sym_stop] = ACTIONS(1203),
    [sym_t] = ACTIONS(1203),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1203),
    [anon_sym_LT_POUNDassign] = ACTIONS(1203),
    [sym_end_assign] = ACTIONS(1203),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1203),
    [sym_end_global] = ACTIONS(1203),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1203),
    [sym_end_local] = ACTIONS(1203),
  },
  [295] = {
    [anon_sym_LT_AT] = ACTIONS(1205),
    [anon_sym_LT_POUNDlist] = ACTIONS(1205),
    [anon_sym_LT_POUNDif] = ACTIONS(1205),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1205),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1205),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1205),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1205),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1205),
    [anon_sym_LT_POUNDnested] = ACTIONS(1205),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1205),
    [sym_fallback] = ACTIONS(1205),
    [sym_flush] = ACTIONS(1205),
    [anon_sym_LT_POUNDftl] = ACTIONS(1205),
    [anon_sym_LT_POUNDimport] = ACTIONS(1205),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1205),
    [sym_lt] = ACTIONS(1205),
    [sym_nt] = ACTIONS(1205),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1205),
    [sym_rt] = ACTIONS(1205),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1205),
    [sym_stop] = ACTIONS(1205),
    [sym_t] = ACTIONS(1205),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1205),
    [anon_sym_LT_POUNDassign] = ACTIONS(1205),
    [sym_end_assign] = ACTIONS(1205),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1205),
    [sym_end_global] = ACTIONS(1205),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1205),
    [sym_end_local] = ACTIONS(1205),
  },
  [296] = {
    [ts_builtin_sym_end] = ACTIONS(1207),
    [sym_comment] = ACTIONS(1207),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1207),
    [anon_sym_LT_AT] = ACTIONS(1207),
    [anon_sym_LT_POUNDlist] = ACTIONS(1207),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1207),
    [sym_break] = ACTIONS(1207),
    [sym_continue] = ACTIONS(1207),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1207),
    [anon_sym_LT_POUNDitems] = ACTIONS(1207),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1207),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1207),
    [anon_sym_LT_POUNDif] = ACTIONS(1207),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1207),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1207),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1207),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1207),
    [anon_sym_LT_POUNDcase] = ACTIONS(1207),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1207),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1207),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1207),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1207),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1207),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1207),
    [anon_sym_LT_POUNDnested] = ACTIONS(1207),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1207),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1207),
    [sym_recover] = ACTIONS(1207),
    [sym_fallback] = ACTIONS(1207),
    [sym_flush] = ACTIONS(1207),
    [anon_sym_LT_POUNDftl] = ACTIONS(1207),
    [anon_sym_LT_POUNDimport] = ACTIONS(1207),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1207),
    [sym_lt] = ACTIONS(1207),
    [sym_nt] = ACTIONS(1207),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1207),
    [sym_rt] = ACTIONS(1207),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1207),
    [sym_stop] = ACTIONS(1207),
    [sym_t] = ACTIONS(1207),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1207),
    [anon_sym_LT_POUNDassign] = ACTIONS(1207),
    [sym_end_assign] = ACTIONS(1207),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1207),
    [sym_end_global] = ACTIONS(1207),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1207),
    [sym_end_local] = ACTIONS(1207),
  },
  [297] = {
    [sym_type] = STATE(297),
    [sym_string] = STATE(129),
    [sym_boolean] = STATE(129),
    [sym_sequence] = STATE(129),
    [sym_hash] = STATE(129),
    [sym_top_level] = STATE(129),
    [sym_spec_var] = STATE(129),
    [aux_sym_as_expression_repeat2] = STATE(297),
    [anon_sym_as] = ACTIONS(827),
    [anon_sym_QMARK] = ACTIONS(719),
    [anon_sym_RPAREN] = ACTIONS(719),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(829),
    [sym_number] = ACTIONS(832),
    [anon_sym_true] = ACTIONS(835),
    [anon_sym_LBRACK] = ACTIONS(838),
    [anon_sym_LBRACE] = ACTIONS(841),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(844),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(847),
  },
  [298] = {
    [sym_type] = STATE(297),
    [sym_string] = STATE(129),
    [sym_boolean] = STATE(129),
    [sym_sequence] = STATE(129),
    [sym_hash] = STATE(129),
    [sym_top_level] = STATE(129),
    [sym_spec_var] = STATE(129),
    [aux_sym_as_expression_repeat2] = STATE(297),
    [anon_sym_as] = ACTIONS(850),
    [anon_sym_QMARK] = ACTIONS(819),
    [anon_sym_RPAREN] = ACTIONS(819),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(819),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(819),
    [sym_number] = ACTIONS(850),
    [anon_sym_true] = ACTIONS(850),
    [anon_sym_LBRACK] = ACTIONS(819),
    [anon_sym_LBRACE] = ACTIONS(819),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(850),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(819),
  },
  [299] = {
    [sym_type] = STATE(297),
    [sym_string] = STATE(129),
    [sym_boolean] = STATE(129),
    [sym_sequence] = STATE(129),
    [sym_hash] = STATE(129),
    [sym_top_level] = STATE(129),
    [sym_spec_var] = STATE(129),
    [aux_sym_as_expression_repeat2] = STATE(297),
    [anon_sym_as] = ACTIONS(717),
    [anon_sym_QMARK] = ACTIONS(715),
    [anon_sym_RPAREN] = ACTIONS(715),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(715),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(715),
    [sym_number] = ACTIONS(717),
    [anon_sym_true] = ACTIONS(717),
    [anon_sym_LBRACK] = ACTIONS(715),
    [anon_sym_LBRACE] = ACTIONS(715),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(715),
  },
  [300] = {
    [anon_sym_as] = ACTIONS(1021),
    [anon_sym_QMARK] = ACTIONS(1021),
    [anon_sym_using] = ACTIONS(1021),
    [anon_sym_COMMA] = ACTIONS(1019),
    [anon_sym_DOT_DOT] = ACTIONS(1021),
    [anon_sym_DOT_DOT_LT] = ACTIONS(1019),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(1019),
    [anon_sym_COLON] = ACTIONS(1019),
    [anon_sym_STAR] = ACTIONS(1021),
    [anon_sym_PLUS] = ACTIONS(1021),
    [anon_sym_SLASH] = ACTIONS(1021),
    [anon_sym_DASH] = ACTIONS(1021),
    [anon_sym_PERCENT] = ACTIONS(1021),
    [anon_sym_EQ_EQ] = ACTIONS(1019),
    [anon_sym_BANG_EQ] = ACTIONS(1019),
    [anon_sym_LT] = ACTIONS(1021),
    [anon_sym_LT_EQ] = ACTIONS(1019),
    [anon_sym_lt] = ACTIONS(1021),
    [anon_sym_lte] = ACTIONS(1021),
    [anon_sym_gt] = ACTIONS(1021),
    [anon_sym_gte] = ACTIONS(1021),
    [anon_sym_BANG] = ACTIONS(1021),
    [anon_sym_AMP_AMP] = ACTIONS(1019),
    [anon_sym_PIPE_PIPE] = ACTIONS(1019),
    [anon_sym_QMARK_QMARK] = ACTIONS(1019),
    [anon_sym_EQ] = ACTIONS(1021),
    [anon_sym_PLUS_EQ] = ACTIONS(1019),
    [anon_sym_DASH_EQ] = ACTIONS(1019),
    [anon_sym_STAR_EQ] = ACTIONS(1019),
    [anon_sym_SLASH_EQ] = ACTIONS(1019),
    [anon_sym_PERCENT_EQ] = ACTIONS(1019),
    [anon_sym_PLUS_PLUS] = ACTIONS(1019),
    [anon_sym_DASH_DASH] = ACTIONS(1019),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1019),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1019),
    [sym_number] = ACTIONS(1021),
    [anon_sym_true] = ACTIONS(1021),
    [anon_sym_LBRACK] = ACTIONS(1019),
    [anon_sym_LBRACE] = ACTIONS(1019),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1021),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1019),
    [anon_sym_GT] = ACTIONS(1019),
    [anon_sym_SLASH_GT] = ACTIONS(1019),
  },
  [301] = {
    [anon_sym_RBRACE] = ACTIONS(1019),
    [anon_sym_COMMA] = ACTIONS(1019),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1019),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1019),
    [sym_number] = ACTIONS(1021),
    [anon_sym_true] = ACTIONS(1021),
    [anon_sym_LBRACK] = ACTIONS(1019),
    [anon_sym_RBRACK] = ACTIONS(1019),
    [anon_sym_LBRACE] = ACTIONS(1019),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1021),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1019),
    [anon_sym_GT] = ACTIONS(1019),
  },
  [302] = {
    [sym_directive] = STATE(209),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_list_middle] = STATE(302),
    [sym_items] = STATE(209),
    [sym_sep] = STATE(209),
    [sym_sep_block] = STATE(214),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_list_repeat1] = STATE(302),
    [anon_sym_LT_AT] = ACTIONS(1040),
    [anon_sym_LT_POUNDlist] = ACTIONS(1043),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1046),
    [sym_break] = ACTIONS(1048),
    [sym_continue] = ACTIONS(1048),
    [anon_sym_LT_POUNDitems] = ACTIONS(1051),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1054),
    [anon_sym_LT_POUNDif] = ACTIONS(1057),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1060),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1063),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1066),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1069),
    [sym_fallback] = ACTIONS(1072),
    [sym_flush] = ACTIONS(1072),
    [anon_sym_LT_POUNDftl] = ACTIONS(1075),
    [anon_sym_LT_POUNDimport] = ACTIONS(1078),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1081),
    [sym_lt] = ACTIONS(1072),
    [sym_nt] = ACTIONS(1072),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1084),
    [sym_rt] = ACTIONS(1072),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1087),
    [sym_stop] = ACTIONS(1072),
    [sym_t] = ACTIONS(1072),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1090),
    [anon_sym_LT_POUNDassign] = ACTIONS(1093),
    [sym_end_assign] = ACTIONS(1096),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1099),
    [sym_end_global] = ACTIONS(1102),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1105),
    [sym_end_local] = ACTIONS(1108),
  },
  [303] = {
    [sym_directive] = STATE(312),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_items_middle] = STATE(314),
    [sym_sep] = STATE(312),
    [sym_sep_block] = STATE(214),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_items_repeat1] = STATE(314),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUNDlist] = ACTIONS(13),
    [sym_break] = ACTIONS(1209),
    [sym_continue] = ACTIONS(1209),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1211),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(497),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(23),
    [sym_fallback] = ACTIONS(25),
    [sym_flush] = ACTIONS(25),
    [anon_sym_LT_POUNDftl] = ACTIONS(27),
    [anon_sym_LT_POUNDimport] = ACTIONS(29),
    [anon_sym_LT_POUNDinclude] = ACTIONS(31),
    [sym_lt] = ACTIONS(25),
    [sym_nt] = ACTIONS(25),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(33),
    [sym_rt] = ACTIONS(25),
    [anon_sym_LT_POUNDsetting] = ACTIONS(35),
    [sym_stop] = ACTIONS(25),
    [sym_t] = ACTIONS(25),
    [anon_sym_LT_POUNDvisit] = ACTIONS(37),
    [anon_sym_LT_POUNDassign] = ACTIONS(39),
    [sym_end_assign] = ACTIONS(41),
    [anon_sym_LT_POUNDglobal] = ACTIONS(43),
    [sym_end_global] = ACTIONS(45),
    [anon_sym_LT_POUNDlocal] = ACTIONS(47),
    [sym_end_local] = ACTIONS(49),
  },
  [304] = {
    [ts_builtin_sym_end] = ACTIONS(1213),
    [sym_comment] = ACTIONS(1213),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1213),
    [anon_sym_LT_AT] = ACTIONS(1213),
    [anon_sym_LT_POUNDlist] = ACTIONS(1213),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1213),
    [sym_break] = ACTIONS(1213),
    [sym_continue] = ACTIONS(1213),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1213),
    [anon_sym_LT_POUNDitems] = ACTIONS(1213),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1213),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1213),
    [anon_sym_LT_POUNDif] = ACTIONS(1213),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1213),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1213),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1213),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1213),
    [anon_sym_LT_POUNDcase] = ACTIONS(1213),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1213),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1213),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1213),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1213),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1213),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1213),
    [anon_sym_LT_POUNDnested] = ACTIONS(1213),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1213),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1213),
    [sym_recover] = ACTIONS(1213),
    [sym_fallback] = ACTIONS(1213),
    [sym_flush] = ACTIONS(1213),
    [anon_sym_LT_POUNDftl] = ACTIONS(1213),
    [anon_sym_LT_POUNDimport] = ACTIONS(1213),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1213),
    [sym_lt] = ACTIONS(1213),
    [sym_nt] = ACTIONS(1213),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1213),
    [sym_rt] = ACTIONS(1213),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1213),
    [sym_stop] = ACTIONS(1213),
    [sym_t] = ACTIONS(1213),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1213),
    [anon_sym_LT_POUNDassign] = ACTIONS(1213),
    [sym_end_assign] = ACTIONS(1213),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1213),
    [sym_end_global] = ACTIONS(1213),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1213),
    [sym_end_local] = ACTIONS(1213),
  },
  [305] = {
    [anon_sym_as] = ACTIONS(1021),
    [anon_sym_QMARK] = ACTIONS(1019),
    [anon_sym_LPAREN] = ACTIONS(1019),
    [anon_sym_RPAREN] = ACTIONS(1019),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1019),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1019),
    [sym_number] = ACTIONS(1021),
    [anon_sym_true] = ACTIONS(1021),
    [anon_sym_LBRACK] = ACTIONS(1019),
    [anon_sym_LBRACE] = ACTIONS(1019),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1021),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1019),
    [anon_sym_GT] = ACTIONS(1019),
    [anon_sym_SLASH_GT] = ACTIONS(1019),
  },
  [306] = {
    [sym_directive] = STATE(232),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_elseif] = STATE(232),
    [sym_if_middle] = STATE(306),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_if_repeat1] = STATE(306),
    [anon_sym_LT_AT] = ACTIONS(1123),
    [anon_sym_LT_POUNDlist] = ACTIONS(1126),
    [anon_sym_LT_POUNDif] = ACTIONS(1131),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1129),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1134),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1137),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1140),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1143),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1146),
    [sym_fallback] = ACTIONS(1149),
    [sym_flush] = ACTIONS(1149),
    [anon_sym_LT_POUNDftl] = ACTIONS(1152),
    [anon_sym_LT_POUNDimport] = ACTIONS(1155),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1158),
    [sym_lt] = ACTIONS(1149),
    [sym_nt] = ACTIONS(1149),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1161),
    [sym_rt] = ACTIONS(1149),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1164),
    [sym_stop] = ACTIONS(1149),
    [sym_t] = ACTIONS(1149),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1167),
    [anon_sym_LT_POUNDassign] = ACTIONS(1170),
    [sym_end_assign] = ACTIONS(1173),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1176),
    [sym_end_global] = ACTIONS(1179),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1182),
    [sym_end_local] = ACTIONS(1185),
  },
  [307] = {
    [anon_sym_LT_AT] = ACTIONS(1215),
    [anon_sym_LT_POUNDlist] = ACTIONS(1215),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1215),
    [anon_sym_LT_POUNDif] = ACTIONS(1215),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1215),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1215),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1215),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1215),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1215),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1215),
    [sym_fallback] = ACTIONS(1215),
    [sym_flush] = ACTIONS(1215),
    [anon_sym_LT_POUNDftl] = ACTIONS(1215),
    [anon_sym_LT_POUNDimport] = ACTIONS(1215),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1215),
    [sym_lt] = ACTIONS(1215),
    [sym_nt] = ACTIONS(1215),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1215),
    [sym_rt] = ACTIONS(1215),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1215),
    [sym_stop] = ACTIONS(1215),
    [sym_t] = ACTIONS(1215),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1215),
    [anon_sym_LT_POUNDassign] = ACTIONS(1215),
    [sym_end_assign] = ACTIONS(1215),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1215),
    [sym_end_global] = ACTIONS(1215),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1215),
    [sym_end_local] = ACTIONS(1215),
  },
  [308] = {
    [ts_builtin_sym_end] = ACTIONS(1217),
    [sym_comment] = ACTIONS(1217),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1217),
    [anon_sym_LT_AT] = ACTIONS(1217),
    [anon_sym_LT_POUNDlist] = ACTIONS(1217),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1217),
    [sym_break] = ACTIONS(1217),
    [sym_continue] = ACTIONS(1217),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1217),
    [anon_sym_LT_POUNDitems] = ACTIONS(1217),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1217),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1217),
    [anon_sym_LT_POUNDif] = ACTIONS(1217),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1217),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1217),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1217),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1217),
    [anon_sym_LT_POUNDcase] = ACTIONS(1217),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1217),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1217),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1217),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1217),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1217),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1217),
    [anon_sym_LT_POUNDnested] = ACTIONS(1217),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1217),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1217),
    [sym_recover] = ACTIONS(1217),
    [sym_fallback] = ACTIONS(1217),
    [sym_flush] = ACTIONS(1217),
    [anon_sym_LT_POUNDftl] = ACTIONS(1217),
    [anon_sym_LT_POUNDimport] = ACTIONS(1217),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1217),
    [sym_lt] = ACTIONS(1217),
    [sym_nt] = ACTIONS(1217),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1217),
    [sym_rt] = ACTIONS(1217),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1217),
    [sym_stop] = ACTIONS(1217),
    [sym_t] = ACTIONS(1217),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1217),
    [anon_sym_LT_POUNDassign] = ACTIONS(1217),
    [sym_end_assign] = ACTIONS(1217),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1217),
    [sym_end_global] = ACTIONS(1217),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1217),
    [sym_end_local] = ACTIONS(1217),
  },
  [309] = {
    [sym_directive] = STATE(315),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_case_repeat1] = STATE(315),
    [aux_sym_case_repeat2] = STATE(316),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUNDlist] = ACTIONS(13),
    [sym_break] = ACTIONS(1219),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1221),
    [anon_sym_LT_POUNDcase] = ACTIONS(1221),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1221),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(23),
    [sym_fallback] = ACTIONS(25),
    [sym_flush] = ACTIONS(25),
    [anon_sym_LT_POUNDftl] = ACTIONS(27),
    [anon_sym_LT_POUNDimport] = ACTIONS(29),
    [anon_sym_LT_POUNDinclude] = ACTIONS(31),
    [sym_lt] = ACTIONS(25),
    [sym_nt] = ACTIONS(25),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(33),
    [sym_rt] = ACTIONS(25),
    [anon_sym_LT_POUNDsetting] = ACTIONS(35),
    [sym_stop] = ACTIONS(25),
    [sym_t] = ACTIONS(25),
    [anon_sym_LT_POUNDvisit] = ACTIONS(37),
    [anon_sym_LT_POUNDassign] = ACTIONS(39),
    [sym_end_assign] = ACTIONS(41),
    [anon_sym_LT_POUNDglobal] = ACTIONS(43),
    [sym_end_global] = ACTIONS(45),
    [anon_sym_LT_POUNDlocal] = ACTIONS(47),
    [sym_end_local] = ACTIONS(49),
  },
  [310] = {
    [sym_directive] = STATE(310),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_case_repeat1] = STATE(310),
    [anon_sym_LT_AT] = ACTIONS(1223),
    [anon_sym_LT_POUNDlist] = ACTIONS(1226),
    [anon_sym_LT_POUNDif] = ACTIONS(1229),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1232),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1235),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1237),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1240),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1243),
    [sym_fallback] = ACTIONS(1246),
    [sym_flush] = ACTIONS(1246),
    [anon_sym_LT_POUNDftl] = ACTIONS(1249),
    [anon_sym_LT_POUNDimport] = ACTIONS(1252),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1255),
    [sym_lt] = ACTIONS(1246),
    [sym_nt] = ACTIONS(1246),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1258),
    [sym_rt] = ACTIONS(1246),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1261),
    [sym_stop] = ACTIONS(1246),
    [sym_t] = ACTIONS(1246),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1264),
    [anon_sym_LT_POUNDassign] = ACTIONS(1267),
    [sym_end_assign] = ACTIONS(1270),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1273),
    [sym_end_global] = ACTIONS(1276),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1279),
    [sym_end_local] = ACTIONS(1282),
  },
  [311] = {
    [ts_builtin_sym_end] = ACTIONS(1285),
    [sym_comment] = ACTIONS(1285),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1285),
    [anon_sym_LT_AT] = ACTIONS(1285),
    [anon_sym_LT_POUNDlist] = ACTIONS(1285),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1285),
    [sym_break] = ACTIONS(1285),
    [sym_continue] = ACTIONS(1285),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1285),
    [anon_sym_LT_POUNDitems] = ACTIONS(1285),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1285),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1285),
    [anon_sym_LT_POUNDif] = ACTIONS(1285),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1285),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1285),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1285),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1285),
    [anon_sym_LT_POUNDcase] = ACTIONS(1285),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1285),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1285),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1285),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1285),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1285),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1285),
    [anon_sym_LT_POUNDnested] = ACTIONS(1285),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1285),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1285),
    [sym_recover] = ACTIONS(1285),
    [sym_fallback] = ACTIONS(1285),
    [sym_flush] = ACTIONS(1285),
    [anon_sym_LT_POUNDftl] = ACTIONS(1285),
    [anon_sym_LT_POUNDimport] = ACTIONS(1285),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1285),
    [sym_lt] = ACTIONS(1285),
    [sym_nt] = ACTIONS(1285),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1285),
    [sym_rt] = ACTIONS(1285),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1285),
    [sym_stop] = ACTIONS(1285),
    [sym_t] = ACTIONS(1285),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1285),
    [anon_sym_LT_POUNDassign] = ACTIONS(1285),
    [sym_end_assign] = ACTIONS(1285),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1285),
    [sym_end_global] = ACTIONS(1285),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1285),
    [sym_end_local] = ACTIONS(1285),
  },
  [312] = {
    [anon_sym_LT_AT] = ACTIONS(1287),
    [anon_sym_LT_POUNDlist] = ACTIONS(1287),
    [sym_break] = ACTIONS(1287),
    [sym_continue] = ACTIONS(1287),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1287),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1287),
    [anon_sym_LT_POUNDif] = ACTIONS(1287),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1287),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1287),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1287),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1287),
    [sym_fallback] = ACTIONS(1287),
    [sym_flush] = ACTIONS(1287),
    [anon_sym_LT_POUNDftl] = ACTIONS(1287),
    [anon_sym_LT_POUNDimport] = ACTIONS(1287),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1287),
    [sym_lt] = ACTIONS(1287),
    [sym_nt] = ACTIONS(1287),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1287),
    [sym_rt] = ACTIONS(1287),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1287),
    [sym_stop] = ACTIONS(1287),
    [sym_t] = ACTIONS(1287),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1287),
    [anon_sym_LT_POUNDassign] = ACTIONS(1287),
    [sym_end_assign] = ACTIONS(1287),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1287),
    [sym_end_global] = ACTIONS(1287),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1287),
    [sym_end_local] = ACTIONS(1287),
  },
  [313] = {
    [anon_sym_LT_AT] = ACTIONS(1289),
    [anon_sym_LT_POUNDlist] = ACTIONS(1289),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1289),
    [sym_break] = ACTIONS(1289),
    [sym_continue] = ACTIONS(1289),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1289),
    [anon_sym_LT_POUNDitems] = ACTIONS(1289),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1289),
    [anon_sym_LT_POUNDif] = ACTIONS(1289),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1289),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1289),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1289),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1289),
    [sym_fallback] = ACTIONS(1289),
    [sym_flush] = ACTIONS(1289),
    [anon_sym_LT_POUNDftl] = ACTIONS(1289),
    [anon_sym_LT_POUNDimport] = ACTIONS(1289),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1289),
    [sym_lt] = ACTIONS(1289),
    [sym_nt] = ACTIONS(1289),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1289),
    [sym_rt] = ACTIONS(1289),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1289),
    [sym_stop] = ACTIONS(1289),
    [sym_t] = ACTIONS(1289),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1289),
    [anon_sym_LT_POUNDassign] = ACTIONS(1289),
    [sym_end_assign] = ACTIONS(1289),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1289),
    [sym_end_global] = ACTIONS(1289),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1289),
    [sym_end_local] = ACTIONS(1289),
  },
  [314] = {
    [sym_directive] = STATE(312),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_items_middle] = STATE(318),
    [sym_sep] = STATE(312),
    [sym_sep_block] = STATE(214),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_items_repeat1] = STATE(318),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUNDlist] = ACTIONS(13),
    [sym_break] = ACTIONS(1209),
    [sym_continue] = ACTIONS(1209),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1291),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(497),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(23),
    [sym_fallback] = ACTIONS(25),
    [sym_flush] = ACTIONS(25),
    [anon_sym_LT_POUNDftl] = ACTIONS(27),
    [anon_sym_LT_POUNDimport] = ACTIONS(29),
    [anon_sym_LT_POUNDinclude] = ACTIONS(31),
    [sym_lt] = ACTIONS(25),
    [sym_nt] = ACTIONS(25),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(33),
    [sym_rt] = ACTIONS(25),
    [anon_sym_LT_POUNDsetting] = ACTIONS(35),
    [sym_stop] = ACTIONS(25),
    [sym_t] = ACTIONS(25),
    [anon_sym_LT_POUNDvisit] = ACTIONS(37),
    [anon_sym_LT_POUNDassign] = ACTIONS(39),
    [sym_end_assign] = ACTIONS(41),
    [anon_sym_LT_POUNDglobal] = ACTIONS(43),
    [sym_end_global] = ACTIONS(45),
    [anon_sym_LT_POUNDlocal] = ACTIONS(47),
    [sym_end_local] = ACTIONS(49),
  },
  [315] = {
    [sym_directive] = STATE(319),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_case_repeat1] = STATE(319),
    [aux_sym_case_repeat2] = STATE(320),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUNDlist] = ACTIONS(13),
    [sym_break] = ACTIONS(1293),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1295),
    [anon_sym_LT_POUNDcase] = ACTIONS(1295),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1295),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(23),
    [sym_fallback] = ACTIONS(25),
    [sym_flush] = ACTIONS(25),
    [anon_sym_LT_POUNDftl] = ACTIONS(27),
    [anon_sym_LT_POUNDimport] = ACTIONS(29),
    [anon_sym_LT_POUNDinclude] = ACTIONS(31),
    [sym_lt] = ACTIONS(25),
    [sym_nt] = ACTIONS(25),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(33),
    [sym_rt] = ACTIONS(25),
    [anon_sym_LT_POUNDsetting] = ACTIONS(35),
    [sym_stop] = ACTIONS(25),
    [sym_t] = ACTIONS(25),
    [anon_sym_LT_POUNDvisit] = ACTIONS(37),
    [anon_sym_LT_POUNDassign] = ACTIONS(39),
    [sym_end_assign] = ACTIONS(41),
    [anon_sym_LT_POUNDglobal] = ACTIONS(43),
    [sym_end_global] = ACTIONS(45),
    [anon_sym_LT_POUNDlocal] = ACTIONS(47),
    [sym_end_local] = ACTIONS(49),
  },
  [316] = {
    [aux_sym_case_repeat2] = STATE(321),
    [sym_break] = ACTIONS(1297),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1295),
    [anon_sym_LT_POUNDcase] = ACTIONS(1295),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1295),
  },
  [317] = {
    [anon_sym_LT_AT] = ACTIONS(1299),
    [anon_sym_LT_POUNDlist] = ACTIONS(1299),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1299),
    [sym_break] = ACTIONS(1299),
    [sym_continue] = ACTIONS(1299),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1299),
    [anon_sym_LT_POUNDitems] = ACTIONS(1299),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1299),
    [anon_sym_LT_POUNDif] = ACTIONS(1299),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1299),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1299),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1299),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1299),
    [sym_fallback] = ACTIONS(1299),
    [sym_flush] = ACTIONS(1299),
    [anon_sym_LT_POUNDftl] = ACTIONS(1299),
    [anon_sym_LT_POUNDimport] = ACTIONS(1299),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1299),
    [sym_lt] = ACTIONS(1299),
    [sym_nt] = ACTIONS(1299),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1299),
    [sym_rt] = ACTIONS(1299),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1299),
    [sym_stop] = ACTIONS(1299),
    [sym_t] = ACTIONS(1299),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1299),
    [anon_sym_LT_POUNDassign] = ACTIONS(1299),
    [sym_end_assign] = ACTIONS(1299),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1299),
    [sym_end_global] = ACTIONS(1299),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1299),
    [sym_end_local] = ACTIONS(1299),
  },
  [318] = {
    [sym_directive] = STATE(312),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_items_middle] = STATE(318),
    [sym_sep] = STATE(312),
    [sym_sep_block] = STATE(214),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_items_repeat1] = STATE(318),
    [anon_sym_LT_AT] = ACTIONS(1301),
    [anon_sym_LT_POUNDlist] = ACTIONS(1304),
    [sym_break] = ACTIONS(1307),
    [sym_continue] = ACTIONS(1307),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1310),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1312),
    [anon_sym_LT_POUNDif] = ACTIONS(1315),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1318),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1321),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1324),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1327),
    [sym_fallback] = ACTIONS(1330),
    [sym_flush] = ACTIONS(1330),
    [anon_sym_LT_POUNDftl] = ACTIONS(1333),
    [anon_sym_LT_POUNDimport] = ACTIONS(1336),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1339),
    [sym_lt] = ACTIONS(1330),
    [sym_nt] = ACTIONS(1330),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1342),
    [sym_rt] = ACTIONS(1330),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1345),
    [sym_stop] = ACTIONS(1330),
    [sym_t] = ACTIONS(1330),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1348),
    [anon_sym_LT_POUNDassign] = ACTIONS(1351),
    [sym_end_assign] = ACTIONS(1354),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1357),
    [sym_end_global] = ACTIONS(1360),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1363),
    [sym_end_local] = ACTIONS(1366),
  },
  [319] = {
    [sym_directive] = STATE(319),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_case_repeat1] = STATE(319),
    [anon_sym_LT_AT] = ACTIONS(1223),
    [anon_sym_LT_POUNDlist] = ACTIONS(1226),
    [sym_break] = ACTIONS(1235),
    [anon_sym_LT_POUNDif] = ACTIONS(1229),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1232),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1235),
    [anon_sym_LT_POUNDcase] = ACTIONS(1235),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1235),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1237),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1240),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1243),
    [sym_fallback] = ACTIONS(1246),
    [sym_flush] = ACTIONS(1246),
    [anon_sym_LT_POUNDftl] = ACTIONS(1249),
    [anon_sym_LT_POUNDimport] = ACTIONS(1252),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1255),
    [sym_lt] = ACTIONS(1246),
    [sym_nt] = ACTIONS(1246),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1258),
    [sym_rt] = ACTIONS(1246),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1261),
    [sym_stop] = ACTIONS(1246),
    [sym_t] = ACTIONS(1246),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1264),
    [anon_sym_LT_POUNDassign] = ACTIONS(1267),
    [sym_end_assign] = ACTIONS(1270),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1273),
    [sym_end_global] = ACTIONS(1276),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1279),
    [sym_end_local] = ACTIONS(1282),
  },
  [320] = {
    [aux_sym_case_repeat2] = STATE(321),
    [sym_break] = ACTIONS(1297),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1369),
    [anon_sym_LT_POUNDcase] = ACTIONS(1369),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1369),
  },
  [321] = {
    [aux_sym_case_repeat2] = STATE(321),
    [sym_break] = ACTIONS(1371),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1374),
    [anon_sym_LT_POUNDcase] = ACTIONS(1374),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1374),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(24),
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
  [47] = {.count = 1, .reusable = true}, SHIFT(21),
  [49] = {.count = 1, .reusable = true}, SHIFT(22),
  [51] = {.count = 1, .reusable = true}, SHIFT(25),
  [53] = {.count = 1, .reusable = true}, SHIFT(26),
  [55] = {.count = 1, .reusable = false}, SHIFT(27),
  [57] = {.count = 1, .reusable = false}, SHIFT(28),
  [59] = {.count = 1, .reusable = true}, SHIFT(29),
  [61] = {.count = 1, .reusable = true}, SHIFT(30),
  [63] = {.count = 1, .reusable = false}, SHIFT(31),
  [65] = {.count = 1, .reusable = true}, SHIFT(32),
  [67] = {.count = 1, .reusable = true}, SHIFT(35),
  [69] = {.count = 1, .reusable = false}, SHIFT(36),
  [71] = {.count = 1, .reusable = true}, SHIFT(37),
  [73] = {.count = 1, .reusable = true}, SHIFT(38),
  [75] = {.count = 1, .reusable = false}, SHIFT(39),
  [77] = {.count = 1, .reusable = false}, SHIFT(40),
  [79] = {.count = 1, .reusable = true}, SHIFT(41),
  [81] = {.count = 1, .reusable = true}, SHIFT(42),
  [83] = {.count = 1, .reusable = false}, SHIFT(43),
  [85] = {.count = 1, .reusable = true}, SHIFT(44),
  [87] = {.count = 1, .reusable = false}, SHIFT(48),
  [89] = {.count = 1, .reusable = true}, SHIFT(49),
  [91] = {.count = 1, .reusable = true}, SHIFT(53),
  [93] = {.count = 1, .reusable = true}, SHIFT(55),
  [95] = {.count = 1, .reusable = true}, SHIFT(57),
  [97] = {.count = 1, .reusable = true}, SHIFT(58),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_directive, 1),
  [101] = {.count = 1, .reusable = true}, SHIFT(60),
  [103] = {.count = 1, .reusable = true}, SHIFT(62),
  [105] = {.count = 1, .reusable = true}, SHIFT(64),
  [107] = {.count = 1, .reusable = true}, SHIFT(66),
  [109] = {.count = 1, .reusable = true}, SHIFT(68),
  [111] = {.count = 1, .reusable = true}, SHIFT(70),
  [113] = {.count = 1, .reusable = true}, SHIFT(72),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 1),
  [117] = {.count = 1, .reusable = true}, SHIFT(74),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_global, 1),
  [121] = {.count = 1, .reusable = true}, SHIFT(76),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_local, 1),
  [125] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [129] = {.count = 1, .reusable = true}, SHIFT(78),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_interpolation, 2),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym_string, 1),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [141] = {.count = 1, .reusable = true}, SHIFT(79),
  [143] = {.count = 1, .reusable = true}, SHIFT(80),
  [145] = {.count = 1, .reusable = true}, SHIFT(84),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_top_level, 1),
  [149] = {.count = 1, .reusable = true}, SHIFT(86),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym_top_level, 1),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_spec_var, 1),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym_spec_var, 1),
  [157] = {.count = 1, .reusable = true}, SHIFT(89),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [161] = {.count = 1, .reusable = false}, SHIFT(91),
  [163] = {.count = 1, .reusable = true}, SHIFT(91),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 1),
  [167] = {.count = 1, .reusable = false}, SHIFT(95),
  [169] = {.count = 1, .reusable = true}, SHIFT(96),
  [171] = {.count = 1, .reusable = false}, SHIFT(97),
  [173] = {.count = 1, .reusable = false}, SHIFT(98),
  [175] = {.count = 1, .reusable = true}, SHIFT(99),
  [177] = {.count = 1, .reusable = true}, SHIFT(100),
  [179] = {.count = 1, .reusable = false}, SHIFT(101),
  [181] = {.count = 1, .reusable = true}, SHIFT(102),
  [183] = {.count = 1, .reusable = true}, SHIFT(103),
  [185] = {.count = 1, .reusable = true}, SHIFT(106),
  [187] = {.count = 1, .reusable = false}, SHIFT(107),
  [189] = {.count = 1, .reusable = false}, SHIFT(108),
  [191] = {.count = 1, .reusable = true}, SHIFT(109),
  [193] = {.count = 1, .reusable = true}, SHIFT(110),
  [195] = {.count = 1, .reusable = false}, SHIFT(111),
  [197] = {.count = 1, .reusable = true}, SHIFT(112),
  [199] = {.count = 1, .reusable = true}, SHIFT(31),
  [201] = {.count = 1, .reusable = true}, SHIFT(115),
  [203] = {.count = 1, .reusable = true}, SHIFT(116),
  [205] = {.count = 1, .reusable = true}, SHIFT(118),
  [207] = {.count = 1, .reusable = true}, SHIFT(120),
  [209] = {.count = 1, .reusable = true}, SHIFT(123),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_group, 1),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_group, 1),
  [215] = {.count = 1, .reusable = false}, SHIFT(124),
  [217] = {.count = 1, .reusable = true}, SHIFT(128),
  [219] = {.count = 1, .reusable = false}, SHIFT(129),
  [221] = {.count = 1, .reusable = false}, SHIFT(130),
  [223] = {.count = 1, .reusable = true}, SHIFT(131),
  [225] = {.count = 1, .reusable = true}, SHIFT(132),
  [227] = {.count = 1, .reusable = false}, SHIFT(133),
  [229] = {.count = 1, .reusable = true}, SHIFT(134),
  [231] = {.count = 1, .reusable = true}, SHIFT(133),
  [233] = {.count = 1, .reusable = false}, SHIFT(137),
  [235] = {.count = 1, .reusable = false}, SHIFT(138),
  [237] = {.count = 1, .reusable = true}, SHIFT(138),
  [239] = {.count = 1, .reusable = true}, SHIFT(142),
  [241] = {.count = 1, .reusable = true}, SHIFT(144),
  [243] = {.count = 1, .reusable = true}, SHIFT(145),
  [245] = {.count = 1, .reusable = true}, SHIFT(146),
  [247] = {.count = 1, .reusable = true}, SHIFT(149),
  [249] = {.count = 1, .reusable = true}, SHIFT(150),
  [251] = {.count = 1, .reusable = true}, SHIFT(151),
  [253] = {.count = 1, .reusable = true}, SHIFT(154),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_attempt, 2),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_attempt_middle, 1),
  [259] = {.count = 1, .reusable = true}, SHIFT(155),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_ftl, 2),
  [263] = {.count = 1, .reusable = true}, SHIFT(157),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_import, 2),
  [267] = {.count = 1, .reusable = true}, SHIFT(158),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [271] = {.count = 1, .reusable = true}, SHIFT(159),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_recurse, 2),
  [275] = {.count = 1, .reusable = true}, SHIFT(160),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_setting, 2),
  [279] = {.count = 1, .reusable = true}, SHIFT(161),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_visit, 2),
  [283] = {.count = 1, .reusable = true}, SHIFT(162),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 2),
  [287] = {.count = 1, .reusable = true}, SHIFT(163),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_global, 2),
  [291] = {.count = 1, .reusable = true}, SHIFT(164),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_local, 2),
  [295] = {.count = 1, .reusable = true}, SHIFT(165),
  [297] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [299] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [302] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [305] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [308] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [311] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [314] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [317] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [320] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [323] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [326] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [329] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [332] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [335] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [338] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [341] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [344] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [347] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [350] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [353] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [356] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [359] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [362] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 2),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 2),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_sequence, 2),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym_sequence, 2),
  [373] = {.count = 1, .reusable = true}, SHIFT(166),
  [375] = {.count = 1, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 1),
  [377] = {.count = 1, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 1),
  [379] = {.count = 1, .reusable = true}, SHIFT(170),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_hash, 2),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym_hash, 2),
  [385] = {.count = 1, .reusable = true}, SHIFT(172),
  [387] = {.count = 1, .reusable = false}, SHIFT(173),
  [389] = {.count = 1, .reusable = true}, SHIFT(174),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_top_level, 2),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym_top_level, 2),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_spec_var, 2),
  [397] = {.count = 1, .reusable = false}, REDUCE(sym_spec_var, 2),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_interpolation, 3),
  [401] = {.count = 1, .reusable = true}, REDUCE(aux_sym_interpolation_repeat1, 2),
  [403] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(26),
  [406] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(27),
  [409] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(28),
  [412] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(29),
  [415] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(30),
  [418] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(31),
  [421] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(32),
  [424] = {.count = 1, .reusable = true}, REDUCE(sym_operator, 1),
  [426] = {.count = 1, .reusable = false}, REDUCE(sym_operator, 1),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 2),
  [430] = {.count = 1, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2),
  [432] = {.count = 1, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2),
  [434] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(26),
  [437] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(27),
  [440] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(28),
  [443] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(29),
  [446] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(30),
  [449] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(31),
  [452] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(32),
  [455] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 2),
  [457] = {.count = 1, .reusable = true}, SHIFT(180),
  [459] = {.count = 1, .reusable = true}, SHIFT(181),
  [461] = {.count = 1, .reusable = true}, SHIFT(183),
  [463] = {.count = 1, .reusable = true}, SHIFT(185),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_user_defined, 3),
  [467] = {.count = 1, .reusable = false}, SHIFT(188),
  [469] = {.count = 1, .reusable = true}, SHIFT(192),
  [471] = {.count = 1, .reusable = true}, SHIFT(194),
  [473] = {.count = 1, .reusable = true}, SHIFT(195),
  [475] = {.count = 1, .reusable = true}, SHIFT(197),
  [477] = {.count = 1, .reusable = true}, SHIFT(199),
  [479] = {.count = 1, .reusable = true}, REDUCE(sym_as_expression, 2),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym_built_in, 2),
  [483] = {.count = 1, .reusable = true}, SHIFT(204),
  [485] = {.count = 1, .reusable = true}, SHIFT(205),
  [487] = {.count = 1, .reusable = true}, SHIFT(206),
  [489] = {.count = 1, .reusable = true}, SHIFT(208),
  [491] = {.count = 1, .reusable = true}, SHIFT(209),
  [493] = {.count = 1, .reusable = true}, SHIFT(210),
  [495] = {.count = 1, .reusable = true}, SHIFT(211),
  [497] = {.count = 1, .reusable = true}, SHIFT(212),
  [499] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(38),
  [502] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(39),
  [505] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(40),
  [508] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(41),
  [511] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(42),
  [514] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(43),
  [517] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(44),
  [520] = {.count = 1, .reusable = true}, SHIFT(218),
  [522] = {.count = 1, .reusable = true}, SHIFT(219),
  [524] = {.count = 1, .reusable = true}, SHIFT(221),
  [526] = {.count = 1, .reusable = true}, SHIFT(223),
  [528] = {.count = 1, .reusable = false}, REDUCE(sym_as_expression, 2),
  [530] = {.count = 1, .reusable = false}, REDUCE(sym_built_in, 2),
  [532] = {.count = 1, .reusable = true}, SHIFT(229),
  [534] = {.count = 1, .reusable = true}, SHIFT(230),
  [536] = {.count = 1, .reusable = true}, SHIFT(231),
  [538] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(48),
  [541] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(49),
  [544] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(38),
  [547] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(39),
  [550] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(40),
  [553] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(41),
  [556] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(42),
  [559] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(43),
  [562] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(44),
  [565] = {.count = 1, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2),
  [567] = {.count = 1, .reusable = true}, SHIFT(235),
  [569] = {.count = 1, .reusable = true}, SHIFT(236),
  [571] = {.count = 1, .reusable = true}, SHIFT(237),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym_function, 3),
  [575] = {.count = 1, .reusable = true}, SHIFT(241),
  [577] = {.count = 1, .reusable = true}, REDUCE(sym_function_middle, 1),
  [579] = {.count = 1, .reusable = true}, SHIFT(243),
  [581] = {.count = 1, .reusable = true}, REDUCE(sym_macro, 3),
  [583] = {.count = 1, .reusable = true}, SHIFT(246),
  [585] = {.count = 1, .reusable = true}, REDUCE(sym_macro_middle, 1),
  [587] = {.count = 1, .reusable = true}, SHIFT(248),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym_attempt, 3),
  [591] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(3),
  [594] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(4),
  [597] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(5),
  [600] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(6),
  [603] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(7),
  [606] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(8),
  [609] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(9),
  [612] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2),
  [614] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(58),
  [617] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(10),
  [620] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(11),
  [623] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(12),
  [626] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(13),
  [629] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(14),
  [632] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(15),
  [635] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(16),
  [638] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(17),
  [641] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(18),
  [644] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(19),
  [647] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(20),
  [650] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(21),
  [653] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(22),
  [656] = {.count = 1, .reusable = true}, REDUCE(sym_ftl, 3),
  [658] = {.count = 1, .reusable = true}, REDUCE(sym_import, 3),
  [660] = {.count = 1, .reusable = true}, REDUCE(sym_include, 3),
  [662] = {.count = 1, .reusable = true}, REDUCE(sym_recurse, 3),
  [664] = {.count = 1, .reusable = true}, REDUCE(sym_setting, 3),
  [666] = {.count = 1, .reusable = true}, REDUCE(sym_visit, 3),
  [668] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 3),
  [670] = {.count = 1, .reusable = true}, REDUCE(sym_global, 3),
  [672] = {.count = 1, .reusable = true}, REDUCE(sym_local, 3),
  [674] = {.count = 1, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2),
  [676] = {.count = 1, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 2),
  [678] = {.count = 1, .reusable = true}, REDUCE(sym_sequence, 3),
  [680] = {.count = 1, .reusable = false}, REDUCE(sym_sequence, 3),
  [682] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(26),
  [685] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(27),
  [688] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(28),
  [691] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(29),
  [694] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(30),
  [697] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(31),
  [700] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(32),
  [703] = {.count = 1, .reusable = true}, REDUCE(sym_hash, 3),
  [705] = {.count = 1, .reusable = false}, REDUCE(sym_hash, 3),
  [707] = {.count = 1, .reusable = true}, REDUCE(sym_group, 2),
  [709] = {.count = 1, .reusable = false}, REDUCE(sym_group, 2),
  [711] = {.count = 1, .reusable = false}, SHIFT(254),
  [713] = {.count = 1, .reusable = true}, SHIFT(258),
  [715] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 3),
  [717] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 3),
  [719] = {.count = 1, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2),
  [721] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(106),
  [724] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(107),
  [727] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(108),
  [730] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(109),
  [733] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(110),
  [736] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(111),
  [739] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(112),
  [742] = {.count = 1, .reusable = true}, SHIFT(261),
  [744] = {.count = 1, .reusable = true}, SHIFT(262),
  [746] = {.count = 1, .reusable = true}, SHIFT(263),
  [748] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(96),
  [751] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(97),
  [754] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(98),
  [757] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(99),
  [760] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(100),
  [763] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(101),
  [766] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(102),
  [769] = {.count = 1, .reusable = true}, REDUCE(sym_user_defined, 4),
  [771] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(95),
  [774] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(96),
  [777] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(97),
  [780] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(98),
  [783] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(99),
  [786] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(100),
  [789] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(101),
  [792] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(102),
  [795] = {.count = 1, .reusable = true}, SHIFT(267),
  [797] = {.count = 1, .reusable = true}, SHIFT(268),
  [799] = {.count = 1, .reusable = true}, SHIFT(269),
  [801] = {.count = 1, .reusable = false}, REDUCE(sym_built_in, 3),
  [803] = {.count = 1, .reusable = true}, REDUCE(sym_built_in, 3),
  [805] = {.count = 1, .reusable = true}, SHIFT(271),
  [807] = {.count = 1, .reusable = true}, REDUCE(sym_list, 4),
  [809] = {.count = 1, .reusable = true}, REDUCE(sym_list_middle, 1),
  [811] = {.count = 1, .reusable = true}, REDUCE(sym_list_else, 1),
  [813] = {.count = 1, .reusable = true}, REDUCE(sym_sep, 1),
  [815] = {.count = 1, .reusable = true}, SHIFT(274),
  [817] = {.count = 1, .reusable = true}, SHIFT(275),
  [819] = {.count = 1, .reusable = true}, REDUCE(sym_as_expression, 3),
  [821] = {.count = 1, .reusable = true}, SHIFT(278),
  [823] = {.count = 1, .reusable = true}, SHIFT(279),
  [825] = {.count = 1, .reusable = true}, SHIFT(280),
  [827] = {.count = 1, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2),
  [829] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(128),
  [832] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(129),
  [835] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(130),
  [838] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(131),
  [841] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(132),
  [844] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(133),
  [847] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(134),
  [850] = {.count = 1, .reusable = false}, REDUCE(sym_as_expression, 3),
  [852] = {.count = 1, .reusable = true}, REDUCE(sym_if_else, 1),
  [854] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4),
  [856] = {.count = 1, .reusable = true}, SHIFT(283),
  [858] = {.count = 1, .reusable = true}, REDUCE(sym_if_middle, 1),
  [860] = {.count = 1, .reusable = true}, SHIFT(285),
  [862] = {.count = 1, .reusable = true}, REDUCE(sym_switch, 4),
  [864] = {.count = 1, .reusable = true}, REDUCE(sym_default, 1),
  [866] = {.count = 1, .reusable = true}, REDUCE(sym_switch_middle, 1),
  [868] = {.count = 1, .reusable = true}, SHIFT(290),
  [870] = {.count = 1, .reusable = true}, REDUCE(sym_return, 2),
  [872] = {.count = 1, .reusable = true}, SHIFT(293),
  [874] = {.count = 1, .reusable = true}, REDUCE(sym_function, 4),
  [876] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(3),
  [879] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(4),
  [882] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(5),
  [885] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(6),
  [888] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(7),
  [891] = {.count = 1, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2),
  [893] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(146),
  [896] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(8),
  [899] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(9),
  [902] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(10),
  [905] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(11),
  [908] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(12),
  [911] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(13),
  [914] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(14),
  [917] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(15),
  [920] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(16),
  [923] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(17),
  [926] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(18),
  [929] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(19),
  [932] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(20),
  [935] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(21),
  [938] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(22),
  [941] = {.count = 1, .reusable = true}, SHIFT(294),
  [943] = {.count = 1, .reusable = true}, REDUCE(sym_nested, 2),
  [945] = {.count = 1, .reusable = true}, SHIFT(295),
  [947] = {.count = 1, .reusable = true}, REDUCE(sym_macro, 4),
  [949] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(3),
  [952] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(4),
  [955] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(5),
  [958] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(6),
  [961] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(7),
  [964] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(146),
  [967] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(8),
  [970] = {.count = 1, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2),
  [972] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(151),
  [975] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(9),
  [978] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(10),
  [981] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(11),
  [984] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(12),
  [987] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(13),
  [990] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(14),
  [993] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(15),
  [996] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(16),
  [999] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(17),
  [1002] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(18),
  [1005] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(19),
  [1008] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(20),
  [1011] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(21),
  [1014] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(22),
  [1017] = {.count = 1, .reusable = true}, SHIFT(296),
  [1019] = {.count = 1, .reusable = true}, REDUCE(sym_group, 3),
  [1021] = {.count = 1, .reusable = false}, REDUCE(sym_group, 3),
  [1023] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(173),
  [1026] = {.count = 1, .reusable = true}, SHIFT(300),
  [1028] = {.count = 1, .reusable = true}, SHIFT(301),
  [1030] = {.count = 1, .reusable = true}, REDUCE(sym_list_else, 2),
  [1032] = {.count = 1, .reusable = true}, SHIFT(303),
  [1034] = {.count = 1, .reusable = true}, REDUCE(sym_sep_block, 2),
  [1036] = {.count = 1, .reusable = true}, REDUCE(sym_list, 5),
  [1038] = {.count = 1, .reusable = true}, SHIFT(304),
  [1040] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(3),
  [1043] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(4),
  [1046] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2),
  [1048] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(209),
  [1051] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(211),
  [1054] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(212),
  [1057] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(5),
  [1060] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(6),
  [1063] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(7),
  [1066] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(8),
  [1069] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(9),
  [1072] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(10),
  [1075] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(11),
  [1078] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(12),
  [1081] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(13),
  [1084] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(14),
  [1087] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(15),
  [1090] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(16),
  [1093] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(17),
  [1096] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(18),
  [1099] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(19),
  [1102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(20),
  [1105] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(21),
  [1108] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(22),
  [1111] = {.count = 1, .reusable = true}, SHIFT(305),
  [1113] = {.count = 1, .reusable = true}, REDUCE(sym_if_else, 2),
  [1115] = {.count = 1, .reusable = true}, REDUCE(sym_elseif, 2),
  [1117] = {.count = 1, .reusable = true}, SHIFT(307),
  [1119] = {.count = 1, .reusable = true}, REDUCE(sym_if, 5),
  [1121] = {.count = 1, .reusable = true}, SHIFT(308),
  [1123] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(3),
  [1126] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(4),
  [1129] = {.count = 1, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2),
  [1131] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(5),
  [1134] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(231),
  [1137] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(6),
  [1140] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(7),
  [1143] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(8),
  [1146] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(9),
  [1149] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(10),
  [1152] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(11),
  [1155] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(12),
  [1158] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(13),
  [1161] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(14),
  [1164] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(15),
  [1167] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(16),
  [1170] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(17),
  [1173] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(18),
  [1176] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(19),
  [1179] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(20),
  [1182] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(21),
  [1185] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(22),
  [1188] = {.count = 1, .reusable = true}, SHIFT(309),
  [1190] = {.count = 1, .reusable = true}, REDUCE(sym_default, 2),
  [1192] = {.count = 1, .reusable = true}, REDUCE(sym_switch, 5),
  [1194] = {.count = 1, .reusable = true}, SHIFT(311),
  [1196] = {.count = 1, .reusable = true}, REDUCE(aux_sym_switch_repeat1, 2),
  [1198] = {.count = 2, .reusable = true}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(236),
  [1201] = {.count = 1, .reusable = true}, REDUCE(sym_return, 3),
  [1203] = {.count = 1, .reusable = true}, REDUCE(sym_function, 5),
  [1205] = {.count = 1, .reusable = true}, REDUCE(sym_nested, 3),
  [1207] = {.count = 1, .reusable = true}, REDUCE(sym_macro, 5),
  [1209] = {.count = 1, .reusable = true}, SHIFT(312),
  [1211] = {.count = 1, .reusable = true}, SHIFT(313),
  [1213] = {.count = 1, .reusable = true}, REDUCE(sym_list, 6),
  [1215] = {.count = 1, .reusable = true}, REDUCE(sym_elseif, 3),
  [1217] = {.count = 1, .reusable = true}, REDUCE(sym_if, 6),
  [1219] = {.count = 1, .reusable = true}, SHIFT(316),
  [1221] = {.count = 1, .reusable = true}, REDUCE(sym_case, 3),
  [1223] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(3),
  [1226] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(4),
  [1229] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(5),
  [1232] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(6),
  [1235] = {.count = 1, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2),
  [1237] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(7),
  [1240] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(8),
  [1243] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(9),
  [1246] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(10),
  [1249] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(11),
  [1252] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(12),
  [1255] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(13),
  [1258] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(14),
  [1261] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(15),
  [1264] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(16),
  [1267] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(17),
  [1270] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(18),
  [1273] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(19),
  [1276] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(20),
  [1279] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(21),
  [1282] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(22),
  [1285] = {.count = 1, .reusable = true}, REDUCE(sym_switch, 6),
  [1287] = {.count = 1, .reusable = true}, REDUCE(sym_items_middle, 1),
  [1289] = {.count = 1, .reusable = true}, REDUCE(sym_items, 4),
  [1291] = {.count = 1, .reusable = true}, SHIFT(317),
  [1293] = {.count = 1, .reusable = true}, SHIFT(320),
  [1295] = {.count = 1, .reusable = true}, REDUCE(sym_case, 4),
  [1297] = {.count = 1, .reusable = true}, SHIFT(321),
  [1299] = {.count = 1, .reusable = true}, REDUCE(sym_items, 5),
  [1301] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(3),
  [1304] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(4),
  [1307] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(312),
  [1310] = {.count = 1, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2),
  [1312] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(212),
  [1315] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(5),
  [1318] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(6),
  [1321] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(7),
  [1324] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(8),
  [1327] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(9),
  [1330] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(10),
  [1333] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(11),
  [1336] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(12),
  [1339] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(13),
  [1342] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(14),
  [1345] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(15),
  [1348] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(16),
  [1351] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(17),
  [1354] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(18),
  [1357] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(19),
  [1360] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(20),
  [1363] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(21),
  [1366] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(22),
  [1369] = {.count = 1, .reusable = true}, REDUCE(sym_case, 5),
  [1371] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat2, 2), SHIFT_REPEAT(321),
  [1374] = {.count = 1, .reusable = true}, REDUCE(aux_sym_case_repeat2, 2),
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
