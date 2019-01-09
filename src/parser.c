#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 318
#define SYMBOL_COUNT 159
#define ALIAS_COUNT 0
#define TOKEN_COUNT 95
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_comment = 1,
  anon_sym_as = 2,
  anon_sym_QMARK = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_using = 6,
  anon_sym_COMMA = 7,
  anon_sym_DOT_DOT = 8,
  anon_sym_DOT_DOT_LT = 9,
  anon_sym_DOT_DOT_BANG = 10,
  anon_sym_COLON = 11,
  anon_sym_STAR = 12,
  anon_sym_PLUS = 13,
  anon_sym_SLASH = 14,
  anon_sym_DASH = 15,
  anon_sym_PERCENT = 16,
  anon_sym_EQ_EQ = 17,
  anon_sym_BANG_EQ = 18,
  anon_sym_LT = 19,
  anon_sym_LT_EQ = 20,
  anon_sym_lt = 21,
  anon_sym_lte = 22,
  anon_sym_gt = 23,
  anon_sym_gte = 24,
  anon_sym_BANG = 25,
  anon_sym_AMP_AMP = 26,
  anon_sym_PIPE_PIPE = 27,
  anon_sym_QMARK_QMARK = 28,
  anon_sym_EQ = 29,
  anon_sym_PLUS_EQ = 30,
  anon_sym_DASH_EQ = 31,
  anon_sym_STAR_EQ = 32,
  anon_sym_SLASH_EQ = 33,
  anon_sym_PERCENT_EQ = 34,
  anon_sym_PLUS_PLUS = 35,
  anon_sym_DASH_DASH = 36,
  aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH = 37,
  aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH = 38,
  sym_number = 39,
  anon_sym_true = 40,
  anon_sym_false = 41,
  anon_sym_LBRACK = 42,
  anon_sym_RBRACK = 43,
  anon_sym_LBRACE = 44,
  anon_sym_RBRACE = 45,
  aux_sym_SLASH_BSLASHw_PLUS_SLASH = 46,
  aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH = 47,
  anon_sym_LT_AT = 48,
  anon_sym_GT = 49,
  anon_sym_SLASH_GT = 50,
  anon_sym_LT_POUNDlist = 51,
  anon_sym_LT_SLASH_POUNDlist_GT = 52,
  sym_break = 53,
  sym_continue = 54,
  anon_sym_LT_POUNDelse_GT = 55,
  anon_sym_LT_POUNDitems = 56,
  anon_sym_LT_SLASH_POUNDitems_GT = 57,
  anon_sym_LT_POUNDsep_GT = 58,
  anon_sym_LT_SLASH_POUNDsep_GT = 59,
  anon_sym_LT_POUNDif = 60,
  anon_sym_LT_SLASH_POUNDif_GT = 61,
  anon_sym_LT_POUNDelseif = 62,
  anon_sym_LT_POUNDswitch = 63,
  anon_sym_LT_SLASH_POUNDswitch_GT = 64,
  anon_sym_LT_POUNDcase = 65,
  anon_sym_LT_POUNDdefault_GT = 66,
  anon_sym_LT_POUNDfunction = 67,
  anon_sym_LT_SLASH_POUNDfunction_GT = 68,
  anon_sym_LT_POUNDreturn = 69,
  anon_sym_LT_POUNDmacro = 70,
  anon_sym_LT_SLASH_POUNDmacro_GT = 71,
  anon_sym_LT_POUNDnested = 72,
  anon_sym_LT_POUNDattempt_GT = 73,
  anon_sym_LT_SLASH_POUNDattempt_GT = 74,
  sym_recover = 75,
  sym_fallback = 76,
  sym_flush = 77,
  anon_sym_LT_POUNDftl = 78,
  anon_sym_LT_POUNDimport = 79,
  anon_sym_LT_POUNDinclude = 80,
  sym_lt = 81,
  sym_nt = 82,
  anon_sym_LT_POUNDrecurse = 83,
  sym_rt = 84,
  anon_sym_LT_POUNDsetting = 85,
  sym_stop = 86,
  sym_t = 87,
  anon_sym_LT_POUNDvisit = 88,
  anon_sym_LT_POUNDassign = 89,
  sym_end_assign = 90,
  anon_sym_LT_POUNDglobal = 91,
  sym_end_global = 92,
  anon_sym_LT_POUNDlocal = 93,
  sym_end_local = 94,
  sym_source_file = 95,
  sym__definition = 96,
  sym_directive = 97,
  sym_parameter_group = 98,
  sym_as_expression = 99,
  sym_expression = 100,
  sym_type = 101,
  sym_built_in = 102,
  sym_group = 103,
  sym_operator = 104,
  sym_string = 105,
  sym_boolean = 106,
  sym_sequence = 107,
  sym_hash = 108,
  sym_top_level = 109,
  sym_spec_var = 110,
  sym_user_defined = 111,
  sym_list = 112,
  sym_list_middle = 113,
  sym_items_middle = 114,
  sym_list_else = 115,
  sym_items = 116,
  sym_sep = 117,
  sym_sep_block = 118,
  sym_if = 119,
  sym_if_else = 120,
  sym_elseif = 121,
  sym_if_middle = 122,
  sym_switch = 123,
  sym_case = 124,
  sym_default = 125,
  sym_switch_middle = 126,
  sym_function = 127,
  sym_function_middle = 128,
  sym_return = 129,
  sym_macro = 130,
  sym_macro_middle = 131,
  sym_nested = 132,
  sym_attempt = 133,
  sym_attempt_middle = 134,
  sym_ftl = 135,
  sym_import = 136,
  sym_include = 137,
  sym_recurse = 138,
  sym_setting = 139,
  sym_visit = 140,
  sym_assign = 141,
  sym_global = 142,
  sym_local = 143,
  aux_sym_source_file_repeat1 = 144,
  aux_sym_as_expression_repeat1 = 145,
  aux_sym_as_expression_repeat2 = 146,
  aux_sym_group_repeat1 = 147,
  aux_sym_sequence_repeat1 = 148,
  aux_sym_hash_repeat1 = 149,
  aux_sym_list_repeat1 = 150,
  aux_sym_items_repeat1 = 151,
  aux_sym_if_repeat1 = 152,
  aux_sym_switch_repeat1 = 153,
  aux_sym_case_repeat1 = 154,
  aux_sym_case_repeat2 = 155,
  aux_sym_function_repeat1 = 156,
  aux_sym_macro_repeat1 = 157,
  aux_sym_attempt_repeat1 = 158,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_comment] = "comment",
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
  [anon_sym_RBRACE] = "}",
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
  [aux_sym_as_expression_repeat1] = "as_expression_repeat1",
  [aux_sym_as_expression_repeat2] = "as_expression_repeat2",
  [aux_sym_group_repeat1] = "group_repeat1",
  [aux_sym_sequence_repeat1] = "sequence_repeat1",
  [aux_sym_hash_repeat1] = "hash_repeat1",
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
  [anon_sym_RBRACE] = {
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
  [aux_sym_hash_repeat1] = {
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
        ADVANCE(35);
      if (lookahead == '<')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(204);
      if (lookahead == '>')
        ADVANCE(206);
      if (lookahead == '?')
        ADVANCE(207);
      if (lookahead == '[')
        ADVANCE(209);
      if (lookahead == ']')
        ADVANCE(210);
      if (lookahead == 'a')
        ADVANCE(211);
      if (lookahead == 'f')
        ADVANCE(213);
      if (lookahead == 'g')
        ADVANCE(218);
      if (lookahead == 'l')
        ADVANCE(221);
      if (lookahead == 't')
        ADVANCE(224);
      if (lookahead == 'u')
        ADVANCE(228);
      if (lookahead == '{')
        ADVANCE(233);
      if (lookahead == '|')
        ADVANCE(234);
      if (lookahead == '}')
        ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(237);
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
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH);
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
      if (lookahead == '>')
        ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '#')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(202);
      if (lookahead == '@')
        ADVANCE(203);
      END_STATE();
    case 37:
      if (lookahead == '-')
        ADVANCE(38);
      if (lookahead == 'a')
        ADVANCE(44);
      if (lookahead == 'b')
        ADVANCE(57);
      if (lookahead == 'c')
        ADVANCE(63);
      if (lookahead == 'd')
        ADVANCE(75);
      if (lookahead == 'e')
        ADVANCE(83);
      if (lookahead == 'f')
        ADVANCE(90);
      if (lookahead == 'g')
        ADVANCE(113);
      if (lookahead == 'i')
        ADVANCE(119);
      if (lookahead == 'l')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(146);
      if (lookahead == 'n')
        ADVANCE(151);
      if (lookahead == 'r')
        ADVANCE(159);
      if (lookahead == 's')
        ADVANCE(177);
      if (lookahead == 't')
        ADVANCE(195);
      if (lookahead == 'v')
        ADVANCE(197);
      END_STATE();
    case 38:
      if (lookahead == '-')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == '-')
        ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '-')
        ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == '-')
        ADVANCE(42);
      if (lookahead == '>')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(40);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-')
        ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(40);
      END_STATE();
    case 44:
      if (lookahead == 's')
        ADVANCE(45);
      if (lookahead == 't')
        ADVANCE(50);
      END_STATE();
    case 45:
      if (lookahead == 's')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'i')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'g')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'n')
        ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT_POUNDassign);
      END_STATE();
    case 50:
      if (lookahead == 't')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'e')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'm')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'p')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 't')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == '>')
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT_POUNDattempt_GT);
      END_STATE();
    case 57:
      if (lookahead == 'r')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'e')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'a')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'k')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == '>')
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_break);
      END_STATE();
    case 63:
      if (lookahead == 'a')
        ADVANCE(64);
      if (lookahead == 'o')
        ADVANCE(67);
      END_STATE();
    case 64:
      if (lookahead == 's')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'e')
        ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LT_POUNDcase);
      END_STATE();
    case 67:
      if (lookahead == 'n')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 't')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'i')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'n')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'u')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'e')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == '>')
        ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_continue);
      END_STATE();
    case 75:
      if (lookahead == 'e')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'f')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 'a')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'u')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'l')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 't')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == '>')
        ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LT_POUNDdefault_GT);
      END_STATE();
    case 83:
      if (lookahead == 'l')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 's')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'e')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == '>')
        ADVANCE(87);
      if (lookahead == 'i')
        ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LT_POUNDelse_GT);
      END_STATE();
    case 88:
      if (lookahead == 'f')
        ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LT_POUNDelseif);
      END_STATE();
    case 90:
      if (lookahead == 'a')
        ADVANCE(91);
      if (lookahead == 'l')
        ADVANCE(99);
      if (lookahead == 't')
        ADVANCE(104);
      if (lookahead == 'u')
        ADVANCE(106);
      END_STATE();
    case 91:
      if (lookahead == 'l')
        ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'l')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'b')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'a')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'c')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'k')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == '>')
        ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_fallback);
      END_STATE();
    case 99:
      if (lookahead == 'u')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 's')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'h')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == '>')
        ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_flush);
      END_STATE();
    case 104:
      if (lookahead == 'l')
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LT_POUNDftl);
      END_STATE();
    case 106:
      if (lookahead == 'n')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'c')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 't')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'i')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'o')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'n')
        ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LT_POUNDfunction);
      END_STATE();
    case 113:
      if (lookahead == 'l')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'o')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'b')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'a')
        ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == 'l')
        ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LT_POUNDglobal);
      END_STATE();
    case 119:
      if (lookahead == 'f')
        ADVANCE(120);
      if (lookahead == 'm')
        ADVANCE(121);
      if (lookahead == 'n')
        ADVANCE(126);
      if (lookahead == 't')
        ADVANCE(132);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LT_POUNDif);
      END_STATE();
    case 121:
      if (lookahead == 'p')
        ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 'o')
        ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == 'r')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 't')
        ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LT_POUNDimport);
      END_STATE();
    case 126:
      if (lookahead == 'c')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == 'l')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'u')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'd')
        ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 'e')
        ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LT_POUNDinclude);
      END_STATE();
    case 132:
      if (lookahead == 'e')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'm')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == 's')
        ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LT_POUNDitems);
      END_STATE();
    case 136:
      if (lookahead == 'i')
        ADVANCE(137);
      if (lookahead == 'o')
        ADVANCE(140);
      if (lookahead == 't')
        ADVANCE(144);
      END_STATE();
    case 137:
      if (lookahead == 's')
        ADVANCE(138);
      END_STATE();
    case 138:
      if (lookahead == 't')
        ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LT_POUNDlist);
      END_STATE();
    case 140:
      if (lookahead == 'c')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == 'a')
        ADVANCE(142);
      END_STATE();
    case 142:
      if (lookahead == 'l')
        ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LT_POUNDlocal);
      END_STATE();
    case 144:
      if (lookahead == '>')
        ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_lt);
      END_STATE();
    case 146:
      if (lookahead == 'a')
        ADVANCE(147);
      END_STATE();
    case 147:
      if (lookahead == 'c')
        ADVANCE(148);
      END_STATE();
    case 148:
      if (lookahead == 'r')
        ADVANCE(149);
      END_STATE();
    case 149:
      if (lookahead == 'o')
        ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LT_POUNDmacro);
      END_STATE();
    case 151:
      if (lookahead == 'e')
        ADVANCE(152);
      if (lookahead == 't')
        ADVANCE(157);
      END_STATE();
    case 152:
      if (lookahead == 's')
        ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == 't')
        ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == 'e')
        ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == 'd')
        ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LT_POUNDnested);
      END_STATE();
    case 157:
      if (lookahead == '>')
        ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_nt);
      END_STATE();
    case 159:
      if (lookahead == 'e')
        ADVANCE(160);
      if (lookahead == 't')
        ADVANCE(175);
      END_STATE();
    case 160:
      if (lookahead == 'c')
        ADVANCE(161);
      if (lookahead == 't')
        ADVANCE(171);
      END_STATE();
    case 161:
      if (lookahead == 'o')
        ADVANCE(162);
      if (lookahead == 'u')
        ADVANCE(167);
      END_STATE();
    case 162:
      if (lookahead == 'v')
        ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == 'e')
        ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'r')
        ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == '>')
        ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_recover);
      END_STATE();
    case 167:
      if (lookahead == 'r')
        ADVANCE(168);
      END_STATE();
    case 168:
      if (lookahead == 's')
        ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 'e')
        ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_LT_POUNDrecurse);
      END_STATE();
    case 171:
      if (lookahead == 'u')
        ADVANCE(172);
      END_STATE();
    case 172:
      if (lookahead == 'r')
        ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == 'n')
        ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LT_POUNDreturn);
      END_STATE();
    case 175:
      if (lookahead == '>')
        ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_rt);
      END_STATE();
    case 177:
      if (lookahead == 'e')
        ADVANCE(178);
      if (lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'w')
        ADVANCE(190);
      END_STATE();
    case 178:
      if (lookahead == 'p')
        ADVANCE(179);
      if (lookahead == 't')
        ADVANCE(181);
      END_STATE();
    case 179:
      if (lookahead == '>')
        ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LT_POUNDsep_GT);
      END_STATE();
    case 181:
      if (lookahead == 't')
        ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == 'i')
        ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == 'n')
        ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead == 'g')
        ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_LT_POUNDsetting);
      END_STATE();
    case 186:
      if (lookahead == 'o')
        ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == 'p')
        ADVANCE(188);
      END_STATE();
    case 188:
      if (lookahead == '>')
        ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_stop);
      END_STATE();
    case 190:
      if (lookahead == 'i')
        ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == 't')
        ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == 'c')
        ADVANCE(193);
      END_STATE();
    case 193:
      if (lookahead == 'h')
        ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LT_POUNDswitch);
      END_STATE();
    case 195:
      if (lookahead == '>')
        ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_t);
      END_STATE();
    case 197:
      if (lookahead == 'i')
        ADVANCE(198);
      END_STATE();
    case 198:
      if (lookahead == 's')
        ADVANCE(199);
      END_STATE();
    case 199:
      if (lookahead == 'i')
        ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead == 't')
        ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LT_POUNDvisit);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_LT_AT);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '?')
        ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 211:
      if (lookahead == 's')
        ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 213:
      if (lookahead == 'a')
        ADVANCE(214);
      END_STATE();
    case 214:
      if (lookahead == 'l')
        ADVANCE(215);
      END_STATE();
    case 215:
      if (lookahead == 's')
        ADVANCE(216);
      END_STATE();
    case 216:
      if (lookahead == 'e')
        ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 218:
      if (lookahead == 't')
        ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_gt);
      if (lookahead == 'e')
        ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_gte);
      END_STATE();
    case 221:
      if (lookahead == 't')
        ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_lt);
      if (lookahead == 'e')
        ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_lte);
      END_STATE();
    case 224:
      if (lookahead == 'r')
        ADVANCE(225);
      END_STATE();
    case 225:
      if (lookahead == 'u')
        ADVANCE(226);
      END_STATE();
    case 226:
      if (lookahead == 'e')
        ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 228:
      if (lookahead == 's')
        ADVANCE(229);
      END_STATE();
    case 229:
      if (lookahead == 'i')
        ADVANCE(230);
      END_STATE();
    case 230:
      if (lookahead == 'n')
        ADVANCE(231);
      END_STATE();
    case 231:
      if (lookahead == 'g')
        ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 234:
      if (lookahead == '|')
        ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 238:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(238);
      END_STATE();
    case 239:
      if (lookahead == '#')
        ADVANCE(240);
      if (lookahead == '/')
        ADVANCE(248);
      if (lookahead == '@')
        ADVANCE(203);
      END_STATE();
    case 240:
      if (lookahead == '-')
        ADVANCE(38);
      if (lookahead == 'a')
        ADVANCE(44);
      if (lookahead == 'f')
        ADVANCE(90);
      if (lookahead == 'g')
        ADVANCE(113);
      if (lookahead == 'i')
        ADVANCE(241);
      if (lookahead == 'l')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(146);
      if (lookahead == 'n')
        ADVANCE(242);
      if (lookahead == 'r')
        ADVANCE(243);
      if (lookahead == 's')
        ADVANCE(246);
      if (lookahead == 't')
        ADVANCE(195);
      if (lookahead == 'v')
        ADVANCE(197);
      END_STATE();
    case 241:
      if (lookahead == 'f')
        ADVANCE(120);
      if (lookahead == 'm')
        ADVANCE(121);
      if (lookahead == 'n')
        ADVANCE(126);
      END_STATE();
    case 242:
      if (lookahead == 't')
        ADVANCE(157);
      END_STATE();
    case 243:
      if (lookahead == 'e')
        ADVANCE(244);
      if (lookahead == 't')
        ADVANCE(175);
      END_STATE();
    case 244:
      if (lookahead == 'c')
        ADVANCE(245);
      END_STATE();
    case 245:
      if (lookahead == 'u')
        ADVANCE(167);
      END_STATE();
    case 246:
      if (lookahead == 'e')
        ADVANCE(247);
      if (lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'w')
        ADVANCE(190);
      END_STATE();
    case 247:
      if (lookahead == 't')
        ADVANCE(181);
      END_STATE();
    case 248:
      if (lookahead == '#')
        ADVANCE(249);
      END_STATE();
    case 249:
      if (lookahead == 'a')
        ADVANCE(250);
      if (lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'l')
        ADVANCE(264);
      END_STATE();
    case 250:
      if (lookahead == 's')
        ADVANCE(251);
      END_STATE();
    case 251:
      if (lookahead == 's')
        ADVANCE(252);
      END_STATE();
    case 252:
      if (lookahead == 'i')
        ADVANCE(253);
      END_STATE();
    case 253:
      if (lookahead == 'g')
        ADVANCE(254);
      END_STATE();
    case 254:
      if (lookahead == 'n')
        ADVANCE(255);
      END_STATE();
    case 255:
      if (lookahead == '>')
        ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_end_assign);
      END_STATE();
    case 257:
      if (lookahead == 'l')
        ADVANCE(258);
      END_STATE();
    case 258:
      if (lookahead == 'o')
        ADVANCE(259);
      END_STATE();
    case 259:
      if (lookahead == 'b')
        ADVANCE(260);
      END_STATE();
    case 260:
      if (lookahead == 'a')
        ADVANCE(261);
      END_STATE();
    case 261:
      if (lookahead == 'l')
        ADVANCE(262);
      END_STATE();
    case 262:
      if (lookahead == '>')
        ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_end_global);
      END_STATE();
    case 264:
      if (lookahead == 'o')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 'c')
        ADVANCE(266);
      END_STATE();
    case 266:
      if (lookahead == 'a')
        ADVANCE(267);
      END_STATE();
    case 267:
      if (lookahead == 'l')
        ADVANCE(268);
      END_STATE();
    case 268:
      if (lookahead == '>')
        ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_end_local);
      END_STATE();
    case 270:
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 272:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(273);
      if (lookahead == '/')
        ADVANCE(274);
      if (lookahead == '>')
        ADVANCE(206);
      if (lookahead == '?')
        ADVANCE(275);
      if (lookahead == '[')
        ADVANCE(209);
      if (lookahead == 'a')
        ADVANCE(276);
      if (lookahead == 't')
        ADVANCE(278);
      if (lookahead == '{')
        ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(272);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 273:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 274:
      if (lookahead == '>')
        ADVANCE(34);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'u')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 283:
      if (lookahead == '<')
        ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(283);
      END_STATE();
    case 284:
      if (lookahead == '#')
        ADVANCE(285);
      if (lookahead == '/')
        ADVANCE(288);
      if (lookahead == '@')
        ADVANCE(203);
      END_STATE();
    case 285:
      if (lookahead == 'a')
        ADVANCE(44);
      if (lookahead == 'f')
        ADVANCE(90);
      if (lookahead == 'g')
        ADVANCE(113);
      if (lookahead == 'i')
        ADVANCE(241);
      if (lookahead == 'l')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(146);
      if (lookahead == 'n')
        ADVANCE(242);
      if (lookahead == 'r')
        ADVANCE(286);
      if (lookahead == 's')
        ADVANCE(246);
      if (lookahead == 't')
        ADVANCE(195);
      if (lookahead == 'v')
        ADVANCE(197);
      END_STATE();
    case 286:
      if (lookahead == 'e')
        ADVANCE(287);
      if (lookahead == 't')
        ADVANCE(175);
      END_STATE();
    case 287:
      if (lookahead == 'c')
        ADVANCE(161);
      END_STATE();
    case 288:
      if (lookahead == '#')
        ADVANCE(289);
      END_STATE();
    case 289:
      if (lookahead == 'a')
        ADVANCE(290);
      if (lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'l')
        ADVANCE(264);
      END_STATE();
    case 290:
      if (lookahead == 's')
        ADVANCE(251);
      if (lookahead == 't')
        ADVANCE(291);
      END_STATE();
    case 291:
      if (lookahead == 't')
        ADVANCE(292);
      END_STATE();
    case 292:
      if (lookahead == 'e')
        ADVANCE(293);
      END_STATE();
    case 293:
      if (lookahead == 'm')
        ADVANCE(294);
      END_STATE();
    case 294:
      if (lookahead == 'p')
        ADVANCE(295);
      END_STATE();
    case 295:
      if (lookahead == 't')
        ADVANCE(296);
      END_STATE();
    case 296:
      if (lookahead == '>')
        ADVANCE(297);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDattempt_GT);
      END_STATE();
    case 298:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(298);
      END_STATE();
    case 299:
      if (lookahead == '#')
        ADVANCE(37);
      if (lookahead == '/')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(203);
      END_STATE();
    case 300:
      if (lookahead == '#')
        ADVANCE(301);
      END_STATE();
    case 301:
      if (lookahead == 'a')
        ADVANCE(290);
      if (lookahead == 'f')
        ADVANCE(302);
      if (lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'i')
        ADVANCE(311);
      if (lookahead == 'l')
        ADVANCE(319);
      if (lookahead == 'm')
        ADVANCE(324);
      if (lookahead == 's')
        ADVANCE(330);
      END_STATE();
    case 302:
      if (lookahead == 'u')
        ADVANCE(303);
      END_STATE();
    case 303:
      if (lookahead == 'n')
        ADVANCE(304);
      END_STATE();
    case 304:
      if (lookahead == 'c')
        ADVANCE(305);
      END_STATE();
    case 305:
      if (lookahead == 't')
        ADVANCE(306);
      END_STATE();
    case 306:
      if (lookahead == 'i')
        ADVANCE(307);
      END_STATE();
    case 307:
      if (lookahead == 'o')
        ADVANCE(308);
      END_STATE();
    case 308:
      if (lookahead == 'n')
        ADVANCE(309);
      END_STATE();
    case 309:
      if (lookahead == '>')
        ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDfunction_GT);
      END_STATE();
    case 311:
      if (lookahead == 'f')
        ADVANCE(312);
      if (lookahead == 't')
        ADVANCE(314);
      END_STATE();
    case 312:
      if (lookahead == '>')
        ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDif_GT);
      END_STATE();
    case 314:
      if (lookahead == 'e')
        ADVANCE(315);
      END_STATE();
    case 315:
      if (lookahead == 'm')
        ADVANCE(316);
      END_STATE();
    case 316:
      if (lookahead == 's')
        ADVANCE(317);
      END_STATE();
    case 317:
      if (lookahead == '>')
        ADVANCE(318);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDitems_GT);
      END_STATE();
    case 319:
      if (lookahead == 'i')
        ADVANCE(320);
      if (lookahead == 'o')
        ADVANCE(265);
      END_STATE();
    case 320:
      if (lookahead == 's')
        ADVANCE(321);
      END_STATE();
    case 321:
      if (lookahead == 't')
        ADVANCE(322);
      END_STATE();
    case 322:
      if (lookahead == '>')
        ADVANCE(323);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDlist_GT);
      END_STATE();
    case 324:
      if (lookahead == 'a')
        ADVANCE(325);
      END_STATE();
    case 325:
      if (lookahead == 'c')
        ADVANCE(326);
      END_STATE();
    case 326:
      if (lookahead == 'r')
        ADVANCE(327);
      END_STATE();
    case 327:
      if (lookahead == 'o')
        ADVANCE(328);
      END_STATE();
    case 328:
      if (lookahead == '>')
        ADVANCE(329);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDmacro_GT);
      END_STATE();
    case 330:
      if (lookahead == 'w')
        ADVANCE(331);
      END_STATE();
    case 331:
      if (lookahead == 'i')
        ADVANCE(332);
      END_STATE();
    case 332:
      if (lookahead == 't')
        ADVANCE(333);
      END_STATE();
    case 333:
      if (lookahead == 'c')
        ADVANCE(334);
      END_STATE();
    case 334:
      if (lookahead == 'h')
        ADVANCE(335);
      END_STATE();
    case 335:
      if (lookahead == '>')
        ADVANCE(336);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDswitch_GT);
      END_STATE();
    case 337:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(337);
      END_STATE();
    case 338:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(273);
      if (lookahead == '[')
        ADVANCE(209);
      if (lookahead == ']')
        ADVANCE(210);
      if (lookahead == 't')
        ADVANCE(278);
      if (lookahead == '{')
        ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(338);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 339:
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
        ADVANCE(340);
      if (lookahead == ':')
        ADVANCE(35);
      if (lookahead == '<')
        ADVANCE(341);
      if (lookahead == '=')
        ADVANCE(204);
      if (lookahead == '>')
        ADVANCE(206);
      if (lookahead == '?')
        ADVANCE(207);
      if (lookahead == '[')
        ADVANCE(209);
      if (lookahead == 'a')
        ADVANCE(276);
      if (lookahead == 'g')
        ADVANCE(342);
      if (lookahead == 'l')
        ADVANCE(345);
      if (lookahead == 't')
        ADVANCE(278);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '{')
        ADVANCE(233);
      if (lookahead == '|')
        ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(339);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=')
        ADVANCE(33);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=')
        ADVANCE(202);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_gt);
      if (lookahead == 'e')
        ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_gte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_lt);
      if (lookahead == 'e')
        ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_lte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'g')
        ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_using);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 353:
      if (lookahead == 'f')
        ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(353);
      END_STATE();
    case 354:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(273);
      if (lookahead == '[')
        ADVANCE(209);
      if (lookahead == 't')
        ADVANCE(278);
      if (lookahead == '{')
        ADVANCE(233);
      if (lookahead == '}')
        ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(354);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 355:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '.')
        ADVANCE(273);
      if (lookahead == '/')
        ADVANCE(274);
      if (lookahead == '>')
        ADVANCE(206);
      if (lookahead == '?')
        ADVANCE(275);
      if (lookahead == '[')
        ADVANCE(209);
      if (lookahead == 'a')
        ADVANCE(276);
      if (lookahead == 't')
        ADVANCE(278);
      if (lookahead == '{')
        ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(355);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 356:
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
        ADVANCE(340);
      if (lookahead == ':')
        ADVANCE(35);
      if (lookahead == '<')
        ADVANCE(341);
      if (lookahead == '=')
        ADVANCE(204);
      if (lookahead == '>')
        ADVANCE(206);
      if (lookahead == '?')
        ADVANCE(207);
      if (lookahead == '[')
        ADVANCE(209);
      if (lookahead == 'a')
        ADVANCE(276);
      if (lookahead == 'g')
        ADVANCE(342);
      if (lookahead == 'l')
        ADVANCE(345);
      if (lookahead == 't')
        ADVANCE(278);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '{')
        ADVANCE(233);
      if (lookahead == '|')
        ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(356);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 357:
      if (lookahead == '<')
        ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(357);
      END_STATE();
    case 358:
      if (lookahead == '#')
        ADVANCE(359);
      if (lookahead == '/')
        ADVANCE(362);
      if (lookahead == '@')
        ADVANCE(203);
      END_STATE();
    case 359:
      if (lookahead == 'a')
        ADVANCE(44);
      if (lookahead == 'f')
        ADVANCE(90);
      if (lookahead == 'g')
        ADVANCE(113);
      if (lookahead == 'i')
        ADVANCE(241);
      if (lookahead == 'l')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(146);
      if (lookahead == 'n')
        ADVANCE(242);
      if (lookahead == 'r')
        ADVANCE(360);
      if (lookahead == 's')
        ADVANCE(246);
      if (lookahead == 't')
        ADVANCE(195);
      if (lookahead == 'v')
        ADVANCE(197);
      END_STATE();
    case 360:
      if (lookahead == 'e')
        ADVANCE(361);
      if (lookahead == 't')
        ADVANCE(175);
      END_STATE();
    case 361:
      if (lookahead == 'c')
        ADVANCE(245);
      if (lookahead == 't')
        ADVANCE(171);
      END_STATE();
    case 362:
      if (lookahead == '#')
        ADVANCE(363);
      END_STATE();
    case 363:
      if (lookahead == 'a')
        ADVANCE(250);
      if (lookahead == 'f')
        ADVANCE(302);
      if (lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'l')
        ADVANCE(264);
      END_STATE();
    case 364:
      if (lookahead == '<')
        ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(364);
      END_STATE();
    case 365:
      if (lookahead == '#')
        ADVANCE(366);
      if (lookahead == '/')
        ADVANCE(367);
      if (lookahead == '@')
        ADVANCE(203);
      END_STATE();
    case 366:
      if (lookahead == 'a')
        ADVANCE(44);
      if (lookahead == 'f')
        ADVANCE(90);
      if (lookahead == 'g')
        ADVANCE(113);
      if (lookahead == 'i')
        ADVANCE(241);
      if (lookahead == 'l')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(146);
      if (lookahead == 'n')
        ADVANCE(151);
      if (lookahead == 'r')
        ADVANCE(360);
      if (lookahead == 's')
        ADVANCE(246);
      if (lookahead == 't')
        ADVANCE(195);
      if (lookahead == 'v')
        ADVANCE(197);
      END_STATE();
    case 367:
      if (lookahead == '#')
        ADVANCE(368);
      END_STATE();
    case 368:
      if (lookahead == 'a')
        ADVANCE(250);
      if (lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'l')
        ADVANCE(264);
      if (lookahead == 'm')
        ADVANCE(324);
      END_STATE();
    case 369:
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
        ADVANCE(35);
      if (lookahead == '<')
        ADVANCE(341);
      if (lookahead == '=')
        ADVANCE(204);
      if (lookahead == '>')
        ADVANCE(206);
      if (lookahead == '?')
        ADVANCE(207);
      if (lookahead == '[')
        ADVANCE(209);
      if (lookahead == 'a')
        ADVANCE(276);
      if (lookahead == 'g')
        ADVANCE(342);
      if (lookahead == 'l')
        ADVANCE(345);
      if (lookahead == 't')
        ADVANCE(278);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '{')
        ADVANCE(233);
      if (lookahead == '|')
        ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(369);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 370:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(273);
      if (lookahead == '>')
        ADVANCE(206);
      if (lookahead == '[')
        ADVANCE(209);
      if (lookahead == ']')
        ADVANCE(210);
      if (lookahead == 't')
        ADVANCE(278);
      if (lookahead == '{')
        ADVANCE(233);
      if (lookahead == '}')
        ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(370);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 371:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(273);
      if (lookahead == '>')
        ADVANCE(206);
      if (lookahead == '[')
        ADVANCE(209);
      if (lookahead == 't')
        ADVANCE(278);
      if (lookahead == '{')
        ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(371);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 372:
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
        ADVANCE(340);
      if (lookahead == ':')
        ADVANCE(35);
      if (lookahead == '<')
        ADVANCE(341);
      if (lookahead == '=')
        ADVANCE(204);
      if (lookahead == '?')
        ADVANCE(373);
      if (lookahead == '[')
        ADVANCE(209);
      if (lookahead == ']')
        ADVANCE(210);
      if (lookahead == 'g')
        ADVANCE(342);
      if (lookahead == 'l')
        ADVANCE(345);
      if (lookahead == 't')
        ADVANCE(278);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '{')
        ADVANCE(233);
      if (lookahead == '|')
        ADVANCE(234);
      if (lookahead == '}')
        ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(372);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 373:
      if (lookahead == '?')
        ADVANCE(208);
      END_STATE();
    case 374:
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
        ADVANCE(340);
      if (lookahead == ':')
        ADVANCE(35);
      if (lookahead == '<')
        ADVANCE(341);
      if (lookahead == '=')
        ADVANCE(204);
      if (lookahead == '?')
        ADVANCE(373);
      if (lookahead == '[')
        ADVANCE(209);
      if (lookahead == ']')
        ADVANCE(210);
      if (lookahead == 'g')
        ADVANCE(342);
      if (lookahead == 'l')
        ADVANCE(345);
      if (lookahead == 't')
        ADVANCE(278);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '{')
        ADVANCE(233);
      if (lookahead == '|')
        ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(374);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 375:
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
        ADVANCE(340);
      if (lookahead == ':')
        ADVANCE(35);
      if (lookahead == '<')
        ADVANCE(341);
      if (lookahead == '=')
        ADVANCE(204);
      if (lookahead == '?')
        ADVANCE(373);
      if (lookahead == '[')
        ADVANCE(209);
      if (lookahead == 'g')
        ADVANCE(342);
      if (lookahead == 'l')
        ADVANCE(345);
      if (lookahead == 't')
        ADVANCE(278);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '{')
        ADVANCE(233);
      if (lookahead == '|')
        ADVANCE(234);
      if (lookahead == '}')
        ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(375);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 376:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '.')
        ADVANCE(273);
      if (lookahead == '?')
        ADVANCE(275);
      if (lookahead == '[')
        ADVANCE(209);
      if (lookahead == 'a')
        ADVANCE(276);
      if (lookahead == 't')
        ADVANCE(278);
      if (lookahead == '{')
        ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(376);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 377:
      if (lookahead == '<')
        ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(377);
      END_STATE();
    case 378:
      if (lookahead == '#')
        ADVANCE(379);
      if (lookahead == '/')
        ADVANCE(385);
      if (lookahead == '@')
        ADVANCE(203);
      END_STATE();
    case 379:
      if (lookahead == 'a')
        ADVANCE(44);
      if (lookahead == 'b')
        ADVANCE(57);
      if (lookahead == 'c')
        ADVANCE(380);
      if (lookahead == 'e')
        ADVANCE(381);
      if (lookahead == 'f')
        ADVANCE(90);
      if (lookahead == 'g')
        ADVANCE(113);
      if (lookahead == 'i')
        ADVANCE(119);
      if (lookahead == 'l')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(146);
      if (lookahead == 'n')
        ADVANCE(242);
      if (lookahead == 'r')
        ADVANCE(243);
      if (lookahead == 's')
        ADVANCE(177);
      if (lookahead == 't')
        ADVANCE(195);
      if (lookahead == 'v')
        ADVANCE(197);
      END_STATE();
    case 380:
      if (lookahead == 'o')
        ADVANCE(67);
      END_STATE();
    case 381:
      if (lookahead == 'l')
        ADVANCE(382);
      END_STATE();
    case 382:
      if (lookahead == 's')
        ADVANCE(383);
      END_STATE();
    case 383:
      if (lookahead == 'e')
        ADVANCE(384);
      END_STATE();
    case 384:
      if (lookahead == '>')
        ADVANCE(87);
      END_STATE();
    case 385:
      if (lookahead == '#')
        ADVANCE(386);
      END_STATE();
    case 386:
      if (lookahead == 'a')
        ADVANCE(250);
      if (lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'l')
        ADVANCE(319);
      END_STATE();
    case 387:
      if (lookahead == '<')
        ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(387);
      END_STATE();
    case 388:
      if (lookahead == '#')
        ADVANCE(389);
      if (lookahead == '/')
        ADVANCE(390);
      if (lookahead == '@')
        ADVANCE(203);
      END_STATE();
    case 389:
      if (lookahead == 'a')
        ADVANCE(44);
      if (lookahead == 'e')
        ADVANCE(83);
      if (lookahead == 'f')
        ADVANCE(90);
      if (lookahead == 'g')
        ADVANCE(113);
      if (lookahead == 'i')
        ADVANCE(241);
      if (lookahead == 'l')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(146);
      if (lookahead == 'n')
        ADVANCE(242);
      if (lookahead == 'r')
        ADVANCE(243);
      if (lookahead == 's')
        ADVANCE(246);
      if (lookahead == 't')
        ADVANCE(195);
      if (lookahead == 'v')
        ADVANCE(197);
      END_STATE();
    case 390:
      if (lookahead == '#')
        ADVANCE(391);
      END_STATE();
    case 391:
      if (lookahead == 'a')
        ADVANCE(250);
      if (lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'i')
        ADVANCE(392);
      if (lookahead == 'l')
        ADVANCE(264);
      END_STATE();
    case 392:
      if (lookahead == 'f')
        ADVANCE(312);
      END_STATE();
    case 393:
      if (lookahead == '<')
        ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(393);
      END_STATE();
    case 394:
      if (lookahead == '#')
        ADVANCE(395);
      if (lookahead == '/')
        ADVANCE(397);
      if (lookahead == '@')
        ADVANCE(203);
      END_STATE();
    case 395:
      if (lookahead == 'a')
        ADVANCE(44);
      if (lookahead == 'b')
        ADVANCE(57);
      if (lookahead == 'c')
        ADVANCE(396);
      if (lookahead == 'd')
        ADVANCE(75);
      if (lookahead == 'f')
        ADVANCE(90);
      if (lookahead == 'g')
        ADVANCE(113);
      if (lookahead == 'i')
        ADVANCE(241);
      if (lookahead == 'l')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(146);
      if (lookahead == 'n')
        ADVANCE(242);
      if (lookahead == 'r')
        ADVANCE(243);
      if (lookahead == 's')
        ADVANCE(246);
      if (lookahead == 't')
        ADVANCE(195);
      if (lookahead == 'v')
        ADVANCE(197);
      END_STATE();
    case 396:
      if (lookahead == 'a')
        ADVANCE(64);
      END_STATE();
    case 397:
      if (lookahead == '#')
        ADVANCE(398);
      END_STATE();
    case 398:
      if (lookahead == 'a')
        ADVANCE(250);
      if (lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'l')
        ADVANCE(264);
      if (lookahead == 's')
        ADVANCE(330);
      END_STATE();
    case 399:
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
        ADVANCE(340);
      if (lookahead == ':')
        ADVANCE(35);
      if (lookahead == '<')
        ADVANCE(341);
      if (lookahead == '=')
        ADVANCE(204);
      if (lookahead == '?')
        ADVANCE(207);
      if (lookahead == '[')
        ADVANCE(209);
      if (lookahead == 'a')
        ADVANCE(276);
      if (lookahead == 'g')
        ADVANCE(342);
      if (lookahead == 'l')
        ADVANCE(345);
      if (lookahead == 't')
        ADVANCE(278);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '{')
        ADVANCE(233);
      if (lookahead == '|')
        ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(399);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 400:
      if (lookahead == '<')
        ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(400);
      END_STATE();
    case 401:
      if (lookahead == '#')
        ADVANCE(379);
      if (lookahead == '/')
        ADVANCE(402);
      if (lookahead == '@')
        ADVANCE(203);
      END_STATE();
    case 402:
      if (lookahead == '#')
        ADVANCE(403);
      END_STATE();
    case 403:
      if (lookahead == 'a')
        ADVANCE(250);
      if (lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'i')
        ADVANCE(404);
      if (lookahead == 'l')
        ADVANCE(319);
      if (lookahead == 's')
        ADVANCE(405);
      END_STATE();
    case 404:
      if (lookahead == 't')
        ADVANCE(314);
      END_STATE();
    case 405:
      if (lookahead == 'e')
        ADVANCE(406);
      END_STATE();
    case 406:
      if (lookahead == 'p')
        ADVANCE(407);
      END_STATE();
    case 407:
      if (lookahead == '>')
        ADVANCE(408);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDsep_GT);
      END_STATE();
    case 409:
      if (lookahead == '<')
        ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(409);
      END_STATE();
    case 410:
      if (lookahead == '#')
        ADVANCE(366);
      if (lookahead == '/')
        ADVANCE(411);
      if (lookahead == '@')
        ADVANCE(203);
      END_STATE();
    case 411:
      if (lookahead == '#')
        ADVANCE(412);
      END_STATE();
    case 412:
      if (lookahead == 'a')
        ADVANCE(250);
      if (lookahead == 'f')
        ADVANCE(302);
      if (lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'l')
        ADVANCE(264);
      if (lookahead == 'm')
        ADVANCE(324);
      END_STATE();
    case 413:
      if (lookahead == '<')
        ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(413);
      END_STATE();
    case 414:
      if (lookahead == '#')
        ADVANCE(415);
      if (lookahead == '/')
        ADVANCE(416);
      if (lookahead == '@')
        ADVANCE(203);
      END_STATE();
    case 415:
      if (lookahead == 'a')
        ADVANCE(44);
      if (lookahead == 'b')
        ADVANCE(57);
      if (lookahead == 'c')
        ADVANCE(380);
      if (lookahead == 'f')
        ADVANCE(90);
      if (lookahead == 'g')
        ADVANCE(113);
      if (lookahead == 'i')
        ADVANCE(241);
      if (lookahead == 'l')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(146);
      if (lookahead == 'n')
        ADVANCE(242);
      if (lookahead == 'r')
        ADVANCE(243);
      if (lookahead == 's')
        ADVANCE(177);
      if (lookahead == 't')
        ADVANCE(195);
      if (lookahead == 'v')
        ADVANCE(197);
      END_STATE();
    case 416:
      if (lookahead == '#')
        ADVANCE(417);
      END_STATE();
    case 417:
      if (lookahead == 'a')
        ADVANCE(250);
      if (lookahead == 'g')
        ADVANCE(257);
      if (lookahead == 'i')
        ADVANCE(404);
      if (lookahead == 'l')
        ADVANCE(264);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 238},
  [2] = {.lex_state = 270},
  [3] = {.lex_state = 272},
  [4] = {.lex_state = 272},
  [5] = {.lex_state = 272},
  [6] = {.lex_state = 272},
  [7] = {.lex_state = 272},
  [8] = {.lex_state = 283},
  [9] = {.lex_state = 298},
  [10] = {.lex_state = 272},
  [11] = {.lex_state = 272},
  [12] = {.lex_state = 272},
  [13] = {.lex_state = 272},
  [14] = {.lex_state = 272},
  [15] = {.lex_state = 272},
  [16] = {.lex_state = 272},
  [17] = {.lex_state = 298},
  [18] = {.lex_state = 272},
  [19] = {.lex_state = 298},
  [20] = {.lex_state = 272},
  [21] = {.lex_state = 298},
  [22] = {.lex_state = 337},
  [23] = {.lex_state = 238},
  [24] = {.lex_state = 272},
  [25] = {.lex_state = 338},
  [26] = {.lex_state = 270},
  [27] = {.lex_state = 339},
  [28] = {.lex_state = 339},
  [29] = {.lex_state = 353},
  [30] = {.lex_state = 338},
  [31] = {.lex_state = 354},
  [32] = {.lex_state = 339},
  [33] = {.lex_state = 339},
  [34] = {.lex_state = 270},
  [35] = {.lex_state = 355},
  [36] = {.lex_state = 356},
  [37] = {.lex_state = 338},
  [38] = {.lex_state = 270},
  [39] = {.lex_state = 356},
  [40] = {.lex_state = 272},
  [41] = {.lex_state = 270},
  [42] = {.lex_state = 357},
  [43] = {.lex_state = 272},
  [44] = {.lex_state = 364},
  [45] = {.lex_state = 272},
  [46] = {.lex_state = 298},
  [47] = {.lex_state = 283},
  [48] = {.lex_state = 283},
  [49] = {.lex_state = 298},
  [50] = {.lex_state = 272},
  [51] = {.lex_state = 298},
  [52] = {.lex_state = 272},
  [53] = {.lex_state = 298},
  [54] = {.lex_state = 272},
  [55] = {.lex_state = 298},
  [56] = {.lex_state = 272},
  [57] = {.lex_state = 298},
  [58] = {.lex_state = 272},
  [59] = {.lex_state = 298},
  [60] = {.lex_state = 272},
  [61] = {.lex_state = 298},
  [62] = {.lex_state = 272},
  [63] = {.lex_state = 298},
  [64] = {.lex_state = 272},
  [65] = {.lex_state = 298},
  [66] = {.lex_state = 272},
  [67] = {.lex_state = 238},
  [68] = {.lex_state = 338},
  [69] = {.lex_state = 369},
  [70] = {.lex_state = 369},
  [71] = {.lex_state = 353},
  [72] = {.lex_state = 338},
  [73] = {.lex_state = 354},
  [74] = {.lex_state = 369},
  [75] = {.lex_state = 369},
  [76] = {.lex_state = 298},
  [77] = {.lex_state = 369},
  [78] = {.lex_state = 272},
  [79] = {.lex_state = 370},
  [80] = {.lex_state = 370},
  [81] = {.lex_state = 353},
  [82] = {.lex_state = 338},
  [83] = {.lex_state = 354},
  [84] = {.lex_state = 370},
  [85] = {.lex_state = 370},
  [86] = {.lex_state = 371},
  [87] = {.lex_state = 270},
  [88] = {.lex_state = 339},
  [89] = {.lex_state = 372},
  [90] = {.lex_state = 372},
  [91] = {.lex_state = 353},
  [92] = {.lex_state = 338},
  [93] = {.lex_state = 339},
  [94] = {.lex_state = 354},
  [95] = {.lex_state = 372},
  [96] = {.lex_state = 372},
  [97] = {.lex_state = 338},
  [98] = {.lex_state = 374},
  [99] = {.lex_state = 338},
  [100] = {.lex_state = 339},
  [101] = {.lex_state = 375},
  [102] = {.lex_state = 354},
  [103] = {.lex_state = 376},
  [104] = {.lex_state = 339},
  [105] = {.lex_state = 339},
  [106] = {.lex_state = 377},
  [107] = {.lex_state = 338},
  [108] = {.lex_state = 370},
  [109] = {.lex_state = 371},
  [110] = {.lex_state = 356},
  [111] = {.lex_state = 371},
  [112] = {.lex_state = 355},
  [113] = {.lex_state = 355},
  [114] = {.lex_state = 353},
  [115] = {.lex_state = 338},
  [116] = {.lex_state = 354},
  [117] = {.lex_state = 355},
  [118] = {.lex_state = 355},
  [119] = {.lex_state = 272},
  [120] = {.lex_state = 355},
  [121] = {.lex_state = 338},
  [122] = {.lex_state = 355},
  [123] = {.lex_state = 272},
  [124] = {.lex_state = 356},
  [125] = {.lex_state = 272},
  [126] = {.lex_state = 387},
  [127] = {.lex_state = 272},
  [128] = {.lex_state = 393},
  [129] = {.lex_state = 298},
  [130] = {.lex_state = 272},
  [131] = {.lex_state = 357},
  [132] = {.lex_state = 357},
  [133] = {.lex_state = 357},
  [134] = {.lex_state = 298},
  [135] = {.lex_state = 272},
  [136] = {.lex_state = 364},
  [137] = {.lex_state = 364},
  [138] = {.lex_state = 364},
  [139] = {.lex_state = 298},
  [140] = {.lex_state = 283},
  [141] = {.lex_state = 298},
  [142] = {.lex_state = 298},
  [143] = {.lex_state = 298},
  [144] = {.lex_state = 298},
  [145] = {.lex_state = 298},
  [146] = {.lex_state = 298},
  [147] = {.lex_state = 298},
  [148] = {.lex_state = 298},
  [149] = {.lex_state = 298},
  [150] = {.lex_state = 272},
  [151] = {.lex_state = 369},
  [152] = {.lex_state = 369},
  [153] = {.lex_state = 338},
  [154] = {.lex_state = 369},
  [155] = {.lex_state = 354},
  [156] = {.lex_state = 376},
  [157] = {.lex_state = 369},
  [158] = {.lex_state = 369},
  [159] = {.lex_state = 338},
  [160] = {.lex_state = 272},
  [161] = {.lex_state = 369},
  [162] = {.lex_state = 272},
  [163] = {.lex_state = 298},
  [164] = {.lex_state = 272},
  [165] = {.lex_state = 370},
  [166] = {.lex_state = 370},
  [167] = {.lex_state = 338},
  [168] = {.lex_state = 370},
  [169] = {.lex_state = 354},
  [170] = {.lex_state = 376},
  [171] = {.lex_state = 370},
  [172] = {.lex_state = 370},
  [173] = {.lex_state = 371},
  [174] = {.lex_state = 355},
  [175] = {.lex_state = 372},
  [176] = {.lex_state = 372},
  [177] = {.lex_state = 338},
  [178] = {.lex_state = 372},
  [179] = {.lex_state = 354},
  [180] = {.lex_state = 376},
  [181] = {.lex_state = 372},
  [182] = {.lex_state = 372},
  [183] = {.lex_state = 338},
  [184] = {.lex_state = 338},
  [185] = {.lex_state = 374},
  [186] = {.lex_state = 338},
  [187] = {.lex_state = 339},
  [188] = {.lex_state = 338},
  [189] = {.lex_state = 354},
  [190] = {.lex_state = 375},
  [191] = {.lex_state = 354},
  [192] = {.lex_state = 339},
  [193] = {.lex_state = 354},
  [194] = {.lex_state = 338},
  [195] = {.lex_state = 339},
  [196] = {.lex_state = 399},
  [197] = {.lex_state = 376},
  [198] = {.lex_state = 298},
  [199] = {.lex_state = 377},
  [200] = {.lex_state = 377},
  [201] = {.lex_state = 272},
  [202] = {.lex_state = 400},
  [203] = {.lex_state = 377},
  [204] = {.lex_state = 400},
  [205] = {.lex_state = 377},
  [206] = {.lex_state = 371},
  [207] = {.lex_state = 371},
  [208] = {.lex_state = 355},
  [209] = {.lex_state = 355},
  [210] = {.lex_state = 338},
  [211] = {.lex_state = 355},
  [212] = {.lex_state = 354},
  [213] = {.lex_state = 376},
  [214] = {.lex_state = 355},
  [215] = {.lex_state = 355},
  [216] = {.lex_state = 272},
  [217] = {.lex_state = 272},
  [218] = {.lex_state = 272},
  [219] = {.lex_state = 387},
  [220] = {.lex_state = 298},
  [221] = {.lex_state = 272},
  [222] = {.lex_state = 387},
  [223] = {.lex_state = 387},
  [224] = {.lex_state = 387},
  [225] = {.lex_state = 298},
  [226] = {.lex_state = 272},
  [227] = {.lex_state = 393},
  [228] = {.lex_state = 393},
  [229] = {.lex_state = 393},
  [230] = {.lex_state = 393},
  [231] = {.lex_state = 409},
  [232] = {.lex_state = 270},
  [233] = {.lex_state = 298},
  [234] = {.lex_state = 357},
  [235] = {.lex_state = 357},
  [236] = {.lex_state = 364},
  [237] = {.lex_state = 272},
  [238] = {.lex_state = 298},
  [239] = {.lex_state = 364},
  [240] = {.lex_state = 364},
  [241] = {.lex_state = 272},
  [242] = {.lex_state = 369},
  [243] = {.lex_state = 369},
  [244] = {.lex_state = 369},
  [245] = {.lex_state = 376},
  [246] = {.lex_state = 272},
  [247] = {.lex_state = 272},
  [248] = {.lex_state = 370},
  [249] = {.lex_state = 370},
  [250] = {.lex_state = 370},
  [251] = {.lex_state = 376},
  [252] = {.lex_state = 372},
  [253] = {.lex_state = 372},
  [254] = {.lex_state = 372},
  [255] = {.lex_state = 376},
  [256] = {.lex_state = 338},
  [257] = {.lex_state = 338},
  [258] = {.lex_state = 354},
  [259] = {.lex_state = 354},
  [260] = {.lex_state = 376},
  [261] = {.lex_state = 338},
  [262] = {.lex_state = 376},
  [263] = {.lex_state = 399},
  [264] = {.lex_state = 376},
  [265] = {.lex_state = 339},
  [266] = {.lex_state = 376},
  [267] = {.lex_state = 377},
  [268] = {.lex_state = 270},
  [269] = {.lex_state = 400},
  [270] = {.lex_state = 298},
  [271] = {.lex_state = 377},
  [272] = {.lex_state = 377},
  [273] = {.lex_state = 355},
  [274] = {.lex_state = 355},
  [275] = {.lex_state = 355},
  [276] = {.lex_state = 376},
  [277] = {.lex_state = 387},
  [278] = {.lex_state = 387},
  [279] = {.lex_state = 272},
  [280] = {.lex_state = 298},
  [281] = {.lex_state = 387},
  [282] = {.lex_state = 387},
  [283] = {.lex_state = 270},
  [284] = {.lex_state = 393},
  [285] = {.lex_state = 298},
  [286] = {.lex_state = 393},
  [287] = {.lex_state = 393},
  [288] = {.lex_state = 409},
  [289] = {.lex_state = 298},
  [290] = {.lex_state = 364},
  [291] = {.lex_state = 298},
  [292] = {.lex_state = 369},
  [293] = {.lex_state = 370},
  [294] = {.lex_state = 372},
  [295] = {.lex_state = 376},
  [296] = {.lex_state = 376},
  [297] = {.lex_state = 376},
  [298] = {.lex_state = 377},
  [299] = {.lex_state = 413},
  [300] = {.lex_state = 298},
  [301] = {.lex_state = 355},
  [302] = {.lex_state = 387},
  [303] = {.lex_state = 387},
  [304] = {.lex_state = 298},
  [305] = {.lex_state = 393},
  [306] = {.lex_state = 393},
  [307] = {.lex_state = 298},
  [308] = {.lex_state = 413},
  [309] = {.lex_state = 377},
  [310] = {.lex_state = 413},
  [311] = {.lex_state = 393},
  [312] = {.lex_state = 393},
  [313] = {.lex_state = 377},
  [314] = {.lex_state = 413},
  [315] = {.lex_state = 393},
  [316] = {.lex_state = 393},
  [317] = {.lex_state = 393},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
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
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [sym_source_file] = STATE(22),
    [sym__definition] = STATE(23),
    [sym_directive] = STATE(23),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LT_AT] = ACTIONS(9),
    [anon_sym_LT_POUNDlist] = ACTIONS(11),
    [anon_sym_LT_POUNDif] = ACTIONS(13),
    [anon_sym_LT_POUNDswitch] = ACTIONS(15),
    [anon_sym_LT_POUNDfunction] = ACTIONS(17),
    [anon_sym_LT_POUNDmacro] = ACTIONS(19),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(21),
    [sym_fallback] = ACTIONS(23),
    [sym_flush] = ACTIONS(23),
    [anon_sym_LT_POUNDftl] = ACTIONS(25),
    [anon_sym_LT_POUNDimport] = ACTIONS(27),
    [anon_sym_LT_POUNDinclude] = ACTIONS(29),
    [sym_lt] = ACTIONS(23),
    [sym_nt] = ACTIONS(23),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(31),
    [sym_rt] = ACTIONS(23),
    [anon_sym_LT_POUNDsetting] = ACTIONS(33),
    [sym_stop] = ACTIONS(23),
    [sym_t] = ACTIONS(23),
    [anon_sym_LT_POUNDvisit] = ACTIONS(35),
    [anon_sym_LT_POUNDassign] = ACTIONS(37),
    [sym_end_assign] = ACTIONS(39),
    [anon_sym_LT_POUNDglobal] = ACTIONS(41),
    [sym_end_global] = ACTIONS(43),
    [anon_sym_LT_POUNDlocal] = ACTIONS(45),
    [sym_end_local] = ACTIONS(47),
  },
  [2] = {
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(49),
  },
  [3] = {
    [sym_parameter_group] = STATE(34),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(36),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(36),
    [anon_sym_as] = ACTIONS(51),
    [anon_sym_QMARK] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
  },
  [4] = {
    [sym_parameter_group] = STATE(40),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(39),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(39),
    [aux_sym_group_repeat1] = STATE(40),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
  },
  [5] = {
    [sym_parameter_group] = STATE(41),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(36),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(36),
    [anon_sym_as] = ACTIONS(51),
    [anon_sym_QMARK] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
  },
  [6] = {
    [sym_parameter_group] = STATE(43),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(39),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(39),
    [aux_sym_group_repeat1] = STATE(43),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(73),
  },
  [7] = {
    [sym_parameter_group] = STATE(45),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(39),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(39),
    [aux_sym_group_repeat1] = STATE(45),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(75),
  },
  [8] = {
    [sym_directive] = STATE(47),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_attempt_middle] = STATE(48),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_attempt_repeat1] = STATE(48),
    [anon_sym_LT_AT] = ACTIONS(9),
    [anon_sym_LT_POUNDlist] = ACTIONS(11),
    [anon_sym_LT_POUNDif] = ACTIONS(13),
    [anon_sym_LT_POUNDswitch] = ACTIONS(15),
    [anon_sym_LT_POUNDfunction] = ACTIONS(17),
    [anon_sym_LT_POUNDmacro] = ACTIONS(19),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(21),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(77),
    [sym_recover] = ACTIONS(79),
    [sym_fallback] = ACTIONS(23),
    [sym_flush] = ACTIONS(23),
    [anon_sym_LT_POUNDftl] = ACTIONS(25),
    [anon_sym_LT_POUNDimport] = ACTIONS(27),
    [anon_sym_LT_POUNDinclude] = ACTIONS(29),
    [sym_lt] = ACTIONS(23),
    [sym_nt] = ACTIONS(23),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(31),
    [sym_rt] = ACTIONS(23),
    [anon_sym_LT_POUNDsetting] = ACTIONS(33),
    [sym_stop] = ACTIONS(23),
    [sym_t] = ACTIONS(23),
    [anon_sym_LT_POUNDvisit] = ACTIONS(35),
    [anon_sym_LT_POUNDassign] = ACTIONS(37),
    [sym_end_assign] = ACTIONS(39),
    [anon_sym_LT_POUNDglobal] = ACTIONS(41),
    [sym_end_global] = ACTIONS(43),
    [anon_sym_LT_POUNDlocal] = ACTIONS(45),
    [sym_end_local] = ACTIONS(47),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_comment] = ACTIONS(81),
    [anon_sym_LT_AT] = ACTIONS(81),
    [anon_sym_LT_POUNDlist] = ACTIONS(81),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(81),
    [sym_break] = ACTIONS(81),
    [sym_continue] = ACTIONS(81),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(81),
    [anon_sym_LT_POUNDitems] = ACTIONS(81),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(81),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(81),
    [anon_sym_LT_POUNDif] = ACTIONS(81),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(81),
    [anon_sym_LT_POUNDelseif] = ACTIONS(81),
    [anon_sym_LT_POUNDswitch] = ACTIONS(81),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(81),
    [anon_sym_LT_POUNDcase] = ACTIONS(81),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(81),
    [anon_sym_LT_POUNDfunction] = ACTIONS(81),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(81),
    [anon_sym_LT_POUNDreturn] = ACTIONS(81),
    [anon_sym_LT_POUNDmacro] = ACTIONS(81),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(81),
    [anon_sym_LT_POUNDnested] = ACTIONS(81),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(81),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(81),
    [sym_recover] = ACTIONS(81),
    [sym_fallback] = ACTIONS(81),
    [sym_flush] = ACTIONS(81),
    [anon_sym_LT_POUNDftl] = ACTIONS(81),
    [anon_sym_LT_POUNDimport] = ACTIONS(81),
    [anon_sym_LT_POUNDinclude] = ACTIONS(81),
    [sym_lt] = ACTIONS(81),
    [sym_nt] = ACTIONS(81),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(81),
    [sym_rt] = ACTIONS(81),
    [anon_sym_LT_POUNDsetting] = ACTIONS(81),
    [sym_stop] = ACTIONS(81),
    [sym_t] = ACTIONS(81),
    [anon_sym_LT_POUNDvisit] = ACTIONS(81),
    [anon_sym_LT_POUNDassign] = ACTIONS(81),
    [sym_end_assign] = ACTIONS(81),
    [anon_sym_LT_POUNDglobal] = ACTIONS(81),
    [sym_end_global] = ACTIONS(81),
    [anon_sym_LT_POUNDlocal] = ACTIONS(81),
    [sym_end_local] = ACTIONS(81),
  },
  [10] = {
    [sym_parameter_group] = STATE(50),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(39),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(39),
    [aux_sym_group_repeat1] = STATE(50),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(83),
  },
  [11] = {
    [sym_parameter_group] = STATE(52),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(39),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(39),
    [aux_sym_group_repeat1] = STATE(52),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(85),
  },
  [12] = {
    [sym_parameter_group] = STATE(54),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(39),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(39),
    [aux_sym_group_repeat1] = STATE(54),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(87),
  },
  [13] = {
    [sym_parameter_group] = STATE(56),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(39),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(39),
    [aux_sym_group_repeat1] = STATE(56),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(89),
  },
  [14] = {
    [sym_parameter_group] = STATE(58),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(39),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(39),
    [aux_sym_group_repeat1] = STATE(58),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(91),
  },
  [15] = {
    [sym_parameter_group] = STATE(60),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(39),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(39),
    [aux_sym_group_repeat1] = STATE(60),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(93),
  },
  [16] = {
    [sym_parameter_group] = STATE(62),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(39),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(39),
    [aux_sym_group_repeat1] = STATE(62),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(95),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym_comment] = ACTIONS(97),
    [anon_sym_LT_AT] = ACTIONS(97),
    [anon_sym_LT_POUNDlist] = ACTIONS(97),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(97),
    [sym_break] = ACTIONS(97),
    [sym_continue] = ACTIONS(97),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(97),
    [anon_sym_LT_POUNDitems] = ACTIONS(97),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(97),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(97),
    [anon_sym_LT_POUNDif] = ACTIONS(97),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(97),
    [anon_sym_LT_POUNDelseif] = ACTIONS(97),
    [anon_sym_LT_POUNDswitch] = ACTIONS(97),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(97),
    [anon_sym_LT_POUNDcase] = ACTIONS(97),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(97),
    [anon_sym_LT_POUNDfunction] = ACTIONS(97),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(97),
    [anon_sym_LT_POUNDreturn] = ACTIONS(97),
    [anon_sym_LT_POUNDmacro] = ACTIONS(97),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(97),
    [anon_sym_LT_POUNDnested] = ACTIONS(97),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(97),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(97),
    [sym_recover] = ACTIONS(97),
    [sym_fallback] = ACTIONS(97),
    [sym_flush] = ACTIONS(97),
    [anon_sym_LT_POUNDftl] = ACTIONS(97),
    [anon_sym_LT_POUNDimport] = ACTIONS(97),
    [anon_sym_LT_POUNDinclude] = ACTIONS(97),
    [sym_lt] = ACTIONS(97),
    [sym_nt] = ACTIONS(97),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(97),
    [sym_rt] = ACTIONS(97),
    [anon_sym_LT_POUNDsetting] = ACTIONS(97),
    [sym_stop] = ACTIONS(97),
    [sym_t] = ACTIONS(97),
    [anon_sym_LT_POUNDvisit] = ACTIONS(97),
    [anon_sym_LT_POUNDassign] = ACTIONS(97),
    [sym_end_assign] = ACTIONS(97),
    [anon_sym_LT_POUNDglobal] = ACTIONS(97),
    [sym_end_global] = ACTIONS(97),
    [anon_sym_LT_POUNDlocal] = ACTIONS(97),
    [sym_end_local] = ACTIONS(97),
  },
  [18] = {
    [sym_parameter_group] = STATE(64),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(39),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(39),
    [aux_sym_group_repeat1] = STATE(64),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(99),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [sym_comment] = ACTIONS(101),
    [anon_sym_LT_AT] = ACTIONS(101),
    [anon_sym_LT_POUNDlist] = ACTIONS(101),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(101),
    [sym_break] = ACTIONS(101),
    [sym_continue] = ACTIONS(101),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(101),
    [anon_sym_LT_POUNDitems] = ACTIONS(101),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(101),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(101),
    [anon_sym_LT_POUNDif] = ACTIONS(101),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(101),
    [anon_sym_LT_POUNDelseif] = ACTIONS(101),
    [anon_sym_LT_POUNDswitch] = ACTIONS(101),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(101),
    [anon_sym_LT_POUNDcase] = ACTIONS(101),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(101),
    [anon_sym_LT_POUNDfunction] = ACTIONS(101),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(101),
    [anon_sym_LT_POUNDreturn] = ACTIONS(101),
    [anon_sym_LT_POUNDmacro] = ACTIONS(101),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(101),
    [anon_sym_LT_POUNDnested] = ACTIONS(101),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(101),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(101),
    [sym_recover] = ACTIONS(101),
    [sym_fallback] = ACTIONS(101),
    [sym_flush] = ACTIONS(101),
    [anon_sym_LT_POUNDftl] = ACTIONS(101),
    [anon_sym_LT_POUNDimport] = ACTIONS(101),
    [anon_sym_LT_POUNDinclude] = ACTIONS(101),
    [sym_lt] = ACTIONS(101),
    [sym_nt] = ACTIONS(101),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(101),
    [sym_rt] = ACTIONS(101),
    [anon_sym_LT_POUNDsetting] = ACTIONS(101),
    [sym_stop] = ACTIONS(101),
    [sym_t] = ACTIONS(101),
    [anon_sym_LT_POUNDvisit] = ACTIONS(101),
    [anon_sym_LT_POUNDassign] = ACTIONS(101),
    [sym_end_assign] = ACTIONS(101),
    [anon_sym_LT_POUNDglobal] = ACTIONS(101),
    [sym_end_global] = ACTIONS(101),
    [anon_sym_LT_POUNDlocal] = ACTIONS(101),
    [sym_end_local] = ACTIONS(101),
  },
  [20] = {
    [sym_parameter_group] = STATE(66),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(39),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(39),
    [aux_sym_group_repeat1] = STATE(66),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(103),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [sym_comment] = ACTIONS(105),
    [anon_sym_LT_AT] = ACTIONS(105),
    [anon_sym_LT_POUNDlist] = ACTIONS(105),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(105),
    [sym_break] = ACTIONS(105),
    [sym_continue] = ACTIONS(105),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(105),
    [anon_sym_LT_POUNDitems] = ACTIONS(105),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(105),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(105),
    [anon_sym_LT_POUNDif] = ACTIONS(105),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(105),
    [anon_sym_LT_POUNDelseif] = ACTIONS(105),
    [anon_sym_LT_POUNDswitch] = ACTIONS(105),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(105),
    [anon_sym_LT_POUNDcase] = ACTIONS(105),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(105),
    [anon_sym_LT_POUNDfunction] = ACTIONS(105),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(105),
    [anon_sym_LT_POUNDreturn] = ACTIONS(105),
    [anon_sym_LT_POUNDmacro] = ACTIONS(105),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(105),
    [anon_sym_LT_POUNDnested] = ACTIONS(105),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(105),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(105),
    [sym_recover] = ACTIONS(105),
    [sym_fallback] = ACTIONS(105),
    [sym_flush] = ACTIONS(105),
    [anon_sym_LT_POUNDftl] = ACTIONS(105),
    [anon_sym_LT_POUNDimport] = ACTIONS(105),
    [anon_sym_LT_POUNDinclude] = ACTIONS(105),
    [sym_lt] = ACTIONS(105),
    [sym_nt] = ACTIONS(105),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(105),
    [sym_rt] = ACTIONS(105),
    [anon_sym_LT_POUNDsetting] = ACTIONS(105),
    [sym_stop] = ACTIONS(105),
    [sym_t] = ACTIONS(105),
    [anon_sym_LT_POUNDvisit] = ACTIONS(105),
    [anon_sym_LT_POUNDassign] = ACTIONS(105),
    [sym_end_assign] = ACTIONS(105),
    [anon_sym_LT_POUNDglobal] = ACTIONS(105),
    [sym_end_global] = ACTIONS(105),
    [anon_sym_LT_POUNDlocal] = ACTIONS(105),
    [sym_end_local] = ACTIONS(105),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(107),
  },
  [23] = {
    [sym__definition] = STATE(67),
    [sym_directive] = STATE(67),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(67),
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym_comment] = ACTIONS(111),
    [anon_sym_LT_AT] = ACTIONS(9),
    [anon_sym_LT_POUNDlist] = ACTIONS(11),
    [anon_sym_LT_POUNDif] = ACTIONS(13),
    [anon_sym_LT_POUNDswitch] = ACTIONS(15),
    [anon_sym_LT_POUNDfunction] = ACTIONS(17),
    [anon_sym_LT_POUNDmacro] = ACTIONS(19),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(21),
    [sym_fallback] = ACTIONS(23),
    [sym_flush] = ACTIONS(23),
    [anon_sym_LT_POUNDftl] = ACTIONS(25),
    [anon_sym_LT_POUNDimport] = ACTIONS(27),
    [anon_sym_LT_POUNDinclude] = ACTIONS(29),
    [sym_lt] = ACTIONS(23),
    [sym_nt] = ACTIONS(23),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(31),
    [sym_rt] = ACTIONS(23),
    [anon_sym_LT_POUNDsetting] = ACTIONS(33),
    [sym_stop] = ACTIONS(23),
    [sym_t] = ACTIONS(23),
    [anon_sym_LT_POUNDvisit] = ACTIONS(35),
    [anon_sym_LT_POUNDassign] = ACTIONS(37),
    [sym_end_assign] = ACTIONS(39),
    [anon_sym_LT_POUNDglobal] = ACTIONS(41),
    [sym_end_global] = ACTIONS(43),
    [anon_sym_LT_POUNDlocal] = ACTIONS(45),
    [sym_end_local] = ACTIONS(47),
  },
  [24] = {
    [sym_parameter_group] = STATE(78),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(77),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(70),
    [sym_boolean] = STATE(70),
    [sym_sequence] = STATE(70),
    [sym_hash] = STATE(70),
    [sym_top_level] = STATE(70),
    [sym_spec_var] = STATE(70),
    [aux_sym_as_expression_repeat1] = STATE(77),
    [aux_sym_group_repeat1] = STATE(78),
    [anon_sym_as] = ACTIONS(113),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(115),
    [sym_number] = ACTIONS(117),
    [anon_sym_true] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(123),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(125),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(127),
    [anon_sym_GT] = ACTIONS(129),
    [anon_sym_SLASH_GT] = ACTIONS(129),
  },
  [25] = {
    [sym_type] = STATE(86),
    [sym_string] = STATE(80),
    [sym_boolean] = STATE(80),
    [sym_sequence] = STATE(80),
    [sym_hash] = STATE(80),
    [sym_top_level] = STATE(80),
    [sym_spec_var] = STATE(80),
    [aux_sym_as_expression_repeat2] = STATE(86),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(131),
    [sym_number] = ACTIONS(133),
    [anon_sym_true] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(139),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(143),
  },
  [26] = {
    [sym_top_level] = STATE(87),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(145),
  },
  [27] = {
    [anon_sym_as] = ACTIONS(147),
    [anon_sym_QMARK] = ACTIONS(147),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_using] = ACTIONS(147),
    [anon_sym_COMMA] = ACTIONS(149),
    [anon_sym_DOT_DOT] = ACTIONS(147),
    [anon_sym_DOT_DOT_LT] = ACTIONS(149),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(149),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(149),
    [anon_sym_LT] = ACTIONS(147),
    [anon_sym_LT_EQ] = ACTIONS(149),
    [anon_sym_lt] = ACTIONS(147),
    [anon_sym_lte] = ACTIONS(147),
    [anon_sym_gt] = ACTIONS(147),
    [anon_sym_gte] = ACTIONS(147),
    [anon_sym_BANG] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(149),
    [anon_sym_QMARK_QMARK] = ACTIONS(149),
    [anon_sym_EQ] = ACTIONS(147),
    [anon_sym_PLUS_EQ] = ACTIONS(149),
    [anon_sym_DASH_EQ] = ACTIONS(149),
    [anon_sym_STAR_EQ] = ACTIONS(149),
    [anon_sym_SLASH_EQ] = ACTIONS(149),
    [anon_sym_PERCENT_EQ] = ACTIONS(149),
    [anon_sym_PLUS_PLUS] = ACTIONS(149),
    [anon_sym_DASH_DASH] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(149),
    [sym_number] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(149),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(149),
  },
  [28] = {
    [anon_sym_as] = ACTIONS(151),
    [anon_sym_QMARK] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(153),
    [anon_sym_using] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_DOT_DOT] = ACTIONS(151),
    [anon_sym_DOT_DOT_LT] = ACTIONS(153),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(151),
    [anon_sym_SLASH] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(151),
    [anon_sym_EQ_EQ] = ACTIONS(153),
    [anon_sym_BANG_EQ] = ACTIONS(153),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_LT_EQ] = ACTIONS(153),
    [anon_sym_lt] = ACTIONS(151),
    [anon_sym_lte] = ACTIONS(151),
    [anon_sym_gt] = ACTIONS(151),
    [anon_sym_gte] = ACTIONS(151),
    [anon_sym_BANG] = ACTIONS(151),
    [anon_sym_AMP_AMP] = ACTIONS(153),
    [anon_sym_PIPE_PIPE] = ACTIONS(153),
    [anon_sym_QMARK_QMARK] = ACTIONS(153),
    [anon_sym_EQ] = ACTIONS(151),
    [anon_sym_PLUS_EQ] = ACTIONS(153),
    [anon_sym_DASH_EQ] = ACTIONS(153),
    [anon_sym_STAR_EQ] = ACTIONS(153),
    [anon_sym_SLASH_EQ] = ACTIONS(153),
    [anon_sym_PERCENT_EQ] = ACTIONS(153),
    [anon_sym_PLUS_PLUS] = ACTIONS(153),
    [anon_sym_DASH_DASH] = ACTIONS(153),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(153),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(153),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(153),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(151),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
  },
  [29] = {
    [anon_sym_false] = ACTIONS(155),
  },
  [30] = {
    [sym_expression] = STATE(97),
    [sym_type] = STATE(98),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_top_level] = STATE(90),
    [sym_spec_var] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(98),
    [aux_sym_sequence_repeat1] = STATE(99),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(157),
    [sym_number] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(167),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(171),
  },
  [31] = {
    [sym_expression] = STATE(102),
    [sym_type] = STATE(101),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_top_level] = STATE(90),
    [sym_spec_var] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(101),
    [aux_sym_hash_repeat1] = STATE(102),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(157),
    [sym_number] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_RBRACE] = ACTIONS(173),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(171),
  },
  [32] = {
    [sym_group] = STATE(104),
    [anon_sym_as] = ACTIONS(175),
    [anon_sym_QMARK] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(179),
    [anon_sym_using] = ACTIONS(175),
    [anon_sym_COMMA] = ACTIONS(179),
    [anon_sym_DOT_DOT] = ACTIONS(175),
    [anon_sym_DOT_DOT_LT] = ACTIONS(179),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(179),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_PLUS] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_DASH] = ACTIONS(175),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(179),
    [anon_sym_BANG_EQ] = ACTIONS(179),
    [anon_sym_LT] = ACTIONS(175),
    [anon_sym_LT_EQ] = ACTIONS(179),
    [anon_sym_lt] = ACTIONS(175),
    [anon_sym_lte] = ACTIONS(175),
    [anon_sym_gt] = ACTIONS(175),
    [anon_sym_gte] = ACTIONS(175),
    [anon_sym_BANG] = ACTIONS(175),
    [anon_sym_AMP_AMP] = ACTIONS(179),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [anon_sym_QMARK_QMARK] = ACTIONS(179),
    [anon_sym_EQ] = ACTIONS(175),
    [anon_sym_PLUS_EQ] = ACTIONS(179),
    [anon_sym_DASH_EQ] = ACTIONS(179),
    [anon_sym_STAR_EQ] = ACTIONS(179),
    [anon_sym_SLASH_EQ] = ACTIONS(179),
    [anon_sym_PERCENT_EQ] = ACTIONS(179),
    [anon_sym_PLUS_PLUS] = ACTIONS(179),
    [anon_sym_DASH_DASH] = ACTIONS(179),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(179),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(179),
    [sym_number] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(179),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(175),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(179),
    [anon_sym_GT] = ACTIONS(179),
  },
  [33] = {
    [sym_group] = STATE(105),
    [anon_sym_as] = ACTIONS(181),
    [anon_sym_QMARK] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_using] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_DOT_DOT] = ACTIONS(181),
    [anon_sym_DOT_DOT_LT] = ACTIONS(183),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(183),
    [anon_sym_COLON] = ACTIONS(183),
    [anon_sym_STAR] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_PERCENT] = ACTIONS(181),
    [anon_sym_EQ_EQ] = ACTIONS(183),
    [anon_sym_BANG_EQ] = ACTIONS(183),
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_LT_EQ] = ACTIONS(183),
    [anon_sym_lt] = ACTIONS(181),
    [anon_sym_lte] = ACTIONS(181),
    [anon_sym_gt] = ACTIONS(181),
    [anon_sym_gte] = ACTIONS(181),
    [anon_sym_BANG] = ACTIONS(181),
    [anon_sym_AMP_AMP] = ACTIONS(183),
    [anon_sym_PIPE_PIPE] = ACTIONS(183),
    [anon_sym_QMARK_QMARK] = ACTIONS(183),
    [anon_sym_EQ] = ACTIONS(181),
    [anon_sym_PLUS_EQ] = ACTIONS(183),
    [anon_sym_DASH_EQ] = ACTIONS(183),
    [anon_sym_STAR_EQ] = ACTIONS(183),
    [anon_sym_SLASH_EQ] = ACTIONS(183),
    [anon_sym_PERCENT_EQ] = ACTIONS(183),
    [anon_sym_PLUS_PLUS] = ACTIONS(183),
    [anon_sym_DASH_DASH] = ACTIONS(183),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(183),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(183),
    [sym_number] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(183),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(181),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(183),
    [anon_sym_GT] = ACTIONS(183),
  },
  [34] = {
    [anon_sym_GT] = ACTIONS(185),
  },
  [35] = {
    [anon_sym_as] = ACTIONS(187),
    [anon_sym_QMARK] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(189),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(189),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(189),
    [sym_number] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(189),
    [anon_sym_LBRACE] = ACTIONS(189),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(187),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(189),
    [anon_sym_GT] = ACTIONS(189),
    [anon_sym_SLASH_GT] = ACTIONS(189),
  },
  [36] = {
    [sym_type] = STATE(110),
    [sym_operator] = STATE(109),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(110),
    [aux_sym_as_expression_repeat2] = STATE(111),
    [anon_sym_as] = ACTIONS(191),
    [anon_sym_using] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(195),
    [anon_sym_DOT_DOT] = ACTIONS(193),
    [anon_sym_DOT_DOT_LT] = ACTIONS(195),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(195),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_STAR] = ACTIONS(193),
    [anon_sym_PLUS] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(193),
    [anon_sym_DASH] = ACTIONS(193),
    [anon_sym_PERCENT] = ACTIONS(193),
    [anon_sym_EQ_EQ] = ACTIONS(195),
    [anon_sym_BANG_EQ] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(193),
    [anon_sym_LT_EQ] = ACTIONS(195),
    [anon_sym_lt] = ACTIONS(193),
    [anon_sym_lte] = ACTIONS(193),
    [anon_sym_gt] = ACTIONS(193),
    [anon_sym_gte] = ACTIONS(193),
    [anon_sym_BANG] = ACTIONS(193),
    [anon_sym_AMP_AMP] = ACTIONS(195),
    [anon_sym_PIPE_PIPE] = ACTIONS(195),
    [anon_sym_QMARK_QMARK] = ACTIONS(195),
    [anon_sym_EQ] = ACTIONS(193),
    [anon_sym_PLUS_EQ] = ACTIONS(195),
    [anon_sym_DASH_EQ] = ACTIONS(195),
    [anon_sym_STAR_EQ] = ACTIONS(195),
    [anon_sym_SLASH_EQ] = ACTIONS(195),
    [anon_sym_PERCENT_EQ] = ACTIONS(195),
    [anon_sym_PLUS_PLUS] = ACTIONS(195),
    [anon_sym_DASH_DASH] = ACTIONS(195),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(197),
  },
  [37] = {
    [sym_type] = STATE(119),
    [sym_string] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_sequence] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_top_level] = STATE(113),
    [sym_spec_var] = STATE(113),
    [aux_sym_as_expression_repeat2] = STATE(119),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(199),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(199),
    [sym_number] = ACTIONS(201),
    [anon_sym_true] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(207),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(209),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(211),
  },
  [38] = {
    [sym_top_level] = STATE(120),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(213),
  },
  [39] = {
    [sym_type] = STATE(124),
    [sym_operator] = STATE(123),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(124),
    [aux_sym_as_expression_repeat2] = STATE(125),
    [anon_sym_as] = ACTIONS(215),
    [anon_sym_QMARK] = ACTIONS(217),
    [anon_sym_using] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_DOT_DOT] = ACTIONS(219),
    [anon_sym_DOT_DOT_LT] = ACTIONS(221),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(221),
    [anon_sym_COLON] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(219),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_SLASH] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(219),
    [anon_sym_PERCENT] = ACTIONS(219),
    [anon_sym_EQ_EQ] = ACTIONS(221),
    [anon_sym_BANG_EQ] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_LT_EQ] = ACTIONS(221),
    [anon_sym_lt] = ACTIONS(219),
    [anon_sym_lte] = ACTIONS(219),
    [anon_sym_gt] = ACTIONS(219),
    [anon_sym_gte] = ACTIONS(219),
    [anon_sym_BANG] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_QMARK_QMARK] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(219),
    [anon_sym_PLUS_EQ] = ACTIONS(221),
    [anon_sym_DASH_EQ] = ACTIONS(221),
    [anon_sym_STAR_EQ] = ACTIONS(221),
    [anon_sym_SLASH_EQ] = ACTIONS(221),
    [anon_sym_PERCENT_EQ] = ACTIONS(221),
    [anon_sym_PLUS_PLUS] = ACTIONS(221),
    [anon_sym_DASH_DASH] = ACTIONS(221),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(197),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(197),
    [sym_number] = ACTIONS(217),
    [anon_sym_true] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(197),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(197),
    [anon_sym_GT] = ACTIONS(197),
  },
  [40] = {
    [sym_parameter_group] = STATE(127),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(39),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(39),
    [aux_sym_group_repeat1] = STATE(127),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(223),
  },
  [41] = {
    [anon_sym_GT] = ACTIONS(225),
  },
  [42] = {
    [sym_directive] = STATE(131),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_function_middle] = STATE(132),
    [sym_return] = STATE(131),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_function_repeat1] = STATE(132),
    [anon_sym_LT_AT] = ACTIONS(9),
    [anon_sym_LT_POUNDlist] = ACTIONS(11),
    [anon_sym_LT_POUNDif] = ACTIONS(13),
    [anon_sym_LT_POUNDswitch] = ACTIONS(15),
    [anon_sym_LT_POUNDfunction] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(227),
    [anon_sym_LT_POUNDreturn] = ACTIONS(229),
    [anon_sym_LT_POUNDmacro] = ACTIONS(19),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(21),
    [sym_fallback] = ACTIONS(23),
    [sym_flush] = ACTIONS(23),
    [anon_sym_LT_POUNDftl] = ACTIONS(25),
    [anon_sym_LT_POUNDimport] = ACTIONS(27),
    [anon_sym_LT_POUNDinclude] = ACTIONS(29),
    [sym_lt] = ACTIONS(23),
    [sym_nt] = ACTIONS(23),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(31),
    [sym_rt] = ACTIONS(23),
    [anon_sym_LT_POUNDsetting] = ACTIONS(33),
    [sym_stop] = ACTIONS(23),
    [sym_t] = ACTIONS(23),
    [anon_sym_LT_POUNDvisit] = ACTIONS(35),
    [anon_sym_LT_POUNDassign] = ACTIONS(37),
    [sym_end_assign] = ACTIONS(39),
    [anon_sym_LT_POUNDglobal] = ACTIONS(41),
    [sym_end_global] = ACTIONS(43),
    [anon_sym_LT_POUNDlocal] = ACTIONS(45),
    [sym_end_local] = ACTIONS(47),
  },
  [43] = {
    [sym_parameter_group] = STATE(127),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(39),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(39),
    [aux_sym_group_repeat1] = STATE(127),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(231),
  },
  [44] = {
    [sym_directive] = STATE(136),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_return] = STATE(136),
    [sym_macro] = STATE(9),
    [sym_macro_middle] = STATE(137),
    [sym_nested] = STATE(136),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_macro_repeat1] = STATE(137),
    [anon_sym_LT_AT] = ACTIONS(9),
    [anon_sym_LT_POUNDlist] = ACTIONS(11),
    [anon_sym_LT_POUNDif] = ACTIONS(13),
    [anon_sym_LT_POUNDswitch] = ACTIONS(15),
    [anon_sym_LT_POUNDfunction] = ACTIONS(17),
    [anon_sym_LT_POUNDreturn] = ACTIONS(229),
    [anon_sym_LT_POUNDmacro] = ACTIONS(19),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(233),
    [anon_sym_LT_POUNDnested] = ACTIONS(235),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(21),
    [sym_fallback] = ACTIONS(23),
    [sym_flush] = ACTIONS(23),
    [anon_sym_LT_POUNDftl] = ACTIONS(25),
    [anon_sym_LT_POUNDimport] = ACTIONS(27),
    [anon_sym_LT_POUNDinclude] = ACTIONS(29),
    [sym_lt] = ACTIONS(23),
    [sym_nt] = ACTIONS(23),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(31),
    [sym_rt] = ACTIONS(23),
    [anon_sym_LT_POUNDsetting] = ACTIONS(33),
    [sym_stop] = ACTIONS(23),
    [sym_t] = ACTIONS(23),
    [anon_sym_LT_POUNDvisit] = ACTIONS(35),
    [anon_sym_LT_POUNDassign] = ACTIONS(37),
    [sym_end_assign] = ACTIONS(39),
    [anon_sym_LT_POUNDglobal] = ACTIONS(41),
    [sym_end_global] = ACTIONS(43),
    [anon_sym_LT_POUNDlocal] = ACTIONS(45),
    [sym_end_local] = ACTIONS(47),
  },
  [45] = {
    [sym_parameter_group] = STATE(127),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(39),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(39),
    [aux_sym_group_repeat1] = STATE(127),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(237),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [sym_comment] = ACTIONS(239),
    [anon_sym_LT_AT] = ACTIONS(239),
    [anon_sym_LT_POUNDlist] = ACTIONS(239),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(239),
    [sym_break] = ACTIONS(239),
    [sym_continue] = ACTIONS(239),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(239),
    [anon_sym_LT_POUNDitems] = ACTIONS(239),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(239),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(239),
    [anon_sym_LT_POUNDif] = ACTIONS(239),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(239),
    [anon_sym_LT_POUNDelseif] = ACTIONS(239),
    [anon_sym_LT_POUNDswitch] = ACTIONS(239),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(239),
    [anon_sym_LT_POUNDcase] = ACTIONS(239),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(239),
    [anon_sym_LT_POUNDfunction] = ACTIONS(239),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(239),
    [anon_sym_LT_POUNDreturn] = ACTIONS(239),
    [anon_sym_LT_POUNDmacro] = ACTIONS(239),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(239),
    [anon_sym_LT_POUNDnested] = ACTIONS(239),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(239),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(239),
    [sym_recover] = ACTIONS(239),
    [sym_fallback] = ACTIONS(239),
    [sym_flush] = ACTIONS(239),
    [anon_sym_LT_POUNDftl] = ACTIONS(239),
    [anon_sym_LT_POUNDimport] = ACTIONS(239),
    [anon_sym_LT_POUNDinclude] = ACTIONS(239),
    [sym_lt] = ACTIONS(239),
    [sym_nt] = ACTIONS(239),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(239),
    [sym_rt] = ACTIONS(239),
    [anon_sym_LT_POUNDsetting] = ACTIONS(239),
    [sym_stop] = ACTIONS(239),
    [sym_t] = ACTIONS(239),
    [anon_sym_LT_POUNDvisit] = ACTIONS(239),
    [anon_sym_LT_POUNDassign] = ACTIONS(239),
    [sym_end_assign] = ACTIONS(239),
    [anon_sym_LT_POUNDglobal] = ACTIONS(239),
    [sym_end_global] = ACTIONS(239),
    [anon_sym_LT_POUNDlocal] = ACTIONS(239),
    [sym_end_local] = ACTIONS(239),
  },
  [47] = {
    [anon_sym_LT_AT] = ACTIONS(241),
    [anon_sym_LT_POUNDlist] = ACTIONS(241),
    [anon_sym_LT_POUNDif] = ACTIONS(241),
    [anon_sym_LT_POUNDswitch] = ACTIONS(241),
    [anon_sym_LT_POUNDfunction] = ACTIONS(241),
    [anon_sym_LT_POUNDmacro] = ACTIONS(241),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(241),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(241),
    [sym_recover] = ACTIONS(241),
    [sym_fallback] = ACTIONS(241),
    [sym_flush] = ACTIONS(241),
    [anon_sym_LT_POUNDftl] = ACTIONS(241),
    [anon_sym_LT_POUNDimport] = ACTIONS(241),
    [anon_sym_LT_POUNDinclude] = ACTIONS(241),
    [sym_lt] = ACTIONS(241),
    [sym_nt] = ACTIONS(241),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(241),
    [sym_rt] = ACTIONS(241),
    [anon_sym_LT_POUNDsetting] = ACTIONS(241),
    [sym_stop] = ACTIONS(241),
    [sym_t] = ACTIONS(241),
    [anon_sym_LT_POUNDvisit] = ACTIONS(241),
    [anon_sym_LT_POUNDassign] = ACTIONS(241),
    [sym_end_assign] = ACTIONS(241),
    [anon_sym_LT_POUNDglobal] = ACTIONS(241),
    [sym_end_global] = ACTIONS(241),
    [anon_sym_LT_POUNDlocal] = ACTIONS(241),
    [sym_end_local] = ACTIONS(241),
  },
  [48] = {
    [sym_directive] = STATE(47),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_attempt_middle] = STATE(140),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_attempt_repeat1] = STATE(140),
    [anon_sym_LT_AT] = ACTIONS(9),
    [anon_sym_LT_POUNDlist] = ACTIONS(11),
    [anon_sym_LT_POUNDif] = ACTIONS(13),
    [anon_sym_LT_POUNDswitch] = ACTIONS(15),
    [anon_sym_LT_POUNDfunction] = ACTIONS(17),
    [anon_sym_LT_POUNDmacro] = ACTIONS(19),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(21),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(243),
    [sym_recover] = ACTIONS(79),
    [sym_fallback] = ACTIONS(23),
    [sym_flush] = ACTIONS(23),
    [anon_sym_LT_POUNDftl] = ACTIONS(25),
    [anon_sym_LT_POUNDimport] = ACTIONS(27),
    [anon_sym_LT_POUNDinclude] = ACTIONS(29),
    [sym_lt] = ACTIONS(23),
    [sym_nt] = ACTIONS(23),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(31),
    [sym_rt] = ACTIONS(23),
    [anon_sym_LT_POUNDsetting] = ACTIONS(33),
    [sym_stop] = ACTIONS(23),
    [sym_t] = ACTIONS(23),
    [anon_sym_LT_POUNDvisit] = ACTIONS(35),
    [anon_sym_LT_POUNDassign] = ACTIONS(37),
    [sym_end_assign] = ACTIONS(39),
    [anon_sym_LT_POUNDglobal] = ACTIONS(41),
    [sym_end_global] = ACTIONS(43),
    [anon_sym_LT_POUNDlocal] = ACTIONS(45),
    [sym_end_local] = ACTIONS(47),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [sym_comment] = ACTIONS(245),
    [anon_sym_LT_AT] = ACTIONS(245),
    [anon_sym_LT_POUNDlist] = ACTIONS(245),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(245),
    [sym_break] = ACTIONS(245),
    [sym_continue] = ACTIONS(245),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(245),
    [anon_sym_LT_POUNDitems] = ACTIONS(245),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(245),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(245),
    [anon_sym_LT_POUNDif] = ACTIONS(245),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(245),
    [anon_sym_LT_POUNDelseif] = ACTIONS(245),
    [anon_sym_LT_POUNDswitch] = ACTIONS(245),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(245),
    [anon_sym_LT_POUNDcase] = ACTIONS(245),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(245),
    [anon_sym_LT_POUNDfunction] = ACTIONS(245),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(245),
    [anon_sym_LT_POUNDreturn] = ACTIONS(245),
    [anon_sym_LT_POUNDmacro] = ACTIONS(245),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(245),
    [anon_sym_LT_POUNDnested] = ACTIONS(245),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(245),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(245),
    [sym_recover] = ACTIONS(245),
    [sym_fallback] = ACTIONS(245),
    [sym_flush] = ACTIONS(245),
    [anon_sym_LT_POUNDftl] = ACTIONS(245),
    [anon_sym_LT_POUNDimport] = ACTIONS(245),
    [anon_sym_LT_POUNDinclude] = ACTIONS(245),
    [sym_lt] = ACTIONS(245),
    [sym_nt] = ACTIONS(245),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(245),
    [sym_rt] = ACTIONS(245),
    [anon_sym_LT_POUNDsetting] = ACTIONS(245),
    [sym_stop] = ACTIONS(245),
    [sym_t] = ACTIONS(245),
    [anon_sym_LT_POUNDvisit] = ACTIONS(245),
    [anon_sym_LT_POUNDassign] = ACTIONS(245),
    [sym_end_assign] = ACTIONS(245),
    [anon_sym_LT_POUNDglobal] = ACTIONS(245),
    [sym_end_global] = ACTIONS(245),
    [anon_sym_LT_POUNDlocal] = ACTIONS(245),
    [sym_end_local] = ACTIONS(245),
  },
  [50] = {
    [sym_parameter_group] = STATE(127),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(39),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(39),
    [aux_sym_group_repeat1] = STATE(127),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(247),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [sym_comment] = ACTIONS(249),
    [anon_sym_LT_AT] = ACTIONS(249),
    [anon_sym_LT_POUNDlist] = ACTIONS(249),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(249),
    [sym_break] = ACTIONS(249),
    [sym_continue] = ACTIONS(249),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(249),
    [anon_sym_LT_POUNDitems] = ACTIONS(249),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(249),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(249),
    [anon_sym_LT_POUNDif] = ACTIONS(249),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(249),
    [anon_sym_LT_POUNDelseif] = ACTIONS(249),
    [anon_sym_LT_POUNDswitch] = ACTIONS(249),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(249),
    [anon_sym_LT_POUNDcase] = ACTIONS(249),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(249),
    [anon_sym_LT_POUNDfunction] = ACTIONS(249),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(249),
    [anon_sym_LT_POUNDreturn] = ACTIONS(249),
    [anon_sym_LT_POUNDmacro] = ACTIONS(249),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(249),
    [anon_sym_LT_POUNDnested] = ACTIONS(249),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(249),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(249),
    [sym_recover] = ACTIONS(249),
    [sym_fallback] = ACTIONS(249),
    [sym_flush] = ACTIONS(249),
    [anon_sym_LT_POUNDftl] = ACTIONS(249),
    [anon_sym_LT_POUNDimport] = ACTIONS(249),
    [anon_sym_LT_POUNDinclude] = ACTIONS(249),
    [sym_lt] = ACTIONS(249),
    [sym_nt] = ACTIONS(249),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(249),
    [sym_rt] = ACTIONS(249),
    [anon_sym_LT_POUNDsetting] = ACTIONS(249),
    [sym_stop] = ACTIONS(249),
    [sym_t] = ACTIONS(249),
    [anon_sym_LT_POUNDvisit] = ACTIONS(249),
    [anon_sym_LT_POUNDassign] = ACTIONS(249),
    [sym_end_assign] = ACTIONS(249),
    [anon_sym_LT_POUNDglobal] = ACTIONS(249),
    [sym_end_global] = ACTIONS(249),
    [anon_sym_LT_POUNDlocal] = ACTIONS(249),
    [sym_end_local] = ACTIONS(249),
  },
  [52] = {
    [sym_parameter_group] = STATE(127),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(39),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(39),
    [aux_sym_group_repeat1] = STATE(127),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(251),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [sym_comment] = ACTIONS(253),
    [anon_sym_LT_AT] = ACTIONS(253),
    [anon_sym_LT_POUNDlist] = ACTIONS(253),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(253),
    [sym_break] = ACTIONS(253),
    [sym_continue] = ACTIONS(253),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(253),
    [anon_sym_LT_POUNDitems] = ACTIONS(253),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(253),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(253),
    [anon_sym_LT_POUNDif] = ACTIONS(253),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(253),
    [anon_sym_LT_POUNDelseif] = ACTIONS(253),
    [anon_sym_LT_POUNDswitch] = ACTIONS(253),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(253),
    [anon_sym_LT_POUNDcase] = ACTIONS(253),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(253),
    [anon_sym_LT_POUNDfunction] = ACTIONS(253),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(253),
    [anon_sym_LT_POUNDreturn] = ACTIONS(253),
    [anon_sym_LT_POUNDmacro] = ACTIONS(253),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(253),
    [anon_sym_LT_POUNDnested] = ACTIONS(253),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(253),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(253),
    [sym_recover] = ACTIONS(253),
    [sym_fallback] = ACTIONS(253),
    [sym_flush] = ACTIONS(253),
    [anon_sym_LT_POUNDftl] = ACTIONS(253),
    [anon_sym_LT_POUNDimport] = ACTIONS(253),
    [anon_sym_LT_POUNDinclude] = ACTIONS(253),
    [sym_lt] = ACTIONS(253),
    [sym_nt] = ACTIONS(253),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(253),
    [sym_rt] = ACTIONS(253),
    [anon_sym_LT_POUNDsetting] = ACTIONS(253),
    [sym_stop] = ACTIONS(253),
    [sym_t] = ACTIONS(253),
    [anon_sym_LT_POUNDvisit] = ACTIONS(253),
    [anon_sym_LT_POUNDassign] = ACTIONS(253),
    [sym_end_assign] = ACTIONS(253),
    [anon_sym_LT_POUNDglobal] = ACTIONS(253),
    [sym_end_global] = ACTIONS(253),
    [anon_sym_LT_POUNDlocal] = ACTIONS(253),
    [sym_end_local] = ACTIONS(253),
  },
  [54] = {
    [sym_parameter_group] = STATE(127),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(39),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(39),
    [aux_sym_group_repeat1] = STATE(127),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(255),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(257),
    [sym_comment] = ACTIONS(257),
    [anon_sym_LT_AT] = ACTIONS(257),
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
  [56] = {
    [sym_parameter_group] = STATE(127),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(39),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(39),
    [aux_sym_group_repeat1] = STATE(127),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(259),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [sym_comment] = ACTIONS(261),
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
  [58] = {
    [sym_parameter_group] = STATE(127),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(39),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(39),
    [aux_sym_group_repeat1] = STATE(127),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(263),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [sym_comment] = ACTIONS(265),
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
  [60] = {
    [sym_parameter_group] = STATE(127),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(39),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(39),
    [aux_sym_group_repeat1] = STATE(127),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(267),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [sym_comment] = ACTIONS(269),
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
  [62] = {
    [sym_parameter_group] = STATE(127),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(39),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(39),
    [aux_sym_group_repeat1] = STATE(127),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(271),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(273),
    [sym_comment] = ACTIONS(273),
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
  [64] = {
    [sym_parameter_group] = STATE(127),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(39),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(39),
    [aux_sym_group_repeat1] = STATE(127),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(275),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(277),
    [sym_comment] = ACTIONS(277),
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
  [66] = {
    [sym_parameter_group] = STATE(127),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(39),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(39),
    [aux_sym_group_repeat1] = STATE(127),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(279),
  },
  [67] = {
    [sym__definition] = STATE(67),
    [sym_directive] = STATE(67),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(67),
    [ts_builtin_sym_end] = ACTIONS(281),
    [sym_comment] = ACTIONS(283),
    [anon_sym_LT_AT] = ACTIONS(286),
    [anon_sym_LT_POUNDlist] = ACTIONS(289),
    [anon_sym_LT_POUNDif] = ACTIONS(292),
    [anon_sym_LT_POUNDswitch] = ACTIONS(295),
    [anon_sym_LT_POUNDfunction] = ACTIONS(298),
    [anon_sym_LT_POUNDmacro] = ACTIONS(301),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(304),
    [sym_fallback] = ACTIONS(307),
    [sym_flush] = ACTIONS(307),
    [anon_sym_LT_POUNDftl] = ACTIONS(310),
    [anon_sym_LT_POUNDimport] = ACTIONS(313),
    [anon_sym_LT_POUNDinclude] = ACTIONS(316),
    [sym_lt] = ACTIONS(307),
    [sym_nt] = ACTIONS(307),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(319),
    [sym_rt] = ACTIONS(307),
    [anon_sym_LT_POUNDsetting] = ACTIONS(322),
    [sym_stop] = ACTIONS(307),
    [sym_t] = ACTIONS(307),
    [anon_sym_LT_POUNDvisit] = ACTIONS(325),
    [anon_sym_LT_POUNDassign] = ACTIONS(328),
    [sym_end_assign] = ACTIONS(331),
    [anon_sym_LT_POUNDglobal] = ACTIONS(334),
    [sym_end_global] = ACTIONS(337),
    [anon_sym_LT_POUNDlocal] = ACTIONS(340),
    [sym_end_local] = ACTIONS(343),
  },
  [68] = {
    [sym_type] = STATE(150),
    [sym_string] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_sequence] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_top_level] = STATE(113),
    [sym_spec_var] = STATE(113),
    [aux_sym_as_expression_repeat2] = STATE(150),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(199),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(199),
    [sym_number] = ACTIONS(201),
    [anon_sym_true] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(207),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(209),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(211),
  },
  [69] = {
    [anon_sym_as] = ACTIONS(147),
    [anon_sym_QMARK] = ACTIONS(147),
    [anon_sym_using] = ACTIONS(147),
    [anon_sym_COMMA] = ACTIONS(149),
    [anon_sym_DOT_DOT] = ACTIONS(147),
    [anon_sym_DOT_DOT_LT] = ACTIONS(149),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(149),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(149),
    [anon_sym_LT] = ACTIONS(147),
    [anon_sym_LT_EQ] = ACTIONS(149),
    [anon_sym_lt] = ACTIONS(147),
    [anon_sym_lte] = ACTIONS(147),
    [anon_sym_gt] = ACTIONS(147),
    [anon_sym_gte] = ACTIONS(147),
    [anon_sym_BANG] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(149),
    [anon_sym_QMARK_QMARK] = ACTIONS(149),
    [anon_sym_EQ] = ACTIONS(147),
    [anon_sym_PLUS_EQ] = ACTIONS(149),
    [anon_sym_DASH_EQ] = ACTIONS(149),
    [anon_sym_STAR_EQ] = ACTIONS(149),
    [anon_sym_SLASH_EQ] = ACTIONS(149),
    [anon_sym_PERCENT_EQ] = ACTIONS(149),
    [anon_sym_PLUS_PLUS] = ACTIONS(149),
    [anon_sym_DASH_DASH] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(149),
    [sym_number] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(149),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_SLASH_GT] = ACTIONS(149),
  },
  [70] = {
    [anon_sym_as] = ACTIONS(151),
    [anon_sym_QMARK] = ACTIONS(151),
    [anon_sym_using] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_DOT_DOT] = ACTIONS(151),
    [anon_sym_DOT_DOT_LT] = ACTIONS(153),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(151),
    [anon_sym_SLASH] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(151),
    [anon_sym_EQ_EQ] = ACTIONS(153),
    [anon_sym_BANG_EQ] = ACTIONS(153),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_LT_EQ] = ACTIONS(153),
    [anon_sym_lt] = ACTIONS(151),
    [anon_sym_lte] = ACTIONS(151),
    [anon_sym_gt] = ACTIONS(151),
    [anon_sym_gte] = ACTIONS(151),
    [anon_sym_BANG] = ACTIONS(151),
    [anon_sym_AMP_AMP] = ACTIONS(153),
    [anon_sym_PIPE_PIPE] = ACTIONS(153),
    [anon_sym_QMARK_QMARK] = ACTIONS(153),
    [anon_sym_EQ] = ACTIONS(151),
    [anon_sym_PLUS_EQ] = ACTIONS(153),
    [anon_sym_DASH_EQ] = ACTIONS(153),
    [anon_sym_STAR_EQ] = ACTIONS(153),
    [anon_sym_SLASH_EQ] = ACTIONS(153),
    [anon_sym_PERCENT_EQ] = ACTIONS(153),
    [anon_sym_PLUS_PLUS] = ACTIONS(153),
    [anon_sym_DASH_DASH] = ACTIONS(153),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(153),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(153),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(153),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(151),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_SLASH_GT] = ACTIONS(153),
  },
  [71] = {
    [anon_sym_false] = ACTIONS(346),
  },
  [72] = {
    [sym_expression] = STATE(97),
    [sym_type] = STATE(98),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_top_level] = STATE(90),
    [sym_spec_var] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(98),
    [aux_sym_sequence_repeat1] = STATE(153),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(157),
    [sym_number] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(348),
    [anon_sym_LBRACE] = ACTIONS(167),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(171),
  },
  [73] = {
    [sym_expression] = STATE(155),
    [sym_type] = STATE(101),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_top_level] = STATE(90),
    [sym_spec_var] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(101),
    [aux_sym_hash_repeat1] = STATE(155),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(157),
    [sym_number] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_RBRACE] = ACTIONS(350),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(171),
  },
  [74] = {
    [sym_group] = STATE(157),
    [anon_sym_as] = ACTIONS(175),
    [anon_sym_QMARK] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(352),
    [anon_sym_using] = ACTIONS(175),
    [anon_sym_COMMA] = ACTIONS(179),
    [anon_sym_DOT_DOT] = ACTIONS(175),
    [anon_sym_DOT_DOT_LT] = ACTIONS(179),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(179),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_PLUS] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_DASH] = ACTIONS(175),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(179),
    [anon_sym_BANG_EQ] = ACTIONS(179),
    [anon_sym_LT] = ACTIONS(175),
    [anon_sym_LT_EQ] = ACTIONS(179),
    [anon_sym_lt] = ACTIONS(175),
    [anon_sym_lte] = ACTIONS(175),
    [anon_sym_gt] = ACTIONS(175),
    [anon_sym_gte] = ACTIONS(175),
    [anon_sym_BANG] = ACTIONS(175),
    [anon_sym_AMP_AMP] = ACTIONS(179),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [anon_sym_QMARK_QMARK] = ACTIONS(179),
    [anon_sym_EQ] = ACTIONS(175),
    [anon_sym_PLUS_EQ] = ACTIONS(179),
    [anon_sym_DASH_EQ] = ACTIONS(179),
    [anon_sym_STAR_EQ] = ACTIONS(179),
    [anon_sym_SLASH_EQ] = ACTIONS(179),
    [anon_sym_PERCENT_EQ] = ACTIONS(179),
    [anon_sym_PLUS_PLUS] = ACTIONS(179),
    [anon_sym_DASH_DASH] = ACTIONS(179),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(179),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(179),
    [sym_number] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(179),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(175),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(179),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_SLASH_GT] = ACTIONS(179),
  },
  [75] = {
    [sym_group] = STATE(158),
    [anon_sym_as] = ACTIONS(181),
    [anon_sym_QMARK] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(352),
    [anon_sym_using] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_DOT_DOT] = ACTIONS(181),
    [anon_sym_DOT_DOT_LT] = ACTIONS(183),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(183),
    [anon_sym_COLON] = ACTIONS(183),
    [anon_sym_STAR] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_PERCENT] = ACTIONS(181),
    [anon_sym_EQ_EQ] = ACTIONS(183),
    [anon_sym_BANG_EQ] = ACTIONS(183),
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_LT_EQ] = ACTIONS(183),
    [anon_sym_lt] = ACTIONS(181),
    [anon_sym_lte] = ACTIONS(181),
    [anon_sym_gt] = ACTIONS(181),
    [anon_sym_gte] = ACTIONS(181),
    [anon_sym_BANG] = ACTIONS(181),
    [anon_sym_AMP_AMP] = ACTIONS(183),
    [anon_sym_PIPE_PIPE] = ACTIONS(183),
    [anon_sym_QMARK_QMARK] = ACTIONS(183),
    [anon_sym_EQ] = ACTIONS(181),
    [anon_sym_PLUS_EQ] = ACTIONS(183),
    [anon_sym_DASH_EQ] = ACTIONS(183),
    [anon_sym_STAR_EQ] = ACTIONS(183),
    [anon_sym_SLASH_EQ] = ACTIONS(183),
    [anon_sym_PERCENT_EQ] = ACTIONS(183),
    [anon_sym_PLUS_PLUS] = ACTIONS(183),
    [anon_sym_DASH_DASH] = ACTIONS(183),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(183),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(183),
    [sym_number] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(183),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(181),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(183),
    [anon_sym_GT] = ACTIONS(183),
    [anon_sym_SLASH_GT] = ACTIONS(183),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(354),
    [sym_comment] = ACTIONS(354),
    [anon_sym_LT_AT] = ACTIONS(354),
    [anon_sym_LT_POUNDlist] = ACTIONS(354),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(354),
    [sym_break] = ACTIONS(354),
    [sym_continue] = ACTIONS(354),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(354),
    [anon_sym_LT_POUNDitems] = ACTIONS(354),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(354),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(354),
    [anon_sym_LT_POUNDif] = ACTIONS(354),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(354),
    [anon_sym_LT_POUNDelseif] = ACTIONS(354),
    [anon_sym_LT_POUNDswitch] = ACTIONS(354),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(354),
    [anon_sym_LT_POUNDcase] = ACTIONS(354),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(354),
    [anon_sym_LT_POUNDfunction] = ACTIONS(354),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(354),
    [anon_sym_LT_POUNDreturn] = ACTIONS(354),
    [anon_sym_LT_POUNDmacro] = ACTIONS(354),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(354),
    [anon_sym_LT_POUNDnested] = ACTIONS(354),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(354),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(354),
    [sym_recover] = ACTIONS(354),
    [sym_fallback] = ACTIONS(354),
    [sym_flush] = ACTIONS(354),
    [anon_sym_LT_POUNDftl] = ACTIONS(354),
    [anon_sym_LT_POUNDimport] = ACTIONS(354),
    [anon_sym_LT_POUNDinclude] = ACTIONS(354),
    [sym_lt] = ACTIONS(354),
    [sym_nt] = ACTIONS(354),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(354),
    [sym_rt] = ACTIONS(354),
    [anon_sym_LT_POUNDsetting] = ACTIONS(354),
    [sym_stop] = ACTIONS(354),
    [sym_t] = ACTIONS(354),
    [anon_sym_LT_POUNDvisit] = ACTIONS(354),
    [anon_sym_LT_POUNDassign] = ACTIONS(354),
    [sym_end_assign] = ACTIONS(354),
    [anon_sym_LT_POUNDglobal] = ACTIONS(354),
    [sym_end_global] = ACTIONS(354),
    [anon_sym_LT_POUNDlocal] = ACTIONS(354),
    [sym_end_local] = ACTIONS(354),
  },
  [77] = {
    [sym_type] = STATE(161),
    [sym_operator] = STATE(160),
    [sym_string] = STATE(70),
    [sym_boolean] = STATE(70),
    [sym_sequence] = STATE(70),
    [sym_hash] = STATE(70),
    [sym_top_level] = STATE(70),
    [sym_spec_var] = STATE(70),
    [aux_sym_as_expression_repeat1] = STATE(161),
    [aux_sym_as_expression_repeat2] = STATE(162),
    [anon_sym_as] = ACTIONS(356),
    [anon_sym_QMARK] = ACTIONS(217),
    [anon_sym_using] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_DOT_DOT] = ACTIONS(219),
    [anon_sym_DOT_DOT_LT] = ACTIONS(221),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(221),
    [anon_sym_COLON] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(219),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_SLASH] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(219),
    [anon_sym_PERCENT] = ACTIONS(219),
    [anon_sym_EQ_EQ] = ACTIONS(221),
    [anon_sym_BANG_EQ] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_LT_EQ] = ACTIONS(221),
    [anon_sym_lt] = ACTIONS(219),
    [anon_sym_lte] = ACTIONS(219),
    [anon_sym_gt] = ACTIONS(219),
    [anon_sym_gte] = ACTIONS(219),
    [anon_sym_BANG] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_QMARK_QMARK] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(219),
    [anon_sym_PLUS_EQ] = ACTIONS(221),
    [anon_sym_DASH_EQ] = ACTIONS(221),
    [anon_sym_STAR_EQ] = ACTIONS(221),
    [anon_sym_SLASH_EQ] = ACTIONS(221),
    [anon_sym_PERCENT_EQ] = ACTIONS(221),
    [anon_sym_PLUS_PLUS] = ACTIONS(221),
    [anon_sym_DASH_DASH] = ACTIONS(221),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(197),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(197),
    [sym_number] = ACTIONS(217),
    [anon_sym_true] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(197),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(197),
    [anon_sym_GT] = ACTIONS(197),
    [anon_sym_SLASH_GT] = ACTIONS(197),
  },
  [78] = {
    [sym_parameter_group] = STATE(164),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(77),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(70),
    [sym_boolean] = STATE(70),
    [sym_sequence] = STATE(70),
    [sym_hash] = STATE(70),
    [sym_top_level] = STATE(70),
    [sym_spec_var] = STATE(70),
    [aux_sym_as_expression_repeat1] = STATE(77),
    [aux_sym_group_repeat1] = STATE(164),
    [anon_sym_as] = ACTIONS(113),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(115),
    [sym_number] = ACTIONS(117),
    [anon_sym_true] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(123),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(125),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(127),
    [anon_sym_GT] = ACTIONS(358),
    [anon_sym_SLASH_GT] = ACTIONS(358),
  },
  [79] = {
    [anon_sym_COMMA] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(149),
    [sym_number] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_RBRACK] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(149),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(149),
  },
  [80] = {
    [anon_sym_COMMA] = ACTIONS(153),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(153),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(153),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(153),
    [anon_sym_RBRACE] = ACTIONS(153),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(151),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
  },
  [81] = {
    [anon_sym_false] = ACTIONS(360),
  },
  [82] = {
    [sym_expression] = STATE(97),
    [sym_type] = STATE(98),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_top_level] = STATE(90),
    [sym_spec_var] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(98),
    [aux_sym_sequence_repeat1] = STATE(167),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(157),
    [sym_number] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(362),
    [anon_sym_LBRACE] = ACTIONS(167),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(171),
  },
  [83] = {
    [sym_expression] = STATE(169),
    [sym_type] = STATE(101),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_top_level] = STATE(90),
    [sym_spec_var] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(101),
    [aux_sym_hash_repeat1] = STATE(169),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(157),
    [sym_number] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_RBRACE] = ACTIONS(364),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(171),
  },
  [84] = {
    [sym_group] = STATE(171),
    [anon_sym_LPAREN] = ACTIONS(366),
    [anon_sym_COMMA] = ACTIONS(179),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(179),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(179),
    [sym_number] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_RBRACE] = ACTIONS(179),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(175),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(179),
    [anon_sym_GT] = ACTIONS(179),
  },
  [85] = {
    [sym_group] = STATE(172),
    [anon_sym_LPAREN] = ACTIONS(366),
    [anon_sym_COMMA] = ACTIONS(183),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(183),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(183),
    [sym_number] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(183),
    [anon_sym_RBRACK] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(183),
    [anon_sym_RBRACE] = ACTIONS(183),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(181),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(183),
    [anon_sym_GT] = ACTIONS(183),
  },
  [86] = {
    [sym_type] = STATE(173),
    [sym_string] = STATE(80),
    [sym_boolean] = STATE(80),
    [sym_sequence] = STATE(80),
    [sym_hash] = STATE(80),
    [sym_top_level] = STATE(80),
    [sym_spec_var] = STATE(80),
    [aux_sym_as_expression_repeat2] = STATE(173),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(131),
    [sym_number] = ACTIONS(133),
    [anon_sym_true] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(139),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(368),
  },
  [87] = {
    [sym_group] = STATE(174),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_GT] = ACTIONS(370),
  },
  [88] = {
    [anon_sym_as] = ACTIONS(372),
    [anon_sym_QMARK] = ACTIONS(372),
    [anon_sym_RPAREN] = ACTIONS(374),
    [anon_sym_using] = ACTIONS(372),
    [anon_sym_COMMA] = ACTIONS(374),
    [anon_sym_DOT_DOT] = ACTIONS(372),
    [anon_sym_DOT_DOT_LT] = ACTIONS(374),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(374),
    [anon_sym_COLON] = ACTIONS(374),
    [anon_sym_STAR] = ACTIONS(372),
    [anon_sym_PLUS] = ACTIONS(372),
    [anon_sym_SLASH] = ACTIONS(372),
    [anon_sym_DASH] = ACTIONS(372),
    [anon_sym_PERCENT] = ACTIONS(372),
    [anon_sym_EQ_EQ] = ACTIONS(374),
    [anon_sym_BANG_EQ] = ACTIONS(374),
    [anon_sym_LT] = ACTIONS(372),
    [anon_sym_LT_EQ] = ACTIONS(374),
    [anon_sym_lt] = ACTIONS(372),
    [anon_sym_lte] = ACTIONS(372),
    [anon_sym_gt] = ACTIONS(372),
    [anon_sym_gte] = ACTIONS(372),
    [anon_sym_BANG] = ACTIONS(372),
    [anon_sym_AMP_AMP] = ACTIONS(374),
    [anon_sym_PIPE_PIPE] = ACTIONS(374),
    [anon_sym_QMARK_QMARK] = ACTIONS(374),
    [anon_sym_EQ] = ACTIONS(372),
    [anon_sym_PLUS_EQ] = ACTIONS(374),
    [anon_sym_DASH_EQ] = ACTIONS(374),
    [anon_sym_STAR_EQ] = ACTIONS(374),
    [anon_sym_SLASH_EQ] = ACTIONS(374),
    [anon_sym_PERCENT_EQ] = ACTIONS(374),
    [anon_sym_PLUS_PLUS] = ACTIONS(374),
    [anon_sym_DASH_DASH] = ACTIONS(374),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(374),
    [sym_number] = ACTIONS(372),
    [anon_sym_true] = ACTIONS(372),
    [anon_sym_LBRACK] = ACTIONS(374),
    [anon_sym_LBRACE] = ACTIONS(374),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(372),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(374),
    [anon_sym_GT] = ACTIONS(374),
  },
  [89] = {
    [anon_sym_using] = ACTIONS(147),
    [anon_sym_COMMA] = ACTIONS(149),
    [anon_sym_DOT_DOT] = ACTIONS(147),
    [anon_sym_DOT_DOT_LT] = ACTIONS(149),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(149),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(149),
    [anon_sym_LT] = ACTIONS(147),
    [anon_sym_LT_EQ] = ACTIONS(149),
    [anon_sym_lt] = ACTIONS(147),
    [anon_sym_lte] = ACTIONS(147),
    [anon_sym_gt] = ACTIONS(147),
    [anon_sym_gte] = ACTIONS(147),
    [anon_sym_BANG] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(149),
    [anon_sym_QMARK_QMARK] = ACTIONS(149),
    [anon_sym_EQ] = ACTIONS(147),
    [anon_sym_PLUS_EQ] = ACTIONS(149),
    [anon_sym_DASH_EQ] = ACTIONS(149),
    [anon_sym_STAR_EQ] = ACTIONS(149),
    [anon_sym_SLASH_EQ] = ACTIONS(149),
    [anon_sym_PERCENT_EQ] = ACTIONS(149),
    [anon_sym_PLUS_PLUS] = ACTIONS(149),
    [anon_sym_DASH_DASH] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(149),
    [sym_number] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_RBRACK] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(149),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(149),
  },
  [90] = {
    [anon_sym_using] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_DOT_DOT] = ACTIONS(151),
    [anon_sym_DOT_DOT_LT] = ACTIONS(153),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(151),
    [anon_sym_SLASH] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(151),
    [anon_sym_EQ_EQ] = ACTIONS(153),
    [anon_sym_BANG_EQ] = ACTIONS(153),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_LT_EQ] = ACTIONS(153),
    [anon_sym_lt] = ACTIONS(151),
    [anon_sym_lte] = ACTIONS(151),
    [anon_sym_gt] = ACTIONS(151),
    [anon_sym_gte] = ACTIONS(151),
    [anon_sym_BANG] = ACTIONS(151),
    [anon_sym_AMP_AMP] = ACTIONS(153),
    [anon_sym_PIPE_PIPE] = ACTIONS(153),
    [anon_sym_QMARK_QMARK] = ACTIONS(153),
    [anon_sym_EQ] = ACTIONS(151),
    [anon_sym_PLUS_EQ] = ACTIONS(153),
    [anon_sym_DASH_EQ] = ACTIONS(153),
    [anon_sym_STAR_EQ] = ACTIONS(153),
    [anon_sym_SLASH_EQ] = ACTIONS(153),
    [anon_sym_PERCENT_EQ] = ACTIONS(153),
    [anon_sym_PLUS_PLUS] = ACTIONS(153),
    [anon_sym_DASH_DASH] = ACTIONS(153),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(153),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(153),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(153),
    [anon_sym_RBRACE] = ACTIONS(153),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(151),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(153),
  },
  [91] = {
    [anon_sym_false] = ACTIONS(376),
  },
  [92] = {
    [sym_expression] = STATE(97),
    [sym_type] = STATE(98),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_top_level] = STATE(90),
    [sym_spec_var] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(98),
    [aux_sym_sequence_repeat1] = STATE(177),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(157),
    [sym_number] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(378),
    [anon_sym_LBRACE] = ACTIONS(167),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(171),
  },
  [93] = {
    [anon_sym_as] = ACTIONS(380),
    [anon_sym_QMARK] = ACTIONS(380),
    [anon_sym_RPAREN] = ACTIONS(382),
    [anon_sym_using] = ACTIONS(380),
    [anon_sym_COMMA] = ACTIONS(382),
    [anon_sym_DOT_DOT] = ACTIONS(380),
    [anon_sym_DOT_DOT_LT] = ACTIONS(382),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(382),
    [anon_sym_COLON] = ACTIONS(382),
    [anon_sym_STAR] = ACTIONS(380),
    [anon_sym_PLUS] = ACTIONS(380),
    [anon_sym_SLASH] = ACTIONS(380),
    [anon_sym_DASH] = ACTIONS(380),
    [anon_sym_PERCENT] = ACTIONS(380),
    [anon_sym_EQ_EQ] = ACTIONS(382),
    [anon_sym_BANG_EQ] = ACTIONS(382),
    [anon_sym_LT] = ACTIONS(380),
    [anon_sym_LT_EQ] = ACTIONS(382),
    [anon_sym_lt] = ACTIONS(380),
    [anon_sym_lte] = ACTIONS(380),
    [anon_sym_gt] = ACTIONS(380),
    [anon_sym_gte] = ACTIONS(380),
    [anon_sym_BANG] = ACTIONS(380),
    [anon_sym_AMP_AMP] = ACTIONS(382),
    [anon_sym_PIPE_PIPE] = ACTIONS(382),
    [anon_sym_QMARK_QMARK] = ACTIONS(382),
    [anon_sym_EQ] = ACTIONS(380),
    [anon_sym_PLUS_EQ] = ACTIONS(382),
    [anon_sym_DASH_EQ] = ACTIONS(382),
    [anon_sym_STAR_EQ] = ACTIONS(382),
    [anon_sym_SLASH_EQ] = ACTIONS(382),
    [anon_sym_PERCENT_EQ] = ACTIONS(382),
    [anon_sym_PLUS_PLUS] = ACTIONS(382),
    [anon_sym_DASH_DASH] = ACTIONS(382),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(382),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(382),
    [sym_number] = ACTIONS(380),
    [anon_sym_true] = ACTIONS(380),
    [anon_sym_LBRACK] = ACTIONS(382),
    [anon_sym_LBRACE] = ACTIONS(382),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(380),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(382),
    [anon_sym_GT] = ACTIONS(382),
  },
  [94] = {
    [sym_expression] = STATE(179),
    [sym_type] = STATE(101),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_top_level] = STATE(90),
    [sym_spec_var] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(101),
    [aux_sym_hash_repeat1] = STATE(179),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(157),
    [sym_number] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_RBRACE] = ACTIONS(384),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(171),
  },
  [95] = {
    [sym_group] = STATE(181),
    [anon_sym_LPAREN] = ACTIONS(386),
    [anon_sym_using] = ACTIONS(175),
    [anon_sym_COMMA] = ACTIONS(179),
    [anon_sym_DOT_DOT] = ACTIONS(175),
    [anon_sym_DOT_DOT_LT] = ACTIONS(179),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(179),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_PLUS] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_DASH] = ACTIONS(175),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(179),
    [anon_sym_BANG_EQ] = ACTIONS(179),
    [anon_sym_LT] = ACTIONS(175),
    [anon_sym_LT_EQ] = ACTIONS(179),
    [anon_sym_lt] = ACTIONS(175),
    [anon_sym_lte] = ACTIONS(175),
    [anon_sym_gt] = ACTIONS(175),
    [anon_sym_gte] = ACTIONS(175),
    [anon_sym_BANG] = ACTIONS(175),
    [anon_sym_AMP_AMP] = ACTIONS(179),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [anon_sym_QMARK_QMARK] = ACTIONS(179),
    [anon_sym_EQ] = ACTIONS(175),
    [anon_sym_PLUS_EQ] = ACTIONS(179),
    [anon_sym_DASH_EQ] = ACTIONS(179),
    [anon_sym_STAR_EQ] = ACTIONS(179),
    [anon_sym_SLASH_EQ] = ACTIONS(179),
    [anon_sym_PERCENT_EQ] = ACTIONS(179),
    [anon_sym_PLUS_PLUS] = ACTIONS(179),
    [anon_sym_DASH_DASH] = ACTIONS(179),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(179),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(179),
    [sym_number] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_RBRACE] = ACTIONS(179),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(175),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(179),
  },
  [96] = {
    [sym_group] = STATE(182),
    [anon_sym_LPAREN] = ACTIONS(386),
    [anon_sym_using] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_DOT_DOT] = ACTIONS(181),
    [anon_sym_DOT_DOT_LT] = ACTIONS(183),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(183),
    [anon_sym_COLON] = ACTIONS(183),
    [anon_sym_STAR] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_PERCENT] = ACTIONS(181),
    [anon_sym_EQ_EQ] = ACTIONS(183),
    [anon_sym_BANG_EQ] = ACTIONS(183),
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_LT_EQ] = ACTIONS(183),
    [anon_sym_lt] = ACTIONS(181),
    [anon_sym_lte] = ACTIONS(181),
    [anon_sym_gt] = ACTIONS(181),
    [anon_sym_gte] = ACTIONS(181),
    [anon_sym_BANG] = ACTIONS(181),
    [anon_sym_AMP_AMP] = ACTIONS(183),
    [anon_sym_PIPE_PIPE] = ACTIONS(183),
    [anon_sym_QMARK_QMARK] = ACTIONS(183),
    [anon_sym_EQ] = ACTIONS(181),
    [anon_sym_PLUS_EQ] = ACTIONS(183),
    [anon_sym_DASH_EQ] = ACTIONS(183),
    [anon_sym_STAR_EQ] = ACTIONS(183),
    [anon_sym_SLASH_EQ] = ACTIONS(183),
    [anon_sym_PERCENT_EQ] = ACTIONS(183),
    [anon_sym_PLUS_PLUS] = ACTIONS(183),
    [anon_sym_DASH_DASH] = ACTIONS(183),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(183),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(183),
    [sym_number] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(183),
    [anon_sym_RBRACK] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(183),
    [anon_sym_RBRACE] = ACTIONS(183),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(181),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(183),
  },
  [97] = {
    [anon_sym_COMMA] = ACTIONS(388),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(390),
    [sym_number] = ACTIONS(392),
    [anon_sym_true] = ACTIONS(392),
    [anon_sym_LBRACK] = ACTIONS(390),
    [anon_sym_RBRACK] = ACTIONS(390),
    [anon_sym_LBRACE] = ACTIONS(390),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(390),
  },
  [98] = {
    [sym_type] = STATE(185),
    [sym_operator] = STATE(184),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_top_level] = STATE(90),
    [sym_spec_var] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(185),
    [aux_sym_as_expression_repeat2] = STATE(186),
    [anon_sym_using] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(195),
    [anon_sym_DOT_DOT] = ACTIONS(193),
    [anon_sym_DOT_DOT_LT] = ACTIONS(195),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(195),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_STAR] = ACTIONS(193),
    [anon_sym_PLUS] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(193),
    [anon_sym_DASH] = ACTIONS(193),
    [anon_sym_PERCENT] = ACTIONS(193),
    [anon_sym_EQ_EQ] = ACTIONS(195),
    [anon_sym_BANG_EQ] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(193),
    [anon_sym_LT_EQ] = ACTIONS(195),
    [anon_sym_lt] = ACTIONS(193),
    [anon_sym_lte] = ACTIONS(193),
    [anon_sym_gt] = ACTIONS(193),
    [anon_sym_gte] = ACTIONS(193),
    [anon_sym_BANG] = ACTIONS(193),
    [anon_sym_AMP_AMP] = ACTIONS(195),
    [anon_sym_PIPE_PIPE] = ACTIONS(195),
    [anon_sym_QMARK_QMARK] = ACTIONS(195),
    [anon_sym_EQ] = ACTIONS(193),
    [anon_sym_PLUS_EQ] = ACTIONS(195),
    [anon_sym_DASH_EQ] = ACTIONS(195),
    [anon_sym_STAR_EQ] = ACTIONS(195),
    [anon_sym_SLASH_EQ] = ACTIONS(195),
    [anon_sym_PERCENT_EQ] = ACTIONS(195),
    [anon_sym_PLUS_PLUS] = ACTIONS(195),
    [anon_sym_DASH_DASH] = ACTIONS(195),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(197),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(197),
    [sym_number] = ACTIONS(217),
    [anon_sym_true] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_RBRACK] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(197),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(197),
  },
  [99] = {
    [sym_expression] = STATE(97),
    [sym_type] = STATE(98),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_top_level] = STATE(90),
    [sym_spec_var] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(98),
    [aux_sym_sequence_repeat1] = STATE(188),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(157),
    [sym_number] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(394),
    [anon_sym_LBRACE] = ACTIONS(167),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(171),
  },
  [100] = {
    [anon_sym_as] = ACTIONS(396),
    [anon_sym_QMARK] = ACTIONS(396),
    [anon_sym_RPAREN] = ACTIONS(398),
    [anon_sym_using] = ACTIONS(396),
    [anon_sym_COMMA] = ACTIONS(398),
    [anon_sym_DOT_DOT] = ACTIONS(396),
    [anon_sym_DOT_DOT_LT] = ACTIONS(398),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(398),
    [anon_sym_COLON] = ACTIONS(398),
    [anon_sym_STAR] = ACTIONS(396),
    [anon_sym_PLUS] = ACTIONS(396),
    [anon_sym_SLASH] = ACTIONS(396),
    [anon_sym_DASH] = ACTIONS(396),
    [anon_sym_PERCENT] = ACTIONS(396),
    [anon_sym_EQ_EQ] = ACTIONS(398),
    [anon_sym_BANG_EQ] = ACTIONS(398),
    [anon_sym_LT] = ACTIONS(396),
    [anon_sym_LT_EQ] = ACTIONS(398),
    [anon_sym_lt] = ACTIONS(396),
    [anon_sym_lte] = ACTIONS(396),
    [anon_sym_gt] = ACTIONS(396),
    [anon_sym_gte] = ACTIONS(396),
    [anon_sym_BANG] = ACTIONS(396),
    [anon_sym_AMP_AMP] = ACTIONS(398),
    [anon_sym_PIPE_PIPE] = ACTIONS(398),
    [anon_sym_QMARK_QMARK] = ACTIONS(398),
    [anon_sym_EQ] = ACTIONS(396),
    [anon_sym_PLUS_EQ] = ACTIONS(398),
    [anon_sym_DASH_EQ] = ACTIONS(398),
    [anon_sym_STAR_EQ] = ACTIONS(398),
    [anon_sym_SLASH_EQ] = ACTIONS(398),
    [anon_sym_PERCENT_EQ] = ACTIONS(398),
    [anon_sym_PLUS_PLUS] = ACTIONS(398),
    [anon_sym_DASH_DASH] = ACTIONS(398),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(398),
    [sym_number] = ACTIONS(396),
    [anon_sym_true] = ACTIONS(396),
    [anon_sym_LBRACK] = ACTIONS(398),
    [anon_sym_LBRACE] = ACTIONS(398),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(398),
    [anon_sym_GT] = ACTIONS(398),
  },
  [101] = {
    [sym_type] = STATE(190),
    [sym_operator] = STATE(189),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_top_level] = STATE(90),
    [sym_spec_var] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(190),
    [aux_sym_as_expression_repeat2] = STATE(191),
    [anon_sym_using] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(195),
    [anon_sym_DOT_DOT] = ACTIONS(193),
    [anon_sym_DOT_DOT_LT] = ACTIONS(195),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(195),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_STAR] = ACTIONS(193),
    [anon_sym_PLUS] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(193),
    [anon_sym_DASH] = ACTIONS(193),
    [anon_sym_PERCENT] = ACTIONS(193),
    [anon_sym_EQ_EQ] = ACTIONS(195),
    [anon_sym_BANG_EQ] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(193),
    [anon_sym_LT_EQ] = ACTIONS(195),
    [anon_sym_lt] = ACTIONS(193),
    [anon_sym_lte] = ACTIONS(193),
    [anon_sym_gt] = ACTIONS(193),
    [anon_sym_gte] = ACTIONS(193),
    [anon_sym_BANG] = ACTIONS(193),
    [anon_sym_AMP_AMP] = ACTIONS(195),
    [anon_sym_PIPE_PIPE] = ACTIONS(195),
    [anon_sym_QMARK_QMARK] = ACTIONS(195),
    [anon_sym_EQ] = ACTIONS(193),
    [anon_sym_PLUS_EQ] = ACTIONS(195),
    [anon_sym_DASH_EQ] = ACTIONS(195),
    [anon_sym_STAR_EQ] = ACTIONS(195),
    [anon_sym_SLASH_EQ] = ACTIONS(195),
    [anon_sym_PERCENT_EQ] = ACTIONS(195),
    [anon_sym_PLUS_PLUS] = ACTIONS(195),
    [anon_sym_DASH_DASH] = ACTIONS(195),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(197),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(197),
    [sym_number] = ACTIONS(217),
    [anon_sym_true] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(197),
    [anon_sym_RBRACE] = ACTIONS(197),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(197),
  },
  [102] = {
    [sym_expression] = STATE(193),
    [sym_type] = STATE(101),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_top_level] = STATE(90),
    [sym_spec_var] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(101),
    [aux_sym_hash_repeat1] = STATE(193),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(157),
    [sym_number] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_RBRACE] = ACTIONS(400),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(171),
  },
  [103] = {
    [sym_parameter_group] = STATE(197),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(196),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(196),
    [aux_sym_group_repeat1] = STATE(197),
    [anon_sym_as] = ACTIONS(402),
    [anon_sym_QMARK] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(404),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
  },
  [104] = {
    [anon_sym_as] = ACTIONS(406),
    [anon_sym_QMARK] = ACTIONS(406),
    [anon_sym_LPAREN] = ACTIONS(408),
    [anon_sym_RPAREN] = ACTIONS(408),
    [anon_sym_using] = ACTIONS(406),
    [anon_sym_COMMA] = ACTIONS(408),
    [anon_sym_DOT_DOT] = ACTIONS(406),
    [anon_sym_DOT_DOT_LT] = ACTIONS(408),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(408),
    [anon_sym_COLON] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(406),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_SLASH] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(406),
    [anon_sym_PERCENT] = ACTIONS(406),
    [anon_sym_EQ_EQ] = ACTIONS(408),
    [anon_sym_BANG_EQ] = ACTIONS(408),
    [anon_sym_LT] = ACTIONS(406),
    [anon_sym_LT_EQ] = ACTIONS(408),
    [anon_sym_lt] = ACTIONS(406),
    [anon_sym_lte] = ACTIONS(406),
    [anon_sym_gt] = ACTIONS(406),
    [anon_sym_gte] = ACTIONS(406),
    [anon_sym_BANG] = ACTIONS(406),
    [anon_sym_AMP_AMP] = ACTIONS(408),
    [anon_sym_PIPE_PIPE] = ACTIONS(408),
    [anon_sym_QMARK_QMARK] = ACTIONS(408),
    [anon_sym_EQ] = ACTIONS(406),
    [anon_sym_PLUS_EQ] = ACTIONS(408),
    [anon_sym_DASH_EQ] = ACTIONS(408),
    [anon_sym_STAR_EQ] = ACTIONS(408),
    [anon_sym_SLASH_EQ] = ACTIONS(408),
    [anon_sym_PERCENT_EQ] = ACTIONS(408),
    [anon_sym_PLUS_PLUS] = ACTIONS(408),
    [anon_sym_DASH_DASH] = ACTIONS(408),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(408),
    [sym_number] = ACTIONS(406),
    [anon_sym_true] = ACTIONS(406),
    [anon_sym_LBRACK] = ACTIONS(408),
    [anon_sym_LBRACE] = ACTIONS(408),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(406),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(408),
    [anon_sym_GT] = ACTIONS(408),
  },
  [105] = {
    [anon_sym_as] = ACTIONS(410),
    [anon_sym_QMARK] = ACTIONS(410),
    [anon_sym_RPAREN] = ACTIONS(412),
    [anon_sym_using] = ACTIONS(410),
    [anon_sym_COMMA] = ACTIONS(412),
    [anon_sym_DOT_DOT] = ACTIONS(410),
    [anon_sym_DOT_DOT_LT] = ACTIONS(412),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(412),
    [anon_sym_COLON] = ACTIONS(412),
    [anon_sym_STAR] = ACTIONS(410),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_SLASH] = ACTIONS(410),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_PERCENT] = ACTIONS(410),
    [anon_sym_EQ_EQ] = ACTIONS(412),
    [anon_sym_BANG_EQ] = ACTIONS(412),
    [anon_sym_LT] = ACTIONS(410),
    [anon_sym_LT_EQ] = ACTIONS(412),
    [anon_sym_lt] = ACTIONS(410),
    [anon_sym_lte] = ACTIONS(410),
    [anon_sym_gt] = ACTIONS(410),
    [anon_sym_gte] = ACTIONS(410),
    [anon_sym_BANG] = ACTIONS(410),
    [anon_sym_AMP_AMP] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(412),
    [anon_sym_QMARK_QMARK] = ACTIONS(412),
    [anon_sym_EQ] = ACTIONS(410),
    [anon_sym_PLUS_EQ] = ACTIONS(412),
    [anon_sym_DASH_EQ] = ACTIONS(412),
    [anon_sym_STAR_EQ] = ACTIONS(412),
    [anon_sym_SLASH_EQ] = ACTIONS(412),
    [anon_sym_PERCENT_EQ] = ACTIONS(412),
    [anon_sym_PLUS_PLUS] = ACTIONS(412),
    [anon_sym_DASH_DASH] = ACTIONS(412),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(412),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(412),
    [sym_number] = ACTIONS(410),
    [anon_sym_true] = ACTIONS(410),
    [anon_sym_LBRACK] = ACTIONS(412),
    [anon_sym_LBRACE] = ACTIONS(412),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(410),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(412),
    [anon_sym_GT] = ACTIONS(412),
  },
  [106] = {
    [sym_directive] = STATE(199),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_list_middle] = STATE(205),
    [sym_list_else] = STATE(203),
    [sym_items] = STATE(199),
    [sym_sep] = STATE(199),
    [sym_sep_block] = STATE(204),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_list_repeat1] = STATE(205),
    [anon_sym_LT_AT] = ACTIONS(9),
    [anon_sym_LT_POUNDlist] = ACTIONS(11),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(414),
    [sym_break] = ACTIONS(416),
    [sym_continue] = ACTIONS(416),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(418),
    [anon_sym_LT_POUNDitems] = ACTIONS(420),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(422),
    [anon_sym_LT_POUNDif] = ACTIONS(13),
    [anon_sym_LT_POUNDswitch] = ACTIONS(15),
    [anon_sym_LT_POUNDfunction] = ACTIONS(17),
    [anon_sym_LT_POUNDmacro] = ACTIONS(19),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(21),
    [sym_fallback] = ACTIONS(23),
    [sym_flush] = ACTIONS(23),
    [anon_sym_LT_POUNDftl] = ACTIONS(25),
    [anon_sym_LT_POUNDimport] = ACTIONS(27),
    [anon_sym_LT_POUNDinclude] = ACTIONS(29),
    [sym_lt] = ACTIONS(23),
    [sym_nt] = ACTIONS(23),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(31),
    [sym_rt] = ACTIONS(23),
    [anon_sym_LT_POUNDsetting] = ACTIONS(33),
    [sym_stop] = ACTIONS(23),
    [sym_t] = ACTIONS(23),
    [anon_sym_LT_POUNDvisit] = ACTIONS(35),
    [anon_sym_LT_POUNDassign] = ACTIONS(37),
    [sym_end_assign] = ACTIONS(39),
    [anon_sym_LT_POUNDglobal] = ACTIONS(41),
    [sym_end_global] = ACTIONS(43),
    [anon_sym_LT_POUNDlocal] = ACTIONS(45),
    [sym_end_local] = ACTIONS(47),
  },
  [107] = {
    [sym_type] = STATE(206),
    [sym_string] = STATE(80),
    [sym_boolean] = STATE(80),
    [sym_sequence] = STATE(80),
    [sym_hash] = STATE(80),
    [sym_top_level] = STATE(80),
    [sym_spec_var] = STATE(80),
    [aux_sym_as_expression_repeat2] = STATE(206),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(131),
    [sym_number] = ACTIONS(133),
    [anon_sym_true] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(139),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(143),
  },
  [108] = {
    [anon_sym_COMMA] = ACTIONS(424),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(424),
    [sym_number] = ACTIONS(426),
    [anon_sym_true] = ACTIONS(426),
    [anon_sym_LBRACK] = ACTIONS(424),
    [anon_sym_RBRACK] = ACTIONS(424),
    [anon_sym_LBRACE] = ACTIONS(424),
    [anon_sym_RBRACE] = ACTIONS(424),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(426),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(424),
    [anon_sym_GT] = ACTIONS(424),
  },
  [109] = {
    [sym_type] = STATE(207),
    [sym_string] = STATE(80),
    [sym_boolean] = STATE(80),
    [sym_sequence] = STATE(80),
    [sym_hash] = STATE(80),
    [sym_top_level] = STATE(80),
    [sym_spec_var] = STATE(80),
    [aux_sym_as_expression_repeat2] = STATE(207),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(131),
    [sym_number] = ACTIONS(133),
    [anon_sym_true] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(139),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(428),
  },
  [110] = {
    [sym_type] = STATE(110),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(110),
    [anon_sym_as] = ACTIONS(430),
    [anon_sym_using] = ACTIONS(430),
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_DOT_DOT] = ACTIONS(430),
    [anon_sym_DOT_DOT_LT] = ACTIONS(432),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(432),
    [anon_sym_COLON] = ACTIONS(432),
    [anon_sym_STAR] = ACTIONS(430),
    [anon_sym_PLUS] = ACTIONS(430),
    [anon_sym_SLASH] = ACTIONS(430),
    [anon_sym_DASH] = ACTIONS(430),
    [anon_sym_PERCENT] = ACTIONS(430),
    [anon_sym_EQ_EQ] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(432),
    [anon_sym_LT] = ACTIONS(430),
    [anon_sym_LT_EQ] = ACTIONS(432),
    [anon_sym_lt] = ACTIONS(430),
    [anon_sym_lte] = ACTIONS(430),
    [anon_sym_gt] = ACTIONS(430),
    [anon_sym_gte] = ACTIONS(430),
    [anon_sym_BANG] = ACTIONS(430),
    [anon_sym_AMP_AMP] = ACTIONS(432),
    [anon_sym_PIPE_PIPE] = ACTIONS(432),
    [anon_sym_QMARK_QMARK] = ACTIONS(432),
    [anon_sym_EQ] = ACTIONS(430),
    [anon_sym_PLUS_EQ] = ACTIONS(432),
    [anon_sym_DASH_EQ] = ACTIONS(432),
    [anon_sym_STAR_EQ] = ACTIONS(432),
    [anon_sym_SLASH_EQ] = ACTIONS(432),
    [anon_sym_PERCENT_EQ] = ACTIONS(432),
    [anon_sym_PLUS_PLUS] = ACTIONS(432),
    [anon_sym_DASH_DASH] = ACTIONS(432),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(434),
    [sym_number] = ACTIONS(437),
    [anon_sym_true] = ACTIONS(440),
    [anon_sym_LBRACK] = ACTIONS(443),
    [anon_sym_LBRACE] = ACTIONS(446),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(449),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(452),
    [anon_sym_GT] = ACTIONS(432),
  },
  [111] = {
    [sym_type] = STATE(173),
    [sym_string] = STATE(80),
    [sym_boolean] = STATE(80),
    [sym_sequence] = STATE(80),
    [sym_hash] = STATE(80),
    [sym_top_level] = STATE(80),
    [sym_spec_var] = STATE(80),
    [aux_sym_as_expression_repeat2] = STATE(173),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(131),
    [sym_number] = ACTIONS(133),
    [anon_sym_true] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(139),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(428),
  },
  [112] = {
    [anon_sym_as] = ACTIONS(147),
    [anon_sym_QMARK] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(149),
    [sym_number] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(149),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_SLASH_GT] = ACTIONS(149),
  },
  [113] = {
    [anon_sym_as] = ACTIONS(151),
    [anon_sym_QMARK] = ACTIONS(153),
    [anon_sym_RPAREN] = ACTIONS(153),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(153),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(153),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(153),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(151),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_SLASH_GT] = ACTIONS(153),
  },
  [114] = {
    [anon_sym_false] = ACTIONS(455),
  },
  [115] = {
    [sym_expression] = STATE(97),
    [sym_type] = STATE(98),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_top_level] = STATE(90),
    [sym_spec_var] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(98),
    [aux_sym_sequence_repeat1] = STATE(210),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(157),
    [sym_number] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(457),
    [anon_sym_LBRACE] = ACTIONS(167),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(171),
  },
  [116] = {
    [sym_expression] = STATE(212),
    [sym_type] = STATE(101),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_top_level] = STATE(90),
    [sym_spec_var] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(101),
    [aux_sym_hash_repeat1] = STATE(212),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(157),
    [sym_number] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_RBRACE] = ACTIONS(459),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(171),
  },
  [117] = {
    [sym_group] = STATE(214),
    [anon_sym_as] = ACTIONS(175),
    [anon_sym_QMARK] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(461),
    [anon_sym_RPAREN] = ACTIONS(179),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(179),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(179),
    [sym_number] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(179),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(175),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(179),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_SLASH_GT] = ACTIONS(179),
  },
  [118] = {
    [sym_group] = STATE(215),
    [anon_sym_as] = ACTIONS(181),
    [anon_sym_QMARK] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(461),
    [anon_sym_RPAREN] = ACTIONS(183),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(183),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(183),
    [sym_number] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(183),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(181),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(183),
    [anon_sym_GT] = ACTIONS(183),
    [anon_sym_SLASH_GT] = ACTIONS(183),
  },
  [119] = {
    [sym_type] = STATE(216),
    [sym_string] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_sequence] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_top_level] = STATE(113),
    [sym_spec_var] = STATE(113),
    [aux_sym_as_expression_repeat2] = STATE(216),
    [anon_sym_as] = ACTIONS(463),
    [anon_sym_QMARK] = ACTIONS(368),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(368),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(368),
    [sym_number] = ACTIONS(463),
    [anon_sym_true] = ACTIONS(463),
    [anon_sym_LBRACK] = ACTIONS(368),
    [anon_sym_LBRACE] = ACTIONS(368),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(463),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(368),
    [anon_sym_GT] = ACTIONS(368),
  },
  [120] = {
    [sym_group] = STATE(174),
    [anon_sym_as] = ACTIONS(465),
    [anon_sym_QMARK] = ACTIONS(370),
    [anon_sym_LPAREN] = ACTIONS(461),
    [anon_sym_RPAREN] = ACTIONS(370),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(370),
    [sym_number] = ACTIONS(465),
    [anon_sym_true] = ACTIONS(465),
    [anon_sym_LBRACK] = ACTIONS(370),
    [anon_sym_LBRACE] = ACTIONS(370),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(465),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(370),
    [anon_sym_GT] = ACTIONS(370),
    [anon_sym_SLASH_GT] = ACTIONS(370),
  },
  [121] = {
    [sym_type] = STATE(217),
    [sym_string] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_sequence] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_top_level] = STATE(113),
    [sym_spec_var] = STATE(113),
    [aux_sym_as_expression_repeat2] = STATE(217),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(199),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(199),
    [sym_number] = ACTIONS(201),
    [anon_sym_true] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(207),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(209),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(211),
  },
  [122] = {
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
  [123] = {
    [sym_type] = STATE(218),
    [sym_string] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_sequence] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_top_level] = STATE(113),
    [sym_spec_var] = STATE(113),
    [aux_sym_as_expression_repeat2] = STATE(218),
    [anon_sym_as] = ACTIONS(467),
    [anon_sym_QMARK] = ACTIONS(428),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(199),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(199),
    [sym_number] = ACTIONS(201),
    [anon_sym_true] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(207),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(209),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(211),
    [anon_sym_GT] = ACTIONS(428),
  },
  [124] = {
    [sym_type] = STATE(124),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(124),
    [anon_sym_as] = ACTIONS(430),
    [anon_sym_QMARK] = ACTIONS(430),
    [anon_sym_using] = ACTIONS(430),
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_DOT_DOT] = ACTIONS(430),
    [anon_sym_DOT_DOT_LT] = ACTIONS(432),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(432),
    [anon_sym_COLON] = ACTIONS(432),
    [anon_sym_STAR] = ACTIONS(430),
    [anon_sym_PLUS] = ACTIONS(430),
    [anon_sym_SLASH] = ACTIONS(430),
    [anon_sym_DASH] = ACTIONS(430),
    [anon_sym_PERCENT] = ACTIONS(430),
    [anon_sym_EQ_EQ] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(432),
    [anon_sym_LT] = ACTIONS(430),
    [anon_sym_LT_EQ] = ACTIONS(432),
    [anon_sym_lt] = ACTIONS(430),
    [anon_sym_lte] = ACTIONS(430),
    [anon_sym_gt] = ACTIONS(430),
    [anon_sym_gte] = ACTIONS(430),
    [anon_sym_BANG] = ACTIONS(430),
    [anon_sym_AMP_AMP] = ACTIONS(432),
    [anon_sym_PIPE_PIPE] = ACTIONS(432),
    [anon_sym_QMARK_QMARK] = ACTIONS(432),
    [anon_sym_EQ] = ACTIONS(430),
    [anon_sym_PLUS_EQ] = ACTIONS(432),
    [anon_sym_DASH_EQ] = ACTIONS(432),
    [anon_sym_STAR_EQ] = ACTIONS(432),
    [anon_sym_SLASH_EQ] = ACTIONS(432),
    [anon_sym_PERCENT_EQ] = ACTIONS(432),
    [anon_sym_PLUS_PLUS] = ACTIONS(432),
    [anon_sym_DASH_DASH] = ACTIONS(432),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(434),
    [sym_number] = ACTIONS(437),
    [anon_sym_true] = ACTIONS(440),
    [anon_sym_LBRACK] = ACTIONS(443),
    [anon_sym_LBRACE] = ACTIONS(446),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(449),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(452),
    [anon_sym_GT] = ACTIONS(432),
  },
  [125] = {
    [sym_type] = STATE(216),
    [sym_string] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_sequence] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_top_level] = STATE(113),
    [sym_spec_var] = STATE(113),
    [aux_sym_as_expression_repeat2] = STATE(216),
    [anon_sym_as] = ACTIONS(467),
    [anon_sym_QMARK] = ACTIONS(428),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(428),
    [sym_number] = ACTIONS(467),
    [anon_sym_true] = ACTIONS(467),
    [anon_sym_LBRACK] = ACTIONS(428),
    [anon_sym_LBRACE] = ACTIONS(428),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(467),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(428),
    [anon_sym_GT] = ACTIONS(428),
  },
  [126] = {
    [sym_directive] = STATE(222),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_if_else] = STATE(223),
    [sym_elseif] = STATE(222),
    [sym_if_middle] = STATE(224),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_if_repeat1] = STATE(224),
    [anon_sym_LT_AT] = ACTIONS(9),
    [anon_sym_LT_POUNDlist] = ACTIONS(11),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(469),
    [anon_sym_LT_POUNDif] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(471),
    [anon_sym_LT_POUNDelseif] = ACTIONS(473),
    [anon_sym_LT_POUNDswitch] = ACTIONS(15),
    [anon_sym_LT_POUNDfunction] = ACTIONS(17),
    [anon_sym_LT_POUNDmacro] = ACTIONS(19),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(21),
    [sym_fallback] = ACTIONS(23),
    [sym_flush] = ACTIONS(23),
    [anon_sym_LT_POUNDftl] = ACTIONS(25),
    [anon_sym_LT_POUNDimport] = ACTIONS(27),
    [anon_sym_LT_POUNDinclude] = ACTIONS(29),
    [sym_lt] = ACTIONS(23),
    [sym_nt] = ACTIONS(23),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(31),
    [sym_rt] = ACTIONS(23),
    [anon_sym_LT_POUNDsetting] = ACTIONS(33),
    [sym_stop] = ACTIONS(23),
    [sym_t] = ACTIONS(23),
    [anon_sym_LT_POUNDvisit] = ACTIONS(35),
    [anon_sym_LT_POUNDassign] = ACTIONS(37),
    [sym_end_assign] = ACTIONS(39),
    [anon_sym_LT_POUNDglobal] = ACTIONS(41),
    [sym_end_global] = ACTIONS(43),
    [anon_sym_LT_POUNDlocal] = ACTIONS(45),
    [sym_end_local] = ACTIONS(47),
  },
  [127] = {
    [sym_parameter_group] = STATE(127),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(39),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(39),
    [aux_sym_group_repeat1] = STATE(127),
    [anon_sym_as] = ACTIONS(475),
    [anon_sym_QMARK] = ACTIONS(478),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(481),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(481),
    [sym_number] = ACTIONS(484),
    [anon_sym_true] = ACTIONS(487),
    [anon_sym_LBRACK] = ACTIONS(490),
    [anon_sym_LBRACE] = ACTIONS(493),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(496),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(499),
    [anon_sym_GT] = ACTIONS(502),
  },
  [128] = {
    [sym_case] = STATE(228),
    [sym_default] = STATE(229),
    [sym_switch_middle] = STATE(230),
    [aux_sym_switch_repeat1] = STATE(230),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(504),
    [anon_sym_LT_POUNDcase] = ACTIONS(506),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(508),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(510),
    [sym_comment] = ACTIONS(510),
    [anon_sym_LT_AT] = ACTIONS(510),
    [anon_sym_LT_POUNDlist] = ACTIONS(510),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(510),
    [sym_break] = ACTIONS(510),
    [sym_continue] = ACTIONS(510),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(510),
    [anon_sym_LT_POUNDitems] = ACTIONS(510),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(510),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(510),
    [anon_sym_LT_POUNDif] = ACTIONS(510),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(510),
    [anon_sym_LT_POUNDelseif] = ACTIONS(510),
    [anon_sym_LT_POUNDswitch] = ACTIONS(510),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(510),
    [anon_sym_LT_POUNDcase] = ACTIONS(510),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(510),
    [anon_sym_LT_POUNDfunction] = ACTIONS(510),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(510),
    [anon_sym_LT_POUNDreturn] = ACTIONS(510),
    [anon_sym_LT_POUNDmacro] = ACTIONS(510),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(510),
    [anon_sym_LT_POUNDnested] = ACTIONS(510),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(510),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(510),
    [sym_recover] = ACTIONS(510),
    [sym_fallback] = ACTIONS(510),
    [sym_flush] = ACTIONS(510),
    [anon_sym_LT_POUNDftl] = ACTIONS(510),
    [anon_sym_LT_POUNDimport] = ACTIONS(510),
    [anon_sym_LT_POUNDinclude] = ACTIONS(510),
    [sym_lt] = ACTIONS(510),
    [sym_nt] = ACTIONS(510),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(510),
    [sym_rt] = ACTIONS(510),
    [anon_sym_LT_POUNDsetting] = ACTIONS(510),
    [sym_stop] = ACTIONS(510),
    [sym_t] = ACTIONS(510),
    [anon_sym_LT_POUNDvisit] = ACTIONS(510),
    [anon_sym_LT_POUNDassign] = ACTIONS(510),
    [sym_end_assign] = ACTIONS(510),
    [anon_sym_LT_POUNDglobal] = ACTIONS(510),
    [sym_end_global] = ACTIONS(510),
    [anon_sym_LT_POUNDlocal] = ACTIONS(510),
    [sym_end_local] = ACTIONS(510),
  },
  [130] = {
    [sym_parameter_group] = STATE(232),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(36),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(36),
    [anon_sym_as] = ACTIONS(51),
    [anon_sym_QMARK] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(512),
  },
  [131] = {
    [anon_sym_LT_AT] = ACTIONS(514),
    [anon_sym_LT_POUNDlist] = ACTIONS(514),
    [anon_sym_LT_POUNDif] = ACTIONS(514),
    [anon_sym_LT_POUNDswitch] = ACTIONS(514),
    [anon_sym_LT_POUNDfunction] = ACTIONS(514),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(514),
    [anon_sym_LT_POUNDreturn] = ACTIONS(514),
    [anon_sym_LT_POUNDmacro] = ACTIONS(514),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(514),
    [sym_fallback] = ACTIONS(514),
    [sym_flush] = ACTIONS(514),
    [anon_sym_LT_POUNDftl] = ACTIONS(514),
    [anon_sym_LT_POUNDimport] = ACTIONS(514),
    [anon_sym_LT_POUNDinclude] = ACTIONS(514),
    [sym_lt] = ACTIONS(514),
    [sym_nt] = ACTIONS(514),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(514),
    [sym_rt] = ACTIONS(514),
    [anon_sym_LT_POUNDsetting] = ACTIONS(514),
    [sym_stop] = ACTIONS(514),
    [sym_t] = ACTIONS(514),
    [anon_sym_LT_POUNDvisit] = ACTIONS(514),
    [anon_sym_LT_POUNDassign] = ACTIONS(514),
    [sym_end_assign] = ACTIONS(514),
    [anon_sym_LT_POUNDglobal] = ACTIONS(514),
    [sym_end_global] = ACTIONS(514),
    [anon_sym_LT_POUNDlocal] = ACTIONS(514),
    [sym_end_local] = ACTIONS(514),
  },
  [132] = {
    [sym_directive] = STATE(131),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_function_middle] = STATE(234),
    [sym_return] = STATE(131),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_function_repeat1] = STATE(234),
    [anon_sym_LT_AT] = ACTIONS(9),
    [anon_sym_LT_POUNDlist] = ACTIONS(11),
    [anon_sym_LT_POUNDif] = ACTIONS(13),
    [anon_sym_LT_POUNDswitch] = ACTIONS(15),
    [anon_sym_LT_POUNDfunction] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(516),
    [anon_sym_LT_POUNDreturn] = ACTIONS(229),
    [anon_sym_LT_POUNDmacro] = ACTIONS(19),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(21),
    [sym_fallback] = ACTIONS(23),
    [sym_flush] = ACTIONS(23),
    [anon_sym_LT_POUNDftl] = ACTIONS(25),
    [anon_sym_LT_POUNDimport] = ACTIONS(27),
    [anon_sym_LT_POUNDinclude] = ACTIONS(29),
    [sym_lt] = ACTIONS(23),
    [sym_nt] = ACTIONS(23),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(31),
    [sym_rt] = ACTIONS(23),
    [anon_sym_LT_POUNDsetting] = ACTIONS(33),
    [sym_stop] = ACTIONS(23),
    [sym_t] = ACTIONS(23),
    [anon_sym_LT_POUNDvisit] = ACTIONS(35),
    [anon_sym_LT_POUNDassign] = ACTIONS(37),
    [sym_end_assign] = ACTIONS(39),
    [anon_sym_LT_POUNDglobal] = ACTIONS(41),
    [sym_end_global] = ACTIONS(43),
    [anon_sym_LT_POUNDlocal] = ACTIONS(45),
    [sym_end_local] = ACTIONS(47),
  },
  [133] = {
    [sym_directive] = STATE(131),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_function_middle] = STATE(235),
    [sym_return] = STATE(131),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_function_repeat1] = STATE(235),
    [anon_sym_LT_AT] = ACTIONS(9),
    [anon_sym_LT_POUNDlist] = ACTIONS(11),
    [anon_sym_LT_POUNDif] = ACTIONS(13),
    [anon_sym_LT_POUNDswitch] = ACTIONS(15),
    [anon_sym_LT_POUNDfunction] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(516),
    [anon_sym_LT_POUNDreturn] = ACTIONS(229),
    [anon_sym_LT_POUNDmacro] = ACTIONS(19),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(21),
    [sym_fallback] = ACTIONS(23),
    [sym_flush] = ACTIONS(23),
    [anon_sym_LT_POUNDftl] = ACTIONS(25),
    [anon_sym_LT_POUNDimport] = ACTIONS(27),
    [anon_sym_LT_POUNDinclude] = ACTIONS(29),
    [sym_lt] = ACTIONS(23),
    [sym_nt] = ACTIONS(23),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(31),
    [sym_rt] = ACTIONS(23),
    [anon_sym_LT_POUNDsetting] = ACTIONS(33),
    [sym_stop] = ACTIONS(23),
    [sym_t] = ACTIONS(23),
    [anon_sym_LT_POUNDvisit] = ACTIONS(35),
    [anon_sym_LT_POUNDassign] = ACTIONS(37),
    [sym_end_assign] = ACTIONS(39),
    [anon_sym_LT_POUNDglobal] = ACTIONS(41),
    [sym_end_global] = ACTIONS(43),
    [anon_sym_LT_POUNDlocal] = ACTIONS(45),
    [sym_end_local] = ACTIONS(47),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(518),
    [sym_comment] = ACTIONS(518),
    [anon_sym_LT_AT] = ACTIONS(518),
    [anon_sym_LT_POUNDlist] = ACTIONS(518),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(518),
    [sym_break] = ACTIONS(518),
    [sym_continue] = ACTIONS(518),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(518),
    [anon_sym_LT_POUNDitems] = ACTIONS(518),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(518),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(518),
    [anon_sym_LT_POUNDif] = ACTIONS(518),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(518),
    [anon_sym_LT_POUNDelseif] = ACTIONS(518),
    [anon_sym_LT_POUNDswitch] = ACTIONS(518),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(518),
    [anon_sym_LT_POUNDcase] = ACTIONS(518),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(518),
    [anon_sym_LT_POUNDfunction] = ACTIONS(518),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(518),
    [anon_sym_LT_POUNDreturn] = ACTIONS(518),
    [anon_sym_LT_POUNDmacro] = ACTIONS(518),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(518),
    [anon_sym_LT_POUNDnested] = ACTIONS(518),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(518),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(518),
    [sym_recover] = ACTIONS(518),
    [sym_fallback] = ACTIONS(518),
    [sym_flush] = ACTIONS(518),
    [anon_sym_LT_POUNDftl] = ACTIONS(518),
    [anon_sym_LT_POUNDimport] = ACTIONS(518),
    [anon_sym_LT_POUNDinclude] = ACTIONS(518),
    [sym_lt] = ACTIONS(518),
    [sym_nt] = ACTIONS(518),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(518),
    [sym_rt] = ACTIONS(518),
    [anon_sym_LT_POUNDsetting] = ACTIONS(518),
    [sym_stop] = ACTIONS(518),
    [sym_t] = ACTIONS(518),
    [anon_sym_LT_POUNDvisit] = ACTIONS(518),
    [anon_sym_LT_POUNDassign] = ACTIONS(518),
    [sym_end_assign] = ACTIONS(518),
    [anon_sym_LT_POUNDglobal] = ACTIONS(518),
    [sym_end_global] = ACTIONS(518),
    [anon_sym_LT_POUNDlocal] = ACTIONS(518),
    [sym_end_local] = ACTIONS(518),
  },
  [135] = {
    [sym_parameter_group] = STATE(237),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(39),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(39),
    [aux_sym_group_repeat1] = STATE(237),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(520),
  },
  [136] = {
    [anon_sym_LT_AT] = ACTIONS(522),
    [anon_sym_LT_POUNDlist] = ACTIONS(522),
    [anon_sym_LT_POUNDif] = ACTIONS(522),
    [anon_sym_LT_POUNDswitch] = ACTIONS(522),
    [anon_sym_LT_POUNDfunction] = ACTIONS(522),
    [anon_sym_LT_POUNDreturn] = ACTIONS(522),
    [anon_sym_LT_POUNDmacro] = ACTIONS(522),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(522),
    [anon_sym_LT_POUNDnested] = ACTIONS(522),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(522),
    [sym_fallback] = ACTIONS(522),
    [sym_flush] = ACTIONS(522),
    [anon_sym_LT_POUNDftl] = ACTIONS(522),
    [anon_sym_LT_POUNDimport] = ACTIONS(522),
    [anon_sym_LT_POUNDinclude] = ACTIONS(522),
    [sym_lt] = ACTIONS(522),
    [sym_nt] = ACTIONS(522),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(522),
    [sym_rt] = ACTIONS(522),
    [anon_sym_LT_POUNDsetting] = ACTIONS(522),
    [sym_stop] = ACTIONS(522),
    [sym_t] = ACTIONS(522),
    [anon_sym_LT_POUNDvisit] = ACTIONS(522),
    [anon_sym_LT_POUNDassign] = ACTIONS(522),
    [sym_end_assign] = ACTIONS(522),
    [anon_sym_LT_POUNDglobal] = ACTIONS(522),
    [sym_end_global] = ACTIONS(522),
    [anon_sym_LT_POUNDlocal] = ACTIONS(522),
    [sym_end_local] = ACTIONS(522),
  },
  [137] = {
    [sym_directive] = STATE(136),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_return] = STATE(136),
    [sym_macro] = STATE(9),
    [sym_macro_middle] = STATE(239),
    [sym_nested] = STATE(136),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_macro_repeat1] = STATE(239),
    [anon_sym_LT_AT] = ACTIONS(9),
    [anon_sym_LT_POUNDlist] = ACTIONS(11),
    [anon_sym_LT_POUNDif] = ACTIONS(13),
    [anon_sym_LT_POUNDswitch] = ACTIONS(15),
    [anon_sym_LT_POUNDfunction] = ACTIONS(17),
    [anon_sym_LT_POUNDreturn] = ACTIONS(229),
    [anon_sym_LT_POUNDmacro] = ACTIONS(19),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(524),
    [anon_sym_LT_POUNDnested] = ACTIONS(235),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(21),
    [sym_fallback] = ACTIONS(23),
    [sym_flush] = ACTIONS(23),
    [anon_sym_LT_POUNDftl] = ACTIONS(25),
    [anon_sym_LT_POUNDimport] = ACTIONS(27),
    [anon_sym_LT_POUNDinclude] = ACTIONS(29),
    [sym_lt] = ACTIONS(23),
    [sym_nt] = ACTIONS(23),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(31),
    [sym_rt] = ACTIONS(23),
    [anon_sym_LT_POUNDsetting] = ACTIONS(33),
    [sym_stop] = ACTIONS(23),
    [sym_t] = ACTIONS(23),
    [anon_sym_LT_POUNDvisit] = ACTIONS(35),
    [anon_sym_LT_POUNDassign] = ACTIONS(37),
    [sym_end_assign] = ACTIONS(39),
    [anon_sym_LT_POUNDglobal] = ACTIONS(41),
    [sym_end_global] = ACTIONS(43),
    [anon_sym_LT_POUNDlocal] = ACTIONS(45),
    [sym_end_local] = ACTIONS(47),
  },
  [138] = {
    [sym_directive] = STATE(136),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_return] = STATE(136),
    [sym_macro] = STATE(9),
    [sym_macro_middle] = STATE(240),
    [sym_nested] = STATE(136),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_macro_repeat1] = STATE(240),
    [anon_sym_LT_AT] = ACTIONS(9),
    [anon_sym_LT_POUNDlist] = ACTIONS(11),
    [anon_sym_LT_POUNDif] = ACTIONS(13),
    [anon_sym_LT_POUNDswitch] = ACTIONS(15),
    [anon_sym_LT_POUNDfunction] = ACTIONS(17),
    [anon_sym_LT_POUNDreturn] = ACTIONS(229),
    [anon_sym_LT_POUNDmacro] = ACTIONS(19),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(524),
    [anon_sym_LT_POUNDnested] = ACTIONS(235),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(21),
    [sym_fallback] = ACTIONS(23),
    [sym_flush] = ACTIONS(23),
    [anon_sym_LT_POUNDftl] = ACTIONS(25),
    [anon_sym_LT_POUNDimport] = ACTIONS(27),
    [anon_sym_LT_POUNDinclude] = ACTIONS(29),
    [sym_lt] = ACTIONS(23),
    [sym_nt] = ACTIONS(23),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(31),
    [sym_rt] = ACTIONS(23),
    [anon_sym_LT_POUNDsetting] = ACTIONS(33),
    [sym_stop] = ACTIONS(23),
    [sym_t] = ACTIONS(23),
    [anon_sym_LT_POUNDvisit] = ACTIONS(35),
    [anon_sym_LT_POUNDassign] = ACTIONS(37),
    [sym_end_assign] = ACTIONS(39),
    [anon_sym_LT_POUNDglobal] = ACTIONS(41),
    [sym_end_global] = ACTIONS(43),
    [anon_sym_LT_POUNDlocal] = ACTIONS(45),
    [sym_end_local] = ACTIONS(47),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(526),
    [sym_comment] = ACTIONS(526),
    [anon_sym_LT_AT] = ACTIONS(526),
    [anon_sym_LT_POUNDlist] = ACTIONS(526),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(526),
    [sym_break] = ACTIONS(526),
    [sym_continue] = ACTIONS(526),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(526),
    [anon_sym_LT_POUNDitems] = ACTIONS(526),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(526),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(526),
    [anon_sym_LT_POUNDif] = ACTIONS(526),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(526),
    [anon_sym_LT_POUNDelseif] = ACTIONS(526),
    [anon_sym_LT_POUNDswitch] = ACTIONS(526),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(526),
    [anon_sym_LT_POUNDcase] = ACTIONS(526),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(526),
    [anon_sym_LT_POUNDfunction] = ACTIONS(526),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(526),
    [anon_sym_LT_POUNDreturn] = ACTIONS(526),
    [anon_sym_LT_POUNDmacro] = ACTIONS(526),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(526),
    [anon_sym_LT_POUNDnested] = ACTIONS(526),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(526),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(526),
    [sym_recover] = ACTIONS(526),
    [sym_fallback] = ACTIONS(526),
    [sym_flush] = ACTIONS(526),
    [anon_sym_LT_POUNDftl] = ACTIONS(526),
    [anon_sym_LT_POUNDimport] = ACTIONS(526),
    [anon_sym_LT_POUNDinclude] = ACTIONS(526),
    [sym_lt] = ACTIONS(526),
    [sym_nt] = ACTIONS(526),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(526),
    [sym_rt] = ACTIONS(526),
    [anon_sym_LT_POUNDsetting] = ACTIONS(526),
    [sym_stop] = ACTIONS(526),
    [sym_t] = ACTIONS(526),
    [anon_sym_LT_POUNDvisit] = ACTIONS(526),
    [anon_sym_LT_POUNDassign] = ACTIONS(526),
    [sym_end_assign] = ACTIONS(526),
    [anon_sym_LT_POUNDglobal] = ACTIONS(526),
    [sym_end_global] = ACTIONS(526),
    [anon_sym_LT_POUNDlocal] = ACTIONS(526),
    [sym_end_local] = ACTIONS(526),
  },
  [140] = {
    [sym_directive] = STATE(47),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_attempt_middle] = STATE(140),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_attempt_repeat1] = STATE(140),
    [anon_sym_LT_AT] = ACTIONS(528),
    [anon_sym_LT_POUNDlist] = ACTIONS(531),
    [anon_sym_LT_POUNDif] = ACTIONS(534),
    [anon_sym_LT_POUNDswitch] = ACTIONS(537),
    [anon_sym_LT_POUNDfunction] = ACTIONS(540),
    [anon_sym_LT_POUNDmacro] = ACTIONS(543),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(546),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(549),
    [sym_recover] = ACTIONS(551),
    [sym_fallback] = ACTIONS(554),
    [sym_flush] = ACTIONS(554),
    [anon_sym_LT_POUNDftl] = ACTIONS(557),
    [anon_sym_LT_POUNDimport] = ACTIONS(560),
    [anon_sym_LT_POUNDinclude] = ACTIONS(563),
    [sym_lt] = ACTIONS(554),
    [sym_nt] = ACTIONS(554),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(566),
    [sym_rt] = ACTIONS(554),
    [anon_sym_LT_POUNDsetting] = ACTIONS(569),
    [sym_stop] = ACTIONS(554),
    [sym_t] = ACTIONS(554),
    [anon_sym_LT_POUNDvisit] = ACTIONS(572),
    [anon_sym_LT_POUNDassign] = ACTIONS(575),
    [sym_end_assign] = ACTIONS(578),
    [anon_sym_LT_POUNDglobal] = ACTIONS(581),
    [sym_end_global] = ACTIONS(584),
    [anon_sym_LT_POUNDlocal] = ACTIONS(587),
    [sym_end_local] = ACTIONS(590),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(593),
    [sym_comment] = ACTIONS(593),
    [anon_sym_LT_AT] = ACTIONS(593),
    [anon_sym_LT_POUNDlist] = ACTIONS(593),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(593),
    [sym_break] = ACTIONS(593),
    [sym_continue] = ACTIONS(593),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(593),
    [anon_sym_LT_POUNDitems] = ACTIONS(593),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(593),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(593),
    [anon_sym_LT_POUNDif] = ACTIONS(593),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(593),
    [anon_sym_LT_POUNDelseif] = ACTIONS(593),
    [anon_sym_LT_POUNDswitch] = ACTIONS(593),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(593),
    [anon_sym_LT_POUNDcase] = ACTIONS(593),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(593),
    [anon_sym_LT_POUNDfunction] = ACTIONS(593),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(593),
    [anon_sym_LT_POUNDreturn] = ACTIONS(593),
    [anon_sym_LT_POUNDmacro] = ACTIONS(593),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(593),
    [anon_sym_LT_POUNDnested] = ACTIONS(593),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(593),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(593),
    [sym_recover] = ACTIONS(593),
    [sym_fallback] = ACTIONS(593),
    [sym_flush] = ACTIONS(593),
    [anon_sym_LT_POUNDftl] = ACTIONS(593),
    [anon_sym_LT_POUNDimport] = ACTIONS(593),
    [anon_sym_LT_POUNDinclude] = ACTIONS(593),
    [sym_lt] = ACTIONS(593),
    [sym_nt] = ACTIONS(593),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(593),
    [sym_rt] = ACTIONS(593),
    [anon_sym_LT_POUNDsetting] = ACTIONS(593),
    [sym_stop] = ACTIONS(593),
    [sym_t] = ACTIONS(593),
    [anon_sym_LT_POUNDvisit] = ACTIONS(593),
    [anon_sym_LT_POUNDassign] = ACTIONS(593),
    [sym_end_assign] = ACTIONS(593),
    [anon_sym_LT_POUNDglobal] = ACTIONS(593),
    [sym_end_global] = ACTIONS(593),
    [anon_sym_LT_POUNDlocal] = ACTIONS(593),
    [sym_end_local] = ACTIONS(593),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(595),
    [sym_comment] = ACTIONS(595),
    [anon_sym_LT_AT] = ACTIONS(595),
    [anon_sym_LT_POUNDlist] = ACTIONS(595),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(595),
    [sym_break] = ACTIONS(595),
    [sym_continue] = ACTIONS(595),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(595),
    [anon_sym_LT_POUNDitems] = ACTIONS(595),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(595),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(595),
    [anon_sym_LT_POUNDif] = ACTIONS(595),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(595),
    [anon_sym_LT_POUNDelseif] = ACTIONS(595),
    [anon_sym_LT_POUNDswitch] = ACTIONS(595),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(595),
    [anon_sym_LT_POUNDcase] = ACTIONS(595),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(595),
    [anon_sym_LT_POUNDfunction] = ACTIONS(595),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(595),
    [anon_sym_LT_POUNDreturn] = ACTIONS(595),
    [anon_sym_LT_POUNDmacro] = ACTIONS(595),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(595),
    [anon_sym_LT_POUNDnested] = ACTIONS(595),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(595),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(595),
    [sym_recover] = ACTIONS(595),
    [sym_fallback] = ACTIONS(595),
    [sym_flush] = ACTIONS(595),
    [anon_sym_LT_POUNDftl] = ACTIONS(595),
    [anon_sym_LT_POUNDimport] = ACTIONS(595),
    [anon_sym_LT_POUNDinclude] = ACTIONS(595),
    [sym_lt] = ACTIONS(595),
    [sym_nt] = ACTIONS(595),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(595),
    [sym_rt] = ACTIONS(595),
    [anon_sym_LT_POUNDsetting] = ACTIONS(595),
    [sym_stop] = ACTIONS(595),
    [sym_t] = ACTIONS(595),
    [anon_sym_LT_POUNDvisit] = ACTIONS(595),
    [anon_sym_LT_POUNDassign] = ACTIONS(595),
    [sym_end_assign] = ACTIONS(595),
    [anon_sym_LT_POUNDglobal] = ACTIONS(595),
    [sym_end_global] = ACTIONS(595),
    [anon_sym_LT_POUNDlocal] = ACTIONS(595),
    [sym_end_local] = ACTIONS(595),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(597),
    [sym_comment] = ACTIONS(597),
    [anon_sym_LT_AT] = ACTIONS(597),
    [anon_sym_LT_POUNDlist] = ACTIONS(597),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(597),
    [sym_break] = ACTIONS(597),
    [sym_continue] = ACTIONS(597),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(597),
    [anon_sym_LT_POUNDitems] = ACTIONS(597),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(597),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(597),
    [anon_sym_LT_POUNDif] = ACTIONS(597),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(597),
    [anon_sym_LT_POUNDelseif] = ACTIONS(597),
    [anon_sym_LT_POUNDswitch] = ACTIONS(597),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(597),
    [anon_sym_LT_POUNDcase] = ACTIONS(597),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(597),
    [anon_sym_LT_POUNDfunction] = ACTIONS(597),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(597),
    [anon_sym_LT_POUNDreturn] = ACTIONS(597),
    [anon_sym_LT_POUNDmacro] = ACTIONS(597),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(597),
    [anon_sym_LT_POUNDnested] = ACTIONS(597),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(597),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(597),
    [sym_recover] = ACTIONS(597),
    [sym_fallback] = ACTIONS(597),
    [sym_flush] = ACTIONS(597),
    [anon_sym_LT_POUNDftl] = ACTIONS(597),
    [anon_sym_LT_POUNDimport] = ACTIONS(597),
    [anon_sym_LT_POUNDinclude] = ACTIONS(597),
    [sym_lt] = ACTIONS(597),
    [sym_nt] = ACTIONS(597),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(597),
    [sym_rt] = ACTIONS(597),
    [anon_sym_LT_POUNDsetting] = ACTIONS(597),
    [sym_stop] = ACTIONS(597),
    [sym_t] = ACTIONS(597),
    [anon_sym_LT_POUNDvisit] = ACTIONS(597),
    [anon_sym_LT_POUNDassign] = ACTIONS(597),
    [sym_end_assign] = ACTIONS(597),
    [anon_sym_LT_POUNDglobal] = ACTIONS(597),
    [sym_end_global] = ACTIONS(597),
    [anon_sym_LT_POUNDlocal] = ACTIONS(597),
    [sym_end_local] = ACTIONS(597),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(599),
    [sym_comment] = ACTIONS(599),
    [anon_sym_LT_AT] = ACTIONS(599),
    [anon_sym_LT_POUNDlist] = ACTIONS(599),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(599),
    [sym_break] = ACTIONS(599),
    [sym_continue] = ACTIONS(599),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(599),
    [anon_sym_LT_POUNDitems] = ACTIONS(599),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(599),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(599),
    [anon_sym_LT_POUNDif] = ACTIONS(599),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(599),
    [anon_sym_LT_POUNDelseif] = ACTIONS(599),
    [anon_sym_LT_POUNDswitch] = ACTIONS(599),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(599),
    [anon_sym_LT_POUNDcase] = ACTIONS(599),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(599),
    [anon_sym_LT_POUNDfunction] = ACTIONS(599),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(599),
    [anon_sym_LT_POUNDreturn] = ACTIONS(599),
    [anon_sym_LT_POUNDmacro] = ACTIONS(599),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(599),
    [anon_sym_LT_POUNDnested] = ACTIONS(599),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(599),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(599),
    [sym_recover] = ACTIONS(599),
    [sym_fallback] = ACTIONS(599),
    [sym_flush] = ACTIONS(599),
    [anon_sym_LT_POUNDftl] = ACTIONS(599),
    [anon_sym_LT_POUNDimport] = ACTIONS(599),
    [anon_sym_LT_POUNDinclude] = ACTIONS(599),
    [sym_lt] = ACTIONS(599),
    [sym_nt] = ACTIONS(599),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(599),
    [sym_rt] = ACTIONS(599),
    [anon_sym_LT_POUNDsetting] = ACTIONS(599),
    [sym_stop] = ACTIONS(599),
    [sym_t] = ACTIONS(599),
    [anon_sym_LT_POUNDvisit] = ACTIONS(599),
    [anon_sym_LT_POUNDassign] = ACTIONS(599),
    [sym_end_assign] = ACTIONS(599),
    [anon_sym_LT_POUNDglobal] = ACTIONS(599),
    [sym_end_global] = ACTIONS(599),
    [anon_sym_LT_POUNDlocal] = ACTIONS(599),
    [sym_end_local] = ACTIONS(599),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(601),
    [sym_comment] = ACTIONS(601),
    [anon_sym_LT_AT] = ACTIONS(601),
    [anon_sym_LT_POUNDlist] = ACTIONS(601),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(601),
    [sym_break] = ACTIONS(601),
    [sym_continue] = ACTIONS(601),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(601),
    [anon_sym_LT_POUNDitems] = ACTIONS(601),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(601),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(601),
    [anon_sym_LT_POUNDif] = ACTIONS(601),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(601),
    [anon_sym_LT_POUNDelseif] = ACTIONS(601),
    [anon_sym_LT_POUNDswitch] = ACTIONS(601),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(601),
    [anon_sym_LT_POUNDcase] = ACTIONS(601),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(601),
    [anon_sym_LT_POUNDfunction] = ACTIONS(601),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(601),
    [anon_sym_LT_POUNDreturn] = ACTIONS(601),
    [anon_sym_LT_POUNDmacro] = ACTIONS(601),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(601),
    [anon_sym_LT_POUNDnested] = ACTIONS(601),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(601),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(601),
    [sym_recover] = ACTIONS(601),
    [sym_fallback] = ACTIONS(601),
    [sym_flush] = ACTIONS(601),
    [anon_sym_LT_POUNDftl] = ACTIONS(601),
    [anon_sym_LT_POUNDimport] = ACTIONS(601),
    [anon_sym_LT_POUNDinclude] = ACTIONS(601),
    [sym_lt] = ACTIONS(601),
    [sym_nt] = ACTIONS(601),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(601),
    [sym_rt] = ACTIONS(601),
    [anon_sym_LT_POUNDsetting] = ACTIONS(601),
    [sym_stop] = ACTIONS(601),
    [sym_t] = ACTIONS(601),
    [anon_sym_LT_POUNDvisit] = ACTIONS(601),
    [anon_sym_LT_POUNDassign] = ACTIONS(601),
    [sym_end_assign] = ACTIONS(601),
    [anon_sym_LT_POUNDglobal] = ACTIONS(601),
    [sym_end_global] = ACTIONS(601),
    [anon_sym_LT_POUNDlocal] = ACTIONS(601),
    [sym_end_local] = ACTIONS(601),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(603),
    [sym_comment] = ACTIONS(603),
    [anon_sym_LT_AT] = ACTIONS(603),
    [anon_sym_LT_POUNDlist] = ACTIONS(603),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(603),
    [sym_break] = ACTIONS(603),
    [sym_continue] = ACTIONS(603),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(603),
    [anon_sym_LT_POUNDitems] = ACTIONS(603),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(603),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(603),
    [anon_sym_LT_POUNDif] = ACTIONS(603),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(603),
    [anon_sym_LT_POUNDelseif] = ACTIONS(603),
    [anon_sym_LT_POUNDswitch] = ACTIONS(603),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(603),
    [anon_sym_LT_POUNDcase] = ACTIONS(603),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(603),
    [anon_sym_LT_POUNDfunction] = ACTIONS(603),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(603),
    [anon_sym_LT_POUNDreturn] = ACTIONS(603),
    [anon_sym_LT_POUNDmacro] = ACTIONS(603),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(603),
    [anon_sym_LT_POUNDnested] = ACTIONS(603),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(603),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(603),
    [sym_recover] = ACTIONS(603),
    [sym_fallback] = ACTIONS(603),
    [sym_flush] = ACTIONS(603),
    [anon_sym_LT_POUNDftl] = ACTIONS(603),
    [anon_sym_LT_POUNDimport] = ACTIONS(603),
    [anon_sym_LT_POUNDinclude] = ACTIONS(603),
    [sym_lt] = ACTIONS(603),
    [sym_nt] = ACTIONS(603),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(603),
    [sym_rt] = ACTIONS(603),
    [anon_sym_LT_POUNDsetting] = ACTIONS(603),
    [sym_stop] = ACTIONS(603),
    [sym_t] = ACTIONS(603),
    [anon_sym_LT_POUNDvisit] = ACTIONS(603),
    [anon_sym_LT_POUNDassign] = ACTIONS(603),
    [sym_end_assign] = ACTIONS(603),
    [anon_sym_LT_POUNDglobal] = ACTIONS(603),
    [sym_end_global] = ACTIONS(603),
    [anon_sym_LT_POUNDlocal] = ACTIONS(603),
    [sym_end_local] = ACTIONS(603),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(605),
    [sym_comment] = ACTIONS(605),
    [anon_sym_LT_AT] = ACTIONS(605),
    [anon_sym_LT_POUNDlist] = ACTIONS(605),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(605),
    [sym_break] = ACTIONS(605),
    [sym_continue] = ACTIONS(605),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(605),
    [anon_sym_LT_POUNDitems] = ACTIONS(605),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(605),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(605),
    [anon_sym_LT_POUNDif] = ACTIONS(605),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(605),
    [anon_sym_LT_POUNDelseif] = ACTIONS(605),
    [anon_sym_LT_POUNDswitch] = ACTIONS(605),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(605),
    [anon_sym_LT_POUNDcase] = ACTIONS(605),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(605),
    [anon_sym_LT_POUNDfunction] = ACTIONS(605),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(605),
    [anon_sym_LT_POUNDreturn] = ACTIONS(605),
    [anon_sym_LT_POUNDmacro] = ACTIONS(605),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(605),
    [anon_sym_LT_POUNDnested] = ACTIONS(605),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(605),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(605),
    [sym_recover] = ACTIONS(605),
    [sym_fallback] = ACTIONS(605),
    [sym_flush] = ACTIONS(605),
    [anon_sym_LT_POUNDftl] = ACTIONS(605),
    [anon_sym_LT_POUNDimport] = ACTIONS(605),
    [anon_sym_LT_POUNDinclude] = ACTIONS(605),
    [sym_lt] = ACTIONS(605),
    [sym_nt] = ACTIONS(605),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(605),
    [sym_rt] = ACTIONS(605),
    [anon_sym_LT_POUNDsetting] = ACTIONS(605),
    [sym_stop] = ACTIONS(605),
    [sym_t] = ACTIONS(605),
    [anon_sym_LT_POUNDvisit] = ACTIONS(605),
    [anon_sym_LT_POUNDassign] = ACTIONS(605),
    [sym_end_assign] = ACTIONS(605),
    [anon_sym_LT_POUNDglobal] = ACTIONS(605),
    [sym_end_global] = ACTIONS(605),
    [anon_sym_LT_POUNDlocal] = ACTIONS(605),
    [sym_end_local] = ACTIONS(605),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(607),
    [sym_comment] = ACTIONS(607),
    [anon_sym_LT_AT] = ACTIONS(607),
    [anon_sym_LT_POUNDlist] = ACTIONS(607),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(607),
    [sym_break] = ACTIONS(607),
    [sym_continue] = ACTIONS(607),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(607),
    [anon_sym_LT_POUNDitems] = ACTIONS(607),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(607),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(607),
    [anon_sym_LT_POUNDif] = ACTIONS(607),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(607),
    [anon_sym_LT_POUNDelseif] = ACTIONS(607),
    [anon_sym_LT_POUNDswitch] = ACTIONS(607),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(607),
    [anon_sym_LT_POUNDcase] = ACTIONS(607),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(607),
    [anon_sym_LT_POUNDfunction] = ACTIONS(607),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(607),
    [anon_sym_LT_POUNDreturn] = ACTIONS(607),
    [anon_sym_LT_POUNDmacro] = ACTIONS(607),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(607),
    [anon_sym_LT_POUNDnested] = ACTIONS(607),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(607),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(607),
    [sym_recover] = ACTIONS(607),
    [sym_fallback] = ACTIONS(607),
    [sym_flush] = ACTIONS(607),
    [anon_sym_LT_POUNDftl] = ACTIONS(607),
    [anon_sym_LT_POUNDimport] = ACTIONS(607),
    [anon_sym_LT_POUNDinclude] = ACTIONS(607),
    [sym_lt] = ACTIONS(607),
    [sym_nt] = ACTIONS(607),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(607),
    [sym_rt] = ACTIONS(607),
    [anon_sym_LT_POUNDsetting] = ACTIONS(607),
    [sym_stop] = ACTIONS(607),
    [sym_t] = ACTIONS(607),
    [anon_sym_LT_POUNDvisit] = ACTIONS(607),
    [anon_sym_LT_POUNDassign] = ACTIONS(607),
    [sym_end_assign] = ACTIONS(607),
    [anon_sym_LT_POUNDglobal] = ACTIONS(607),
    [sym_end_global] = ACTIONS(607),
    [anon_sym_LT_POUNDlocal] = ACTIONS(607),
    [sym_end_local] = ACTIONS(607),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(609),
    [sym_comment] = ACTIONS(609),
    [anon_sym_LT_AT] = ACTIONS(609),
    [anon_sym_LT_POUNDlist] = ACTIONS(609),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(609),
    [sym_break] = ACTIONS(609),
    [sym_continue] = ACTIONS(609),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(609),
    [anon_sym_LT_POUNDitems] = ACTIONS(609),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(609),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(609),
    [anon_sym_LT_POUNDif] = ACTIONS(609),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(609),
    [anon_sym_LT_POUNDelseif] = ACTIONS(609),
    [anon_sym_LT_POUNDswitch] = ACTIONS(609),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(609),
    [anon_sym_LT_POUNDcase] = ACTIONS(609),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(609),
    [anon_sym_LT_POUNDfunction] = ACTIONS(609),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(609),
    [anon_sym_LT_POUNDreturn] = ACTIONS(609),
    [anon_sym_LT_POUNDmacro] = ACTIONS(609),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(609),
    [anon_sym_LT_POUNDnested] = ACTIONS(609),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(609),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(609),
    [sym_recover] = ACTIONS(609),
    [sym_fallback] = ACTIONS(609),
    [sym_flush] = ACTIONS(609),
    [anon_sym_LT_POUNDftl] = ACTIONS(609),
    [anon_sym_LT_POUNDimport] = ACTIONS(609),
    [anon_sym_LT_POUNDinclude] = ACTIONS(609),
    [sym_lt] = ACTIONS(609),
    [sym_nt] = ACTIONS(609),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(609),
    [sym_rt] = ACTIONS(609),
    [anon_sym_LT_POUNDsetting] = ACTIONS(609),
    [sym_stop] = ACTIONS(609),
    [sym_t] = ACTIONS(609),
    [anon_sym_LT_POUNDvisit] = ACTIONS(609),
    [anon_sym_LT_POUNDassign] = ACTIONS(609),
    [sym_end_assign] = ACTIONS(609),
    [anon_sym_LT_POUNDglobal] = ACTIONS(609),
    [sym_end_global] = ACTIONS(609),
    [anon_sym_LT_POUNDlocal] = ACTIONS(609),
    [sym_end_local] = ACTIONS(609),
  },
  [150] = {
    [sym_type] = STATE(241),
    [sym_string] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_sequence] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_top_level] = STATE(113),
    [sym_spec_var] = STATE(113),
    [aux_sym_as_expression_repeat2] = STATE(241),
    [anon_sym_as] = ACTIONS(463),
    [anon_sym_QMARK] = ACTIONS(368),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(368),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(368),
    [sym_number] = ACTIONS(463),
    [anon_sym_true] = ACTIONS(463),
    [anon_sym_LBRACK] = ACTIONS(368),
    [anon_sym_LBRACE] = ACTIONS(368),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(463),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(368),
    [anon_sym_GT] = ACTIONS(368),
    [anon_sym_SLASH_GT] = ACTIONS(368),
  },
  [151] = {
    [anon_sym_as] = ACTIONS(372),
    [anon_sym_QMARK] = ACTIONS(372),
    [anon_sym_using] = ACTIONS(372),
    [anon_sym_COMMA] = ACTIONS(374),
    [anon_sym_DOT_DOT] = ACTIONS(372),
    [anon_sym_DOT_DOT_LT] = ACTIONS(374),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(374),
    [anon_sym_COLON] = ACTIONS(374),
    [anon_sym_STAR] = ACTIONS(372),
    [anon_sym_PLUS] = ACTIONS(372),
    [anon_sym_SLASH] = ACTIONS(372),
    [anon_sym_DASH] = ACTIONS(372),
    [anon_sym_PERCENT] = ACTIONS(372),
    [anon_sym_EQ_EQ] = ACTIONS(374),
    [anon_sym_BANG_EQ] = ACTIONS(374),
    [anon_sym_LT] = ACTIONS(372),
    [anon_sym_LT_EQ] = ACTIONS(374),
    [anon_sym_lt] = ACTIONS(372),
    [anon_sym_lte] = ACTIONS(372),
    [anon_sym_gt] = ACTIONS(372),
    [anon_sym_gte] = ACTIONS(372),
    [anon_sym_BANG] = ACTIONS(372),
    [anon_sym_AMP_AMP] = ACTIONS(374),
    [anon_sym_PIPE_PIPE] = ACTIONS(374),
    [anon_sym_QMARK_QMARK] = ACTIONS(374),
    [anon_sym_EQ] = ACTIONS(372),
    [anon_sym_PLUS_EQ] = ACTIONS(374),
    [anon_sym_DASH_EQ] = ACTIONS(374),
    [anon_sym_STAR_EQ] = ACTIONS(374),
    [anon_sym_SLASH_EQ] = ACTIONS(374),
    [anon_sym_PERCENT_EQ] = ACTIONS(374),
    [anon_sym_PLUS_PLUS] = ACTIONS(374),
    [anon_sym_DASH_DASH] = ACTIONS(374),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(374),
    [sym_number] = ACTIONS(372),
    [anon_sym_true] = ACTIONS(372),
    [anon_sym_LBRACK] = ACTIONS(374),
    [anon_sym_LBRACE] = ACTIONS(374),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(372),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(374),
    [anon_sym_GT] = ACTIONS(374),
    [anon_sym_SLASH_GT] = ACTIONS(374),
  },
  [152] = {
    [anon_sym_as] = ACTIONS(380),
    [anon_sym_QMARK] = ACTIONS(380),
    [anon_sym_using] = ACTIONS(380),
    [anon_sym_COMMA] = ACTIONS(382),
    [anon_sym_DOT_DOT] = ACTIONS(380),
    [anon_sym_DOT_DOT_LT] = ACTIONS(382),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(382),
    [anon_sym_COLON] = ACTIONS(382),
    [anon_sym_STAR] = ACTIONS(380),
    [anon_sym_PLUS] = ACTIONS(380),
    [anon_sym_SLASH] = ACTIONS(380),
    [anon_sym_DASH] = ACTIONS(380),
    [anon_sym_PERCENT] = ACTIONS(380),
    [anon_sym_EQ_EQ] = ACTIONS(382),
    [anon_sym_BANG_EQ] = ACTIONS(382),
    [anon_sym_LT] = ACTIONS(380),
    [anon_sym_LT_EQ] = ACTIONS(382),
    [anon_sym_lt] = ACTIONS(380),
    [anon_sym_lte] = ACTIONS(380),
    [anon_sym_gt] = ACTIONS(380),
    [anon_sym_gte] = ACTIONS(380),
    [anon_sym_BANG] = ACTIONS(380),
    [anon_sym_AMP_AMP] = ACTIONS(382),
    [anon_sym_PIPE_PIPE] = ACTIONS(382),
    [anon_sym_QMARK_QMARK] = ACTIONS(382),
    [anon_sym_EQ] = ACTIONS(380),
    [anon_sym_PLUS_EQ] = ACTIONS(382),
    [anon_sym_DASH_EQ] = ACTIONS(382),
    [anon_sym_STAR_EQ] = ACTIONS(382),
    [anon_sym_SLASH_EQ] = ACTIONS(382),
    [anon_sym_PERCENT_EQ] = ACTIONS(382),
    [anon_sym_PLUS_PLUS] = ACTIONS(382),
    [anon_sym_DASH_DASH] = ACTIONS(382),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(382),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(382),
    [sym_number] = ACTIONS(380),
    [anon_sym_true] = ACTIONS(380),
    [anon_sym_LBRACK] = ACTIONS(382),
    [anon_sym_LBRACE] = ACTIONS(382),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(380),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(382),
    [anon_sym_GT] = ACTIONS(382),
    [anon_sym_SLASH_GT] = ACTIONS(382),
  },
  [153] = {
    [sym_expression] = STATE(97),
    [sym_type] = STATE(98),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_top_level] = STATE(90),
    [sym_spec_var] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(98),
    [aux_sym_sequence_repeat1] = STATE(188),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(157),
    [sym_number] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(611),
    [anon_sym_LBRACE] = ACTIONS(167),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(171),
  },
  [154] = {
    [anon_sym_as] = ACTIONS(396),
    [anon_sym_QMARK] = ACTIONS(396),
    [anon_sym_using] = ACTIONS(396),
    [anon_sym_COMMA] = ACTIONS(398),
    [anon_sym_DOT_DOT] = ACTIONS(396),
    [anon_sym_DOT_DOT_LT] = ACTIONS(398),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(398),
    [anon_sym_COLON] = ACTIONS(398),
    [anon_sym_STAR] = ACTIONS(396),
    [anon_sym_PLUS] = ACTIONS(396),
    [anon_sym_SLASH] = ACTIONS(396),
    [anon_sym_DASH] = ACTIONS(396),
    [anon_sym_PERCENT] = ACTIONS(396),
    [anon_sym_EQ_EQ] = ACTIONS(398),
    [anon_sym_BANG_EQ] = ACTIONS(398),
    [anon_sym_LT] = ACTIONS(396),
    [anon_sym_LT_EQ] = ACTIONS(398),
    [anon_sym_lt] = ACTIONS(396),
    [anon_sym_lte] = ACTIONS(396),
    [anon_sym_gt] = ACTIONS(396),
    [anon_sym_gte] = ACTIONS(396),
    [anon_sym_BANG] = ACTIONS(396),
    [anon_sym_AMP_AMP] = ACTIONS(398),
    [anon_sym_PIPE_PIPE] = ACTIONS(398),
    [anon_sym_QMARK_QMARK] = ACTIONS(398),
    [anon_sym_EQ] = ACTIONS(396),
    [anon_sym_PLUS_EQ] = ACTIONS(398),
    [anon_sym_DASH_EQ] = ACTIONS(398),
    [anon_sym_STAR_EQ] = ACTIONS(398),
    [anon_sym_SLASH_EQ] = ACTIONS(398),
    [anon_sym_PERCENT_EQ] = ACTIONS(398),
    [anon_sym_PLUS_PLUS] = ACTIONS(398),
    [anon_sym_DASH_DASH] = ACTIONS(398),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(398),
    [sym_number] = ACTIONS(396),
    [anon_sym_true] = ACTIONS(396),
    [anon_sym_LBRACK] = ACTIONS(398),
    [anon_sym_LBRACE] = ACTIONS(398),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(398),
    [anon_sym_GT] = ACTIONS(398),
    [anon_sym_SLASH_GT] = ACTIONS(398),
  },
  [155] = {
    [sym_expression] = STATE(193),
    [sym_type] = STATE(101),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_top_level] = STATE(90),
    [sym_spec_var] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(101),
    [aux_sym_hash_repeat1] = STATE(193),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(157),
    [sym_number] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_RBRACE] = ACTIONS(613),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(171),
  },
  [156] = {
    [sym_parameter_group] = STATE(245),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(196),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(196),
    [aux_sym_group_repeat1] = STATE(245),
    [anon_sym_as] = ACTIONS(402),
    [anon_sym_QMARK] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(615),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
  },
  [157] = {
    [anon_sym_as] = ACTIONS(406),
    [anon_sym_QMARK] = ACTIONS(406),
    [anon_sym_using] = ACTIONS(406),
    [anon_sym_COMMA] = ACTIONS(408),
    [anon_sym_DOT_DOT] = ACTIONS(406),
    [anon_sym_DOT_DOT_LT] = ACTIONS(408),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(408),
    [anon_sym_COLON] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(406),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_SLASH] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(406),
    [anon_sym_PERCENT] = ACTIONS(406),
    [anon_sym_EQ_EQ] = ACTIONS(408),
    [anon_sym_BANG_EQ] = ACTIONS(408),
    [anon_sym_LT] = ACTIONS(406),
    [anon_sym_LT_EQ] = ACTIONS(408),
    [anon_sym_lt] = ACTIONS(406),
    [anon_sym_lte] = ACTIONS(406),
    [anon_sym_gt] = ACTIONS(406),
    [anon_sym_gte] = ACTIONS(406),
    [anon_sym_BANG] = ACTIONS(406),
    [anon_sym_AMP_AMP] = ACTIONS(408),
    [anon_sym_PIPE_PIPE] = ACTIONS(408),
    [anon_sym_QMARK_QMARK] = ACTIONS(408),
    [anon_sym_EQ] = ACTIONS(406),
    [anon_sym_PLUS_EQ] = ACTIONS(408),
    [anon_sym_DASH_EQ] = ACTIONS(408),
    [anon_sym_STAR_EQ] = ACTIONS(408),
    [anon_sym_SLASH_EQ] = ACTIONS(408),
    [anon_sym_PERCENT_EQ] = ACTIONS(408),
    [anon_sym_PLUS_PLUS] = ACTIONS(408),
    [anon_sym_DASH_DASH] = ACTIONS(408),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(408),
    [sym_number] = ACTIONS(406),
    [anon_sym_true] = ACTIONS(406),
    [anon_sym_LBRACK] = ACTIONS(408),
    [anon_sym_LBRACE] = ACTIONS(408),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(406),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(408),
    [anon_sym_GT] = ACTIONS(408),
    [anon_sym_SLASH_GT] = ACTIONS(408),
  },
  [158] = {
    [anon_sym_as] = ACTIONS(410),
    [anon_sym_QMARK] = ACTIONS(410),
    [anon_sym_using] = ACTIONS(410),
    [anon_sym_COMMA] = ACTIONS(412),
    [anon_sym_DOT_DOT] = ACTIONS(410),
    [anon_sym_DOT_DOT_LT] = ACTIONS(412),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(412),
    [anon_sym_COLON] = ACTIONS(412),
    [anon_sym_STAR] = ACTIONS(410),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_SLASH] = ACTIONS(410),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_PERCENT] = ACTIONS(410),
    [anon_sym_EQ_EQ] = ACTIONS(412),
    [anon_sym_BANG_EQ] = ACTIONS(412),
    [anon_sym_LT] = ACTIONS(410),
    [anon_sym_LT_EQ] = ACTIONS(412),
    [anon_sym_lt] = ACTIONS(410),
    [anon_sym_lte] = ACTIONS(410),
    [anon_sym_gt] = ACTIONS(410),
    [anon_sym_gte] = ACTIONS(410),
    [anon_sym_BANG] = ACTIONS(410),
    [anon_sym_AMP_AMP] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(412),
    [anon_sym_QMARK_QMARK] = ACTIONS(412),
    [anon_sym_EQ] = ACTIONS(410),
    [anon_sym_PLUS_EQ] = ACTIONS(412),
    [anon_sym_DASH_EQ] = ACTIONS(412),
    [anon_sym_STAR_EQ] = ACTIONS(412),
    [anon_sym_SLASH_EQ] = ACTIONS(412),
    [anon_sym_PERCENT_EQ] = ACTIONS(412),
    [anon_sym_PLUS_PLUS] = ACTIONS(412),
    [anon_sym_DASH_DASH] = ACTIONS(412),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(412),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(412),
    [sym_number] = ACTIONS(410),
    [anon_sym_true] = ACTIONS(410),
    [anon_sym_LBRACK] = ACTIONS(412),
    [anon_sym_LBRACE] = ACTIONS(412),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(410),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(412),
    [anon_sym_GT] = ACTIONS(412),
    [anon_sym_SLASH_GT] = ACTIONS(412),
  },
  [159] = {
    [sym_type] = STATE(246),
    [sym_string] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_sequence] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_top_level] = STATE(113),
    [sym_spec_var] = STATE(113),
    [aux_sym_as_expression_repeat2] = STATE(246),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(199),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(199),
    [sym_number] = ACTIONS(201),
    [anon_sym_true] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(207),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(209),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(211),
  },
  [160] = {
    [sym_type] = STATE(247),
    [sym_string] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_sequence] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_top_level] = STATE(113),
    [sym_spec_var] = STATE(113),
    [aux_sym_as_expression_repeat2] = STATE(247),
    [anon_sym_as] = ACTIONS(467),
    [anon_sym_QMARK] = ACTIONS(428),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(199),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(199),
    [sym_number] = ACTIONS(201),
    [anon_sym_true] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(207),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(209),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(211),
    [anon_sym_GT] = ACTIONS(428),
    [anon_sym_SLASH_GT] = ACTIONS(428),
  },
  [161] = {
    [sym_type] = STATE(161),
    [sym_string] = STATE(70),
    [sym_boolean] = STATE(70),
    [sym_sequence] = STATE(70),
    [sym_hash] = STATE(70),
    [sym_top_level] = STATE(70),
    [sym_spec_var] = STATE(70),
    [aux_sym_as_expression_repeat1] = STATE(161),
    [anon_sym_as] = ACTIONS(430),
    [anon_sym_QMARK] = ACTIONS(430),
    [anon_sym_using] = ACTIONS(430),
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_DOT_DOT] = ACTIONS(430),
    [anon_sym_DOT_DOT_LT] = ACTIONS(432),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(432),
    [anon_sym_COLON] = ACTIONS(432),
    [anon_sym_STAR] = ACTIONS(430),
    [anon_sym_PLUS] = ACTIONS(430),
    [anon_sym_SLASH] = ACTIONS(430),
    [anon_sym_DASH] = ACTIONS(430),
    [anon_sym_PERCENT] = ACTIONS(430),
    [anon_sym_EQ_EQ] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(432),
    [anon_sym_LT] = ACTIONS(430),
    [anon_sym_LT_EQ] = ACTIONS(432),
    [anon_sym_lt] = ACTIONS(430),
    [anon_sym_lte] = ACTIONS(430),
    [anon_sym_gt] = ACTIONS(430),
    [anon_sym_gte] = ACTIONS(430),
    [anon_sym_BANG] = ACTIONS(430),
    [anon_sym_AMP_AMP] = ACTIONS(432),
    [anon_sym_PIPE_PIPE] = ACTIONS(432),
    [anon_sym_QMARK_QMARK] = ACTIONS(432),
    [anon_sym_EQ] = ACTIONS(430),
    [anon_sym_PLUS_EQ] = ACTIONS(432),
    [anon_sym_DASH_EQ] = ACTIONS(432),
    [anon_sym_STAR_EQ] = ACTIONS(432),
    [anon_sym_SLASH_EQ] = ACTIONS(432),
    [anon_sym_PERCENT_EQ] = ACTIONS(432),
    [anon_sym_PLUS_PLUS] = ACTIONS(432),
    [anon_sym_DASH_DASH] = ACTIONS(432),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(617),
    [sym_number] = ACTIONS(620),
    [anon_sym_true] = ACTIONS(623),
    [anon_sym_LBRACK] = ACTIONS(626),
    [anon_sym_LBRACE] = ACTIONS(629),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(632),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(635),
    [anon_sym_GT] = ACTIONS(432),
    [anon_sym_SLASH_GT] = ACTIONS(432),
  },
  [162] = {
    [sym_type] = STATE(241),
    [sym_string] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_sequence] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_top_level] = STATE(113),
    [sym_spec_var] = STATE(113),
    [aux_sym_as_expression_repeat2] = STATE(241),
    [anon_sym_as] = ACTIONS(467),
    [anon_sym_QMARK] = ACTIONS(428),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(428),
    [sym_number] = ACTIONS(467),
    [anon_sym_true] = ACTIONS(467),
    [anon_sym_LBRACK] = ACTIONS(428),
    [anon_sym_LBRACE] = ACTIONS(428),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(467),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(428),
    [anon_sym_GT] = ACTIONS(428),
    [anon_sym_SLASH_GT] = ACTIONS(428),
  },
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(638),
    [sym_comment] = ACTIONS(638),
    [anon_sym_LT_AT] = ACTIONS(638),
    [anon_sym_LT_POUNDlist] = ACTIONS(638),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(638),
    [sym_break] = ACTIONS(638),
    [sym_continue] = ACTIONS(638),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(638),
    [anon_sym_LT_POUNDitems] = ACTIONS(638),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(638),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(638),
    [anon_sym_LT_POUNDif] = ACTIONS(638),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(638),
    [anon_sym_LT_POUNDelseif] = ACTIONS(638),
    [anon_sym_LT_POUNDswitch] = ACTIONS(638),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(638),
    [anon_sym_LT_POUNDcase] = ACTIONS(638),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(638),
    [anon_sym_LT_POUNDfunction] = ACTIONS(638),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(638),
    [anon_sym_LT_POUNDreturn] = ACTIONS(638),
    [anon_sym_LT_POUNDmacro] = ACTIONS(638),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(638),
    [anon_sym_LT_POUNDnested] = ACTIONS(638),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(638),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(638),
    [sym_recover] = ACTIONS(638),
    [sym_fallback] = ACTIONS(638),
    [sym_flush] = ACTIONS(638),
    [anon_sym_LT_POUNDftl] = ACTIONS(638),
    [anon_sym_LT_POUNDimport] = ACTIONS(638),
    [anon_sym_LT_POUNDinclude] = ACTIONS(638),
    [sym_lt] = ACTIONS(638),
    [sym_nt] = ACTIONS(638),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(638),
    [sym_rt] = ACTIONS(638),
    [anon_sym_LT_POUNDsetting] = ACTIONS(638),
    [sym_stop] = ACTIONS(638),
    [sym_t] = ACTIONS(638),
    [anon_sym_LT_POUNDvisit] = ACTIONS(638),
    [anon_sym_LT_POUNDassign] = ACTIONS(638),
    [sym_end_assign] = ACTIONS(638),
    [anon_sym_LT_POUNDglobal] = ACTIONS(638),
    [sym_end_global] = ACTIONS(638),
    [anon_sym_LT_POUNDlocal] = ACTIONS(638),
    [sym_end_local] = ACTIONS(638),
  },
  [164] = {
    [sym_parameter_group] = STATE(164),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(77),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(70),
    [sym_boolean] = STATE(70),
    [sym_sequence] = STATE(70),
    [sym_hash] = STATE(70),
    [sym_top_level] = STATE(70),
    [sym_spec_var] = STATE(70),
    [aux_sym_as_expression_repeat1] = STATE(77),
    [aux_sym_group_repeat1] = STATE(164),
    [anon_sym_as] = ACTIONS(640),
    [anon_sym_QMARK] = ACTIONS(478),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(643),
    [sym_number] = ACTIONS(646),
    [anon_sym_true] = ACTIONS(649),
    [anon_sym_LBRACK] = ACTIONS(652),
    [anon_sym_LBRACE] = ACTIONS(655),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(658),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(661),
    [anon_sym_GT] = ACTIONS(502),
    [anon_sym_SLASH_GT] = ACTIONS(502),
  },
  [165] = {
    [anon_sym_COMMA] = ACTIONS(374),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(374),
    [sym_number] = ACTIONS(372),
    [anon_sym_true] = ACTIONS(372),
    [anon_sym_LBRACK] = ACTIONS(374),
    [anon_sym_RBRACK] = ACTIONS(374),
    [anon_sym_LBRACE] = ACTIONS(374),
    [anon_sym_RBRACE] = ACTIONS(374),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(372),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(374),
    [anon_sym_GT] = ACTIONS(374),
  },
  [166] = {
    [anon_sym_COMMA] = ACTIONS(382),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(382),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(382),
    [sym_number] = ACTIONS(380),
    [anon_sym_true] = ACTIONS(380),
    [anon_sym_LBRACK] = ACTIONS(382),
    [anon_sym_RBRACK] = ACTIONS(382),
    [anon_sym_LBRACE] = ACTIONS(382),
    [anon_sym_RBRACE] = ACTIONS(382),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(380),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(382),
    [anon_sym_GT] = ACTIONS(382),
  },
  [167] = {
    [sym_expression] = STATE(97),
    [sym_type] = STATE(98),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_top_level] = STATE(90),
    [sym_spec_var] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(98),
    [aux_sym_sequence_repeat1] = STATE(188),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(157),
    [sym_number] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(664),
    [anon_sym_LBRACE] = ACTIONS(167),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(171),
  },
  [168] = {
    [anon_sym_COMMA] = ACTIONS(398),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(398),
    [sym_number] = ACTIONS(396),
    [anon_sym_true] = ACTIONS(396),
    [anon_sym_LBRACK] = ACTIONS(398),
    [anon_sym_RBRACK] = ACTIONS(398),
    [anon_sym_LBRACE] = ACTIONS(398),
    [anon_sym_RBRACE] = ACTIONS(398),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(398),
    [anon_sym_GT] = ACTIONS(398),
  },
  [169] = {
    [sym_expression] = STATE(193),
    [sym_type] = STATE(101),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_top_level] = STATE(90),
    [sym_spec_var] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(101),
    [aux_sym_hash_repeat1] = STATE(193),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(157),
    [sym_number] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_RBRACE] = ACTIONS(666),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(171),
  },
  [170] = {
    [sym_parameter_group] = STATE(251),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(196),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(196),
    [aux_sym_group_repeat1] = STATE(251),
    [anon_sym_as] = ACTIONS(402),
    [anon_sym_QMARK] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(668),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
  },
  [171] = {
    [anon_sym_COMMA] = ACTIONS(408),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(408),
    [sym_number] = ACTIONS(406),
    [anon_sym_true] = ACTIONS(406),
    [anon_sym_LBRACK] = ACTIONS(408),
    [anon_sym_RBRACK] = ACTIONS(408),
    [anon_sym_LBRACE] = ACTIONS(408),
    [anon_sym_RBRACE] = ACTIONS(408),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(406),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(408),
    [anon_sym_GT] = ACTIONS(408),
  },
  [172] = {
    [anon_sym_COMMA] = ACTIONS(412),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(412),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(412),
    [sym_number] = ACTIONS(410),
    [anon_sym_true] = ACTIONS(410),
    [anon_sym_LBRACK] = ACTIONS(412),
    [anon_sym_RBRACK] = ACTIONS(412),
    [anon_sym_LBRACE] = ACTIONS(412),
    [anon_sym_RBRACE] = ACTIONS(412),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(410),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(412),
    [anon_sym_GT] = ACTIONS(412),
  },
  [173] = {
    [sym_type] = STATE(173),
    [sym_string] = STATE(80),
    [sym_boolean] = STATE(80),
    [sym_sequence] = STATE(80),
    [sym_hash] = STATE(80),
    [sym_top_level] = STATE(80),
    [sym_spec_var] = STATE(80),
    [aux_sym_as_expression_repeat2] = STATE(173),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(670),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(670),
    [sym_number] = ACTIONS(673),
    [anon_sym_true] = ACTIONS(676),
    [anon_sym_LBRACK] = ACTIONS(679),
    [anon_sym_LBRACE] = ACTIONS(682),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(685),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(688),
    [anon_sym_GT] = ACTIONS(691),
  },
  [174] = {
    [anon_sym_as] = ACTIONS(693),
    [anon_sym_QMARK] = ACTIONS(695),
    [anon_sym_RPAREN] = ACTIONS(695),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(695),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(695),
    [sym_number] = ACTIONS(693),
    [anon_sym_true] = ACTIONS(693),
    [anon_sym_LBRACK] = ACTIONS(695),
    [anon_sym_LBRACE] = ACTIONS(695),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(693),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(695),
    [anon_sym_GT] = ACTIONS(695),
    [anon_sym_SLASH_GT] = ACTIONS(695),
  },
  [175] = {
    [anon_sym_using] = ACTIONS(372),
    [anon_sym_COMMA] = ACTIONS(374),
    [anon_sym_DOT_DOT] = ACTIONS(372),
    [anon_sym_DOT_DOT_LT] = ACTIONS(374),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(374),
    [anon_sym_COLON] = ACTIONS(374),
    [anon_sym_STAR] = ACTIONS(372),
    [anon_sym_PLUS] = ACTIONS(372),
    [anon_sym_SLASH] = ACTIONS(372),
    [anon_sym_DASH] = ACTIONS(372),
    [anon_sym_PERCENT] = ACTIONS(372),
    [anon_sym_EQ_EQ] = ACTIONS(374),
    [anon_sym_BANG_EQ] = ACTIONS(374),
    [anon_sym_LT] = ACTIONS(372),
    [anon_sym_LT_EQ] = ACTIONS(374),
    [anon_sym_lt] = ACTIONS(372),
    [anon_sym_lte] = ACTIONS(372),
    [anon_sym_gt] = ACTIONS(372),
    [anon_sym_gte] = ACTIONS(372),
    [anon_sym_BANG] = ACTIONS(372),
    [anon_sym_AMP_AMP] = ACTIONS(374),
    [anon_sym_PIPE_PIPE] = ACTIONS(374),
    [anon_sym_QMARK_QMARK] = ACTIONS(374),
    [anon_sym_EQ] = ACTIONS(372),
    [anon_sym_PLUS_EQ] = ACTIONS(374),
    [anon_sym_DASH_EQ] = ACTIONS(374),
    [anon_sym_STAR_EQ] = ACTIONS(374),
    [anon_sym_SLASH_EQ] = ACTIONS(374),
    [anon_sym_PERCENT_EQ] = ACTIONS(374),
    [anon_sym_PLUS_PLUS] = ACTIONS(374),
    [anon_sym_DASH_DASH] = ACTIONS(374),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(374),
    [sym_number] = ACTIONS(372),
    [anon_sym_true] = ACTIONS(372),
    [anon_sym_LBRACK] = ACTIONS(374),
    [anon_sym_RBRACK] = ACTIONS(374),
    [anon_sym_LBRACE] = ACTIONS(374),
    [anon_sym_RBRACE] = ACTIONS(374),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(372),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(374),
  },
  [176] = {
    [anon_sym_using] = ACTIONS(380),
    [anon_sym_COMMA] = ACTIONS(382),
    [anon_sym_DOT_DOT] = ACTIONS(380),
    [anon_sym_DOT_DOT_LT] = ACTIONS(382),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(382),
    [anon_sym_COLON] = ACTIONS(382),
    [anon_sym_STAR] = ACTIONS(380),
    [anon_sym_PLUS] = ACTIONS(380),
    [anon_sym_SLASH] = ACTIONS(380),
    [anon_sym_DASH] = ACTIONS(380),
    [anon_sym_PERCENT] = ACTIONS(380),
    [anon_sym_EQ_EQ] = ACTIONS(382),
    [anon_sym_BANG_EQ] = ACTIONS(382),
    [anon_sym_LT] = ACTIONS(380),
    [anon_sym_LT_EQ] = ACTIONS(382),
    [anon_sym_lt] = ACTIONS(380),
    [anon_sym_lte] = ACTIONS(380),
    [anon_sym_gt] = ACTIONS(380),
    [anon_sym_gte] = ACTIONS(380),
    [anon_sym_BANG] = ACTIONS(380),
    [anon_sym_AMP_AMP] = ACTIONS(382),
    [anon_sym_PIPE_PIPE] = ACTIONS(382),
    [anon_sym_QMARK_QMARK] = ACTIONS(382),
    [anon_sym_EQ] = ACTIONS(380),
    [anon_sym_PLUS_EQ] = ACTIONS(382),
    [anon_sym_DASH_EQ] = ACTIONS(382),
    [anon_sym_STAR_EQ] = ACTIONS(382),
    [anon_sym_SLASH_EQ] = ACTIONS(382),
    [anon_sym_PERCENT_EQ] = ACTIONS(382),
    [anon_sym_PLUS_PLUS] = ACTIONS(382),
    [anon_sym_DASH_DASH] = ACTIONS(382),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(382),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(382),
    [sym_number] = ACTIONS(380),
    [anon_sym_true] = ACTIONS(380),
    [anon_sym_LBRACK] = ACTIONS(382),
    [anon_sym_RBRACK] = ACTIONS(382),
    [anon_sym_LBRACE] = ACTIONS(382),
    [anon_sym_RBRACE] = ACTIONS(382),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(380),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(382),
  },
  [177] = {
    [sym_expression] = STATE(97),
    [sym_type] = STATE(98),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_top_level] = STATE(90),
    [sym_spec_var] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(98),
    [aux_sym_sequence_repeat1] = STATE(188),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(157),
    [sym_number] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(697),
    [anon_sym_LBRACE] = ACTIONS(167),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(171),
  },
  [178] = {
    [anon_sym_using] = ACTIONS(396),
    [anon_sym_COMMA] = ACTIONS(398),
    [anon_sym_DOT_DOT] = ACTIONS(396),
    [anon_sym_DOT_DOT_LT] = ACTIONS(398),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(398),
    [anon_sym_COLON] = ACTIONS(398),
    [anon_sym_STAR] = ACTIONS(396),
    [anon_sym_PLUS] = ACTIONS(396),
    [anon_sym_SLASH] = ACTIONS(396),
    [anon_sym_DASH] = ACTIONS(396),
    [anon_sym_PERCENT] = ACTIONS(396),
    [anon_sym_EQ_EQ] = ACTIONS(398),
    [anon_sym_BANG_EQ] = ACTIONS(398),
    [anon_sym_LT] = ACTIONS(396),
    [anon_sym_LT_EQ] = ACTIONS(398),
    [anon_sym_lt] = ACTIONS(396),
    [anon_sym_lte] = ACTIONS(396),
    [anon_sym_gt] = ACTIONS(396),
    [anon_sym_gte] = ACTIONS(396),
    [anon_sym_BANG] = ACTIONS(396),
    [anon_sym_AMP_AMP] = ACTIONS(398),
    [anon_sym_PIPE_PIPE] = ACTIONS(398),
    [anon_sym_QMARK_QMARK] = ACTIONS(398),
    [anon_sym_EQ] = ACTIONS(396),
    [anon_sym_PLUS_EQ] = ACTIONS(398),
    [anon_sym_DASH_EQ] = ACTIONS(398),
    [anon_sym_STAR_EQ] = ACTIONS(398),
    [anon_sym_SLASH_EQ] = ACTIONS(398),
    [anon_sym_PERCENT_EQ] = ACTIONS(398),
    [anon_sym_PLUS_PLUS] = ACTIONS(398),
    [anon_sym_DASH_DASH] = ACTIONS(398),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(398),
    [sym_number] = ACTIONS(396),
    [anon_sym_true] = ACTIONS(396),
    [anon_sym_LBRACK] = ACTIONS(398),
    [anon_sym_RBRACK] = ACTIONS(398),
    [anon_sym_LBRACE] = ACTIONS(398),
    [anon_sym_RBRACE] = ACTIONS(398),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(398),
  },
  [179] = {
    [sym_expression] = STATE(193),
    [sym_type] = STATE(101),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_top_level] = STATE(90),
    [sym_spec_var] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(101),
    [aux_sym_hash_repeat1] = STATE(193),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(157),
    [sym_number] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_RBRACE] = ACTIONS(699),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(171),
  },
  [180] = {
    [sym_parameter_group] = STATE(255),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(196),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(196),
    [aux_sym_group_repeat1] = STATE(255),
    [anon_sym_as] = ACTIONS(402),
    [anon_sym_QMARK] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(701),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
  },
  [181] = {
    [anon_sym_using] = ACTIONS(406),
    [anon_sym_COMMA] = ACTIONS(408),
    [anon_sym_DOT_DOT] = ACTIONS(406),
    [anon_sym_DOT_DOT_LT] = ACTIONS(408),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(408),
    [anon_sym_COLON] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(406),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_SLASH] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(406),
    [anon_sym_PERCENT] = ACTIONS(406),
    [anon_sym_EQ_EQ] = ACTIONS(408),
    [anon_sym_BANG_EQ] = ACTIONS(408),
    [anon_sym_LT] = ACTIONS(406),
    [anon_sym_LT_EQ] = ACTIONS(408),
    [anon_sym_lt] = ACTIONS(406),
    [anon_sym_lte] = ACTIONS(406),
    [anon_sym_gt] = ACTIONS(406),
    [anon_sym_gte] = ACTIONS(406),
    [anon_sym_BANG] = ACTIONS(406),
    [anon_sym_AMP_AMP] = ACTIONS(408),
    [anon_sym_PIPE_PIPE] = ACTIONS(408),
    [anon_sym_QMARK_QMARK] = ACTIONS(408),
    [anon_sym_EQ] = ACTIONS(406),
    [anon_sym_PLUS_EQ] = ACTIONS(408),
    [anon_sym_DASH_EQ] = ACTIONS(408),
    [anon_sym_STAR_EQ] = ACTIONS(408),
    [anon_sym_SLASH_EQ] = ACTIONS(408),
    [anon_sym_PERCENT_EQ] = ACTIONS(408),
    [anon_sym_PLUS_PLUS] = ACTIONS(408),
    [anon_sym_DASH_DASH] = ACTIONS(408),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(408),
    [sym_number] = ACTIONS(406),
    [anon_sym_true] = ACTIONS(406),
    [anon_sym_LBRACK] = ACTIONS(408),
    [anon_sym_RBRACK] = ACTIONS(408),
    [anon_sym_LBRACE] = ACTIONS(408),
    [anon_sym_RBRACE] = ACTIONS(408),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(406),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(408),
  },
  [182] = {
    [anon_sym_using] = ACTIONS(410),
    [anon_sym_COMMA] = ACTIONS(412),
    [anon_sym_DOT_DOT] = ACTIONS(410),
    [anon_sym_DOT_DOT_LT] = ACTIONS(412),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(412),
    [anon_sym_COLON] = ACTIONS(412),
    [anon_sym_STAR] = ACTIONS(410),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_SLASH] = ACTIONS(410),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_PERCENT] = ACTIONS(410),
    [anon_sym_EQ_EQ] = ACTIONS(412),
    [anon_sym_BANG_EQ] = ACTIONS(412),
    [anon_sym_LT] = ACTIONS(410),
    [anon_sym_LT_EQ] = ACTIONS(412),
    [anon_sym_lt] = ACTIONS(410),
    [anon_sym_lte] = ACTIONS(410),
    [anon_sym_gt] = ACTIONS(410),
    [anon_sym_gte] = ACTIONS(410),
    [anon_sym_BANG] = ACTIONS(410),
    [anon_sym_AMP_AMP] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(412),
    [anon_sym_QMARK_QMARK] = ACTIONS(412),
    [anon_sym_EQ] = ACTIONS(410),
    [anon_sym_PLUS_EQ] = ACTIONS(412),
    [anon_sym_DASH_EQ] = ACTIONS(412),
    [anon_sym_STAR_EQ] = ACTIONS(412),
    [anon_sym_SLASH_EQ] = ACTIONS(412),
    [anon_sym_PERCENT_EQ] = ACTIONS(412),
    [anon_sym_PLUS_PLUS] = ACTIONS(412),
    [anon_sym_DASH_DASH] = ACTIONS(412),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(412),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(412),
    [sym_number] = ACTIONS(410),
    [anon_sym_true] = ACTIONS(410),
    [anon_sym_LBRACK] = ACTIONS(412),
    [anon_sym_RBRACK] = ACTIONS(412),
    [anon_sym_LBRACE] = ACTIONS(412),
    [anon_sym_RBRACE] = ACTIONS(412),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(410),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(412),
  },
  [183] = {
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
  [184] = {
    [sym_type] = STATE(256),
    [sym_string] = STATE(80),
    [sym_boolean] = STATE(80),
    [sym_sequence] = STATE(80),
    [sym_hash] = STATE(80),
    [sym_top_level] = STATE(80),
    [sym_spec_var] = STATE(80),
    [aux_sym_as_expression_repeat2] = STATE(256),
    [anon_sym_COMMA] = ACTIONS(428),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(131),
    [sym_number] = ACTIONS(133),
    [anon_sym_true] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(428),
    [anon_sym_LBRACE] = ACTIONS(139),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(143),
  },
  [185] = {
    [sym_type] = STATE(185),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_top_level] = STATE(90),
    [sym_spec_var] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(185),
    [anon_sym_using] = ACTIONS(430),
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_DOT_DOT] = ACTIONS(430),
    [anon_sym_DOT_DOT_LT] = ACTIONS(432),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(432),
    [anon_sym_COLON] = ACTIONS(432),
    [anon_sym_STAR] = ACTIONS(430),
    [anon_sym_PLUS] = ACTIONS(430),
    [anon_sym_SLASH] = ACTIONS(430),
    [anon_sym_DASH] = ACTIONS(430),
    [anon_sym_PERCENT] = ACTIONS(430),
    [anon_sym_EQ_EQ] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(432),
    [anon_sym_LT] = ACTIONS(430),
    [anon_sym_LT_EQ] = ACTIONS(432),
    [anon_sym_lt] = ACTIONS(430),
    [anon_sym_lte] = ACTIONS(430),
    [anon_sym_gt] = ACTIONS(430),
    [anon_sym_gte] = ACTIONS(430),
    [anon_sym_BANG] = ACTIONS(430),
    [anon_sym_AMP_AMP] = ACTIONS(432),
    [anon_sym_PIPE_PIPE] = ACTIONS(432),
    [anon_sym_QMARK_QMARK] = ACTIONS(432),
    [anon_sym_EQ] = ACTIONS(430),
    [anon_sym_PLUS_EQ] = ACTIONS(432),
    [anon_sym_DASH_EQ] = ACTIONS(432),
    [anon_sym_STAR_EQ] = ACTIONS(432),
    [anon_sym_SLASH_EQ] = ACTIONS(432),
    [anon_sym_PERCENT_EQ] = ACTIONS(432),
    [anon_sym_PLUS_PLUS] = ACTIONS(432),
    [anon_sym_DASH_DASH] = ACTIONS(432),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(707),
    [sym_number] = ACTIONS(710),
    [anon_sym_true] = ACTIONS(713),
    [anon_sym_LBRACK] = ACTIONS(716),
    [anon_sym_RBRACK] = ACTIONS(432),
    [anon_sym_LBRACE] = ACTIONS(719),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(722),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(725),
  },
  [186] = {
    [sym_type] = STATE(257),
    [sym_string] = STATE(80),
    [sym_boolean] = STATE(80),
    [sym_sequence] = STATE(80),
    [sym_hash] = STATE(80),
    [sym_top_level] = STATE(80),
    [sym_spec_var] = STATE(80),
    [aux_sym_as_expression_repeat2] = STATE(257),
    [anon_sym_COMMA] = ACTIONS(428),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(428),
    [sym_number] = ACTIONS(467),
    [anon_sym_true] = ACTIONS(467),
    [anon_sym_LBRACK] = ACTIONS(428),
    [anon_sym_RBRACK] = ACTIONS(428),
    [anon_sym_LBRACE] = ACTIONS(428),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(467),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(428),
  },
  [187] = {
    [anon_sym_as] = ACTIONS(728),
    [anon_sym_QMARK] = ACTIONS(728),
    [anon_sym_RPAREN] = ACTIONS(730),
    [anon_sym_using] = ACTIONS(728),
    [anon_sym_COMMA] = ACTIONS(730),
    [anon_sym_DOT_DOT] = ACTIONS(728),
    [anon_sym_DOT_DOT_LT] = ACTIONS(730),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(730),
    [anon_sym_COLON] = ACTIONS(730),
    [anon_sym_STAR] = ACTIONS(728),
    [anon_sym_PLUS] = ACTIONS(728),
    [anon_sym_SLASH] = ACTIONS(728),
    [anon_sym_DASH] = ACTIONS(728),
    [anon_sym_PERCENT] = ACTIONS(728),
    [anon_sym_EQ_EQ] = ACTIONS(730),
    [anon_sym_BANG_EQ] = ACTIONS(730),
    [anon_sym_LT] = ACTIONS(728),
    [anon_sym_LT_EQ] = ACTIONS(730),
    [anon_sym_lt] = ACTIONS(728),
    [anon_sym_lte] = ACTIONS(728),
    [anon_sym_gt] = ACTIONS(728),
    [anon_sym_gte] = ACTIONS(728),
    [anon_sym_BANG] = ACTIONS(728),
    [anon_sym_AMP_AMP] = ACTIONS(730),
    [anon_sym_PIPE_PIPE] = ACTIONS(730),
    [anon_sym_QMARK_QMARK] = ACTIONS(730),
    [anon_sym_EQ] = ACTIONS(728),
    [anon_sym_PLUS_EQ] = ACTIONS(730),
    [anon_sym_DASH_EQ] = ACTIONS(730),
    [anon_sym_STAR_EQ] = ACTIONS(730),
    [anon_sym_SLASH_EQ] = ACTIONS(730),
    [anon_sym_PERCENT_EQ] = ACTIONS(730),
    [anon_sym_PLUS_PLUS] = ACTIONS(730),
    [anon_sym_DASH_DASH] = ACTIONS(730),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(730),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(730),
    [sym_number] = ACTIONS(728),
    [anon_sym_true] = ACTIONS(728),
    [anon_sym_LBRACK] = ACTIONS(730),
    [anon_sym_LBRACE] = ACTIONS(730),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(728),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(730),
    [anon_sym_GT] = ACTIONS(730),
  },
  [188] = {
    [sym_expression] = STATE(97),
    [sym_type] = STATE(98),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_top_level] = STATE(90),
    [sym_spec_var] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(98),
    [aux_sym_sequence_repeat1] = STATE(188),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(732),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(732),
    [sym_number] = ACTIONS(735),
    [anon_sym_true] = ACTIONS(738),
    [anon_sym_LBRACK] = ACTIONS(741),
    [anon_sym_RBRACK] = ACTIONS(703),
    [anon_sym_LBRACE] = ACTIONS(744),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(747),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(750),
  },
  [189] = {
    [sym_type] = STATE(258),
    [sym_string] = STATE(80),
    [sym_boolean] = STATE(80),
    [sym_sequence] = STATE(80),
    [sym_hash] = STATE(80),
    [sym_top_level] = STATE(80),
    [sym_spec_var] = STATE(80),
    [aux_sym_as_expression_repeat2] = STATE(258),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(131),
    [sym_number] = ACTIONS(133),
    [anon_sym_true] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(428),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(143),
  },
  [190] = {
    [sym_type] = STATE(190),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_top_level] = STATE(90),
    [sym_spec_var] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(190),
    [anon_sym_using] = ACTIONS(430),
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_DOT_DOT] = ACTIONS(430),
    [anon_sym_DOT_DOT_LT] = ACTIONS(432),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(432),
    [anon_sym_COLON] = ACTIONS(432),
    [anon_sym_STAR] = ACTIONS(430),
    [anon_sym_PLUS] = ACTIONS(430),
    [anon_sym_SLASH] = ACTIONS(430),
    [anon_sym_DASH] = ACTIONS(430),
    [anon_sym_PERCENT] = ACTIONS(430),
    [anon_sym_EQ_EQ] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(432),
    [anon_sym_LT] = ACTIONS(430),
    [anon_sym_LT_EQ] = ACTIONS(432),
    [anon_sym_lt] = ACTIONS(430),
    [anon_sym_lte] = ACTIONS(430),
    [anon_sym_gt] = ACTIONS(430),
    [anon_sym_gte] = ACTIONS(430),
    [anon_sym_BANG] = ACTIONS(430),
    [anon_sym_AMP_AMP] = ACTIONS(432),
    [anon_sym_PIPE_PIPE] = ACTIONS(432),
    [anon_sym_QMARK_QMARK] = ACTIONS(432),
    [anon_sym_EQ] = ACTIONS(430),
    [anon_sym_PLUS_EQ] = ACTIONS(432),
    [anon_sym_DASH_EQ] = ACTIONS(432),
    [anon_sym_STAR_EQ] = ACTIONS(432),
    [anon_sym_SLASH_EQ] = ACTIONS(432),
    [anon_sym_PERCENT_EQ] = ACTIONS(432),
    [anon_sym_PLUS_PLUS] = ACTIONS(432),
    [anon_sym_DASH_DASH] = ACTIONS(432),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(707),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(707),
    [sym_number] = ACTIONS(710),
    [anon_sym_true] = ACTIONS(713),
    [anon_sym_LBRACK] = ACTIONS(716),
    [anon_sym_LBRACE] = ACTIONS(719),
    [anon_sym_RBRACE] = ACTIONS(432),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(722),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(725),
  },
  [191] = {
    [sym_type] = STATE(259),
    [sym_string] = STATE(80),
    [sym_boolean] = STATE(80),
    [sym_sequence] = STATE(80),
    [sym_hash] = STATE(80),
    [sym_top_level] = STATE(80),
    [sym_spec_var] = STATE(80),
    [aux_sym_as_expression_repeat2] = STATE(259),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(428),
    [sym_number] = ACTIONS(467),
    [anon_sym_true] = ACTIONS(467),
    [anon_sym_LBRACK] = ACTIONS(428),
    [anon_sym_LBRACE] = ACTIONS(428),
    [anon_sym_RBRACE] = ACTIONS(428),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(467),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(428),
  },
  [192] = {
    [anon_sym_as] = ACTIONS(753),
    [anon_sym_QMARK] = ACTIONS(753),
    [anon_sym_RPAREN] = ACTIONS(755),
    [anon_sym_using] = ACTIONS(753),
    [anon_sym_COMMA] = ACTIONS(755),
    [anon_sym_DOT_DOT] = ACTIONS(753),
    [anon_sym_DOT_DOT_LT] = ACTIONS(755),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(755),
    [anon_sym_COLON] = ACTIONS(755),
    [anon_sym_STAR] = ACTIONS(753),
    [anon_sym_PLUS] = ACTIONS(753),
    [anon_sym_SLASH] = ACTIONS(753),
    [anon_sym_DASH] = ACTIONS(753),
    [anon_sym_PERCENT] = ACTIONS(753),
    [anon_sym_EQ_EQ] = ACTIONS(755),
    [anon_sym_BANG_EQ] = ACTIONS(755),
    [anon_sym_LT] = ACTIONS(753),
    [anon_sym_LT_EQ] = ACTIONS(755),
    [anon_sym_lt] = ACTIONS(753),
    [anon_sym_lte] = ACTIONS(753),
    [anon_sym_gt] = ACTIONS(753),
    [anon_sym_gte] = ACTIONS(753),
    [anon_sym_BANG] = ACTIONS(753),
    [anon_sym_AMP_AMP] = ACTIONS(755),
    [anon_sym_PIPE_PIPE] = ACTIONS(755),
    [anon_sym_QMARK_QMARK] = ACTIONS(755),
    [anon_sym_EQ] = ACTIONS(753),
    [anon_sym_PLUS_EQ] = ACTIONS(755),
    [anon_sym_DASH_EQ] = ACTIONS(755),
    [anon_sym_STAR_EQ] = ACTIONS(755),
    [anon_sym_SLASH_EQ] = ACTIONS(755),
    [anon_sym_PERCENT_EQ] = ACTIONS(755),
    [anon_sym_PLUS_PLUS] = ACTIONS(755),
    [anon_sym_DASH_DASH] = ACTIONS(755),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(755),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(755),
    [sym_number] = ACTIONS(753),
    [anon_sym_true] = ACTIONS(753),
    [anon_sym_LBRACK] = ACTIONS(755),
    [anon_sym_LBRACE] = ACTIONS(755),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(753),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(755),
    [anon_sym_GT] = ACTIONS(755),
  },
  [193] = {
    [sym_expression] = STATE(193),
    [sym_type] = STATE(101),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_top_level] = STATE(90),
    [sym_spec_var] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(101),
    [aux_sym_hash_repeat1] = STATE(193),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(757),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(757),
    [sym_number] = ACTIONS(760),
    [anon_sym_true] = ACTIONS(763),
    [anon_sym_LBRACK] = ACTIONS(766),
    [anon_sym_LBRACE] = ACTIONS(769),
    [anon_sym_RBRACE] = ACTIONS(772),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(774),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(777),
  },
  [194] = {
    [sym_type] = STATE(260),
    [sym_string] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_sequence] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_top_level] = STATE(113),
    [sym_spec_var] = STATE(113),
    [aux_sym_as_expression_repeat2] = STATE(260),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(199),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(199),
    [sym_number] = ACTIONS(201),
    [anon_sym_true] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(207),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(209),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(211),
  },
  [195] = {
    [anon_sym_as] = ACTIONS(780),
    [anon_sym_QMARK] = ACTIONS(780),
    [anon_sym_LPAREN] = ACTIONS(782),
    [anon_sym_RPAREN] = ACTIONS(782),
    [anon_sym_using] = ACTIONS(780),
    [anon_sym_COMMA] = ACTIONS(782),
    [anon_sym_DOT_DOT] = ACTIONS(780),
    [anon_sym_DOT_DOT_LT] = ACTIONS(782),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(782),
    [anon_sym_COLON] = ACTIONS(782),
    [anon_sym_STAR] = ACTIONS(780),
    [anon_sym_PLUS] = ACTIONS(780),
    [anon_sym_SLASH] = ACTIONS(780),
    [anon_sym_DASH] = ACTIONS(780),
    [anon_sym_PERCENT] = ACTIONS(780),
    [anon_sym_EQ_EQ] = ACTIONS(782),
    [anon_sym_BANG_EQ] = ACTIONS(782),
    [anon_sym_LT] = ACTIONS(780),
    [anon_sym_LT_EQ] = ACTIONS(782),
    [anon_sym_lt] = ACTIONS(780),
    [anon_sym_lte] = ACTIONS(780),
    [anon_sym_gt] = ACTIONS(780),
    [anon_sym_gte] = ACTIONS(780),
    [anon_sym_BANG] = ACTIONS(780),
    [anon_sym_AMP_AMP] = ACTIONS(782),
    [anon_sym_PIPE_PIPE] = ACTIONS(782),
    [anon_sym_QMARK_QMARK] = ACTIONS(782),
    [anon_sym_EQ] = ACTIONS(780),
    [anon_sym_PLUS_EQ] = ACTIONS(782),
    [anon_sym_DASH_EQ] = ACTIONS(782),
    [anon_sym_STAR_EQ] = ACTIONS(782),
    [anon_sym_SLASH_EQ] = ACTIONS(782),
    [anon_sym_PERCENT_EQ] = ACTIONS(782),
    [anon_sym_PLUS_PLUS] = ACTIONS(782),
    [anon_sym_DASH_DASH] = ACTIONS(782),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(782),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(782),
    [sym_number] = ACTIONS(780),
    [anon_sym_true] = ACTIONS(780),
    [anon_sym_LBRACK] = ACTIONS(782),
    [anon_sym_LBRACE] = ACTIONS(782),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(780),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(782),
    [anon_sym_GT] = ACTIONS(782),
  },
  [196] = {
    [sym_type] = STATE(263),
    [sym_operator] = STATE(262),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(263),
    [aux_sym_as_expression_repeat2] = STATE(264),
    [anon_sym_as] = ACTIONS(784),
    [anon_sym_QMARK] = ACTIONS(217),
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_using] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_DOT_DOT] = ACTIONS(219),
    [anon_sym_DOT_DOT_LT] = ACTIONS(221),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(221),
    [anon_sym_COLON] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(219),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_SLASH] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(219),
    [anon_sym_PERCENT] = ACTIONS(219),
    [anon_sym_EQ_EQ] = ACTIONS(221),
    [anon_sym_BANG_EQ] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_LT_EQ] = ACTIONS(221),
    [anon_sym_lt] = ACTIONS(219),
    [anon_sym_lte] = ACTIONS(219),
    [anon_sym_gt] = ACTIONS(219),
    [anon_sym_gte] = ACTIONS(219),
    [anon_sym_BANG] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_QMARK_QMARK] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(219),
    [anon_sym_PLUS_EQ] = ACTIONS(221),
    [anon_sym_DASH_EQ] = ACTIONS(221),
    [anon_sym_STAR_EQ] = ACTIONS(221),
    [anon_sym_SLASH_EQ] = ACTIONS(221),
    [anon_sym_PERCENT_EQ] = ACTIONS(221),
    [anon_sym_PLUS_PLUS] = ACTIONS(221),
    [anon_sym_DASH_DASH] = ACTIONS(221),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(197),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(197),
    [sym_number] = ACTIONS(217),
    [anon_sym_true] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(197),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(197),
  },
  [197] = {
    [sym_parameter_group] = STATE(266),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(196),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(196),
    [aux_sym_group_repeat1] = STATE(266),
    [anon_sym_as] = ACTIONS(402),
    [anon_sym_QMARK] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(786),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
  },
  [198] = {
    [ts_builtin_sym_end] = ACTIONS(788),
    [sym_comment] = ACTIONS(788),
    [anon_sym_LT_AT] = ACTIONS(788),
    [anon_sym_LT_POUNDlist] = ACTIONS(788),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(788),
    [sym_break] = ACTIONS(788),
    [sym_continue] = ACTIONS(788),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(788),
    [anon_sym_LT_POUNDitems] = ACTIONS(788),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(788),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(788),
    [anon_sym_LT_POUNDif] = ACTIONS(788),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(788),
    [anon_sym_LT_POUNDelseif] = ACTIONS(788),
    [anon_sym_LT_POUNDswitch] = ACTIONS(788),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(788),
    [anon_sym_LT_POUNDcase] = ACTIONS(788),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(788),
    [anon_sym_LT_POUNDfunction] = ACTIONS(788),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(788),
    [anon_sym_LT_POUNDreturn] = ACTIONS(788),
    [anon_sym_LT_POUNDmacro] = ACTIONS(788),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(788),
    [anon_sym_LT_POUNDnested] = ACTIONS(788),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(788),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(788),
    [sym_recover] = ACTIONS(788),
    [sym_fallback] = ACTIONS(788),
    [sym_flush] = ACTIONS(788),
    [anon_sym_LT_POUNDftl] = ACTIONS(788),
    [anon_sym_LT_POUNDimport] = ACTIONS(788),
    [anon_sym_LT_POUNDinclude] = ACTIONS(788),
    [sym_lt] = ACTIONS(788),
    [sym_nt] = ACTIONS(788),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(788),
    [sym_rt] = ACTIONS(788),
    [anon_sym_LT_POUNDsetting] = ACTIONS(788),
    [sym_stop] = ACTIONS(788),
    [sym_t] = ACTIONS(788),
    [anon_sym_LT_POUNDvisit] = ACTIONS(788),
    [anon_sym_LT_POUNDassign] = ACTIONS(788),
    [sym_end_assign] = ACTIONS(788),
    [anon_sym_LT_POUNDglobal] = ACTIONS(788),
    [sym_end_global] = ACTIONS(788),
    [anon_sym_LT_POUNDlocal] = ACTIONS(788),
    [sym_end_local] = ACTIONS(788),
  },
  [199] = {
    [anon_sym_LT_AT] = ACTIONS(790),
    [anon_sym_LT_POUNDlist] = ACTIONS(790),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(790),
    [sym_break] = ACTIONS(790),
    [sym_continue] = ACTIONS(790),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(790),
    [anon_sym_LT_POUNDitems] = ACTIONS(790),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(790),
    [anon_sym_LT_POUNDif] = ACTIONS(790),
    [anon_sym_LT_POUNDswitch] = ACTIONS(790),
    [anon_sym_LT_POUNDfunction] = ACTIONS(790),
    [anon_sym_LT_POUNDmacro] = ACTIONS(790),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(790),
    [sym_fallback] = ACTIONS(790),
    [sym_flush] = ACTIONS(790),
    [anon_sym_LT_POUNDftl] = ACTIONS(790),
    [anon_sym_LT_POUNDimport] = ACTIONS(790),
    [anon_sym_LT_POUNDinclude] = ACTIONS(790),
    [sym_lt] = ACTIONS(790),
    [sym_nt] = ACTIONS(790),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(790),
    [sym_rt] = ACTIONS(790),
    [anon_sym_LT_POUNDsetting] = ACTIONS(790),
    [sym_stop] = ACTIONS(790),
    [sym_t] = ACTIONS(790),
    [anon_sym_LT_POUNDvisit] = ACTIONS(790),
    [anon_sym_LT_POUNDassign] = ACTIONS(790),
    [sym_end_assign] = ACTIONS(790),
    [anon_sym_LT_POUNDglobal] = ACTIONS(790),
    [sym_end_global] = ACTIONS(790),
    [anon_sym_LT_POUNDlocal] = ACTIONS(790),
    [sym_end_local] = ACTIONS(790),
  },
  [200] = {
    [sym_directive] = STATE(199),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_list_middle] = STATE(267),
    [sym_items] = STATE(199),
    [sym_sep] = STATE(199),
    [sym_sep_block] = STATE(204),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_list_repeat1] = STATE(267),
    [anon_sym_LT_AT] = ACTIONS(9),
    [anon_sym_LT_POUNDlist] = ACTIONS(11),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(792),
    [sym_break] = ACTIONS(416),
    [sym_continue] = ACTIONS(416),
    [anon_sym_LT_POUNDitems] = ACTIONS(420),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(422),
    [anon_sym_LT_POUNDif] = ACTIONS(13),
    [anon_sym_LT_POUNDswitch] = ACTIONS(15),
    [anon_sym_LT_POUNDfunction] = ACTIONS(17),
    [anon_sym_LT_POUNDmacro] = ACTIONS(19),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(21),
    [sym_fallback] = ACTIONS(23),
    [sym_flush] = ACTIONS(23),
    [anon_sym_LT_POUNDftl] = ACTIONS(25),
    [anon_sym_LT_POUNDimport] = ACTIONS(27),
    [anon_sym_LT_POUNDinclude] = ACTIONS(29),
    [sym_lt] = ACTIONS(23),
    [sym_nt] = ACTIONS(23),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(31),
    [sym_rt] = ACTIONS(23),
    [anon_sym_LT_POUNDsetting] = ACTIONS(33),
    [sym_stop] = ACTIONS(23),
    [sym_t] = ACTIONS(23),
    [anon_sym_LT_POUNDvisit] = ACTIONS(35),
    [anon_sym_LT_POUNDassign] = ACTIONS(37),
    [sym_end_assign] = ACTIONS(39),
    [anon_sym_LT_POUNDglobal] = ACTIONS(41),
    [sym_end_global] = ACTIONS(43),
    [anon_sym_LT_POUNDlocal] = ACTIONS(45),
    [sym_end_local] = ACTIONS(47),
  },
  [201] = {
    [sym_parameter_group] = STATE(268),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(36),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(36),
    [anon_sym_as] = ACTIONS(51),
    [anon_sym_QMARK] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
  },
  [202] = {
    [anon_sym_LT_AT] = ACTIONS(794),
    [anon_sym_LT_POUNDlist] = ACTIONS(794),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(794),
    [sym_break] = ACTIONS(794),
    [sym_continue] = ACTIONS(794),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(794),
    [anon_sym_LT_POUNDitems] = ACTIONS(794),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(794),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(794),
    [anon_sym_LT_SLASH_POUNDsep_GT] = ACTIONS(796),
    [anon_sym_LT_POUNDif] = ACTIONS(794),
    [anon_sym_LT_POUNDswitch] = ACTIONS(794),
    [anon_sym_LT_POUNDfunction] = ACTIONS(794),
    [anon_sym_LT_POUNDmacro] = ACTIONS(794),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(794),
    [sym_fallback] = ACTIONS(794),
    [sym_flush] = ACTIONS(794),
    [anon_sym_LT_POUNDftl] = ACTIONS(794),
    [anon_sym_LT_POUNDimport] = ACTIONS(794),
    [anon_sym_LT_POUNDinclude] = ACTIONS(794),
    [sym_lt] = ACTIONS(794),
    [sym_nt] = ACTIONS(794),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(794),
    [sym_rt] = ACTIONS(794),
    [anon_sym_LT_POUNDsetting] = ACTIONS(794),
    [sym_stop] = ACTIONS(794),
    [sym_t] = ACTIONS(794),
    [anon_sym_LT_POUNDvisit] = ACTIONS(794),
    [anon_sym_LT_POUNDassign] = ACTIONS(794),
    [sym_end_assign] = ACTIONS(794),
    [anon_sym_LT_POUNDglobal] = ACTIONS(794),
    [sym_end_global] = ACTIONS(794),
    [anon_sym_LT_POUNDlocal] = ACTIONS(794),
    [sym_end_local] = ACTIONS(794),
  },
  [203] = {
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(798),
  },
  [204] = {
    [anon_sym_LT_AT] = ACTIONS(794),
    [anon_sym_LT_POUNDlist] = ACTIONS(794),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(794),
    [sym_break] = ACTIONS(794),
    [sym_continue] = ACTIONS(794),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(794),
    [anon_sym_LT_POUNDitems] = ACTIONS(794),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(794),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(794),
    [anon_sym_LT_POUNDif] = ACTIONS(794),
    [anon_sym_LT_POUNDswitch] = ACTIONS(794),
    [anon_sym_LT_POUNDfunction] = ACTIONS(794),
    [anon_sym_LT_POUNDmacro] = ACTIONS(794),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(794),
    [sym_fallback] = ACTIONS(794),
    [sym_flush] = ACTIONS(794),
    [anon_sym_LT_POUNDftl] = ACTIONS(794),
    [anon_sym_LT_POUNDimport] = ACTIONS(794),
    [anon_sym_LT_POUNDinclude] = ACTIONS(794),
    [sym_lt] = ACTIONS(794),
    [sym_nt] = ACTIONS(794),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(794),
    [sym_rt] = ACTIONS(794),
    [anon_sym_LT_POUNDsetting] = ACTIONS(794),
    [sym_stop] = ACTIONS(794),
    [sym_t] = ACTIONS(794),
    [anon_sym_LT_POUNDvisit] = ACTIONS(794),
    [anon_sym_LT_POUNDassign] = ACTIONS(794),
    [sym_end_assign] = ACTIONS(794),
    [anon_sym_LT_POUNDglobal] = ACTIONS(794),
    [sym_end_global] = ACTIONS(794),
    [anon_sym_LT_POUNDlocal] = ACTIONS(794),
    [sym_end_local] = ACTIONS(794),
  },
  [205] = {
    [sym_directive] = STATE(199),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_list_middle] = STATE(272),
    [sym_list_else] = STATE(271),
    [sym_items] = STATE(199),
    [sym_sep] = STATE(199),
    [sym_sep_block] = STATE(204),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_list_repeat1] = STATE(272),
    [anon_sym_LT_AT] = ACTIONS(9),
    [anon_sym_LT_POUNDlist] = ACTIONS(11),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(798),
    [sym_break] = ACTIONS(416),
    [sym_continue] = ACTIONS(416),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(418),
    [anon_sym_LT_POUNDitems] = ACTIONS(420),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(422),
    [anon_sym_LT_POUNDif] = ACTIONS(13),
    [anon_sym_LT_POUNDswitch] = ACTIONS(15),
    [anon_sym_LT_POUNDfunction] = ACTIONS(17),
    [anon_sym_LT_POUNDmacro] = ACTIONS(19),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(21),
    [sym_fallback] = ACTIONS(23),
    [sym_flush] = ACTIONS(23),
    [anon_sym_LT_POUNDftl] = ACTIONS(25),
    [anon_sym_LT_POUNDimport] = ACTIONS(27),
    [anon_sym_LT_POUNDinclude] = ACTIONS(29),
    [sym_lt] = ACTIONS(23),
    [sym_nt] = ACTIONS(23),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(31),
    [sym_rt] = ACTIONS(23),
    [anon_sym_LT_POUNDsetting] = ACTIONS(33),
    [sym_stop] = ACTIONS(23),
    [sym_t] = ACTIONS(23),
    [anon_sym_LT_POUNDvisit] = ACTIONS(35),
    [anon_sym_LT_POUNDassign] = ACTIONS(37),
    [sym_end_assign] = ACTIONS(39),
    [anon_sym_LT_POUNDglobal] = ACTIONS(41),
    [sym_end_global] = ACTIONS(43),
    [anon_sym_LT_POUNDlocal] = ACTIONS(45),
    [sym_end_local] = ACTIONS(47),
  },
  [206] = {
    [sym_type] = STATE(173),
    [sym_string] = STATE(80),
    [sym_boolean] = STATE(80),
    [sym_sequence] = STATE(80),
    [sym_hash] = STATE(80),
    [sym_top_level] = STATE(80),
    [sym_spec_var] = STATE(80),
    [aux_sym_as_expression_repeat2] = STATE(173),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(131),
    [sym_number] = ACTIONS(133),
    [anon_sym_true] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(139),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(800),
  },
  [207] = {
    [sym_type] = STATE(173),
    [sym_string] = STATE(80),
    [sym_boolean] = STATE(80),
    [sym_sequence] = STATE(80),
    [sym_hash] = STATE(80),
    [sym_top_level] = STATE(80),
    [sym_spec_var] = STATE(80),
    [aux_sym_as_expression_repeat2] = STATE(173),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(131),
    [sym_number] = ACTIONS(133),
    [anon_sym_true] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(139),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(802),
  },
  [208] = {
    [anon_sym_as] = ACTIONS(372),
    [anon_sym_QMARK] = ACTIONS(374),
    [anon_sym_RPAREN] = ACTIONS(374),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(374),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(374),
    [sym_number] = ACTIONS(372),
    [anon_sym_true] = ACTIONS(372),
    [anon_sym_LBRACK] = ACTIONS(374),
    [anon_sym_LBRACE] = ACTIONS(374),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(372),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(374),
    [anon_sym_GT] = ACTIONS(374),
    [anon_sym_SLASH_GT] = ACTIONS(374),
  },
  [209] = {
    [anon_sym_as] = ACTIONS(380),
    [anon_sym_QMARK] = ACTIONS(382),
    [anon_sym_RPAREN] = ACTIONS(382),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(382),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(382),
    [sym_number] = ACTIONS(380),
    [anon_sym_true] = ACTIONS(380),
    [anon_sym_LBRACK] = ACTIONS(382),
    [anon_sym_LBRACE] = ACTIONS(382),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(380),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(382),
    [anon_sym_GT] = ACTIONS(382),
    [anon_sym_SLASH_GT] = ACTIONS(382),
  },
  [210] = {
    [sym_expression] = STATE(97),
    [sym_type] = STATE(98),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_top_level] = STATE(90),
    [sym_spec_var] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(98),
    [aux_sym_sequence_repeat1] = STATE(188),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(157),
    [sym_number] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(804),
    [anon_sym_LBRACE] = ACTIONS(167),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(171),
  },
  [211] = {
    [anon_sym_as] = ACTIONS(396),
    [anon_sym_QMARK] = ACTIONS(398),
    [anon_sym_RPAREN] = ACTIONS(398),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(398),
    [sym_number] = ACTIONS(396),
    [anon_sym_true] = ACTIONS(396),
    [anon_sym_LBRACK] = ACTIONS(398),
    [anon_sym_LBRACE] = ACTIONS(398),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(398),
    [anon_sym_GT] = ACTIONS(398),
    [anon_sym_SLASH_GT] = ACTIONS(398),
  },
  [212] = {
    [sym_expression] = STATE(193),
    [sym_type] = STATE(101),
    [sym_string] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_sequence] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_top_level] = STATE(90),
    [sym_spec_var] = STATE(90),
    [aux_sym_as_expression_repeat1] = STATE(101),
    [aux_sym_hash_repeat1] = STATE(193),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(157),
    [sym_number] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_RBRACE] = ACTIONS(806),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(171),
  },
  [213] = {
    [sym_parameter_group] = STATE(276),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(196),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(196),
    [aux_sym_group_repeat1] = STATE(276),
    [anon_sym_as] = ACTIONS(402),
    [anon_sym_QMARK] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(808),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
  },
  [214] = {
    [anon_sym_as] = ACTIONS(406),
    [anon_sym_QMARK] = ACTIONS(408),
    [anon_sym_LPAREN] = ACTIONS(408),
    [anon_sym_RPAREN] = ACTIONS(408),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(408),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(408),
    [sym_number] = ACTIONS(406),
    [anon_sym_true] = ACTIONS(406),
    [anon_sym_LBRACK] = ACTIONS(408),
    [anon_sym_LBRACE] = ACTIONS(408),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(406),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(408),
    [anon_sym_GT] = ACTIONS(408),
    [anon_sym_SLASH_GT] = ACTIONS(408),
  },
  [215] = {
    [anon_sym_as] = ACTIONS(410),
    [anon_sym_QMARK] = ACTIONS(412),
    [anon_sym_RPAREN] = ACTIONS(412),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(412),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(412),
    [sym_number] = ACTIONS(410),
    [anon_sym_true] = ACTIONS(410),
    [anon_sym_LBRACK] = ACTIONS(412),
    [anon_sym_LBRACE] = ACTIONS(412),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(410),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(412),
    [anon_sym_GT] = ACTIONS(412),
    [anon_sym_SLASH_GT] = ACTIONS(412),
  },
  [216] = {
    [sym_type] = STATE(216),
    [sym_string] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_sequence] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_top_level] = STATE(113),
    [sym_spec_var] = STATE(113),
    [aux_sym_as_expression_repeat2] = STATE(216),
    [anon_sym_as] = ACTIONS(810),
    [anon_sym_QMARK] = ACTIONS(691),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(812),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(812),
    [sym_number] = ACTIONS(815),
    [anon_sym_true] = ACTIONS(818),
    [anon_sym_LBRACK] = ACTIONS(821),
    [anon_sym_LBRACE] = ACTIONS(824),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(827),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(830),
    [anon_sym_GT] = ACTIONS(691),
  },
  [217] = {
    [sym_type] = STATE(216),
    [sym_string] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_sequence] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_top_level] = STATE(113),
    [sym_spec_var] = STATE(113),
    [aux_sym_as_expression_repeat2] = STATE(216),
    [anon_sym_as] = ACTIONS(833),
    [anon_sym_QMARK] = ACTIONS(800),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(800),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(800),
    [sym_number] = ACTIONS(833),
    [anon_sym_true] = ACTIONS(833),
    [anon_sym_LBRACK] = ACTIONS(800),
    [anon_sym_LBRACE] = ACTIONS(800),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(833),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(800),
    [anon_sym_GT] = ACTIONS(800),
  },
  [218] = {
    [sym_type] = STATE(216),
    [sym_string] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_sequence] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_top_level] = STATE(113),
    [sym_spec_var] = STATE(113),
    [aux_sym_as_expression_repeat2] = STATE(216),
    [anon_sym_as] = ACTIONS(835),
    [anon_sym_QMARK] = ACTIONS(802),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(802),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(802),
    [sym_number] = ACTIONS(835),
    [anon_sym_true] = ACTIONS(835),
    [anon_sym_LBRACK] = ACTIONS(802),
    [anon_sym_LBRACE] = ACTIONS(802),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(802),
    [anon_sym_GT] = ACTIONS(802),
  },
  [219] = {
    [sym_directive] = STATE(222),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_elseif] = STATE(222),
    [sym_if_middle] = STATE(277),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_if_repeat1] = STATE(277),
    [anon_sym_LT_AT] = ACTIONS(9),
    [anon_sym_LT_POUNDlist] = ACTIONS(11),
    [anon_sym_LT_POUNDif] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(837),
    [anon_sym_LT_POUNDelseif] = ACTIONS(473),
    [anon_sym_LT_POUNDswitch] = ACTIONS(15),
    [anon_sym_LT_POUNDfunction] = ACTIONS(17),
    [anon_sym_LT_POUNDmacro] = ACTIONS(19),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(21),
    [sym_fallback] = ACTIONS(23),
    [sym_flush] = ACTIONS(23),
    [anon_sym_LT_POUNDftl] = ACTIONS(25),
    [anon_sym_LT_POUNDimport] = ACTIONS(27),
    [anon_sym_LT_POUNDinclude] = ACTIONS(29),
    [sym_lt] = ACTIONS(23),
    [sym_nt] = ACTIONS(23),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(31),
    [sym_rt] = ACTIONS(23),
    [anon_sym_LT_POUNDsetting] = ACTIONS(33),
    [sym_stop] = ACTIONS(23),
    [sym_t] = ACTIONS(23),
    [anon_sym_LT_POUNDvisit] = ACTIONS(35),
    [anon_sym_LT_POUNDassign] = ACTIONS(37),
    [sym_end_assign] = ACTIONS(39),
    [anon_sym_LT_POUNDglobal] = ACTIONS(41),
    [sym_end_global] = ACTIONS(43),
    [anon_sym_LT_POUNDlocal] = ACTIONS(45),
    [sym_end_local] = ACTIONS(47),
  },
  [220] = {
    [ts_builtin_sym_end] = ACTIONS(839),
    [sym_comment] = ACTIONS(839),
    [anon_sym_LT_AT] = ACTIONS(839),
    [anon_sym_LT_POUNDlist] = ACTIONS(839),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(839),
    [sym_break] = ACTIONS(839),
    [sym_continue] = ACTIONS(839),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(839),
    [anon_sym_LT_POUNDitems] = ACTIONS(839),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(839),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(839),
    [anon_sym_LT_POUNDif] = ACTIONS(839),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(839),
    [anon_sym_LT_POUNDelseif] = ACTIONS(839),
    [anon_sym_LT_POUNDswitch] = ACTIONS(839),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(839),
    [anon_sym_LT_POUNDcase] = ACTIONS(839),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(839),
    [anon_sym_LT_POUNDfunction] = ACTIONS(839),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(839),
    [anon_sym_LT_POUNDreturn] = ACTIONS(839),
    [anon_sym_LT_POUNDmacro] = ACTIONS(839),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(839),
    [anon_sym_LT_POUNDnested] = ACTIONS(839),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(839),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(839),
    [sym_recover] = ACTIONS(839),
    [sym_fallback] = ACTIONS(839),
    [sym_flush] = ACTIONS(839),
    [anon_sym_LT_POUNDftl] = ACTIONS(839),
    [anon_sym_LT_POUNDimport] = ACTIONS(839),
    [anon_sym_LT_POUNDinclude] = ACTIONS(839),
    [sym_lt] = ACTIONS(839),
    [sym_nt] = ACTIONS(839),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(839),
    [sym_rt] = ACTIONS(839),
    [anon_sym_LT_POUNDsetting] = ACTIONS(839),
    [sym_stop] = ACTIONS(839),
    [sym_t] = ACTIONS(839),
    [anon_sym_LT_POUNDvisit] = ACTIONS(839),
    [anon_sym_LT_POUNDassign] = ACTIONS(839),
    [sym_end_assign] = ACTIONS(839),
    [anon_sym_LT_POUNDglobal] = ACTIONS(839),
    [sym_end_global] = ACTIONS(839),
    [anon_sym_LT_POUNDlocal] = ACTIONS(839),
    [sym_end_local] = ACTIONS(839),
  },
  [221] = {
    [sym_parameter_group] = STATE(279),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(39),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(39),
    [aux_sym_group_repeat1] = STATE(279),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(841),
  },
  [222] = {
    [anon_sym_LT_AT] = ACTIONS(843),
    [anon_sym_LT_POUNDlist] = ACTIONS(843),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(843),
    [anon_sym_LT_POUNDif] = ACTIONS(843),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(843),
    [anon_sym_LT_POUNDelseif] = ACTIONS(843),
    [anon_sym_LT_POUNDswitch] = ACTIONS(843),
    [anon_sym_LT_POUNDfunction] = ACTIONS(843),
    [anon_sym_LT_POUNDmacro] = ACTIONS(843),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(843),
    [sym_fallback] = ACTIONS(843),
    [sym_flush] = ACTIONS(843),
    [anon_sym_LT_POUNDftl] = ACTIONS(843),
    [anon_sym_LT_POUNDimport] = ACTIONS(843),
    [anon_sym_LT_POUNDinclude] = ACTIONS(843),
    [sym_lt] = ACTIONS(843),
    [sym_nt] = ACTIONS(843),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(843),
    [sym_rt] = ACTIONS(843),
    [anon_sym_LT_POUNDsetting] = ACTIONS(843),
    [sym_stop] = ACTIONS(843),
    [sym_t] = ACTIONS(843),
    [anon_sym_LT_POUNDvisit] = ACTIONS(843),
    [anon_sym_LT_POUNDassign] = ACTIONS(843),
    [sym_end_assign] = ACTIONS(843),
    [anon_sym_LT_POUNDglobal] = ACTIONS(843),
    [sym_end_global] = ACTIONS(843),
    [anon_sym_LT_POUNDlocal] = ACTIONS(843),
    [sym_end_local] = ACTIONS(843),
  },
  [223] = {
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(845),
  },
  [224] = {
    [sym_directive] = STATE(222),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_if_else] = STATE(281),
    [sym_elseif] = STATE(222),
    [sym_if_middle] = STATE(282),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_if_repeat1] = STATE(282),
    [anon_sym_LT_AT] = ACTIONS(9),
    [anon_sym_LT_POUNDlist] = ACTIONS(11),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(469),
    [anon_sym_LT_POUNDif] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(845),
    [anon_sym_LT_POUNDelseif] = ACTIONS(473),
    [anon_sym_LT_POUNDswitch] = ACTIONS(15),
    [anon_sym_LT_POUNDfunction] = ACTIONS(17),
    [anon_sym_LT_POUNDmacro] = ACTIONS(19),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(21),
    [sym_fallback] = ACTIONS(23),
    [sym_flush] = ACTIONS(23),
    [anon_sym_LT_POUNDftl] = ACTIONS(25),
    [anon_sym_LT_POUNDimport] = ACTIONS(27),
    [anon_sym_LT_POUNDinclude] = ACTIONS(29),
    [sym_lt] = ACTIONS(23),
    [sym_nt] = ACTIONS(23),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(31),
    [sym_rt] = ACTIONS(23),
    [anon_sym_LT_POUNDsetting] = ACTIONS(33),
    [sym_stop] = ACTIONS(23),
    [sym_t] = ACTIONS(23),
    [anon_sym_LT_POUNDvisit] = ACTIONS(35),
    [anon_sym_LT_POUNDassign] = ACTIONS(37),
    [sym_end_assign] = ACTIONS(39),
    [anon_sym_LT_POUNDglobal] = ACTIONS(41),
    [sym_end_global] = ACTIONS(43),
    [anon_sym_LT_POUNDlocal] = ACTIONS(45),
    [sym_end_local] = ACTIONS(47),
  },
  [225] = {
    [ts_builtin_sym_end] = ACTIONS(847),
    [sym_comment] = ACTIONS(847),
    [anon_sym_LT_AT] = ACTIONS(847),
    [anon_sym_LT_POUNDlist] = ACTIONS(847),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(847),
    [sym_break] = ACTIONS(847),
    [sym_continue] = ACTIONS(847),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(847),
    [anon_sym_LT_POUNDitems] = ACTIONS(847),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(847),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(847),
    [anon_sym_LT_POUNDif] = ACTIONS(847),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(847),
    [anon_sym_LT_POUNDelseif] = ACTIONS(847),
    [anon_sym_LT_POUNDswitch] = ACTIONS(847),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(847),
    [anon_sym_LT_POUNDcase] = ACTIONS(847),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(847),
    [anon_sym_LT_POUNDfunction] = ACTIONS(847),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(847),
    [anon_sym_LT_POUNDreturn] = ACTIONS(847),
    [anon_sym_LT_POUNDmacro] = ACTIONS(847),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(847),
    [anon_sym_LT_POUNDnested] = ACTIONS(847),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(847),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(847),
    [sym_recover] = ACTIONS(847),
    [sym_fallback] = ACTIONS(847),
    [sym_flush] = ACTIONS(847),
    [anon_sym_LT_POUNDftl] = ACTIONS(847),
    [anon_sym_LT_POUNDimport] = ACTIONS(847),
    [anon_sym_LT_POUNDinclude] = ACTIONS(847),
    [sym_lt] = ACTIONS(847),
    [sym_nt] = ACTIONS(847),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(847),
    [sym_rt] = ACTIONS(847),
    [anon_sym_LT_POUNDsetting] = ACTIONS(847),
    [sym_stop] = ACTIONS(847),
    [sym_t] = ACTIONS(847),
    [anon_sym_LT_POUNDvisit] = ACTIONS(847),
    [anon_sym_LT_POUNDassign] = ACTIONS(847),
    [sym_end_assign] = ACTIONS(847),
    [anon_sym_LT_POUNDglobal] = ACTIONS(847),
    [sym_end_global] = ACTIONS(847),
    [anon_sym_LT_POUNDlocal] = ACTIONS(847),
    [sym_end_local] = ACTIONS(847),
  },
  [226] = {
    [sym_parameter_group] = STATE(283),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(36),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(36),
    [anon_sym_as] = ACTIONS(51),
    [anon_sym_QMARK] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
  },
  [227] = {
    [sym_directive] = STATE(284),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_case_repeat1] = STATE(284),
    [anon_sym_LT_AT] = ACTIONS(9),
    [anon_sym_LT_POUNDlist] = ACTIONS(11),
    [anon_sym_LT_POUNDif] = ACTIONS(13),
    [anon_sym_LT_POUNDswitch] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(849),
    [anon_sym_LT_POUNDfunction] = ACTIONS(17),
    [anon_sym_LT_POUNDmacro] = ACTIONS(19),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(21),
    [sym_fallback] = ACTIONS(23),
    [sym_flush] = ACTIONS(23),
    [anon_sym_LT_POUNDftl] = ACTIONS(25),
    [anon_sym_LT_POUNDimport] = ACTIONS(27),
    [anon_sym_LT_POUNDinclude] = ACTIONS(29),
    [sym_lt] = ACTIONS(23),
    [sym_nt] = ACTIONS(23),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(31),
    [sym_rt] = ACTIONS(23),
    [anon_sym_LT_POUNDsetting] = ACTIONS(33),
    [sym_stop] = ACTIONS(23),
    [sym_t] = ACTIONS(23),
    [anon_sym_LT_POUNDvisit] = ACTIONS(35),
    [anon_sym_LT_POUNDassign] = ACTIONS(37),
    [sym_end_assign] = ACTIONS(39),
    [anon_sym_LT_POUNDglobal] = ACTIONS(41),
    [sym_end_global] = ACTIONS(43),
    [anon_sym_LT_POUNDlocal] = ACTIONS(45),
    [sym_end_local] = ACTIONS(47),
  },
  [228] = {
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(851),
    [anon_sym_LT_POUNDcase] = ACTIONS(851),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(851),
  },
  [229] = {
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(853),
  },
  [230] = {
    [sym_case] = STATE(228),
    [sym_default] = STATE(286),
    [sym_switch_middle] = STATE(287),
    [aux_sym_switch_repeat1] = STATE(287),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(853),
    [anon_sym_LT_POUNDcase] = ACTIONS(506),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(508),
  },
  [231] = {
    [anon_sym_LT_AT] = ACTIONS(855),
    [anon_sym_LT_POUNDlist] = ACTIONS(855),
    [anon_sym_LT_POUNDif] = ACTIONS(855),
    [anon_sym_LT_POUNDswitch] = ACTIONS(855),
    [anon_sym_LT_POUNDfunction] = ACTIONS(855),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(855),
    [anon_sym_LT_POUNDreturn] = ACTIONS(855),
    [anon_sym_LT_POUNDmacro] = ACTIONS(855),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(855),
    [anon_sym_LT_POUNDnested] = ACTIONS(855),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(855),
    [sym_fallback] = ACTIONS(855),
    [sym_flush] = ACTIONS(855),
    [anon_sym_LT_POUNDftl] = ACTIONS(855),
    [anon_sym_LT_POUNDimport] = ACTIONS(855),
    [anon_sym_LT_POUNDinclude] = ACTIONS(855),
    [sym_lt] = ACTIONS(855),
    [sym_nt] = ACTIONS(855),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(855),
    [sym_rt] = ACTIONS(855),
    [anon_sym_LT_POUNDsetting] = ACTIONS(855),
    [sym_stop] = ACTIONS(855),
    [sym_t] = ACTIONS(855),
    [anon_sym_LT_POUNDvisit] = ACTIONS(855),
    [anon_sym_LT_POUNDassign] = ACTIONS(855),
    [sym_end_assign] = ACTIONS(855),
    [anon_sym_LT_POUNDglobal] = ACTIONS(855),
    [sym_end_global] = ACTIONS(855),
    [anon_sym_LT_POUNDlocal] = ACTIONS(855),
    [sym_end_local] = ACTIONS(855),
  },
  [232] = {
    [anon_sym_GT] = ACTIONS(857),
  },
  [233] = {
    [ts_builtin_sym_end] = ACTIONS(859),
    [sym_comment] = ACTIONS(859),
    [anon_sym_LT_AT] = ACTIONS(859),
    [anon_sym_LT_POUNDlist] = ACTIONS(859),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(859),
    [sym_break] = ACTIONS(859),
    [sym_continue] = ACTIONS(859),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(859),
    [anon_sym_LT_POUNDitems] = ACTIONS(859),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(859),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(859),
    [anon_sym_LT_POUNDif] = ACTIONS(859),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(859),
    [anon_sym_LT_POUNDelseif] = ACTIONS(859),
    [anon_sym_LT_POUNDswitch] = ACTIONS(859),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(859),
    [anon_sym_LT_POUNDcase] = ACTIONS(859),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(859),
    [anon_sym_LT_POUNDfunction] = ACTIONS(859),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(859),
    [anon_sym_LT_POUNDreturn] = ACTIONS(859),
    [anon_sym_LT_POUNDmacro] = ACTIONS(859),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(859),
    [anon_sym_LT_POUNDnested] = ACTIONS(859),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(859),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(859),
    [sym_recover] = ACTIONS(859),
    [sym_fallback] = ACTIONS(859),
    [sym_flush] = ACTIONS(859),
    [anon_sym_LT_POUNDftl] = ACTIONS(859),
    [anon_sym_LT_POUNDimport] = ACTIONS(859),
    [anon_sym_LT_POUNDinclude] = ACTIONS(859),
    [sym_lt] = ACTIONS(859),
    [sym_nt] = ACTIONS(859),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(859),
    [sym_rt] = ACTIONS(859),
    [anon_sym_LT_POUNDsetting] = ACTIONS(859),
    [sym_stop] = ACTIONS(859),
    [sym_t] = ACTIONS(859),
    [anon_sym_LT_POUNDvisit] = ACTIONS(859),
    [anon_sym_LT_POUNDassign] = ACTIONS(859),
    [sym_end_assign] = ACTIONS(859),
    [anon_sym_LT_POUNDglobal] = ACTIONS(859),
    [sym_end_global] = ACTIONS(859),
    [anon_sym_LT_POUNDlocal] = ACTIONS(859),
    [sym_end_local] = ACTIONS(859),
  },
  [234] = {
    [sym_directive] = STATE(131),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_function_middle] = STATE(234),
    [sym_return] = STATE(131),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_function_repeat1] = STATE(234),
    [anon_sym_LT_AT] = ACTIONS(861),
    [anon_sym_LT_POUNDlist] = ACTIONS(864),
    [anon_sym_LT_POUNDif] = ACTIONS(867),
    [anon_sym_LT_POUNDswitch] = ACTIONS(870),
    [anon_sym_LT_POUNDfunction] = ACTIONS(873),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(876),
    [anon_sym_LT_POUNDreturn] = ACTIONS(878),
    [anon_sym_LT_POUNDmacro] = ACTIONS(881),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(884),
    [sym_fallback] = ACTIONS(887),
    [sym_flush] = ACTIONS(887),
    [anon_sym_LT_POUNDftl] = ACTIONS(890),
    [anon_sym_LT_POUNDimport] = ACTIONS(893),
    [anon_sym_LT_POUNDinclude] = ACTIONS(896),
    [sym_lt] = ACTIONS(887),
    [sym_nt] = ACTIONS(887),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(899),
    [sym_rt] = ACTIONS(887),
    [anon_sym_LT_POUNDsetting] = ACTIONS(902),
    [sym_stop] = ACTIONS(887),
    [sym_t] = ACTIONS(887),
    [anon_sym_LT_POUNDvisit] = ACTIONS(905),
    [anon_sym_LT_POUNDassign] = ACTIONS(908),
    [sym_end_assign] = ACTIONS(911),
    [anon_sym_LT_POUNDglobal] = ACTIONS(914),
    [sym_end_global] = ACTIONS(917),
    [anon_sym_LT_POUNDlocal] = ACTIONS(920),
    [sym_end_local] = ACTIONS(923),
  },
  [235] = {
    [sym_directive] = STATE(131),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_function_middle] = STATE(234),
    [sym_return] = STATE(131),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_function_repeat1] = STATE(234),
    [anon_sym_LT_AT] = ACTIONS(9),
    [anon_sym_LT_POUNDlist] = ACTIONS(11),
    [anon_sym_LT_POUNDif] = ACTIONS(13),
    [anon_sym_LT_POUNDswitch] = ACTIONS(15),
    [anon_sym_LT_POUNDfunction] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(926),
    [anon_sym_LT_POUNDreturn] = ACTIONS(229),
    [anon_sym_LT_POUNDmacro] = ACTIONS(19),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(21),
    [sym_fallback] = ACTIONS(23),
    [sym_flush] = ACTIONS(23),
    [anon_sym_LT_POUNDftl] = ACTIONS(25),
    [anon_sym_LT_POUNDimport] = ACTIONS(27),
    [anon_sym_LT_POUNDinclude] = ACTIONS(29),
    [sym_lt] = ACTIONS(23),
    [sym_nt] = ACTIONS(23),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(31),
    [sym_rt] = ACTIONS(23),
    [anon_sym_LT_POUNDsetting] = ACTIONS(33),
    [sym_stop] = ACTIONS(23),
    [sym_t] = ACTIONS(23),
    [anon_sym_LT_POUNDvisit] = ACTIONS(35),
    [anon_sym_LT_POUNDassign] = ACTIONS(37),
    [sym_end_assign] = ACTIONS(39),
    [anon_sym_LT_POUNDglobal] = ACTIONS(41),
    [sym_end_global] = ACTIONS(43),
    [anon_sym_LT_POUNDlocal] = ACTIONS(45),
    [sym_end_local] = ACTIONS(47),
  },
  [236] = {
    [anon_sym_LT_AT] = ACTIONS(928),
    [anon_sym_LT_POUNDlist] = ACTIONS(928),
    [anon_sym_LT_POUNDif] = ACTIONS(928),
    [anon_sym_LT_POUNDswitch] = ACTIONS(928),
    [anon_sym_LT_POUNDfunction] = ACTIONS(928),
    [anon_sym_LT_POUNDreturn] = ACTIONS(928),
    [anon_sym_LT_POUNDmacro] = ACTIONS(928),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(928),
    [anon_sym_LT_POUNDnested] = ACTIONS(928),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(928),
    [sym_fallback] = ACTIONS(928),
    [sym_flush] = ACTIONS(928),
    [anon_sym_LT_POUNDftl] = ACTIONS(928),
    [anon_sym_LT_POUNDimport] = ACTIONS(928),
    [anon_sym_LT_POUNDinclude] = ACTIONS(928),
    [sym_lt] = ACTIONS(928),
    [sym_nt] = ACTIONS(928),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(928),
    [sym_rt] = ACTIONS(928),
    [anon_sym_LT_POUNDsetting] = ACTIONS(928),
    [sym_stop] = ACTIONS(928),
    [sym_t] = ACTIONS(928),
    [anon_sym_LT_POUNDvisit] = ACTIONS(928),
    [anon_sym_LT_POUNDassign] = ACTIONS(928),
    [sym_end_assign] = ACTIONS(928),
    [anon_sym_LT_POUNDglobal] = ACTIONS(928),
    [sym_end_global] = ACTIONS(928),
    [anon_sym_LT_POUNDlocal] = ACTIONS(928),
    [sym_end_local] = ACTIONS(928),
  },
  [237] = {
    [sym_parameter_group] = STATE(127),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(39),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(39),
    [aux_sym_group_repeat1] = STATE(127),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(930),
  },
  [238] = {
    [ts_builtin_sym_end] = ACTIONS(932),
    [sym_comment] = ACTIONS(932),
    [anon_sym_LT_AT] = ACTIONS(932),
    [anon_sym_LT_POUNDlist] = ACTIONS(932),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(932),
    [sym_break] = ACTIONS(932),
    [sym_continue] = ACTIONS(932),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(932),
    [anon_sym_LT_POUNDitems] = ACTIONS(932),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(932),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(932),
    [anon_sym_LT_POUNDif] = ACTIONS(932),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(932),
    [anon_sym_LT_POUNDelseif] = ACTIONS(932),
    [anon_sym_LT_POUNDswitch] = ACTIONS(932),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(932),
    [anon_sym_LT_POUNDcase] = ACTIONS(932),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(932),
    [anon_sym_LT_POUNDfunction] = ACTIONS(932),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(932),
    [anon_sym_LT_POUNDreturn] = ACTIONS(932),
    [anon_sym_LT_POUNDmacro] = ACTIONS(932),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(932),
    [anon_sym_LT_POUNDnested] = ACTIONS(932),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(932),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(932),
    [sym_recover] = ACTIONS(932),
    [sym_fallback] = ACTIONS(932),
    [sym_flush] = ACTIONS(932),
    [anon_sym_LT_POUNDftl] = ACTIONS(932),
    [anon_sym_LT_POUNDimport] = ACTIONS(932),
    [anon_sym_LT_POUNDinclude] = ACTIONS(932),
    [sym_lt] = ACTIONS(932),
    [sym_nt] = ACTIONS(932),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(932),
    [sym_rt] = ACTIONS(932),
    [anon_sym_LT_POUNDsetting] = ACTIONS(932),
    [sym_stop] = ACTIONS(932),
    [sym_t] = ACTIONS(932),
    [anon_sym_LT_POUNDvisit] = ACTIONS(932),
    [anon_sym_LT_POUNDassign] = ACTIONS(932),
    [sym_end_assign] = ACTIONS(932),
    [anon_sym_LT_POUNDglobal] = ACTIONS(932),
    [sym_end_global] = ACTIONS(932),
    [anon_sym_LT_POUNDlocal] = ACTIONS(932),
    [sym_end_local] = ACTIONS(932),
  },
  [239] = {
    [sym_directive] = STATE(136),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_return] = STATE(136),
    [sym_macro] = STATE(9),
    [sym_macro_middle] = STATE(239),
    [sym_nested] = STATE(136),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_macro_repeat1] = STATE(239),
    [anon_sym_LT_AT] = ACTIONS(934),
    [anon_sym_LT_POUNDlist] = ACTIONS(937),
    [anon_sym_LT_POUNDif] = ACTIONS(940),
    [anon_sym_LT_POUNDswitch] = ACTIONS(943),
    [anon_sym_LT_POUNDfunction] = ACTIONS(946),
    [anon_sym_LT_POUNDreturn] = ACTIONS(949),
    [anon_sym_LT_POUNDmacro] = ACTIONS(952),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(955),
    [anon_sym_LT_POUNDnested] = ACTIONS(957),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(960),
    [sym_fallback] = ACTIONS(963),
    [sym_flush] = ACTIONS(963),
    [anon_sym_LT_POUNDftl] = ACTIONS(966),
    [anon_sym_LT_POUNDimport] = ACTIONS(969),
    [anon_sym_LT_POUNDinclude] = ACTIONS(972),
    [sym_lt] = ACTIONS(963),
    [sym_nt] = ACTIONS(963),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(975),
    [sym_rt] = ACTIONS(963),
    [anon_sym_LT_POUNDsetting] = ACTIONS(978),
    [sym_stop] = ACTIONS(963),
    [sym_t] = ACTIONS(963),
    [anon_sym_LT_POUNDvisit] = ACTIONS(981),
    [anon_sym_LT_POUNDassign] = ACTIONS(984),
    [sym_end_assign] = ACTIONS(987),
    [anon_sym_LT_POUNDglobal] = ACTIONS(990),
    [sym_end_global] = ACTIONS(993),
    [anon_sym_LT_POUNDlocal] = ACTIONS(996),
    [sym_end_local] = ACTIONS(999),
  },
  [240] = {
    [sym_directive] = STATE(136),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_return] = STATE(136),
    [sym_macro] = STATE(9),
    [sym_macro_middle] = STATE(239),
    [sym_nested] = STATE(136),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_macro_repeat1] = STATE(239),
    [anon_sym_LT_AT] = ACTIONS(9),
    [anon_sym_LT_POUNDlist] = ACTIONS(11),
    [anon_sym_LT_POUNDif] = ACTIONS(13),
    [anon_sym_LT_POUNDswitch] = ACTIONS(15),
    [anon_sym_LT_POUNDfunction] = ACTIONS(17),
    [anon_sym_LT_POUNDreturn] = ACTIONS(229),
    [anon_sym_LT_POUNDmacro] = ACTIONS(19),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1002),
    [anon_sym_LT_POUNDnested] = ACTIONS(235),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(21),
    [sym_fallback] = ACTIONS(23),
    [sym_flush] = ACTIONS(23),
    [anon_sym_LT_POUNDftl] = ACTIONS(25),
    [anon_sym_LT_POUNDimport] = ACTIONS(27),
    [anon_sym_LT_POUNDinclude] = ACTIONS(29),
    [sym_lt] = ACTIONS(23),
    [sym_nt] = ACTIONS(23),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(31),
    [sym_rt] = ACTIONS(23),
    [anon_sym_LT_POUNDsetting] = ACTIONS(33),
    [sym_stop] = ACTIONS(23),
    [sym_t] = ACTIONS(23),
    [anon_sym_LT_POUNDvisit] = ACTIONS(35),
    [anon_sym_LT_POUNDassign] = ACTIONS(37),
    [sym_end_assign] = ACTIONS(39),
    [anon_sym_LT_POUNDglobal] = ACTIONS(41),
    [sym_end_global] = ACTIONS(43),
    [anon_sym_LT_POUNDlocal] = ACTIONS(45),
    [sym_end_local] = ACTIONS(47),
  },
  [241] = {
    [sym_type] = STATE(241),
    [sym_string] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_sequence] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_top_level] = STATE(113),
    [sym_spec_var] = STATE(113),
    [aux_sym_as_expression_repeat2] = STATE(241),
    [anon_sym_as] = ACTIONS(810),
    [anon_sym_QMARK] = ACTIONS(691),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(812),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(812),
    [sym_number] = ACTIONS(815),
    [anon_sym_true] = ACTIONS(818),
    [anon_sym_LBRACK] = ACTIONS(821),
    [anon_sym_LBRACE] = ACTIONS(824),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(827),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(830),
    [anon_sym_GT] = ACTIONS(691),
    [anon_sym_SLASH_GT] = ACTIONS(691),
  },
  [242] = {
    [anon_sym_as] = ACTIONS(728),
    [anon_sym_QMARK] = ACTIONS(728),
    [anon_sym_using] = ACTIONS(728),
    [anon_sym_COMMA] = ACTIONS(730),
    [anon_sym_DOT_DOT] = ACTIONS(728),
    [anon_sym_DOT_DOT_LT] = ACTIONS(730),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(730),
    [anon_sym_COLON] = ACTIONS(730),
    [anon_sym_STAR] = ACTIONS(728),
    [anon_sym_PLUS] = ACTIONS(728),
    [anon_sym_SLASH] = ACTIONS(728),
    [anon_sym_DASH] = ACTIONS(728),
    [anon_sym_PERCENT] = ACTIONS(728),
    [anon_sym_EQ_EQ] = ACTIONS(730),
    [anon_sym_BANG_EQ] = ACTIONS(730),
    [anon_sym_LT] = ACTIONS(728),
    [anon_sym_LT_EQ] = ACTIONS(730),
    [anon_sym_lt] = ACTIONS(728),
    [anon_sym_lte] = ACTIONS(728),
    [anon_sym_gt] = ACTIONS(728),
    [anon_sym_gte] = ACTIONS(728),
    [anon_sym_BANG] = ACTIONS(728),
    [anon_sym_AMP_AMP] = ACTIONS(730),
    [anon_sym_PIPE_PIPE] = ACTIONS(730),
    [anon_sym_QMARK_QMARK] = ACTIONS(730),
    [anon_sym_EQ] = ACTIONS(728),
    [anon_sym_PLUS_EQ] = ACTIONS(730),
    [anon_sym_DASH_EQ] = ACTIONS(730),
    [anon_sym_STAR_EQ] = ACTIONS(730),
    [anon_sym_SLASH_EQ] = ACTIONS(730),
    [anon_sym_PERCENT_EQ] = ACTIONS(730),
    [anon_sym_PLUS_PLUS] = ACTIONS(730),
    [anon_sym_DASH_DASH] = ACTIONS(730),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(730),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(730),
    [sym_number] = ACTIONS(728),
    [anon_sym_true] = ACTIONS(728),
    [anon_sym_LBRACK] = ACTIONS(730),
    [anon_sym_LBRACE] = ACTIONS(730),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(728),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(730),
    [anon_sym_GT] = ACTIONS(730),
    [anon_sym_SLASH_GT] = ACTIONS(730),
  },
  [243] = {
    [anon_sym_as] = ACTIONS(753),
    [anon_sym_QMARK] = ACTIONS(753),
    [anon_sym_using] = ACTIONS(753),
    [anon_sym_COMMA] = ACTIONS(755),
    [anon_sym_DOT_DOT] = ACTIONS(753),
    [anon_sym_DOT_DOT_LT] = ACTIONS(755),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(755),
    [anon_sym_COLON] = ACTIONS(755),
    [anon_sym_STAR] = ACTIONS(753),
    [anon_sym_PLUS] = ACTIONS(753),
    [anon_sym_SLASH] = ACTIONS(753),
    [anon_sym_DASH] = ACTIONS(753),
    [anon_sym_PERCENT] = ACTIONS(753),
    [anon_sym_EQ_EQ] = ACTIONS(755),
    [anon_sym_BANG_EQ] = ACTIONS(755),
    [anon_sym_LT] = ACTIONS(753),
    [anon_sym_LT_EQ] = ACTIONS(755),
    [anon_sym_lt] = ACTIONS(753),
    [anon_sym_lte] = ACTIONS(753),
    [anon_sym_gt] = ACTIONS(753),
    [anon_sym_gte] = ACTIONS(753),
    [anon_sym_BANG] = ACTIONS(753),
    [anon_sym_AMP_AMP] = ACTIONS(755),
    [anon_sym_PIPE_PIPE] = ACTIONS(755),
    [anon_sym_QMARK_QMARK] = ACTIONS(755),
    [anon_sym_EQ] = ACTIONS(753),
    [anon_sym_PLUS_EQ] = ACTIONS(755),
    [anon_sym_DASH_EQ] = ACTIONS(755),
    [anon_sym_STAR_EQ] = ACTIONS(755),
    [anon_sym_SLASH_EQ] = ACTIONS(755),
    [anon_sym_PERCENT_EQ] = ACTIONS(755),
    [anon_sym_PLUS_PLUS] = ACTIONS(755),
    [anon_sym_DASH_DASH] = ACTIONS(755),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(755),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(755),
    [sym_number] = ACTIONS(753),
    [anon_sym_true] = ACTIONS(753),
    [anon_sym_LBRACK] = ACTIONS(755),
    [anon_sym_LBRACE] = ACTIONS(755),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(753),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(755),
    [anon_sym_GT] = ACTIONS(755),
    [anon_sym_SLASH_GT] = ACTIONS(755),
  },
  [244] = {
    [anon_sym_as] = ACTIONS(780),
    [anon_sym_QMARK] = ACTIONS(780),
    [anon_sym_using] = ACTIONS(780),
    [anon_sym_COMMA] = ACTIONS(782),
    [anon_sym_DOT_DOT] = ACTIONS(780),
    [anon_sym_DOT_DOT_LT] = ACTIONS(782),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(782),
    [anon_sym_COLON] = ACTIONS(782),
    [anon_sym_STAR] = ACTIONS(780),
    [anon_sym_PLUS] = ACTIONS(780),
    [anon_sym_SLASH] = ACTIONS(780),
    [anon_sym_DASH] = ACTIONS(780),
    [anon_sym_PERCENT] = ACTIONS(780),
    [anon_sym_EQ_EQ] = ACTIONS(782),
    [anon_sym_BANG_EQ] = ACTIONS(782),
    [anon_sym_LT] = ACTIONS(780),
    [anon_sym_LT_EQ] = ACTIONS(782),
    [anon_sym_lt] = ACTIONS(780),
    [anon_sym_lte] = ACTIONS(780),
    [anon_sym_gt] = ACTIONS(780),
    [anon_sym_gte] = ACTIONS(780),
    [anon_sym_BANG] = ACTIONS(780),
    [anon_sym_AMP_AMP] = ACTIONS(782),
    [anon_sym_PIPE_PIPE] = ACTIONS(782),
    [anon_sym_QMARK_QMARK] = ACTIONS(782),
    [anon_sym_EQ] = ACTIONS(780),
    [anon_sym_PLUS_EQ] = ACTIONS(782),
    [anon_sym_DASH_EQ] = ACTIONS(782),
    [anon_sym_STAR_EQ] = ACTIONS(782),
    [anon_sym_SLASH_EQ] = ACTIONS(782),
    [anon_sym_PERCENT_EQ] = ACTIONS(782),
    [anon_sym_PLUS_PLUS] = ACTIONS(782),
    [anon_sym_DASH_DASH] = ACTIONS(782),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(782),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(782),
    [sym_number] = ACTIONS(780),
    [anon_sym_true] = ACTIONS(780),
    [anon_sym_LBRACK] = ACTIONS(782),
    [anon_sym_LBRACE] = ACTIONS(782),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(780),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(782),
    [anon_sym_GT] = ACTIONS(782),
    [anon_sym_SLASH_GT] = ACTIONS(782),
  },
  [245] = {
    [sym_parameter_group] = STATE(266),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(196),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(196),
    [aux_sym_group_repeat1] = STATE(266),
    [anon_sym_as] = ACTIONS(402),
    [anon_sym_QMARK] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(1004),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
  },
  [246] = {
    [sym_type] = STATE(241),
    [sym_string] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_sequence] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_top_level] = STATE(113),
    [sym_spec_var] = STATE(113),
    [aux_sym_as_expression_repeat2] = STATE(241),
    [anon_sym_as] = ACTIONS(833),
    [anon_sym_QMARK] = ACTIONS(800),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(800),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(800),
    [sym_number] = ACTIONS(833),
    [anon_sym_true] = ACTIONS(833),
    [anon_sym_LBRACK] = ACTIONS(800),
    [anon_sym_LBRACE] = ACTIONS(800),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(833),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(800),
    [anon_sym_GT] = ACTIONS(800),
    [anon_sym_SLASH_GT] = ACTIONS(800),
  },
  [247] = {
    [sym_type] = STATE(241),
    [sym_string] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_sequence] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_top_level] = STATE(113),
    [sym_spec_var] = STATE(113),
    [aux_sym_as_expression_repeat2] = STATE(241),
    [anon_sym_as] = ACTIONS(835),
    [anon_sym_QMARK] = ACTIONS(802),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(802),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(802),
    [sym_number] = ACTIONS(835),
    [anon_sym_true] = ACTIONS(835),
    [anon_sym_LBRACK] = ACTIONS(802),
    [anon_sym_LBRACE] = ACTIONS(802),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(802),
    [anon_sym_GT] = ACTIONS(802),
    [anon_sym_SLASH_GT] = ACTIONS(802),
  },
  [248] = {
    [anon_sym_COMMA] = ACTIONS(730),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(730),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(730),
    [sym_number] = ACTIONS(728),
    [anon_sym_true] = ACTIONS(728),
    [anon_sym_LBRACK] = ACTIONS(730),
    [anon_sym_RBRACK] = ACTIONS(730),
    [anon_sym_LBRACE] = ACTIONS(730),
    [anon_sym_RBRACE] = ACTIONS(730),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(728),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(730),
    [anon_sym_GT] = ACTIONS(730),
  },
  [249] = {
    [anon_sym_COMMA] = ACTIONS(755),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(755),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(755),
    [sym_number] = ACTIONS(753),
    [anon_sym_true] = ACTIONS(753),
    [anon_sym_LBRACK] = ACTIONS(755),
    [anon_sym_RBRACK] = ACTIONS(755),
    [anon_sym_LBRACE] = ACTIONS(755),
    [anon_sym_RBRACE] = ACTIONS(755),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(753),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(755),
    [anon_sym_GT] = ACTIONS(755),
  },
  [250] = {
    [anon_sym_COMMA] = ACTIONS(782),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(782),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(782),
    [sym_number] = ACTIONS(780),
    [anon_sym_true] = ACTIONS(780),
    [anon_sym_LBRACK] = ACTIONS(782),
    [anon_sym_RBRACK] = ACTIONS(782),
    [anon_sym_LBRACE] = ACTIONS(782),
    [anon_sym_RBRACE] = ACTIONS(782),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(780),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(782),
    [anon_sym_GT] = ACTIONS(782),
  },
  [251] = {
    [sym_parameter_group] = STATE(266),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(196),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(196),
    [aux_sym_group_repeat1] = STATE(266),
    [anon_sym_as] = ACTIONS(402),
    [anon_sym_QMARK] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(1006),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
  },
  [252] = {
    [anon_sym_using] = ACTIONS(728),
    [anon_sym_COMMA] = ACTIONS(730),
    [anon_sym_DOT_DOT] = ACTIONS(728),
    [anon_sym_DOT_DOT_LT] = ACTIONS(730),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(730),
    [anon_sym_COLON] = ACTIONS(730),
    [anon_sym_STAR] = ACTIONS(728),
    [anon_sym_PLUS] = ACTIONS(728),
    [anon_sym_SLASH] = ACTIONS(728),
    [anon_sym_DASH] = ACTIONS(728),
    [anon_sym_PERCENT] = ACTIONS(728),
    [anon_sym_EQ_EQ] = ACTIONS(730),
    [anon_sym_BANG_EQ] = ACTIONS(730),
    [anon_sym_LT] = ACTIONS(728),
    [anon_sym_LT_EQ] = ACTIONS(730),
    [anon_sym_lt] = ACTIONS(728),
    [anon_sym_lte] = ACTIONS(728),
    [anon_sym_gt] = ACTIONS(728),
    [anon_sym_gte] = ACTIONS(728),
    [anon_sym_BANG] = ACTIONS(728),
    [anon_sym_AMP_AMP] = ACTIONS(730),
    [anon_sym_PIPE_PIPE] = ACTIONS(730),
    [anon_sym_QMARK_QMARK] = ACTIONS(730),
    [anon_sym_EQ] = ACTIONS(728),
    [anon_sym_PLUS_EQ] = ACTIONS(730),
    [anon_sym_DASH_EQ] = ACTIONS(730),
    [anon_sym_STAR_EQ] = ACTIONS(730),
    [anon_sym_SLASH_EQ] = ACTIONS(730),
    [anon_sym_PERCENT_EQ] = ACTIONS(730),
    [anon_sym_PLUS_PLUS] = ACTIONS(730),
    [anon_sym_DASH_DASH] = ACTIONS(730),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(730),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(730),
    [sym_number] = ACTIONS(728),
    [anon_sym_true] = ACTIONS(728),
    [anon_sym_LBRACK] = ACTIONS(730),
    [anon_sym_RBRACK] = ACTIONS(730),
    [anon_sym_LBRACE] = ACTIONS(730),
    [anon_sym_RBRACE] = ACTIONS(730),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(728),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(730),
  },
  [253] = {
    [anon_sym_using] = ACTIONS(753),
    [anon_sym_COMMA] = ACTIONS(755),
    [anon_sym_DOT_DOT] = ACTIONS(753),
    [anon_sym_DOT_DOT_LT] = ACTIONS(755),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(755),
    [anon_sym_COLON] = ACTIONS(755),
    [anon_sym_STAR] = ACTIONS(753),
    [anon_sym_PLUS] = ACTIONS(753),
    [anon_sym_SLASH] = ACTIONS(753),
    [anon_sym_DASH] = ACTIONS(753),
    [anon_sym_PERCENT] = ACTIONS(753),
    [anon_sym_EQ_EQ] = ACTIONS(755),
    [anon_sym_BANG_EQ] = ACTIONS(755),
    [anon_sym_LT] = ACTIONS(753),
    [anon_sym_LT_EQ] = ACTIONS(755),
    [anon_sym_lt] = ACTIONS(753),
    [anon_sym_lte] = ACTIONS(753),
    [anon_sym_gt] = ACTIONS(753),
    [anon_sym_gte] = ACTIONS(753),
    [anon_sym_BANG] = ACTIONS(753),
    [anon_sym_AMP_AMP] = ACTIONS(755),
    [anon_sym_PIPE_PIPE] = ACTIONS(755),
    [anon_sym_QMARK_QMARK] = ACTIONS(755),
    [anon_sym_EQ] = ACTIONS(753),
    [anon_sym_PLUS_EQ] = ACTIONS(755),
    [anon_sym_DASH_EQ] = ACTIONS(755),
    [anon_sym_STAR_EQ] = ACTIONS(755),
    [anon_sym_SLASH_EQ] = ACTIONS(755),
    [anon_sym_PERCENT_EQ] = ACTIONS(755),
    [anon_sym_PLUS_PLUS] = ACTIONS(755),
    [anon_sym_DASH_DASH] = ACTIONS(755),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(755),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(755),
    [sym_number] = ACTIONS(753),
    [anon_sym_true] = ACTIONS(753),
    [anon_sym_LBRACK] = ACTIONS(755),
    [anon_sym_RBRACK] = ACTIONS(755),
    [anon_sym_LBRACE] = ACTIONS(755),
    [anon_sym_RBRACE] = ACTIONS(755),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(753),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(755),
  },
  [254] = {
    [anon_sym_using] = ACTIONS(780),
    [anon_sym_COMMA] = ACTIONS(782),
    [anon_sym_DOT_DOT] = ACTIONS(780),
    [anon_sym_DOT_DOT_LT] = ACTIONS(782),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(782),
    [anon_sym_COLON] = ACTIONS(782),
    [anon_sym_STAR] = ACTIONS(780),
    [anon_sym_PLUS] = ACTIONS(780),
    [anon_sym_SLASH] = ACTIONS(780),
    [anon_sym_DASH] = ACTIONS(780),
    [anon_sym_PERCENT] = ACTIONS(780),
    [anon_sym_EQ_EQ] = ACTIONS(782),
    [anon_sym_BANG_EQ] = ACTIONS(782),
    [anon_sym_LT] = ACTIONS(780),
    [anon_sym_LT_EQ] = ACTIONS(782),
    [anon_sym_lt] = ACTIONS(780),
    [anon_sym_lte] = ACTIONS(780),
    [anon_sym_gt] = ACTIONS(780),
    [anon_sym_gte] = ACTIONS(780),
    [anon_sym_BANG] = ACTIONS(780),
    [anon_sym_AMP_AMP] = ACTIONS(782),
    [anon_sym_PIPE_PIPE] = ACTIONS(782),
    [anon_sym_QMARK_QMARK] = ACTIONS(782),
    [anon_sym_EQ] = ACTIONS(780),
    [anon_sym_PLUS_EQ] = ACTIONS(782),
    [anon_sym_DASH_EQ] = ACTIONS(782),
    [anon_sym_STAR_EQ] = ACTIONS(782),
    [anon_sym_SLASH_EQ] = ACTIONS(782),
    [anon_sym_PERCENT_EQ] = ACTIONS(782),
    [anon_sym_PLUS_PLUS] = ACTIONS(782),
    [anon_sym_DASH_DASH] = ACTIONS(782),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(782),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(782),
    [sym_number] = ACTIONS(780),
    [anon_sym_true] = ACTIONS(780),
    [anon_sym_LBRACK] = ACTIONS(782),
    [anon_sym_RBRACK] = ACTIONS(782),
    [anon_sym_LBRACE] = ACTIONS(782),
    [anon_sym_RBRACE] = ACTIONS(782),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(780),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(782),
  },
  [255] = {
    [sym_parameter_group] = STATE(266),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(196),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(196),
    [aux_sym_group_repeat1] = STATE(266),
    [anon_sym_as] = ACTIONS(402),
    [anon_sym_QMARK] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(1008),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
  },
  [256] = {
    [sym_type] = STATE(257),
    [sym_string] = STATE(80),
    [sym_boolean] = STATE(80),
    [sym_sequence] = STATE(80),
    [sym_hash] = STATE(80),
    [sym_top_level] = STATE(80),
    [sym_spec_var] = STATE(80),
    [aux_sym_as_expression_repeat2] = STATE(257),
    [anon_sym_COMMA] = ACTIONS(802),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(802),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(802),
    [sym_number] = ACTIONS(835),
    [anon_sym_true] = ACTIONS(835),
    [anon_sym_LBRACK] = ACTIONS(802),
    [anon_sym_RBRACK] = ACTIONS(802),
    [anon_sym_LBRACE] = ACTIONS(802),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(802),
  },
  [257] = {
    [sym_type] = STATE(257),
    [sym_string] = STATE(80),
    [sym_boolean] = STATE(80),
    [sym_sequence] = STATE(80),
    [sym_hash] = STATE(80),
    [sym_top_level] = STATE(80),
    [sym_spec_var] = STATE(80),
    [aux_sym_as_expression_repeat2] = STATE(257),
    [anon_sym_COMMA] = ACTIONS(691),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(670),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(670),
    [sym_number] = ACTIONS(673),
    [anon_sym_true] = ACTIONS(676),
    [anon_sym_LBRACK] = ACTIONS(679),
    [anon_sym_RBRACK] = ACTIONS(691),
    [anon_sym_LBRACE] = ACTIONS(682),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(685),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(688),
  },
  [258] = {
    [sym_type] = STATE(259),
    [sym_string] = STATE(80),
    [sym_boolean] = STATE(80),
    [sym_sequence] = STATE(80),
    [sym_hash] = STATE(80),
    [sym_top_level] = STATE(80),
    [sym_spec_var] = STATE(80),
    [aux_sym_as_expression_repeat2] = STATE(259),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(802),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(802),
    [sym_number] = ACTIONS(835),
    [anon_sym_true] = ACTIONS(835),
    [anon_sym_LBRACK] = ACTIONS(802),
    [anon_sym_LBRACE] = ACTIONS(802),
    [anon_sym_RBRACE] = ACTIONS(802),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(802),
  },
  [259] = {
    [sym_type] = STATE(259),
    [sym_string] = STATE(80),
    [sym_boolean] = STATE(80),
    [sym_sequence] = STATE(80),
    [sym_hash] = STATE(80),
    [sym_top_level] = STATE(80),
    [sym_spec_var] = STATE(80),
    [aux_sym_as_expression_repeat2] = STATE(259),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(670),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(670),
    [sym_number] = ACTIONS(673),
    [anon_sym_true] = ACTIONS(676),
    [anon_sym_LBRACK] = ACTIONS(679),
    [anon_sym_LBRACE] = ACTIONS(682),
    [anon_sym_RBRACE] = ACTIONS(691),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(685),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(688),
  },
  [260] = {
    [sym_type] = STATE(295),
    [sym_string] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_sequence] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_top_level] = STATE(113),
    [sym_spec_var] = STATE(113),
    [aux_sym_as_expression_repeat2] = STATE(295),
    [anon_sym_as] = ACTIONS(463),
    [anon_sym_QMARK] = ACTIONS(368),
    [anon_sym_RPAREN] = ACTIONS(368),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(368),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(368),
    [sym_number] = ACTIONS(463),
    [anon_sym_true] = ACTIONS(463),
    [anon_sym_LBRACK] = ACTIONS(368),
    [anon_sym_LBRACE] = ACTIONS(368),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(463),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(368),
  },
  [261] = {
    [sym_type] = STATE(296),
    [sym_string] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_sequence] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_top_level] = STATE(113),
    [sym_spec_var] = STATE(113),
    [aux_sym_as_expression_repeat2] = STATE(296),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(199),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(199),
    [sym_number] = ACTIONS(201),
    [anon_sym_true] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(207),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(209),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(211),
  },
  [262] = {
    [sym_type] = STATE(297),
    [sym_string] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_sequence] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_top_level] = STATE(113),
    [sym_spec_var] = STATE(113),
    [aux_sym_as_expression_repeat2] = STATE(297),
    [anon_sym_as] = ACTIONS(467),
    [anon_sym_QMARK] = ACTIONS(428),
    [anon_sym_RPAREN] = ACTIONS(428),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(199),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(199),
    [sym_number] = ACTIONS(201),
    [anon_sym_true] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(207),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(209),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(211),
  },
  [263] = {
    [sym_type] = STATE(263),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(263),
    [anon_sym_as] = ACTIONS(430),
    [anon_sym_QMARK] = ACTIONS(430),
    [anon_sym_RPAREN] = ACTIONS(432),
    [anon_sym_using] = ACTIONS(430),
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_DOT_DOT] = ACTIONS(430),
    [anon_sym_DOT_DOT_LT] = ACTIONS(432),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(432),
    [anon_sym_COLON] = ACTIONS(432),
    [anon_sym_STAR] = ACTIONS(430),
    [anon_sym_PLUS] = ACTIONS(430),
    [anon_sym_SLASH] = ACTIONS(430),
    [anon_sym_DASH] = ACTIONS(430),
    [anon_sym_PERCENT] = ACTIONS(430),
    [anon_sym_EQ_EQ] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(432),
    [anon_sym_LT] = ACTIONS(430),
    [anon_sym_LT_EQ] = ACTIONS(432),
    [anon_sym_lt] = ACTIONS(430),
    [anon_sym_lte] = ACTIONS(430),
    [anon_sym_gt] = ACTIONS(430),
    [anon_sym_gte] = ACTIONS(430),
    [anon_sym_BANG] = ACTIONS(430),
    [anon_sym_AMP_AMP] = ACTIONS(432),
    [anon_sym_PIPE_PIPE] = ACTIONS(432),
    [anon_sym_QMARK_QMARK] = ACTIONS(432),
    [anon_sym_EQ] = ACTIONS(430),
    [anon_sym_PLUS_EQ] = ACTIONS(432),
    [anon_sym_DASH_EQ] = ACTIONS(432),
    [anon_sym_STAR_EQ] = ACTIONS(432),
    [anon_sym_SLASH_EQ] = ACTIONS(432),
    [anon_sym_PERCENT_EQ] = ACTIONS(432),
    [anon_sym_PLUS_PLUS] = ACTIONS(432),
    [anon_sym_DASH_DASH] = ACTIONS(432),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(434),
    [sym_number] = ACTIONS(437),
    [anon_sym_true] = ACTIONS(440),
    [anon_sym_LBRACK] = ACTIONS(443),
    [anon_sym_LBRACE] = ACTIONS(446),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(449),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(452),
  },
  [264] = {
    [sym_type] = STATE(295),
    [sym_string] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_sequence] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_top_level] = STATE(113),
    [sym_spec_var] = STATE(113),
    [aux_sym_as_expression_repeat2] = STATE(295),
    [anon_sym_as] = ACTIONS(467),
    [anon_sym_QMARK] = ACTIONS(428),
    [anon_sym_RPAREN] = ACTIONS(428),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(428),
    [sym_number] = ACTIONS(467),
    [anon_sym_true] = ACTIONS(467),
    [anon_sym_LBRACK] = ACTIONS(428),
    [anon_sym_LBRACE] = ACTIONS(428),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(467),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(428),
  },
  [265] = {
    [anon_sym_as] = ACTIONS(1010),
    [anon_sym_QMARK] = ACTIONS(1010),
    [anon_sym_LPAREN] = ACTIONS(1012),
    [anon_sym_RPAREN] = ACTIONS(1012),
    [anon_sym_using] = ACTIONS(1010),
    [anon_sym_COMMA] = ACTIONS(1012),
    [anon_sym_DOT_DOT] = ACTIONS(1010),
    [anon_sym_DOT_DOT_LT] = ACTIONS(1012),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(1012),
    [anon_sym_COLON] = ACTIONS(1012),
    [anon_sym_STAR] = ACTIONS(1010),
    [anon_sym_PLUS] = ACTIONS(1010),
    [anon_sym_SLASH] = ACTIONS(1010),
    [anon_sym_DASH] = ACTIONS(1010),
    [anon_sym_PERCENT] = ACTIONS(1010),
    [anon_sym_EQ_EQ] = ACTIONS(1012),
    [anon_sym_BANG_EQ] = ACTIONS(1012),
    [anon_sym_LT] = ACTIONS(1010),
    [anon_sym_LT_EQ] = ACTIONS(1012),
    [anon_sym_lt] = ACTIONS(1010),
    [anon_sym_lte] = ACTIONS(1010),
    [anon_sym_gt] = ACTIONS(1010),
    [anon_sym_gte] = ACTIONS(1010),
    [anon_sym_BANG] = ACTIONS(1010),
    [anon_sym_AMP_AMP] = ACTIONS(1012),
    [anon_sym_PIPE_PIPE] = ACTIONS(1012),
    [anon_sym_QMARK_QMARK] = ACTIONS(1012),
    [anon_sym_EQ] = ACTIONS(1010),
    [anon_sym_PLUS_EQ] = ACTIONS(1012),
    [anon_sym_DASH_EQ] = ACTIONS(1012),
    [anon_sym_STAR_EQ] = ACTIONS(1012),
    [anon_sym_SLASH_EQ] = ACTIONS(1012),
    [anon_sym_PERCENT_EQ] = ACTIONS(1012),
    [anon_sym_PLUS_PLUS] = ACTIONS(1012),
    [anon_sym_DASH_DASH] = ACTIONS(1012),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1012),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1012),
    [sym_number] = ACTIONS(1010),
    [anon_sym_true] = ACTIONS(1010),
    [anon_sym_LBRACK] = ACTIONS(1012),
    [anon_sym_LBRACE] = ACTIONS(1012),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1010),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1012),
    [anon_sym_GT] = ACTIONS(1012),
  },
  [266] = {
    [sym_parameter_group] = STATE(266),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(196),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(196),
    [aux_sym_group_repeat1] = STATE(266),
    [anon_sym_as] = ACTIONS(1014),
    [anon_sym_QMARK] = ACTIONS(478),
    [anon_sym_RPAREN] = ACTIONS(502),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(481),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(481),
    [sym_number] = ACTIONS(484),
    [anon_sym_true] = ACTIONS(487),
    [anon_sym_LBRACK] = ACTIONS(490),
    [anon_sym_LBRACE] = ACTIONS(493),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(496),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(499),
  },
  [267] = {
    [sym_directive] = STATE(199),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_list_middle] = STATE(298),
    [sym_items] = STATE(199),
    [sym_sep] = STATE(199),
    [sym_sep_block] = STATE(204),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_list_repeat1] = STATE(298),
    [anon_sym_LT_AT] = ACTIONS(9),
    [anon_sym_LT_POUNDlist] = ACTIONS(11),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1017),
    [sym_break] = ACTIONS(416),
    [sym_continue] = ACTIONS(416),
    [anon_sym_LT_POUNDitems] = ACTIONS(420),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(422),
    [anon_sym_LT_POUNDif] = ACTIONS(13),
    [anon_sym_LT_POUNDswitch] = ACTIONS(15),
    [anon_sym_LT_POUNDfunction] = ACTIONS(17),
    [anon_sym_LT_POUNDmacro] = ACTIONS(19),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(21),
    [sym_fallback] = ACTIONS(23),
    [sym_flush] = ACTIONS(23),
    [anon_sym_LT_POUNDftl] = ACTIONS(25),
    [anon_sym_LT_POUNDimport] = ACTIONS(27),
    [anon_sym_LT_POUNDinclude] = ACTIONS(29),
    [sym_lt] = ACTIONS(23),
    [sym_nt] = ACTIONS(23),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(31),
    [sym_rt] = ACTIONS(23),
    [anon_sym_LT_POUNDsetting] = ACTIONS(33),
    [sym_stop] = ACTIONS(23),
    [sym_t] = ACTIONS(23),
    [anon_sym_LT_POUNDvisit] = ACTIONS(35),
    [anon_sym_LT_POUNDassign] = ACTIONS(37),
    [sym_end_assign] = ACTIONS(39),
    [anon_sym_LT_POUNDglobal] = ACTIONS(41),
    [sym_end_global] = ACTIONS(43),
    [anon_sym_LT_POUNDlocal] = ACTIONS(45),
    [sym_end_local] = ACTIONS(47),
  },
  [268] = {
    [anon_sym_GT] = ACTIONS(1019),
  },
  [269] = {
    [anon_sym_LT_AT] = ACTIONS(1021),
    [anon_sym_LT_POUNDlist] = ACTIONS(1021),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1021),
    [sym_break] = ACTIONS(1021),
    [sym_continue] = ACTIONS(1021),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1021),
    [anon_sym_LT_POUNDitems] = ACTIONS(1021),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1021),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1021),
    [anon_sym_LT_POUNDif] = ACTIONS(1021),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1021),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1021),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1021),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1021),
    [sym_fallback] = ACTIONS(1021),
    [sym_flush] = ACTIONS(1021),
    [anon_sym_LT_POUNDftl] = ACTIONS(1021),
    [anon_sym_LT_POUNDimport] = ACTIONS(1021),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1021),
    [sym_lt] = ACTIONS(1021),
    [sym_nt] = ACTIONS(1021),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1021),
    [sym_rt] = ACTIONS(1021),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1021),
    [sym_stop] = ACTIONS(1021),
    [sym_t] = ACTIONS(1021),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1021),
    [anon_sym_LT_POUNDassign] = ACTIONS(1021),
    [sym_end_assign] = ACTIONS(1021),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1021),
    [sym_end_global] = ACTIONS(1021),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1021),
    [sym_end_local] = ACTIONS(1021),
  },
  [270] = {
    [ts_builtin_sym_end] = ACTIONS(1023),
    [sym_comment] = ACTIONS(1023),
    [anon_sym_LT_AT] = ACTIONS(1023),
    [anon_sym_LT_POUNDlist] = ACTIONS(1023),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1023),
    [sym_break] = ACTIONS(1023),
    [sym_continue] = ACTIONS(1023),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1023),
    [anon_sym_LT_POUNDitems] = ACTIONS(1023),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1023),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1023),
    [anon_sym_LT_POUNDif] = ACTIONS(1023),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1023),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1023),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1023),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1023),
    [anon_sym_LT_POUNDcase] = ACTIONS(1023),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1023),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1023),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1023),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1023),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1023),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1023),
    [anon_sym_LT_POUNDnested] = ACTIONS(1023),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1023),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1023),
    [sym_recover] = ACTIONS(1023),
    [sym_fallback] = ACTIONS(1023),
    [sym_flush] = ACTIONS(1023),
    [anon_sym_LT_POUNDftl] = ACTIONS(1023),
    [anon_sym_LT_POUNDimport] = ACTIONS(1023),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1023),
    [sym_lt] = ACTIONS(1023),
    [sym_nt] = ACTIONS(1023),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1023),
    [sym_rt] = ACTIONS(1023),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1023),
    [sym_stop] = ACTIONS(1023),
    [sym_t] = ACTIONS(1023),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1023),
    [anon_sym_LT_POUNDassign] = ACTIONS(1023),
    [sym_end_assign] = ACTIONS(1023),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1023),
    [sym_end_global] = ACTIONS(1023),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1023),
    [sym_end_local] = ACTIONS(1023),
  },
  [271] = {
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1025),
  },
  [272] = {
    [sym_directive] = STATE(199),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_list_middle] = STATE(272),
    [sym_items] = STATE(199),
    [sym_sep] = STATE(199),
    [sym_sep_block] = STATE(204),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_list_repeat1] = STATE(272),
    [anon_sym_LT_AT] = ACTIONS(1027),
    [anon_sym_LT_POUNDlist] = ACTIONS(1030),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1033),
    [sym_break] = ACTIONS(1035),
    [sym_continue] = ACTIONS(1035),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1033),
    [anon_sym_LT_POUNDitems] = ACTIONS(1038),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1041),
    [anon_sym_LT_POUNDif] = ACTIONS(1044),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1047),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1050),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1053),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1056),
    [sym_fallback] = ACTIONS(1059),
    [sym_flush] = ACTIONS(1059),
    [anon_sym_LT_POUNDftl] = ACTIONS(1062),
    [anon_sym_LT_POUNDimport] = ACTIONS(1065),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1068),
    [sym_lt] = ACTIONS(1059),
    [sym_nt] = ACTIONS(1059),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1071),
    [sym_rt] = ACTIONS(1059),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1074),
    [sym_stop] = ACTIONS(1059),
    [sym_t] = ACTIONS(1059),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1077),
    [anon_sym_LT_POUNDassign] = ACTIONS(1080),
    [sym_end_assign] = ACTIONS(1083),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1086),
    [sym_end_global] = ACTIONS(1089),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1092),
    [sym_end_local] = ACTIONS(1095),
  },
  [273] = {
    [anon_sym_as] = ACTIONS(728),
    [anon_sym_QMARK] = ACTIONS(730),
    [anon_sym_RPAREN] = ACTIONS(730),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(730),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(730),
    [sym_number] = ACTIONS(728),
    [anon_sym_true] = ACTIONS(728),
    [anon_sym_LBRACK] = ACTIONS(730),
    [anon_sym_LBRACE] = ACTIONS(730),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(728),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(730),
    [anon_sym_GT] = ACTIONS(730),
    [anon_sym_SLASH_GT] = ACTIONS(730),
  },
  [274] = {
    [anon_sym_as] = ACTIONS(753),
    [anon_sym_QMARK] = ACTIONS(755),
    [anon_sym_RPAREN] = ACTIONS(755),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(755),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(755),
    [sym_number] = ACTIONS(753),
    [anon_sym_true] = ACTIONS(753),
    [anon_sym_LBRACK] = ACTIONS(755),
    [anon_sym_LBRACE] = ACTIONS(755),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(753),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(755),
    [anon_sym_GT] = ACTIONS(755),
    [anon_sym_SLASH_GT] = ACTIONS(755),
  },
  [275] = {
    [anon_sym_as] = ACTIONS(780),
    [anon_sym_QMARK] = ACTIONS(782),
    [anon_sym_LPAREN] = ACTIONS(782),
    [anon_sym_RPAREN] = ACTIONS(782),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(782),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(782),
    [sym_number] = ACTIONS(780),
    [anon_sym_true] = ACTIONS(780),
    [anon_sym_LBRACK] = ACTIONS(782),
    [anon_sym_LBRACE] = ACTIONS(782),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(780),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(782),
    [anon_sym_GT] = ACTIONS(782),
    [anon_sym_SLASH_GT] = ACTIONS(782),
  },
  [276] = {
    [sym_parameter_group] = STATE(266),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(196),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(196),
    [aux_sym_group_repeat1] = STATE(266),
    [anon_sym_as] = ACTIONS(402),
    [anon_sym_QMARK] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(1098),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
  },
  [277] = {
    [sym_directive] = STATE(222),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_elseif] = STATE(222),
    [sym_if_middle] = STATE(302),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_if_repeat1] = STATE(302),
    [anon_sym_LT_AT] = ACTIONS(9),
    [anon_sym_LT_POUNDlist] = ACTIONS(11),
    [anon_sym_LT_POUNDif] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1100),
    [anon_sym_LT_POUNDelseif] = ACTIONS(473),
    [anon_sym_LT_POUNDswitch] = ACTIONS(15),
    [anon_sym_LT_POUNDfunction] = ACTIONS(17),
    [anon_sym_LT_POUNDmacro] = ACTIONS(19),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(21),
    [sym_fallback] = ACTIONS(23),
    [sym_flush] = ACTIONS(23),
    [anon_sym_LT_POUNDftl] = ACTIONS(25),
    [anon_sym_LT_POUNDimport] = ACTIONS(27),
    [anon_sym_LT_POUNDinclude] = ACTIONS(29),
    [sym_lt] = ACTIONS(23),
    [sym_nt] = ACTIONS(23),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(31),
    [sym_rt] = ACTIONS(23),
    [anon_sym_LT_POUNDsetting] = ACTIONS(33),
    [sym_stop] = ACTIONS(23),
    [sym_t] = ACTIONS(23),
    [anon_sym_LT_POUNDvisit] = ACTIONS(35),
    [anon_sym_LT_POUNDassign] = ACTIONS(37),
    [sym_end_assign] = ACTIONS(39),
    [anon_sym_LT_POUNDglobal] = ACTIONS(41),
    [sym_end_global] = ACTIONS(43),
    [anon_sym_LT_POUNDlocal] = ACTIONS(45),
    [sym_end_local] = ACTIONS(47),
  },
  [278] = {
    [anon_sym_LT_AT] = ACTIONS(1102),
    [anon_sym_LT_POUNDlist] = ACTIONS(1102),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1102),
    [anon_sym_LT_POUNDif] = ACTIONS(1102),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1102),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1102),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1102),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1102),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1102),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1102),
    [sym_fallback] = ACTIONS(1102),
    [sym_flush] = ACTIONS(1102),
    [anon_sym_LT_POUNDftl] = ACTIONS(1102),
    [anon_sym_LT_POUNDimport] = ACTIONS(1102),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1102),
    [sym_lt] = ACTIONS(1102),
    [sym_nt] = ACTIONS(1102),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1102),
    [sym_rt] = ACTIONS(1102),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1102),
    [sym_stop] = ACTIONS(1102),
    [sym_t] = ACTIONS(1102),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1102),
    [anon_sym_LT_POUNDassign] = ACTIONS(1102),
    [sym_end_assign] = ACTIONS(1102),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1102),
    [sym_end_global] = ACTIONS(1102),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1102),
    [sym_end_local] = ACTIONS(1102),
  },
  [279] = {
    [sym_parameter_group] = STATE(127),
    [sym_as_expression] = STATE(35),
    [sym_expression] = STATE(35),
    [sym_type] = STATE(39),
    [sym_built_in] = STATE(35),
    [sym_string] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_hash] = STATE(28),
    [sym_top_level] = STATE(28),
    [sym_spec_var] = STATE(28),
    [aux_sym_as_expression_repeat1] = STATE(39),
    [aux_sym_group_repeat1] = STATE(127),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(1104),
  },
  [280] = {
    [ts_builtin_sym_end] = ACTIONS(1106),
    [sym_comment] = ACTIONS(1106),
    [anon_sym_LT_AT] = ACTIONS(1106),
    [anon_sym_LT_POUNDlist] = ACTIONS(1106),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1106),
    [sym_break] = ACTIONS(1106),
    [sym_continue] = ACTIONS(1106),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1106),
    [anon_sym_LT_POUNDitems] = ACTIONS(1106),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1106),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1106),
    [anon_sym_LT_POUNDif] = ACTIONS(1106),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1106),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1106),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1106),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1106),
    [anon_sym_LT_POUNDcase] = ACTIONS(1106),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1106),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1106),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1106),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1106),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1106),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1106),
    [anon_sym_LT_POUNDnested] = ACTIONS(1106),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1106),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1106),
    [sym_recover] = ACTIONS(1106),
    [sym_fallback] = ACTIONS(1106),
    [sym_flush] = ACTIONS(1106),
    [anon_sym_LT_POUNDftl] = ACTIONS(1106),
    [anon_sym_LT_POUNDimport] = ACTIONS(1106),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1106),
    [sym_lt] = ACTIONS(1106),
    [sym_nt] = ACTIONS(1106),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1106),
    [sym_rt] = ACTIONS(1106),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1106),
    [sym_stop] = ACTIONS(1106),
    [sym_t] = ACTIONS(1106),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1106),
    [anon_sym_LT_POUNDassign] = ACTIONS(1106),
    [sym_end_assign] = ACTIONS(1106),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1106),
    [sym_end_global] = ACTIONS(1106),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1106),
    [sym_end_local] = ACTIONS(1106),
  },
  [281] = {
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1108),
  },
  [282] = {
    [sym_directive] = STATE(222),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_elseif] = STATE(222),
    [sym_if_middle] = STATE(282),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_if_repeat1] = STATE(282),
    [anon_sym_LT_AT] = ACTIONS(1110),
    [anon_sym_LT_POUNDlist] = ACTIONS(1113),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1116),
    [anon_sym_LT_POUNDif] = ACTIONS(1118),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1116),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1121),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1124),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1127),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1130),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1133),
    [sym_fallback] = ACTIONS(1136),
    [sym_flush] = ACTIONS(1136),
    [anon_sym_LT_POUNDftl] = ACTIONS(1139),
    [anon_sym_LT_POUNDimport] = ACTIONS(1142),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1145),
    [sym_lt] = ACTIONS(1136),
    [sym_nt] = ACTIONS(1136),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1148),
    [sym_rt] = ACTIONS(1136),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1151),
    [sym_stop] = ACTIONS(1136),
    [sym_t] = ACTIONS(1136),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1154),
    [anon_sym_LT_POUNDassign] = ACTIONS(1157),
    [sym_end_assign] = ACTIONS(1160),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1163),
    [sym_end_global] = ACTIONS(1166),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1169),
    [sym_end_local] = ACTIONS(1172),
  },
  [283] = {
    [anon_sym_GT] = ACTIONS(1175),
  },
  [284] = {
    [sym_directive] = STATE(306),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_case_repeat1] = STATE(306),
    [anon_sym_LT_AT] = ACTIONS(9),
    [anon_sym_LT_POUNDlist] = ACTIONS(11),
    [anon_sym_LT_POUNDif] = ACTIONS(13),
    [anon_sym_LT_POUNDswitch] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1177),
    [anon_sym_LT_POUNDfunction] = ACTIONS(17),
    [anon_sym_LT_POUNDmacro] = ACTIONS(19),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(21),
    [sym_fallback] = ACTIONS(23),
    [sym_flush] = ACTIONS(23),
    [anon_sym_LT_POUNDftl] = ACTIONS(25),
    [anon_sym_LT_POUNDimport] = ACTIONS(27),
    [anon_sym_LT_POUNDinclude] = ACTIONS(29),
    [sym_lt] = ACTIONS(23),
    [sym_nt] = ACTIONS(23),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(31),
    [sym_rt] = ACTIONS(23),
    [anon_sym_LT_POUNDsetting] = ACTIONS(33),
    [sym_stop] = ACTIONS(23),
    [sym_t] = ACTIONS(23),
    [anon_sym_LT_POUNDvisit] = ACTIONS(35),
    [anon_sym_LT_POUNDassign] = ACTIONS(37),
    [sym_end_assign] = ACTIONS(39),
    [anon_sym_LT_POUNDglobal] = ACTIONS(41),
    [sym_end_global] = ACTIONS(43),
    [anon_sym_LT_POUNDlocal] = ACTIONS(45),
    [sym_end_local] = ACTIONS(47),
  },
  [285] = {
    [ts_builtin_sym_end] = ACTIONS(1179),
    [sym_comment] = ACTIONS(1179),
    [anon_sym_LT_AT] = ACTIONS(1179),
    [anon_sym_LT_POUNDlist] = ACTIONS(1179),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1179),
    [sym_break] = ACTIONS(1179),
    [sym_continue] = ACTIONS(1179),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1179),
    [anon_sym_LT_POUNDitems] = ACTIONS(1179),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1179),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1179),
    [anon_sym_LT_POUNDif] = ACTIONS(1179),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1179),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1179),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1179),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1179),
    [anon_sym_LT_POUNDcase] = ACTIONS(1179),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1179),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1179),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1179),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1179),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1179),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1179),
    [anon_sym_LT_POUNDnested] = ACTIONS(1179),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1179),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1179),
    [sym_recover] = ACTIONS(1179),
    [sym_fallback] = ACTIONS(1179),
    [sym_flush] = ACTIONS(1179),
    [anon_sym_LT_POUNDftl] = ACTIONS(1179),
    [anon_sym_LT_POUNDimport] = ACTIONS(1179),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1179),
    [sym_lt] = ACTIONS(1179),
    [sym_nt] = ACTIONS(1179),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1179),
    [sym_rt] = ACTIONS(1179),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1179),
    [sym_stop] = ACTIONS(1179),
    [sym_t] = ACTIONS(1179),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1179),
    [anon_sym_LT_POUNDassign] = ACTIONS(1179),
    [sym_end_assign] = ACTIONS(1179),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1179),
    [sym_end_global] = ACTIONS(1179),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1179),
    [sym_end_local] = ACTIONS(1179),
  },
  [286] = {
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1181),
  },
  [287] = {
    [sym_case] = STATE(228),
    [sym_switch_middle] = STATE(287),
    [aux_sym_switch_repeat1] = STATE(287),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1183),
    [anon_sym_LT_POUNDcase] = ACTIONS(1185),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1183),
  },
  [288] = {
    [anon_sym_LT_AT] = ACTIONS(1188),
    [anon_sym_LT_POUNDlist] = ACTIONS(1188),
    [anon_sym_LT_POUNDif] = ACTIONS(1188),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1188),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1188),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1188),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1188),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1188),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1188),
    [anon_sym_LT_POUNDnested] = ACTIONS(1188),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1188),
    [sym_fallback] = ACTIONS(1188),
    [sym_flush] = ACTIONS(1188),
    [anon_sym_LT_POUNDftl] = ACTIONS(1188),
    [anon_sym_LT_POUNDimport] = ACTIONS(1188),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1188),
    [sym_lt] = ACTIONS(1188),
    [sym_nt] = ACTIONS(1188),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1188),
    [sym_rt] = ACTIONS(1188),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1188),
    [sym_stop] = ACTIONS(1188),
    [sym_t] = ACTIONS(1188),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1188),
    [anon_sym_LT_POUNDassign] = ACTIONS(1188),
    [sym_end_assign] = ACTIONS(1188),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1188),
    [sym_end_global] = ACTIONS(1188),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1188),
    [sym_end_local] = ACTIONS(1188),
  },
  [289] = {
    [ts_builtin_sym_end] = ACTIONS(1190),
    [sym_comment] = ACTIONS(1190),
    [anon_sym_LT_AT] = ACTIONS(1190),
    [anon_sym_LT_POUNDlist] = ACTIONS(1190),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1190),
    [sym_break] = ACTIONS(1190),
    [sym_continue] = ACTIONS(1190),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1190),
    [anon_sym_LT_POUNDitems] = ACTIONS(1190),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1190),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1190),
    [anon_sym_LT_POUNDif] = ACTIONS(1190),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1190),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1190),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1190),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1190),
    [anon_sym_LT_POUNDcase] = ACTIONS(1190),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1190),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1190),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1190),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1190),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1190),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1190),
    [anon_sym_LT_POUNDnested] = ACTIONS(1190),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1190),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1190),
    [sym_recover] = ACTIONS(1190),
    [sym_fallback] = ACTIONS(1190),
    [sym_flush] = ACTIONS(1190),
    [anon_sym_LT_POUNDftl] = ACTIONS(1190),
    [anon_sym_LT_POUNDimport] = ACTIONS(1190),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1190),
    [sym_lt] = ACTIONS(1190),
    [sym_nt] = ACTIONS(1190),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1190),
    [sym_rt] = ACTIONS(1190),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1190),
    [sym_stop] = ACTIONS(1190),
    [sym_t] = ACTIONS(1190),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1190),
    [anon_sym_LT_POUNDassign] = ACTIONS(1190),
    [sym_end_assign] = ACTIONS(1190),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1190),
    [sym_end_global] = ACTIONS(1190),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1190),
    [sym_end_local] = ACTIONS(1190),
  },
  [290] = {
    [anon_sym_LT_AT] = ACTIONS(1192),
    [anon_sym_LT_POUNDlist] = ACTIONS(1192),
    [anon_sym_LT_POUNDif] = ACTIONS(1192),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1192),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1192),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1192),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1192),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1192),
    [anon_sym_LT_POUNDnested] = ACTIONS(1192),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1192),
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
    [ts_builtin_sym_end] = ACTIONS(1194),
    [sym_comment] = ACTIONS(1194),
    [anon_sym_LT_AT] = ACTIONS(1194),
    [anon_sym_LT_POUNDlist] = ACTIONS(1194),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1194),
    [sym_break] = ACTIONS(1194),
    [sym_continue] = ACTIONS(1194),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1194),
    [anon_sym_LT_POUNDitems] = ACTIONS(1194),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1194),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1194),
    [anon_sym_LT_POUNDif] = ACTIONS(1194),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1194),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1194),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1194),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1194),
    [anon_sym_LT_POUNDcase] = ACTIONS(1194),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1194),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1194),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1194),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1194),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1194),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1194),
    [anon_sym_LT_POUNDnested] = ACTIONS(1194),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1194),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1194),
    [sym_recover] = ACTIONS(1194),
    [sym_fallback] = ACTIONS(1194),
    [sym_flush] = ACTIONS(1194),
    [anon_sym_LT_POUNDftl] = ACTIONS(1194),
    [anon_sym_LT_POUNDimport] = ACTIONS(1194),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1194),
    [sym_lt] = ACTIONS(1194),
    [sym_nt] = ACTIONS(1194),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1194),
    [sym_rt] = ACTIONS(1194),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1194),
    [sym_stop] = ACTIONS(1194),
    [sym_t] = ACTIONS(1194),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1194),
    [anon_sym_LT_POUNDassign] = ACTIONS(1194),
    [sym_end_assign] = ACTIONS(1194),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1194),
    [sym_end_global] = ACTIONS(1194),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1194),
    [sym_end_local] = ACTIONS(1194),
  },
  [292] = {
    [anon_sym_as] = ACTIONS(1010),
    [anon_sym_QMARK] = ACTIONS(1010),
    [anon_sym_using] = ACTIONS(1010),
    [anon_sym_COMMA] = ACTIONS(1012),
    [anon_sym_DOT_DOT] = ACTIONS(1010),
    [anon_sym_DOT_DOT_LT] = ACTIONS(1012),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(1012),
    [anon_sym_COLON] = ACTIONS(1012),
    [anon_sym_STAR] = ACTIONS(1010),
    [anon_sym_PLUS] = ACTIONS(1010),
    [anon_sym_SLASH] = ACTIONS(1010),
    [anon_sym_DASH] = ACTIONS(1010),
    [anon_sym_PERCENT] = ACTIONS(1010),
    [anon_sym_EQ_EQ] = ACTIONS(1012),
    [anon_sym_BANG_EQ] = ACTIONS(1012),
    [anon_sym_LT] = ACTIONS(1010),
    [anon_sym_LT_EQ] = ACTIONS(1012),
    [anon_sym_lt] = ACTIONS(1010),
    [anon_sym_lte] = ACTIONS(1010),
    [anon_sym_gt] = ACTIONS(1010),
    [anon_sym_gte] = ACTIONS(1010),
    [anon_sym_BANG] = ACTIONS(1010),
    [anon_sym_AMP_AMP] = ACTIONS(1012),
    [anon_sym_PIPE_PIPE] = ACTIONS(1012),
    [anon_sym_QMARK_QMARK] = ACTIONS(1012),
    [anon_sym_EQ] = ACTIONS(1010),
    [anon_sym_PLUS_EQ] = ACTIONS(1012),
    [anon_sym_DASH_EQ] = ACTIONS(1012),
    [anon_sym_STAR_EQ] = ACTIONS(1012),
    [anon_sym_SLASH_EQ] = ACTIONS(1012),
    [anon_sym_PERCENT_EQ] = ACTIONS(1012),
    [anon_sym_PLUS_PLUS] = ACTIONS(1012),
    [anon_sym_DASH_DASH] = ACTIONS(1012),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1012),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1012),
    [sym_number] = ACTIONS(1010),
    [anon_sym_true] = ACTIONS(1010),
    [anon_sym_LBRACK] = ACTIONS(1012),
    [anon_sym_LBRACE] = ACTIONS(1012),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1010),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1012),
    [anon_sym_GT] = ACTIONS(1012),
    [anon_sym_SLASH_GT] = ACTIONS(1012),
  },
  [293] = {
    [anon_sym_COMMA] = ACTIONS(1012),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1012),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1012),
    [sym_number] = ACTIONS(1010),
    [anon_sym_true] = ACTIONS(1010),
    [anon_sym_LBRACK] = ACTIONS(1012),
    [anon_sym_RBRACK] = ACTIONS(1012),
    [anon_sym_LBRACE] = ACTIONS(1012),
    [anon_sym_RBRACE] = ACTIONS(1012),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1010),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1012),
    [anon_sym_GT] = ACTIONS(1012),
  },
  [294] = {
    [anon_sym_using] = ACTIONS(1010),
    [anon_sym_COMMA] = ACTIONS(1012),
    [anon_sym_DOT_DOT] = ACTIONS(1010),
    [anon_sym_DOT_DOT_LT] = ACTIONS(1012),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(1012),
    [anon_sym_COLON] = ACTIONS(1012),
    [anon_sym_STAR] = ACTIONS(1010),
    [anon_sym_PLUS] = ACTIONS(1010),
    [anon_sym_SLASH] = ACTIONS(1010),
    [anon_sym_DASH] = ACTIONS(1010),
    [anon_sym_PERCENT] = ACTIONS(1010),
    [anon_sym_EQ_EQ] = ACTIONS(1012),
    [anon_sym_BANG_EQ] = ACTIONS(1012),
    [anon_sym_LT] = ACTIONS(1010),
    [anon_sym_LT_EQ] = ACTIONS(1012),
    [anon_sym_lt] = ACTIONS(1010),
    [anon_sym_lte] = ACTIONS(1010),
    [anon_sym_gt] = ACTIONS(1010),
    [anon_sym_gte] = ACTIONS(1010),
    [anon_sym_BANG] = ACTIONS(1010),
    [anon_sym_AMP_AMP] = ACTIONS(1012),
    [anon_sym_PIPE_PIPE] = ACTIONS(1012),
    [anon_sym_QMARK_QMARK] = ACTIONS(1012),
    [anon_sym_EQ] = ACTIONS(1010),
    [anon_sym_PLUS_EQ] = ACTIONS(1012),
    [anon_sym_DASH_EQ] = ACTIONS(1012),
    [anon_sym_STAR_EQ] = ACTIONS(1012),
    [anon_sym_SLASH_EQ] = ACTIONS(1012),
    [anon_sym_PERCENT_EQ] = ACTIONS(1012),
    [anon_sym_PLUS_PLUS] = ACTIONS(1012),
    [anon_sym_DASH_DASH] = ACTIONS(1012),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1012),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1012),
    [sym_number] = ACTIONS(1010),
    [anon_sym_true] = ACTIONS(1010),
    [anon_sym_LBRACK] = ACTIONS(1012),
    [anon_sym_RBRACK] = ACTIONS(1012),
    [anon_sym_LBRACE] = ACTIONS(1012),
    [anon_sym_RBRACE] = ACTIONS(1012),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1010),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1012),
  },
  [295] = {
    [sym_type] = STATE(295),
    [sym_string] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_sequence] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_top_level] = STATE(113),
    [sym_spec_var] = STATE(113),
    [aux_sym_as_expression_repeat2] = STATE(295),
    [anon_sym_as] = ACTIONS(810),
    [anon_sym_QMARK] = ACTIONS(691),
    [anon_sym_RPAREN] = ACTIONS(691),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(812),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(812),
    [sym_number] = ACTIONS(815),
    [anon_sym_true] = ACTIONS(818),
    [anon_sym_LBRACK] = ACTIONS(821),
    [anon_sym_LBRACE] = ACTIONS(824),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(827),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(830),
  },
  [296] = {
    [sym_type] = STATE(295),
    [sym_string] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_sequence] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_top_level] = STATE(113),
    [sym_spec_var] = STATE(113),
    [aux_sym_as_expression_repeat2] = STATE(295),
    [anon_sym_as] = ACTIONS(833),
    [anon_sym_QMARK] = ACTIONS(800),
    [anon_sym_RPAREN] = ACTIONS(800),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(800),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(800),
    [sym_number] = ACTIONS(833),
    [anon_sym_true] = ACTIONS(833),
    [anon_sym_LBRACK] = ACTIONS(800),
    [anon_sym_LBRACE] = ACTIONS(800),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(833),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(800),
  },
  [297] = {
    [sym_type] = STATE(295),
    [sym_string] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_sequence] = STATE(113),
    [sym_hash] = STATE(113),
    [sym_top_level] = STATE(113),
    [sym_spec_var] = STATE(113),
    [aux_sym_as_expression_repeat2] = STATE(295),
    [anon_sym_as] = ACTIONS(835),
    [anon_sym_QMARK] = ACTIONS(802),
    [anon_sym_RPAREN] = ACTIONS(802),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(802),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(802),
    [sym_number] = ACTIONS(835),
    [anon_sym_true] = ACTIONS(835),
    [anon_sym_LBRACK] = ACTIONS(802),
    [anon_sym_LBRACE] = ACTIONS(802),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(802),
  },
  [298] = {
    [sym_directive] = STATE(199),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_list_middle] = STATE(298),
    [sym_items] = STATE(199),
    [sym_sep] = STATE(199),
    [sym_sep_block] = STATE(204),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_list_repeat1] = STATE(298),
    [anon_sym_LT_AT] = ACTIONS(1027),
    [anon_sym_LT_POUNDlist] = ACTIONS(1030),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1033),
    [sym_break] = ACTIONS(1035),
    [sym_continue] = ACTIONS(1035),
    [anon_sym_LT_POUNDitems] = ACTIONS(1038),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1041),
    [anon_sym_LT_POUNDif] = ACTIONS(1044),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1047),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1050),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1053),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1056),
    [sym_fallback] = ACTIONS(1059),
    [sym_flush] = ACTIONS(1059),
    [anon_sym_LT_POUNDftl] = ACTIONS(1062),
    [anon_sym_LT_POUNDimport] = ACTIONS(1065),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1068),
    [sym_lt] = ACTIONS(1059),
    [sym_nt] = ACTIONS(1059),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1071),
    [sym_rt] = ACTIONS(1059),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1074),
    [sym_stop] = ACTIONS(1059),
    [sym_t] = ACTIONS(1059),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1077),
    [anon_sym_LT_POUNDassign] = ACTIONS(1080),
    [sym_end_assign] = ACTIONS(1083),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1086),
    [sym_end_global] = ACTIONS(1089),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1092),
    [sym_end_local] = ACTIONS(1095),
  },
  [299] = {
    [sym_directive] = STATE(308),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_items_middle] = STATE(310),
    [sym_sep] = STATE(308),
    [sym_sep_block] = STATE(204),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_items_repeat1] = STATE(310),
    [anon_sym_LT_AT] = ACTIONS(9),
    [anon_sym_LT_POUNDlist] = ACTIONS(11),
    [sym_break] = ACTIONS(1196),
    [sym_continue] = ACTIONS(1196),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1198),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(422),
    [anon_sym_LT_POUNDif] = ACTIONS(13),
    [anon_sym_LT_POUNDswitch] = ACTIONS(15),
    [anon_sym_LT_POUNDfunction] = ACTIONS(17),
    [anon_sym_LT_POUNDmacro] = ACTIONS(19),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(21),
    [sym_fallback] = ACTIONS(23),
    [sym_flush] = ACTIONS(23),
    [anon_sym_LT_POUNDftl] = ACTIONS(25),
    [anon_sym_LT_POUNDimport] = ACTIONS(27),
    [anon_sym_LT_POUNDinclude] = ACTIONS(29),
    [sym_lt] = ACTIONS(23),
    [sym_nt] = ACTIONS(23),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(31),
    [sym_rt] = ACTIONS(23),
    [anon_sym_LT_POUNDsetting] = ACTIONS(33),
    [sym_stop] = ACTIONS(23),
    [sym_t] = ACTIONS(23),
    [anon_sym_LT_POUNDvisit] = ACTIONS(35),
    [anon_sym_LT_POUNDassign] = ACTIONS(37),
    [sym_end_assign] = ACTIONS(39),
    [anon_sym_LT_POUNDglobal] = ACTIONS(41),
    [sym_end_global] = ACTIONS(43),
    [anon_sym_LT_POUNDlocal] = ACTIONS(45),
    [sym_end_local] = ACTIONS(47),
  },
  [300] = {
    [ts_builtin_sym_end] = ACTIONS(1200),
    [sym_comment] = ACTIONS(1200),
    [anon_sym_LT_AT] = ACTIONS(1200),
    [anon_sym_LT_POUNDlist] = ACTIONS(1200),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1200),
    [sym_break] = ACTIONS(1200),
    [sym_continue] = ACTIONS(1200),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1200),
    [anon_sym_LT_POUNDitems] = ACTIONS(1200),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1200),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1200),
    [anon_sym_LT_POUNDif] = ACTIONS(1200),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1200),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1200),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1200),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1200),
    [anon_sym_LT_POUNDcase] = ACTIONS(1200),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1200),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1200),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1200),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1200),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1200),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1200),
    [anon_sym_LT_POUNDnested] = ACTIONS(1200),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1200),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1200),
    [sym_recover] = ACTIONS(1200),
    [sym_fallback] = ACTIONS(1200),
    [sym_flush] = ACTIONS(1200),
    [anon_sym_LT_POUNDftl] = ACTIONS(1200),
    [anon_sym_LT_POUNDimport] = ACTIONS(1200),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1200),
    [sym_lt] = ACTIONS(1200),
    [sym_nt] = ACTIONS(1200),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1200),
    [sym_rt] = ACTIONS(1200),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1200),
    [sym_stop] = ACTIONS(1200),
    [sym_t] = ACTIONS(1200),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1200),
    [anon_sym_LT_POUNDassign] = ACTIONS(1200),
    [sym_end_assign] = ACTIONS(1200),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1200),
    [sym_end_global] = ACTIONS(1200),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1200),
    [sym_end_local] = ACTIONS(1200),
  },
  [301] = {
    [anon_sym_as] = ACTIONS(1010),
    [anon_sym_QMARK] = ACTIONS(1012),
    [anon_sym_LPAREN] = ACTIONS(1012),
    [anon_sym_RPAREN] = ACTIONS(1012),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1012),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1012),
    [sym_number] = ACTIONS(1010),
    [anon_sym_true] = ACTIONS(1010),
    [anon_sym_LBRACK] = ACTIONS(1012),
    [anon_sym_LBRACE] = ACTIONS(1012),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1010),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1012),
    [anon_sym_GT] = ACTIONS(1012),
    [anon_sym_SLASH_GT] = ACTIONS(1012),
  },
  [302] = {
    [sym_directive] = STATE(222),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_elseif] = STATE(222),
    [sym_if_middle] = STATE(302),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_if_repeat1] = STATE(302),
    [anon_sym_LT_AT] = ACTIONS(1110),
    [anon_sym_LT_POUNDlist] = ACTIONS(1113),
    [anon_sym_LT_POUNDif] = ACTIONS(1118),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1116),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1121),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1124),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1127),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1130),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1133),
    [sym_fallback] = ACTIONS(1136),
    [sym_flush] = ACTIONS(1136),
    [anon_sym_LT_POUNDftl] = ACTIONS(1139),
    [anon_sym_LT_POUNDimport] = ACTIONS(1142),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1145),
    [sym_lt] = ACTIONS(1136),
    [sym_nt] = ACTIONS(1136),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1148),
    [sym_rt] = ACTIONS(1136),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1151),
    [sym_stop] = ACTIONS(1136),
    [sym_t] = ACTIONS(1136),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1154),
    [anon_sym_LT_POUNDassign] = ACTIONS(1157),
    [sym_end_assign] = ACTIONS(1160),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1163),
    [sym_end_global] = ACTIONS(1166),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1169),
    [sym_end_local] = ACTIONS(1172),
  },
  [303] = {
    [anon_sym_LT_AT] = ACTIONS(1202),
    [anon_sym_LT_POUNDlist] = ACTIONS(1202),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1202),
    [anon_sym_LT_POUNDif] = ACTIONS(1202),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1202),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1202),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1202),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1202),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1202),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1202),
    [sym_fallback] = ACTIONS(1202),
    [sym_flush] = ACTIONS(1202),
    [anon_sym_LT_POUNDftl] = ACTIONS(1202),
    [anon_sym_LT_POUNDimport] = ACTIONS(1202),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1202),
    [sym_lt] = ACTIONS(1202),
    [sym_nt] = ACTIONS(1202),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1202),
    [sym_rt] = ACTIONS(1202),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1202),
    [sym_stop] = ACTIONS(1202),
    [sym_t] = ACTIONS(1202),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1202),
    [anon_sym_LT_POUNDassign] = ACTIONS(1202),
    [sym_end_assign] = ACTIONS(1202),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1202),
    [sym_end_global] = ACTIONS(1202),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1202),
    [sym_end_local] = ACTIONS(1202),
  },
  [304] = {
    [ts_builtin_sym_end] = ACTIONS(1204),
    [sym_comment] = ACTIONS(1204),
    [anon_sym_LT_AT] = ACTIONS(1204),
    [anon_sym_LT_POUNDlist] = ACTIONS(1204),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1204),
    [sym_break] = ACTIONS(1204),
    [sym_continue] = ACTIONS(1204),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1204),
    [anon_sym_LT_POUNDitems] = ACTIONS(1204),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1204),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1204),
    [anon_sym_LT_POUNDif] = ACTIONS(1204),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1204),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1204),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1204),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1204),
    [anon_sym_LT_POUNDcase] = ACTIONS(1204),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1204),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1204),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1204),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1204),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1204),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1204),
    [anon_sym_LT_POUNDnested] = ACTIONS(1204),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1204),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1204),
    [sym_recover] = ACTIONS(1204),
    [sym_fallback] = ACTIONS(1204),
    [sym_flush] = ACTIONS(1204),
    [anon_sym_LT_POUNDftl] = ACTIONS(1204),
    [anon_sym_LT_POUNDimport] = ACTIONS(1204),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1204),
    [sym_lt] = ACTIONS(1204),
    [sym_nt] = ACTIONS(1204),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1204),
    [sym_rt] = ACTIONS(1204),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1204),
    [sym_stop] = ACTIONS(1204),
    [sym_t] = ACTIONS(1204),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1204),
    [anon_sym_LT_POUNDassign] = ACTIONS(1204),
    [sym_end_assign] = ACTIONS(1204),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1204),
    [sym_end_global] = ACTIONS(1204),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1204),
    [sym_end_local] = ACTIONS(1204),
  },
  [305] = {
    [sym_directive] = STATE(311),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_case_repeat1] = STATE(311),
    [aux_sym_case_repeat2] = STATE(312),
    [anon_sym_LT_AT] = ACTIONS(9),
    [anon_sym_LT_POUNDlist] = ACTIONS(11),
    [sym_break] = ACTIONS(1206),
    [anon_sym_LT_POUNDif] = ACTIONS(13),
    [anon_sym_LT_POUNDswitch] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1208),
    [anon_sym_LT_POUNDcase] = ACTIONS(1208),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1208),
    [anon_sym_LT_POUNDfunction] = ACTIONS(17),
    [anon_sym_LT_POUNDmacro] = ACTIONS(19),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(21),
    [sym_fallback] = ACTIONS(23),
    [sym_flush] = ACTIONS(23),
    [anon_sym_LT_POUNDftl] = ACTIONS(25),
    [anon_sym_LT_POUNDimport] = ACTIONS(27),
    [anon_sym_LT_POUNDinclude] = ACTIONS(29),
    [sym_lt] = ACTIONS(23),
    [sym_nt] = ACTIONS(23),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(31),
    [sym_rt] = ACTIONS(23),
    [anon_sym_LT_POUNDsetting] = ACTIONS(33),
    [sym_stop] = ACTIONS(23),
    [sym_t] = ACTIONS(23),
    [anon_sym_LT_POUNDvisit] = ACTIONS(35),
    [anon_sym_LT_POUNDassign] = ACTIONS(37),
    [sym_end_assign] = ACTIONS(39),
    [anon_sym_LT_POUNDglobal] = ACTIONS(41),
    [sym_end_global] = ACTIONS(43),
    [anon_sym_LT_POUNDlocal] = ACTIONS(45),
    [sym_end_local] = ACTIONS(47),
  },
  [306] = {
    [sym_directive] = STATE(306),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_case_repeat1] = STATE(306),
    [anon_sym_LT_AT] = ACTIONS(1210),
    [anon_sym_LT_POUNDlist] = ACTIONS(1213),
    [anon_sym_LT_POUNDif] = ACTIONS(1216),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1219),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1222),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1224),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1227),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1230),
    [sym_fallback] = ACTIONS(1233),
    [sym_flush] = ACTIONS(1233),
    [anon_sym_LT_POUNDftl] = ACTIONS(1236),
    [anon_sym_LT_POUNDimport] = ACTIONS(1239),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1242),
    [sym_lt] = ACTIONS(1233),
    [sym_nt] = ACTIONS(1233),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1245),
    [sym_rt] = ACTIONS(1233),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1248),
    [sym_stop] = ACTIONS(1233),
    [sym_t] = ACTIONS(1233),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1251),
    [anon_sym_LT_POUNDassign] = ACTIONS(1254),
    [sym_end_assign] = ACTIONS(1257),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1260),
    [sym_end_global] = ACTIONS(1263),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1266),
    [sym_end_local] = ACTIONS(1269),
  },
  [307] = {
    [ts_builtin_sym_end] = ACTIONS(1272),
    [sym_comment] = ACTIONS(1272),
    [anon_sym_LT_AT] = ACTIONS(1272),
    [anon_sym_LT_POUNDlist] = ACTIONS(1272),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1272),
    [sym_break] = ACTIONS(1272),
    [sym_continue] = ACTIONS(1272),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1272),
    [anon_sym_LT_POUNDitems] = ACTIONS(1272),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1272),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1272),
    [anon_sym_LT_POUNDif] = ACTIONS(1272),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1272),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1272),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1272),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1272),
    [anon_sym_LT_POUNDcase] = ACTIONS(1272),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1272),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1272),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1272),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1272),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1272),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1272),
    [anon_sym_LT_POUNDnested] = ACTIONS(1272),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1272),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1272),
    [sym_recover] = ACTIONS(1272),
    [sym_fallback] = ACTIONS(1272),
    [sym_flush] = ACTIONS(1272),
    [anon_sym_LT_POUNDftl] = ACTIONS(1272),
    [anon_sym_LT_POUNDimport] = ACTIONS(1272),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1272),
    [sym_lt] = ACTIONS(1272),
    [sym_nt] = ACTIONS(1272),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1272),
    [sym_rt] = ACTIONS(1272),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1272),
    [sym_stop] = ACTIONS(1272),
    [sym_t] = ACTIONS(1272),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1272),
    [anon_sym_LT_POUNDassign] = ACTIONS(1272),
    [sym_end_assign] = ACTIONS(1272),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1272),
    [sym_end_global] = ACTIONS(1272),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1272),
    [sym_end_local] = ACTIONS(1272),
  },
  [308] = {
    [anon_sym_LT_AT] = ACTIONS(1274),
    [anon_sym_LT_POUNDlist] = ACTIONS(1274),
    [sym_break] = ACTIONS(1274),
    [sym_continue] = ACTIONS(1274),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1274),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1274),
    [anon_sym_LT_POUNDif] = ACTIONS(1274),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1274),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1274),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1274),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1274),
    [sym_fallback] = ACTIONS(1274),
    [sym_flush] = ACTIONS(1274),
    [anon_sym_LT_POUNDftl] = ACTIONS(1274),
    [anon_sym_LT_POUNDimport] = ACTIONS(1274),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1274),
    [sym_lt] = ACTIONS(1274),
    [sym_nt] = ACTIONS(1274),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1274),
    [sym_rt] = ACTIONS(1274),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1274),
    [sym_stop] = ACTIONS(1274),
    [sym_t] = ACTIONS(1274),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1274),
    [anon_sym_LT_POUNDassign] = ACTIONS(1274),
    [sym_end_assign] = ACTIONS(1274),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1274),
    [sym_end_global] = ACTIONS(1274),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1274),
    [sym_end_local] = ACTIONS(1274),
  },
  [309] = {
    [anon_sym_LT_AT] = ACTIONS(1276),
    [anon_sym_LT_POUNDlist] = ACTIONS(1276),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1276),
    [sym_break] = ACTIONS(1276),
    [sym_continue] = ACTIONS(1276),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1276),
    [anon_sym_LT_POUNDitems] = ACTIONS(1276),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1276),
    [anon_sym_LT_POUNDif] = ACTIONS(1276),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1276),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1276),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1276),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1276),
    [sym_fallback] = ACTIONS(1276),
    [sym_flush] = ACTIONS(1276),
    [anon_sym_LT_POUNDftl] = ACTIONS(1276),
    [anon_sym_LT_POUNDimport] = ACTIONS(1276),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1276),
    [sym_lt] = ACTIONS(1276),
    [sym_nt] = ACTIONS(1276),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1276),
    [sym_rt] = ACTIONS(1276),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1276),
    [sym_stop] = ACTIONS(1276),
    [sym_t] = ACTIONS(1276),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1276),
    [anon_sym_LT_POUNDassign] = ACTIONS(1276),
    [sym_end_assign] = ACTIONS(1276),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1276),
    [sym_end_global] = ACTIONS(1276),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1276),
    [sym_end_local] = ACTIONS(1276),
  },
  [310] = {
    [sym_directive] = STATE(308),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_items_middle] = STATE(314),
    [sym_sep] = STATE(308),
    [sym_sep_block] = STATE(204),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_items_repeat1] = STATE(314),
    [anon_sym_LT_AT] = ACTIONS(9),
    [anon_sym_LT_POUNDlist] = ACTIONS(11),
    [sym_break] = ACTIONS(1196),
    [sym_continue] = ACTIONS(1196),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1278),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(422),
    [anon_sym_LT_POUNDif] = ACTIONS(13),
    [anon_sym_LT_POUNDswitch] = ACTIONS(15),
    [anon_sym_LT_POUNDfunction] = ACTIONS(17),
    [anon_sym_LT_POUNDmacro] = ACTIONS(19),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(21),
    [sym_fallback] = ACTIONS(23),
    [sym_flush] = ACTIONS(23),
    [anon_sym_LT_POUNDftl] = ACTIONS(25),
    [anon_sym_LT_POUNDimport] = ACTIONS(27),
    [anon_sym_LT_POUNDinclude] = ACTIONS(29),
    [sym_lt] = ACTIONS(23),
    [sym_nt] = ACTIONS(23),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(31),
    [sym_rt] = ACTIONS(23),
    [anon_sym_LT_POUNDsetting] = ACTIONS(33),
    [sym_stop] = ACTIONS(23),
    [sym_t] = ACTIONS(23),
    [anon_sym_LT_POUNDvisit] = ACTIONS(35),
    [anon_sym_LT_POUNDassign] = ACTIONS(37),
    [sym_end_assign] = ACTIONS(39),
    [anon_sym_LT_POUNDglobal] = ACTIONS(41),
    [sym_end_global] = ACTIONS(43),
    [anon_sym_LT_POUNDlocal] = ACTIONS(45),
    [sym_end_local] = ACTIONS(47),
  },
  [311] = {
    [sym_directive] = STATE(315),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_case_repeat1] = STATE(315),
    [aux_sym_case_repeat2] = STATE(316),
    [anon_sym_LT_AT] = ACTIONS(9),
    [anon_sym_LT_POUNDlist] = ACTIONS(11),
    [sym_break] = ACTIONS(1280),
    [anon_sym_LT_POUNDif] = ACTIONS(13),
    [anon_sym_LT_POUNDswitch] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1282),
    [anon_sym_LT_POUNDcase] = ACTIONS(1282),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1282),
    [anon_sym_LT_POUNDfunction] = ACTIONS(17),
    [anon_sym_LT_POUNDmacro] = ACTIONS(19),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(21),
    [sym_fallback] = ACTIONS(23),
    [sym_flush] = ACTIONS(23),
    [anon_sym_LT_POUNDftl] = ACTIONS(25),
    [anon_sym_LT_POUNDimport] = ACTIONS(27),
    [anon_sym_LT_POUNDinclude] = ACTIONS(29),
    [sym_lt] = ACTIONS(23),
    [sym_nt] = ACTIONS(23),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(31),
    [sym_rt] = ACTIONS(23),
    [anon_sym_LT_POUNDsetting] = ACTIONS(33),
    [sym_stop] = ACTIONS(23),
    [sym_t] = ACTIONS(23),
    [anon_sym_LT_POUNDvisit] = ACTIONS(35),
    [anon_sym_LT_POUNDassign] = ACTIONS(37),
    [sym_end_assign] = ACTIONS(39),
    [anon_sym_LT_POUNDglobal] = ACTIONS(41),
    [sym_end_global] = ACTIONS(43),
    [anon_sym_LT_POUNDlocal] = ACTIONS(45),
    [sym_end_local] = ACTIONS(47),
  },
  [312] = {
    [aux_sym_case_repeat2] = STATE(317),
    [sym_break] = ACTIONS(1284),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1282),
    [anon_sym_LT_POUNDcase] = ACTIONS(1282),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1282),
  },
  [313] = {
    [anon_sym_LT_AT] = ACTIONS(1286),
    [anon_sym_LT_POUNDlist] = ACTIONS(1286),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1286),
    [sym_break] = ACTIONS(1286),
    [sym_continue] = ACTIONS(1286),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1286),
    [anon_sym_LT_POUNDitems] = ACTIONS(1286),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1286),
    [anon_sym_LT_POUNDif] = ACTIONS(1286),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1286),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1286),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1286),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1286),
    [sym_fallback] = ACTIONS(1286),
    [sym_flush] = ACTIONS(1286),
    [anon_sym_LT_POUNDftl] = ACTIONS(1286),
    [anon_sym_LT_POUNDimport] = ACTIONS(1286),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1286),
    [sym_lt] = ACTIONS(1286),
    [sym_nt] = ACTIONS(1286),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1286),
    [sym_rt] = ACTIONS(1286),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1286),
    [sym_stop] = ACTIONS(1286),
    [sym_t] = ACTIONS(1286),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1286),
    [anon_sym_LT_POUNDassign] = ACTIONS(1286),
    [sym_end_assign] = ACTIONS(1286),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1286),
    [sym_end_global] = ACTIONS(1286),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1286),
    [sym_end_local] = ACTIONS(1286),
  },
  [314] = {
    [sym_directive] = STATE(308),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_items_middle] = STATE(314),
    [sym_sep] = STATE(308),
    [sym_sep_block] = STATE(204),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_items_repeat1] = STATE(314),
    [anon_sym_LT_AT] = ACTIONS(1288),
    [anon_sym_LT_POUNDlist] = ACTIONS(1291),
    [sym_break] = ACTIONS(1294),
    [sym_continue] = ACTIONS(1294),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1297),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1299),
    [anon_sym_LT_POUNDif] = ACTIONS(1302),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1305),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1308),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1311),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1314),
    [sym_fallback] = ACTIONS(1317),
    [sym_flush] = ACTIONS(1317),
    [anon_sym_LT_POUNDftl] = ACTIONS(1320),
    [anon_sym_LT_POUNDimport] = ACTIONS(1323),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1326),
    [sym_lt] = ACTIONS(1317),
    [sym_nt] = ACTIONS(1317),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1329),
    [sym_rt] = ACTIONS(1317),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1332),
    [sym_stop] = ACTIONS(1317),
    [sym_t] = ACTIONS(1317),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1335),
    [anon_sym_LT_POUNDassign] = ACTIONS(1338),
    [sym_end_assign] = ACTIONS(1341),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1344),
    [sym_end_global] = ACTIONS(1347),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1350),
    [sym_end_local] = ACTIONS(1353),
  },
  [315] = {
    [sym_directive] = STATE(315),
    [sym_user_defined] = STATE(9),
    [sym_list] = STATE(9),
    [sym_if] = STATE(9),
    [sym_switch] = STATE(9),
    [sym_function] = STATE(9),
    [sym_macro] = STATE(9),
    [sym_attempt] = STATE(9),
    [sym_ftl] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_recurse] = STATE(9),
    [sym_setting] = STATE(9),
    [sym_visit] = STATE(9),
    [sym_assign] = STATE(9),
    [sym_global] = STATE(9),
    [sym_local] = STATE(9),
    [aux_sym_case_repeat1] = STATE(315),
    [anon_sym_LT_AT] = ACTIONS(1210),
    [anon_sym_LT_POUNDlist] = ACTIONS(1213),
    [sym_break] = ACTIONS(1222),
    [anon_sym_LT_POUNDif] = ACTIONS(1216),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1219),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1222),
    [anon_sym_LT_POUNDcase] = ACTIONS(1222),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1222),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1224),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1227),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1230),
    [sym_fallback] = ACTIONS(1233),
    [sym_flush] = ACTIONS(1233),
    [anon_sym_LT_POUNDftl] = ACTIONS(1236),
    [anon_sym_LT_POUNDimport] = ACTIONS(1239),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1242),
    [sym_lt] = ACTIONS(1233),
    [sym_nt] = ACTIONS(1233),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1245),
    [sym_rt] = ACTIONS(1233),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1248),
    [sym_stop] = ACTIONS(1233),
    [sym_t] = ACTIONS(1233),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1251),
    [anon_sym_LT_POUNDassign] = ACTIONS(1254),
    [sym_end_assign] = ACTIONS(1257),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1260),
    [sym_end_global] = ACTIONS(1263),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1266),
    [sym_end_local] = ACTIONS(1269),
  },
  [316] = {
    [aux_sym_case_repeat2] = STATE(317),
    [sym_break] = ACTIONS(1284),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1356),
    [anon_sym_LT_POUNDcase] = ACTIONS(1356),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1356),
  },
  [317] = {
    [aux_sym_case_repeat2] = STATE(317),
    [sym_break] = ACTIONS(1358),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1361),
    [anon_sym_LT_POUNDcase] = ACTIONS(1361),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1361),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(23),
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
  [49] = {.count = 1, .reusable = true}, SHIFT(24),
  [51] = {.count = 1, .reusable = false}, SHIFT(25),
  [53] = {.count = 1, .reusable = true}, SHIFT(26),
  [55] = {.count = 1, .reusable = true}, SHIFT(27),
  [57] = {.count = 1, .reusable = false}, SHIFT(28),
  [59] = {.count = 1, .reusable = false}, SHIFT(29),
  [61] = {.count = 1, .reusable = true}, SHIFT(30),
  [63] = {.count = 1, .reusable = true}, SHIFT(31),
  [65] = {.count = 1, .reusable = false}, SHIFT(32),
  [67] = {.count = 1, .reusable = true}, SHIFT(33),
  [69] = {.count = 1, .reusable = false}, SHIFT(37),
  [71] = {.count = 1, .reusable = true}, SHIFT(38),
  [73] = {.count = 1, .reusable = true}, SHIFT(42),
  [75] = {.count = 1, .reusable = true}, SHIFT(44),
  [77] = {.count = 1, .reusable = true}, SHIFT(46),
  [79] = {.count = 1, .reusable = true}, SHIFT(47),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_directive, 1),
  [83] = {.count = 1, .reusable = true}, SHIFT(49),
  [85] = {.count = 1, .reusable = true}, SHIFT(51),
  [87] = {.count = 1, .reusable = true}, SHIFT(53),
  [89] = {.count = 1, .reusable = true}, SHIFT(55),
  [91] = {.count = 1, .reusable = true}, SHIFT(57),
  [93] = {.count = 1, .reusable = true}, SHIFT(59),
  [95] = {.count = 1, .reusable = true}, SHIFT(61),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 1),
  [99] = {.count = 1, .reusable = true}, SHIFT(63),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_global, 1),
  [103] = {.count = 1, .reusable = true}, SHIFT(65),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_local, 1),
  [107] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [111] = {.count = 1, .reusable = true}, SHIFT(67),
  [113] = {.count = 1, .reusable = false}, SHIFT(68),
  [115] = {.count = 1, .reusable = true}, SHIFT(69),
  [117] = {.count = 1, .reusable = false}, SHIFT(70),
  [119] = {.count = 1, .reusable = false}, SHIFT(71),
  [121] = {.count = 1, .reusable = true}, SHIFT(72),
  [123] = {.count = 1, .reusable = true}, SHIFT(73),
  [125] = {.count = 1, .reusable = false}, SHIFT(74),
  [127] = {.count = 1, .reusable = true}, SHIFT(75),
  [129] = {.count = 1, .reusable = true}, SHIFT(76),
  [131] = {.count = 1, .reusable = true}, SHIFT(79),
  [133] = {.count = 1, .reusable = false}, SHIFT(80),
  [135] = {.count = 1, .reusable = false}, SHIFT(81),
  [137] = {.count = 1, .reusable = true}, SHIFT(82),
  [139] = {.count = 1, .reusable = true}, SHIFT(83),
  [141] = {.count = 1, .reusable = false}, SHIFT(84),
  [143] = {.count = 1, .reusable = true}, SHIFT(85),
  [145] = {.count = 1, .reusable = true}, SHIFT(32),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_string, 1),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [155] = {.count = 1, .reusable = true}, SHIFT(88),
  [157] = {.count = 1, .reusable = true}, SHIFT(89),
  [159] = {.count = 1, .reusable = false}, SHIFT(90),
  [161] = {.count = 1, .reusable = false}, SHIFT(91),
  [163] = {.count = 1, .reusable = true}, SHIFT(92),
  [165] = {.count = 1, .reusable = true}, SHIFT(93),
  [167] = {.count = 1, .reusable = true}, SHIFT(94),
  [169] = {.count = 1, .reusable = false}, SHIFT(95),
  [171] = {.count = 1, .reusable = true}, SHIFT(96),
  [173] = {.count = 1, .reusable = true}, SHIFT(100),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym_top_level, 1),
  [177] = {.count = 1, .reusable = true}, SHIFT(103),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_top_level, 1),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym_spec_var, 1),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_spec_var, 1),
  [185] = {.count = 1, .reusable = true}, SHIFT(106),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_group, 1),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_group, 1),
  [191] = {.count = 1, .reusable = false}, SHIFT(107),
  [193] = {.count = 1, .reusable = false}, SHIFT(108),
  [195] = {.count = 1, .reusable = true}, SHIFT(108),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [199] = {.count = 1, .reusable = true}, SHIFT(112),
  [201] = {.count = 1, .reusable = false}, SHIFT(113),
  [203] = {.count = 1, .reusable = false}, SHIFT(114),
  [205] = {.count = 1, .reusable = true}, SHIFT(115),
  [207] = {.count = 1, .reusable = true}, SHIFT(116),
  [209] = {.count = 1, .reusable = false}, SHIFT(117),
  [211] = {.count = 1, .reusable = true}, SHIFT(118),
  [213] = {.count = 1, .reusable = true}, SHIFT(117),
  [215] = {.count = 1, .reusable = false}, SHIFT(121),
  [217] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 1),
  [219] = {.count = 1, .reusable = false}, SHIFT(122),
  [221] = {.count = 1, .reusable = true}, SHIFT(122),
  [223] = {.count = 1, .reusable = true}, SHIFT(126),
  [225] = {.count = 1, .reusable = true}, SHIFT(128),
  [227] = {.count = 1, .reusable = true}, SHIFT(129),
  [229] = {.count = 1, .reusable = true}, SHIFT(130),
  [231] = {.count = 1, .reusable = true}, SHIFT(133),
  [233] = {.count = 1, .reusable = true}, SHIFT(134),
  [235] = {.count = 1, .reusable = true}, SHIFT(135),
  [237] = {.count = 1, .reusable = true}, SHIFT(138),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_attempt, 2),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_attempt_middle, 1),
  [243] = {.count = 1, .reusable = true}, SHIFT(139),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_ftl, 2),
  [247] = {.count = 1, .reusable = true}, SHIFT(141),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_import, 2),
  [251] = {.count = 1, .reusable = true}, SHIFT(142),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [255] = {.count = 1, .reusable = true}, SHIFT(143),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_recurse, 2),
  [259] = {.count = 1, .reusable = true}, SHIFT(144),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_setting, 2),
  [263] = {.count = 1, .reusable = true}, SHIFT(145),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_visit, 2),
  [267] = {.count = 1, .reusable = true}, SHIFT(146),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 2),
  [271] = {.count = 1, .reusable = true}, SHIFT(147),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_global, 2),
  [275] = {.count = 1, .reusable = true}, SHIFT(148),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_local, 2),
  [279] = {.count = 1, .reusable = true}, SHIFT(149),
  [281] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [283] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [286] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [289] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [292] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [295] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [298] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [301] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [304] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [307] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [310] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [313] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [316] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [319] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [322] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [325] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [328] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [331] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [334] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [337] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [340] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [343] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [346] = {.count = 1, .reusable = true}, SHIFT(151),
  [348] = {.count = 1, .reusable = true}, SHIFT(152),
  [350] = {.count = 1, .reusable = true}, SHIFT(154),
  [352] = {.count = 1, .reusable = true}, SHIFT(156),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_user_defined, 3),
  [356] = {.count = 1, .reusable = false}, SHIFT(159),
  [358] = {.count = 1, .reusable = true}, SHIFT(163),
  [360] = {.count = 1, .reusable = true}, SHIFT(165),
  [362] = {.count = 1, .reusable = true}, SHIFT(166),
  [364] = {.count = 1, .reusable = true}, SHIFT(168),
  [366] = {.count = 1, .reusable = true}, SHIFT(170),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym_as_expression, 2),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym_built_in, 2),
  [372] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 2),
  [374] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 2),
  [376] = {.count = 1, .reusable = true}, SHIFT(175),
  [378] = {.count = 1, .reusable = true}, SHIFT(176),
  [380] = {.count = 1, .reusable = false}, REDUCE(sym_sequence, 2),
  [382] = {.count = 1, .reusable = true}, REDUCE(sym_sequence, 2),
  [384] = {.count = 1, .reusable = true}, SHIFT(178),
  [386] = {.count = 1, .reusable = true}, SHIFT(180),
  [388] = {.count = 1, .reusable = true}, SHIFT(183),
  [390] = {.count = 1, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 1),
  [392] = {.count = 1, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 1),
  [394] = {.count = 1, .reusable = true}, SHIFT(187),
  [396] = {.count = 1, .reusable = false}, REDUCE(sym_hash, 2),
  [398] = {.count = 1, .reusable = true}, REDUCE(sym_hash, 2),
  [400] = {.count = 1, .reusable = true}, SHIFT(192),
  [402] = {.count = 1, .reusable = false}, SHIFT(194),
  [404] = {.count = 1, .reusable = true}, SHIFT(195),
  [406] = {.count = 1, .reusable = false}, REDUCE(sym_top_level, 2),
  [408] = {.count = 1, .reusable = true}, REDUCE(sym_top_level, 2),
  [410] = {.count = 1, .reusable = false}, REDUCE(sym_spec_var, 2),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym_spec_var, 2),
  [414] = {.count = 1, .reusable = true}, SHIFT(198),
  [416] = {.count = 1, .reusable = true}, SHIFT(199),
  [418] = {.count = 1, .reusable = true}, SHIFT(200),
  [420] = {.count = 1, .reusable = true}, SHIFT(201),
  [422] = {.count = 1, .reusable = true}, SHIFT(202),
  [424] = {.count = 1, .reusable = true}, REDUCE(sym_operator, 1),
  [426] = {.count = 1, .reusable = false}, REDUCE(sym_operator, 1),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 2),
  [430] = {.count = 1, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2),
  [432] = {.count = 1, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2),
  [434] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(27),
  [437] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(28),
  [440] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(29),
  [443] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(30),
  [446] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(31),
  [449] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(32),
  [452] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(33),
  [455] = {.count = 1, .reusable = true}, SHIFT(208),
  [457] = {.count = 1, .reusable = true}, SHIFT(209),
  [459] = {.count = 1, .reusable = true}, SHIFT(211),
  [461] = {.count = 1, .reusable = true}, SHIFT(213),
  [463] = {.count = 1, .reusable = false}, REDUCE(sym_as_expression, 2),
  [465] = {.count = 1, .reusable = false}, REDUCE(sym_built_in, 2),
  [467] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 2),
  [469] = {.count = 1, .reusable = true}, SHIFT(219),
  [471] = {.count = 1, .reusable = true}, SHIFT(220),
  [473] = {.count = 1, .reusable = true}, SHIFT(221),
  [475] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(37),
  [478] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(38),
  [481] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(27),
  [484] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(28),
  [487] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(29),
  [490] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(30),
  [493] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(31),
  [496] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(32),
  [499] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(33),
  [502] = {.count = 1, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2),
  [504] = {.count = 1, .reusable = true}, SHIFT(225),
  [506] = {.count = 1, .reusable = true}, SHIFT(226),
  [508] = {.count = 1, .reusable = true}, SHIFT(227),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym_function, 3),
  [512] = {.count = 1, .reusable = true}, SHIFT(231),
  [514] = {.count = 1, .reusable = true}, REDUCE(sym_function_middle, 1),
  [516] = {.count = 1, .reusable = true}, SHIFT(233),
  [518] = {.count = 1, .reusable = true}, REDUCE(sym_macro, 3),
  [520] = {.count = 1, .reusable = true}, SHIFT(236),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym_macro_middle, 1),
  [524] = {.count = 1, .reusable = true}, SHIFT(238),
  [526] = {.count = 1, .reusable = true}, REDUCE(sym_attempt, 3),
  [528] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(2),
  [531] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(3),
  [534] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(4),
  [537] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(5),
  [540] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(6),
  [543] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(7),
  [546] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(8),
  [549] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2),
  [551] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(47),
  [554] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(9),
  [557] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(10),
  [560] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(11),
  [563] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(12),
  [566] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(13),
  [569] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(14),
  [572] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(15),
  [575] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(16),
  [578] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(17),
  [581] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(18),
  [584] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(19),
  [587] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(20),
  [590] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(21),
  [593] = {.count = 1, .reusable = true}, REDUCE(sym_ftl, 3),
  [595] = {.count = 1, .reusable = true}, REDUCE(sym_import, 3),
  [597] = {.count = 1, .reusable = true}, REDUCE(sym_include, 3),
  [599] = {.count = 1, .reusable = true}, REDUCE(sym_recurse, 3),
  [601] = {.count = 1, .reusable = true}, REDUCE(sym_setting, 3),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym_visit, 3),
  [605] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 3),
  [607] = {.count = 1, .reusable = true}, REDUCE(sym_global, 3),
  [609] = {.count = 1, .reusable = true}, REDUCE(sym_local, 3),
  [611] = {.count = 1, .reusable = true}, SHIFT(242),
  [613] = {.count = 1, .reusable = true}, SHIFT(243),
  [615] = {.count = 1, .reusable = true}, SHIFT(244),
  [617] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(69),
  [620] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(70),
  [623] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(71),
  [626] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(72),
  [629] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(73),
  [632] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(74),
  [635] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(75),
  [638] = {.count = 1, .reusable = true}, REDUCE(sym_user_defined, 4),
  [640] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(68),
  [643] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(69),
  [646] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(70),
  [649] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(71),
  [652] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(72),
  [655] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(73),
  [658] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(74),
  [661] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(75),
  [664] = {.count = 1, .reusable = true}, SHIFT(248),
  [666] = {.count = 1, .reusable = true}, SHIFT(249),
  [668] = {.count = 1, .reusable = true}, SHIFT(250),
  [670] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(79),
  [673] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(80),
  [676] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(81),
  [679] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(82),
  [682] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(83),
  [685] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(84),
  [688] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(85),
  [691] = {.count = 1, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2),
  [693] = {.count = 1, .reusable = false}, REDUCE(sym_built_in, 3),
  [695] = {.count = 1, .reusable = true}, REDUCE(sym_built_in, 3),
  [697] = {.count = 1, .reusable = true}, SHIFT(252),
  [699] = {.count = 1, .reusable = true}, SHIFT(253),
  [701] = {.count = 1, .reusable = true}, SHIFT(254),
  [703] = {.count = 1, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2),
  [705] = {.count = 1, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 2),
  [707] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(89),
  [710] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(90),
  [713] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(91),
  [716] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(92),
  [719] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(94),
  [722] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(95),
  [725] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(96),
  [728] = {.count = 1, .reusable = false}, REDUCE(sym_sequence, 3),
  [730] = {.count = 1, .reusable = true}, REDUCE(sym_sequence, 3),
  [732] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(89),
  [735] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(90),
  [738] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(91),
  [741] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(92),
  [744] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(94),
  [747] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(95),
  [750] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(96),
  [753] = {.count = 1, .reusable = false}, REDUCE(sym_hash, 3),
  [755] = {.count = 1, .reusable = true}, REDUCE(sym_hash, 3),
  [757] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_repeat1, 2), SHIFT_REPEAT(89),
  [760] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hash_repeat1, 2), SHIFT_REPEAT(90),
  [763] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hash_repeat1, 2), SHIFT_REPEAT(91),
  [766] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_repeat1, 2), SHIFT_REPEAT(92),
  [769] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_repeat1, 2), SHIFT_REPEAT(94),
  [772] = {.count = 1, .reusable = true}, REDUCE(aux_sym_hash_repeat1, 2),
  [774] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hash_repeat1, 2), SHIFT_REPEAT(95),
  [777] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_repeat1, 2), SHIFT_REPEAT(96),
  [780] = {.count = 1, .reusable = false}, REDUCE(sym_group, 2),
  [782] = {.count = 1, .reusable = true}, REDUCE(sym_group, 2),
  [784] = {.count = 1, .reusable = false}, SHIFT(261),
  [786] = {.count = 1, .reusable = true}, SHIFT(265),
  [788] = {.count = 1, .reusable = true}, REDUCE(sym_list, 4),
  [790] = {.count = 1, .reusable = true}, REDUCE(sym_list_middle, 1),
  [792] = {.count = 1, .reusable = true}, REDUCE(sym_list_else, 1),
  [794] = {.count = 1, .reusable = true}, REDUCE(sym_sep, 1),
  [796] = {.count = 1, .reusable = true}, SHIFT(269),
  [798] = {.count = 1, .reusable = true}, SHIFT(270),
  [800] = {.count = 1, .reusable = true}, REDUCE(sym_as_expression, 3),
  [802] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 3),
  [804] = {.count = 1, .reusable = true}, SHIFT(273),
  [806] = {.count = 1, .reusable = true}, SHIFT(274),
  [808] = {.count = 1, .reusable = true}, SHIFT(275),
  [810] = {.count = 1, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2),
  [812] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(112),
  [815] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(113),
  [818] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(114),
  [821] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(115),
  [824] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(116),
  [827] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(117),
  [830] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(118),
  [833] = {.count = 1, .reusable = false}, REDUCE(sym_as_expression, 3),
  [835] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 3),
  [837] = {.count = 1, .reusable = true}, REDUCE(sym_if_else, 1),
  [839] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4),
  [841] = {.count = 1, .reusable = true}, SHIFT(278),
  [843] = {.count = 1, .reusable = true}, REDUCE(sym_if_middle, 1),
  [845] = {.count = 1, .reusable = true}, SHIFT(280),
  [847] = {.count = 1, .reusable = true}, REDUCE(sym_switch, 4),
  [849] = {.count = 1, .reusable = true}, REDUCE(sym_default, 1),
  [851] = {.count = 1, .reusable = true}, REDUCE(sym_switch_middle, 1),
  [853] = {.count = 1, .reusable = true}, SHIFT(285),
  [855] = {.count = 1, .reusable = true}, REDUCE(sym_return, 2),
  [857] = {.count = 1, .reusable = true}, SHIFT(288),
  [859] = {.count = 1, .reusable = true}, REDUCE(sym_function, 4),
  [861] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(2),
  [864] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(3),
  [867] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(4),
  [870] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(5),
  [873] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(6),
  [876] = {.count = 1, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2),
  [878] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(130),
  [881] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(7),
  [884] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(8),
  [887] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(9),
  [890] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(10),
  [893] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(11),
  [896] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(12),
  [899] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(13),
  [902] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(14),
  [905] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(15),
  [908] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(16),
  [911] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(17),
  [914] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(18),
  [917] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(19),
  [920] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(20),
  [923] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(21),
  [926] = {.count = 1, .reusable = true}, SHIFT(289),
  [928] = {.count = 1, .reusable = true}, REDUCE(sym_nested, 2),
  [930] = {.count = 1, .reusable = true}, SHIFT(290),
  [932] = {.count = 1, .reusable = true}, REDUCE(sym_macro, 4),
  [934] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(2),
  [937] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(3),
  [940] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(4),
  [943] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(5),
  [946] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(6),
  [949] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(130),
  [952] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(7),
  [955] = {.count = 1, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2),
  [957] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(135),
  [960] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(8),
  [963] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(9),
  [966] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(10),
  [969] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(11),
  [972] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(12),
  [975] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(13),
  [978] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(14),
  [981] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(15),
  [984] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(16),
  [987] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(17),
  [990] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(18),
  [993] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(19),
  [996] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(20),
  [999] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(21),
  [1002] = {.count = 1, .reusable = true}, SHIFT(291),
  [1004] = {.count = 1, .reusable = true}, SHIFT(292),
  [1006] = {.count = 1, .reusable = true}, SHIFT(293),
  [1008] = {.count = 1, .reusable = true}, SHIFT(294),
  [1010] = {.count = 1, .reusable = false}, REDUCE(sym_group, 3),
  [1012] = {.count = 1, .reusable = true}, REDUCE(sym_group, 3),
  [1014] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(194),
  [1017] = {.count = 1, .reusable = true}, REDUCE(sym_list_else, 2),
  [1019] = {.count = 1, .reusable = true}, SHIFT(299),
  [1021] = {.count = 1, .reusable = true}, REDUCE(sym_sep_block, 2),
  [1023] = {.count = 1, .reusable = true}, REDUCE(sym_list, 5),
  [1025] = {.count = 1, .reusable = true}, SHIFT(300),
  [1027] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [1030] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(3),
  [1033] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2),
  [1035] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(199),
  [1038] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(201),
  [1041] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(202),
  [1044] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(4),
  [1047] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(5),
  [1050] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(6),
  [1053] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(7),
  [1056] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(8),
  [1059] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(9),
  [1062] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(10),
  [1065] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(11),
  [1068] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(12),
  [1071] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(13),
  [1074] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(14),
  [1077] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(15),
  [1080] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(16),
  [1083] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(17),
  [1086] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(18),
  [1089] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(19),
  [1092] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(20),
  [1095] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(21),
  [1098] = {.count = 1, .reusable = true}, SHIFT(301),
  [1100] = {.count = 1, .reusable = true}, REDUCE(sym_if_else, 2),
  [1102] = {.count = 1, .reusable = true}, REDUCE(sym_elseif, 2),
  [1104] = {.count = 1, .reusable = true}, SHIFT(303),
  [1106] = {.count = 1, .reusable = true}, REDUCE(sym_if, 5),
  [1108] = {.count = 1, .reusable = true}, SHIFT(304),
  [1110] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(2),
  [1113] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(3),
  [1116] = {.count = 1, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2),
  [1118] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(4),
  [1121] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(221),
  [1124] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(5),
  [1127] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(6),
  [1130] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(7),
  [1133] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(8),
  [1136] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(9),
  [1139] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(10),
  [1142] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(11),
  [1145] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(12),
  [1148] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(13),
  [1151] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(14),
  [1154] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(15),
  [1157] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(16),
  [1160] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(17),
  [1163] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(18),
  [1166] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(19),
  [1169] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(20),
  [1172] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(21),
  [1175] = {.count = 1, .reusable = true}, SHIFT(305),
  [1177] = {.count = 1, .reusable = true}, REDUCE(sym_default, 2),
  [1179] = {.count = 1, .reusable = true}, REDUCE(sym_switch, 5),
  [1181] = {.count = 1, .reusable = true}, SHIFT(307),
  [1183] = {.count = 1, .reusable = true}, REDUCE(aux_sym_switch_repeat1, 2),
  [1185] = {.count = 2, .reusable = true}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(226),
  [1188] = {.count = 1, .reusable = true}, REDUCE(sym_return, 3),
  [1190] = {.count = 1, .reusable = true}, REDUCE(sym_function, 5),
  [1192] = {.count = 1, .reusable = true}, REDUCE(sym_nested, 3),
  [1194] = {.count = 1, .reusable = true}, REDUCE(sym_macro, 5),
  [1196] = {.count = 1, .reusable = true}, SHIFT(308),
  [1198] = {.count = 1, .reusable = true}, SHIFT(309),
  [1200] = {.count = 1, .reusable = true}, REDUCE(sym_list, 6),
  [1202] = {.count = 1, .reusable = true}, REDUCE(sym_elseif, 3),
  [1204] = {.count = 1, .reusable = true}, REDUCE(sym_if, 6),
  [1206] = {.count = 1, .reusable = true}, SHIFT(312),
  [1208] = {.count = 1, .reusable = true}, REDUCE(sym_case, 3),
  [1210] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(2),
  [1213] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(3),
  [1216] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(4),
  [1219] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(5),
  [1222] = {.count = 1, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2),
  [1224] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(6),
  [1227] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(7),
  [1230] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(8),
  [1233] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(9),
  [1236] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(10),
  [1239] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(11),
  [1242] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(12),
  [1245] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(13),
  [1248] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(14),
  [1251] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(15),
  [1254] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(16),
  [1257] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(17),
  [1260] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(18),
  [1263] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(19),
  [1266] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(20),
  [1269] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(21),
  [1272] = {.count = 1, .reusable = true}, REDUCE(sym_switch, 6),
  [1274] = {.count = 1, .reusable = true}, REDUCE(sym_items_middle, 1),
  [1276] = {.count = 1, .reusable = true}, REDUCE(sym_items, 4),
  [1278] = {.count = 1, .reusable = true}, SHIFT(313),
  [1280] = {.count = 1, .reusable = true}, SHIFT(316),
  [1282] = {.count = 1, .reusable = true}, REDUCE(sym_case, 4),
  [1284] = {.count = 1, .reusable = true}, SHIFT(317),
  [1286] = {.count = 1, .reusable = true}, REDUCE(sym_items, 5),
  [1288] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(2),
  [1291] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(3),
  [1294] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(308),
  [1297] = {.count = 1, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2),
  [1299] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(202),
  [1302] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(4),
  [1305] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(5),
  [1308] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(6),
  [1311] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(7),
  [1314] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(8),
  [1317] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(9),
  [1320] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(10),
  [1323] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(11),
  [1326] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(12),
  [1329] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(13),
  [1332] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(14),
  [1335] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(15),
  [1338] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(16),
  [1341] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(17),
  [1344] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(18),
  [1347] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(19),
  [1350] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(20),
  [1353] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(21),
  [1356] = {.count = 1, .reusable = true}, REDUCE(sym_case, 5),
  [1358] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat2, 2), SHIFT_REPEAT(317),
  [1361] = {.count = 1, .reusable = true}, REDUCE(aux_sym_case_repeat2, 2),
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
