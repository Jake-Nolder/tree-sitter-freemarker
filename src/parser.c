#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 350
#define SYMBOL_COUNT 160
#define ALIAS_COUNT 2
#define TOKEN_COUNT 93
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  sym_comment = 1,
  anon_sym_DOLLAR = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_as = 5,
  anon_sym_QMARK = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_LT_POUND = 9,
  anon_sym_GT = 10,
  anon_sym_using = 11,
  anon_sym_COMMA = 12,
  anon_sym_DOT_DOT = 13,
  anon_sym_DOT_DOT_LT = 14,
  anon_sym_DOT_DOT_BANG = 15,
  anon_sym_COLON = 16,
  anon_sym_STAR = 17,
  anon_sym_PLUS = 18,
  anon_sym_SLASH = 19,
  anon_sym_DASH = 20,
  anon_sym_PERCENT = 21,
  anon_sym_EQ_EQ = 22,
  anon_sym_BANG_EQ = 23,
  anon_sym_LT = 24,
  anon_sym_LT_EQ = 25,
  anon_sym_lt = 26,
  anon_sym_lte = 27,
  anon_sym_gt = 28,
  anon_sym_gte = 29,
  anon_sym_BANG = 30,
  anon_sym_AMP_AMP = 31,
  anon_sym_PIPE_PIPE = 32,
  anon_sym_QMARK_QMARK = 33,
  anon_sym_EQ = 34,
  aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH = 35,
  aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH = 36,
  sym_number = 37,
  anon_sym_true = 38,
  anon_sym_false = 39,
  anon_sym_LBRACK = 40,
  anon_sym_RBRACK = 41,
  aux_sym_SLASH_BSLASHw_PLUS_SLASH = 42,
  aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH = 43,
  anon_sym_DOT = 44,
  anon_sym_hello = 45,
  anon_sym_auto_esc = 46,
  anon_sym_LT_AT = 47,
  anon_sym_SLASH_GT = 48,
  anon_sym_list = 49,
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
  sym_interpolation = 95,
  sym_directive = 96,
  sym_parameter_group = 97,
  sym_as_expression = 98,
  sym_expression = 99,
  sym_type = 100,
  sym_built_in = 101,
  sym_group = 102,
  sym_operator = 103,
  sym_string = 104,
  sym_boolean = 105,
  sym_sequence = 106,
  sym_hash = 107,
  sym_top_level = 108,
  sym_spec_var = 109,
  sym__spec_var_name = 110,
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
  aux_sym_interpolation_repeat1 = 145,
  aux_sym_as_expression_repeat1 = 146,
  aux_sym_as_expression_repeat2 = 147,
  aux_sym_group_repeat1 = 148,
  aux_sym_sequence_repeat1 = 149,
  aux_sym_top_level_repeat1 = 150,
  aux_sym_list_repeat1 = 151,
  aux_sym_items_repeat1 = 152,
  aux_sym_if_repeat1 = 153,
  aux_sym_switch_repeat1 = 154,
  aux_sym_case_repeat1 = 155,
  aux_sym_case_repeat2 = 156,
  aux_sym_function_repeat1 = 157,
  aux_sym_macro_repeat1 = 158,
  aux_sym_attempt_repeat1 = 159,
  alias_sym_bracket = 160,
  alias_sym_sub_level = 161,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_comment] = "comment",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LBRACE] = "bracket",
  [anon_sym_RBRACE] = "bracket",
  [anon_sym_as] = "as",
  [anon_sym_QMARK] = "?",
  [anon_sym_LPAREN] = "bracket",
  [anon_sym_RPAREN] = "bracket",
  [anon_sym_LT_POUND] = "<#",
  [anon_sym_GT] = ">",
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
  [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = "/\\\"(\\\\.|[^\\\"])*\\\"/",
  [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = "/\\'(\\\\.|[^\\'])*\\'/",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_LBRACK] = "bracket",
  [anon_sym_RBRACK] = "bracket",
  [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = "/\\w+/",
  [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = "/\\.([a-zA-Z0-9\\_]+)/",
  [anon_sym_DOT] = ".",
  [anon_sym_hello] = "hello",
  [anon_sym_auto_esc] = "auto_esc",
  [anon_sym_LT_AT] = "<@",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_list] = "list",
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
  [sym__spec_var_name] = "_spec_var_name",
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
  [aux_sym_top_level_repeat1] = "top_level_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_items_repeat1] = "items_repeat1",
  [aux_sym_if_repeat1] = "if_repeat1",
  [aux_sym_switch_repeat1] = "switch_repeat1",
  [aux_sym_case_repeat1] = "case_repeat1",
  [aux_sym_case_repeat2] = "case_repeat2",
  [aux_sym_function_repeat1] = "function_repeat1",
  [aux_sym_macro_repeat1] = "macro_repeat1",
  [aux_sym_attempt_repeat1] = "attempt_repeat1",
  [alias_sym_bracket] = "bracket",
  [alias_sym_sub_level] = "sub_level",
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE] = {
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
    .named = true,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
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
    .named = true,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hello] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto_esc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
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
  [sym__spec_var_name] = {
    .visible = false,
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
  [aux_sym_top_level_repeat1] = {
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
  [alias_sym_bracket] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sub_level] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [1] = alias_sym_sub_level,
  },
  [2] = {
    [0] = alias_sym_bracket,
    [3] = alias_sym_bracket,
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
        ADVANCE(9);
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
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(20);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(27);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(30);
      if (lookahead == '=')
        ADVANCE(195);
      if (lookahead == '>')
        ADVANCE(197);
      if (lookahead == '?')
        ADVANCE(198);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == ']')
        ADVANCE(201);
      if (lookahead == 'a')
        ADVANCE(202);
      if (lookahead == 'f')
        ADVANCE(211);
      if (lookahead == 'g')
        ADVANCE(216);
      if (lookahead == 'h')
        ADVANCE(219);
      if (lookahead == 'l')
        ADVANCE(224);
      if (lookahead == 't')
        ADVANCE(230);
      if (lookahead == 'u')
        ADVANCE(234);
      if (lookahead == '{')
        ADVANCE(239);
      if (lookahead == '|')
        ADVANCE(240);
      if (lookahead == '}')
        ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(243);
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
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_PERCENT);
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
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '!')
        ADVANCE(24);
      if (lookahead == '<')
        ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_BANG);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_LT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '>')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '#')
        ADVANCE(31);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '@')
        ADVANCE(194);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT_POUND);
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'a')
        ADVANCE(38);
      if (lookahead == 'b')
        ADVANCE(51);
      if (lookahead == 'c')
        ADVANCE(57);
      if (lookahead == 'd')
        ADVANCE(69);
      if (lookahead == 'e')
        ADVANCE(77);
      if (lookahead == 'f')
        ADVANCE(84);
      if (lookahead == 'g')
        ADVANCE(107);
      if (lookahead == 'i')
        ADVANCE(113);
      if (lookahead == 'l')
        ADVANCE(130);
      if (lookahead == 'm')
        ADVANCE(137);
      if (lookahead == 'n')
        ADVANCE(142);
      if (lookahead == 'r')
        ADVANCE(150);
      if (lookahead == 's')
        ADVANCE(168);
      if (lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'v')
        ADVANCE(188);
      END_STATE();
    case 32:
      if (lookahead == '-')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '-')
        ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == '-')
        ADVANCE(36);
      if (lookahead == '>')
        ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(34);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == 's')
        ADVANCE(39);
      if (lookahead == 't')
        ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 's')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'i')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'g')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'n')
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LT_POUNDassign);
      END_STATE();
    case 44:
      if (lookahead == 't')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'e')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'm')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'p')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 't')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == '>')
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT_POUNDattempt_GT);
      END_STATE();
    case 51:
      if (lookahead == 'r')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'e')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'a')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'k')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == '>')
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_break);
      END_STATE();
    case 57:
      if (lookahead == 'a')
        ADVANCE(58);
      if (lookahead == 'o')
        ADVANCE(61);
      END_STATE();
    case 58:
      if (lookahead == 's')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'e')
        ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT_POUNDcase);
      END_STATE();
    case 61:
      if (lookahead == 'n')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 't')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'i')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'n')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'u')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'e')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == '>')
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_continue);
      END_STATE();
    case 69:
      if (lookahead == 'e')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'f')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'a')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'u')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'l')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 't')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == '>')
        ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT_POUNDdefault_GT);
      END_STATE();
    case 77:
      if (lookahead == 'l')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 's')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'e')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == '>')
        ADVANCE(81);
      if (lookahead == 'i')
        ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT_POUNDelse_GT);
      END_STATE();
    case 82:
      if (lookahead == 'f')
        ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT_POUNDelseif);
      END_STATE();
    case 84:
      if (lookahead == 'a')
        ADVANCE(85);
      if (lookahead == 'l')
        ADVANCE(93);
      if (lookahead == 't')
        ADVANCE(98);
      if (lookahead == 'u')
        ADVANCE(100);
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
      if (lookahead == '>')
        ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_fallback);
      END_STATE();
    case 93:
      if (lookahead == 'u')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 's')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'h')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == '>')
        ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_flush);
      END_STATE();
    case 98:
      if (lookahead == 'l')
        ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LT_POUNDftl);
      END_STATE();
    case 100:
      if (lookahead == 'n')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'c')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 't')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'i')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 'o')
        ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 'n')
        ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LT_POUNDfunction);
      END_STATE();
    case 107:
      if (lookahead == 'l')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'o')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'b')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'a')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'l')
        ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LT_POUNDglobal);
      END_STATE();
    case 113:
      if (lookahead == 'f')
        ADVANCE(114);
      if (lookahead == 'm')
        ADVANCE(115);
      if (lookahead == 'n')
        ADVANCE(120);
      if (lookahead == 't')
        ADVANCE(126);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LT_POUNDif);
      END_STATE();
    case 115:
      if (lookahead == 'p')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'o')
        ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == 'r')
        ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 't')
        ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LT_POUNDimport);
      END_STATE();
    case 120:
      if (lookahead == 'c')
        ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 'l')
        ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 'u')
        ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == 'd')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 'e')
        ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LT_POUNDinclude);
      END_STATE();
    case 126:
      if (lookahead == 'e')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == 'm')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 's')
        ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LT_POUNDitems);
      END_STATE();
    case 130:
      if (lookahead == 'o')
        ADVANCE(131);
      if (lookahead == 't')
        ADVANCE(135);
      END_STATE();
    case 131:
      if (lookahead == 'c')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 'a')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'l')
        ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LT_POUNDlocal);
      END_STATE();
    case 135:
      if (lookahead == '>')
        ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_lt);
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
      ACCEPT_TOKEN(anon_sym_LT_POUNDmacro);
      END_STATE();
    case 142:
      if (lookahead == 'e')
        ADVANCE(143);
      if (lookahead == 't')
        ADVANCE(148);
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
      ACCEPT_TOKEN(anon_sym_LT_POUNDnested);
      END_STATE();
    case 148:
      if (lookahead == '>')
        ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_nt);
      END_STATE();
    case 150:
      if (lookahead == 'e')
        ADVANCE(151);
      if (lookahead == 't')
        ADVANCE(166);
      END_STATE();
    case 151:
      if (lookahead == 'c')
        ADVANCE(152);
      if (lookahead == 't')
        ADVANCE(162);
      END_STATE();
    case 152:
      if (lookahead == 'o')
        ADVANCE(153);
      if (lookahead == 'u')
        ADVANCE(158);
      END_STATE();
    case 153:
      if (lookahead == 'v')
        ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == 'e')
        ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == 'r')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == '>')
        ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_recover);
      END_STATE();
    case 158:
      if (lookahead == 'r')
        ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 's')
        ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 'e')
        ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LT_POUNDrecurse);
      END_STATE();
    case 162:
      if (lookahead == 'u')
        ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == 'r')
        ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'n')
        ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LT_POUNDreturn);
      END_STATE();
    case 166:
      if (lookahead == '>')
        ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_rt);
      END_STATE();
    case 168:
      if (lookahead == 'e')
        ADVANCE(169);
      if (lookahead == 't')
        ADVANCE(177);
      if (lookahead == 'w')
        ADVANCE(181);
      END_STATE();
    case 169:
      if (lookahead == 'p')
        ADVANCE(170);
      if (lookahead == 't')
        ADVANCE(172);
      END_STATE();
    case 170:
      if (lookahead == '>')
        ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LT_POUNDsep_GT);
      END_STATE();
    case 172:
      if (lookahead == 't')
        ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == 'i')
        ADVANCE(174);
      END_STATE();
    case 174:
      if (lookahead == 'n')
        ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead == 'g')
        ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LT_POUNDsetting);
      END_STATE();
    case 177:
      if (lookahead == 'o')
        ADVANCE(178);
      END_STATE();
    case 178:
      if (lookahead == 'p')
        ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == '>')
        ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_stop);
      END_STATE();
    case 181:
      if (lookahead == 'i')
        ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == 't')
        ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == 'c')
        ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead == 'h')
        ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_LT_POUNDswitch);
      END_STATE();
    case 186:
      if (lookahead == '>')
        ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_t);
      END_STATE();
    case 188:
      if (lookahead == 'i')
        ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == 's')
        ADVANCE(190);
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
      ACCEPT_TOKEN(anon_sym_LT_POUNDvisit);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LT_AT);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '?')
        ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 202:
      if (lookahead == 's')
        ADVANCE(203);
      if (lookahead == 'u')
        ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 204:
      if (lookahead == 't')
        ADVANCE(205);
      END_STATE();
    case 205:
      if (lookahead == 'o')
        ADVANCE(206);
      END_STATE();
    case 206:
      if (lookahead == '_')
        ADVANCE(207);
      END_STATE();
    case 207:
      if (lookahead == 'e')
        ADVANCE(208);
      END_STATE();
    case 208:
      if (lookahead == 's')
        ADVANCE(209);
      END_STATE();
    case 209:
      if (lookahead == 'c')
        ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_auto_esc);
      END_STATE();
    case 211:
      if (lookahead == 'a')
        ADVANCE(212);
      END_STATE();
    case 212:
      if (lookahead == 'l')
        ADVANCE(213);
      END_STATE();
    case 213:
      if (lookahead == 's')
        ADVANCE(214);
      END_STATE();
    case 214:
      if (lookahead == 'e')
        ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 216:
      if (lookahead == 't')
        ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_gt);
      if (lookahead == 'e')
        ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_gte);
      END_STATE();
    case 219:
      if (lookahead == 'e')
        ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead == 'l')
        ADVANCE(221);
      END_STATE();
    case 221:
      if (lookahead == 'l')
        ADVANCE(222);
      END_STATE();
    case 222:
      if (lookahead == 'o')
        ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_hello);
      END_STATE();
    case 224:
      if (lookahead == 'i')
        ADVANCE(225);
      if (lookahead == 't')
        ADVANCE(228);
      END_STATE();
    case 225:
      if (lookahead == 's')
        ADVANCE(226);
      END_STATE();
    case 226:
      if (lookahead == 't')
        ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_lt);
      if (lookahead == 'e')
        ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_lte);
      END_STATE();
    case 230:
      if (lookahead == 'r')
        ADVANCE(231);
      END_STATE();
    case 231:
      if (lookahead == 'u')
        ADVANCE(232);
      END_STATE();
    case 232:
      if (lookahead == 'e')
        ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_true);
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
      if (lookahead == 'n')
        ADVANCE(237);
      END_STATE();
    case 237:
      if (lookahead == 'g')
        ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 240:
      if (lookahead == '|')
        ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 244:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(244);
      END_STATE();
    case 245:
      if (lookahead == '#')
        ADVANCE(246);
      if (lookahead == '/')
        ADVANCE(254);
      if (lookahead == '@')
        ADVANCE(194);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_LT_POUND);
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'a')
        ADVANCE(38);
      if (lookahead == 'f')
        ADVANCE(84);
      if (lookahead == 'g')
        ADVANCE(107);
      if (lookahead == 'i')
        ADVANCE(247);
      if (lookahead == 'l')
        ADVANCE(130);
      if (lookahead == 'm')
        ADVANCE(137);
      if (lookahead == 'n')
        ADVANCE(248);
      if (lookahead == 'r')
        ADVANCE(249);
      if (lookahead == 's')
        ADVANCE(252);
      if (lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'v')
        ADVANCE(188);
      END_STATE();
    case 247:
      if (lookahead == 'f')
        ADVANCE(114);
      if (lookahead == 'm')
        ADVANCE(115);
      if (lookahead == 'n')
        ADVANCE(120);
      END_STATE();
    case 248:
      if (lookahead == 't')
        ADVANCE(148);
      END_STATE();
    case 249:
      if (lookahead == 'e')
        ADVANCE(250);
      if (lookahead == 't')
        ADVANCE(166);
      END_STATE();
    case 250:
      if (lookahead == 'c')
        ADVANCE(251);
      END_STATE();
    case 251:
      if (lookahead == 'u')
        ADVANCE(158);
      END_STATE();
    case 252:
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 't')
        ADVANCE(177);
      if (lookahead == 'w')
        ADVANCE(181);
      END_STATE();
    case 253:
      if (lookahead == 't')
        ADVANCE(172);
      END_STATE();
    case 254:
      if (lookahead == '#')
        ADVANCE(255);
      END_STATE();
    case 255:
      if (lookahead == 'a')
        ADVANCE(256);
      if (lookahead == 'g')
        ADVANCE(263);
      if (lookahead == 'l')
        ADVANCE(270);
      END_STATE();
    case 256:
      if (lookahead == 's')
        ADVANCE(257);
      END_STATE();
    case 257:
      if (lookahead == 's')
        ADVANCE(258);
      END_STATE();
    case 258:
      if (lookahead == 'i')
        ADVANCE(259);
      END_STATE();
    case 259:
      if (lookahead == 'g')
        ADVANCE(260);
      END_STATE();
    case 260:
      if (lookahead == 'n')
        ADVANCE(261);
      END_STATE();
    case 261:
      if (lookahead == '>')
        ADVANCE(262);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_end_assign);
      END_STATE();
    case 263:
      if (lookahead == 'l')
        ADVANCE(264);
      END_STATE();
    case 264:
      if (lookahead == 'o')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 'b')
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
      ACCEPT_TOKEN(sym_end_global);
      END_STATE();
    case 270:
      if (lookahead == 'o')
        ADVANCE(271);
      END_STATE();
    case 271:
      if (lookahead == 'c')
        ADVANCE(272);
      END_STATE();
    case 272:
      if (lookahead == 'a')
        ADVANCE(273);
      END_STATE();
    case 273:
      if (lookahead == 'l')
        ADVANCE(274);
      END_STATE();
    case 274:
      if (lookahead == '>')
        ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_end_local);
      END_STATE();
    case 276:
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '.')
        ADVANCE(277);
      if (lookahead == '>')
        ADVANCE(197);
      if (lookahead == '{')
        ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 277:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
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
      if (lookahead == 'l')
        ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(279);
      END_STATE();
    case 280:
      if (lookahead == 'i')
        ADVANCE(225);
      END_STATE();
    case 281:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(9);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(18);
      if (lookahead == '+')
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(20);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '.')
        ADVANCE(282);
      if (lookahead == '/')
        ADVANCE(283);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(284);
      if (lookahead == '=')
        ADVANCE(195);
      if (lookahead == '>')
        ADVANCE(197);
      if (lookahead == '?')
        ADVANCE(198);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == 'a')
        ADVANCE(285);
      if (lookahead == 'g')
        ADVANCE(287);
      if (lookahead == 'l')
        ADVANCE(290);
      if (lookahead == 't')
        ADVANCE(293);
      if (lookahead == 'u')
        ADVANCE(297);
      if (lookahead == '{')
        ADVANCE(239);
      if (lookahead == '|')
        ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(281);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(23);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=')
        ADVANCE(193);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_gt);
      if (lookahead == 'e')
        ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_gte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_lt);
      if (lookahead == 'e')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_lte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'u')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'g')
        ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_using);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 303:
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
        ADVANCE(308);
      if (lookahead == '@')
        ADVANCE(194);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_LT_POUND);
      if (lookahead == 'a')
        ADVANCE(38);
      if (lookahead == 'f')
        ADVANCE(84);
      if (lookahead == 'g')
        ADVANCE(107);
      if (lookahead == 'i')
        ADVANCE(247);
      if (lookahead == 'l')
        ADVANCE(130);
      if (lookahead == 'm')
        ADVANCE(137);
      if (lookahead == 'n')
        ADVANCE(248);
      if (lookahead == 'r')
        ADVANCE(306);
      if (lookahead == 's')
        ADVANCE(252);
      if (lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'v')
        ADVANCE(188);
      END_STATE();
    case 306:
      if (lookahead == 'e')
        ADVANCE(307);
      if (lookahead == 't')
        ADVANCE(166);
      END_STATE();
    case 307:
      if (lookahead == 'c')
        ADVANCE(152);
      END_STATE();
    case 308:
      if (lookahead == '#')
        ADVANCE(309);
      END_STATE();
    case 309:
      if (lookahead == 'a')
        ADVANCE(310);
      if (lookahead == 'g')
        ADVANCE(263);
      if (lookahead == 'l')
        ADVANCE(270);
      END_STATE();
    case 310:
      if (lookahead == 's')
        ADVANCE(257);
      if (lookahead == 't')
        ADVANCE(311);
      END_STATE();
    case 311:
      if (lookahead == 't')
        ADVANCE(312);
      END_STATE();
    case 312:
      if (lookahead == 'e')
        ADVANCE(313);
      END_STATE();
    case 313:
      if (lookahead == 'm')
        ADVANCE(314);
      END_STATE();
    case 314:
      if (lookahead == 'p')
        ADVANCE(315);
      END_STATE();
    case 315:
      if (lookahead == 't')
        ADVANCE(316);
      END_STATE();
    case 316:
      if (lookahead == '>')
        ADVANCE(317);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDattempt_GT);
      END_STATE();
    case 318:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(318);
      END_STATE();
    case 319:
      if (lookahead == '#')
        ADVANCE(31);
      if (lookahead == '/')
        ADVANCE(320);
      if (lookahead == '@')
        ADVANCE(194);
      END_STATE();
    case 320:
      if (lookahead == '#')
        ADVANCE(321);
      END_STATE();
    case 321:
      if (lookahead == 'a')
        ADVANCE(310);
      if (lookahead == 'f')
        ADVANCE(322);
      if (lookahead == 'g')
        ADVANCE(263);
      if (lookahead == 'i')
        ADVANCE(331);
      if (lookahead == 'l')
        ADVANCE(339);
      if (lookahead == 'm')
        ADVANCE(344);
      if (lookahead == 's')
        ADVANCE(350);
      END_STATE();
    case 322:
      if (lookahead == 'u')
        ADVANCE(323);
      END_STATE();
    case 323:
      if (lookahead == 'n')
        ADVANCE(324);
      END_STATE();
    case 324:
      if (lookahead == 'c')
        ADVANCE(325);
      END_STATE();
    case 325:
      if (lookahead == 't')
        ADVANCE(326);
      END_STATE();
    case 326:
      if (lookahead == 'i')
        ADVANCE(327);
      END_STATE();
    case 327:
      if (lookahead == 'o')
        ADVANCE(328);
      END_STATE();
    case 328:
      if (lookahead == 'n')
        ADVANCE(329);
      END_STATE();
    case 329:
      if (lookahead == '>')
        ADVANCE(330);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDfunction_GT);
      END_STATE();
    case 331:
      if (lookahead == 'f')
        ADVANCE(332);
      if (lookahead == 't')
        ADVANCE(334);
      END_STATE();
    case 332:
      if (lookahead == '>')
        ADVANCE(333);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDif_GT);
      END_STATE();
    case 334:
      if (lookahead == 'e')
        ADVANCE(335);
      END_STATE();
    case 335:
      if (lookahead == 'm')
        ADVANCE(336);
      END_STATE();
    case 336:
      if (lookahead == 's')
        ADVANCE(337);
      END_STATE();
    case 337:
      if (lookahead == '>')
        ADVANCE(338);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDitems_GT);
      END_STATE();
    case 339:
      if (lookahead == 'i')
        ADVANCE(340);
      if (lookahead == 'o')
        ADVANCE(271);
      END_STATE();
    case 340:
      if (lookahead == 's')
        ADVANCE(341);
      END_STATE();
    case 341:
      if (lookahead == 't')
        ADVANCE(342);
      END_STATE();
    case 342:
      if (lookahead == '>')
        ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDlist_GT);
      END_STATE();
    case 344:
      if (lookahead == 'a')
        ADVANCE(345);
      END_STATE();
    case 345:
      if (lookahead == 'c')
        ADVANCE(346);
      END_STATE();
    case 346:
      if (lookahead == 'r')
        ADVANCE(347);
      END_STATE();
    case 347:
      if (lookahead == 'o')
        ADVANCE(348);
      END_STATE();
    case 348:
      if (lookahead == '>')
        ADVANCE(349);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDmacro_GT);
      END_STATE();
    case 350:
      if (lookahead == 'w')
        ADVANCE(351);
      END_STATE();
    case 351:
      if (lookahead == 'i')
        ADVANCE(352);
      END_STATE();
    case 352:
      if (lookahead == 't')
        ADVANCE(353);
      END_STATE();
    case 353:
      if (lookahead == 'c')
        ADVANCE(354);
      END_STATE();
    case 354:
      if (lookahead == 'h')
        ADVANCE(355);
      END_STATE();
    case 355:
      if (lookahead == '>')
        ADVANCE(356);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDswitch_GT);
      END_STATE();
    case 357:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(357);
      END_STATE();
    case 358:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(9);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(18);
      if (lookahead == '+')
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(20);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '.')
        ADVANCE(282);
      if (lookahead == '/')
        ADVANCE(283);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(284);
      if (lookahead == '=')
        ADVANCE(195);
      if (lookahead == '?')
        ADVANCE(359);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == 'g')
        ADVANCE(287);
      if (lookahead == 'l')
        ADVANCE(290);
      if (lookahead == 't')
        ADVANCE(293);
      if (lookahead == 'u')
        ADVANCE(297);
      if (lookahead == '{')
        ADVANCE(239);
      if (lookahead == '|')
        ADVANCE(240);
      if (lookahead == '}')
        ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(358);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 359:
      if (lookahead == '?')
        ADVANCE(199);
      END_STATE();
    case 360:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(9);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '*')
        ADVANCE(18);
      if (lookahead == '+')
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(20);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '.')
        ADVANCE(282);
      if (lookahead == '/')
        ADVANCE(27);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(284);
      if (lookahead == '=')
        ADVANCE(195);
      if (lookahead == '>')
        ADVANCE(197);
      if (lookahead == '?')
        ADVANCE(198);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == 'a')
        ADVANCE(285);
      if (lookahead == 'g')
        ADVANCE(287);
      if (lookahead == 'l')
        ADVANCE(290);
      if (lookahead == 't')
        ADVANCE(293);
      if (lookahead == 'u')
        ADVANCE(297);
      if (lookahead == '{')
        ADVANCE(239);
      if (lookahead == '|')
        ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(360);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 361:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(362);
      if (lookahead == '>')
        ADVANCE(197);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == 't')
        ADVANCE(293);
      if (lookahead == '{')
        ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(361);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 363:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(9);
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
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(20);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '.')
        ADVANCE(282);
      if (lookahead == '/')
        ADVANCE(283);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(284);
      if (lookahead == '=')
        ADVANCE(195);
      if (lookahead == '>')
        ADVANCE(197);
      if (lookahead == '?')
        ADVANCE(198);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == 'a')
        ADVANCE(285);
      if (lookahead == 'g')
        ADVANCE(287);
      if (lookahead == 'l')
        ADVANCE(290);
      if (lookahead == 't')
        ADVANCE(293);
      if (lookahead == 'u')
        ADVANCE(297);
      if (lookahead == '{')
        ADVANCE(239);
      if (lookahead == '|')
        ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(363);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 364:
      if (lookahead == 'f')
        ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(364);
      END_STATE();
    case 365:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(9);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(18);
      if (lookahead == '+')
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(20);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '.')
        ADVANCE(282);
      if (lookahead == '/')
        ADVANCE(283);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(284);
      if (lookahead == '=')
        ADVANCE(195);
      if (lookahead == '?')
        ADVANCE(359);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == ']')
        ADVANCE(201);
      if (lookahead == 'g')
        ADVANCE(287);
      if (lookahead == 'l')
        ADVANCE(290);
      if (lookahead == 't')
        ADVANCE(293);
      if (lookahead == 'u')
        ADVANCE(297);
      if (lookahead == '{')
        ADVANCE(239);
      if (lookahead == '|')
        ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(365);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 366:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(9);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '*')
        ADVANCE(18);
      if (lookahead == '+')
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(20);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(283);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(284);
      if (lookahead == '=')
        ADVANCE(195);
      if (lookahead == '>')
        ADVANCE(197);
      if (lookahead == '?')
        ADVANCE(198);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == 'a')
        ADVANCE(285);
      if (lookahead == 'g')
        ADVANCE(287);
      if (lookahead == 'l')
        ADVANCE(290);
      if (lookahead == 't')
        ADVANCE(293);
      if (lookahead == 'u')
        ADVANCE(297);
      if (lookahead == '{')
        ADVANCE(239);
      if (lookahead == '|')
        ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(366);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 367:
      if (lookahead == 'a')
        ADVANCE(368);
      if (lookahead == 'h')
        ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(367);
      END_STATE();
    case 368:
      if (lookahead == 'u')
        ADVANCE(204);
      END_STATE();
    case 369:
      if (lookahead == '<')
        ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(369);
      END_STATE();
    case 370:
      if (lookahead == '#')
        ADVANCE(371);
      if (lookahead == '/')
        ADVANCE(374);
      if (lookahead == '@')
        ADVANCE(194);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_LT_POUND);
      if (lookahead == 'a')
        ADVANCE(38);
      if (lookahead == 'f')
        ADVANCE(84);
      if (lookahead == 'g')
        ADVANCE(107);
      if (lookahead == 'i')
        ADVANCE(247);
      if (lookahead == 'l')
        ADVANCE(130);
      if (lookahead == 'm')
        ADVANCE(137);
      if (lookahead == 'n')
        ADVANCE(248);
      if (lookahead == 'r')
        ADVANCE(372);
      if (lookahead == 's')
        ADVANCE(252);
      if (lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'v')
        ADVANCE(188);
      END_STATE();
    case 372:
      if (lookahead == 'e')
        ADVANCE(373);
      if (lookahead == 't')
        ADVANCE(166);
      END_STATE();
    case 373:
      if (lookahead == 'c')
        ADVANCE(251);
      if (lookahead == 't')
        ADVANCE(162);
      END_STATE();
    case 374:
      if (lookahead == '#')
        ADVANCE(375);
      END_STATE();
    case 375:
      if (lookahead == 'a')
        ADVANCE(256);
      if (lookahead == 'f')
        ADVANCE(322);
      if (lookahead == 'g')
        ADVANCE(263);
      if (lookahead == 'l')
        ADVANCE(270);
      END_STATE();
    case 376:
      if (lookahead == '<')
        ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(376);
      END_STATE();
    case 377:
      if (lookahead == '#')
        ADVANCE(378);
      if (lookahead == '/')
        ADVANCE(379);
      if (lookahead == '@')
        ADVANCE(194);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_LT_POUND);
      if (lookahead == 'a')
        ADVANCE(38);
      if (lookahead == 'f')
        ADVANCE(84);
      if (lookahead == 'g')
        ADVANCE(107);
      if (lookahead == 'i')
        ADVANCE(247);
      if (lookahead == 'l')
        ADVANCE(130);
      if (lookahead == 'm')
        ADVANCE(137);
      if (lookahead == 'n')
        ADVANCE(142);
      if (lookahead == 'r')
        ADVANCE(372);
      if (lookahead == 's')
        ADVANCE(252);
      if (lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'v')
        ADVANCE(188);
      END_STATE();
    case 379:
      if (lookahead == '#')
        ADVANCE(380);
      END_STATE();
    case 380:
      if (lookahead == 'a')
        ADVANCE(256);
      if (lookahead == 'g')
        ADVANCE(263);
      if (lookahead == 'l')
        ADVANCE(270);
      if (lookahead == 'm')
        ADVANCE(344);
      END_STATE();
    case 381:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(9);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(18);
      if (lookahead == '+')
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(20);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '.')
        ADVANCE(282);
      if (lookahead == '/')
        ADVANCE(283);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(284);
      if (lookahead == '=')
        ADVANCE(195);
      if (lookahead == '?')
        ADVANCE(359);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == ']')
        ADVANCE(201);
      if (lookahead == 'g')
        ADVANCE(287);
      if (lookahead == 'l')
        ADVANCE(290);
      if (lookahead == 't')
        ADVANCE(293);
      if (lookahead == 'u')
        ADVANCE(297);
      if (lookahead == '{')
        ADVANCE(239);
      if (lookahead == '|')
        ADVANCE(240);
      if (lookahead == '}')
        ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(381);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 382:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(9);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '*')
        ADVANCE(18);
      if (lookahead == '+')
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(20);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(283);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(284);
      if (lookahead == '=')
        ADVANCE(195);
      if (lookahead == '?')
        ADVANCE(359);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == 'g')
        ADVANCE(287);
      if (lookahead == 'l')
        ADVANCE(290);
      if (lookahead == 't')
        ADVANCE(293);
      if (lookahead == 'u')
        ADVANCE(297);
      if (lookahead == '{')
        ADVANCE(239);
      if (lookahead == '|')
        ADVANCE(240);
      if (lookahead == '}')
        ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(382);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 383:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(9);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '*')
        ADVANCE(18);
      if (lookahead == '+')
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(20);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(27);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(284);
      if (lookahead == '=')
        ADVANCE(195);
      if (lookahead == '>')
        ADVANCE(197);
      if (lookahead == '?')
        ADVANCE(198);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == 'a')
        ADVANCE(285);
      if (lookahead == 'g')
        ADVANCE(287);
      if (lookahead == 'l')
        ADVANCE(290);
      if (lookahead == 't')
        ADVANCE(293);
      if (lookahead == 'u')
        ADVANCE(297);
      if (lookahead == '{')
        ADVANCE(239);
      if (lookahead == '|')
        ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(383);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 384:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(9);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '*')
        ADVANCE(18);
      if (lookahead == '+')
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(20);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(283);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(284);
      if (lookahead == '=')
        ADVANCE(195);
      if (lookahead == '?')
        ADVANCE(359);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == ']')
        ADVANCE(201);
      if (lookahead == 'g')
        ADVANCE(287);
      if (lookahead == 'l')
        ADVANCE(290);
      if (lookahead == 't')
        ADVANCE(293);
      if (lookahead == 'u')
        ADVANCE(297);
      if (lookahead == '{')
        ADVANCE(239);
      if (lookahead == '|')
        ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(384);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 385:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(9);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '*')
        ADVANCE(18);
      if (lookahead == '+')
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(20);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '.')
        ADVANCE(282);
      if (lookahead == '/')
        ADVANCE(283);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(284);
      if (lookahead == '=')
        ADVANCE(195);
      if (lookahead == '?')
        ADVANCE(198);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == 'a')
        ADVANCE(285);
      if (lookahead == 'g')
        ADVANCE(287);
      if (lookahead == 'l')
        ADVANCE(290);
      if (lookahead == 't')
        ADVANCE(293);
      if (lookahead == 'u')
        ADVANCE(297);
      if (lookahead == '{')
        ADVANCE(239);
      if (lookahead == '|')
        ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(385);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 386:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(9);
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
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(20);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(283);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(284);
      if (lookahead == '=')
        ADVANCE(195);
      if (lookahead == '>')
        ADVANCE(197);
      if (lookahead == '?')
        ADVANCE(198);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == 'a')
        ADVANCE(285);
      if (lookahead == 'g')
        ADVANCE(287);
      if (lookahead == 'l')
        ADVANCE(290);
      if (lookahead == 't')
        ADVANCE(293);
      if (lookahead == 'u')
        ADVANCE(297);
      if (lookahead == '{')
        ADVANCE(239);
      if (lookahead == '|')
        ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(386);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
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
        ADVANCE(194);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_LT_POUND);
      if (lookahead == 'a')
        ADVANCE(38);
      if (lookahead == 'e')
        ADVANCE(77);
      if (lookahead == 'f')
        ADVANCE(84);
      if (lookahead == 'g')
        ADVANCE(107);
      if (lookahead == 'i')
        ADVANCE(247);
      if (lookahead == 'l')
        ADVANCE(130);
      if (lookahead == 'm')
        ADVANCE(137);
      if (lookahead == 'n')
        ADVANCE(248);
      if (lookahead == 'r')
        ADVANCE(249);
      if (lookahead == 's')
        ADVANCE(252);
      if (lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'v')
        ADVANCE(188);
      END_STATE();
    case 390:
      if (lookahead == '#')
        ADVANCE(391);
      END_STATE();
    case 391:
      if (lookahead == 'a')
        ADVANCE(256);
      if (lookahead == 'g')
        ADVANCE(263);
      if (lookahead == 'i')
        ADVANCE(392);
      if (lookahead == 'l')
        ADVANCE(270);
      END_STATE();
    case 392:
      if (lookahead == 'f')
        ADVANCE(332);
      END_STATE();
    case 393:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '.')
        ADVANCE(394);
      if (lookahead == '>')
        ADVANCE(197);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == 't')
        ADVANCE(293);
      if (lookahead == '{')
        ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(393);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
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
        ADVANCE(397);
      if (lookahead == '/')
        ADVANCE(399);
      if (lookahead == '@')
        ADVANCE(194);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_LT_POUND);
      if (lookahead == 'a')
        ADVANCE(38);
      if (lookahead == 'b')
        ADVANCE(51);
      if (lookahead == 'c')
        ADVANCE(398);
      if (lookahead == 'd')
        ADVANCE(69);
      if (lookahead == 'f')
        ADVANCE(84);
      if (lookahead == 'g')
        ADVANCE(107);
      if (lookahead == 'i')
        ADVANCE(247);
      if (lookahead == 'l')
        ADVANCE(130);
      if (lookahead == 'm')
        ADVANCE(137);
      if (lookahead == 'n')
        ADVANCE(248);
      if (lookahead == 'r')
        ADVANCE(249);
      if (lookahead == 's')
        ADVANCE(252);
      if (lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'v')
        ADVANCE(188);
      END_STATE();
    case 398:
      if (lookahead == 'a')
        ADVANCE(58);
      END_STATE();
    case 399:
      if (lookahead == '#')
        ADVANCE(400);
      END_STATE();
    case 400:
      if (lookahead == 'a')
        ADVANCE(256);
      if (lookahead == 'g')
        ADVANCE(263);
      if (lookahead == 'l')
        ADVANCE(270);
      if (lookahead == 's')
        ADVANCE(350);
      END_STATE();
    case 401:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(9);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '*')
        ADVANCE(18);
      if (lookahead == '+')
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(20);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(283);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(284);
      if (lookahead == '=')
        ADVANCE(195);
      if (lookahead == '?')
        ADVANCE(359);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == ']')
        ADVANCE(201);
      if (lookahead == 'g')
        ADVANCE(287);
      if (lookahead == 'l')
        ADVANCE(290);
      if (lookahead == 't')
        ADVANCE(293);
      if (lookahead == 'u')
        ADVANCE(297);
      if (lookahead == '{')
        ADVANCE(239);
      if (lookahead == '|')
        ADVANCE(240);
      if (lookahead == '}')
        ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(401);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
      END_STATE();
    case 402:
      if (lookahead == '<')
        ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(402);
      END_STATE();
    case 403:
      if (lookahead == '#')
        ADVANCE(404);
      if (lookahead == '/')
        ADVANCE(410);
      if (lookahead == '@')
        ADVANCE(194);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_LT_POUND);
      if (lookahead == 'a')
        ADVANCE(38);
      if (lookahead == 'b')
        ADVANCE(51);
      if (lookahead == 'c')
        ADVANCE(405);
      if (lookahead == 'e')
        ADVANCE(406);
      if (lookahead == 'f')
        ADVANCE(84);
      if (lookahead == 'g')
        ADVANCE(107);
      if (lookahead == 'i')
        ADVANCE(113);
      if (lookahead == 'l')
        ADVANCE(130);
      if (lookahead == 'm')
        ADVANCE(137);
      if (lookahead == 'n')
        ADVANCE(248);
      if (lookahead == 'r')
        ADVANCE(249);
      if (lookahead == 's')
        ADVANCE(168);
      if (lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'v')
        ADVANCE(188);
      END_STATE();
    case 405:
      if (lookahead == 'o')
        ADVANCE(61);
      END_STATE();
    case 406:
      if (lookahead == 'l')
        ADVANCE(407);
      END_STATE();
    case 407:
      if (lookahead == 's')
        ADVANCE(408);
      END_STATE();
    case 408:
      if (lookahead == 'e')
        ADVANCE(409);
      END_STATE();
    case 409:
      if (lookahead == '>')
        ADVANCE(81);
      END_STATE();
    case 410:
      if (lookahead == '#')
        ADVANCE(411);
      END_STATE();
    case 411:
      if (lookahead == 'a')
        ADVANCE(256);
      if (lookahead == 'g')
        ADVANCE(263);
      if (lookahead == 'l')
        ADVANCE(339);
      END_STATE();
    case 412:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(9);
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
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(20);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(283);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(284);
      if (lookahead == '=')
        ADVANCE(195);
      if (lookahead == '?')
        ADVANCE(198);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == 'a')
        ADVANCE(285);
      if (lookahead == 'g')
        ADVANCE(287);
      if (lookahead == 'l')
        ADVANCE(290);
      if (lookahead == 't')
        ADVANCE(293);
      if (lookahead == 'u')
        ADVANCE(297);
      if (lookahead == '{')
        ADVANCE(239);
      if (lookahead == '|')
        ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(412);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(278);
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
        ADVANCE(378);
      if (lookahead == '/')
        ADVANCE(415);
      if (lookahead == '@')
        ADVANCE(194);
      END_STATE();
    case 415:
      if (lookahead == '#')
        ADVANCE(416);
      END_STATE();
    case 416:
      if (lookahead == 'a')
        ADVANCE(256);
      if (lookahead == 'f')
        ADVANCE(322);
      if (lookahead == 'g')
        ADVANCE(263);
      if (lookahead == 'l')
        ADVANCE(270);
      if (lookahead == 'm')
        ADVANCE(344);
      END_STATE();
    case 417:
      if (lookahead == '<')
        ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(417);
      END_STATE();
    case 418:
      if (lookahead == '#')
        ADVANCE(404);
      if (lookahead == '/')
        ADVANCE(419);
      if (lookahead == '@')
        ADVANCE(194);
      END_STATE();
    case 419:
      if (lookahead == '#')
        ADVANCE(420);
      END_STATE();
    case 420:
      if (lookahead == 'a')
        ADVANCE(256);
      if (lookahead == 'g')
        ADVANCE(263);
      if (lookahead == 'i')
        ADVANCE(421);
      if (lookahead == 'l')
        ADVANCE(339);
      if (lookahead == 's')
        ADVANCE(422);
      END_STATE();
    case 421:
      if (lookahead == 't')
        ADVANCE(334);
      END_STATE();
    case 422:
      if (lookahead == 'e')
        ADVANCE(423);
      END_STATE();
    case 423:
      if (lookahead == 'p')
        ADVANCE(424);
      END_STATE();
    case 424:
      if (lookahead == '>')
        ADVANCE(425);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDsep_GT);
      END_STATE();
    case 426:
      if (lookahead == '<')
        ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(426);
      END_STATE();
    case 427:
      if (lookahead == '#')
        ADVANCE(428);
      if (lookahead == '/')
        ADVANCE(429);
      if (lookahead == '@')
        ADVANCE(194);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_LT_POUND);
      if (lookahead == 'a')
        ADVANCE(38);
      if (lookahead == 'b')
        ADVANCE(51);
      if (lookahead == 'c')
        ADVANCE(405);
      if (lookahead == 'f')
        ADVANCE(84);
      if (lookahead == 'g')
        ADVANCE(107);
      if (lookahead == 'i')
        ADVANCE(247);
      if (lookahead == 'l')
        ADVANCE(130);
      if (lookahead == 'm')
        ADVANCE(137);
      if (lookahead == 'n')
        ADVANCE(248);
      if (lookahead == 'r')
        ADVANCE(249);
      if (lookahead == 's')
        ADVANCE(168);
      if (lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'v')
        ADVANCE(188);
      END_STATE();
    case 429:
      if (lookahead == '#')
        ADVANCE(430);
      END_STATE();
    case 430:
      if (lookahead == 'a')
        ADVANCE(256);
      if (lookahead == 'g')
        ADVANCE(263);
      if (lookahead == 'i')
        ADVANCE(421);
      if (lookahead == 'l')
        ADVANCE(270);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 244},
  [2] = {.lex_state = 276},
  [3] = {.lex_state = 279},
  [4] = {.lex_state = 276},
  [5] = {.lex_state = 281},
  [6] = {.lex_state = 281},
  [7] = {.lex_state = 281},
  [8] = {.lex_state = 281},
  [9] = {.lex_state = 303},
  [10] = {.lex_state = 318},
  [11] = {.lex_state = 281},
  [12] = {.lex_state = 281},
  [13] = {.lex_state = 281},
  [14] = {.lex_state = 281},
  [15] = {.lex_state = 281},
  [16] = {.lex_state = 281},
  [17] = {.lex_state = 281},
  [18] = {.lex_state = 318},
  [19] = {.lex_state = 281},
  [20] = {.lex_state = 318},
  [21] = {.lex_state = 281},
  [22] = {.lex_state = 318},
  [23] = {.lex_state = 357},
  [24] = {.lex_state = 244},
  [25] = {.lex_state = 358},
  [26] = {.lex_state = 281},
  [27] = {.lex_state = 360},
  [28] = {.lex_state = 358},
  [29] = {.lex_state = 361},
  [30] = {.lex_state = 276},
  [31] = {.lex_state = 363},
  [32] = {.lex_state = 363},
  [33] = {.lex_state = 363},
  [34] = {.lex_state = 364},
  [35] = {.lex_state = 365},
  [36] = {.lex_state = 366},
  [37] = {.lex_state = 367},
  [38] = {.lex_state = 363},
  [39] = {.lex_state = 281},
  [40] = {.lex_state = 281},
  [41] = {.lex_state = 281},
  [42] = {.lex_state = 361},
  [43] = {.lex_state = 276},
  [44] = {.lex_state = 361},
  [45] = {.lex_state = 366},
  [46] = {.lex_state = 276},
  [47] = {.lex_state = 361},
  [48] = {.lex_state = 281},
  [49] = {.lex_state = 369},
  [50] = {.lex_state = 281},
  [51] = {.lex_state = 376},
  [52] = {.lex_state = 281},
  [53] = {.lex_state = 318},
  [54] = {.lex_state = 303},
  [55] = {.lex_state = 303},
  [56] = {.lex_state = 318},
  [57] = {.lex_state = 281},
  [58] = {.lex_state = 318},
  [59] = {.lex_state = 281},
  [60] = {.lex_state = 318},
  [61] = {.lex_state = 281},
  [62] = {.lex_state = 318},
  [63] = {.lex_state = 281},
  [64] = {.lex_state = 318},
  [65] = {.lex_state = 281},
  [66] = {.lex_state = 318},
  [67] = {.lex_state = 281},
  [68] = {.lex_state = 318},
  [69] = {.lex_state = 281},
  [70] = {.lex_state = 318},
  [71] = {.lex_state = 281},
  [72] = {.lex_state = 318},
  [73] = {.lex_state = 281},
  [74] = {.lex_state = 244},
  [75] = {.lex_state = 358},
  [76] = {.lex_state = 244},
  [77] = {.lex_state = 381},
  [78] = {.lex_state = 381},
  [79] = {.lex_state = 381},
  [80] = {.lex_state = 364},
  [81] = {.lex_state = 365},
  [82] = {.lex_state = 382},
  [83] = {.lex_state = 367},
  [84] = {.lex_state = 358},
  [85] = {.lex_state = 358},
  [86] = {.lex_state = 358},
  [87] = {.lex_state = 276},
  [88] = {.lex_state = 358},
  [89] = {.lex_state = 361},
  [90] = {.lex_state = 276},
  [91] = {.lex_state = 318},
  [92] = {.lex_state = 360},
  [93] = {.lex_state = 360},
  [94] = {.lex_state = 360},
  [95] = {.lex_state = 364},
  [96] = {.lex_state = 365},
  [97] = {.lex_state = 383},
  [98] = {.lex_state = 367},
  [99] = {.lex_state = 360},
  [100] = {.lex_state = 360},
  [101] = {.lex_state = 360},
  [102] = {.lex_state = 360},
  [103] = {.lex_state = 363},
  [104] = {.lex_state = 358},
  [105] = {.lex_state = 281},
  [106] = {.lex_state = 366},
  [107] = {.lex_state = 363},
  [108] = {.lex_state = 363},
  [109] = {.lex_state = 363},
  [110] = {.lex_state = 384},
  [111] = {.lex_state = 365},
  [112] = {.lex_state = 365},
  [113] = {.lex_state = 365},
  [114] = {.lex_state = 365},
  [115] = {.lex_state = 385},
  [116] = {.lex_state = 386},
  [117] = {.lex_state = 363},
  [118] = {.lex_state = 366},
  [119] = {.lex_state = 363},
  [120] = {.lex_state = 281},
  [121] = {.lex_state = 361},
  [122] = {.lex_state = 281},
  [123] = {.lex_state = 281},
  [124] = {.lex_state = 387},
  [125] = {.lex_state = 281},
  [126] = {.lex_state = 358},
  [127] = {.lex_state = 361},
  [128] = {.lex_state = 361},
  [129] = {.lex_state = 364},
  [130] = {.lex_state = 365},
  [131] = {.lex_state = 393},
  [132] = {.lex_state = 367},
  [133] = {.lex_state = 361},
  [134] = {.lex_state = 276},
  [135] = {.lex_state = 366},
  [136] = {.lex_state = 395},
  [137] = {.lex_state = 361},
  [138] = {.lex_state = 361},
  [139] = {.lex_state = 361},
  [140] = {.lex_state = 281},
  [141] = {.lex_state = 318},
  [142] = {.lex_state = 281},
  [143] = {.lex_state = 369},
  [144] = {.lex_state = 369},
  [145] = {.lex_state = 369},
  [146] = {.lex_state = 318},
  [147] = {.lex_state = 281},
  [148] = {.lex_state = 376},
  [149] = {.lex_state = 376},
  [150] = {.lex_state = 376},
  [151] = {.lex_state = 318},
  [152] = {.lex_state = 303},
  [153] = {.lex_state = 318},
  [154] = {.lex_state = 318},
  [155] = {.lex_state = 318},
  [156] = {.lex_state = 318},
  [157] = {.lex_state = 318},
  [158] = {.lex_state = 318},
  [159] = {.lex_state = 318},
  [160] = {.lex_state = 318},
  [161] = {.lex_state = 318},
  [162] = {.lex_state = 381},
  [163] = {.lex_state = 358},
  [164] = {.lex_state = 381},
  [165] = {.lex_state = 381},
  [166] = {.lex_state = 365},
  [167] = {.lex_state = 385},
  [168] = {.lex_state = 401},
  [169] = {.lex_state = 381},
  [170] = {.lex_state = 382},
  [171] = {.lex_state = 381},
  [172] = {.lex_state = 358},
  [173] = {.lex_state = 244},
  [174] = {.lex_state = 358},
  [175] = {.lex_state = 358},
  [176] = {.lex_state = 358},
  [177] = {.lex_state = 402},
  [178] = {.lex_state = 360},
  [179] = {.lex_state = 358},
  [180] = {.lex_state = 360},
  [181] = {.lex_state = 383},
  [182] = {.lex_state = 360},
  [183] = {.lex_state = 360},
  [184] = {.lex_state = 360},
  [185] = {.lex_state = 365},
  [186] = {.lex_state = 385},
  [187] = {.lex_state = 383},
  [188] = {.lex_state = 360},
  [189] = {.lex_state = 383},
  [190] = {.lex_state = 360},
  [191] = {.lex_state = 360},
  [192] = {.lex_state = 361},
  [193] = {.lex_state = 360},
  [194] = {.lex_state = 360},
  [195] = {.lex_state = 318},
  [196] = {.lex_state = 360},
  [197] = {.lex_state = 363},
  [198] = {.lex_state = 281},
  [199] = {.lex_state = 366},
  [200] = {.lex_state = 363},
  [201] = {.lex_state = 384},
  [202] = {.lex_state = 365},
  [203] = {.lex_state = 365},
  [204] = {.lex_state = 365},
  [205] = {.lex_state = 365},
  [206] = {.lex_state = 363},
  [207] = {.lex_state = 365},
  [208] = {.lex_state = 361},
  [209] = {.lex_state = 276},
  [210] = {.lex_state = 363},
  [211] = {.lex_state = 412},
  [212] = {.lex_state = 385},
  [213] = {.lex_state = 385},
  [214] = {.lex_state = 385},
  [215] = {.lex_state = 363},
  [216] = {.lex_state = 366},
  [217] = {.lex_state = 281},
  [218] = {.lex_state = 281},
  [219] = {.lex_state = 387},
  [220] = {.lex_state = 318},
  [221] = {.lex_state = 281},
  [222] = {.lex_state = 387},
  [223] = {.lex_state = 387},
  [224] = {.lex_state = 387},
  [225] = {.lex_state = 361},
  [226] = {.lex_state = 358},
  [227] = {.lex_state = 361},
  [228] = {.lex_state = 361},
  [229] = {.lex_state = 365},
  [230] = {.lex_state = 385},
  [231] = {.lex_state = 393},
  [232] = {.lex_state = 361},
  [233] = {.lex_state = 393},
  [234] = {.lex_state = 361},
  [235] = {.lex_state = 361},
  [236] = {.lex_state = 276},
  [237] = {.lex_state = 366},
  [238] = {.lex_state = 318},
  [239] = {.lex_state = 281},
  [240] = {.lex_state = 395},
  [241] = {.lex_state = 395},
  [242] = {.lex_state = 395},
  [243] = {.lex_state = 395},
  [244] = {.lex_state = 361},
  [245] = {.lex_state = 361},
  [246] = {.lex_state = 413},
  [247] = {.lex_state = 276},
  [248] = {.lex_state = 318},
  [249] = {.lex_state = 369},
  [250] = {.lex_state = 369},
  [251] = {.lex_state = 376},
  [252] = {.lex_state = 281},
  [253] = {.lex_state = 318},
  [254] = {.lex_state = 376},
  [255] = {.lex_state = 376},
  [256] = {.lex_state = 381},
  [257] = {.lex_state = 381},
  [258] = {.lex_state = 381},
  [259] = {.lex_state = 385},
  [260] = {.lex_state = 381},
  [261] = {.lex_state = 382},
  [262] = {.lex_state = 358},
  [263] = {.lex_state = 358},
  [264] = {.lex_state = 318},
  [265] = {.lex_state = 402},
  [266] = {.lex_state = 402},
  [267] = {.lex_state = 281},
  [268] = {.lex_state = 417},
  [269] = {.lex_state = 402},
  [270] = {.lex_state = 417},
  [271] = {.lex_state = 402},
  [272] = {.lex_state = 360},
  [273] = {.lex_state = 360},
  [274] = {.lex_state = 383},
  [275] = {.lex_state = 360},
  [276] = {.lex_state = 360},
  [277] = {.lex_state = 360},
  [278] = {.lex_state = 385},
  [279] = {.lex_state = 360},
  [280] = {.lex_state = 383},
  [281] = {.lex_state = 360},
  [282] = {.lex_state = 360},
  [283] = {.lex_state = 384},
  [284] = {.lex_state = 365},
  [285] = {.lex_state = 365},
  [286] = {.lex_state = 385},
  [287] = {.lex_state = 412},
  [288] = {.lex_state = 412},
  [289] = {.lex_state = 385},
  [290] = {.lex_state = 361},
  [291] = {.lex_state = 385},
  [292] = {.lex_state = 385},
  [293] = {.lex_state = 363},
  [294] = {.lex_state = 385},
  [295] = {.lex_state = 387},
  [296] = {.lex_state = 387},
  [297] = {.lex_state = 281},
  [298] = {.lex_state = 318},
  [299] = {.lex_state = 387},
  [300] = {.lex_state = 387},
  [301] = {.lex_state = 361},
  [302] = {.lex_state = 361},
  [303] = {.lex_state = 361},
  [304] = {.lex_state = 385},
  [305] = {.lex_state = 361},
  [306] = {.lex_state = 393},
  [307] = {.lex_state = 276},
  [308] = {.lex_state = 276},
  [309] = {.lex_state = 395},
  [310] = {.lex_state = 318},
  [311] = {.lex_state = 395},
  [312] = {.lex_state = 395},
  [313] = {.lex_state = 413},
  [314] = {.lex_state = 318},
  [315] = {.lex_state = 376},
  [316] = {.lex_state = 318},
  [317] = {.lex_state = 381},
  [318] = {.lex_state = 402},
  [319] = {.lex_state = 276},
  [320] = {.lex_state = 417},
  [321] = {.lex_state = 318},
  [322] = {.lex_state = 402},
  [323] = {.lex_state = 402},
  [324] = {.lex_state = 360},
  [325] = {.lex_state = 385},
  [326] = {.lex_state = 412},
  [327] = {.lex_state = 412},
  [328] = {.lex_state = 385},
  [329] = {.lex_state = 385},
  [330] = {.lex_state = 387},
  [331] = {.lex_state = 387},
  [332] = {.lex_state = 318},
  [333] = {.lex_state = 361},
  [334] = {.lex_state = 395},
  [335] = {.lex_state = 395},
  [336] = {.lex_state = 318},
  [337] = {.lex_state = 402},
  [338] = {.lex_state = 426},
  [339] = {.lex_state = 318},
  [340] = {.lex_state = 395},
  [341] = {.lex_state = 395},
  [342] = {.lex_state = 426},
  [343] = {.lex_state = 402},
  [344] = {.lex_state = 426},
  [345] = {.lex_state = 395},
  [346] = {.lex_state = 395},
  [347] = {.lex_state = 395},
  [348] = {.lex_state = 402},
  [349] = {.lex_state = 426},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LT_POUND] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(3),
    [anon_sym_DOT_DOT_LT] = ACTIONS(1),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
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
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(3),
    [anon_sym_hello] = ACTIONS(1),
    [anon_sym_auto_esc] = ACTIONS(1),
    [anon_sym_LT_AT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
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
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LT_POUND] = ACTIONS(11),
    [anon_sym_LT_AT] = ACTIONS(13),
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
    [anon_sym_LBRACE] = ACTIONS(51),
  },
  [3] = {
    [anon_sym_list] = ACTIONS(53),
  },
  [4] = {
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(55),
  },
  [5] = {
    [sym_parameter_group] = STATE(41),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(40),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(39),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(40),
    [aux_sym_group_repeat1] = STATE(41),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [6] = {
    [sym_parameter_group] = STATE(46),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(48),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(47),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(48),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(81),
    [anon_sym_using] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_DOT_DOT] = ACTIONS(83),
    [anon_sym_DOT_DOT_LT] = ACTIONS(85),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(85),
    [anon_sym_EQ_EQ] = ACTIONS(85),
    [anon_sym_BANG_EQ] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(83),
    [anon_sym_LT_EQ] = ACTIONS(85),
    [anon_sym_lt] = ACTIONS(83),
    [anon_sym_lte] = ACTIONS(83),
    [anon_sym_gt] = ACTIONS(83),
    [anon_sym_gte] = ACTIONS(83),
    [anon_sym_BANG] = ACTIONS(83),
    [anon_sym_AMP_AMP] = ACTIONS(85),
    [anon_sym_PIPE_PIPE] = ACTIONS(85),
    [anon_sym_QMARK_QMARK] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(87),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [7] = {
    [sym_parameter_group] = STATE(50),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(40),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(39),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(40),
    [aux_sym_group_repeat1] = STATE(50),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [8] = {
    [sym_parameter_group] = STATE(52),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(40),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(39),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(40),
    [aux_sym_group_repeat1] = STATE(52),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [9] = {
    [sym_directive] = STATE(54),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_attempt_middle] = STATE(55),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_attempt_repeat1] = STATE(55),
    [anon_sym_LT_POUND] = ACTIONS(11),
    [anon_sym_LT_AT] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(23),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(93),
    [sym_recover] = ACTIONS(95),
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
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym_comment] = ACTIONS(97),
    [anon_sym_DOLLAR] = ACTIONS(97),
    [anon_sym_LT_POUND] = ACTIONS(99),
    [anon_sym_LT_AT] = ACTIONS(97),
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
  [11] = {
    [sym_parameter_group] = STATE(57),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(40),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(39),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(40),
    [aux_sym_group_repeat1] = STATE(57),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [12] = {
    [sym_parameter_group] = STATE(59),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(40),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(39),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(40),
    [aux_sym_group_repeat1] = STATE(59),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(103),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [13] = {
    [sym_parameter_group] = STATE(61),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(40),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(39),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(40),
    [aux_sym_group_repeat1] = STATE(61),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(105),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [14] = {
    [sym_parameter_group] = STATE(63),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(40),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(39),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(40),
    [aux_sym_group_repeat1] = STATE(63),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [15] = {
    [sym_parameter_group] = STATE(65),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(40),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(39),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(40),
    [aux_sym_group_repeat1] = STATE(65),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [16] = {
    [sym_parameter_group] = STATE(67),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(40),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(39),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(40),
    [aux_sym_group_repeat1] = STATE(67),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [17] = {
    [sym_parameter_group] = STATE(69),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(40),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(39),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(40),
    [aux_sym_group_repeat1] = STATE(69),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_comment] = ACTIONS(115),
    [anon_sym_DOLLAR] = ACTIONS(115),
    [anon_sym_LT_POUND] = ACTIONS(117),
    [anon_sym_LT_AT] = ACTIONS(115),
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
    [sym_parameter_group] = STATE(71),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(40),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(39),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(40),
    [aux_sym_group_repeat1] = STATE(71),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(119),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [sym_comment] = ACTIONS(121),
    [anon_sym_DOLLAR] = ACTIONS(121),
    [anon_sym_LT_POUND] = ACTIONS(123),
    [anon_sym_LT_AT] = ACTIONS(121),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(121),
    [sym_break] = ACTIONS(121),
    [sym_continue] = ACTIONS(121),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(121),
    [anon_sym_LT_POUNDitems] = ACTIONS(121),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(121),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(121),
    [anon_sym_LT_POUNDif] = ACTIONS(121),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(121),
    [anon_sym_LT_POUNDelseif] = ACTIONS(121),
    [anon_sym_LT_POUNDswitch] = ACTIONS(121),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(121),
    [anon_sym_LT_POUNDcase] = ACTIONS(121),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(121),
    [anon_sym_LT_POUNDfunction] = ACTIONS(121),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(121),
    [anon_sym_LT_POUNDreturn] = ACTIONS(121),
    [anon_sym_LT_POUNDmacro] = ACTIONS(121),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(121),
    [anon_sym_LT_POUNDnested] = ACTIONS(121),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(121),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(121),
    [sym_recover] = ACTIONS(121),
    [sym_fallback] = ACTIONS(121),
    [sym_flush] = ACTIONS(121),
    [anon_sym_LT_POUNDftl] = ACTIONS(121),
    [anon_sym_LT_POUNDimport] = ACTIONS(121),
    [anon_sym_LT_POUNDinclude] = ACTIONS(121),
    [sym_lt] = ACTIONS(121),
    [sym_nt] = ACTIONS(121),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(121),
    [sym_rt] = ACTIONS(121),
    [anon_sym_LT_POUNDsetting] = ACTIONS(121),
    [sym_stop] = ACTIONS(121),
    [sym_t] = ACTIONS(121),
    [anon_sym_LT_POUNDvisit] = ACTIONS(121),
    [anon_sym_LT_POUNDassign] = ACTIONS(121),
    [sym_end_assign] = ACTIONS(121),
    [anon_sym_LT_POUNDglobal] = ACTIONS(121),
    [sym_end_global] = ACTIONS(121),
    [anon_sym_LT_POUNDlocal] = ACTIONS(121),
    [sym_end_local] = ACTIONS(121),
  },
  [21] = {
    [sym_parameter_group] = STATE(73),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(40),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(39),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(40),
    [aux_sym_group_repeat1] = STATE(73),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_comment] = ACTIONS(127),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_LT_POUND] = ACTIONS(129),
    [anon_sym_LT_AT] = ACTIONS(127),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(127),
    [sym_break] = ACTIONS(127),
    [sym_continue] = ACTIONS(127),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(127),
    [anon_sym_LT_POUNDitems] = ACTIONS(127),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(127),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(127),
    [anon_sym_LT_POUNDif] = ACTIONS(127),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(127),
    [anon_sym_LT_POUNDelseif] = ACTIONS(127),
    [anon_sym_LT_POUNDswitch] = ACTIONS(127),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(127),
    [anon_sym_LT_POUNDcase] = ACTIONS(127),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(127),
    [anon_sym_LT_POUNDfunction] = ACTIONS(127),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(127),
    [anon_sym_LT_POUNDreturn] = ACTIONS(127),
    [anon_sym_LT_POUNDmacro] = ACTIONS(127),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(127),
    [anon_sym_LT_POUNDnested] = ACTIONS(127),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(127),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(127),
    [sym_recover] = ACTIONS(127),
    [sym_fallback] = ACTIONS(127),
    [sym_flush] = ACTIONS(127),
    [anon_sym_LT_POUNDftl] = ACTIONS(127),
    [anon_sym_LT_POUNDimport] = ACTIONS(127),
    [anon_sym_LT_POUNDinclude] = ACTIONS(127),
    [sym_lt] = ACTIONS(127),
    [sym_nt] = ACTIONS(127),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(127),
    [sym_rt] = ACTIONS(127),
    [anon_sym_LT_POUNDsetting] = ACTIONS(127),
    [sym_stop] = ACTIONS(127),
    [sym_t] = ACTIONS(127),
    [anon_sym_LT_POUNDvisit] = ACTIONS(127),
    [anon_sym_LT_POUNDassign] = ACTIONS(127),
    [sym_end_assign] = ACTIONS(127),
    [anon_sym_LT_POUNDglobal] = ACTIONS(127),
    [sym_end_global] = ACTIONS(127),
    [anon_sym_LT_POUNDlocal] = ACTIONS(127),
    [sym_end_local] = ACTIONS(127),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(131),
  },
  [24] = {
    [sym__definition] = STATE(74),
    [sym_interpolation] = STATE(74),
    [sym_directive] = STATE(74),
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
    [aux_sym_source_file_repeat1] = STATE(74),
    [ts_builtin_sym_end] = ACTIONS(133),
    [sym_comment] = ACTIONS(135),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LT_POUND] = ACTIONS(11),
    [anon_sym_LT_AT] = ACTIONS(13),
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
    [sym_expression] = STATE(85),
    [sym_type] = STATE(86),
    [sym_operator] = STATE(84),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_interpolation_repeat1] = STATE(85),
    [aux_sym_as_expression_repeat1] = STATE(86),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_using] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT_DOT_LT] = ACTIONS(143),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_lt] = ACTIONS(141),
    [anon_sym_lte] = ACTIONS(141),
    [anon_sym_gt] = ACTIONS(141),
    [anon_sym_gte] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_QMARK_QMARK] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(145),
    [sym_number] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(151),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(153),
    [anon_sym_DOT] = ACTIONS(155),
  },
  [26] = {
    [sym_parameter_group] = STATE(87),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(48),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(47),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(48),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(81),
    [anon_sym_using] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_DOT_DOT] = ACTIONS(83),
    [anon_sym_DOT_DOT_LT] = ACTIONS(85),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(85),
    [anon_sym_EQ_EQ] = ACTIONS(85),
    [anon_sym_BANG_EQ] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(83),
    [anon_sym_LT_EQ] = ACTIONS(85),
    [anon_sym_lt] = ACTIONS(83),
    [anon_sym_lte] = ACTIONS(83),
    [anon_sym_gt] = ACTIONS(83),
    [anon_sym_gte] = ACTIONS(83),
    [anon_sym_BANG] = ACTIONS(83),
    [anon_sym_AMP_AMP] = ACTIONS(85),
    [anon_sym_PIPE_PIPE] = ACTIONS(85),
    [anon_sym_QMARK_QMARK] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(87),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [27] = {
    [sym_parameter_group] = STATE(102),
    [sym_as_expression] = STATE(99),
    [sym_expression] = STATE(99),
    [sym_type] = STATE(101),
    [sym_built_in] = STATE(99),
    [sym_operator] = STATE(100),
    [sym_string] = STATE(94),
    [sym_boolean] = STATE(94),
    [sym_sequence] = STATE(94),
    [sym_hash] = STATE(94),
    [sym_top_level] = STATE(94),
    [sym_spec_var] = STATE(94),
    [aux_sym_as_expression_repeat1] = STATE(101),
    [aux_sym_group_repeat1] = STATE(102),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_as] = ACTIONS(159),
    [anon_sym_QMARK] = ACTIONS(161),
    [anon_sym_GT] = ACTIONS(163),
    [anon_sym_using] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_DOT_DOT] = ACTIONS(165),
    [anon_sym_DOT_DOT_LT] = ACTIONS(167),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_STAR] = ACTIONS(167),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_PERCENT] = ACTIONS(167),
    [anon_sym_EQ_EQ] = ACTIONS(167),
    [anon_sym_BANG_EQ] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_LT_EQ] = ACTIONS(167),
    [anon_sym_lt] = ACTIONS(165),
    [anon_sym_lte] = ACTIONS(165),
    [anon_sym_gt] = ACTIONS(165),
    [anon_sym_gte] = ACTIONS(165),
    [anon_sym_BANG] = ACTIONS(165),
    [anon_sym_AMP_AMP] = ACTIONS(167),
    [anon_sym_PIPE_PIPE] = ACTIONS(167),
    [anon_sym_QMARK_QMARK] = ACTIONS(167),
    [anon_sym_EQ] = ACTIONS(165),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(169),
    [sym_number] = ACTIONS(171),
    [anon_sym_true] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(175),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(179),
    [anon_sym_SLASH_GT] = ACTIONS(163),
  },
  [28] = {
    [sym_expression] = STATE(104),
    [sym_type] = STATE(86),
    [sym_operator] = STATE(84),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_interpolation_repeat1] = STATE(104),
    [aux_sym_as_expression_repeat1] = STATE(86),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_using] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT_DOT_LT] = ACTIONS(143),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_lt] = ACTIONS(141),
    [anon_sym_lte] = ACTIONS(141),
    [anon_sym_gt] = ACTIONS(141),
    [anon_sym_gte] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_QMARK_QMARK] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(145),
    [sym_number] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(151),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(153),
    [anon_sym_DOT] = ACTIONS(155),
  },
  [29] = {
    [sym_type] = STATE(105),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat2] = STATE(105),
    [anon_sym_LBRACE] = ACTIONS(57),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(183),
  },
  [30] = {
    [sym_top_level] = STATE(107),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(185),
  },
  [31] = {
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_as] = ACTIONS(189),
    [anon_sym_QMARK] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(187),
    [anon_sym_GT] = ACTIONS(187),
    [anon_sym_using] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(187),
    [anon_sym_DOT_DOT] = ACTIONS(189),
    [anon_sym_DOT_DOT_LT] = ACTIONS(187),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(187),
    [anon_sym_COLON] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_PERCENT] = ACTIONS(187),
    [anon_sym_EQ_EQ] = ACTIONS(187),
    [anon_sym_BANG_EQ] = ACTIONS(187),
    [anon_sym_LT] = ACTIONS(189),
    [anon_sym_LT_EQ] = ACTIONS(187),
    [anon_sym_lt] = ACTIONS(189),
    [anon_sym_lte] = ACTIONS(189),
    [anon_sym_gt] = ACTIONS(189),
    [anon_sym_gte] = ACTIONS(189),
    [anon_sym_BANG] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(187),
    [anon_sym_PIPE_PIPE] = ACTIONS(187),
    [anon_sym_QMARK_QMARK] = ACTIONS(187),
    [anon_sym_EQ] = ACTIONS(189),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(187),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(187),
    [sym_number] = ACTIONS(189),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(187),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(189),
    [anon_sym_DOT] = ACTIONS(189),
  },
  [32] = {
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_as] = ACTIONS(193),
    [anon_sym_QMARK] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(191),
    [anon_sym_GT] = ACTIONS(191),
    [anon_sym_using] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_DOT_DOT] = ACTIONS(193),
    [anon_sym_DOT_DOT_LT] = ACTIONS(191),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(191),
    [anon_sym_PLUS] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_PERCENT] = ACTIONS(191),
    [anon_sym_EQ_EQ] = ACTIONS(191),
    [anon_sym_BANG_EQ] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(193),
    [anon_sym_LT_EQ] = ACTIONS(191),
    [anon_sym_lt] = ACTIONS(193),
    [anon_sym_lte] = ACTIONS(193),
    [anon_sym_gt] = ACTIONS(193),
    [anon_sym_gte] = ACTIONS(193),
    [anon_sym_BANG] = ACTIONS(193),
    [anon_sym_AMP_AMP] = ACTIONS(191),
    [anon_sym_PIPE_PIPE] = ACTIONS(191),
    [anon_sym_QMARK_QMARK] = ACTIONS(191),
    [anon_sym_EQ] = ACTIONS(193),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(191),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(191),
    [sym_number] = ACTIONS(193),
    [anon_sym_true] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(191),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(193),
    [anon_sym_DOT] = ACTIONS(193),
  },
  [33] = {
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_as] = ACTIONS(197),
    [anon_sym_QMARK] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_GT] = ACTIONS(195),
    [anon_sym_using] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(195),
    [anon_sym_DOT_DOT] = ACTIONS(197),
    [anon_sym_DOT_DOT_LT] = ACTIONS(195),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(195),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_STAR] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_PERCENT] = ACTIONS(195),
    [anon_sym_EQ_EQ] = ACTIONS(195),
    [anon_sym_BANG_EQ] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(197),
    [anon_sym_LT_EQ] = ACTIONS(195),
    [anon_sym_lt] = ACTIONS(197),
    [anon_sym_lte] = ACTIONS(197),
    [anon_sym_gt] = ACTIONS(197),
    [anon_sym_gte] = ACTIONS(197),
    [anon_sym_BANG] = ACTIONS(197),
    [anon_sym_AMP_AMP] = ACTIONS(195),
    [anon_sym_PIPE_PIPE] = ACTIONS(195),
    [anon_sym_QMARK_QMARK] = ACTIONS(195),
    [anon_sym_EQ] = ACTIONS(197),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(195),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(195),
    [sym_number] = ACTIONS(197),
    [anon_sym_true] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(195),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(197),
  },
  [34] = {
    [anon_sym_false] = ACTIONS(199),
  },
  [35] = {
    [sym_expression] = STATE(111),
    [sym_type] = STATE(113),
    [sym_operator] = STATE(112),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_as_expression_repeat1] = STATE(113),
    [aux_sym_sequence_repeat1] = STATE(114),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_using] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT_DOT_LT] = ACTIONS(143),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_lt] = ACTIONS(141),
    [anon_sym_lte] = ACTIONS(141),
    [anon_sym_gt] = ACTIONS(141),
    [anon_sym_gte] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_QMARK_QMARK] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(145),
    [sym_number] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(201),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(155),
  },
  [36] = {
    [sym_group] = STATE(117),
    [aux_sym_top_level_repeat1] = STATE(118),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_as] = ACTIONS(207),
    [anon_sym_QMARK] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(205),
    [anon_sym_using] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_DOT_DOT] = ACTIONS(207),
    [anon_sym_DOT_DOT_LT] = ACTIONS(205),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(205),
    [anon_sym_COLON] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_PLUS] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(205),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_PERCENT] = ACTIONS(205),
    [anon_sym_EQ_EQ] = ACTIONS(205),
    [anon_sym_BANG_EQ] = ACTIONS(205),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_LT_EQ] = ACTIONS(205),
    [anon_sym_lt] = ACTIONS(207),
    [anon_sym_lte] = ACTIONS(207),
    [anon_sym_gt] = ACTIONS(207),
    [anon_sym_gte] = ACTIONS(207),
    [anon_sym_BANG] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(205),
    [anon_sym_PIPE_PIPE] = ACTIONS(205),
    [anon_sym_QMARK_QMARK] = ACTIONS(205),
    [anon_sym_EQ] = ACTIONS(207),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(205),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(205),
    [sym_number] = ACTIONS(207),
    [anon_sym_true] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(205),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(207),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(207),
  },
  [37] = {
    [sym__spec_var_name] = STATE(119),
    [anon_sym_hello] = ACTIONS(213),
    [anon_sym_auto_esc] = ACTIONS(213),
  },
  [38] = {
    [anon_sym_LBRACE] = ACTIONS(215),
    [anon_sym_as] = ACTIONS(217),
    [anon_sym_QMARK] = ACTIONS(217),
    [anon_sym_RPAREN] = ACTIONS(215),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_using] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(215),
    [anon_sym_DOT_DOT] = ACTIONS(217),
    [anon_sym_DOT_DOT_LT] = ACTIONS(215),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(215),
    [anon_sym_COLON] = ACTIONS(215),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(215),
    [anon_sym_PERCENT] = ACTIONS(215),
    [anon_sym_EQ_EQ] = ACTIONS(215),
    [anon_sym_BANG_EQ] = ACTIONS(215),
    [anon_sym_LT] = ACTIONS(217),
    [anon_sym_LT_EQ] = ACTIONS(215),
    [anon_sym_lt] = ACTIONS(217),
    [anon_sym_lte] = ACTIONS(217),
    [anon_sym_gt] = ACTIONS(217),
    [anon_sym_gte] = ACTIONS(217),
    [anon_sym_BANG] = ACTIONS(217),
    [anon_sym_AMP_AMP] = ACTIONS(215),
    [anon_sym_PIPE_PIPE] = ACTIONS(215),
    [anon_sym_QMARK_QMARK] = ACTIONS(215),
    [anon_sym_EQ] = ACTIONS(217),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(215),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(215),
    [sym_number] = ACTIONS(217),
    [anon_sym_true] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(215),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(217),
    [anon_sym_DOT] = ACTIONS(217),
  },
  [39] = {
    [sym_type] = STATE(120),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat2] = STATE(120),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_as] = ACTIONS(221),
    [anon_sym_QMARK] = ACTIONS(221),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_using] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(219),
    [anon_sym_DOT_DOT] = ACTIONS(221),
    [anon_sym_DOT_DOT_LT] = ACTIONS(219),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(219),
    [anon_sym_COLON] = ACTIONS(219),
    [anon_sym_STAR] = ACTIONS(219),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_SLASH] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(219),
    [anon_sym_PERCENT] = ACTIONS(219),
    [anon_sym_EQ_EQ] = ACTIONS(219),
    [anon_sym_BANG_EQ] = ACTIONS(219),
    [anon_sym_LT] = ACTIONS(221),
    [anon_sym_LT_EQ] = ACTIONS(219),
    [anon_sym_lt] = ACTIONS(221),
    [anon_sym_lte] = ACTIONS(221),
    [anon_sym_gt] = ACTIONS(221),
    [anon_sym_gte] = ACTIONS(221),
    [anon_sym_BANG] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(219),
    [anon_sym_PIPE_PIPE] = ACTIONS(219),
    [anon_sym_QMARK_QMARK] = ACTIONS(219),
    [anon_sym_EQ] = ACTIONS(221),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(219),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(219),
    [sym_number] = ACTIONS(221),
    [anon_sym_true] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(219),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(221),
  },
  [40] = {
    [sym_type] = STATE(123),
    [sym_operator] = STATE(122),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(123),
    [aux_sym_as_expression_repeat2] = STATE(120),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_as] = ACTIONS(223),
    [anon_sym_QMARK] = ACTIONS(221),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(219),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(219),
    [sym_number] = ACTIONS(221),
    [anon_sym_true] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(219),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(221),
  },
  [41] = {
    [sym_parameter_group] = STATE(125),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(40),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(39),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(40),
    [aux_sym_group_repeat1] = STATE(125),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(225),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [42] = {
    [sym_type] = STATE(133),
    [sym_string] = STATE(128),
    [sym_boolean] = STATE(128),
    [sym_sequence] = STATE(128),
    [sym_hash] = STATE(128),
    [sym_top_level] = STATE(128),
    [sym_spec_var] = STATE(128),
    [aux_sym_as_expression_repeat2] = STATE(133),
    [anon_sym_LBRACE] = ACTIONS(227),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(229),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(229),
    [sym_number] = ACTIONS(231),
    [anon_sym_true] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(235),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(237),
    [anon_sym_DOT] = ACTIONS(239),
  },
  [43] = {
    [sym_top_level] = STATE(107),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(241),
  },
  [44] = {
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_GT] = ACTIONS(187),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(187),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(187),
    [sym_number] = ACTIONS(189),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(187),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(189),
    [anon_sym_DOT] = ACTIONS(187),
  },
  [45] = {
    [sym_group] = STATE(117),
    [aux_sym_top_level_repeat1] = STATE(135),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_as] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(205),
    [anon_sym_using] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_DOT_DOT] = ACTIONS(207),
    [anon_sym_DOT_DOT_LT] = ACTIONS(205),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(205),
    [anon_sym_COLON] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_PLUS] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(205),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_PERCENT] = ACTIONS(205),
    [anon_sym_EQ_EQ] = ACTIONS(205),
    [anon_sym_BANG_EQ] = ACTIONS(205),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_LT_EQ] = ACTIONS(205),
    [anon_sym_lt] = ACTIONS(207),
    [anon_sym_lte] = ACTIONS(207),
    [anon_sym_gt] = ACTIONS(207),
    [anon_sym_gte] = ACTIONS(207),
    [anon_sym_BANG] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(205),
    [anon_sym_PIPE_PIPE] = ACTIONS(205),
    [anon_sym_QMARK_QMARK] = ACTIONS(205),
    [anon_sym_EQ] = ACTIONS(207),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(205),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(205),
    [sym_number] = ACTIONS(207),
    [anon_sym_true] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(205),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(207),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(207),
  },
  [46] = {
    [anon_sym_GT] = ACTIONS(243),
  },
  [47] = {
    [sym_type] = STATE(137),
    [sym_string] = STATE(128),
    [sym_boolean] = STATE(128),
    [sym_sequence] = STATE(128),
    [sym_hash] = STATE(128),
    [sym_top_level] = STATE(128),
    [sym_spec_var] = STATE(128),
    [aux_sym_as_expression_repeat2] = STATE(137),
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(219),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(229),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(229),
    [sym_number] = ACTIONS(231),
    [anon_sym_true] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(235),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(237),
    [anon_sym_DOT] = ACTIONS(239),
  },
  [48] = {
    [sym_type] = STATE(140),
    [sym_operator] = STATE(139),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(140),
    [aux_sym_as_expression_repeat2] = STATE(137),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_using] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_DOT_DOT] = ACTIONS(83),
    [anon_sym_DOT_DOT_LT] = ACTIONS(85),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(85),
    [anon_sym_EQ_EQ] = ACTIONS(85),
    [anon_sym_BANG_EQ] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(83),
    [anon_sym_LT_EQ] = ACTIONS(85),
    [anon_sym_lt] = ACTIONS(83),
    [anon_sym_lte] = ACTIONS(83),
    [anon_sym_gt] = ACTIONS(83),
    [anon_sym_gte] = ACTIONS(83),
    [anon_sym_BANG] = ACTIONS(83),
    [anon_sym_AMP_AMP] = ACTIONS(85),
    [anon_sym_PIPE_PIPE] = ACTIONS(85),
    [anon_sym_QMARK_QMARK] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(87),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [49] = {
    [sym_directive] = STATE(143),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_function_middle] = STATE(144),
    [sym_return] = STATE(143),
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
    [aux_sym_function_repeat1] = STATE(144),
    [anon_sym_LT_POUND] = ACTIONS(11),
    [anon_sym_LT_AT] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(247),
    [anon_sym_LT_POUNDreturn] = ACTIONS(249),
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
  [50] = {
    [sym_parameter_group] = STATE(125),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(40),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(39),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(40),
    [aux_sym_group_repeat1] = STATE(125),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [51] = {
    [sym_directive] = STATE(148),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_return] = STATE(148),
    [sym_macro] = STATE(10),
    [sym_macro_middle] = STATE(149),
    [sym_nested] = STATE(148),
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
    [aux_sym_macro_repeat1] = STATE(149),
    [anon_sym_LT_POUND] = ACTIONS(11),
    [anon_sym_LT_AT] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDreturn] = ACTIONS(249),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(253),
    [anon_sym_LT_POUNDnested] = ACTIONS(255),
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
  [52] = {
    [sym_parameter_group] = STATE(125),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(40),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(39),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(40),
    [aux_sym_group_repeat1] = STATE(125),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [sym_comment] = ACTIONS(259),
    [anon_sym_DOLLAR] = ACTIONS(259),
    [anon_sym_LT_POUND] = ACTIONS(261),
    [anon_sym_LT_AT] = ACTIONS(259),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(259),
    [sym_break] = ACTIONS(259),
    [sym_continue] = ACTIONS(259),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(259),
    [anon_sym_LT_POUNDitems] = ACTIONS(259),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(259),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(259),
    [anon_sym_LT_POUNDif] = ACTIONS(259),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(259),
    [anon_sym_LT_POUNDelseif] = ACTIONS(259),
    [anon_sym_LT_POUNDswitch] = ACTIONS(259),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(259),
    [anon_sym_LT_POUNDcase] = ACTIONS(259),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(259),
    [anon_sym_LT_POUNDfunction] = ACTIONS(259),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(259),
    [anon_sym_LT_POUNDreturn] = ACTIONS(259),
    [anon_sym_LT_POUNDmacro] = ACTIONS(259),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(259),
    [anon_sym_LT_POUNDnested] = ACTIONS(259),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(259),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(259),
    [sym_recover] = ACTIONS(259),
    [sym_fallback] = ACTIONS(259),
    [sym_flush] = ACTIONS(259),
    [anon_sym_LT_POUNDftl] = ACTIONS(259),
    [anon_sym_LT_POUNDimport] = ACTIONS(259),
    [anon_sym_LT_POUNDinclude] = ACTIONS(259),
    [sym_lt] = ACTIONS(259),
    [sym_nt] = ACTIONS(259),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(259),
    [sym_rt] = ACTIONS(259),
    [anon_sym_LT_POUNDsetting] = ACTIONS(259),
    [sym_stop] = ACTIONS(259),
    [sym_t] = ACTIONS(259),
    [anon_sym_LT_POUNDvisit] = ACTIONS(259),
    [anon_sym_LT_POUNDassign] = ACTIONS(259),
    [sym_end_assign] = ACTIONS(259),
    [anon_sym_LT_POUNDglobal] = ACTIONS(259),
    [sym_end_global] = ACTIONS(259),
    [anon_sym_LT_POUNDlocal] = ACTIONS(259),
    [sym_end_local] = ACTIONS(259),
  },
  [54] = {
    [anon_sym_LT_POUND] = ACTIONS(263),
    [anon_sym_LT_AT] = ACTIONS(265),
    [anon_sym_LT_POUNDif] = ACTIONS(265),
    [anon_sym_LT_POUNDswitch] = ACTIONS(265),
    [anon_sym_LT_POUNDfunction] = ACTIONS(265),
    [anon_sym_LT_POUNDmacro] = ACTIONS(265),
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
  [55] = {
    [sym_directive] = STATE(54),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_attempt_middle] = STATE(152),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_attempt_repeat1] = STATE(152),
    [anon_sym_LT_POUND] = ACTIONS(11),
    [anon_sym_LT_AT] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(23),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(267),
    [sym_recover] = ACTIONS(95),
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
    [ts_builtin_sym_end] = ACTIONS(269),
    [sym_comment] = ACTIONS(269),
    [anon_sym_DOLLAR] = ACTIONS(269),
    [anon_sym_LT_POUND] = ACTIONS(271),
    [anon_sym_LT_AT] = ACTIONS(269),
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
  [57] = {
    [sym_parameter_group] = STATE(125),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(40),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(39),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(40),
    [aux_sym_group_repeat1] = STATE(125),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(273),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(275),
    [sym_comment] = ACTIONS(275),
    [anon_sym_DOLLAR] = ACTIONS(275),
    [anon_sym_LT_POUND] = ACTIONS(277),
    [anon_sym_LT_AT] = ACTIONS(275),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(275),
    [sym_break] = ACTIONS(275),
    [sym_continue] = ACTIONS(275),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(275),
    [anon_sym_LT_POUNDitems] = ACTIONS(275),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(275),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(275),
    [anon_sym_LT_POUNDif] = ACTIONS(275),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(275),
    [anon_sym_LT_POUNDelseif] = ACTIONS(275),
    [anon_sym_LT_POUNDswitch] = ACTIONS(275),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(275),
    [anon_sym_LT_POUNDcase] = ACTIONS(275),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(275),
    [anon_sym_LT_POUNDfunction] = ACTIONS(275),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(275),
    [anon_sym_LT_POUNDreturn] = ACTIONS(275),
    [anon_sym_LT_POUNDmacro] = ACTIONS(275),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(275),
    [anon_sym_LT_POUNDnested] = ACTIONS(275),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(275),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(275),
    [sym_recover] = ACTIONS(275),
    [sym_fallback] = ACTIONS(275),
    [sym_flush] = ACTIONS(275),
    [anon_sym_LT_POUNDftl] = ACTIONS(275),
    [anon_sym_LT_POUNDimport] = ACTIONS(275),
    [anon_sym_LT_POUNDinclude] = ACTIONS(275),
    [sym_lt] = ACTIONS(275),
    [sym_nt] = ACTIONS(275),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(275),
    [sym_rt] = ACTIONS(275),
    [anon_sym_LT_POUNDsetting] = ACTIONS(275),
    [sym_stop] = ACTIONS(275),
    [sym_t] = ACTIONS(275),
    [anon_sym_LT_POUNDvisit] = ACTIONS(275),
    [anon_sym_LT_POUNDassign] = ACTIONS(275),
    [sym_end_assign] = ACTIONS(275),
    [anon_sym_LT_POUNDglobal] = ACTIONS(275),
    [sym_end_global] = ACTIONS(275),
    [anon_sym_LT_POUNDlocal] = ACTIONS(275),
    [sym_end_local] = ACTIONS(275),
  },
  [59] = {
    [sym_parameter_group] = STATE(125),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(40),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(39),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(40),
    [aux_sym_group_repeat1] = STATE(125),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(279),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(281),
    [sym_comment] = ACTIONS(281),
    [anon_sym_DOLLAR] = ACTIONS(281),
    [anon_sym_LT_POUND] = ACTIONS(283),
    [anon_sym_LT_AT] = ACTIONS(281),
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
  [61] = {
    [sym_parameter_group] = STATE(125),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(40),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(39),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(40),
    [aux_sym_group_repeat1] = STATE(125),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(285),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [sym_comment] = ACTIONS(287),
    [anon_sym_DOLLAR] = ACTIONS(287),
    [anon_sym_LT_POUND] = ACTIONS(289),
    [anon_sym_LT_AT] = ACTIONS(287),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(287),
    [sym_break] = ACTIONS(287),
    [sym_continue] = ACTIONS(287),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(287),
    [anon_sym_LT_POUNDitems] = ACTIONS(287),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(287),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(287),
    [anon_sym_LT_POUNDif] = ACTIONS(287),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(287),
    [anon_sym_LT_POUNDelseif] = ACTIONS(287),
    [anon_sym_LT_POUNDswitch] = ACTIONS(287),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(287),
    [anon_sym_LT_POUNDcase] = ACTIONS(287),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(287),
    [anon_sym_LT_POUNDfunction] = ACTIONS(287),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(287),
    [anon_sym_LT_POUNDreturn] = ACTIONS(287),
    [anon_sym_LT_POUNDmacro] = ACTIONS(287),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(287),
    [anon_sym_LT_POUNDnested] = ACTIONS(287),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(287),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(287),
    [sym_recover] = ACTIONS(287),
    [sym_fallback] = ACTIONS(287),
    [sym_flush] = ACTIONS(287),
    [anon_sym_LT_POUNDftl] = ACTIONS(287),
    [anon_sym_LT_POUNDimport] = ACTIONS(287),
    [anon_sym_LT_POUNDinclude] = ACTIONS(287),
    [sym_lt] = ACTIONS(287),
    [sym_nt] = ACTIONS(287),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(287),
    [sym_rt] = ACTIONS(287),
    [anon_sym_LT_POUNDsetting] = ACTIONS(287),
    [sym_stop] = ACTIONS(287),
    [sym_t] = ACTIONS(287),
    [anon_sym_LT_POUNDvisit] = ACTIONS(287),
    [anon_sym_LT_POUNDassign] = ACTIONS(287),
    [sym_end_assign] = ACTIONS(287),
    [anon_sym_LT_POUNDglobal] = ACTIONS(287),
    [sym_end_global] = ACTIONS(287),
    [anon_sym_LT_POUNDlocal] = ACTIONS(287),
    [sym_end_local] = ACTIONS(287),
  },
  [63] = {
    [sym_parameter_group] = STATE(125),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(40),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(39),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(40),
    [aux_sym_group_repeat1] = STATE(125),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(291),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(293),
    [sym_comment] = ACTIONS(293),
    [anon_sym_DOLLAR] = ACTIONS(293),
    [anon_sym_LT_POUND] = ACTIONS(295),
    [anon_sym_LT_AT] = ACTIONS(293),
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
  [65] = {
    [sym_parameter_group] = STATE(125),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(40),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(39),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(40),
    [aux_sym_group_repeat1] = STATE(125),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(297),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(299),
    [sym_comment] = ACTIONS(299),
    [anon_sym_DOLLAR] = ACTIONS(299),
    [anon_sym_LT_POUND] = ACTIONS(301),
    [anon_sym_LT_AT] = ACTIONS(299),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(299),
    [sym_break] = ACTIONS(299),
    [sym_continue] = ACTIONS(299),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(299),
    [anon_sym_LT_POUNDitems] = ACTIONS(299),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(299),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(299),
    [anon_sym_LT_POUNDif] = ACTIONS(299),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(299),
    [anon_sym_LT_POUNDelseif] = ACTIONS(299),
    [anon_sym_LT_POUNDswitch] = ACTIONS(299),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(299),
    [anon_sym_LT_POUNDcase] = ACTIONS(299),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(299),
    [anon_sym_LT_POUNDfunction] = ACTIONS(299),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(299),
    [anon_sym_LT_POUNDreturn] = ACTIONS(299),
    [anon_sym_LT_POUNDmacro] = ACTIONS(299),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(299),
    [anon_sym_LT_POUNDnested] = ACTIONS(299),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(299),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(299),
    [sym_recover] = ACTIONS(299),
    [sym_fallback] = ACTIONS(299),
    [sym_flush] = ACTIONS(299),
    [anon_sym_LT_POUNDftl] = ACTIONS(299),
    [anon_sym_LT_POUNDimport] = ACTIONS(299),
    [anon_sym_LT_POUNDinclude] = ACTIONS(299),
    [sym_lt] = ACTIONS(299),
    [sym_nt] = ACTIONS(299),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(299),
    [sym_rt] = ACTIONS(299),
    [anon_sym_LT_POUNDsetting] = ACTIONS(299),
    [sym_stop] = ACTIONS(299),
    [sym_t] = ACTIONS(299),
    [anon_sym_LT_POUNDvisit] = ACTIONS(299),
    [anon_sym_LT_POUNDassign] = ACTIONS(299),
    [sym_end_assign] = ACTIONS(299),
    [anon_sym_LT_POUNDglobal] = ACTIONS(299),
    [sym_end_global] = ACTIONS(299),
    [anon_sym_LT_POUNDlocal] = ACTIONS(299),
    [sym_end_local] = ACTIONS(299),
  },
  [67] = {
    [sym_parameter_group] = STATE(125),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(40),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(39),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(40),
    [aux_sym_group_repeat1] = STATE(125),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(303),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(305),
    [sym_comment] = ACTIONS(305),
    [anon_sym_DOLLAR] = ACTIONS(305),
    [anon_sym_LT_POUND] = ACTIONS(307),
    [anon_sym_LT_AT] = ACTIONS(305),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(305),
    [sym_break] = ACTIONS(305),
    [sym_continue] = ACTIONS(305),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(305),
    [anon_sym_LT_POUNDitems] = ACTIONS(305),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(305),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(305),
    [anon_sym_LT_POUNDif] = ACTIONS(305),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(305),
    [anon_sym_LT_POUNDelseif] = ACTIONS(305),
    [anon_sym_LT_POUNDswitch] = ACTIONS(305),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(305),
    [anon_sym_LT_POUNDcase] = ACTIONS(305),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(305),
    [anon_sym_LT_POUNDfunction] = ACTIONS(305),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(305),
    [anon_sym_LT_POUNDreturn] = ACTIONS(305),
    [anon_sym_LT_POUNDmacro] = ACTIONS(305),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(305),
    [anon_sym_LT_POUNDnested] = ACTIONS(305),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(305),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(305),
    [sym_recover] = ACTIONS(305),
    [sym_fallback] = ACTIONS(305),
    [sym_flush] = ACTIONS(305),
    [anon_sym_LT_POUNDftl] = ACTIONS(305),
    [anon_sym_LT_POUNDimport] = ACTIONS(305),
    [anon_sym_LT_POUNDinclude] = ACTIONS(305),
    [sym_lt] = ACTIONS(305),
    [sym_nt] = ACTIONS(305),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(305),
    [sym_rt] = ACTIONS(305),
    [anon_sym_LT_POUNDsetting] = ACTIONS(305),
    [sym_stop] = ACTIONS(305),
    [sym_t] = ACTIONS(305),
    [anon_sym_LT_POUNDvisit] = ACTIONS(305),
    [anon_sym_LT_POUNDassign] = ACTIONS(305),
    [sym_end_assign] = ACTIONS(305),
    [anon_sym_LT_POUNDglobal] = ACTIONS(305),
    [sym_end_global] = ACTIONS(305),
    [anon_sym_LT_POUNDlocal] = ACTIONS(305),
    [sym_end_local] = ACTIONS(305),
  },
  [69] = {
    [sym_parameter_group] = STATE(125),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(40),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(39),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(40),
    [aux_sym_group_repeat1] = STATE(125),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(309),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(311),
    [sym_comment] = ACTIONS(311),
    [anon_sym_DOLLAR] = ACTIONS(311),
    [anon_sym_LT_POUND] = ACTIONS(313),
    [anon_sym_LT_AT] = ACTIONS(311),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(311),
    [sym_break] = ACTIONS(311),
    [sym_continue] = ACTIONS(311),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(311),
    [anon_sym_LT_POUNDitems] = ACTIONS(311),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(311),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(311),
    [anon_sym_LT_POUNDif] = ACTIONS(311),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(311),
    [anon_sym_LT_POUNDelseif] = ACTIONS(311),
    [anon_sym_LT_POUNDswitch] = ACTIONS(311),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(311),
    [anon_sym_LT_POUNDcase] = ACTIONS(311),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(311),
    [anon_sym_LT_POUNDfunction] = ACTIONS(311),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(311),
    [anon_sym_LT_POUNDreturn] = ACTIONS(311),
    [anon_sym_LT_POUNDmacro] = ACTIONS(311),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(311),
    [anon_sym_LT_POUNDnested] = ACTIONS(311),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(311),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(311),
    [sym_recover] = ACTIONS(311),
    [sym_fallback] = ACTIONS(311),
    [sym_flush] = ACTIONS(311),
    [anon_sym_LT_POUNDftl] = ACTIONS(311),
    [anon_sym_LT_POUNDimport] = ACTIONS(311),
    [anon_sym_LT_POUNDinclude] = ACTIONS(311),
    [sym_lt] = ACTIONS(311),
    [sym_nt] = ACTIONS(311),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(311),
    [sym_rt] = ACTIONS(311),
    [anon_sym_LT_POUNDsetting] = ACTIONS(311),
    [sym_stop] = ACTIONS(311),
    [sym_t] = ACTIONS(311),
    [anon_sym_LT_POUNDvisit] = ACTIONS(311),
    [anon_sym_LT_POUNDassign] = ACTIONS(311),
    [sym_end_assign] = ACTIONS(311),
    [anon_sym_LT_POUNDglobal] = ACTIONS(311),
    [sym_end_global] = ACTIONS(311),
    [anon_sym_LT_POUNDlocal] = ACTIONS(311),
    [sym_end_local] = ACTIONS(311),
  },
  [71] = {
    [sym_parameter_group] = STATE(125),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(40),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(39),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(40),
    [aux_sym_group_repeat1] = STATE(125),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(315),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(317),
    [sym_comment] = ACTIONS(317),
    [anon_sym_DOLLAR] = ACTIONS(317),
    [anon_sym_LT_POUND] = ACTIONS(319),
    [anon_sym_LT_AT] = ACTIONS(317),
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
  [73] = {
    [sym_parameter_group] = STATE(125),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(40),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(39),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(40),
    [aux_sym_group_repeat1] = STATE(125),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [74] = {
    [sym__definition] = STATE(74),
    [sym_interpolation] = STATE(74),
    [sym_directive] = STATE(74),
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
    [aux_sym_source_file_repeat1] = STATE(74),
    [ts_builtin_sym_end] = ACTIONS(323),
    [sym_comment] = ACTIONS(325),
    [anon_sym_DOLLAR] = ACTIONS(328),
    [anon_sym_LT_POUND] = ACTIONS(331),
    [anon_sym_LT_AT] = ACTIONS(334),
    [anon_sym_LT_POUNDif] = ACTIONS(337),
    [anon_sym_LT_POUNDswitch] = ACTIONS(340),
    [anon_sym_LT_POUNDfunction] = ACTIONS(343),
    [anon_sym_LT_POUNDmacro] = ACTIONS(346),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(349),
    [sym_fallback] = ACTIONS(352),
    [sym_flush] = ACTIONS(352),
    [anon_sym_LT_POUNDftl] = ACTIONS(355),
    [anon_sym_LT_POUNDimport] = ACTIONS(358),
    [anon_sym_LT_POUNDinclude] = ACTIONS(361),
    [sym_lt] = ACTIONS(352),
    [sym_nt] = ACTIONS(352),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(364),
    [sym_rt] = ACTIONS(352),
    [anon_sym_LT_POUNDsetting] = ACTIONS(367),
    [sym_stop] = ACTIONS(352),
    [sym_t] = ACTIONS(352),
    [anon_sym_LT_POUNDvisit] = ACTIONS(370),
    [anon_sym_LT_POUNDassign] = ACTIONS(373),
    [sym_end_assign] = ACTIONS(376),
    [anon_sym_LT_POUNDglobal] = ACTIONS(379),
    [sym_end_global] = ACTIONS(382),
    [anon_sym_LT_POUNDlocal] = ACTIONS(385),
    [sym_end_local] = ACTIONS(388),
  },
  [75] = {
    [sym_expression] = STATE(163),
    [sym_type] = STATE(86),
    [sym_operator] = STATE(84),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_interpolation_repeat1] = STATE(163),
    [aux_sym_as_expression_repeat1] = STATE(86),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(391),
    [anon_sym_using] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT_DOT_LT] = ACTIONS(143),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_lt] = ACTIONS(141),
    [anon_sym_lte] = ACTIONS(141),
    [anon_sym_gt] = ACTIONS(141),
    [anon_sym_gte] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_QMARK_QMARK] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(145),
    [sym_number] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(151),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(153),
    [anon_sym_DOT] = ACTIONS(155),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(393),
    [sym_comment] = ACTIONS(393),
    [anon_sym_DOLLAR] = ACTIONS(393),
    [anon_sym_LT_POUND] = ACTIONS(395),
    [anon_sym_LT_AT] = ACTIONS(393),
    [anon_sym_LT_POUNDif] = ACTIONS(393),
    [anon_sym_LT_POUNDswitch] = ACTIONS(393),
    [anon_sym_LT_POUNDfunction] = ACTIONS(393),
    [anon_sym_LT_POUNDmacro] = ACTIONS(393),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(393),
    [sym_fallback] = ACTIONS(393),
    [sym_flush] = ACTIONS(393),
    [anon_sym_LT_POUNDftl] = ACTIONS(393),
    [anon_sym_LT_POUNDimport] = ACTIONS(393),
    [anon_sym_LT_POUNDinclude] = ACTIONS(393),
    [sym_lt] = ACTIONS(393),
    [sym_nt] = ACTIONS(393),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(393),
    [sym_rt] = ACTIONS(393),
    [anon_sym_LT_POUNDsetting] = ACTIONS(393),
    [sym_stop] = ACTIONS(393),
    [sym_t] = ACTIONS(393),
    [anon_sym_LT_POUNDvisit] = ACTIONS(393),
    [anon_sym_LT_POUNDassign] = ACTIONS(393),
    [sym_end_assign] = ACTIONS(393),
    [anon_sym_LT_POUNDglobal] = ACTIONS(393),
    [sym_end_global] = ACTIONS(393),
    [anon_sym_LT_POUNDlocal] = ACTIONS(393),
    [sym_end_local] = ACTIONS(393),
  },
  [77] = {
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_RBRACE] = ACTIONS(187),
    [anon_sym_using] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(187),
    [anon_sym_DOT_DOT] = ACTIONS(189),
    [anon_sym_DOT_DOT_LT] = ACTIONS(187),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(187),
    [anon_sym_COLON] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_PERCENT] = ACTIONS(187),
    [anon_sym_EQ_EQ] = ACTIONS(187),
    [anon_sym_BANG_EQ] = ACTIONS(187),
    [anon_sym_LT] = ACTIONS(189),
    [anon_sym_LT_EQ] = ACTIONS(187),
    [anon_sym_lt] = ACTIONS(189),
    [anon_sym_lte] = ACTIONS(189),
    [anon_sym_gt] = ACTIONS(189),
    [anon_sym_gte] = ACTIONS(189),
    [anon_sym_BANG] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(187),
    [anon_sym_PIPE_PIPE] = ACTIONS(187),
    [anon_sym_QMARK_QMARK] = ACTIONS(187),
    [anon_sym_EQ] = ACTIONS(189),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(187),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(187),
    [sym_number] = ACTIONS(189),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_RBRACK] = ACTIONS(187),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(189),
    [anon_sym_DOT] = ACTIONS(189),
  },
  [78] = {
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_RBRACE] = ACTIONS(191),
    [anon_sym_using] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_DOT_DOT] = ACTIONS(193),
    [anon_sym_DOT_DOT_LT] = ACTIONS(191),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(191),
    [anon_sym_PLUS] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_PERCENT] = ACTIONS(191),
    [anon_sym_EQ_EQ] = ACTIONS(191),
    [anon_sym_BANG_EQ] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(193),
    [anon_sym_LT_EQ] = ACTIONS(191),
    [anon_sym_lt] = ACTIONS(193),
    [anon_sym_lte] = ACTIONS(193),
    [anon_sym_gt] = ACTIONS(193),
    [anon_sym_gte] = ACTIONS(193),
    [anon_sym_BANG] = ACTIONS(193),
    [anon_sym_AMP_AMP] = ACTIONS(191),
    [anon_sym_PIPE_PIPE] = ACTIONS(191),
    [anon_sym_QMARK_QMARK] = ACTIONS(191),
    [anon_sym_EQ] = ACTIONS(193),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(191),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(191),
    [sym_number] = ACTIONS(193),
    [anon_sym_true] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_RBRACK] = ACTIONS(191),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(193),
    [anon_sym_DOT] = ACTIONS(193),
  },
  [79] = {
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_RBRACE] = ACTIONS(195),
    [anon_sym_using] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(195),
    [anon_sym_DOT_DOT] = ACTIONS(197),
    [anon_sym_DOT_DOT_LT] = ACTIONS(195),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(195),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_STAR] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_PERCENT] = ACTIONS(195),
    [anon_sym_EQ_EQ] = ACTIONS(195),
    [anon_sym_BANG_EQ] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(197),
    [anon_sym_LT_EQ] = ACTIONS(195),
    [anon_sym_lt] = ACTIONS(197),
    [anon_sym_lte] = ACTIONS(197),
    [anon_sym_gt] = ACTIONS(197),
    [anon_sym_gte] = ACTIONS(197),
    [anon_sym_BANG] = ACTIONS(197),
    [anon_sym_AMP_AMP] = ACTIONS(195),
    [anon_sym_PIPE_PIPE] = ACTIONS(195),
    [anon_sym_QMARK_QMARK] = ACTIONS(195),
    [anon_sym_EQ] = ACTIONS(197),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(195),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(195),
    [sym_number] = ACTIONS(197),
    [anon_sym_true] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(195),
    [anon_sym_RBRACK] = ACTIONS(195),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(197),
  },
  [80] = {
    [anon_sym_false] = ACTIONS(397),
  },
  [81] = {
    [sym_expression] = STATE(111),
    [sym_type] = STATE(113),
    [sym_operator] = STATE(112),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_as_expression_repeat1] = STATE(113),
    [aux_sym_sequence_repeat1] = STATE(166),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_using] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT_DOT_LT] = ACTIONS(143),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_lt] = ACTIONS(141),
    [anon_sym_lte] = ACTIONS(141),
    [anon_sym_gt] = ACTIONS(141),
    [anon_sym_gte] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_QMARK_QMARK] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(145),
    [sym_number] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(399),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(155),
  },
  [82] = {
    [sym_group] = STATE(169),
    [aux_sym_top_level_repeat1] = STATE(170),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_RBRACE] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(401),
    [anon_sym_using] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_DOT_DOT] = ACTIONS(207),
    [anon_sym_DOT_DOT_LT] = ACTIONS(205),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(205),
    [anon_sym_COLON] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_PLUS] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(205),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_PERCENT] = ACTIONS(205),
    [anon_sym_EQ_EQ] = ACTIONS(205),
    [anon_sym_BANG_EQ] = ACTIONS(205),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_LT_EQ] = ACTIONS(205),
    [anon_sym_lt] = ACTIONS(207),
    [anon_sym_lte] = ACTIONS(207),
    [anon_sym_gt] = ACTIONS(207),
    [anon_sym_gte] = ACTIONS(207),
    [anon_sym_BANG] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(205),
    [anon_sym_PIPE_PIPE] = ACTIONS(205),
    [anon_sym_QMARK_QMARK] = ACTIONS(205),
    [anon_sym_EQ] = ACTIONS(207),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(205),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(205),
    [sym_number] = ACTIONS(207),
    [anon_sym_true] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(205),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(207),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(403),
    [anon_sym_DOT] = ACTIONS(207),
  },
  [83] = {
    [sym__spec_var_name] = STATE(171),
    [anon_sym_hello] = ACTIONS(405),
    [anon_sym_auto_esc] = ACTIONS(405),
  },
  [84] = {
    [sym_type] = STATE(172),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_as_expression_repeat2] = STATE(172),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_RBRACE] = ACTIONS(219),
    [anon_sym_using] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(219),
    [anon_sym_DOT_DOT] = ACTIONS(221),
    [anon_sym_DOT_DOT_LT] = ACTIONS(219),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(219),
    [anon_sym_COLON] = ACTIONS(219),
    [anon_sym_STAR] = ACTIONS(219),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_SLASH] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(219),
    [anon_sym_PERCENT] = ACTIONS(219),
    [anon_sym_EQ_EQ] = ACTIONS(219),
    [anon_sym_BANG_EQ] = ACTIONS(219),
    [anon_sym_LT] = ACTIONS(221),
    [anon_sym_LT_EQ] = ACTIONS(219),
    [anon_sym_lt] = ACTIONS(221),
    [anon_sym_lte] = ACTIONS(221),
    [anon_sym_gt] = ACTIONS(221),
    [anon_sym_gte] = ACTIONS(221),
    [anon_sym_BANG] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(219),
    [anon_sym_PIPE_PIPE] = ACTIONS(219),
    [anon_sym_QMARK_QMARK] = ACTIONS(219),
    [anon_sym_EQ] = ACTIONS(221),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(219),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(219),
    [sym_number] = ACTIONS(221),
    [anon_sym_true] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(219),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(221),
  },
  [85] = {
    [sym_expression] = STATE(174),
    [sym_type] = STATE(86),
    [sym_operator] = STATE(84),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_interpolation_repeat1] = STATE(174),
    [aux_sym_as_expression_repeat1] = STATE(86),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(407),
    [anon_sym_using] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT_DOT_LT] = ACTIONS(143),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_lt] = ACTIONS(141),
    [anon_sym_lte] = ACTIONS(141),
    [anon_sym_gt] = ACTIONS(141),
    [anon_sym_gte] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_QMARK_QMARK] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(145),
    [sym_number] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(151),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(153),
    [anon_sym_DOT] = ACTIONS(155),
  },
  [86] = {
    [sym_type] = STATE(176),
    [sym_operator] = STATE(175),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_as_expression_repeat1] = STATE(176),
    [aux_sym_as_expression_repeat2] = STATE(172),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_RBRACE] = ACTIONS(219),
    [anon_sym_using] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT_DOT_LT] = ACTIONS(143),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_lt] = ACTIONS(141),
    [anon_sym_lte] = ACTIONS(141),
    [anon_sym_gt] = ACTIONS(141),
    [anon_sym_gte] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_QMARK_QMARK] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(219),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(219),
    [sym_number] = ACTIONS(221),
    [anon_sym_true] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(219),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(221),
  },
  [87] = {
    [anon_sym_GT] = ACTIONS(409),
  },
  [88] = {
    [sym_expression] = STATE(179),
    [sym_type] = STATE(86),
    [sym_operator] = STATE(84),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_interpolation_repeat1] = STATE(179),
    [aux_sym_as_expression_repeat1] = STATE(86),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(411),
    [anon_sym_using] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT_DOT_LT] = ACTIONS(143),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_lt] = ACTIONS(141),
    [anon_sym_lte] = ACTIONS(141),
    [anon_sym_gt] = ACTIONS(141),
    [anon_sym_gte] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_QMARK_QMARK] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(145),
    [sym_number] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(151),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(153),
    [anon_sym_DOT] = ACTIONS(155),
  },
  [89] = {
    [sym_type] = STATE(180),
    [sym_string] = STATE(94),
    [sym_boolean] = STATE(94),
    [sym_sequence] = STATE(94),
    [sym_hash] = STATE(94),
    [sym_top_level] = STATE(94),
    [sym_spec_var] = STATE(94),
    [aux_sym_as_expression_repeat2] = STATE(180),
    [anon_sym_LBRACE] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(169),
    [sym_number] = ACTIONS(171),
    [anon_sym_true] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(175),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(413),
  },
  [90] = {
    [sym_top_level] = STATE(182),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(415),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(417),
    [sym_comment] = ACTIONS(417),
    [anon_sym_DOLLAR] = ACTIONS(417),
    [anon_sym_LT_POUND] = ACTIONS(419),
    [anon_sym_LT_AT] = ACTIONS(417),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(417),
    [sym_break] = ACTIONS(417),
    [sym_continue] = ACTIONS(417),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(417),
    [anon_sym_LT_POUNDitems] = ACTIONS(417),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(417),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(417),
    [anon_sym_LT_POUNDif] = ACTIONS(417),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(417),
    [anon_sym_LT_POUNDelseif] = ACTIONS(417),
    [anon_sym_LT_POUNDswitch] = ACTIONS(417),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(417),
    [anon_sym_LT_POUNDcase] = ACTIONS(417),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(417),
    [anon_sym_LT_POUNDfunction] = ACTIONS(417),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(417),
    [anon_sym_LT_POUNDreturn] = ACTIONS(417),
    [anon_sym_LT_POUNDmacro] = ACTIONS(417),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(417),
    [anon_sym_LT_POUNDnested] = ACTIONS(417),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(417),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(417),
    [sym_recover] = ACTIONS(417),
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
  [92] = {
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_as] = ACTIONS(189),
    [anon_sym_QMARK] = ACTIONS(189),
    [anon_sym_GT] = ACTIONS(187),
    [anon_sym_using] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(187),
    [anon_sym_DOT_DOT] = ACTIONS(189),
    [anon_sym_DOT_DOT_LT] = ACTIONS(187),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(187),
    [anon_sym_COLON] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(189),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_PERCENT] = ACTIONS(187),
    [anon_sym_EQ_EQ] = ACTIONS(187),
    [anon_sym_BANG_EQ] = ACTIONS(187),
    [anon_sym_LT] = ACTIONS(189),
    [anon_sym_LT_EQ] = ACTIONS(187),
    [anon_sym_lt] = ACTIONS(189),
    [anon_sym_lte] = ACTIONS(189),
    [anon_sym_gt] = ACTIONS(189),
    [anon_sym_gte] = ACTIONS(189),
    [anon_sym_BANG] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(187),
    [anon_sym_PIPE_PIPE] = ACTIONS(187),
    [anon_sym_QMARK_QMARK] = ACTIONS(187),
    [anon_sym_EQ] = ACTIONS(189),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(187),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(187),
    [sym_number] = ACTIONS(189),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(187),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(189),
    [anon_sym_DOT] = ACTIONS(189),
    [anon_sym_SLASH_GT] = ACTIONS(187),
  },
  [93] = {
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_as] = ACTIONS(193),
    [anon_sym_QMARK] = ACTIONS(193),
    [anon_sym_GT] = ACTIONS(191),
    [anon_sym_using] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_DOT_DOT] = ACTIONS(193),
    [anon_sym_DOT_DOT_LT] = ACTIONS(191),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(191),
    [anon_sym_PLUS] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(193),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_PERCENT] = ACTIONS(191),
    [anon_sym_EQ_EQ] = ACTIONS(191),
    [anon_sym_BANG_EQ] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(193),
    [anon_sym_LT_EQ] = ACTIONS(191),
    [anon_sym_lt] = ACTIONS(193),
    [anon_sym_lte] = ACTIONS(193),
    [anon_sym_gt] = ACTIONS(193),
    [anon_sym_gte] = ACTIONS(193),
    [anon_sym_BANG] = ACTIONS(193),
    [anon_sym_AMP_AMP] = ACTIONS(191),
    [anon_sym_PIPE_PIPE] = ACTIONS(191),
    [anon_sym_QMARK_QMARK] = ACTIONS(191),
    [anon_sym_EQ] = ACTIONS(193),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(191),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(191),
    [sym_number] = ACTIONS(193),
    [anon_sym_true] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(191),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(193),
    [anon_sym_DOT] = ACTIONS(193),
    [anon_sym_SLASH_GT] = ACTIONS(191),
  },
  [94] = {
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_as] = ACTIONS(197),
    [anon_sym_QMARK] = ACTIONS(197),
    [anon_sym_GT] = ACTIONS(195),
    [anon_sym_using] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(195),
    [anon_sym_DOT_DOT] = ACTIONS(197),
    [anon_sym_DOT_DOT_LT] = ACTIONS(195),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(195),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_STAR] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(197),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_PERCENT] = ACTIONS(195),
    [anon_sym_EQ_EQ] = ACTIONS(195),
    [anon_sym_BANG_EQ] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(197),
    [anon_sym_LT_EQ] = ACTIONS(195),
    [anon_sym_lt] = ACTIONS(197),
    [anon_sym_lte] = ACTIONS(197),
    [anon_sym_gt] = ACTIONS(197),
    [anon_sym_gte] = ACTIONS(197),
    [anon_sym_BANG] = ACTIONS(197),
    [anon_sym_AMP_AMP] = ACTIONS(195),
    [anon_sym_PIPE_PIPE] = ACTIONS(195),
    [anon_sym_QMARK_QMARK] = ACTIONS(195),
    [anon_sym_EQ] = ACTIONS(197),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(195),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(195),
    [sym_number] = ACTIONS(197),
    [anon_sym_true] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(195),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(197),
    [anon_sym_SLASH_GT] = ACTIONS(195),
  },
  [95] = {
    [anon_sym_false] = ACTIONS(421),
  },
  [96] = {
    [sym_expression] = STATE(111),
    [sym_type] = STATE(113),
    [sym_operator] = STATE(112),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_as_expression_repeat1] = STATE(113),
    [aux_sym_sequence_repeat1] = STATE(185),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_using] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT_DOT_LT] = ACTIONS(143),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_lt] = ACTIONS(141),
    [anon_sym_lte] = ACTIONS(141),
    [anon_sym_gt] = ACTIONS(141),
    [anon_sym_gte] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_QMARK_QMARK] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(145),
    [sym_number] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(423),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(155),
  },
  [97] = {
    [sym_group] = STATE(188),
    [aux_sym_top_level_repeat1] = STATE(189),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_as] = ACTIONS(207),
    [anon_sym_QMARK] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(425),
    [anon_sym_GT] = ACTIONS(205),
    [anon_sym_using] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_DOT_DOT] = ACTIONS(207),
    [anon_sym_DOT_DOT_LT] = ACTIONS(205),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(205),
    [anon_sym_COLON] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_PLUS] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_PERCENT] = ACTIONS(205),
    [anon_sym_EQ_EQ] = ACTIONS(205),
    [anon_sym_BANG_EQ] = ACTIONS(205),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_LT_EQ] = ACTIONS(205),
    [anon_sym_lt] = ACTIONS(207),
    [anon_sym_lte] = ACTIONS(207),
    [anon_sym_gt] = ACTIONS(207),
    [anon_sym_gte] = ACTIONS(207),
    [anon_sym_BANG] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(205),
    [anon_sym_PIPE_PIPE] = ACTIONS(205),
    [anon_sym_QMARK_QMARK] = ACTIONS(205),
    [anon_sym_EQ] = ACTIONS(207),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(205),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(205),
    [sym_number] = ACTIONS(207),
    [anon_sym_true] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(205),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(207),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(427),
    [anon_sym_DOT] = ACTIONS(207),
    [anon_sym_SLASH_GT] = ACTIONS(205),
  },
  [98] = {
    [sym__spec_var_name] = STATE(190),
    [anon_sym_hello] = ACTIONS(429),
    [anon_sym_auto_esc] = ACTIONS(429),
  },
  [99] = {
    [anon_sym_LBRACE] = ACTIONS(215),
    [anon_sym_as] = ACTIONS(217),
    [anon_sym_QMARK] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_using] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(215),
    [anon_sym_DOT_DOT] = ACTIONS(217),
    [anon_sym_DOT_DOT_LT] = ACTIONS(215),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(215),
    [anon_sym_COLON] = ACTIONS(215),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(215),
    [anon_sym_PERCENT] = ACTIONS(215),
    [anon_sym_EQ_EQ] = ACTIONS(215),
    [anon_sym_BANG_EQ] = ACTIONS(215),
    [anon_sym_LT] = ACTIONS(217),
    [anon_sym_LT_EQ] = ACTIONS(215),
    [anon_sym_lt] = ACTIONS(217),
    [anon_sym_lte] = ACTIONS(217),
    [anon_sym_gt] = ACTIONS(217),
    [anon_sym_gte] = ACTIONS(217),
    [anon_sym_BANG] = ACTIONS(217),
    [anon_sym_AMP_AMP] = ACTIONS(215),
    [anon_sym_PIPE_PIPE] = ACTIONS(215),
    [anon_sym_QMARK_QMARK] = ACTIONS(215),
    [anon_sym_EQ] = ACTIONS(217),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(215),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(215),
    [sym_number] = ACTIONS(217),
    [anon_sym_true] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(215),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(217),
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_SLASH_GT] = ACTIONS(215),
  },
  [100] = {
    [sym_type] = STATE(191),
    [sym_string] = STATE(94),
    [sym_boolean] = STATE(94),
    [sym_sequence] = STATE(94),
    [sym_hash] = STATE(94),
    [sym_top_level] = STATE(94),
    [sym_spec_var] = STATE(94),
    [aux_sym_as_expression_repeat2] = STATE(191),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_as] = ACTIONS(221),
    [anon_sym_QMARK] = ACTIONS(221),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_using] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(219),
    [anon_sym_DOT_DOT] = ACTIONS(221),
    [anon_sym_DOT_DOT_LT] = ACTIONS(219),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(219),
    [anon_sym_COLON] = ACTIONS(219),
    [anon_sym_STAR] = ACTIONS(219),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_SLASH] = ACTIONS(221),
    [anon_sym_DASH] = ACTIONS(219),
    [anon_sym_PERCENT] = ACTIONS(219),
    [anon_sym_EQ_EQ] = ACTIONS(219),
    [anon_sym_BANG_EQ] = ACTIONS(219),
    [anon_sym_LT] = ACTIONS(221),
    [anon_sym_LT_EQ] = ACTIONS(219),
    [anon_sym_lt] = ACTIONS(221),
    [anon_sym_lte] = ACTIONS(221),
    [anon_sym_gt] = ACTIONS(221),
    [anon_sym_gte] = ACTIONS(221),
    [anon_sym_BANG] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(219),
    [anon_sym_PIPE_PIPE] = ACTIONS(219),
    [anon_sym_QMARK_QMARK] = ACTIONS(219),
    [anon_sym_EQ] = ACTIONS(221),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(219),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(219),
    [sym_number] = ACTIONS(221),
    [anon_sym_true] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(219),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(221),
    [anon_sym_SLASH_GT] = ACTIONS(219),
  },
  [101] = {
    [sym_type] = STATE(194),
    [sym_operator] = STATE(193),
    [sym_string] = STATE(94),
    [sym_boolean] = STATE(94),
    [sym_sequence] = STATE(94),
    [sym_hash] = STATE(94),
    [sym_top_level] = STATE(94),
    [sym_spec_var] = STATE(94),
    [aux_sym_as_expression_repeat1] = STATE(194),
    [aux_sym_as_expression_repeat2] = STATE(191),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_as] = ACTIONS(431),
    [anon_sym_QMARK] = ACTIONS(221),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_using] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_DOT_DOT] = ACTIONS(165),
    [anon_sym_DOT_DOT_LT] = ACTIONS(167),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_STAR] = ACTIONS(167),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_PERCENT] = ACTIONS(167),
    [anon_sym_EQ_EQ] = ACTIONS(167),
    [anon_sym_BANG_EQ] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_LT_EQ] = ACTIONS(167),
    [anon_sym_lt] = ACTIONS(165),
    [anon_sym_lte] = ACTIONS(165),
    [anon_sym_gt] = ACTIONS(165),
    [anon_sym_gte] = ACTIONS(165),
    [anon_sym_BANG] = ACTIONS(165),
    [anon_sym_AMP_AMP] = ACTIONS(167),
    [anon_sym_PIPE_PIPE] = ACTIONS(167),
    [anon_sym_QMARK_QMARK] = ACTIONS(167),
    [anon_sym_EQ] = ACTIONS(165),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(219),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(219),
    [sym_number] = ACTIONS(221),
    [anon_sym_true] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(219),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(221),
    [anon_sym_SLASH_GT] = ACTIONS(219),
  },
  [102] = {
    [sym_parameter_group] = STATE(196),
    [sym_as_expression] = STATE(99),
    [sym_expression] = STATE(99),
    [sym_type] = STATE(101),
    [sym_built_in] = STATE(99),
    [sym_operator] = STATE(100),
    [sym_string] = STATE(94),
    [sym_boolean] = STATE(94),
    [sym_sequence] = STATE(94),
    [sym_hash] = STATE(94),
    [sym_top_level] = STATE(94),
    [sym_spec_var] = STATE(94),
    [aux_sym_as_expression_repeat1] = STATE(101),
    [aux_sym_group_repeat1] = STATE(196),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_as] = ACTIONS(159),
    [anon_sym_QMARK] = ACTIONS(161),
    [anon_sym_GT] = ACTIONS(433),
    [anon_sym_using] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_DOT_DOT] = ACTIONS(165),
    [anon_sym_DOT_DOT_LT] = ACTIONS(167),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_STAR] = ACTIONS(167),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_PERCENT] = ACTIONS(167),
    [anon_sym_EQ_EQ] = ACTIONS(167),
    [anon_sym_BANG_EQ] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_LT_EQ] = ACTIONS(167),
    [anon_sym_lt] = ACTIONS(165),
    [anon_sym_lte] = ACTIONS(165),
    [anon_sym_gt] = ACTIONS(165),
    [anon_sym_gte] = ACTIONS(165),
    [anon_sym_BANG] = ACTIONS(165),
    [anon_sym_AMP_AMP] = ACTIONS(167),
    [anon_sym_PIPE_PIPE] = ACTIONS(167),
    [anon_sym_QMARK_QMARK] = ACTIONS(167),
    [anon_sym_EQ] = ACTIONS(165),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(169),
    [sym_number] = ACTIONS(171),
    [anon_sym_true] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(175),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(179),
    [anon_sym_SLASH_GT] = ACTIONS(433),
  },
  [103] = {
    [anon_sym_LBRACE] = ACTIONS(435),
    [anon_sym_as] = ACTIONS(437),
    [anon_sym_QMARK] = ACTIONS(437),
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [anon_sym_using] = ACTIONS(437),
    [anon_sym_COMMA] = ACTIONS(435),
    [anon_sym_DOT_DOT] = ACTIONS(437),
    [anon_sym_DOT_DOT_LT] = ACTIONS(435),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(435),
    [anon_sym_COLON] = ACTIONS(435),
    [anon_sym_STAR] = ACTIONS(435),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_SLASH] = ACTIONS(435),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_PERCENT] = ACTIONS(435),
    [anon_sym_EQ_EQ] = ACTIONS(435),
    [anon_sym_BANG_EQ] = ACTIONS(435),
    [anon_sym_LT] = ACTIONS(437),
    [anon_sym_LT_EQ] = ACTIONS(435),
    [anon_sym_lt] = ACTIONS(437),
    [anon_sym_lte] = ACTIONS(437),
    [anon_sym_gt] = ACTIONS(437),
    [anon_sym_gte] = ACTIONS(437),
    [anon_sym_BANG] = ACTIONS(437),
    [anon_sym_AMP_AMP] = ACTIONS(435),
    [anon_sym_PIPE_PIPE] = ACTIONS(435),
    [anon_sym_QMARK_QMARK] = ACTIONS(435),
    [anon_sym_EQ] = ACTIONS(437),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(435),
    [sym_number] = ACTIONS(437),
    [anon_sym_true] = ACTIONS(437),
    [anon_sym_LBRACK] = ACTIONS(435),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(437),
    [anon_sym_DOT] = ACTIONS(437),
  },
  [104] = {
    [sym_expression] = STATE(174),
    [sym_type] = STATE(86),
    [sym_operator] = STATE(84),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_interpolation_repeat1] = STATE(174),
    [aux_sym_as_expression_repeat1] = STATE(86),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(439),
    [anon_sym_using] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT_DOT_LT] = ACTIONS(143),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_lt] = ACTIONS(141),
    [anon_sym_lte] = ACTIONS(141),
    [anon_sym_gt] = ACTIONS(141),
    [anon_sym_gte] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_QMARK_QMARK] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(145),
    [sym_number] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(151),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(153),
    [anon_sym_DOT] = ACTIONS(155),
  },
  [105] = {
    [sym_type] = STATE(198),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat2] = STATE(198),
    [anon_sym_LBRACE] = ACTIONS(441),
    [anon_sym_as] = ACTIONS(443),
    [anon_sym_QMARK] = ACTIONS(443),
    [anon_sym_GT] = ACTIONS(441),
    [anon_sym_using] = ACTIONS(443),
    [anon_sym_COMMA] = ACTIONS(441),
    [anon_sym_DOT_DOT] = ACTIONS(443),
    [anon_sym_DOT_DOT_LT] = ACTIONS(441),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(441),
    [anon_sym_COLON] = ACTIONS(441),
    [anon_sym_STAR] = ACTIONS(441),
    [anon_sym_PLUS] = ACTIONS(441),
    [anon_sym_SLASH] = ACTIONS(441),
    [anon_sym_DASH] = ACTIONS(441),
    [anon_sym_PERCENT] = ACTIONS(441),
    [anon_sym_EQ_EQ] = ACTIONS(441),
    [anon_sym_BANG_EQ] = ACTIONS(441),
    [anon_sym_LT] = ACTIONS(443),
    [anon_sym_LT_EQ] = ACTIONS(441),
    [anon_sym_lt] = ACTIONS(443),
    [anon_sym_lte] = ACTIONS(443),
    [anon_sym_gt] = ACTIONS(443),
    [anon_sym_gte] = ACTIONS(443),
    [anon_sym_BANG] = ACTIONS(443),
    [anon_sym_AMP_AMP] = ACTIONS(441),
    [anon_sym_PIPE_PIPE] = ACTIONS(441),
    [anon_sym_QMARK_QMARK] = ACTIONS(441),
    [anon_sym_EQ] = ACTIONS(443),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(441),
    [sym_number] = ACTIONS(443),
    [anon_sym_true] = ACTIONS(443),
    [anon_sym_LBRACK] = ACTIONS(441),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(443),
    [anon_sym_DOT] = ACTIONS(443),
  },
  [106] = {
    [sym_group] = STATE(117),
    [aux_sym_top_level_repeat1] = STATE(199),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_as] = ACTIONS(207),
    [anon_sym_QMARK] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_GT] = ACTIONS(205),
    [anon_sym_using] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_DOT_DOT] = ACTIONS(207),
    [anon_sym_DOT_DOT_LT] = ACTIONS(205),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(205),
    [anon_sym_COLON] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_PLUS] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(205),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_PERCENT] = ACTIONS(205),
    [anon_sym_EQ_EQ] = ACTIONS(205),
    [anon_sym_BANG_EQ] = ACTIONS(205),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_LT_EQ] = ACTIONS(205),
    [anon_sym_lt] = ACTIONS(207),
    [anon_sym_lte] = ACTIONS(207),
    [anon_sym_gt] = ACTIONS(207),
    [anon_sym_gte] = ACTIONS(207),
    [anon_sym_BANG] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(205),
    [anon_sym_PIPE_PIPE] = ACTIONS(205),
    [anon_sym_QMARK_QMARK] = ACTIONS(205),
    [anon_sym_EQ] = ACTIONS(207),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(205),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(205),
    [sym_number] = ACTIONS(207),
    [anon_sym_true] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(205),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(207),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(207),
  },
  [107] = {
    [sym_group] = STATE(200),
    [anon_sym_LBRACE] = ACTIONS(445),
    [anon_sym_as] = ACTIONS(447),
    [anon_sym_QMARK] = ACTIONS(447),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(445),
    [anon_sym_GT] = ACTIONS(445),
    [anon_sym_using] = ACTIONS(447),
    [anon_sym_COMMA] = ACTIONS(445),
    [anon_sym_DOT_DOT] = ACTIONS(447),
    [anon_sym_DOT_DOT_LT] = ACTIONS(445),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(445),
    [anon_sym_COLON] = ACTIONS(445),
    [anon_sym_STAR] = ACTIONS(445),
    [anon_sym_PLUS] = ACTIONS(445),
    [anon_sym_SLASH] = ACTIONS(445),
    [anon_sym_DASH] = ACTIONS(445),
    [anon_sym_PERCENT] = ACTIONS(445),
    [anon_sym_EQ_EQ] = ACTIONS(445),
    [anon_sym_BANG_EQ] = ACTIONS(445),
    [anon_sym_LT] = ACTIONS(447),
    [anon_sym_LT_EQ] = ACTIONS(445),
    [anon_sym_lt] = ACTIONS(447),
    [anon_sym_lte] = ACTIONS(447),
    [anon_sym_gt] = ACTIONS(447),
    [anon_sym_gte] = ACTIONS(447),
    [anon_sym_BANG] = ACTIONS(447),
    [anon_sym_AMP_AMP] = ACTIONS(445),
    [anon_sym_PIPE_PIPE] = ACTIONS(445),
    [anon_sym_QMARK_QMARK] = ACTIONS(445),
    [anon_sym_EQ] = ACTIONS(447),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(445),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(445),
    [sym_number] = ACTIONS(447),
    [anon_sym_true] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(445),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(447),
    [anon_sym_DOT] = ACTIONS(447),
  },
  [108] = {
    [anon_sym_LBRACE] = ACTIONS(449),
    [anon_sym_as] = ACTIONS(451),
    [anon_sym_QMARK] = ACTIONS(451),
    [anon_sym_RPAREN] = ACTIONS(449),
    [anon_sym_GT] = ACTIONS(449),
    [anon_sym_using] = ACTIONS(451),
    [anon_sym_COMMA] = ACTIONS(449),
    [anon_sym_DOT_DOT] = ACTIONS(451),
    [anon_sym_DOT_DOT_LT] = ACTIONS(449),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(449),
    [anon_sym_COLON] = ACTIONS(449),
    [anon_sym_STAR] = ACTIONS(449),
    [anon_sym_PLUS] = ACTIONS(449),
    [anon_sym_SLASH] = ACTIONS(449),
    [anon_sym_DASH] = ACTIONS(449),
    [anon_sym_PERCENT] = ACTIONS(449),
    [anon_sym_EQ_EQ] = ACTIONS(449),
    [anon_sym_BANG_EQ] = ACTIONS(449),
    [anon_sym_LT] = ACTIONS(451),
    [anon_sym_LT_EQ] = ACTIONS(449),
    [anon_sym_lt] = ACTIONS(451),
    [anon_sym_lte] = ACTIONS(451),
    [anon_sym_gt] = ACTIONS(451),
    [anon_sym_gte] = ACTIONS(451),
    [anon_sym_BANG] = ACTIONS(451),
    [anon_sym_AMP_AMP] = ACTIONS(449),
    [anon_sym_PIPE_PIPE] = ACTIONS(449),
    [anon_sym_QMARK_QMARK] = ACTIONS(449),
    [anon_sym_EQ] = ACTIONS(451),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(449),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(449),
    [sym_number] = ACTIONS(451),
    [anon_sym_true] = ACTIONS(451),
    [anon_sym_LBRACK] = ACTIONS(449),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(451),
    [anon_sym_DOT] = ACTIONS(451),
  },
  [109] = {
    [anon_sym_LBRACE] = ACTIONS(453),
    [anon_sym_as] = ACTIONS(455),
    [anon_sym_QMARK] = ACTIONS(455),
    [anon_sym_RPAREN] = ACTIONS(453),
    [anon_sym_GT] = ACTIONS(453),
    [anon_sym_using] = ACTIONS(455),
    [anon_sym_COMMA] = ACTIONS(453),
    [anon_sym_DOT_DOT] = ACTIONS(455),
    [anon_sym_DOT_DOT_LT] = ACTIONS(453),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(453),
    [anon_sym_STAR] = ACTIONS(453),
    [anon_sym_PLUS] = ACTIONS(453),
    [anon_sym_SLASH] = ACTIONS(453),
    [anon_sym_DASH] = ACTIONS(453),
    [anon_sym_PERCENT] = ACTIONS(453),
    [anon_sym_EQ_EQ] = ACTIONS(453),
    [anon_sym_BANG_EQ] = ACTIONS(453),
    [anon_sym_LT] = ACTIONS(455),
    [anon_sym_LT_EQ] = ACTIONS(453),
    [anon_sym_lt] = ACTIONS(455),
    [anon_sym_lte] = ACTIONS(455),
    [anon_sym_gt] = ACTIONS(455),
    [anon_sym_gte] = ACTIONS(455),
    [anon_sym_BANG] = ACTIONS(455),
    [anon_sym_AMP_AMP] = ACTIONS(453),
    [anon_sym_PIPE_PIPE] = ACTIONS(453),
    [anon_sym_QMARK_QMARK] = ACTIONS(453),
    [anon_sym_EQ] = ACTIONS(455),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(453),
    [sym_number] = ACTIONS(455),
    [anon_sym_true] = ACTIONS(455),
    [anon_sym_LBRACK] = ACTIONS(453),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(455),
    [anon_sym_DOT] = ACTIONS(455),
  },
  [110] = {
    [sym_group] = STATE(169),
    [aux_sym_top_level_repeat1] = STATE(201),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(401),
    [anon_sym_using] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_DOT_DOT] = ACTIONS(207),
    [anon_sym_DOT_DOT_LT] = ACTIONS(205),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(205),
    [anon_sym_COLON] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_PLUS] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(205),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_PERCENT] = ACTIONS(205),
    [anon_sym_EQ_EQ] = ACTIONS(205),
    [anon_sym_BANG_EQ] = ACTIONS(205),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_LT_EQ] = ACTIONS(205),
    [anon_sym_lt] = ACTIONS(207),
    [anon_sym_lte] = ACTIONS(207),
    [anon_sym_gt] = ACTIONS(207),
    [anon_sym_gte] = ACTIONS(207),
    [anon_sym_BANG] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(205),
    [anon_sym_PIPE_PIPE] = ACTIONS(205),
    [anon_sym_QMARK_QMARK] = ACTIONS(205),
    [anon_sym_EQ] = ACTIONS(207),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(205),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(205),
    [sym_number] = ACTIONS(207),
    [anon_sym_true] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(205),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(207),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(403),
    [anon_sym_DOT] = ACTIONS(207),
  },
  [111] = {
    [anon_sym_LBRACE] = ACTIONS(457),
    [anon_sym_using] = ACTIONS(459),
    [anon_sym_COMMA] = ACTIONS(461),
    [anon_sym_DOT_DOT] = ACTIONS(459),
    [anon_sym_DOT_DOT_LT] = ACTIONS(457),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(457),
    [anon_sym_COLON] = ACTIONS(457),
    [anon_sym_STAR] = ACTIONS(457),
    [anon_sym_PLUS] = ACTIONS(457),
    [anon_sym_SLASH] = ACTIONS(457),
    [anon_sym_DASH] = ACTIONS(457),
    [anon_sym_PERCENT] = ACTIONS(457),
    [anon_sym_EQ_EQ] = ACTIONS(457),
    [anon_sym_BANG_EQ] = ACTIONS(457),
    [anon_sym_LT] = ACTIONS(459),
    [anon_sym_LT_EQ] = ACTIONS(457),
    [anon_sym_lt] = ACTIONS(459),
    [anon_sym_lte] = ACTIONS(459),
    [anon_sym_gt] = ACTIONS(459),
    [anon_sym_gte] = ACTIONS(459),
    [anon_sym_BANG] = ACTIONS(459),
    [anon_sym_AMP_AMP] = ACTIONS(457),
    [anon_sym_PIPE_PIPE] = ACTIONS(457),
    [anon_sym_QMARK_QMARK] = ACTIONS(457),
    [anon_sym_EQ] = ACTIONS(459),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(457),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(457),
    [sym_number] = ACTIONS(459),
    [anon_sym_true] = ACTIONS(459),
    [anon_sym_LBRACK] = ACTIONS(457),
    [anon_sym_RBRACK] = ACTIONS(457),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(459),
    [anon_sym_DOT] = ACTIONS(459),
  },
  [112] = {
    [sym_type] = STATE(203),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_as_expression_repeat2] = STATE(203),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_using] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(219),
    [anon_sym_DOT_DOT] = ACTIONS(221),
    [anon_sym_DOT_DOT_LT] = ACTIONS(219),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(219),
    [anon_sym_COLON] = ACTIONS(219),
    [anon_sym_STAR] = ACTIONS(219),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_SLASH] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(219),
    [anon_sym_PERCENT] = ACTIONS(219),
    [anon_sym_EQ_EQ] = ACTIONS(219),
    [anon_sym_BANG_EQ] = ACTIONS(219),
    [anon_sym_LT] = ACTIONS(221),
    [anon_sym_LT_EQ] = ACTIONS(219),
    [anon_sym_lt] = ACTIONS(221),
    [anon_sym_lte] = ACTIONS(221),
    [anon_sym_gt] = ACTIONS(221),
    [anon_sym_gte] = ACTIONS(221),
    [anon_sym_BANG] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(219),
    [anon_sym_PIPE_PIPE] = ACTIONS(219),
    [anon_sym_QMARK_QMARK] = ACTIONS(219),
    [anon_sym_EQ] = ACTIONS(221),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(219),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(219),
    [sym_number] = ACTIONS(221),
    [anon_sym_true] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_RBRACK] = ACTIONS(219),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(221),
  },
  [113] = {
    [sym_type] = STATE(205),
    [sym_operator] = STATE(204),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_as_expression_repeat1] = STATE(205),
    [aux_sym_as_expression_repeat2] = STATE(203),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_using] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT_DOT_LT] = ACTIONS(143),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_lt] = ACTIONS(141),
    [anon_sym_lte] = ACTIONS(141),
    [anon_sym_gt] = ACTIONS(141),
    [anon_sym_gte] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_QMARK_QMARK] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(219),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(219),
    [sym_number] = ACTIONS(221),
    [anon_sym_true] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_RBRACK] = ACTIONS(219),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(221),
  },
  [114] = {
    [sym_expression] = STATE(111),
    [sym_type] = STATE(113),
    [sym_operator] = STATE(112),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_as_expression_repeat1] = STATE(113),
    [aux_sym_sequence_repeat1] = STATE(207),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_using] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT_DOT_LT] = ACTIONS(143),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_lt] = ACTIONS(141),
    [anon_sym_lte] = ACTIONS(141),
    [anon_sym_gt] = ACTIONS(141),
    [anon_sym_gte] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_QMARK_QMARK] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(145),
    [sym_number] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(464),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(155),
  },
  [115] = {
    [sym_parameter_group] = STATE(214),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(213),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(212),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(213),
    [aux_sym_group_repeat1] = STATE(214),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(466),
    [anon_sym_QMARK] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(472),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [116] = {
    [anon_sym_LBRACE] = ACTIONS(474),
    [anon_sym_as] = ACTIONS(476),
    [anon_sym_QMARK] = ACTIONS(476),
    [anon_sym_LPAREN] = ACTIONS(474),
    [anon_sym_RPAREN] = ACTIONS(474),
    [anon_sym_GT] = ACTIONS(474),
    [anon_sym_using] = ACTIONS(476),
    [anon_sym_COMMA] = ACTIONS(474),
    [anon_sym_DOT_DOT] = ACTIONS(476),
    [anon_sym_DOT_DOT_LT] = ACTIONS(474),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(474),
    [anon_sym_COLON] = ACTIONS(474),
    [anon_sym_STAR] = ACTIONS(474),
    [anon_sym_PLUS] = ACTIONS(474),
    [anon_sym_SLASH] = ACTIONS(474),
    [anon_sym_DASH] = ACTIONS(474),
    [anon_sym_PERCENT] = ACTIONS(474),
    [anon_sym_EQ_EQ] = ACTIONS(474),
    [anon_sym_BANG_EQ] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(476),
    [anon_sym_LT_EQ] = ACTIONS(474),
    [anon_sym_lt] = ACTIONS(476),
    [anon_sym_lte] = ACTIONS(476),
    [anon_sym_gt] = ACTIONS(476),
    [anon_sym_gte] = ACTIONS(476),
    [anon_sym_BANG] = ACTIONS(476),
    [anon_sym_AMP_AMP] = ACTIONS(474),
    [anon_sym_PIPE_PIPE] = ACTIONS(474),
    [anon_sym_QMARK_QMARK] = ACTIONS(474),
    [anon_sym_EQ] = ACTIONS(476),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(474),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(474),
    [sym_number] = ACTIONS(476),
    [anon_sym_true] = ACTIONS(476),
    [anon_sym_LBRACK] = ACTIONS(474),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(476),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(474),
    [anon_sym_DOT] = ACTIONS(476),
  },
  [117] = {
    [anon_sym_LBRACE] = ACTIONS(478),
    [anon_sym_as] = ACTIONS(480),
    [anon_sym_QMARK] = ACTIONS(480),
    [anon_sym_LPAREN] = ACTIONS(478),
    [anon_sym_RPAREN] = ACTIONS(478),
    [anon_sym_GT] = ACTIONS(478),
    [anon_sym_using] = ACTIONS(480),
    [anon_sym_COMMA] = ACTIONS(478),
    [anon_sym_DOT_DOT] = ACTIONS(480),
    [anon_sym_DOT_DOT_LT] = ACTIONS(478),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(478),
    [anon_sym_COLON] = ACTIONS(478),
    [anon_sym_STAR] = ACTIONS(478),
    [anon_sym_PLUS] = ACTIONS(478),
    [anon_sym_SLASH] = ACTIONS(478),
    [anon_sym_DASH] = ACTIONS(478),
    [anon_sym_PERCENT] = ACTIONS(478),
    [anon_sym_EQ_EQ] = ACTIONS(478),
    [anon_sym_BANG_EQ] = ACTIONS(478),
    [anon_sym_LT] = ACTIONS(480),
    [anon_sym_LT_EQ] = ACTIONS(478),
    [anon_sym_lt] = ACTIONS(480),
    [anon_sym_lte] = ACTIONS(480),
    [anon_sym_gt] = ACTIONS(480),
    [anon_sym_gte] = ACTIONS(480),
    [anon_sym_BANG] = ACTIONS(480),
    [anon_sym_AMP_AMP] = ACTIONS(478),
    [anon_sym_PIPE_PIPE] = ACTIONS(478),
    [anon_sym_QMARK_QMARK] = ACTIONS(478),
    [anon_sym_EQ] = ACTIONS(480),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(478),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(478),
    [sym_number] = ACTIONS(480),
    [anon_sym_true] = ACTIONS(480),
    [anon_sym_LBRACK] = ACTIONS(478),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(480),
    [anon_sym_DOT] = ACTIONS(480),
  },
  [118] = {
    [sym_group] = STATE(215),
    [aux_sym_top_level_repeat1] = STATE(216),
    [anon_sym_LBRACE] = ACTIONS(482),
    [anon_sym_as] = ACTIONS(484),
    [anon_sym_QMARK] = ACTIONS(484),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(482),
    [anon_sym_using] = ACTIONS(484),
    [anon_sym_COMMA] = ACTIONS(482),
    [anon_sym_DOT_DOT] = ACTIONS(484),
    [anon_sym_DOT_DOT_LT] = ACTIONS(482),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(482),
    [anon_sym_COLON] = ACTIONS(482),
    [anon_sym_STAR] = ACTIONS(482),
    [anon_sym_PLUS] = ACTIONS(482),
    [anon_sym_SLASH] = ACTIONS(482),
    [anon_sym_DASH] = ACTIONS(482),
    [anon_sym_PERCENT] = ACTIONS(482),
    [anon_sym_EQ_EQ] = ACTIONS(482),
    [anon_sym_BANG_EQ] = ACTIONS(482),
    [anon_sym_LT] = ACTIONS(484),
    [anon_sym_LT_EQ] = ACTIONS(482),
    [anon_sym_lt] = ACTIONS(484),
    [anon_sym_lte] = ACTIONS(484),
    [anon_sym_gt] = ACTIONS(484),
    [anon_sym_gte] = ACTIONS(484),
    [anon_sym_BANG] = ACTIONS(484),
    [anon_sym_AMP_AMP] = ACTIONS(482),
    [anon_sym_PIPE_PIPE] = ACTIONS(482),
    [anon_sym_QMARK_QMARK] = ACTIONS(482),
    [anon_sym_EQ] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(482),
    [sym_number] = ACTIONS(484),
    [anon_sym_true] = ACTIONS(484),
    [anon_sym_LBRACK] = ACTIONS(482),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(484),
  },
  [119] = {
    [anon_sym_LBRACE] = ACTIONS(486),
    [anon_sym_as] = ACTIONS(488),
    [anon_sym_QMARK] = ACTIONS(488),
    [anon_sym_RPAREN] = ACTIONS(486),
    [anon_sym_GT] = ACTIONS(486),
    [anon_sym_using] = ACTIONS(488),
    [anon_sym_COMMA] = ACTIONS(486),
    [anon_sym_DOT_DOT] = ACTIONS(488),
    [anon_sym_DOT_DOT_LT] = ACTIONS(486),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(486),
    [anon_sym_COLON] = ACTIONS(486),
    [anon_sym_STAR] = ACTIONS(486),
    [anon_sym_PLUS] = ACTIONS(486),
    [anon_sym_SLASH] = ACTIONS(486),
    [anon_sym_DASH] = ACTIONS(486),
    [anon_sym_PERCENT] = ACTIONS(486),
    [anon_sym_EQ_EQ] = ACTIONS(486),
    [anon_sym_BANG_EQ] = ACTIONS(486),
    [anon_sym_LT] = ACTIONS(488),
    [anon_sym_LT_EQ] = ACTIONS(486),
    [anon_sym_lt] = ACTIONS(488),
    [anon_sym_lte] = ACTIONS(488),
    [anon_sym_gt] = ACTIONS(488),
    [anon_sym_gte] = ACTIONS(488),
    [anon_sym_BANG] = ACTIONS(488),
    [anon_sym_AMP_AMP] = ACTIONS(486),
    [anon_sym_PIPE_PIPE] = ACTIONS(486),
    [anon_sym_QMARK_QMARK] = ACTIONS(486),
    [anon_sym_EQ] = ACTIONS(488),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(486),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(486),
    [sym_number] = ACTIONS(488),
    [anon_sym_true] = ACTIONS(488),
    [anon_sym_LBRACK] = ACTIONS(486),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(488),
    [anon_sym_DOT] = ACTIONS(488),
  },
  [120] = {
    [sym_type] = STATE(198),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat2] = STATE(198),
    [anon_sym_LBRACE] = ACTIONS(490),
    [anon_sym_as] = ACTIONS(492),
    [anon_sym_QMARK] = ACTIONS(492),
    [anon_sym_GT] = ACTIONS(490),
    [anon_sym_using] = ACTIONS(492),
    [anon_sym_COMMA] = ACTIONS(490),
    [anon_sym_DOT_DOT] = ACTIONS(492),
    [anon_sym_DOT_DOT_LT] = ACTIONS(490),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(490),
    [anon_sym_COLON] = ACTIONS(490),
    [anon_sym_STAR] = ACTIONS(490),
    [anon_sym_PLUS] = ACTIONS(490),
    [anon_sym_SLASH] = ACTIONS(490),
    [anon_sym_DASH] = ACTIONS(490),
    [anon_sym_PERCENT] = ACTIONS(490),
    [anon_sym_EQ_EQ] = ACTIONS(490),
    [anon_sym_BANG_EQ] = ACTIONS(490),
    [anon_sym_LT] = ACTIONS(492),
    [anon_sym_LT_EQ] = ACTIONS(490),
    [anon_sym_lt] = ACTIONS(492),
    [anon_sym_lte] = ACTIONS(492),
    [anon_sym_gt] = ACTIONS(492),
    [anon_sym_gte] = ACTIONS(492),
    [anon_sym_BANG] = ACTIONS(492),
    [anon_sym_AMP_AMP] = ACTIONS(490),
    [anon_sym_PIPE_PIPE] = ACTIONS(490),
    [anon_sym_QMARK_QMARK] = ACTIONS(490),
    [anon_sym_EQ] = ACTIONS(492),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(490),
    [sym_number] = ACTIONS(492),
    [anon_sym_true] = ACTIONS(492),
    [anon_sym_LBRACK] = ACTIONS(490),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(492),
    [anon_sym_DOT] = ACTIONS(492),
  },
  [121] = {
    [sym_type] = STATE(217),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat2] = STATE(217),
    [anon_sym_LBRACE] = ACTIONS(57),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(183),
  },
  [122] = {
    [sym_type] = STATE(218),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat2] = STATE(218),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(492),
    [anon_sym_QMARK] = ACTIONS(492),
    [anon_sym_GT] = ACTIONS(490),
    [anon_sym_using] = ACTIONS(492),
    [anon_sym_COMMA] = ACTIONS(490),
    [anon_sym_DOT_DOT] = ACTIONS(492),
    [anon_sym_DOT_DOT_LT] = ACTIONS(490),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(490),
    [anon_sym_COLON] = ACTIONS(490),
    [anon_sym_STAR] = ACTIONS(490),
    [anon_sym_PLUS] = ACTIONS(490),
    [anon_sym_SLASH] = ACTIONS(490),
    [anon_sym_DASH] = ACTIONS(490),
    [anon_sym_PERCENT] = ACTIONS(490),
    [anon_sym_EQ_EQ] = ACTIONS(490),
    [anon_sym_BANG_EQ] = ACTIONS(490),
    [anon_sym_LT] = ACTIONS(492),
    [anon_sym_LT_EQ] = ACTIONS(490),
    [anon_sym_lt] = ACTIONS(492),
    [anon_sym_lte] = ACTIONS(492),
    [anon_sym_gt] = ACTIONS(492),
    [anon_sym_gte] = ACTIONS(492),
    [anon_sym_BANG] = ACTIONS(492),
    [anon_sym_AMP_AMP] = ACTIONS(490),
    [anon_sym_PIPE_PIPE] = ACTIONS(490),
    [anon_sym_QMARK_QMARK] = ACTIONS(490),
    [anon_sym_EQ] = ACTIONS(492),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [123] = {
    [sym_type] = STATE(123),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(123),
    [anon_sym_LBRACE] = ACTIONS(494),
    [anon_sym_as] = ACTIONS(497),
    [anon_sym_QMARK] = ACTIONS(497),
    [anon_sym_GT] = ACTIONS(499),
    [anon_sym_using] = ACTIONS(497),
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_DOT_DOT] = ACTIONS(497),
    [anon_sym_DOT_DOT_LT] = ACTIONS(499),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(499),
    [anon_sym_COLON] = ACTIONS(499),
    [anon_sym_STAR] = ACTIONS(499),
    [anon_sym_PLUS] = ACTIONS(499),
    [anon_sym_SLASH] = ACTIONS(499),
    [anon_sym_DASH] = ACTIONS(499),
    [anon_sym_PERCENT] = ACTIONS(499),
    [anon_sym_EQ_EQ] = ACTIONS(499),
    [anon_sym_BANG_EQ] = ACTIONS(499),
    [anon_sym_LT] = ACTIONS(497),
    [anon_sym_LT_EQ] = ACTIONS(499),
    [anon_sym_lt] = ACTIONS(497),
    [anon_sym_lte] = ACTIONS(497),
    [anon_sym_gt] = ACTIONS(497),
    [anon_sym_gte] = ACTIONS(497),
    [anon_sym_BANG] = ACTIONS(497),
    [anon_sym_AMP_AMP] = ACTIONS(499),
    [anon_sym_PIPE_PIPE] = ACTIONS(499),
    [anon_sym_QMARK_QMARK] = ACTIONS(499),
    [anon_sym_EQ] = ACTIONS(497),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(501),
    [sym_number] = ACTIONS(504),
    [anon_sym_true] = ACTIONS(507),
    [anon_sym_LBRACK] = ACTIONS(510),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(513),
    [anon_sym_DOT] = ACTIONS(516),
  },
  [124] = {
    [sym_directive] = STATE(222),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_if_else] = STATE(223),
    [sym_elseif] = STATE(222),
    [sym_if_middle] = STATE(224),
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
    [aux_sym_if_repeat1] = STATE(224),
    [anon_sym_LT_POUND] = ACTIONS(11),
    [anon_sym_LT_AT] = ACTIONS(13),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(519),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(521),
    [anon_sym_LT_POUNDelseif] = ACTIONS(523),
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
  [125] = {
    [sym_parameter_group] = STATE(125),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(40),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(39),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(40),
    [aux_sym_group_repeat1] = STATE(125),
    [anon_sym_LBRACE] = ACTIONS(525),
    [anon_sym_as] = ACTIONS(528),
    [anon_sym_QMARK] = ACTIONS(531),
    [anon_sym_GT] = ACTIONS(534),
    [anon_sym_using] = ACTIONS(536),
    [anon_sym_COMMA] = ACTIONS(539),
    [anon_sym_DOT_DOT] = ACTIONS(536),
    [anon_sym_DOT_DOT_LT] = ACTIONS(539),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(539),
    [anon_sym_COLON] = ACTIONS(539),
    [anon_sym_STAR] = ACTIONS(539),
    [anon_sym_PLUS] = ACTIONS(539),
    [anon_sym_SLASH] = ACTIONS(539),
    [anon_sym_DASH] = ACTIONS(539),
    [anon_sym_PERCENT] = ACTIONS(539),
    [anon_sym_EQ_EQ] = ACTIONS(539),
    [anon_sym_BANG_EQ] = ACTIONS(539),
    [anon_sym_LT] = ACTIONS(536),
    [anon_sym_LT_EQ] = ACTIONS(539),
    [anon_sym_lt] = ACTIONS(536),
    [anon_sym_lte] = ACTIONS(536),
    [anon_sym_gt] = ACTIONS(536),
    [anon_sym_gte] = ACTIONS(536),
    [anon_sym_BANG] = ACTIONS(536),
    [anon_sym_AMP_AMP] = ACTIONS(539),
    [anon_sym_PIPE_PIPE] = ACTIONS(539),
    [anon_sym_QMARK_QMARK] = ACTIONS(539),
    [anon_sym_EQ] = ACTIONS(536),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(542),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(542),
    [sym_number] = ACTIONS(545),
    [anon_sym_true] = ACTIONS(548),
    [anon_sym_LBRACK] = ACTIONS(551),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(554),
    [anon_sym_DOT] = ACTIONS(557),
  },
  [126] = {
    [sym_expression] = STATE(226),
    [sym_type] = STATE(86),
    [sym_operator] = STATE(84),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_interpolation_repeat1] = STATE(226),
    [aux_sym_as_expression_repeat1] = STATE(86),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(560),
    [anon_sym_using] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT_DOT_LT] = ACTIONS(143),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_lt] = ACTIONS(141),
    [anon_sym_lte] = ACTIONS(141),
    [anon_sym_gt] = ACTIONS(141),
    [anon_sym_gte] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_QMARK_QMARK] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(145),
    [sym_number] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(151),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(153),
    [anon_sym_DOT] = ACTIONS(155),
  },
  [127] = {
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_GT] = ACTIONS(191),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(191),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(191),
    [sym_number] = ACTIONS(193),
    [anon_sym_true] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(191),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(193),
    [anon_sym_DOT] = ACTIONS(191),
  },
  [128] = {
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_GT] = ACTIONS(195),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(195),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(195),
    [sym_number] = ACTIONS(197),
    [anon_sym_true] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(195),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(195),
  },
  [129] = {
    [anon_sym_false] = ACTIONS(562),
  },
  [130] = {
    [sym_expression] = STATE(111),
    [sym_type] = STATE(113),
    [sym_operator] = STATE(112),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_as_expression_repeat1] = STATE(113),
    [aux_sym_sequence_repeat1] = STATE(229),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_using] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT_DOT_LT] = ACTIONS(143),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_lt] = ACTIONS(141),
    [anon_sym_lte] = ACTIONS(141),
    [anon_sym_gt] = ACTIONS(141),
    [anon_sym_gte] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_QMARK_QMARK] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(145),
    [sym_number] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(564),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(155),
  },
  [131] = {
    [sym_group] = STATE(232),
    [aux_sym_top_level_repeat1] = STATE(233),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(566),
    [anon_sym_GT] = ACTIONS(205),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(205),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(205),
    [sym_number] = ACTIONS(207),
    [anon_sym_true] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(205),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(207),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(568),
    [anon_sym_DOT] = ACTIONS(207),
  },
  [132] = {
    [sym__spec_var_name] = STATE(234),
    [anon_sym_hello] = ACTIONS(570),
    [anon_sym_auto_esc] = ACTIONS(570),
  },
  [133] = {
    [sym_type] = STATE(235),
    [sym_string] = STATE(128),
    [sym_boolean] = STATE(128),
    [sym_sequence] = STATE(128),
    [sym_hash] = STATE(128),
    [sym_top_level] = STATE(128),
    [sym_spec_var] = STATE(128),
    [aux_sym_as_expression_repeat2] = STATE(235),
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(441),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(229),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(229),
    [sym_number] = ACTIONS(231),
    [anon_sym_true] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(235),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(237),
    [anon_sym_DOT] = ACTIONS(239),
  },
  [134] = {
    [sym_group] = STATE(117),
    [aux_sym_top_level_repeat1] = STATE(236),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_GT] = ACTIONS(205),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(211),
  },
  [135] = {
    [sym_group] = STATE(215),
    [aux_sym_top_level_repeat1] = STATE(237),
    [anon_sym_LBRACE] = ACTIONS(482),
    [anon_sym_as] = ACTIONS(484),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(482),
    [anon_sym_using] = ACTIONS(484),
    [anon_sym_COMMA] = ACTIONS(482),
    [anon_sym_DOT_DOT] = ACTIONS(484),
    [anon_sym_DOT_DOT_LT] = ACTIONS(482),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(482),
    [anon_sym_COLON] = ACTIONS(482),
    [anon_sym_STAR] = ACTIONS(482),
    [anon_sym_PLUS] = ACTIONS(482),
    [anon_sym_SLASH] = ACTIONS(482),
    [anon_sym_DASH] = ACTIONS(482),
    [anon_sym_PERCENT] = ACTIONS(482),
    [anon_sym_EQ_EQ] = ACTIONS(482),
    [anon_sym_BANG_EQ] = ACTIONS(482),
    [anon_sym_LT] = ACTIONS(484),
    [anon_sym_LT_EQ] = ACTIONS(482),
    [anon_sym_lt] = ACTIONS(484),
    [anon_sym_lte] = ACTIONS(484),
    [anon_sym_gt] = ACTIONS(484),
    [anon_sym_gte] = ACTIONS(484),
    [anon_sym_BANG] = ACTIONS(484),
    [anon_sym_AMP_AMP] = ACTIONS(482),
    [anon_sym_PIPE_PIPE] = ACTIONS(482),
    [anon_sym_QMARK_QMARK] = ACTIONS(482),
    [anon_sym_EQ] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(482),
    [sym_number] = ACTIONS(484),
    [anon_sym_true] = ACTIONS(484),
    [anon_sym_LBRACK] = ACTIONS(482),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(484),
  },
  [136] = {
    [sym_case] = STATE(241),
    [sym_default] = STATE(242),
    [sym_switch_middle] = STATE(243),
    [aux_sym_switch_repeat1] = STATE(243),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(572),
    [anon_sym_LT_POUNDcase] = ACTIONS(574),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(576),
  },
  [137] = {
    [sym_type] = STATE(235),
    [sym_string] = STATE(128),
    [sym_boolean] = STATE(128),
    [sym_sequence] = STATE(128),
    [sym_hash] = STATE(128),
    [sym_top_level] = STATE(128),
    [sym_spec_var] = STATE(128),
    [aux_sym_as_expression_repeat2] = STATE(235),
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(490),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(229),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(229),
    [sym_number] = ACTIONS(231),
    [anon_sym_true] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(235),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(237),
    [anon_sym_DOT] = ACTIONS(239),
  },
  [138] = {
    [sym_type] = STATE(244),
    [sym_string] = STATE(128),
    [sym_boolean] = STATE(128),
    [sym_sequence] = STATE(128),
    [sym_hash] = STATE(128),
    [sym_top_level] = STATE(128),
    [sym_spec_var] = STATE(128),
    [aux_sym_as_expression_repeat2] = STATE(244),
    [anon_sym_LBRACE] = ACTIONS(227),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(229),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(229),
    [sym_number] = ACTIONS(231),
    [anon_sym_true] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(235),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(237),
    [anon_sym_DOT] = ACTIONS(239),
  },
  [139] = {
    [sym_type] = STATE(245),
    [sym_string] = STATE(128),
    [sym_boolean] = STATE(128),
    [sym_sequence] = STATE(128),
    [sym_hash] = STATE(128),
    [sym_top_level] = STATE(128),
    [sym_spec_var] = STATE(128),
    [aux_sym_as_expression_repeat2] = STATE(245),
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(490),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(229),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(229),
    [sym_number] = ACTIONS(231),
    [anon_sym_true] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(235),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(237),
    [anon_sym_DOT] = ACTIONS(239),
  },
  [140] = {
    [sym_type] = STATE(140),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(140),
    [anon_sym_LBRACE] = ACTIONS(494),
    [anon_sym_as] = ACTIONS(497),
    [anon_sym_GT] = ACTIONS(499),
    [anon_sym_using] = ACTIONS(497),
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_DOT_DOT] = ACTIONS(497),
    [anon_sym_DOT_DOT_LT] = ACTIONS(499),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(499),
    [anon_sym_COLON] = ACTIONS(499),
    [anon_sym_STAR] = ACTIONS(499),
    [anon_sym_PLUS] = ACTIONS(499),
    [anon_sym_SLASH] = ACTIONS(499),
    [anon_sym_DASH] = ACTIONS(499),
    [anon_sym_PERCENT] = ACTIONS(499),
    [anon_sym_EQ_EQ] = ACTIONS(499),
    [anon_sym_BANG_EQ] = ACTIONS(499),
    [anon_sym_LT] = ACTIONS(497),
    [anon_sym_LT_EQ] = ACTIONS(499),
    [anon_sym_lt] = ACTIONS(497),
    [anon_sym_lte] = ACTIONS(497),
    [anon_sym_gt] = ACTIONS(497),
    [anon_sym_gte] = ACTIONS(497),
    [anon_sym_BANG] = ACTIONS(497),
    [anon_sym_AMP_AMP] = ACTIONS(499),
    [anon_sym_PIPE_PIPE] = ACTIONS(499),
    [anon_sym_QMARK_QMARK] = ACTIONS(499),
    [anon_sym_EQ] = ACTIONS(497),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(501),
    [sym_number] = ACTIONS(504),
    [anon_sym_true] = ACTIONS(507),
    [anon_sym_LBRACK] = ACTIONS(510),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(578),
    [anon_sym_DOT] = ACTIONS(516),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(581),
    [sym_comment] = ACTIONS(581),
    [anon_sym_DOLLAR] = ACTIONS(581),
    [anon_sym_LT_POUND] = ACTIONS(583),
    [anon_sym_LT_AT] = ACTIONS(581),
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
  [142] = {
    [sym_parameter_group] = STATE(247),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(48),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(47),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(48),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_using] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_DOT_DOT] = ACTIONS(83),
    [anon_sym_DOT_DOT_LT] = ACTIONS(85),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(85),
    [anon_sym_EQ_EQ] = ACTIONS(85),
    [anon_sym_BANG_EQ] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(83),
    [anon_sym_LT_EQ] = ACTIONS(85),
    [anon_sym_lt] = ACTIONS(83),
    [anon_sym_lte] = ACTIONS(83),
    [anon_sym_gt] = ACTIONS(83),
    [anon_sym_gte] = ACTIONS(83),
    [anon_sym_BANG] = ACTIONS(83),
    [anon_sym_AMP_AMP] = ACTIONS(85),
    [anon_sym_PIPE_PIPE] = ACTIONS(85),
    [anon_sym_QMARK_QMARK] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(87),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [143] = {
    [anon_sym_LT_POUND] = ACTIONS(587),
    [anon_sym_LT_AT] = ACTIONS(589),
    [anon_sym_LT_POUNDif] = ACTIONS(589),
    [anon_sym_LT_POUNDswitch] = ACTIONS(589),
    [anon_sym_LT_POUNDfunction] = ACTIONS(589),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(589),
    [anon_sym_LT_POUNDreturn] = ACTIONS(589),
    [anon_sym_LT_POUNDmacro] = ACTIONS(589),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(589),
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
  [144] = {
    [sym_directive] = STATE(143),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_function_middle] = STATE(249),
    [sym_return] = STATE(143),
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
    [aux_sym_function_repeat1] = STATE(249),
    [anon_sym_LT_POUND] = ACTIONS(11),
    [anon_sym_LT_AT] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(591),
    [anon_sym_LT_POUNDreturn] = ACTIONS(249),
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
  [145] = {
    [sym_directive] = STATE(143),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_function_middle] = STATE(250),
    [sym_return] = STATE(143),
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
    [aux_sym_function_repeat1] = STATE(250),
    [anon_sym_LT_POUND] = ACTIONS(11),
    [anon_sym_LT_AT] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(591),
    [anon_sym_LT_POUNDreturn] = ACTIONS(249),
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
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(593),
    [sym_comment] = ACTIONS(593),
    [anon_sym_DOLLAR] = ACTIONS(593),
    [anon_sym_LT_POUND] = ACTIONS(595),
    [anon_sym_LT_AT] = ACTIONS(593),
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
  [147] = {
    [sym_parameter_group] = STATE(252),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(40),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(39),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(40),
    [aux_sym_group_repeat1] = STATE(252),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(597),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [148] = {
    [anon_sym_LT_POUND] = ACTIONS(599),
    [anon_sym_LT_AT] = ACTIONS(601),
    [anon_sym_LT_POUNDif] = ACTIONS(601),
    [anon_sym_LT_POUNDswitch] = ACTIONS(601),
    [anon_sym_LT_POUNDfunction] = ACTIONS(601),
    [anon_sym_LT_POUNDreturn] = ACTIONS(601),
    [anon_sym_LT_POUNDmacro] = ACTIONS(601),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(601),
    [anon_sym_LT_POUNDnested] = ACTIONS(601),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(601),
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
  [149] = {
    [sym_directive] = STATE(148),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_return] = STATE(148),
    [sym_macro] = STATE(10),
    [sym_macro_middle] = STATE(254),
    [sym_nested] = STATE(148),
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
    [aux_sym_macro_repeat1] = STATE(254),
    [anon_sym_LT_POUND] = ACTIONS(11),
    [anon_sym_LT_AT] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDreturn] = ACTIONS(249),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(603),
    [anon_sym_LT_POUNDnested] = ACTIONS(255),
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
    [sym_directive] = STATE(148),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_return] = STATE(148),
    [sym_macro] = STATE(10),
    [sym_macro_middle] = STATE(255),
    [sym_nested] = STATE(148),
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
    [aux_sym_macro_repeat1] = STATE(255),
    [anon_sym_LT_POUND] = ACTIONS(11),
    [anon_sym_LT_AT] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDreturn] = ACTIONS(249),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(603),
    [anon_sym_LT_POUNDnested] = ACTIONS(255),
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
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(605),
    [sym_comment] = ACTIONS(605),
    [anon_sym_DOLLAR] = ACTIONS(605),
    [anon_sym_LT_POUND] = ACTIONS(607),
    [anon_sym_LT_AT] = ACTIONS(605),
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
  [152] = {
    [sym_directive] = STATE(54),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_attempt_middle] = STATE(152),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_attempt_repeat1] = STATE(152),
    [anon_sym_LT_POUND] = ACTIONS(609),
    [anon_sym_LT_AT] = ACTIONS(612),
    [anon_sym_LT_POUNDif] = ACTIONS(615),
    [anon_sym_LT_POUNDswitch] = ACTIONS(618),
    [anon_sym_LT_POUNDfunction] = ACTIONS(621),
    [anon_sym_LT_POUNDmacro] = ACTIONS(624),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(627),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(630),
    [sym_recover] = ACTIONS(632),
    [sym_fallback] = ACTIONS(635),
    [sym_flush] = ACTIONS(635),
    [anon_sym_LT_POUNDftl] = ACTIONS(638),
    [anon_sym_LT_POUNDimport] = ACTIONS(641),
    [anon_sym_LT_POUNDinclude] = ACTIONS(644),
    [sym_lt] = ACTIONS(635),
    [sym_nt] = ACTIONS(635),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(647),
    [sym_rt] = ACTIONS(635),
    [anon_sym_LT_POUNDsetting] = ACTIONS(650),
    [sym_stop] = ACTIONS(635),
    [sym_t] = ACTIONS(635),
    [anon_sym_LT_POUNDvisit] = ACTIONS(653),
    [anon_sym_LT_POUNDassign] = ACTIONS(656),
    [sym_end_assign] = ACTIONS(659),
    [anon_sym_LT_POUNDglobal] = ACTIONS(662),
    [sym_end_global] = ACTIONS(665),
    [anon_sym_LT_POUNDlocal] = ACTIONS(668),
    [sym_end_local] = ACTIONS(671),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(674),
    [sym_comment] = ACTIONS(674),
    [anon_sym_DOLLAR] = ACTIONS(674),
    [anon_sym_LT_POUND] = ACTIONS(676),
    [anon_sym_LT_AT] = ACTIONS(674),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(674),
    [sym_break] = ACTIONS(674),
    [sym_continue] = ACTIONS(674),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(674),
    [anon_sym_LT_POUNDitems] = ACTIONS(674),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(674),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(674),
    [anon_sym_LT_POUNDif] = ACTIONS(674),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(674),
    [anon_sym_LT_POUNDelseif] = ACTIONS(674),
    [anon_sym_LT_POUNDswitch] = ACTIONS(674),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(674),
    [anon_sym_LT_POUNDcase] = ACTIONS(674),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(674),
    [anon_sym_LT_POUNDfunction] = ACTIONS(674),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(674),
    [anon_sym_LT_POUNDreturn] = ACTIONS(674),
    [anon_sym_LT_POUNDmacro] = ACTIONS(674),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(674),
    [anon_sym_LT_POUNDnested] = ACTIONS(674),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(674),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(674),
    [sym_recover] = ACTIONS(674),
    [sym_fallback] = ACTIONS(674),
    [sym_flush] = ACTIONS(674),
    [anon_sym_LT_POUNDftl] = ACTIONS(674),
    [anon_sym_LT_POUNDimport] = ACTIONS(674),
    [anon_sym_LT_POUNDinclude] = ACTIONS(674),
    [sym_lt] = ACTIONS(674),
    [sym_nt] = ACTIONS(674),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(674),
    [sym_rt] = ACTIONS(674),
    [anon_sym_LT_POUNDsetting] = ACTIONS(674),
    [sym_stop] = ACTIONS(674),
    [sym_t] = ACTIONS(674),
    [anon_sym_LT_POUNDvisit] = ACTIONS(674),
    [anon_sym_LT_POUNDassign] = ACTIONS(674),
    [sym_end_assign] = ACTIONS(674),
    [anon_sym_LT_POUNDglobal] = ACTIONS(674),
    [sym_end_global] = ACTIONS(674),
    [anon_sym_LT_POUNDlocal] = ACTIONS(674),
    [sym_end_local] = ACTIONS(674),
  },
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(678),
    [sym_comment] = ACTIONS(678),
    [anon_sym_DOLLAR] = ACTIONS(678),
    [anon_sym_LT_POUND] = ACTIONS(680),
    [anon_sym_LT_AT] = ACTIONS(678),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(678),
    [sym_break] = ACTIONS(678),
    [sym_continue] = ACTIONS(678),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(678),
    [anon_sym_LT_POUNDitems] = ACTIONS(678),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(678),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(678),
    [anon_sym_LT_POUNDif] = ACTIONS(678),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(678),
    [anon_sym_LT_POUNDelseif] = ACTIONS(678),
    [anon_sym_LT_POUNDswitch] = ACTIONS(678),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(678),
    [anon_sym_LT_POUNDcase] = ACTIONS(678),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(678),
    [anon_sym_LT_POUNDfunction] = ACTIONS(678),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(678),
    [anon_sym_LT_POUNDreturn] = ACTIONS(678),
    [anon_sym_LT_POUNDmacro] = ACTIONS(678),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(678),
    [anon_sym_LT_POUNDnested] = ACTIONS(678),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(678),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(678),
    [sym_recover] = ACTIONS(678),
    [sym_fallback] = ACTIONS(678),
    [sym_flush] = ACTIONS(678),
    [anon_sym_LT_POUNDftl] = ACTIONS(678),
    [anon_sym_LT_POUNDimport] = ACTIONS(678),
    [anon_sym_LT_POUNDinclude] = ACTIONS(678),
    [sym_lt] = ACTIONS(678),
    [sym_nt] = ACTIONS(678),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(678),
    [sym_rt] = ACTIONS(678),
    [anon_sym_LT_POUNDsetting] = ACTIONS(678),
    [sym_stop] = ACTIONS(678),
    [sym_t] = ACTIONS(678),
    [anon_sym_LT_POUNDvisit] = ACTIONS(678),
    [anon_sym_LT_POUNDassign] = ACTIONS(678),
    [sym_end_assign] = ACTIONS(678),
    [anon_sym_LT_POUNDglobal] = ACTIONS(678),
    [sym_end_global] = ACTIONS(678),
    [anon_sym_LT_POUNDlocal] = ACTIONS(678),
    [sym_end_local] = ACTIONS(678),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(682),
    [sym_comment] = ACTIONS(682),
    [anon_sym_DOLLAR] = ACTIONS(682),
    [anon_sym_LT_POUND] = ACTIONS(684),
    [anon_sym_LT_AT] = ACTIONS(682),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(682),
    [sym_break] = ACTIONS(682),
    [sym_continue] = ACTIONS(682),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(682),
    [anon_sym_LT_POUNDitems] = ACTIONS(682),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(682),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(682),
    [anon_sym_LT_POUNDif] = ACTIONS(682),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(682),
    [anon_sym_LT_POUNDelseif] = ACTIONS(682),
    [anon_sym_LT_POUNDswitch] = ACTIONS(682),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(682),
    [anon_sym_LT_POUNDcase] = ACTIONS(682),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(682),
    [anon_sym_LT_POUNDfunction] = ACTIONS(682),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(682),
    [anon_sym_LT_POUNDreturn] = ACTIONS(682),
    [anon_sym_LT_POUNDmacro] = ACTIONS(682),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(682),
    [anon_sym_LT_POUNDnested] = ACTIONS(682),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(682),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(682),
    [sym_recover] = ACTIONS(682),
    [sym_fallback] = ACTIONS(682),
    [sym_flush] = ACTIONS(682),
    [anon_sym_LT_POUNDftl] = ACTIONS(682),
    [anon_sym_LT_POUNDimport] = ACTIONS(682),
    [anon_sym_LT_POUNDinclude] = ACTIONS(682),
    [sym_lt] = ACTIONS(682),
    [sym_nt] = ACTIONS(682),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(682),
    [sym_rt] = ACTIONS(682),
    [anon_sym_LT_POUNDsetting] = ACTIONS(682),
    [sym_stop] = ACTIONS(682),
    [sym_t] = ACTIONS(682),
    [anon_sym_LT_POUNDvisit] = ACTIONS(682),
    [anon_sym_LT_POUNDassign] = ACTIONS(682),
    [sym_end_assign] = ACTIONS(682),
    [anon_sym_LT_POUNDglobal] = ACTIONS(682),
    [sym_end_global] = ACTIONS(682),
    [anon_sym_LT_POUNDlocal] = ACTIONS(682),
    [sym_end_local] = ACTIONS(682),
  },
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(686),
    [sym_comment] = ACTIONS(686),
    [anon_sym_DOLLAR] = ACTIONS(686),
    [anon_sym_LT_POUND] = ACTIONS(688),
    [anon_sym_LT_AT] = ACTIONS(686),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(686),
    [sym_break] = ACTIONS(686),
    [sym_continue] = ACTIONS(686),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(686),
    [anon_sym_LT_POUNDitems] = ACTIONS(686),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(686),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(686),
    [anon_sym_LT_POUNDif] = ACTIONS(686),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(686),
    [anon_sym_LT_POUNDelseif] = ACTIONS(686),
    [anon_sym_LT_POUNDswitch] = ACTIONS(686),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(686),
    [anon_sym_LT_POUNDcase] = ACTIONS(686),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(686),
    [anon_sym_LT_POUNDfunction] = ACTIONS(686),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(686),
    [anon_sym_LT_POUNDreturn] = ACTIONS(686),
    [anon_sym_LT_POUNDmacro] = ACTIONS(686),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(686),
    [anon_sym_LT_POUNDnested] = ACTIONS(686),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(686),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(686),
    [sym_recover] = ACTIONS(686),
    [sym_fallback] = ACTIONS(686),
    [sym_flush] = ACTIONS(686),
    [anon_sym_LT_POUNDftl] = ACTIONS(686),
    [anon_sym_LT_POUNDimport] = ACTIONS(686),
    [anon_sym_LT_POUNDinclude] = ACTIONS(686),
    [sym_lt] = ACTIONS(686),
    [sym_nt] = ACTIONS(686),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(686),
    [sym_rt] = ACTIONS(686),
    [anon_sym_LT_POUNDsetting] = ACTIONS(686),
    [sym_stop] = ACTIONS(686),
    [sym_t] = ACTIONS(686),
    [anon_sym_LT_POUNDvisit] = ACTIONS(686),
    [anon_sym_LT_POUNDassign] = ACTIONS(686),
    [sym_end_assign] = ACTIONS(686),
    [anon_sym_LT_POUNDglobal] = ACTIONS(686),
    [sym_end_global] = ACTIONS(686),
    [anon_sym_LT_POUNDlocal] = ACTIONS(686),
    [sym_end_local] = ACTIONS(686),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(690),
    [sym_comment] = ACTIONS(690),
    [anon_sym_DOLLAR] = ACTIONS(690),
    [anon_sym_LT_POUND] = ACTIONS(692),
    [anon_sym_LT_AT] = ACTIONS(690),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(690),
    [sym_break] = ACTIONS(690),
    [sym_continue] = ACTIONS(690),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(690),
    [anon_sym_LT_POUNDitems] = ACTIONS(690),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(690),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(690),
    [anon_sym_LT_POUNDif] = ACTIONS(690),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(690),
    [anon_sym_LT_POUNDelseif] = ACTIONS(690),
    [anon_sym_LT_POUNDswitch] = ACTIONS(690),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(690),
    [anon_sym_LT_POUNDcase] = ACTIONS(690),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(690),
    [anon_sym_LT_POUNDfunction] = ACTIONS(690),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(690),
    [anon_sym_LT_POUNDreturn] = ACTIONS(690),
    [anon_sym_LT_POUNDmacro] = ACTIONS(690),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(690),
    [anon_sym_LT_POUNDnested] = ACTIONS(690),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(690),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(690),
    [sym_recover] = ACTIONS(690),
    [sym_fallback] = ACTIONS(690),
    [sym_flush] = ACTIONS(690),
    [anon_sym_LT_POUNDftl] = ACTIONS(690),
    [anon_sym_LT_POUNDimport] = ACTIONS(690),
    [anon_sym_LT_POUNDinclude] = ACTIONS(690),
    [sym_lt] = ACTIONS(690),
    [sym_nt] = ACTIONS(690),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(690),
    [sym_rt] = ACTIONS(690),
    [anon_sym_LT_POUNDsetting] = ACTIONS(690),
    [sym_stop] = ACTIONS(690),
    [sym_t] = ACTIONS(690),
    [anon_sym_LT_POUNDvisit] = ACTIONS(690),
    [anon_sym_LT_POUNDassign] = ACTIONS(690),
    [sym_end_assign] = ACTIONS(690),
    [anon_sym_LT_POUNDglobal] = ACTIONS(690),
    [sym_end_global] = ACTIONS(690),
    [anon_sym_LT_POUNDlocal] = ACTIONS(690),
    [sym_end_local] = ACTIONS(690),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(694),
    [sym_comment] = ACTIONS(694),
    [anon_sym_DOLLAR] = ACTIONS(694),
    [anon_sym_LT_POUND] = ACTIONS(696),
    [anon_sym_LT_AT] = ACTIONS(694),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(694),
    [sym_break] = ACTIONS(694),
    [sym_continue] = ACTIONS(694),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(694),
    [anon_sym_LT_POUNDitems] = ACTIONS(694),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(694),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(694),
    [anon_sym_LT_POUNDif] = ACTIONS(694),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(694),
    [anon_sym_LT_POUNDelseif] = ACTIONS(694),
    [anon_sym_LT_POUNDswitch] = ACTIONS(694),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(694),
    [anon_sym_LT_POUNDcase] = ACTIONS(694),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(694),
    [anon_sym_LT_POUNDfunction] = ACTIONS(694),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(694),
    [anon_sym_LT_POUNDreturn] = ACTIONS(694),
    [anon_sym_LT_POUNDmacro] = ACTIONS(694),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(694),
    [anon_sym_LT_POUNDnested] = ACTIONS(694),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(694),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(694),
    [sym_recover] = ACTIONS(694),
    [sym_fallback] = ACTIONS(694),
    [sym_flush] = ACTIONS(694),
    [anon_sym_LT_POUNDftl] = ACTIONS(694),
    [anon_sym_LT_POUNDimport] = ACTIONS(694),
    [anon_sym_LT_POUNDinclude] = ACTIONS(694),
    [sym_lt] = ACTIONS(694),
    [sym_nt] = ACTIONS(694),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(694),
    [sym_rt] = ACTIONS(694),
    [anon_sym_LT_POUNDsetting] = ACTIONS(694),
    [sym_stop] = ACTIONS(694),
    [sym_t] = ACTIONS(694),
    [anon_sym_LT_POUNDvisit] = ACTIONS(694),
    [anon_sym_LT_POUNDassign] = ACTIONS(694),
    [sym_end_assign] = ACTIONS(694),
    [anon_sym_LT_POUNDglobal] = ACTIONS(694),
    [sym_end_global] = ACTIONS(694),
    [anon_sym_LT_POUNDlocal] = ACTIONS(694),
    [sym_end_local] = ACTIONS(694),
  },
  [159] = {
    [ts_builtin_sym_end] = ACTIONS(698),
    [sym_comment] = ACTIONS(698),
    [anon_sym_DOLLAR] = ACTIONS(698),
    [anon_sym_LT_POUND] = ACTIONS(700),
    [anon_sym_LT_AT] = ACTIONS(698),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(698),
    [sym_break] = ACTIONS(698),
    [sym_continue] = ACTIONS(698),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(698),
    [anon_sym_LT_POUNDitems] = ACTIONS(698),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(698),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(698),
    [anon_sym_LT_POUNDif] = ACTIONS(698),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(698),
    [anon_sym_LT_POUNDelseif] = ACTIONS(698),
    [anon_sym_LT_POUNDswitch] = ACTIONS(698),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(698),
    [anon_sym_LT_POUNDcase] = ACTIONS(698),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(698),
    [anon_sym_LT_POUNDfunction] = ACTIONS(698),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(698),
    [anon_sym_LT_POUNDreturn] = ACTIONS(698),
    [anon_sym_LT_POUNDmacro] = ACTIONS(698),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(698),
    [anon_sym_LT_POUNDnested] = ACTIONS(698),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(698),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(698),
    [sym_recover] = ACTIONS(698),
    [sym_fallback] = ACTIONS(698),
    [sym_flush] = ACTIONS(698),
    [anon_sym_LT_POUNDftl] = ACTIONS(698),
    [anon_sym_LT_POUNDimport] = ACTIONS(698),
    [anon_sym_LT_POUNDinclude] = ACTIONS(698),
    [sym_lt] = ACTIONS(698),
    [sym_nt] = ACTIONS(698),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(698),
    [sym_rt] = ACTIONS(698),
    [anon_sym_LT_POUNDsetting] = ACTIONS(698),
    [sym_stop] = ACTIONS(698),
    [sym_t] = ACTIONS(698),
    [anon_sym_LT_POUNDvisit] = ACTIONS(698),
    [anon_sym_LT_POUNDassign] = ACTIONS(698),
    [sym_end_assign] = ACTIONS(698),
    [anon_sym_LT_POUNDglobal] = ACTIONS(698),
    [sym_end_global] = ACTIONS(698),
    [anon_sym_LT_POUNDlocal] = ACTIONS(698),
    [sym_end_local] = ACTIONS(698),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(702),
    [sym_comment] = ACTIONS(702),
    [anon_sym_DOLLAR] = ACTIONS(702),
    [anon_sym_LT_POUND] = ACTIONS(704),
    [anon_sym_LT_AT] = ACTIONS(702),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(702),
    [sym_break] = ACTIONS(702),
    [sym_continue] = ACTIONS(702),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(702),
    [anon_sym_LT_POUNDitems] = ACTIONS(702),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(702),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(702),
    [anon_sym_LT_POUNDif] = ACTIONS(702),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(702),
    [anon_sym_LT_POUNDelseif] = ACTIONS(702),
    [anon_sym_LT_POUNDswitch] = ACTIONS(702),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(702),
    [anon_sym_LT_POUNDcase] = ACTIONS(702),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(702),
    [anon_sym_LT_POUNDfunction] = ACTIONS(702),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(702),
    [anon_sym_LT_POUNDreturn] = ACTIONS(702),
    [anon_sym_LT_POUNDmacro] = ACTIONS(702),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(702),
    [anon_sym_LT_POUNDnested] = ACTIONS(702),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(702),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(702),
    [sym_recover] = ACTIONS(702),
    [sym_fallback] = ACTIONS(702),
    [sym_flush] = ACTIONS(702),
    [anon_sym_LT_POUNDftl] = ACTIONS(702),
    [anon_sym_LT_POUNDimport] = ACTIONS(702),
    [anon_sym_LT_POUNDinclude] = ACTIONS(702),
    [sym_lt] = ACTIONS(702),
    [sym_nt] = ACTIONS(702),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(702),
    [sym_rt] = ACTIONS(702),
    [anon_sym_LT_POUNDsetting] = ACTIONS(702),
    [sym_stop] = ACTIONS(702),
    [sym_t] = ACTIONS(702),
    [anon_sym_LT_POUNDvisit] = ACTIONS(702),
    [anon_sym_LT_POUNDassign] = ACTIONS(702),
    [sym_end_assign] = ACTIONS(702),
    [anon_sym_LT_POUNDglobal] = ACTIONS(702),
    [sym_end_global] = ACTIONS(702),
    [anon_sym_LT_POUNDlocal] = ACTIONS(702),
    [sym_end_local] = ACTIONS(702),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(706),
    [sym_comment] = ACTIONS(706),
    [anon_sym_DOLLAR] = ACTIONS(706),
    [anon_sym_LT_POUND] = ACTIONS(708),
    [anon_sym_LT_AT] = ACTIONS(706),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(706),
    [sym_break] = ACTIONS(706),
    [sym_continue] = ACTIONS(706),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(706),
    [anon_sym_LT_POUNDitems] = ACTIONS(706),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(706),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(706),
    [anon_sym_LT_POUNDif] = ACTIONS(706),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(706),
    [anon_sym_LT_POUNDelseif] = ACTIONS(706),
    [anon_sym_LT_POUNDswitch] = ACTIONS(706),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(706),
    [anon_sym_LT_POUNDcase] = ACTIONS(706),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(706),
    [anon_sym_LT_POUNDfunction] = ACTIONS(706),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(706),
    [anon_sym_LT_POUNDreturn] = ACTIONS(706),
    [anon_sym_LT_POUNDmacro] = ACTIONS(706),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(706),
    [anon_sym_LT_POUNDnested] = ACTIONS(706),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(706),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(706),
    [sym_recover] = ACTIONS(706),
    [sym_fallback] = ACTIONS(706),
    [sym_flush] = ACTIONS(706),
    [anon_sym_LT_POUNDftl] = ACTIONS(706),
    [anon_sym_LT_POUNDimport] = ACTIONS(706),
    [anon_sym_LT_POUNDinclude] = ACTIONS(706),
    [sym_lt] = ACTIONS(706),
    [sym_nt] = ACTIONS(706),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(706),
    [sym_rt] = ACTIONS(706),
    [anon_sym_LT_POUNDsetting] = ACTIONS(706),
    [sym_stop] = ACTIONS(706),
    [sym_t] = ACTIONS(706),
    [anon_sym_LT_POUNDvisit] = ACTIONS(706),
    [anon_sym_LT_POUNDassign] = ACTIONS(706),
    [sym_end_assign] = ACTIONS(706),
    [anon_sym_LT_POUNDglobal] = ACTIONS(706),
    [sym_end_global] = ACTIONS(706),
    [anon_sym_LT_POUNDlocal] = ACTIONS(706),
    [sym_end_local] = ACTIONS(706),
  },
  [162] = {
    [anon_sym_LBRACE] = ACTIONS(435),
    [anon_sym_RBRACE] = ACTIONS(435),
    [anon_sym_using] = ACTIONS(437),
    [anon_sym_COMMA] = ACTIONS(435),
    [anon_sym_DOT_DOT] = ACTIONS(437),
    [anon_sym_DOT_DOT_LT] = ACTIONS(435),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(435),
    [anon_sym_COLON] = ACTIONS(435),
    [anon_sym_STAR] = ACTIONS(435),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_SLASH] = ACTIONS(435),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_PERCENT] = ACTIONS(435),
    [anon_sym_EQ_EQ] = ACTIONS(435),
    [anon_sym_BANG_EQ] = ACTIONS(435),
    [anon_sym_LT] = ACTIONS(437),
    [anon_sym_LT_EQ] = ACTIONS(435),
    [anon_sym_lt] = ACTIONS(437),
    [anon_sym_lte] = ACTIONS(437),
    [anon_sym_gt] = ACTIONS(437),
    [anon_sym_gte] = ACTIONS(437),
    [anon_sym_BANG] = ACTIONS(437),
    [anon_sym_AMP_AMP] = ACTIONS(435),
    [anon_sym_PIPE_PIPE] = ACTIONS(435),
    [anon_sym_QMARK_QMARK] = ACTIONS(435),
    [anon_sym_EQ] = ACTIONS(437),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(435),
    [sym_number] = ACTIONS(437),
    [anon_sym_true] = ACTIONS(437),
    [anon_sym_LBRACK] = ACTIONS(435),
    [anon_sym_RBRACK] = ACTIONS(435),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(437),
    [anon_sym_DOT] = ACTIONS(437),
  },
  [163] = {
    [sym_expression] = STATE(174),
    [sym_type] = STATE(86),
    [sym_operator] = STATE(84),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_interpolation_repeat1] = STATE(174),
    [aux_sym_as_expression_repeat1] = STATE(86),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(710),
    [anon_sym_using] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT_DOT_LT] = ACTIONS(143),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_lt] = ACTIONS(141),
    [anon_sym_lte] = ACTIONS(141),
    [anon_sym_gt] = ACTIONS(141),
    [anon_sym_gte] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_QMARK_QMARK] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(145),
    [sym_number] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(151),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(153),
    [anon_sym_DOT] = ACTIONS(155),
  },
  [164] = {
    [anon_sym_LBRACE] = ACTIONS(449),
    [anon_sym_RBRACE] = ACTIONS(449),
    [anon_sym_using] = ACTIONS(451),
    [anon_sym_COMMA] = ACTIONS(449),
    [anon_sym_DOT_DOT] = ACTIONS(451),
    [anon_sym_DOT_DOT_LT] = ACTIONS(449),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(449),
    [anon_sym_COLON] = ACTIONS(449),
    [anon_sym_STAR] = ACTIONS(449),
    [anon_sym_PLUS] = ACTIONS(449),
    [anon_sym_SLASH] = ACTIONS(449),
    [anon_sym_DASH] = ACTIONS(449),
    [anon_sym_PERCENT] = ACTIONS(449),
    [anon_sym_EQ_EQ] = ACTIONS(449),
    [anon_sym_BANG_EQ] = ACTIONS(449),
    [anon_sym_LT] = ACTIONS(451),
    [anon_sym_LT_EQ] = ACTIONS(449),
    [anon_sym_lt] = ACTIONS(451),
    [anon_sym_lte] = ACTIONS(451),
    [anon_sym_gt] = ACTIONS(451),
    [anon_sym_gte] = ACTIONS(451),
    [anon_sym_BANG] = ACTIONS(451),
    [anon_sym_AMP_AMP] = ACTIONS(449),
    [anon_sym_PIPE_PIPE] = ACTIONS(449),
    [anon_sym_QMARK_QMARK] = ACTIONS(449),
    [anon_sym_EQ] = ACTIONS(451),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(449),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(449),
    [sym_number] = ACTIONS(451),
    [anon_sym_true] = ACTIONS(451),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_RBRACK] = ACTIONS(449),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(451),
    [anon_sym_DOT] = ACTIONS(451),
  },
  [165] = {
    [anon_sym_LBRACE] = ACTIONS(453),
    [anon_sym_RBRACE] = ACTIONS(453),
    [anon_sym_using] = ACTIONS(455),
    [anon_sym_COMMA] = ACTIONS(453),
    [anon_sym_DOT_DOT] = ACTIONS(455),
    [anon_sym_DOT_DOT_LT] = ACTIONS(453),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(453),
    [anon_sym_STAR] = ACTIONS(453),
    [anon_sym_PLUS] = ACTIONS(453),
    [anon_sym_SLASH] = ACTIONS(453),
    [anon_sym_DASH] = ACTIONS(453),
    [anon_sym_PERCENT] = ACTIONS(453),
    [anon_sym_EQ_EQ] = ACTIONS(453),
    [anon_sym_BANG_EQ] = ACTIONS(453),
    [anon_sym_LT] = ACTIONS(455),
    [anon_sym_LT_EQ] = ACTIONS(453),
    [anon_sym_lt] = ACTIONS(455),
    [anon_sym_lte] = ACTIONS(455),
    [anon_sym_gt] = ACTIONS(455),
    [anon_sym_gte] = ACTIONS(455),
    [anon_sym_BANG] = ACTIONS(455),
    [anon_sym_AMP_AMP] = ACTIONS(453),
    [anon_sym_PIPE_PIPE] = ACTIONS(453),
    [anon_sym_QMARK_QMARK] = ACTIONS(453),
    [anon_sym_EQ] = ACTIONS(455),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(453),
    [sym_number] = ACTIONS(455),
    [anon_sym_true] = ACTIONS(455),
    [anon_sym_LBRACK] = ACTIONS(453),
    [anon_sym_RBRACK] = ACTIONS(453),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(455),
    [anon_sym_DOT] = ACTIONS(455),
  },
  [166] = {
    [sym_expression] = STATE(111),
    [sym_type] = STATE(113),
    [sym_operator] = STATE(112),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_as_expression_repeat1] = STATE(113),
    [aux_sym_sequence_repeat1] = STATE(207),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_using] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT_DOT_LT] = ACTIONS(143),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_lt] = ACTIONS(141),
    [anon_sym_lte] = ACTIONS(141),
    [anon_sym_gt] = ACTIONS(141),
    [anon_sym_gte] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_QMARK_QMARK] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(145),
    [sym_number] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(712),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(155),
  },
  [167] = {
    [sym_parameter_group] = STATE(259),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(213),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(212),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(213),
    [aux_sym_group_repeat1] = STATE(259),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(466),
    [anon_sym_QMARK] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(714),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(472),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [168] = {
    [anon_sym_LBRACE] = ACTIONS(474),
    [anon_sym_RBRACE] = ACTIONS(474),
    [anon_sym_LPAREN] = ACTIONS(474),
    [anon_sym_using] = ACTIONS(476),
    [anon_sym_COMMA] = ACTIONS(474),
    [anon_sym_DOT_DOT] = ACTIONS(476),
    [anon_sym_DOT_DOT_LT] = ACTIONS(474),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(474),
    [anon_sym_COLON] = ACTIONS(474),
    [anon_sym_STAR] = ACTIONS(474),
    [anon_sym_PLUS] = ACTIONS(474),
    [anon_sym_SLASH] = ACTIONS(474),
    [anon_sym_DASH] = ACTIONS(474),
    [anon_sym_PERCENT] = ACTIONS(474),
    [anon_sym_EQ_EQ] = ACTIONS(474),
    [anon_sym_BANG_EQ] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(476),
    [anon_sym_LT_EQ] = ACTIONS(474),
    [anon_sym_lt] = ACTIONS(476),
    [anon_sym_lte] = ACTIONS(476),
    [anon_sym_gt] = ACTIONS(476),
    [anon_sym_gte] = ACTIONS(476),
    [anon_sym_BANG] = ACTIONS(476),
    [anon_sym_AMP_AMP] = ACTIONS(474),
    [anon_sym_PIPE_PIPE] = ACTIONS(474),
    [anon_sym_QMARK_QMARK] = ACTIONS(474),
    [anon_sym_EQ] = ACTIONS(476),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(474),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(474),
    [sym_number] = ACTIONS(476),
    [anon_sym_true] = ACTIONS(476),
    [anon_sym_LBRACK] = ACTIONS(474),
    [anon_sym_RBRACK] = ACTIONS(474),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(476),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(474),
    [anon_sym_DOT] = ACTIONS(476),
  },
  [169] = {
    [anon_sym_LBRACE] = ACTIONS(478),
    [anon_sym_RBRACE] = ACTIONS(478),
    [anon_sym_using] = ACTIONS(480),
    [anon_sym_COMMA] = ACTIONS(478),
    [anon_sym_DOT_DOT] = ACTIONS(480),
    [anon_sym_DOT_DOT_LT] = ACTIONS(478),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(478),
    [anon_sym_COLON] = ACTIONS(478),
    [anon_sym_STAR] = ACTIONS(478),
    [anon_sym_PLUS] = ACTIONS(478),
    [anon_sym_SLASH] = ACTIONS(478),
    [anon_sym_DASH] = ACTIONS(478),
    [anon_sym_PERCENT] = ACTIONS(478),
    [anon_sym_EQ_EQ] = ACTIONS(478),
    [anon_sym_BANG_EQ] = ACTIONS(478),
    [anon_sym_LT] = ACTIONS(480),
    [anon_sym_LT_EQ] = ACTIONS(478),
    [anon_sym_lt] = ACTIONS(480),
    [anon_sym_lte] = ACTIONS(480),
    [anon_sym_gt] = ACTIONS(480),
    [anon_sym_gte] = ACTIONS(480),
    [anon_sym_BANG] = ACTIONS(480),
    [anon_sym_AMP_AMP] = ACTIONS(478),
    [anon_sym_PIPE_PIPE] = ACTIONS(478),
    [anon_sym_QMARK_QMARK] = ACTIONS(478),
    [anon_sym_EQ] = ACTIONS(480),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(478),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(478),
    [sym_number] = ACTIONS(480),
    [anon_sym_true] = ACTIONS(480),
    [anon_sym_LBRACK] = ACTIONS(478),
    [anon_sym_RBRACK] = ACTIONS(478),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(480),
    [anon_sym_DOT] = ACTIONS(480),
  },
  [170] = {
    [sym_group] = STATE(260),
    [aux_sym_top_level_repeat1] = STATE(261),
    [anon_sym_LBRACE] = ACTIONS(482),
    [anon_sym_RBRACE] = ACTIONS(482),
    [anon_sym_LPAREN] = ACTIONS(401),
    [anon_sym_using] = ACTIONS(484),
    [anon_sym_COMMA] = ACTIONS(482),
    [anon_sym_DOT_DOT] = ACTIONS(484),
    [anon_sym_DOT_DOT_LT] = ACTIONS(482),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(482),
    [anon_sym_COLON] = ACTIONS(482),
    [anon_sym_STAR] = ACTIONS(482),
    [anon_sym_PLUS] = ACTIONS(482),
    [anon_sym_SLASH] = ACTIONS(482),
    [anon_sym_DASH] = ACTIONS(482),
    [anon_sym_PERCENT] = ACTIONS(482),
    [anon_sym_EQ_EQ] = ACTIONS(482),
    [anon_sym_BANG_EQ] = ACTIONS(482),
    [anon_sym_LT] = ACTIONS(484),
    [anon_sym_LT_EQ] = ACTIONS(482),
    [anon_sym_lt] = ACTIONS(484),
    [anon_sym_lte] = ACTIONS(484),
    [anon_sym_gt] = ACTIONS(484),
    [anon_sym_gte] = ACTIONS(484),
    [anon_sym_BANG] = ACTIONS(484),
    [anon_sym_AMP_AMP] = ACTIONS(482),
    [anon_sym_PIPE_PIPE] = ACTIONS(482),
    [anon_sym_QMARK_QMARK] = ACTIONS(482),
    [anon_sym_EQ] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(482),
    [sym_number] = ACTIONS(484),
    [anon_sym_true] = ACTIONS(484),
    [anon_sym_LBRACK] = ACTIONS(482),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(403),
    [anon_sym_DOT] = ACTIONS(484),
  },
  [171] = {
    [anon_sym_LBRACE] = ACTIONS(486),
    [anon_sym_RBRACE] = ACTIONS(486),
    [anon_sym_using] = ACTIONS(488),
    [anon_sym_COMMA] = ACTIONS(486),
    [anon_sym_DOT_DOT] = ACTIONS(488),
    [anon_sym_DOT_DOT_LT] = ACTIONS(486),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(486),
    [anon_sym_COLON] = ACTIONS(486),
    [anon_sym_STAR] = ACTIONS(486),
    [anon_sym_PLUS] = ACTIONS(486),
    [anon_sym_SLASH] = ACTIONS(486),
    [anon_sym_DASH] = ACTIONS(486),
    [anon_sym_PERCENT] = ACTIONS(486),
    [anon_sym_EQ_EQ] = ACTIONS(486),
    [anon_sym_BANG_EQ] = ACTIONS(486),
    [anon_sym_LT] = ACTIONS(488),
    [anon_sym_LT_EQ] = ACTIONS(486),
    [anon_sym_lt] = ACTIONS(488),
    [anon_sym_lte] = ACTIONS(488),
    [anon_sym_gt] = ACTIONS(488),
    [anon_sym_gte] = ACTIONS(488),
    [anon_sym_BANG] = ACTIONS(488),
    [anon_sym_AMP_AMP] = ACTIONS(486),
    [anon_sym_PIPE_PIPE] = ACTIONS(486),
    [anon_sym_QMARK_QMARK] = ACTIONS(486),
    [anon_sym_EQ] = ACTIONS(488),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(486),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(486),
    [sym_number] = ACTIONS(488),
    [anon_sym_true] = ACTIONS(488),
    [anon_sym_LBRACK] = ACTIONS(486),
    [anon_sym_RBRACK] = ACTIONS(486),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(488),
    [anon_sym_DOT] = ACTIONS(488),
  },
  [172] = {
    [sym_type] = STATE(262),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_as_expression_repeat2] = STATE(262),
    [anon_sym_LBRACE] = ACTIONS(490),
    [anon_sym_RBRACE] = ACTIONS(490),
    [anon_sym_using] = ACTIONS(492),
    [anon_sym_COMMA] = ACTIONS(490),
    [anon_sym_DOT_DOT] = ACTIONS(492),
    [anon_sym_DOT_DOT_LT] = ACTIONS(490),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(490),
    [anon_sym_COLON] = ACTIONS(490),
    [anon_sym_STAR] = ACTIONS(490),
    [anon_sym_PLUS] = ACTIONS(490),
    [anon_sym_SLASH] = ACTIONS(490),
    [anon_sym_DASH] = ACTIONS(490),
    [anon_sym_PERCENT] = ACTIONS(490),
    [anon_sym_EQ_EQ] = ACTIONS(490),
    [anon_sym_BANG_EQ] = ACTIONS(490),
    [anon_sym_LT] = ACTIONS(492),
    [anon_sym_LT_EQ] = ACTIONS(490),
    [anon_sym_lt] = ACTIONS(492),
    [anon_sym_lte] = ACTIONS(492),
    [anon_sym_gt] = ACTIONS(492),
    [anon_sym_gte] = ACTIONS(492),
    [anon_sym_BANG] = ACTIONS(492),
    [anon_sym_AMP_AMP] = ACTIONS(490),
    [anon_sym_PIPE_PIPE] = ACTIONS(490),
    [anon_sym_QMARK_QMARK] = ACTIONS(490),
    [anon_sym_EQ] = ACTIONS(492),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(490),
    [sym_number] = ACTIONS(492),
    [anon_sym_true] = ACTIONS(492),
    [anon_sym_LBRACK] = ACTIONS(490),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(492),
    [anon_sym_DOT] = ACTIONS(492),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(716),
    [sym_comment] = ACTIONS(716),
    [anon_sym_DOLLAR] = ACTIONS(716),
    [anon_sym_LT_POUND] = ACTIONS(718),
    [anon_sym_LT_AT] = ACTIONS(716),
    [anon_sym_LT_POUNDif] = ACTIONS(716),
    [anon_sym_LT_POUNDswitch] = ACTIONS(716),
    [anon_sym_LT_POUNDfunction] = ACTIONS(716),
    [anon_sym_LT_POUNDmacro] = ACTIONS(716),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(716),
    [sym_fallback] = ACTIONS(716),
    [sym_flush] = ACTIONS(716),
    [anon_sym_LT_POUNDftl] = ACTIONS(716),
    [anon_sym_LT_POUNDimport] = ACTIONS(716),
    [anon_sym_LT_POUNDinclude] = ACTIONS(716),
    [sym_lt] = ACTIONS(716),
    [sym_nt] = ACTIONS(716),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(716),
    [sym_rt] = ACTIONS(716),
    [anon_sym_LT_POUNDsetting] = ACTIONS(716),
    [sym_stop] = ACTIONS(716),
    [sym_t] = ACTIONS(716),
    [anon_sym_LT_POUNDvisit] = ACTIONS(716),
    [anon_sym_LT_POUNDassign] = ACTIONS(716),
    [sym_end_assign] = ACTIONS(716),
    [anon_sym_LT_POUNDglobal] = ACTIONS(716),
    [sym_end_global] = ACTIONS(716),
    [anon_sym_LT_POUNDlocal] = ACTIONS(716),
    [sym_end_local] = ACTIONS(716),
  },
  [174] = {
    [sym_expression] = STATE(174),
    [sym_type] = STATE(86),
    [sym_operator] = STATE(84),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_interpolation_repeat1] = STATE(174),
    [aux_sym_as_expression_repeat1] = STATE(86),
    [anon_sym_LBRACE] = ACTIONS(720),
    [anon_sym_RBRACE] = ACTIONS(723),
    [anon_sym_using] = ACTIONS(725),
    [anon_sym_COMMA] = ACTIONS(728),
    [anon_sym_DOT_DOT] = ACTIONS(725),
    [anon_sym_DOT_DOT_LT] = ACTIONS(728),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(728),
    [anon_sym_COLON] = ACTIONS(728),
    [anon_sym_STAR] = ACTIONS(728),
    [anon_sym_PLUS] = ACTIONS(728),
    [anon_sym_SLASH] = ACTIONS(728),
    [anon_sym_DASH] = ACTIONS(728),
    [anon_sym_PERCENT] = ACTIONS(728),
    [anon_sym_EQ_EQ] = ACTIONS(728),
    [anon_sym_BANG_EQ] = ACTIONS(728),
    [anon_sym_LT] = ACTIONS(725),
    [anon_sym_LT_EQ] = ACTIONS(728),
    [anon_sym_lt] = ACTIONS(725),
    [anon_sym_lte] = ACTIONS(725),
    [anon_sym_gt] = ACTIONS(725),
    [anon_sym_gte] = ACTIONS(725),
    [anon_sym_BANG] = ACTIONS(725),
    [anon_sym_AMP_AMP] = ACTIONS(728),
    [anon_sym_PIPE_PIPE] = ACTIONS(728),
    [anon_sym_QMARK_QMARK] = ACTIONS(728),
    [anon_sym_EQ] = ACTIONS(725),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(731),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(731),
    [sym_number] = ACTIONS(734),
    [anon_sym_true] = ACTIONS(737),
    [anon_sym_LBRACK] = ACTIONS(740),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(743),
    [anon_sym_DOT] = ACTIONS(746),
  },
  [175] = {
    [sym_type] = STATE(263),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_as_expression_repeat2] = STATE(263),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(490),
    [anon_sym_using] = ACTIONS(492),
    [anon_sym_COMMA] = ACTIONS(490),
    [anon_sym_DOT_DOT] = ACTIONS(492),
    [anon_sym_DOT_DOT_LT] = ACTIONS(490),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(490),
    [anon_sym_COLON] = ACTIONS(490),
    [anon_sym_STAR] = ACTIONS(490),
    [anon_sym_PLUS] = ACTIONS(490),
    [anon_sym_SLASH] = ACTIONS(490),
    [anon_sym_DASH] = ACTIONS(490),
    [anon_sym_PERCENT] = ACTIONS(490),
    [anon_sym_EQ_EQ] = ACTIONS(490),
    [anon_sym_BANG_EQ] = ACTIONS(490),
    [anon_sym_LT] = ACTIONS(492),
    [anon_sym_LT_EQ] = ACTIONS(490),
    [anon_sym_lt] = ACTIONS(492),
    [anon_sym_lte] = ACTIONS(492),
    [anon_sym_gt] = ACTIONS(492),
    [anon_sym_gte] = ACTIONS(492),
    [anon_sym_BANG] = ACTIONS(492),
    [anon_sym_AMP_AMP] = ACTIONS(490),
    [anon_sym_PIPE_PIPE] = ACTIONS(490),
    [anon_sym_QMARK_QMARK] = ACTIONS(490),
    [anon_sym_EQ] = ACTIONS(492),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(145),
    [sym_number] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(151),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(153),
    [anon_sym_DOT] = ACTIONS(155),
  },
  [176] = {
    [sym_type] = STATE(176),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_as_expression_repeat1] = STATE(176),
    [anon_sym_LBRACE] = ACTIONS(749),
    [anon_sym_RBRACE] = ACTIONS(499),
    [anon_sym_using] = ACTIONS(497),
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_DOT_DOT] = ACTIONS(497),
    [anon_sym_DOT_DOT_LT] = ACTIONS(499),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(499),
    [anon_sym_COLON] = ACTIONS(499),
    [anon_sym_STAR] = ACTIONS(499),
    [anon_sym_PLUS] = ACTIONS(499),
    [anon_sym_SLASH] = ACTIONS(499),
    [anon_sym_DASH] = ACTIONS(499),
    [anon_sym_PERCENT] = ACTIONS(499),
    [anon_sym_EQ_EQ] = ACTIONS(499),
    [anon_sym_BANG_EQ] = ACTIONS(499),
    [anon_sym_LT] = ACTIONS(497),
    [anon_sym_LT_EQ] = ACTIONS(499),
    [anon_sym_lt] = ACTIONS(497),
    [anon_sym_lte] = ACTIONS(497),
    [anon_sym_gt] = ACTIONS(497),
    [anon_sym_gte] = ACTIONS(497),
    [anon_sym_BANG] = ACTIONS(497),
    [anon_sym_AMP_AMP] = ACTIONS(499),
    [anon_sym_PIPE_PIPE] = ACTIONS(499),
    [anon_sym_QMARK_QMARK] = ACTIONS(499),
    [anon_sym_EQ] = ACTIONS(497),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(752),
    [sym_number] = ACTIONS(755),
    [anon_sym_true] = ACTIONS(758),
    [anon_sym_LBRACK] = ACTIONS(761),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(764),
    [anon_sym_DOT] = ACTIONS(767),
  },
  [177] = {
    [sym_directive] = STATE(265),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_list_middle] = STATE(271),
    [sym_list_else] = STATE(269),
    [sym_items] = STATE(265),
    [sym_sep] = STATE(265),
    [sym_sep_block] = STATE(270),
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
    [aux_sym_list_repeat1] = STATE(271),
    [anon_sym_LT_POUND] = ACTIONS(11),
    [anon_sym_LT_AT] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(770),
    [sym_break] = ACTIONS(772),
    [sym_continue] = ACTIONS(772),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(774),
    [anon_sym_LT_POUNDitems] = ACTIONS(776),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(778),
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
  [178] = {
    [anon_sym_LBRACE] = ACTIONS(435),
    [anon_sym_as] = ACTIONS(437),
    [anon_sym_QMARK] = ACTIONS(437),
    [anon_sym_GT] = ACTIONS(435),
    [anon_sym_using] = ACTIONS(437),
    [anon_sym_COMMA] = ACTIONS(435),
    [anon_sym_DOT_DOT] = ACTIONS(437),
    [anon_sym_DOT_DOT_LT] = ACTIONS(435),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(435),
    [anon_sym_COLON] = ACTIONS(435),
    [anon_sym_STAR] = ACTIONS(435),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_SLASH] = ACTIONS(437),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_PERCENT] = ACTIONS(435),
    [anon_sym_EQ_EQ] = ACTIONS(435),
    [anon_sym_BANG_EQ] = ACTIONS(435),
    [anon_sym_LT] = ACTIONS(437),
    [anon_sym_LT_EQ] = ACTIONS(435),
    [anon_sym_lt] = ACTIONS(437),
    [anon_sym_lte] = ACTIONS(437),
    [anon_sym_gt] = ACTIONS(437),
    [anon_sym_gte] = ACTIONS(437),
    [anon_sym_BANG] = ACTIONS(437),
    [anon_sym_AMP_AMP] = ACTIONS(435),
    [anon_sym_PIPE_PIPE] = ACTIONS(435),
    [anon_sym_QMARK_QMARK] = ACTIONS(435),
    [anon_sym_EQ] = ACTIONS(437),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(435),
    [sym_number] = ACTIONS(437),
    [anon_sym_true] = ACTIONS(437),
    [anon_sym_LBRACK] = ACTIONS(435),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(437),
    [anon_sym_DOT] = ACTIONS(437),
    [anon_sym_SLASH_GT] = ACTIONS(435),
  },
  [179] = {
    [sym_expression] = STATE(174),
    [sym_type] = STATE(86),
    [sym_operator] = STATE(84),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_interpolation_repeat1] = STATE(174),
    [aux_sym_as_expression_repeat1] = STATE(86),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(780),
    [anon_sym_using] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT_DOT_LT] = ACTIONS(143),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_lt] = ACTIONS(141),
    [anon_sym_lte] = ACTIONS(141),
    [anon_sym_gt] = ACTIONS(141),
    [anon_sym_gte] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_QMARK_QMARK] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(145),
    [sym_number] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(151),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(153),
    [anon_sym_DOT] = ACTIONS(155),
  },
  [180] = {
    [sym_type] = STATE(273),
    [sym_string] = STATE(94),
    [sym_boolean] = STATE(94),
    [sym_sequence] = STATE(94),
    [sym_hash] = STATE(94),
    [sym_top_level] = STATE(94),
    [sym_spec_var] = STATE(94),
    [aux_sym_as_expression_repeat2] = STATE(273),
    [anon_sym_LBRACE] = ACTIONS(441),
    [anon_sym_as] = ACTIONS(443),
    [anon_sym_QMARK] = ACTIONS(443),
    [anon_sym_GT] = ACTIONS(441),
    [anon_sym_using] = ACTIONS(443),
    [anon_sym_COMMA] = ACTIONS(441),
    [anon_sym_DOT_DOT] = ACTIONS(443),
    [anon_sym_DOT_DOT_LT] = ACTIONS(441),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(441),
    [anon_sym_COLON] = ACTIONS(441),
    [anon_sym_STAR] = ACTIONS(441),
    [anon_sym_PLUS] = ACTIONS(441),
    [anon_sym_SLASH] = ACTIONS(443),
    [anon_sym_DASH] = ACTIONS(441),
    [anon_sym_PERCENT] = ACTIONS(441),
    [anon_sym_EQ_EQ] = ACTIONS(441),
    [anon_sym_BANG_EQ] = ACTIONS(441),
    [anon_sym_LT] = ACTIONS(443),
    [anon_sym_LT_EQ] = ACTIONS(441),
    [anon_sym_lt] = ACTIONS(443),
    [anon_sym_lte] = ACTIONS(443),
    [anon_sym_gt] = ACTIONS(443),
    [anon_sym_gte] = ACTIONS(443),
    [anon_sym_BANG] = ACTIONS(443),
    [anon_sym_AMP_AMP] = ACTIONS(441),
    [anon_sym_PIPE_PIPE] = ACTIONS(441),
    [anon_sym_QMARK_QMARK] = ACTIONS(441),
    [anon_sym_EQ] = ACTIONS(443),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(441),
    [sym_number] = ACTIONS(443),
    [anon_sym_true] = ACTIONS(443),
    [anon_sym_LBRACK] = ACTIONS(441),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(443),
    [anon_sym_DOT] = ACTIONS(443),
    [anon_sym_SLASH_GT] = ACTIONS(441),
  },
  [181] = {
    [sym_group] = STATE(188),
    [aux_sym_top_level_repeat1] = STATE(274),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_as] = ACTIONS(207),
    [anon_sym_QMARK] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_GT] = ACTIONS(205),
    [anon_sym_using] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_DOT_DOT] = ACTIONS(207),
    [anon_sym_DOT_DOT_LT] = ACTIONS(205),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(205),
    [anon_sym_COLON] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_PLUS] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_PERCENT] = ACTIONS(205),
    [anon_sym_EQ_EQ] = ACTIONS(205),
    [anon_sym_BANG_EQ] = ACTIONS(205),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_LT_EQ] = ACTIONS(205),
    [anon_sym_lt] = ACTIONS(207),
    [anon_sym_lte] = ACTIONS(207),
    [anon_sym_gt] = ACTIONS(207),
    [anon_sym_gte] = ACTIONS(207),
    [anon_sym_BANG] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(205),
    [anon_sym_PIPE_PIPE] = ACTIONS(205),
    [anon_sym_QMARK_QMARK] = ACTIONS(205),
    [anon_sym_EQ] = ACTIONS(207),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(205),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(205),
    [sym_number] = ACTIONS(207),
    [anon_sym_true] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(205),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(207),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(427),
    [anon_sym_DOT] = ACTIONS(207),
    [anon_sym_SLASH_GT] = ACTIONS(205),
  },
  [182] = {
    [sym_group] = STATE(275),
    [anon_sym_LBRACE] = ACTIONS(445),
    [anon_sym_as] = ACTIONS(447),
    [anon_sym_QMARK] = ACTIONS(447),
    [anon_sym_LPAREN] = ACTIONS(425),
    [anon_sym_GT] = ACTIONS(445),
    [anon_sym_using] = ACTIONS(447),
    [anon_sym_COMMA] = ACTIONS(445),
    [anon_sym_DOT_DOT] = ACTIONS(447),
    [anon_sym_DOT_DOT_LT] = ACTIONS(445),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(445),
    [anon_sym_COLON] = ACTIONS(445),
    [anon_sym_STAR] = ACTIONS(445),
    [anon_sym_PLUS] = ACTIONS(445),
    [anon_sym_SLASH] = ACTIONS(447),
    [anon_sym_DASH] = ACTIONS(445),
    [anon_sym_PERCENT] = ACTIONS(445),
    [anon_sym_EQ_EQ] = ACTIONS(445),
    [anon_sym_BANG_EQ] = ACTIONS(445),
    [anon_sym_LT] = ACTIONS(447),
    [anon_sym_LT_EQ] = ACTIONS(445),
    [anon_sym_lt] = ACTIONS(447),
    [anon_sym_lte] = ACTIONS(447),
    [anon_sym_gt] = ACTIONS(447),
    [anon_sym_gte] = ACTIONS(447),
    [anon_sym_BANG] = ACTIONS(447),
    [anon_sym_AMP_AMP] = ACTIONS(445),
    [anon_sym_PIPE_PIPE] = ACTIONS(445),
    [anon_sym_QMARK_QMARK] = ACTIONS(445),
    [anon_sym_EQ] = ACTIONS(447),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(445),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(445),
    [sym_number] = ACTIONS(447),
    [anon_sym_true] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(445),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(447),
    [anon_sym_DOT] = ACTIONS(447),
    [anon_sym_SLASH_GT] = ACTIONS(445),
  },
  [183] = {
    [anon_sym_LBRACE] = ACTIONS(449),
    [anon_sym_as] = ACTIONS(451),
    [anon_sym_QMARK] = ACTIONS(451),
    [anon_sym_GT] = ACTIONS(449),
    [anon_sym_using] = ACTIONS(451),
    [anon_sym_COMMA] = ACTIONS(449),
    [anon_sym_DOT_DOT] = ACTIONS(451),
    [anon_sym_DOT_DOT_LT] = ACTIONS(449),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(449),
    [anon_sym_COLON] = ACTIONS(449),
    [anon_sym_STAR] = ACTIONS(449),
    [anon_sym_PLUS] = ACTIONS(449),
    [anon_sym_SLASH] = ACTIONS(451),
    [anon_sym_DASH] = ACTIONS(449),
    [anon_sym_PERCENT] = ACTIONS(449),
    [anon_sym_EQ_EQ] = ACTIONS(449),
    [anon_sym_BANG_EQ] = ACTIONS(449),
    [anon_sym_LT] = ACTIONS(451),
    [anon_sym_LT_EQ] = ACTIONS(449),
    [anon_sym_lt] = ACTIONS(451),
    [anon_sym_lte] = ACTIONS(451),
    [anon_sym_gt] = ACTIONS(451),
    [anon_sym_gte] = ACTIONS(451),
    [anon_sym_BANG] = ACTIONS(451),
    [anon_sym_AMP_AMP] = ACTIONS(449),
    [anon_sym_PIPE_PIPE] = ACTIONS(449),
    [anon_sym_QMARK_QMARK] = ACTIONS(449),
    [anon_sym_EQ] = ACTIONS(451),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(449),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(449),
    [sym_number] = ACTIONS(451),
    [anon_sym_true] = ACTIONS(451),
    [anon_sym_LBRACK] = ACTIONS(449),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(451),
    [anon_sym_DOT] = ACTIONS(451),
    [anon_sym_SLASH_GT] = ACTIONS(449),
  },
  [184] = {
    [anon_sym_LBRACE] = ACTIONS(453),
    [anon_sym_as] = ACTIONS(455),
    [anon_sym_QMARK] = ACTIONS(455),
    [anon_sym_GT] = ACTIONS(453),
    [anon_sym_using] = ACTIONS(455),
    [anon_sym_COMMA] = ACTIONS(453),
    [anon_sym_DOT_DOT] = ACTIONS(455),
    [anon_sym_DOT_DOT_LT] = ACTIONS(453),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(453),
    [anon_sym_STAR] = ACTIONS(453),
    [anon_sym_PLUS] = ACTIONS(453),
    [anon_sym_SLASH] = ACTIONS(455),
    [anon_sym_DASH] = ACTIONS(453),
    [anon_sym_PERCENT] = ACTIONS(453),
    [anon_sym_EQ_EQ] = ACTIONS(453),
    [anon_sym_BANG_EQ] = ACTIONS(453),
    [anon_sym_LT] = ACTIONS(455),
    [anon_sym_LT_EQ] = ACTIONS(453),
    [anon_sym_lt] = ACTIONS(455),
    [anon_sym_lte] = ACTIONS(455),
    [anon_sym_gt] = ACTIONS(455),
    [anon_sym_gte] = ACTIONS(455),
    [anon_sym_BANG] = ACTIONS(455),
    [anon_sym_AMP_AMP] = ACTIONS(453),
    [anon_sym_PIPE_PIPE] = ACTIONS(453),
    [anon_sym_QMARK_QMARK] = ACTIONS(453),
    [anon_sym_EQ] = ACTIONS(455),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(453),
    [sym_number] = ACTIONS(455),
    [anon_sym_true] = ACTIONS(455),
    [anon_sym_LBRACK] = ACTIONS(453),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(455),
    [anon_sym_DOT] = ACTIONS(455),
    [anon_sym_SLASH_GT] = ACTIONS(453),
  },
  [185] = {
    [sym_expression] = STATE(111),
    [sym_type] = STATE(113),
    [sym_operator] = STATE(112),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_as_expression_repeat1] = STATE(113),
    [aux_sym_sequence_repeat1] = STATE(207),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_using] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT_DOT_LT] = ACTIONS(143),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_lt] = ACTIONS(141),
    [anon_sym_lte] = ACTIONS(141),
    [anon_sym_gt] = ACTIONS(141),
    [anon_sym_gte] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_QMARK_QMARK] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(145),
    [sym_number] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(782),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(155),
  },
  [186] = {
    [sym_parameter_group] = STATE(278),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(213),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(212),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(213),
    [aux_sym_group_repeat1] = STATE(278),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(466),
    [anon_sym_QMARK] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(784),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(472),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [187] = {
    [anon_sym_LBRACE] = ACTIONS(474),
    [anon_sym_as] = ACTIONS(476),
    [anon_sym_QMARK] = ACTIONS(476),
    [anon_sym_LPAREN] = ACTIONS(474),
    [anon_sym_GT] = ACTIONS(474),
    [anon_sym_using] = ACTIONS(476),
    [anon_sym_COMMA] = ACTIONS(474),
    [anon_sym_DOT_DOT] = ACTIONS(476),
    [anon_sym_DOT_DOT_LT] = ACTIONS(474),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(474),
    [anon_sym_COLON] = ACTIONS(474),
    [anon_sym_STAR] = ACTIONS(474),
    [anon_sym_PLUS] = ACTIONS(474),
    [anon_sym_SLASH] = ACTIONS(476),
    [anon_sym_DASH] = ACTIONS(474),
    [anon_sym_PERCENT] = ACTIONS(474),
    [anon_sym_EQ_EQ] = ACTIONS(474),
    [anon_sym_BANG_EQ] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(476),
    [anon_sym_LT_EQ] = ACTIONS(474),
    [anon_sym_lt] = ACTIONS(476),
    [anon_sym_lte] = ACTIONS(476),
    [anon_sym_gt] = ACTIONS(476),
    [anon_sym_gte] = ACTIONS(476),
    [anon_sym_BANG] = ACTIONS(476),
    [anon_sym_AMP_AMP] = ACTIONS(474),
    [anon_sym_PIPE_PIPE] = ACTIONS(474),
    [anon_sym_QMARK_QMARK] = ACTIONS(474),
    [anon_sym_EQ] = ACTIONS(476),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(474),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(474),
    [sym_number] = ACTIONS(476),
    [anon_sym_true] = ACTIONS(476),
    [anon_sym_LBRACK] = ACTIONS(474),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(476),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(474),
    [anon_sym_DOT] = ACTIONS(476),
    [anon_sym_SLASH_GT] = ACTIONS(474),
  },
  [188] = {
    [anon_sym_LBRACE] = ACTIONS(478),
    [anon_sym_as] = ACTIONS(480),
    [anon_sym_QMARK] = ACTIONS(480),
    [anon_sym_LPAREN] = ACTIONS(478),
    [anon_sym_GT] = ACTIONS(478),
    [anon_sym_using] = ACTIONS(480),
    [anon_sym_COMMA] = ACTIONS(478),
    [anon_sym_DOT_DOT] = ACTIONS(480),
    [anon_sym_DOT_DOT_LT] = ACTIONS(478),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(478),
    [anon_sym_COLON] = ACTIONS(478),
    [anon_sym_STAR] = ACTIONS(478),
    [anon_sym_PLUS] = ACTIONS(478),
    [anon_sym_SLASH] = ACTIONS(480),
    [anon_sym_DASH] = ACTIONS(478),
    [anon_sym_PERCENT] = ACTIONS(478),
    [anon_sym_EQ_EQ] = ACTIONS(478),
    [anon_sym_BANG_EQ] = ACTIONS(478),
    [anon_sym_LT] = ACTIONS(480),
    [anon_sym_LT_EQ] = ACTIONS(478),
    [anon_sym_lt] = ACTIONS(480),
    [anon_sym_lte] = ACTIONS(480),
    [anon_sym_gt] = ACTIONS(480),
    [anon_sym_gte] = ACTIONS(480),
    [anon_sym_BANG] = ACTIONS(480),
    [anon_sym_AMP_AMP] = ACTIONS(478),
    [anon_sym_PIPE_PIPE] = ACTIONS(478),
    [anon_sym_QMARK_QMARK] = ACTIONS(478),
    [anon_sym_EQ] = ACTIONS(480),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(478),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(478),
    [sym_number] = ACTIONS(480),
    [anon_sym_true] = ACTIONS(480),
    [anon_sym_LBRACK] = ACTIONS(478),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(480),
    [anon_sym_DOT] = ACTIONS(480),
    [anon_sym_SLASH_GT] = ACTIONS(478),
  },
  [189] = {
    [sym_group] = STATE(279),
    [aux_sym_top_level_repeat1] = STATE(280),
    [anon_sym_LBRACE] = ACTIONS(482),
    [anon_sym_as] = ACTIONS(484),
    [anon_sym_QMARK] = ACTIONS(484),
    [anon_sym_LPAREN] = ACTIONS(425),
    [anon_sym_GT] = ACTIONS(482),
    [anon_sym_using] = ACTIONS(484),
    [anon_sym_COMMA] = ACTIONS(482),
    [anon_sym_DOT_DOT] = ACTIONS(484),
    [anon_sym_DOT_DOT_LT] = ACTIONS(482),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(482),
    [anon_sym_COLON] = ACTIONS(482),
    [anon_sym_STAR] = ACTIONS(482),
    [anon_sym_PLUS] = ACTIONS(482),
    [anon_sym_SLASH] = ACTIONS(484),
    [anon_sym_DASH] = ACTIONS(482),
    [anon_sym_PERCENT] = ACTIONS(482),
    [anon_sym_EQ_EQ] = ACTIONS(482),
    [anon_sym_BANG_EQ] = ACTIONS(482),
    [anon_sym_LT] = ACTIONS(484),
    [anon_sym_LT_EQ] = ACTIONS(482),
    [anon_sym_lt] = ACTIONS(484),
    [anon_sym_lte] = ACTIONS(484),
    [anon_sym_gt] = ACTIONS(484),
    [anon_sym_gte] = ACTIONS(484),
    [anon_sym_BANG] = ACTIONS(484),
    [anon_sym_AMP_AMP] = ACTIONS(482),
    [anon_sym_PIPE_PIPE] = ACTIONS(482),
    [anon_sym_QMARK_QMARK] = ACTIONS(482),
    [anon_sym_EQ] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(482),
    [sym_number] = ACTIONS(484),
    [anon_sym_true] = ACTIONS(484),
    [anon_sym_LBRACK] = ACTIONS(482),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(427),
    [anon_sym_DOT] = ACTIONS(484),
    [anon_sym_SLASH_GT] = ACTIONS(482),
  },
  [190] = {
    [anon_sym_LBRACE] = ACTIONS(486),
    [anon_sym_as] = ACTIONS(488),
    [anon_sym_QMARK] = ACTIONS(488),
    [anon_sym_GT] = ACTIONS(486),
    [anon_sym_using] = ACTIONS(488),
    [anon_sym_COMMA] = ACTIONS(486),
    [anon_sym_DOT_DOT] = ACTIONS(488),
    [anon_sym_DOT_DOT_LT] = ACTIONS(486),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(486),
    [anon_sym_COLON] = ACTIONS(486),
    [anon_sym_STAR] = ACTIONS(486),
    [anon_sym_PLUS] = ACTIONS(486),
    [anon_sym_SLASH] = ACTIONS(488),
    [anon_sym_DASH] = ACTIONS(486),
    [anon_sym_PERCENT] = ACTIONS(486),
    [anon_sym_EQ_EQ] = ACTIONS(486),
    [anon_sym_BANG_EQ] = ACTIONS(486),
    [anon_sym_LT] = ACTIONS(488),
    [anon_sym_LT_EQ] = ACTIONS(486),
    [anon_sym_lt] = ACTIONS(488),
    [anon_sym_lte] = ACTIONS(488),
    [anon_sym_gt] = ACTIONS(488),
    [anon_sym_gte] = ACTIONS(488),
    [anon_sym_BANG] = ACTIONS(488),
    [anon_sym_AMP_AMP] = ACTIONS(486),
    [anon_sym_PIPE_PIPE] = ACTIONS(486),
    [anon_sym_QMARK_QMARK] = ACTIONS(486),
    [anon_sym_EQ] = ACTIONS(488),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(486),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(486),
    [sym_number] = ACTIONS(488),
    [anon_sym_true] = ACTIONS(488),
    [anon_sym_LBRACK] = ACTIONS(486),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(488),
    [anon_sym_DOT] = ACTIONS(488),
    [anon_sym_SLASH_GT] = ACTIONS(486),
  },
  [191] = {
    [sym_type] = STATE(273),
    [sym_string] = STATE(94),
    [sym_boolean] = STATE(94),
    [sym_sequence] = STATE(94),
    [sym_hash] = STATE(94),
    [sym_top_level] = STATE(94),
    [sym_spec_var] = STATE(94),
    [aux_sym_as_expression_repeat2] = STATE(273),
    [anon_sym_LBRACE] = ACTIONS(490),
    [anon_sym_as] = ACTIONS(492),
    [anon_sym_QMARK] = ACTIONS(492),
    [anon_sym_GT] = ACTIONS(490),
    [anon_sym_using] = ACTIONS(492),
    [anon_sym_COMMA] = ACTIONS(490),
    [anon_sym_DOT_DOT] = ACTIONS(492),
    [anon_sym_DOT_DOT_LT] = ACTIONS(490),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(490),
    [anon_sym_COLON] = ACTIONS(490),
    [anon_sym_STAR] = ACTIONS(490),
    [anon_sym_PLUS] = ACTIONS(490),
    [anon_sym_SLASH] = ACTIONS(492),
    [anon_sym_DASH] = ACTIONS(490),
    [anon_sym_PERCENT] = ACTIONS(490),
    [anon_sym_EQ_EQ] = ACTIONS(490),
    [anon_sym_BANG_EQ] = ACTIONS(490),
    [anon_sym_LT] = ACTIONS(492),
    [anon_sym_LT_EQ] = ACTIONS(490),
    [anon_sym_lt] = ACTIONS(492),
    [anon_sym_lte] = ACTIONS(492),
    [anon_sym_gt] = ACTIONS(492),
    [anon_sym_gte] = ACTIONS(492),
    [anon_sym_BANG] = ACTIONS(492),
    [anon_sym_AMP_AMP] = ACTIONS(490),
    [anon_sym_PIPE_PIPE] = ACTIONS(490),
    [anon_sym_QMARK_QMARK] = ACTIONS(490),
    [anon_sym_EQ] = ACTIONS(492),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(490),
    [sym_number] = ACTIONS(492),
    [anon_sym_true] = ACTIONS(492),
    [anon_sym_LBRACK] = ACTIONS(490),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(492),
    [anon_sym_DOT] = ACTIONS(492),
    [anon_sym_SLASH_GT] = ACTIONS(490),
  },
  [192] = {
    [sym_type] = STATE(281),
    [sym_string] = STATE(94),
    [sym_boolean] = STATE(94),
    [sym_sequence] = STATE(94),
    [sym_hash] = STATE(94),
    [sym_top_level] = STATE(94),
    [sym_spec_var] = STATE(94),
    [aux_sym_as_expression_repeat2] = STATE(281),
    [anon_sym_LBRACE] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(169),
    [sym_number] = ACTIONS(171),
    [anon_sym_true] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(175),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(413),
  },
  [193] = {
    [sym_type] = STATE(282),
    [sym_string] = STATE(94),
    [sym_boolean] = STATE(94),
    [sym_sequence] = STATE(94),
    [sym_hash] = STATE(94),
    [sym_top_level] = STATE(94),
    [sym_spec_var] = STATE(94),
    [aux_sym_as_expression_repeat2] = STATE(282),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_as] = ACTIONS(492),
    [anon_sym_QMARK] = ACTIONS(492),
    [anon_sym_GT] = ACTIONS(490),
    [anon_sym_using] = ACTIONS(492),
    [anon_sym_COMMA] = ACTIONS(490),
    [anon_sym_DOT_DOT] = ACTIONS(492),
    [anon_sym_DOT_DOT_LT] = ACTIONS(490),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(490),
    [anon_sym_COLON] = ACTIONS(490),
    [anon_sym_STAR] = ACTIONS(490),
    [anon_sym_PLUS] = ACTIONS(490),
    [anon_sym_SLASH] = ACTIONS(492),
    [anon_sym_DASH] = ACTIONS(490),
    [anon_sym_PERCENT] = ACTIONS(490),
    [anon_sym_EQ_EQ] = ACTIONS(490),
    [anon_sym_BANG_EQ] = ACTIONS(490),
    [anon_sym_LT] = ACTIONS(492),
    [anon_sym_LT_EQ] = ACTIONS(490),
    [anon_sym_lt] = ACTIONS(492),
    [anon_sym_lte] = ACTIONS(492),
    [anon_sym_gt] = ACTIONS(492),
    [anon_sym_gte] = ACTIONS(492),
    [anon_sym_BANG] = ACTIONS(492),
    [anon_sym_AMP_AMP] = ACTIONS(490),
    [anon_sym_PIPE_PIPE] = ACTIONS(490),
    [anon_sym_QMARK_QMARK] = ACTIONS(490),
    [anon_sym_EQ] = ACTIONS(492),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(169),
    [sym_number] = ACTIONS(171),
    [anon_sym_true] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(175),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(179),
    [anon_sym_SLASH_GT] = ACTIONS(490),
  },
  [194] = {
    [sym_type] = STATE(194),
    [sym_string] = STATE(94),
    [sym_boolean] = STATE(94),
    [sym_sequence] = STATE(94),
    [sym_hash] = STATE(94),
    [sym_top_level] = STATE(94),
    [sym_spec_var] = STATE(94),
    [aux_sym_as_expression_repeat1] = STATE(194),
    [anon_sym_LBRACE] = ACTIONS(786),
    [anon_sym_as] = ACTIONS(497),
    [anon_sym_QMARK] = ACTIONS(497),
    [anon_sym_GT] = ACTIONS(499),
    [anon_sym_using] = ACTIONS(497),
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_DOT_DOT] = ACTIONS(497),
    [anon_sym_DOT_DOT_LT] = ACTIONS(499),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(499),
    [anon_sym_COLON] = ACTIONS(499),
    [anon_sym_STAR] = ACTIONS(499),
    [anon_sym_PLUS] = ACTIONS(499),
    [anon_sym_SLASH] = ACTIONS(497),
    [anon_sym_DASH] = ACTIONS(499),
    [anon_sym_PERCENT] = ACTIONS(499),
    [anon_sym_EQ_EQ] = ACTIONS(499),
    [anon_sym_BANG_EQ] = ACTIONS(499),
    [anon_sym_LT] = ACTIONS(497),
    [anon_sym_LT_EQ] = ACTIONS(499),
    [anon_sym_lt] = ACTIONS(497),
    [anon_sym_lte] = ACTIONS(497),
    [anon_sym_gt] = ACTIONS(497),
    [anon_sym_gte] = ACTIONS(497),
    [anon_sym_BANG] = ACTIONS(497),
    [anon_sym_AMP_AMP] = ACTIONS(499),
    [anon_sym_PIPE_PIPE] = ACTIONS(499),
    [anon_sym_QMARK_QMARK] = ACTIONS(499),
    [anon_sym_EQ] = ACTIONS(497),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(789),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(789),
    [sym_number] = ACTIONS(792),
    [anon_sym_true] = ACTIONS(795),
    [anon_sym_LBRACK] = ACTIONS(798),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(801),
    [anon_sym_DOT] = ACTIONS(804),
    [anon_sym_SLASH_GT] = ACTIONS(499),
  },
  [195] = {
    [ts_builtin_sym_end] = ACTIONS(807),
    [sym_comment] = ACTIONS(807),
    [anon_sym_DOLLAR] = ACTIONS(807),
    [anon_sym_LT_POUND] = ACTIONS(809),
    [anon_sym_LT_AT] = ACTIONS(807),
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
  [196] = {
    [sym_parameter_group] = STATE(196),
    [sym_as_expression] = STATE(99),
    [sym_expression] = STATE(99),
    [sym_type] = STATE(101),
    [sym_built_in] = STATE(99),
    [sym_operator] = STATE(100),
    [sym_string] = STATE(94),
    [sym_boolean] = STATE(94),
    [sym_sequence] = STATE(94),
    [sym_hash] = STATE(94),
    [sym_top_level] = STATE(94),
    [sym_spec_var] = STATE(94),
    [aux_sym_as_expression_repeat1] = STATE(101),
    [aux_sym_group_repeat1] = STATE(196),
    [anon_sym_LBRACE] = ACTIONS(811),
    [anon_sym_as] = ACTIONS(814),
    [anon_sym_QMARK] = ACTIONS(817),
    [anon_sym_GT] = ACTIONS(534),
    [anon_sym_using] = ACTIONS(820),
    [anon_sym_COMMA] = ACTIONS(823),
    [anon_sym_DOT_DOT] = ACTIONS(820),
    [anon_sym_DOT_DOT_LT] = ACTIONS(823),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(823),
    [anon_sym_COLON] = ACTIONS(823),
    [anon_sym_STAR] = ACTIONS(823),
    [anon_sym_PLUS] = ACTIONS(823),
    [anon_sym_SLASH] = ACTIONS(820),
    [anon_sym_DASH] = ACTIONS(823),
    [anon_sym_PERCENT] = ACTIONS(823),
    [anon_sym_EQ_EQ] = ACTIONS(823),
    [anon_sym_BANG_EQ] = ACTIONS(823),
    [anon_sym_LT] = ACTIONS(820),
    [anon_sym_LT_EQ] = ACTIONS(823),
    [anon_sym_lt] = ACTIONS(820),
    [anon_sym_lte] = ACTIONS(820),
    [anon_sym_gt] = ACTIONS(820),
    [anon_sym_gte] = ACTIONS(820),
    [anon_sym_BANG] = ACTIONS(820),
    [anon_sym_AMP_AMP] = ACTIONS(823),
    [anon_sym_PIPE_PIPE] = ACTIONS(823),
    [anon_sym_QMARK_QMARK] = ACTIONS(823),
    [anon_sym_EQ] = ACTIONS(820),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(826),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(826),
    [sym_number] = ACTIONS(829),
    [anon_sym_true] = ACTIONS(832),
    [anon_sym_LBRACK] = ACTIONS(835),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(838),
    [anon_sym_DOT] = ACTIONS(841),
    [anon_sym_SLASH_GT] = ACTIONS(534),
  },
  [197] = {
    [anon_sym_LBRACE] = ACTIONS(844),
    [anon_sym_as] = ACTIONS(846),
    [anon_sym_QMARK] = ACTIONS(846),
    [anon_sym_RPAREN] = ACTIONS(844),
    [anon_sym_GT] = ACTIONS(844),
    [anon_sym_using] = ACTIONS(846),
    [anon_sym_COMMA] = ACTIONS(844),
    [anon_sym_DOT_DOT] = ACTIONS(846),
    [anon_sym_DOT_DOT_LT] = ACTIONS(844),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(844),
    [anon_sym_COLON] = ACTIONS(844),
    [anon_sym_STAR] = ACTIONS(844),
    [anon_sym_PLUS] = ACTIONS(844),
    [anon_sym_SLASH] = ACTIONS(844),
    [anon_sym_DASH] = ACTIONS(844),
    [anon_sym_PERCENT] = ACTIONS(844),
    [anon_sym_EQ_EQ] = ACTIONS(844),
    [anon_sym_BANG_EQ] = ACTIONS(844),
    [anon_sym_LT] = ACTIONS(846),
    [anon_sym_LT_EQ] = ACTIONS(844),
    [anon_sym_lt] = ACTIONS(846),
    [anon_sym_lte] = ACTIONS(846),
    [anon_sym_gt] = ACTIONS(846),
    [anon_sym_gte] = ACTIONS(846),
    [anon_sym_BANG] = ACTIONS(846),
    [anon_sym_AMP_AMP] = ACTIONS(844),
    [anon_sym_PIPE_PIPE] = ACTIONS(844),
    [anon_sym_QMARK_QMARK] = ACTIONS(844),
    [anon_sym_EQ] = ACTIONS(846),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(844),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(844),
    [sym_number] = ACTIONS(846),
    [anon_sym_true] = ACTIONS(846),
    [anon_sym_LBRACK] = ACTIONS(844),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(846),
    [anon_sym_DOT] = ACTIONS(846),
  },
  [198] = {
    [sym_type] = STATE(198),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat2] = STATE(198),
    [anon_sym_LBRACE] = ACTIONS(848),
    [anon_sym_as] = ACTIONS(851),
    [anon_sym_QMARK] = ACTIONS(851),
    [anon_sym_GT] = ACTIONS(853),
    [anon_sym_using] = ACTIONS(851),
    [anon_sym_COMMA] = ACTIONS(853),
    [anon_sym_DOT_DOT] = ACTIONS(851),
    [anon_sym_DOT_DOT_LT] = ACTIONS(853),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(853),
    [anon_sym_COLON] = ACTIONS(853),
    [anon_sym_STAR] = ACTIONS(853),
    [anon_sym_PLUS] = ACTIONS(853),
    [anon_sym_SLASH] = ACTIONS(853),
    [anon_sym_DASH] = ACTIONS(853),
    [anon_sym_PERCENT] = ACTIONS(853),
    [anon_sym_EQ_EQ] = ACTIONS(853),
    [anon_sym_BANG_EQ] = ACTIONS(853),
    [anon_sym_LT] = ACTIONS(851),
    [anon_sym_LT_EQ] = ACTIONS(853),
    [anon_sym_lt] = ACTIONS(851),
    [anon_sym_lte] = ACTIONS(851),
    [anon_sym_gt] = ACTIONS(851),
    [anon_sym_gte] = ACTIONS(851),
    [anon_sym_BANG] = ACTIONS(851),
    [anon_sym_AMP_AMP] = ACTIONS(853),
    [anon_sym_PIPE_PIPE] = ACTIONS(853),
    [anon_sym_QMARK_QMARK] = ACTIONS(853),
    [anon_sym_EQ] = ACTIONS(851),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(855),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(855),
    [sym_number] = ACTIONS(858),
    [anon_sym_true] = ACTIONS(861),
    [anon_sym_LBRACK] = ACTIONS(864),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(867),
    [anon_sym_DOT] = ACTIONS(870),
  },
  [199] = {
    [sym_group] = STATE(215),
    [aux_sym_top_level_repeat1] = STATE(216),
    [anon_sym_LBRACE] = ACTIONS(482),
    [anon_sym_as] = ACTIONS(484),
    [anon_sym_QMARK] = ACTIONS(484),
    [anon_sym_LPAREN] = ACTIONS(482),
    [anon_sym_GT] = ACTIONS(482),
    [anon_sym_using] = ACTIONS(484),
    [anon_sym_COMMA] = ACTIONS(482),
    [anon_sym_DOT_DOT] = ACTIONS(484),
    [anon_sym_DOT_DOT_LT] = ACTIONS(482),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(482),
    [anon_sym_COLON] = ACTIONS(482),
    [anon_sym_STAR] = ACTIONS(482),
    [anon_sym_PLUS] = ACTIONS(482),
    [anon_sym_SLASH] = ACTIONS(482),
    [anon_sym_DASH] = ACTIONS(482),
    [anon_sym_PERCENT] = ACTIONS(482),
    [anon_sym_EQ_EQ] = ACTIONS(482),
    [anon_sym_BANG_EQ] = ACTIONS(482),
    [anon_sym_LT] = ACTIONS(484),
    [anon_sym_LT_EQ] = ACTIONS(482),
    [anon_sym_lt] = ACTIONS(484),
    [anon_sym_lte] = ACTIONS(484),
    [anon_sym_gt] = ACTIONS(484),
    [anon_sym_gte] = ACTIONS(484),
    [anon_sym_BANG] = ACTIONS(484),
    [anon_sym_AMP_AMP] = ACTIONS(482),
    [anon_sym_PIPE_PIPE] = ACTIONS(482),
    [anon_sym_QMARK_QMARK] = ACTIONS(482),
    [anon_sym_EQ] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(482),
    [sym_number] = ACTIONS(484),
    [anon_sym_true] = ACTIONS(484),
    [anon_sym_LBRACK] = ACTIONS(482),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(484),
  },
  [200] = {
    [anon_sym_LBRACE] = ACTIONS(873),
    [anon_sym_as] = ACTIONS(875),
    [anon_sym_QMARK] = ACTIONS(875),
    [anon_sym_RPAREN] = ACTIONS(873),
    [anon_sym_GT] = ACTIONS(873),
    [anon_sym_using] = ACTIONS(875),
    [anon_sym_COMMA] = ACTIONS(873),
    [anon_sym_DOT_DOT] = ACTIONS(875),
    [anon_sym_DOT_DOT_LT] = ACTIONS(873),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(873),
    [anon_sym_COLON] = ACTIONS(873),
    [anon_sym_STAR] = ACTIONS(873),
    [anon_sym_PLUS] = ACTIONS(873),
    [anon_sym_SLASH] = ACTIONS(873),
    [anon_sym_DASH] = ACTIONS(873),
    [anon_sym_PERCENT] = ACTIONS(873),
    [anon_sym_EQ_EQ] = ACTIONS(873),
    [anon_sym_BANG_EQ] = ACTIONS(873),
    [anon_sym_LT] = ACTIONS(875),
    [anon_sym_LT_EQ] = ACTIONS(873),
    [anon_sym_lt] = ACTIONS(875),
    [anon_sym_lte] = ACTIONS(875),
    [anon_sym_gt] = ACTIONS(875),
    [anon_sym_gte] = ACTIONS(875),
    [anon_sym_BANG] = ACTIONS(875),
    [anon_sym_AMP_AMP] = ACTIONS(873),
    [anon_sym_PIPE_PIPE] = ACTIONS(873),
    [anon_sym_QMARK_QMARK] = ACTIONS(873),
    [anon_sym_EQ] = ACTIONS(875),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(873),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(873),
    [sym_number] = ACTIONS(875),
    [anon_sym_true] = ACTIONS(875),
    [anon_sym_LBRACK] = ACTIONS(873),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(875),
    [anon_sym_DOT] = ACTIONS(875),
  },
  [201] = {
    [sym_group] = STATE(260),
    [aux_sym_top_level_repeat1] = STATE(283),
    [anon_sym_LBRACE] = ACTIONS(482),
    [anon_sym_LPAREN] = ACTIONS(401),
    [anon_sym_using] = ACTIONS(484),
    [anon_sym_COMMA] = ACTIONS(482),
    [anon_sym_DOT_DOT] = ACTIONS(484),
    [anon_sym_DOT_DOT_LT] = ACTIONS(482),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(482),
    [anon_sym_COLON] = ACTIONS(482),
    [anon_sym_STAR] = ACTIONS(482),
    [anon_sym_PLUS] = ACTIONS(482),
    [anon_sym_SLASH] = ACTIONS(482),
    [anon_sym_DASH] = ACTIONS(482),
    [anon_sym_PERCENT] = ACTIONS(482),
    [anon_sym_EQ_EQ] = ACTIONS(482),
    [anon_sym_BANG_EQ] = ACTIONS(482),
    [anon_sym_LT] = ACTIONS(484),
    [anon_sym_LT_EQ] = ACTIONS(482),
    [anon_sym_lt] = ACTIONS(484),
    [anon_sym_lte] = ACTIONS(484),
    [anon_sym_gt] = ACTIONS(484),
    [anon_sym_gte] = ACTIONS(484),
    [anon_sym_BANG] = ACTIONS(484),
    [anon_sym_AMP_AMP] = ACTIONS(482),
    [anon_sym_PIPE_PIPE] = ACTIONS(482),
    [anon_sym_QMARK_QMARK] = ACTIONS(482),
    [anon_sym_EQ] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(482),
    [sym_number] = ACTIONS(484),
    [anon_sym_true] = ACTIONS(484),
    [anon_sym_LBRACK] = ACTIONS(482),
    [anon_sym_RBRACK] = ACTIONS(482),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(403),
    [anon_sym_DOT] = ACTIONS(484),
  },
  [202] = {
    [anon_sym_LBRACE] = ACTIONS(877),
    [anon_sym_using] = ACTIONS(879),
    [anon_sym_COMMA] = ACTIONS(877),
    [anon_sym_DOT_DOT] = ACTIONS(879),
    [anon_sym_DOT_DOT_LT] = ACTIONS(877),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(877),
    [anon_sym_COLON] = ACTIONS(877),
    [anon_sym_STAR] = ACTIONS(877),
    [anon_sym_PLUS] = ACTIONS(877),
    [anon_sym_SLASH] = ACTIONS(877),
    [anon_sym_DASH] = ACTIONS(877),
    [anon_sym_PERCENT] = ACTIONS(877),
    [anon_sym_EQ_EQ] = ACTIONS(877),
    [anon_sym_BANG_EQ] = ACTIONS(877),
    [anon_sym_LT] = ACTIONS(879),
    [anon_sym_LT_EQ] = ACTIONS(877),
    [anon_sym_lt] = ACTIONS(879),
    [anon_sym_lte] = ACTIONS(879),
    [anon_sym_gt] = ACTIONS(879),
    [anon_sym_gte] = ACTIONS(879),
    [anon_sym_BANG] = ACTIONS(879),
    [anon_sym_AMP_AMP] = ACTIONS(877),
    [anon_sym_PIPE_PIPE] = ACTIONS(877),
    [anon_sym_QMARK_QMARK] = ACTIONS(877),
    [anon_sym_EQ] = ACTIONS(879),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(877),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(877),
    [sym_number] = ACTIONS(879),
    [anon_sym_true] = ACTIONS(879),
    [anon_sym_LBRACK] = ACTIONS(877),
    [anon_sym_RBRACK] = ACTIONS(877),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(879),
    [anon_sym_DOT] = ACTIONS(879),
  },
  [203] = {
    [sym_type] = STATE(284),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_as_expression_repeat2] = STATE(284),
    [anon_sym_LBRACE] = ACTIONS(490),
    [anon_sym_using] = ACTIONS(492),
    [anon_sym_COMMA] = ACTIONS(490),
    [anon_sym_DOT_DOT] = ACTIONS(492),
    [anon_sym_DOT_DOT_LT] = ACTIONS(490),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(490),
    [anon_sym_COLON] = ACTIONS(490),
    [anon_sym_STAR] = ACTIONS(490),
    [anon_sym_PLUS] = ACTIONS(490),
    [anon_sym_SLASH] = ACTIONS(490),
    [anon_sym_DASH] = ACTIONS(490),
    [anon_sym_PERCENT] = ACTIONS(490),
    [anon_sym_EQ_EQ] = ACTIONS(490),
    [anon_sym_BANG_EQ] = ACTIONS(490),
    [anon_sym_LT] = ACTIONS(492),
    [anon_sym_LT_EQ] = ACTIONS(490),
    [anon_sym_lt] = ACTIONS(492),
    [anon_sym_lte] = ACTIONS(492),
    [anon_sym_gt] = ACTIONS(492),
    [anon_sym_gte] = ACTIONS(492),
    [anon_sym_BANG] = ACTIONS(492),
    [anon_sym_AMP_AMP] = ACTIONS(490),
    [anon_sym_PIPE_PIPE] = ACTIONS(490),
    [anon_sym_QMARK_QMARK] = ACTIONS(490),
    [anon_sym_EQ] = ACTIONS(492),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(490),
    [sym_number] = ACTIONS(492),
    [anon_sym_true] = ACTIONS(492),
    [anon_sym_LBRACK] = ACTIONS(490),
    [anon_sym_RBRACK] = ACTIONS(490),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(492),
    [anon_sym_DOT] = ACTIONS(492),
  },
  [204] = {
    [sym_type] = STATE(285),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_as_expression_repeat2] = STATE(285),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_using] = ACTIONS(492),
    [anon_sym_COMMA] = ACTIONS(490),
    [anon_sym_DOT_DOT] = ACTIONS(492),
    [anon_sym_DOT_DOT_LT] = ACTIONS(490),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(490),
    [anon_sym_COLON] = ACTIONS(490),
    [anon_sym_STAR] = ACTIONS(490),
    [anon_sym_PLUS] = ACTIONS(490),
    [anon_sym_SLASH] = ACTIONS(490),
    [anon_sym_DASH] = ACTIONS(490),
    [anon_sym_PERCENT] = ACTIONS(490),
    [anon_sym_EQ_EQ] = ACTIONS(490),
    [anon_sym_BANG_EQ] = ACTIONS(490),
    [anon_sym_LT] = ACTIONS(492),
    [anon_sym_LT_EQ] = ACTIONS(490),
    [anon_sym_lt] = ACTIONS(492),
    [anon_sym_lte] = ACTIONS(492),
    [anon_sym_gt] = ACTIONS(492),
    [anon_sym_gte] = ACTIONS(492),
    [anon_sym_BANG] = ACTIONS(492),
    [anon_sym_AMP_AMP] = ACTIONS(490),
    [anon_sym_PIPE_PIPE] = ACTIONS(490),
    [anon_sym_QMARK_QMARK] = ACTIONS(490),
    [anon_sym_EQ] = ACTIONS(492),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(145),
    [sym_number] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(490),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(155),
  },
  [205] = {
    [sym_type] = STATE(205),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_as_expression_repeat1] = STATE(205),
    [anon_sym_LBRACE] = ACTIONS(749),
    [anon_sym_using] = ACTIONS(497),
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_DOT_DOT] = ACTIONS(497),
    [anon_sym_DOT_DOT_LT] = ACTIONS(499),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(499),
    [anon_sym_COLON] = ACTIONS(499),
    [anon_sym_STAR] = ACTIONS(499),
    [anon_sym_PLUS] = ACTIONS(499),
    [anon_sym_SLASH] = ACTIONS(499),
    [anon_sym_DASH] = ACTIONS(499),
    [anon_sym_PERCENT] = ACTIONS(499),
    [anon_sym_EQ_EQ] = ACTIONS(499),
    [anon_sym_BANG_EQ] = ACTIONS(499),
    [anon_sym_LT] = ACTIONS(497),
    [anon_sym_LT_EQ] = ACTIONS(499),
    [anon_sym_lt] = ACTIONS(497),
    [anon_sym_lte] = ACTIONS(497),
    [anon_sym_gt] = ACTIONS(497),
    [anon_sym_gte] = ACTIONS(497),
    [anon_sym_BANG] = ACTIONS(497),
    [anon_sym_AMP_AMP] = ACTIONS(499),
    [anon_sym_PIPE_PIPE] = ACTIONS(499),
    [anon_sym_QMARK_QMARK] = ACTIONS(499),
    [anon_sym_EQ] = ACTIONS(497),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(752),
    [sym_number] = ACTIONS(755),
    [anon_sym_true] = ACTIONS(758),
    [anon_sym_LBRACK] = ACTIONS(761),
    [anon_sym_RBRACK] = ACTIONS(499),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(881),
    [anon_sym_DOT] = ACTIONS(767),
  },
  [206] = {
    [anon_sym_LBRACE] = ACTIONS(884),
    [anon_sym_as] = ACTIONS(886),
    [anon_sym_QMARK] = ACTIONS(886),
    [anon_sym_RPAREN] = ACTIONS(884),
    [anon_sym_GT] = ACTIONS(884),
    [anon_sym_using] = ACTIONS(886),
    [anon_sym_COMMA] = ACTIONS(884),
    [anon_sym_DOT_DOT] = ACTIONS(886),
    [anon_sym_DOT_DOT_LT] = ACTIONS(884),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(884),
    [anon_sym_COLON] = ACTIONS(884),
    [anon_sym_STAR] = ACTIONS(884),
    [anon_sym_PLUS] = ACTIONS(884),
    [anon_sym_SLASH] = ACTIONS(884),
    [anon_sym_DASH] = ACTIONS(884),
    [anon_sym_PERCENT] = ACTIONS(884),
    [anon_sym_EQ_EQ] = ACTIONS(884),
    [anon_sym_BANG_EQ] = ACTIONS(884),
    [anon_sym_LT] = ACTIONS(886),
    [anon_sym_LT_EQ] = ACTIONS(884),
    [anon_sym_lt] = ACTIONS(886),
    [anon_sym_lte] = ACTIONS(886),
    [anon_sym_gt] = ACTIONS(886),
    [anon_sym_gte] = ACTIONS(886),
    [anon_sym_BANG] = ACTIONS(886),
    [anon_sym_AMP_AMP] = ACTIONS(884),
    [anon_sym_PIPE_PIPE] = ACTIONS(884),
    [anon_sym_QMARK_QMARK] = ACTIONS(884),
    [anon_sym_EQ] = ACTIONS(886),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(884),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(884),
    [sym_number] = ACTIONS(886),
    [anon_sym_true] = ACTIONS(886),
    [anon_sym_LBRACK] = ACTIONS(884),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(886),
    [anon_sym_DOT] = ACTIONS(886),
  },
  [207] = {
    [sym_expression] = STATE(111),
    [sym_type] = STATE(113),
    [sym_operator] = STATE(112),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_as_expression_repeat1] = STATE(113),
    [aux_sym_sequence_repeat1] = STATE(207),
    [anon_sym_LBRACE] = ACTIONS(888),
    [anon_sym_using] = ACTIONS(891),
    [anon_sym_COMMA] = ACTIONS(894),
    [anon_sym_DOT_DOT] = ACTIONS(891),
    [anon_sym_DOT_DOT_LT] = ACTIONS(894),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(894),
    [anon_sym_COLON] = ACTIONS(894),
    [anon_sym_STAR] = ACTIONS(894),
    [anon_sym_PLUS] = ACTIONS(894),
    [anon_sym_SLASH] = ACTIONS(894),
    [anon_sym_DASH] = ACTIONS(894),
    [anon_sym_PERCENT] = ACTIONS(894),
    [anon_sym_EQ_EQ] = ACTIONS(894),
    [anon_sym_BANG_EQ] = ACTIONS(894),
    [anon_sym_LT] = ACTIONS(891),
    [anon_sym_LT_EQ] = ACTIONS(894),
    [anon_sym_lt] = ACTIONS(891),
    [anon_sym_lte] = ACTIONS(891),
    [anon_sym_gt] = ACTIONS(891),
    [anon_sym_gte] = ACTIONS(891),
    [anon_sym_BANG] = ACTIONS(891),
    [anon_sym_AMP_AMP] = ACTIONS(894),
    [anon_sym_PIPE_PIPE] = ACTIONS(894),
    [anon_sym_QMARK_QMARK] = ACTIONS(894),
    [anon_sym_EQ] = ACTIONS(891),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(897),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(897),
    [sym_number] = ACTIONS(900),
    [anon_sym_true] = ACTIONS(903),
    [anon_sym_LBRACK] = ACTIONS(906),
    [anon_sym_RBRACK] = ACTIONS(877),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(909),
    [anon_sym_DOT] = ACTIONS(912),
  },
  [208] = {
    [sym_type] = STATE(286),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat2] = STATE(286),
    [anon_sym_LBRACE] = ACTIONS(57),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(472),
    [anon_sym_DOT] = ACTIONS(183),
  },
  [209] = {
    [sym_top_level] = STATE(107),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(915),
  },
  [210] = {
    [anon_sym_LBRACE] = ACTIONS(917),
    [anon_sym_as] = ACTIONS(919),
    [anon_sym_QMARK] = ACTIONS(919),
    [anon_sym_LPAREN] = ACTIONS(917),
    [anon_sym_RPAREN] = ACTIONS(917),
    [anon_sym_GT] = ACTIONS(917),
    [anon_sym_using] = ACTIONS(919),
    [anon_sym_COMMA] = ACTIONS(917),
    [anon_sym_DOT_DOT] = ACTIONS(919),
    [anon_sym_DOT_DOT_LT] = ACTIONS(917),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(917),
    [anon_sym_COLON] = ACTIONS(917),
    [anon_sym_STAR] = ACTIONS(917),
    [anon_sym_PLUS] = ACTIONS(917),
    [anon_sym_SLASH] = ACTIONS(917),
    [anon_sym_DASH] = ACTIONS(917),
    [anon_sym_PERCENT] = ACTIONS(917),
    [anon_sym_EQ_EQ] = ACTIONS(917),
    [anon_sym_BANG_EQ] = ACTIONS(917),
    [anon_sym_LT] = ACTIONS(919),
    [anon_sym_LT_EQ] = ACTIONS(917),
    [anon_sym_lt] = ACTIONS(919),
    [anon_sym_lte] = ACTIONS(919),
    [anon_sym_gt] = ACTIONS(919),
    [anon_sym_gte] = ACTIONS(919),
    [anon_sym_BANG] = ACTIONS(919),
    [anon_sym_AMP_AMP] = ACTIONS(917),
    [anon_sym_PIPE_PIPE] = ACTIONS(917),
    [anon_sym_QMARK_QMARK] = ACTIONS(917),
    [anon_sym_EQ] = ACTIONS(919),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(917),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(917),
    [sym_number] = ACTIONS(919),
    [anon_sym_true] = ACTIONS(919),
    [anon_sym_LBRACK] = ACTIONS(917),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(919),
    [anon_sym_DOT] = ACTIONS(919),
  },
  [211] = {
    [sym_group] = STATE(117),
    [aux_sym_top_level_repeat1] = STATE(288),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_as] = ACTIONS(207),
    [anon_sym_QMARK] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_using] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_DOT_DOT] = ACTIONS(207),
    [anon_sym_DOT_DOT_LT] = ACTIONS(205),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(205),
    [anon_sym_COLON] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_PLUS] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(205),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_PERCENT] = ACTIONS(205),
    [anon_sym_EQ_EQ] = ACTIONS(205),
    [anon_sym_BANG_EQ] = ACTIONS(205),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_LT_EQ] = ACTIONS(205),
    [anon_sym_lt] = ACTIONS(207),
    [anon_sym_lte] = ACTIONS(207),
    [anon_sym_gt] = ACTIONS(207),
    [anon_sym_gte] = ACTIONS(207),
    [anon_sym_BANG] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(205),
    [anon_sym_PIPE_PIPE] = ACTIONS(205),
    [anon_sym_QMARK_QMARK] = ACTIONS(205),
    [anon_sym_EQ] = ACTIONS(207),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(205),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(205),
    [sym_number] = ACTIONS(207),
    [anon_sym_true] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(205),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(207),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(207),
  },
  [212] = {
    [sym_type] = STATE(289),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat2] = STATE(289),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_as] = ACTIONS(221),
    [anon_sym_QMARK] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_using] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(219),
    [anon_sym_DOT_DOT] = ACTIONS(221),
    [anon_sym_DOT_DOT_LT] = ACTIONS(219),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(219),
    [anon_sym_COLON] = ACTIONS(219),
    [anon_sym_STAR] = ACTIONS(219),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_SLASH] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(219),
    [anon_sym_PERCENT] = ACTIONS(219),
    [anon_sym_EQ_EQ] = ACTIONS(219),
    [anon_sym_BANG_EQ] = ACTIONS(219),
    [anon_sym_LT] = ACTIONS(221),
    [anon_sym_LT_EQ] = ACTIONS(219),
    [anon_sym_lt] = ACTIONS(221),
    [anon_sym_lte] = ACTIONS(221),
    [anon_sym_gt] = ACTIONS(221),
    [anon_sym_gte] = ACTIONS(221),
    [anon_sym_BANG] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(219),
    [anon_sym_PIPE_PIPE] = ACTIONS(219),
    [anon_sym_QMARK_QMARK] = ACTIONS(219),
    [anon_sym_EQ] = ACTIONS(221),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(219),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(219),
    [sym_number] = ACTIONS(221),
    [anon_sym_true] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(219),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(221),
  },
  [213] = {
    [sym_type] = STATE(292),
    [sym_operator] = STATE(291),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(292),
    [aux_sym_as_expression_repeat2] = STATE(289),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_as] = ACTIONS(921),
    [anon_sym_QMARK] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(219),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(219),
    [sym_number] = ACTIONS(221),
    [anon_sym_true] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(219),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(221),
  },
  [214] = {
    [sym_parameter_group] = STATE(294),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(213),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(212),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(213),
    [aux_sym_group_repeat1] = STATE(294),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(466),
    [anon_sym_QMARK] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(923),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(472),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [215] = {
    [anon_sym_LBRACE] = ACTIONS(925),
    [anon_sym_as] = ACTIONS(927),
    [anon_sym_QMARK] = ACTIONS(927),
    [anon_sym_LPAREN] = ACTIONS(925),
    [anon_sym_RPAREN] = ACTIONS(925),
    [anon_sym_GT] = ACTIONS(925),
    [anon_sym_using] = ACTIONS(927),
    [anon_sym_COMMA] = ACTIONS(925),
    [anon_sym_DOT_DOT] = ACTIONS(927),
    [anon_sym_DOT_DOT_LT] = ACTIONS(925),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(925),
    [anon_sym_COLON] = ACTIONS(925),
    [anon_sym_STAR] = ACTIONS(925),
    [anon_sym_PLUS] = ACTIONS(925),
    [anon_sym_SLASH] = ACTIONS(925),
    [anon_sym_DASH] = ACTIONS(925),
    [anon_sym_PERCENT] = ACTIONS(925),
    [anon_sym_EQ_EQ] = ACTIONS(925),
    [anon_sym_BANG_EQ] = ACTIONS(925),
    [anon_sym_LT] = ACTIONS(927),
    [anon_sym_LT_EQ] = ACTIONS(925),
    [anon_sym_lt] = ACTIONS(927),
    [anon_sym_lte] = ACTIONS(927),
    [anon_sym_gt] = ACTIONS(927),
    [anon_sym_gte] = ACTIONS(927),
    [anon_sym_BANG] = ACTIONS(927),
    [anon_sym_AMP_AMP] = ACTIONS(925),
    [anon_sym_PIPE_PIPE] = ACTIONS(925),
    [anon_sym_QMARK_QMARK] = ACTIONS(925),
    [anon_sym_EQ] = ACTIONS(927),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(925),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(925),
    [sym_number] = ACTIONS(927),
    [anon_sym_true] = ACTIONS(927),
    [anon_sym_LBRACK] = ACTIONS(925),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(927),
    [anon_sym_DOT] = ACTIONS(927),
  },
  [216] = {
    [aux_sym_top_level_repeat1] = STATE(216),
    [anon_sym_LBRACE] = ACTIONS(929),
    [anon_sym_as] = ACTIONS(931),
    [anon_sym_QMARK] = ACTIONS(931),
    [anon_sym_LPAREN] = ACTIONS(929),
    [anon_sym_GT] = ACTIONS(929),
    [anon_sym_using] = ACTIONS(931),
    [anon_sym_COMMA] = ACTIONS(929),
    [anon_sym_DOT_DOT] = ACTIONS(931),
    [anon_sym_DOT_DOT_LT] = ACTIONS(929),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(929),
    [anon_sym_COLON] = ACTIONS(929),
    [anon_sym_STAR] = ACTIONS(929),
    [anon_sym_PLUS] = ACTIONS(929),
    [anon_sym_SLASH] = ACTIONS(929),
    [anon_sym_DASH] = ACTIONS(929),
    [anon_sym_PERCENT] = ACTIONS(929),
    [anon_sym_EQ_EQ] = ACTIONS(929),
    [anon_sym_BANG_EQ] = ACTIONS(929),
    [anon_sym_LT] = ACTIONS(931),
    [anon_sym_LT_EQ] = ACTIONS(929),
    [anon_sym_lt] = ACTIONS(931),
    [anon_sym_lte] = ACTIONS(931),
    [anon_sym_gt] = ACTIONS(931),
    [anon_sym_gte] = ACTIONS(931),
    [anon_sym_BANG] = ACTIONS(931),
    [anon_sym_AMP_AMP] = ACTIONS(929),
    [anon_sym_PIPE_PIPE] = ACTIONS(929),
    [anon_sym_QMARK_QMARK] = ACTIONS(929),
    [anon_sym_EQ] = ACTIONS(931),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(929),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(929),
    [sym_number] = ACTIONS(931),
    [anon_sym_true] = ACTIONS(931),
    [anon_sym_LBRACK] = ACTIONS(929),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(931),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(933),
    [anon_sym_DOT] = ACTIONS(931),
  },
  [217] = {
    [sym_type] = STATE(198),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat2] = STATE(198),
    [anon_sym_LBRACE] = ACTIONS(936),
    [anon_sym_as] = ACTIONS(938),
    [anon_sym_QMARK] = ACTIONS(938),
    [anon_sym_GT] = ACTIONS(936),
    [anon_sym_using] = ACTIONS(938),
    [anon_sym_COMMA] = ACTIONS(936),
    [anon_sym_DOT_DOT] = ACTIONS(938),
    [anon_sym_DOT_DOT_LT] = ACTIONS(936),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(936),
    [anon_sym_COLON] = ACTIONS(936),
    [anon_sym_STAR] = ACTIONS(936),
    [anon_sym_PLUS] = ACTIONS(936),
    [anon_sym_SLASH] = ACTIONS(936),
    [anon_sym_DASH] = ACTIONS(936),
    [anon_sym_PERCENT] = ACTIONS(936),
    [anon_sym_EQ_EQ] = ACTIONS(936),
    [anon_sym_BANG_EQ] = ACTIONS(936),
    [anon_sym_LT] = ACTIONS(938),
    [anon_sym_LT_EQ] = ACTIONS(936),
    [anon_sym_lt] = ACTIONS(938),
    [anon_sym_lte] = ACTIONS(938),
    [anon_sym_gt] = ACTIONS(938),
    [anon_sym_gte] = ACTIONS(938),
    [anon_sym_BANG] = ACTIONS(938),
    [anon_sym_AMP_AMP] = ACTIONS(936),
    [anon_sym_PIPE_PIPE] = ACTIONS(936),
    [anon_sym_QMARK_QMARK] = ACTIONS(936),
    [anon_sym_EQ] = ACTIONS(938),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(936),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(936),
    [sym_number] = ACTIONS(938),
    [anon_sym_true] = ACTIONS(938),
    [anon_sym_LBRACK] = ACTIONS(936),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(938),
    [anon_sym_DOT] = ACTIONS(938),
  },
  [218] = {
    [sym_type] = STATE(198),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat2] = STATE(198),
    [anon_sym_LBRACE] = ACTIONS(940),
    [anon_sym_as] = ACTIONS(942),
    [anon_sym_QMARK] = ACTIONS(942),
    [anon_sym_GT] = ACTIONS(940),
    [anon_sym_using] = ACTIONS(942),
    [anon_sym_COMMA] = ACTIONS(940),
    [anon_sym_DOT_DOT] = ACTIONS(942),
    [anon_sym_DOT_DOT_LT] = ACTIONS(940),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(940),
    [anon_sym_COLON] = ACTIONS(940),
    [anon_sym_STAR] = ACTIONS(940),
    [anon_sym_PLUS] = ACTIONS(940),
    [anon_sym_SLASH] = ACTIONS(940),
    [anon_sym_DASH] = ACTIONS(940),
    [anon_sym_PERCENT] = ACTIONS(940),
    [anon_sym_EQ_EQ] = ACTIONS(940),
    [anon_sym_BANG_EQ] = ACTIONS(940),
    [anon_sym_LT] = ACTIONS(942),
    [anon_sym_LT_EQ] = ACTIONS(940),
    [anon_sym_lt] = ACTIONS(942),
    [anon_sym_lte] = ACTIONS(942),
    [anon_sym_gt] = ACTIONS(942),
    [anon_sym_gte] = ACTIONS(942),
    [anon_sym_BANG] = ACTIONS(942),
    [anon_sym_AMP_AMP] = ACTIONS(940),
    [anon_sym_PIPE_PIPE] = ACTIONS(940),
    [anon_sym_QMARK_QMARK] = ACTIONS(940),
    [anon_sym_EQ] = ACTIONS(942),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(940),
    [sym_number] = ACTIONS(942),
    [anon_sym_true] = ACTIONS(942),
    [anon_sym_LBRACK] = ACTIONS(940),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(942),
    [anon_sym_DOT] = ACTIONS(942),
  },
  [219] = {
    [sym_directive] = STATE(222),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_elseif] = STATE(222),
    [sym_if_middle] = STATE(295),
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
    [aux_sym_if_repeat1] = STATE(295),
    [anon_sym_LT_POUND] = ACTIONS(11),
    [anon_sym_LT_AT] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(944),
    [anon_sym_LT_POUNDelseif] = ACTIONS(523),
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
  [220] = {
    [ts_builtin_sym_end] = ACTIONS(946),
    [sym_comment] = ACTIONS(946),
    [anon_sym_DOLLAR] = ACTIONS(946),
    [anon_sym_LT_POUND] = ACTIONS(948),
    [anon_sym_LT_AT] = ACTIONS(946),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(946),
    [sym_break] = ACTIONS(946),
    [sym_continue] = ACTIONS(946),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(946),
    [anon_sym_LT_POUNDitems] = ACTIONS(946),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(946),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(946),
    [anon_sym_LT_POUNDif] = ACTIONS(946),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(946),
    [anon_sym_LT_POUNDelseif] = ACTIONS(946),
    [anon_sym_LT_POUNDswitch] = ACTIONS(946),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(946),
    [anon_sym_LT_POUNDcase] = ACTIONS(946),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(946),
    [anon_sym_LT_POUNDfunction] = ACTIONS(946),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(946),
    [anon_sym_LT_POUNDreturn] = ACTIONS(946),
    [anon_sym_LT_POUNDmacro] = ACTIONS(946),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(946),
    [anon_sym_LT_POUNDnested] = ACTIONS(946),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(946),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(946),
    [sym_recover] = ACTIONS(946),
    [sym_fallback] = ACTIONS(946),
    [sym_flush] = ACTIONS(946),
    [anon_sym_LT_POUNDftl] = ACTIONS(946),
    [anon_sym_LT_POUNDimport] = ACTIONS(946),
    [anon_sym_LT_POUNDinclude] = ACTIONS(946),
    [sym_lt] = ACTIONS(946),
    [sym_nt] = ACTIONS(946),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(946),
    [sym_rt] = ACTIONS(946),
    [anon_sym_LT_POUNDsetting] = ACTIONS(946),
    [sym_stop] = ACTIONS(946),
    [sym_t] = ACTIONS(946),
    [anon_sym_LT_POUNDvisit] = ACTIONS(946),
    [anon_sym_LT_POUNDassign] = ACTIONS(946),
    [sym_end_assign] = ACTIONS(946),
    [anon_sym_LT_POUNDglobal] = ACTIONS(946),
    [sym_end_global] = ACTIONS(946),
    [anon_sym_LT_POUNDlocal] = ACTIONS(946),
    [sym_end_local] = ACTIONS(946),
  },
  [221] = {
    [sym_parameter_group] = STATE(297),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(40),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(39),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(40),
    [aux_sym_group_repeat1] = STATE(297),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(950),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [222] = {
    [anon_sym_LT_POUND] = ACTIONS(952),
    [anon_sym_LT_AT] = ACTIONS(954),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(954),
    [anon_sym_LT_POUNDif] = ACTIONS(954),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(954),
    [anon_sym_LT_POUNDelseif] = ACTIONS(954),
    [anon_sym_LT_POUNDswitch] = ACTIONS(954),
    [anon_sym_LT_POUNDfunction] = ACTIONS(954),
    [anon_sym_LT_POUNDmacro] = ACTIONS(954),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(954),
    [sym_fallback] = ACTIONS(954),
    [sym_flush] = ACTIONS(954),
    [anon_sym_LT_POUNDftl] = ACTIONS(954),
    [anon_sym_LT_POUNDimport] = ACTIONS(954),
    [anon_sym_LT_POUNDinclude] = ACTIONS(954),
    [sym_lt] = ACTIONS(954),
    [sym_nt] = ACTIONS(954),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(954),
    [sym_rt] = ACTIONS(954),
    [anon_sym_LT_POUNDsetting] = ACTIONS(954),
    [sym_stop] = ACTIONS(954),
    [sym_t] = ACTIONS(954),
    [anon_sym_LT_POUNDvisit] = ACTIONS(954),
    [anon_sym_LT_POUNDassign] = ACTIONS(954),
    [sym_end_assign] = ACTIONS(954),
    [anon_sym_LT_POUNDglobal] = ACTIONS(954),
    [sym_end_global] = ACTIONS(954),
    [anon_sym_LT_POUNDlocal] = ACTIONS(954),
    [sym_end_local] = ACTIONS(954),
  },
  [223] = {
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(956),
  },
  [224] = {
    [sym_directive] = STATE(222),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_if_else] = STATE(299),
    [sym_elseif] = STATE(222),
    [sym_if_middle] = STATE(300),
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
    [aux_sym_if_repeat1] = STATE(300),
    [anon_sym_LT_POUND] = ACTIONS(11),
    [anon_sym_LT_AT] = ACTIONS(13),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(519),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(956),
    [anon_sym_LT_POUNDelseif] = ACTIONS(523),
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
  [225] = {
    [anon_sym_LBRACE] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(435),
    [sym_number] = ACTIONS(437),
    [anon_sym_true] = ACTIONS(437),
    [anon_sym_LBRACK] = ACTIONS(435),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(437),
    [anon_sym_DOT] = ACTIONS(435),
  },
  [226] = {
    [sym_expression] = STATE(174),
    [sym_type] = STATE(86),
    [sym_operator] = STATE(84),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_interpolation_repeat1] = STATE(174),
    [aux_sym_as_expression_repeat1] = STATE(86),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(958),
    [anon_sym_using] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT_DOT_LT] = ACTIONS(143),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_lt] = ACTIONS(141),
    [anon_sym_lte] = ACTIONS(141),
    [anon_sym_gt] = ACTIONS(141),
    [anon_sym_gte] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_QMARK_QMARK] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(145),
    [sym_number] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(151),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(153),
    [anon_sym_DOT] = ACTIONS(155),
  },
  [227] = {
    [anon_sym_LBRACE] = ACTIONS(449),
    [anon_sym_GT] = ACTIONS(449),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(449),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(449),
    [sym_number] = ACTIONS(451),
    [anon_sym_true] = ACTIONS(451),
    [anon_sym_LBRACK] = ACTIONS(449),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(451),
    [anon_sym_DOT] = ACTIONS(449),
  },
  [228] = {
    [anon_sym_LBRACE] = ACTIONS(453),
    [anon_sym_GT] = ACTIONS(453),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(453),
    [sym_number] = ACTIONS(455),
    [anon_sym_true] = ACTIONS(455),
    [anon_sym_LBRACK] = ACTIONS(453),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(455),
    [anon_sym_DOT] = ACTIONS(453),
  },
  [229] = {
    [sym_expression] = STATE(111),
    [sym_type] = STATE(113),
    [sym_operator] = STATE(112),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_as_expression_repeat1] = STATE(113),
    [aux_sym_sequence_repeat1] = STATE(207),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_using] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT_DOT_LT] = ACTIONS(143),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_lt] = ACTIONS(141),
    [anon_sym_lte] = ACTIONS(141),
    [anon_sym_gt] = ACTIONS(141),
    [anon_sym_gte] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_QMARK_QMARK] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(145),
    [sym_number] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(960),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(155),
  },
  [230] = {
    [sym_parameter_group] = STATE(304),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(213),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(212),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(213),
    [aux_sym_group_repeat1] = STATE(304),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(466),
    [anon_sym_QMARK] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(962),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(472),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [231] = {
    [anon_sym_LBRACE] = ACTIONS(474),
    [anon_sym_LPAREN] = ACTIONS(474),
    [anon_sym_GT] = ACTIONS(474),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(474),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(474),
    [sym_number] = ACTIONS(476),
    [anon_sym_true] = ACTIONS(476),
    [anon_sym_LBRACK] = ACTIONS(474),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(476),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(474),
    [anon_sym_DOT] = ACTIONS(476),
  },
  [232] = {
    [anon_sym_LBRACE] = ACTIONS(478),
    [anon_sym_GT] = ACTIONS(478),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(478),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(478),
    [sym_number] = ACTIONS(480),
    [anon_sym_true] = ACTIONS(480),
    [anon_sym_LBRACK] = ACTIONS(478),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(480),
    [anon_sym_DOT] = ACTIONS(478),
  },
  [233] = {
    [sym_group] = STATE(305),
    [aux_sym_top_level_repeat1] = STATE(306),
    [anon_sym_LBRACE] = ACTIONS(482),
    [anon_sym_LPAREN] = ACTIONS(566),
    [anon_sym_GT] = ACTIONS(482),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(482),
    [sym_number] = ACTIONS(484),
    [anon_sym_true] = ACTIONS(484),
    [anon_sym_LBRACK] = ACTIONS(482),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(568),
    [anon_sym_DOT] = ACTIONS(484),
  },
  [234] = {
    [anon_sym_LBRACE] = ACTIONS(486),
    [anon_sym_GT] = ACTIONS(486),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(486),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(486),
    [sym_number] = ACTIONS(488),
    [anon_sym_true] = ACTIONS(488),
    [anon_sym_LBRACK] = ACTIONS(486),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(488),
    [anon_sym_DOT] = ACTIONS(486),
  },
  [235] = {
    [sym_type] = STATE(235),
    [sym_string] = STATE(128),
    [sym_boolean] = STATE(128),
    [sym_sequence] = STATE(128),
    [sym_hash] = STATE(128),
    [sym_top_level] = STATE(128),
    [sym_spec_var] = STATE(128),
    [aux_sym_as_expression_repeat2] = STATE(235),
    [anon_sym_LBRACE] = ACTIONS(964),
    [anon_sym_GT] = ACTIONS(853),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(967),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(967),
    [sym_number] = ACTIONS(970),
    [anon_sym_true] = ACTIONS(973),
    [anon_sym_LBRACK] = ACTIONS(976),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(979),
    [anon_sym_DOT] = ACTIONS(982),
  },
  [236] = {
    [sym_group] = STATE(215),
    [aux_sym_top_level_repeat1] = STATE(307),
    [anon_sym_LPAREN] = ACTIONS(482),
    [anon_sym_GT] = ACTIONS(482),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(211),
  },
  [237] = {
    [aux_sym_top_level_repeat1] = STATE(237),
    [anon_sym_LBRACE] = ACTIONS(929),
    [anon_sym_as] = ACTIONS(931),
    [anon_sym_LPAREN] = ACTIONS(929),
    [anon_sym_GT] = ACTIONS(929),
    [anon_sym_using] = ACTIONS(931),
    [anon_sym_COMMA] = ACTIONS(929),
    [anon_sym_DOT_DOT] = ACTIONS(931),
    [anon_sym_DOT_DOT_LT] = ACTIONS(929),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(929),
    [anon_sym_COLON] = ACTIONS(929),
    [anon_sym_STAR] = ACTIONS(929),
    [anon_sym_PLUS] = ACTIONS(929),
    [anon_sym_SLASH] = ACTIONS(929),
    [anon_sym_DASH] = ACTIONS(929),
    [anon_sym_PERCENT] = ACTIONS(929),
    [anon_sym_EQ_EQ] = ACTIONS(929),
    [anon_sym_BANG_EQ] = ACTIONS(929),
    [anon_sym_LT] = ACTIONS(931),
    [anon_sym_LT_EQ] = ACTIONS(929),
    [anon_sym_lt] = ACTIONS(931),
    [anon_sym_lte] = ACTIONS(931),
    [anon_sym_gt] = ACTIONS(931),
    [anon_sym_gte] = ACTIONS(931),
    [anon_sym_BANG] = ACTIONS(931),
    [anon_sym_AMP_AMP] = ACTIONS(929),
    [anon_sym_PIPE_PIPE] = ACTIONS(929),
    [anon_sym_QMARK_QMARK] = ACTIONS(929),
    [anon_sym_EQ] = ACTIONS(931),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(929),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(929),
    [sym_number] = ACTIONS(931),
    [anon_sym_true] = ACTIONS(931),
    [anon_sym_LBRACK] = ACTIONS(929),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(931),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(933),
    [anon_sym_DOT] = ACTIONS(931),
  },
  [238] = {
    [ts_builtin_sym_end] = ACTIONS(985),
    [sym_comment] = ACTIONS(985),
    [anon_sym_DOLLAR] = ACTIONS(985),
    [anon_sym_LT_POUND] = ACTIONS(987),
    [anon_sym_LT_AT] = ACTIONS(985),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(985),
    [sym_break] = ACTIONS(985),
    [sym_continue] = ACTIONS(985),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(985),
    [anon_sym_LT_POUNDitems] = ACTIONS(985),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(985),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(985),
    [anon_sym_LT_POUNDif] = ACTIONS(985),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(985),
    [anon_sym_LT_POUNDelseif] = ACTIONS(985),
    [anon_sym_LT_POUNDswitch] = ACTIONS(985),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(985),
    [anon_sym_LT_POUNDcase] = ACTIONS(985),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(985),
    [anon_sym_LT_POUNDfunction] = ACTIONS(985),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(985),
    [anon_sym_LT_POUNDreturn] = ACTIONS(985),
    [anon_sym_LT_POUNDmacro] = ACTIONS(985),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(985),
    [anon_sym_LT_POUNDnested] = ACTIONS(985),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(985),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(985),
    [sym_recover] = ACTIONS(985),
    [sym_fallback] = ACTIONS(985),
    [sym_flush] = ACTIONS(985),
    [anon_sym_LT_POUNDftl] = ACTIONS(985),
    [anon_sym_LT_POUNDimport] = ACTIONS(985),
    [anon_sym_LT_POUNDinclude] = ACTIONS(985),
    [sym_lt] = ACTIONS(985),
    [sym_nt] = ACTIONS(985),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(985),
    [sym_rt] = ACTIONS(985),
    [anon_sym_LT_POUNDsetting] = ACTIONS(985),
    [sym_stop] = ACTIONS(985),
    [sym_t] = ACTIONS(985),
    [anon_sym_LT_POUNDvisit] = ACTIONS(985),
    [anon_sym_LT_POUNDassign] = ACTIONS(985),
    [sym_end_assign] = ACTIONS(985),
    [anon_sym_LT_POUNDglobal] = ACTIONS(985),
    [sym_end_global] = ACTIONS(985),
    [anon_sym_LT_POUNDlocal] = ACTIONS(985),
    [sym_end_local] = ACTIONS(985),
  },
  [239] = {
    [sym_parameter_group] = STATE(308),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(48),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(47),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(48),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(81),
    [anon_sym_using] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_DOT_DOT] = ACTIONS(83),
    [anon_sym_DOT_DOT_LT] = ACTIONS(85),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(85),
    [anon_sym_EQ_EQ] = ACTIONS(85),
    [anon_sym_BANG_EQ] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(83),
    [anon_sym_LT_EQ] = ACTIONS(85),
    [anon_sym_lt] = ACTIONS(83),
    [anon_sym_lte] = ACTIONS(83),
    [anon_sym_gt] = ACTIONS(83),
    [anon_sym_gte] = ACTIONS(83),
    [anon_sym_BANG] = ACTIONS(83),
    [anon_sym_AMP_AMP] = ACTIONS(85),
    [anon_sym_PIPE_PIPE] = ACTIONS(85),
    [anon_sym_QMARK_QMARK] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(87),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [240] = {
    [sym_directive] = STATE(309),
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
    [aux_sym_case_repeat1] = STATE(309),
    [anon_sym_LT_POUND] = ACTIONS(11),
    [anon_sym_LT_AT] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(989),
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
  [241] = {
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(991),
    [anon_sym_LT_POUNDcase] = ACTIONS(991),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(991),
  },
  [242] = {
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(993),
  },
  [243] = {
    [sym_case] = STATE(241),
    [sym_default] = STATE(311),
    [sym_switch_middle] = STATE(312),
    [aux_sym_switch_repeat1] = STATE(312),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(993),
    [anon_sym_LT_POUNDcase] = ACTIONS(574),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(576),
  },
  [244] = {
    [sym_type] = STATE(235),
    [sym_string] = STATE(128),
    [sym_boolean] = STATE(128),
    [sym_sequence] = STATE(128),
    [sym_hash] = STATE(128),
    [sym_top_level] = STATE(128),
    [sym_spec_var] = STATE(128),
    [aux_sym_as_expression_repeat2] = STATE(235),
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(936),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(229),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(229),
    [sym_number] = ACTIONS(231),
    [anon_sym_true] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(235),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(237),
    [anon_sym_DOT] = ACTIONS(239),
  },
  [245] = {
    [sym_type] = STATE(235),
    [sym_string] = STATE(128),
    [sym_boolean] = STATE(128),
    [sym_sequence] = STATE(128),
    [sym_hash] = STATE(128),
    [sym_top_level] = STATE(128),
    [sym_spec_var] = STATE(128),
    [aux_sym_as_expression_repeat2] = STATE(235),
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(940),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(229),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(229),
    [sym_number] = ACTIONS(231),
    [anon_sym_true] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(235),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(237),
    [anon_sym_DOT] = ACTIONS(239),
  },
  [246] = {
    [anon_sym_LT_POUND] = ACTIONS(995),
    [anon_sym_LT_AT] = ACTIONS(997),
    [anon_sym_LT_POUNDif] = ACTIONS(997),
    [anon_sym_LT_POUNDswitch] = ACTIONS(997),
    [anon_sym_LT_POUNDfunction] = ACTIONS(997),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(997),
    [anon_sym_LT_POUNDreturn] = ACTIONS(997),
    [anon_sym_LT_POUNDmacro] = ACTIONS(997),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(997),
    [anon_sym_LT_POUNDnested] = ACTIONS(997),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(997),
    [sym_fallback] = ACTIONS(997),
    [sym_flush] = ACTIONS(997),
    [anon_sym_LT_POUNDftl] = ACTIONS(997),
    [anon_sym_LT_POUNDimport] = ACTIONS(997),
    [anon_sym_LT_POUNDinclude] = ACTIONS(997),
    [sym_lt] = ACTIONS(997),
    [sym_nt] = ACTIONS(997),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(997),
    [sym_rt] = ACTIONS(997),
    [anon_sym_LT_POUNDsetting] = ACTIONS(997),
    [sym_stop] = ACTIONS(997),
    [sym_t] = ACTIONS(997),
    [anon_sym_LT_POUNDvisit] = ACTIONS(997),
    [anon_sym_LT_POUNDassign] = ACTIONS(997),
    [sym_end_assign] = ACTIONS(997),
    [anon_sym_LT_POUNDglobal] = ACTIONS(997),
    [sym_end_global] = ACTIONS(997),
    [anon_sym_LT_POUNDlocal] = ACTIONS(997),
    [sym_end_local] = ACTIONS(997),
  },
  [247] = {
    [anon_sym_GT] = ACTIONS(999),
  },
  [248] = {
    [ts_builtin_sym_end] = ACTIONS(1001),
    [sym_comment] = ACTIONS(1001),
    [anon_sym_DOLLAR] = ACTIONS(1001),
    [anon_sym_LT_POUND] = ACTIONS(1003),
    [anon_sym_LT_AT] = ACTIONS(1001),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1001),
    [sym_break] = ACTIONS(1001),
    [sym_continue] = ACTIONS(1001),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1001),
    [anon_sym_LT_POUNDitems] = ACTIONS(1001),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1001),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1001),
    [anon_sym_LT_POUNDif] = ACTIONS(1001),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1001),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1001),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1001),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1001),
    [anon_sym_LT_POUNDcase] = ACTIONS(1001),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1001),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1001),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1001),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1001),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1001),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1001),
    [anon_sym_LT_POUNDnested] = ACTIONS(1001),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1001),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1001),
    [sym_recover] = ACTIONS(1001),
    [sym_fallback] = ACTIONS(1001),
    [sym_flush] = ACTIONS(1001),
    [anon_sym_LT_POUNDftl] = ACTIONS(1001),
    [anon_sym_LT_POUNDimport] = ACTIONS(1001),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1001),
    [sym_lt] = ACTIONS(1001),
    [sym_nt] = ACTIONS(1001),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1001),
    [sym_rt] = ACTIONS(1001),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1001),
    [sym_stop] = ACTIONS(1001),
    [sym_t] = ACTIONS(1001),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1001),
    [anon_sym_LT_POUNDassign] = ACTIONS(1001),
    [sym_end_assign] = ACTIONS(1001),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1001),
    [sym_end_global] = ACTIONS(1001),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1001),
    [sym_end_local] = ACTIONS(1001),
  },
  [249] = {
    [sym_directive] = STATE(143),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_function_middle] = STATE(249),
    [sym_return] = STATE(143),
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
    [aux_sym_function_repeat1] = STATE(249),
    [anon_sym_LT_POUND] = ACTIONS(1005),
    [anon_sym_LT_AT] = ACTIONS(1008),
    [anon_sym_LT_POUNDif] = ACTIONS(1011),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1014),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1017),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1020),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1022),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1025),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1028),
    [sym_fallback] = ACTIONS(1031),
    [sym_flush] = ACTIONS(1031),
    [anon_sym_LT_POUNDftl] = ACTIONS(1034),
    [anon_sym_LT_POUNDimport] = ACTIONS(1037),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1040),
    [sym_lt] = ACTIONS(1031),
    [sym_nt] = ACTIONS(1031),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1043),
    [sym_rt] = ACTIONS(1031),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1046),
    [sym_stop] = ACTIONS(1031),
    [sym_t] = ACTIONS(1031),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1049),
    [anon_sym_LT_POUNDassign] = ACTIONS(1052),
    [sym_end_assign] = ACTIONS(1055),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1058),
    [sym_end_global] = ACTIONS(1061),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1064),
    [sym_end_local] = ACTIONS(1067),
  },
  [250] = {
    [sym_directive] = STATE(143),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_function_middle] = STATE(249),
    [sym_return] = STATE(143),
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
    [aux_sym_function_repeat1] = STATE(249),
    [anon_sym_LT_POUND] = ACTIONS(11),
    [anon_sym_LT_AT] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1070),
    [anon_sym_LT_POUNDreturn] = ACTIONS(249),
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
  [251] = {
    [anon_sym_LT_POUND] = ACTIONS(1072),
    [anon_sym_LT_AT] = ACTIONS(1074),
    [anon_sym_LT_POUNDif] = ACTIONS(1074),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1074),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1074),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1074),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1074),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1074),
    [anon_sym_LT_POUNDnested] = ACTIONS(1074),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1074),
    [sym_fallback] = ACTIONS(1074),
    [sym_flush] = ACTIONS(1074),
    [anon_sym_LT_POUNDftl] = ACTIONS(1074),
    [anon_sym_LT_POUNDimport] = ACTIONS(1074),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1074),
    [sym_lt] = ACTIONS(1074),
    [sym_nt] = ACTIONS(1074),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1074),
    [sym_rt] = ACTIONS(1074),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1074),
    [sym_stop] = ACTIONS(1074),
    [sym_t] = ACTIONS(1074),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1074),
    [anon_sym_LT_POUNDassign] = ACTIONS(1074),
    [sym_end_assign] = ACTIONS(1074),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1074),
    [sym_end_global] = ACTIONS(1074),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1074),
    [sym_end_local] = ACTIONS(1074),
  },
  [252] = {
    [sym_parameter_group] = STATE(125),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(40),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(39),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(40),
    [aux_sym_group_repeat1] = STATE(125),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(1076),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [253] = {
    [ts_builtin_sym_end] = ACTIONS(1078),
    [sym_comment] = ACTIONS(1078),
    [anon_sym_DOLLAR] = ACTIONS(1078),
    [anon_sym_LT_POUND] = ACTIONS(1080),
    [anon_sym_LT_AT] = ACTIONS(1078),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1078),
    [sym_break] = ACTIONS(1078),
    [sym_continue] = ACTIONS(1078),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1078),
    [anon_sym_LT_POUNDitems] = ACTIONS(1078),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1078),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1078),
    [anon_sym_LT_POUNDif] = ACTIONS(1078),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1078),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1078),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1078),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1078),
    [anon_sym_LT_POUNDcase] = ACTIONS(1078),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1078),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1078),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1078),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1078),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1078),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1078),
    [anon_sym_LT_POUNDnested] = ACTIONS(1078),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1078),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1078),
    [sym_recover] = ACTIONS(1078),
    [sym_fallback] = ACTIONS(1078),
    [sym_flush] = ACTIONS(1078),
    [anon_sym_LT_POUNDftl] = ACTIONS(1078),
    [anon_sym_LT_POUNDimport] = ACTIONS(1078),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1078),
    [sym_lt] = ACTIONS(1078),
    [sym_nt] = ACTIONS(1078),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1078),
    [sym_rt] = ACTIONS(1078),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1078),
    [sym_stop] = ACTIONS(1078),
    [sym_t] = ACTIONS(1078),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1078),
    [anon_sym_LT_POUNDassign] = ACTIONS(1078),
    [sym_end_assign] = ACTIONS(1078),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1078),
    [sym_end_global] = ACTIONS(1078),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1078),
    [sym_end_local] = ACTIONS(1078),
  },
  [254] = {
    [sym_directive] = STATE(148),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_return] = STATE(148),
    [sym_macro] = STATE(10),
    [sym_macro_middle] = STATE(254),
    [sym_nested] = STATE(148),
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
    [aux_sym_macro_repeat1] = STATE(254),
    [anon_sym_LT_POUND] = ACTIONS(1082),
    [anon_sym_LT_AT] = ACTIONS(1085),
    [anon_sym_LT_POUNDif] = ACTIONS(1088),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1091),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1094),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1097),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1100),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1103),
    [anon_sym_LT_POUNDnested] = ACTIONS(1105),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1108),
    [sym_fallback] = ACTIONS(1111),
    [sym_flush] = ACTIONS(1111),
    [anon_sym_LT_POUNDftl] = ACTIONS(1114),
    [anon_sym_LT_POUNDimport] = ACTIONS(1117),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1120),
    [sym_lt] = ACTIONS(1111),
    [sym_nt] = ACTIONS(1111),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1123),
    [sym_rt] = ACTIONS(1111),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1126),
    [sym_stop] = ACTIONS(1111),
    [sym_t] = ACTIONS(1111),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1129),
    [anon_sym_LT_POUNDassign] = ACTIONS(1132),
    [sym_end_assign] = ACTIONS(1135),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1138),
    [sym_end_global] = ACTIONS(1141),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1144),
    [sym_end_local] = ACTIONS(1147),
  },
  [255] = {
    [sym_directive] = STATE(148),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_return] = STATE(148),
    [sym_macro] = STATE(10),
    [sym_macro_middle] = STATE(254),
    [sym_nested] = STATE(148),
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
    [aux_sym_macro_repeat1] = STATE(254),
    [anon_sym_LT_POUND] = ACTIONS(11),
    [anon_sym_LT_AT] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDreturn] = ACTIONS(249),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1150),
    [anon_sym_LT_POUNDnested] = ACTIONS(255),
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
  [256] = {
    [anon_sym_LBRACE] = ACTIONS(844),
    [anon_sym_RBRACE] = ACTIONS(844),
    [anon_sym_using] = ACTIONS(846),
    [anon_sym_COMMA] = ACTIONS(844),
    [anon_sym_DOT_DOT] = ACTIONS(846),
    [anon_sym_DOT_DOT_LT] = ACTIONS(844),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(844),
    [anon_sym_COLON] = ACTIONS(844),
    [anon_sym_STAR] = ACTIONS(844),
    [anon_sym_PLUS] = ACTIONS(844),
    [anon_sym_SLASH] = ACTIONS(844),
    [anon_sym_DASH] = ACTIONS(844),
    [anon_sym_PERCENT] = ACTIONS(844),
    [anon_sym_EQ_EQ] = ACTIONS(844),
    [anon_sym_BANG_EQ] = ACTIONS(844),
    [anon_sym_LT] = ACTIONS(846),
    [anon_sym_LT_EQ] = ACTIONS(844),
    [anon_sym_lt] = ACTIONS(846),
    [anon_sym_lte] = ACTIONS(846),
    [anon_sym_gt] = ACTIONS(846),
    [anon_sym_gte] = ACTIONS(846),
    [anon_sym_BANG] = ACTIONS(846),
    [anon_sym_AMP_AMP] = ACTIONS(844),
    [anon_sym_PIPE_PIPE] = ACTIONS(844),
    [anon_sym_QMARK_QMARK] = ACTIONS(844),
    [anon_sym_EQ] = ACTIONS(846),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(844),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(844),
    [sym_number] = ACTIONS(846),
    [anon_sym_true] = ACTIONS(846),
    [anon_sym_LBRACK] = ACTIONS(844),
    [anon_sym_RBRACK] = ACTIONS(844),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(846),
    [anon_sym_DOT] = ACTIONS(846),
  },
  [257] = {
    [anon_sym_LBRACE] = ACTIONS(884),
    [anon_sym_RBRACE] = ACTIONS(884),
    [anon_sym_using] = ACTIONS(886),
    [anon_sym_COMMA] = ACTIONS(884),
    [anon_sym_DOT_DOT] = ACTIONS(886),
    [anon_sym_DOT_DOT_LT] = ACTIONS(884),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(884),
    [anon_sym_COLON] = ACTIONS(884),
    [anon_sym_STAR] = ACTIONS(884),
    [anon_sym_PLUS] = ACTIONS(884),
    [anon_sym_SLASH] = ACTIONS(884),
    [anon_sym_DASH] = ACTIONS(884),
    [anon_sym_PERCENT] = ACTIONS(884),
    [anon_sym_EQ_EQ] = ACTIONS(884),
    [anon_sym_BANG_EQ] = ACTIONS(884),
    [anon_sym_LT] = ACTIONS(886),
    [anon_sym_LT_EQ] = ACTIONS(884),
    [anon_sym_lt] = ACTIONS(886),
    [anon_sym_lte] = ACTIONS(886),
    [anon_sym_gt] = ACTIONS(886),
    [anon_sym_gte] = ACTIONS(886),
    [anon_sym_BANG] = ACTIONS(886),
    [anon_sym_AMP_AMP] = ACTIONS(884),
    [anon_sym_PIPE_PIPE] = ACTIONS(884),
    [anon_sym_QMARK_QMARK] = ACTIONS(884),
    [anon_sym_EQ] = ACTIONS(886),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(884),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(884),
    [sym_number] = ACTIONS(886),
    [anon_sym_true] = ACTIONS(886),
    [anon_sym_LBRACK] = ACTIONS(884),
    [anon_sym_RBRACK] = ACTIONS(884),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(886),
    [anon_sym_DOT] = ACTIONS(886),
  },
  [258] = {
    [anon_sym_LBRACE] = ACTIONS(917),
    [anon_sym_RBRACE] = ACTIONS(917),
    [anon_sym_using] = ACTIONS(919),
    [anon_sym_COMMA] = ACTIONS(917),
    [anon_sym_DOT_DOT] = ACTIONS(919),
    [anon_sym_DOT_DOT_LT] = ACTIONS(917),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(917),
    [anon_sym_COLON] = ACTIONS(917),
    [anon_sym_STAR] = ACTIONS(917),
    [anon_sym_PLUS] = ACTIONS(917),
    [anon_sym_SLASH] = ACTIONS(917),
    [anon_sym_DASH] = ACTIONS(917),
    [anon_sym_PERCENT] = ACTIONS(917),
    [anon_sym_EQ_EQ] = ACTIONS(917),
    [anon_sym_BANG_EQ] = ACTIONS(917),
    [anon_sym_LT] = ACTIONS(919),
    [anon_sym_LT_EQ] = ACTIONS(917),
    [anon_sym_lt] = ACTIONS(919),
    [anon_sym_lte] = ACTIONS(919),
    [anon_sym_gt] = ACTIONS(919),
    [anon_sym_gte] = ACTIONS(919),
    [anon_sym_BANG] = ACTIONS(919),
    [anon_sym_AMP_AMP] = ACTIONS(917),
    [anon_sym_PIPE_PIPE] = ACTIONS(917),
    [anon_sym_QMARK_QMARK] = ACTIONS(917),
    [anon_sym_EQ] = ACTIONS(919),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(917),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(917),
    [sym_number] = ACTIONS(919),
    [anon_sym_true] = ACTIONS(919),
    [anon_sym_LBRACK] = ACTIONS(917),
    [anon_sym_RBRACK] = ACTIONS(917),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(919),
    [anon_sym_DOT] = ACTIONS(919),
  },
  [259] = {
    [sym_parameter_group] = STATE(294),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(213),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(212),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(213),
    [aux_sym_group_repeat1] = STATE(294),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(466),
    [anon_sym_QMARK] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(1152),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(472),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [260] = {
    [anon_sym_LBRACE] = ACTIONS(925),
    [anon_sym_RBRACE] = ACTIONS(925),
    [anon_sym_using] = ACTIONS(927),
    [anon_sym_COMMA] = ACTIONS(925),
    [anon_sym_DOT_DOT] = ACTIONS(927),
    [anon_sym_DOT_DOT_LT] = ACTIONS(925),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(925),
    [anon_sym_COLON] = ACTIONS(925),
    [anon_sym_STAR] = ACTIONS(925),
    [anon_sym_PLUS] = ACTIONS(925),
    [anon_sym_SLASH] = ACTIONS(925),
    [anon_sym_DASH] = ACTIONS(925),
    [anon_sym_PERCENT] = ACTIONS(925),
    [anon_sym_EQ_EQ] = ACTIONS(925),
    [anon_sym_BANG_EQ] = ACTIONS(925),
    [anon_sym_LT] = ACTIONS(927),
    [anon_sym_LT_EQ] = ACTIONS(925),
    [anon_sym_lt] = ACTIONS(927),
    [anon_sym_lte] = ACTIONS(927),
    [anon_sym_gt] = ACTIONS(927),
    [anon_sym_gte] = ACTIONS(927),
    [anon_sym_BANG] = ACTIONS(927),
    [anon_sym_AMP_AMP] = ACTIONS(925),
    [anon_sym_PIPE_PIPE] = ACTIONS(925),
    [anon_sym_QMARK_QMARK] = ACTIONS(925),
    [anon_sym_EQ] = ACTIONS(927),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(925),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(925),
    [sym_number] = ACTIONS(927),
    [anon_sym_true] = ACTIONS(927),
    [anon_sym_LBRACK] = ACTIONS(925),
    [anon_sym_RBRACK] = ACTIONS(925),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(927),
    [anon_sym_DOT] = ACTIONS(927),
  },
  [261] = {
    [aux_sym_top_level_repeat1] = STATE(261),
    [anon_sym_LBRACE] = ACTIONS(929),
    [anon_sym_RBRACE] = ACTIONS(929),
    [anon_sym_LPAREN] = ACTIONS(929),
    [anon_sym_using] = ACTIONS(931),
    [anon_sym_COMMA] = ACTIONS(929),
    [anon_sym_DOT_DOT] = ACTIONS(931),
    [anon_sym_DOT_DOT_LT] = ACTIONS(929),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(929),
    [anon_sym_COLON] = ACTIONS(929),
    [anon_sym_STAR] = ACTIONS(929),
    [anon_sym_PLUS] = ACTIONS(929),
    [anon_sym_SLASH] = ACTIONS(929),
    [anon_sym_DASH] = ACTIONS(929),
    [anon_sym_PERCENT] = ACTIONS(929),
    [anon_sym_EQ_EQ] = ACTIONS(929),
    [anon_sym_BANG_EQ] = ACTIONS(929),
    [anon_sym_LT] = ACTIONS(931),
    [anon_sym_LT_EQ] = ACTIONS(929),
    [anon_sym_lt] = ACTIONS(931),
    [anon_sym_lte] = ACTIONS(931),
    [anon_sym_gt] = ACTIONS(931),
    [anon_sym_gte] = ACTIONS(931),
    [anon_sym_BANG] = ACTIONS(931),
    [anon_sym_AMP_AMP] = ACTIONS(929),
    [anon_sym_PIPE_PIPE] = ACTIONS(929),
    [anon_sym_QMARK_QMARK] = ACTIONS(929),
    [anon_sym_EQ] = ACTIONS(931),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(929),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(929),
    [sym_number] = ACTIONS(931),
    [anon_sym_true] = ACTIONS(931),
    [anon_sym_LBRACK] = ACTIONS(929),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(931),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1154),
    [anon_sym_DOT] = ACTIONS(931),
  },
  [262] = {
    [sym_type] = STATE(262),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_as_expression_repeat2] = STATE(262),
    [anon_sym_LBRACE] = ACTIONS(1157),
    [anon_sym_RBRACE] = ACTIONS(853),
    [anon_sym_using] = ACTIONS(851),
    [anon_sym_COMMA] = ACTIONS(853),
    [anon_sym_DOT_DOT] = ACTIONS(851),
    [anon_sym_DOT_DOT_LT] = ACTIONS(853),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(853),
    [anon_sym_COLON] = ACTIONS(853),
    [anon_sym_STAR] = ACTIONS(853),
    [anon_sym_PLUS] = ACTIONS(853),
    [anon_sym_SLASH] = ACTIONS(853),
    [anon_sym_DASH] = ACTIONS(853),
    [anon_sym_PERCENT] = ACTIONS(853),
    [anon_sym_EQ_EQ] = ACTIONS(853),
    [anon_sym_BANG_EQ] = ACTIONS(853),
    [anon_sym_LT] = ACTIONS(851),
    [anon_sym_LT_EQ] = ACTIONS(853),
    [anon_sym_lt] = ACTIONS(851),
    [anon_sym_lte] = ACTIONS(851),
    [anon_sym_gt] = ACTIONS(851),
    [anon_sym_gte] = ACTIONS(851),
    [anon_sym_BANG] = ACTIONS(851),
    [anon_sym_AMP_AMP] = ACTIONS(853),
    [anon_sym_PIPE_PIPE] = ACTIONS(853),
    [anon_sym_QMARK_QMARK] = ACTIONS(853),
    [anon_sym_EQ] = ACTIONS(851),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1160),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1160),
    [sym_number] = ACTIONS(1163),
    [anon_sym_true] = ACTIONS(1166),
    [anon_sym_LBRACK] = ACTIONS(1169),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1172),
    [anon_sym_DOT] = ACTIONS(1175),
  },
  [263] = {
    [sym_type] = STATE(262),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_as_expression_repeat2] = STATE(262),
    [anon_sym_LBRACE] = ACTIONS(940),
    [anon_sym_RBRACE] = ACTIONS(940),
    [anon_sym_using] = ACTIONS(942),
    [anon_sym_COMMA] = ACTIONS(940),
    [anon_sym_DOT_DOT] = ACTIONS(942),
    [anon_sym_DOT_DOT_LT] = ACTIONS(940),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(940),
    [anon_sym_COLON] = ACTIONS(940),
    [anon_sym_STAR] = ACTIONS(940),
    [anon_sym_PLUS] = ACTIONS(940),
    [anon_sym_SLASH] = ACTIONS(940),
    [anon_sym_DASH] = ACTIONS(940),
    [anon_sym_PERCENT] = ACTIONS(940),
    [anon_sym_EQ_EQ] = ACTIONS(940),
    [anon_sym_BANG_EQ] = ACTIONS(940),
    [anon_sym_LT] = ACTIONS(942),
    [anon_sym_LT_EQ] = ACTIONS(940),
    [anon_sym_lt] = ACTIONS(942),
    [anon_sym_lte] = ACTIONS(942),
    [anon_sym_gt] = ACTIONS(942),
    [anon_sym_gte] = ACTIONS(942),
    [anon_sym_BANG] = ACTIONS(942),
    [anon_sym_AMP_AMP] = ACTIONS(940),
    [anon_sym_PIPE_PIPE] = ACTIONS(940),
    [anon_sym_QMARK_QMARK] = ACTIONS(940),
    [anon_sym_EQ] = ACTIONS(942),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(940),
    [sym_number] = ACTIONS(942),
    [anon_sym_true] = ACTIONS(942),
    [anon_sym_LBRACK] = ACTIONS(940),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(942),
    [anon_sym_DOT] = ACTIONS(942),
  },
  [264] = {
    [ts_builtin_sym_end] = ACTIONS(1178),
    [sym_comment] = ACTIONS(1178),
    [anon_sym_DOLLAR] = ACTIONS(1178),
    [anon_sym_LT_POUND] = ACTIONS(1180),
    [anon_sym_LT_AT] = ACTIONS(1178),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1178),
    [sym_break] = ACTIONS(1178),
    [sym_continue] = ACTIONS(1178),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1178),
    [anon_sym_LT_POUNDitems] = ACTIONS(1178),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1178),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1178),
    [anon_sym_LT_POUNDif] = ACTIONS(1178),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1178),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1178),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1178),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1178),
    [anon_sym_LT_POUNDcase] = ACTIONS(1178),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1178),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1178),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1178),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1178),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1178),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1178),
    [anon_sym_LT_POUNDnested] = ACTIONS(1178),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1178),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1178),
    [sym_recover] = ACTIONS(1178),
    [sym_fallback] = ACTIONS(1178),
    [sym_flush] = ACTIONS(1178),
    [anon_sym_LT_POUNDftl] = ACTIONS(1178),
    [anon_sym_LT_POUNDimport] = ACTIONS(1178),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1178),
    [sym_lt] = ACTIONS(1178),
    [sym_nt] = ACTIONS(1178),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1178),
    [sym_rt] = ACTIONS(1178),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1178),
    [sym_stop] = ACTIONS(1178),
    [sym_t] = ACTIONS(1178),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1178),
    [anon_sym_LT_POUNDassign] = ACTIONS(1178),
    [sym_end_assign] = ACTIONS(1178),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1178),
    [sym_end_global] = ACTIONS(1178),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1178),
    [sym_end_local] = ACTIONS(1178),
  },
  [265] = {
    [anon_sym_LT_POUND] = ACTIONS(1182),
    [anon_sym_LT_AT] = ACTIONS(1184),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1184),
    [sym_break] = ACTIONS(1184),
    [sym_continue] = ACTIONS(1184),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1184),
    [anon_sym_LT_POUNDitems] = ACTIONS(1184),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1184),
    [anon_sym_LT_POUNDif] = ACTIONS(1184),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1184),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1184),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1184),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1184),
    [sym_fallback] = ACTIONS(1184),
    [sym_flush] = ACTIONS(1184),
    [anon_sym_LT_POUNDftl] = ACTIONS(1184),
    [anon_sym_LT_POUNDimport] = ACTIONS(1184),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1184),
    [sym_lt] = ACTIONS(1184),
    [sym_nt] = ACTIONS(1184),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1184),
    [sym_rt] = ACTIONS(1184),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1184),
    [sym_stop] = ACTIONS(1184),
    [sym_t] = ACTIONS(1184),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1184),
    [anon_sym_LT_POUNDassign] = ACTIONS(1184),
    [sym_end_assign] = ACTIONS(1184),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1184),
    [sym_end_global] = ACTIONS(1184),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1184),
    [sym_end_local] = ACTIONS(1184),
  },
  [266] = {
    [sym_directive] = STATE(265),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_list_middle] = STATE(318),
    [sym_items] = STATE(265),
    [sym_sep] = STATE(265),
    [sym_sep_block] = STATE(270),
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
    [aux_sym_list_repeat1] = STATE(318),
    [anon_sym_LT_POUND] = ACTIONS(11),
    [anon_sym_LT_AT] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1186),
    [sym_break] = ACTIONS(772),
    [sym_continue] = ACTIONS(772),
    [anon_sym_LT_POUNDitems] = ACTIONS(776),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(778),
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
  [267] = {
    [sym_parameter_group] = STATE(319),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(48),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(47),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(48),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(81),
    [anon_sym_using] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_DOT_DOT] = ACTIONS(83),
    [anon_sym_DOT_DOT_LT] = ACTIONS(85),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(85),
    [anon_sym_EQ_EQ] = ACTIONS(85),
    [anon_sym_BANG_EQ] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(83),
    [anon_sym_LT_EQ] = ACTIONS(85),
    [anon_sym_lt] = ACTIONS(83),
    [anon_sym_lte] = ACTIONS(83),
    [anon_sym_gt] = ACTIONS(83),
    [anon_sym_gte] = ACTIONS(83),
    [anon_sym_BANG] = ACTIONS(83),
    [anon_sym_AMP_AMP] = ACTIONS(85),
    [anon_sym_PIPE_PIPE] = ACTIONS(85),
    [anon_sym_QMARK_QMARK] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(83),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(87),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [268] = {
    [anon_sym_LT_POUND] = ACTIONS(1188),
    [anon_sym_LT_AT] = ACTIONS(1190),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1190),
    [sym_break] = ACTIONS(1190),
    [sym_continue] = ACTIONS(1190),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1190),
    [anon_sym_LT_POUNDitems] = ACTIONS(1190),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1190),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1190),
    [anon_sym_LT_SLASH_POUNDsep_GT] = ACTIONS(1192),
    [anon_sym_LT_POUNDif] = ACTIONS(1190),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1190),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1190),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1190),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1190),
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
  [269] = {
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1194),
  },
  [270] = {
    [anon_sym_LT_POUND] = ACTIONS(1188),
    [anon_sym_LT_AT] = ACTIONS(1190),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1190),
    [sym_break] = ACTIONS(1190),
    [sym_continue] = ACTIONS(1190),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1190),
    [anon_sym_LT_POUNDitems] = ACTIONS(1190),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1190),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1190),
    [anon_sym_LT_POUNDif] = ACTIONS(1190),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1190),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1190),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1190),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1190),
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
  [271] = {
    [sym_directive] = STATE(265),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_list_middle] = STATE(323),
    [sym_list_else] = STATE(322),
    [sym_items] = STATE(265),
    [sym_sep] = STATE(265),
    [sym_sep_block] = STATE(270),
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
    [aux_sym_list_repeat1] = STATE(323),
    [anon_sym_LT_POUND] = ACTIONS(11),
    [anon_sym_LT_AT] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1194),
    [sym_break] = ACTIONS(772),
    [sym_continue] = ACTIONS(772),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(774),
    [anon_sym_LT_POUNDitems] = ACTIONS(776),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(778),
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
  [272] = {
    [anon_sym_LBRACE] = ACTIONS(844),
    [anon_sym_as] = ACTIONS(846),
    [anon_sym_QMARK] = ACTIONS(846),
    [anon_sym_GT] = ACTIONS(844),
    [anon_sym_using] = ACTIONS(846),
    [anon_sym_COMMA] = ACTIONS(844),
    [anon_sym_DOT_DOT] = ACTIONS(846),
    [anon_sym_DOT_DOT_LT] = ACTIONS(844),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(844),
    [anon_sym_COLON] = ACTIONS(844),
    [anon_sym_STAR] = ACTIONS(844),
    [anon_sym_PLUS] = ACTIONS(844),
    [anon_sym_SLASH] = ACTIONS(846),
    [anon_sym_DASH] = ACTIONS(844),
    [anon_sym_PERCENT] = ACTIONS(844),
    [anon_sym_EQ_EQ] = ACTIONS(844),
    [anon_sym_BANG_EQ] = ACTIONS(844),
    [anon_sym_LT] = ACTIONS(846),
    [anon_sym_LT_EQ] = ACTIONS(844),
    [anon_sym_lt] = ACTIONS(846),
    [anon_sym_lte] = ACTIONS(846),
    [anon_sym_gt] = ACTIONS(846),
    [anon_sym_gte] = ACTIONS(846),
    [anon_sym_BANG] = ACTIONS(846),
    [anon_sym_AMP_AMP] = ACTIONS(844),
    [anon_sym_PIPE_PIPE] = ACTIONS(844),
    [anon_sym_QMARK_QMARK] = ACTIONS(844),
    [anon_sym_EQ] = ACTIONS(846),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(844),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(844),
    [sym_number] = ACTIONS(846),
    [anon_sym_true] = ACTIONS(846),
    [anon_sym_LBRACK] = ACTIONS(844),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(846),
    [anon_sym_DOT] = ACTIONS(846),
    [anon_sym_SLASH_GT] = ACTIONS(844),
  },
  [273] = {
    [sym_type] = STATE(273),
    [sym_string] = STATE(94),
    [sym_boolean] = STATE(94),
    [sym_sequence] = STATE(94),
    [sym_hash] = STATE(94),
    [sym_top_level] = STATE(94),
    [sym_spec_var] = STATE(94),
    [aux_sym_as_expression_repeat2] = STATE(273),
    [anon_sym_LBRACE] = ACTIONS(1196),
    [anon_sym_as] = ACTIONS(851),
    [anon_sym_QMARK] = ACTIONS(851),
    [anon_sym_GT] = ACTIONS(853),
    [anon_sym_using] = ACTIONS(851),
    [anon_sym_COMMA] = ACTIONS(853),
    [anon_sym_DOT_DOT] = ACTIONS(851),
    [anon_sym_DOT_DOT_LT] = ACTIONS(853),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(853),
    [anon_sym_COLON] = ACTIONS(853),
    [anon_sym_STAR] = ACTIONS(853),
    [anon_sym_PLUS] = ACTIONS(853),
    [anon_sym_SLASH] = ACTIONS(851),
    [anon_sym_DASH] = ACTIONS(853),
    [anon_sym_PERCENT] = ACTIONS(853),
    [anon_sym_EQ_EQ] = ACTIONS(853),
    [anon_sym_BANG_EQ] = ACTIONS(853),
    [anon_sym_LT] = ACTIONS(851),
    [anon_sym_LT_EQ] = ACTIONS(853),
    [anon_sym_lt] = ACTIONS(851),
    [anon_sym_lte] = ACTIONS(851),
    [anon_sym_gt] = ACTIONS(851),
    [anon_sym_gte] = ACTIONS(851),
    [anon_sym_BANG] = ACTIONS(851),
    [anon_sym_AMP_AMP] = ACTIONS(853),
    [anon_sym_PIPE_PIPE] = ACTIONS(853),
    [anon_sym_QMARK_QMARK] = ACTIONS(853),
    [anon_sym_EQ] = ACTIONS(851),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1199),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1199),
    [sym_number] = ACTIONS(1202),
    [anon_sym_true] = ACTIONS(1205),
    [anon_sym_LBRACK] = ACTIONS(1208),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1211),
    [anon_sym_DOT] = ACTIONS(1214),
    [anon_sym_SLASH_GT] = ACTIONS(853),
  },
  [274] = {
    [sym_group] = STATE(279),
    [aux_sym_top_level_repeat1] = STATE(280),
    [anon_sym_LBRACE] = ACTIONS(482),
    [anon_sym_as] = ACTIONS(484),
    [anon_sym_QMARK] = ACTIONS(484),
    [anon_sym_LPAREN] = ACTIONS(482),
    [anon_sym_GT] = ACTIONS(482),
    [anon_sym_using] = ACTIONS(484),
    [anon_sym_COMMA] = ACTIONS(482),
    [anon_sym_DOT_DOT] = ACTIONS(484),
    [anon_sym_DOT_DOT_LT] = ACTIONS(482),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(482),
    [anon_sym_COLON] = ACTIONS(482),
    [anon_sym_STAR] = ACTIONS(482),
    [anon_sym_PLUS] = ACTIONS(482),
    [anon_sym_SLASH] = ACTIONS(484),
    [anon_sym_DASH] = ACTIONS(482),
    [anon_sym_PERCENT] = ACTIONS(482),
    [anon_sym_EQ_EQ] = ACTIONS(482),
    [anon_sym_BANG_EQ] = ACTIONS(482),
    [anon_sym_LT] = ACTIONS(484),
    [anon_sym_LT_EQ] = ACTIONS(482),
    [anon_sym_lt] = ACTIONS(484),
    [anon_sym_lte] = ACTIONS(484),
    [anon_sym_gt] = ACTIONS(484),
    [anon_sym_gte] = ACTIONS(484),
    [anon_sym_BANG] = ACTIONS(484),
    [anon_sym_AMP_AMP] = ACTIONS(482),
    [anon_sym_PIPE_PIPE] = ACTIONS(482),
    [anon_sym_QMARK_QMARK] = ACTIONS(482),
    [anon_sym_EQ] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(482),
    [sym_number] = ACTIONS(484),
    [anon_sym_true] = ACTIONS(484),
    [anon_sym_LBRACK] = ACTIONS(482),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(427),
    [anon_sym_DOT] = ACTIONS(484),
    [anon_sym_SLASH_GT] = ACTIONS(482),
  },
  [275] = {
    [anon_sym_LBRACE] = ACTIONS(873),
    [anon_sym_as] = ACTIONS(875),
    [anon_sym_QMARK] = ACTIONS(875),
    [anon_sym_GT] = ACTIONS(873),
    [anon_sym_using] = ACTIONS(875),
    [anon_sym_COMMA] = ACTIONS(873),
    [anon_sym_DOT_DOT] = ACTIONS(875),
    [anon_sym_DOT_DOT_LT] = ACTIONS(873),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(873),
    [anon_sym_COLON] = ACTIONS(873),
    [anon_sym_STAR] = ACTIONS(873),
    [anon_sym_PLUS] = ACTIONS(873),
    [anon_sym_SLASH] = ACTIONS(875),
    [anon_sym_DASH] = ACTIONS(873),
    [anon_sym_PERCENT] = ACTIONS(873),
    [anon_sym_EQ_EQ] = ACTIONS(873),
    [anon_sym_BANG_EQ] = ACTIONS(873),
    [anon_sym_LT] = ACTIONS(875),
    [anon_sym_LT_EQ] = ACTIONS(873),
    [anon_sym_lt] = ACTIONS(875),
    [anon_sym_lte] = ACTIONS(875),
    [anon_sym_gt] = ACTIONS(875),
    [anon_sym_gte] = ACTIONS(875),
    [anon_sym_BANG] = ACTIONS(875),
    [anon_sym_AMP_AMP] = ACTIONS(873),
    [anon_sym_PIPE_PIPE] = ACTIONS(873),
    [anon_sym_QMARK_QMARK] = ACTIONS(873),
    [anon_sym_EQ] = ACTIONS(875),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(873),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(873),
    [sym_number] = ACTIONS(875),
    [anon_sym_true] = ACTIONS(875),
    [anon_sym_LBRACK] = ACTIONS(873),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(875),
    [anon_sym_DOT] = ACTIONS(875),
    [anon_sym_SLASH_GT] = ACTIONS(873),
  },
  [276] = {
    [anon_sym_LBRACE] = ACTIONS(884),
    [anon_sym_as] = ACTIONS(886),
    [anon_sym_QMARK] = ACTIONS(886),
    [anon_sym_GT] = ACTIONS(884),
    [anon_sym_using] = ACTIONS(886),
    [anon_sym_COMMA] = ACTIONS(884),
    [anon_sym_DOT_DOT] = ACTIONS(886),
    [anon_sym_DOT_DOT_LT] = ACTIONS(884),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(884),
    [anon_sym_COLON] = ACTIONS(884),
    [anon_sym_STAR] = ACTIONS(884),
    [anon_sym_PLUS] = ACTIONS(884),
    [anon_sym_SLASH] = ACTIONS(886),
    [anon_sym_DASH] = ACTIONS(884),
    [anon_sym_PERCENT] = ACTIONS(884),
    [anon_sym_EQ_EQ] = ACTIONS(884),
    [anon_sym_BANG_EQ] = ACTIONS(884),
    [anon_sym_LT] = ACTIONS(886),
    [anon_sym_LT_EQ] = ACTIONS(884),
    [anon_sym_lt] = ACTIONS(886),
    [anon_sym_lte] = ACTIONS(886),
    [anon_sym_gt] = ACTIONS(886),
    [anon_sym_gte] = ACTIONS(886),
    [anon_sym_BANG] = ACTIONS(886),
    [anon_sym_AMP_AMP] = ACTIONS(884),
    [anon_sym_PIPE_PIPE] = ACTIONS(884),
    [anon_sym_QMARK_QMARK] = ACTIONS(884),
    [anon_sym_EQ] = ACTIONS(886),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(884),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(884),
    [sym_number] = ACTIONS(886),
    [anon_sym_true] = ACTIONS(886),
    [anon_sym_LBRACK] = ACTIONS(884),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(886),
    [anon_sym_DOT] = ACTIONS(886),
    [anon_sym_SLASH_GT] = ACTIONS(884),
  },
  [277] = {
    [anon_sym_LBRACE] = ACTIONS(917),
    [anon_sym_as] = ACTIONS(919),
    [anon_sym_QMARK] = ACTIONS(919),
    [anon_sym_LPAREN] = ACTIONS(917),
    [anon_sym_GT] = ACTIONS(917),
    [anon_sym_using] = ACTIONS(919),
    [anon_sym_COMMA] = ACTIONS(917),
    [anon_sym_DOT_DOT] = ACTIONS(919),
    [anon_sym_DOT_DOT_LT] = ACTIONS(917),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(917),
    [anon_sym_COLON] = ACTIONS(917),
    [anon_sym_STAR] = ACTIONS(917),
    [anon_sym_PLUS] = ACTIONS(917),
    [anon_sym_SLASH] = ACTIONS(919),
    [anon_sym_DASH] = ACTIONS(917),
    [anon_sym_PERCENT] = ACTIONS(917),
    [anon_sym_EQ_EQ] = ACTIONS(917),
    [anon_sym_BANG_EQ] = ACTIONS(917),
    [anon_sym_LT] = ACTIONS(919),
    [anon_sym_LT_EQ] = ACTIONS(917),
    [anon_sym_lt] = ACTIONS(919),
    [anon_sym_lte] = ACTIONS(919),
    [anon_sym_gt] = ACTIONS(919),
    [anon_sym_gte] = ACTIONS(919),
    [anon_sym_BANG] = ACTIONS(919),
    [anon_sym_AMP_AMP] = ACTIONS(917),
    [anon_sym_PIPE_PIPE] = ACTIONS(917),
    [anon_sym_QMARK_QMARK] = ACTIONS(917),
    [anon_sym_EQ] = ACTIONS(919),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(917),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(917),
    [sym_number] = ACTIONS(919),
    [anon_sym_true] = ACTIONS(919),
    [anon_sym_LBRACK] = ACTIONS(917),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(919),
    [anon_sym_DOT] = ACTIONS(919),
    [anon_sym_SLASH_GT] = ACTIONS(917),
  },
  [278] = {
    [sym_parameter_group] = STATE(294),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(213),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(212),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(213),
    [aux_sym_group_repeat1] = STATE(294),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(466),
    [anon_sym_QMARK] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(1217),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(472),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [279] = {
    [anon_sym_LBRACE] = ACTIONS(925),
    [anon_sym_as] = ACTIONS(927),
    [anon_sym_QMARK] = ACTIONS(927),
    [anon_sym_LPAREN] = ACTIONS(925),
    [anon_sym_GT] = ACTIONS(925),
    [anon_sym_using] = ACTIONS(927),
    [anon_sym_COMMA] = ACTIONS(925),
    [anon_sym_DOT_DOT] = ACTIONS(927),
    [anon_sym_DOT_DOT_LT] = ACTIONS(925),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(925),
    [anon_sym_COLON] = ACTIONS(925),
    [anon_sym_STAR] = ACTIONS(925),
    [anon_sym_PLUS] = ACTIONS(925),
    [anon_sym_SLASH] = ACTIONS(927),
    [anon_sym_DASH] = ACTIONS(925),
    [anon_sym_PERCENT] = ACTIONS(925),
    [anon_sym_EQ_EQ] = ACTIONS(925),
    [anon_sym_BANG_EQ] = ACTIONS(925),
    [anon_sym_LT] = ACTIONS(927),
    [anon_sym_LT_EQ] = ACTIONS(925),
    [anon_sym_lt] = ACTIONS(927),
    [anon_sym_lte] = ACTIONS(927),
    [anon_sym_gt] = ACTIONS(927),
    [anon_sym_gte] = ACTIONS(927),
    [anon_sym_BANG] = ACTIONS(927),
    [anon_sym_AMP_AMP] = ACTIONS(925),
    [anon_sym_PIPE_PIPE] = ACTIONS(925),
    [anon_sym_QMARK_QMARK] = ACTIONS(925),
    [anon_sym_EQ] = ACTIONS(927),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(925),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(925),
    [sym_number] = ACTIONS(927),
    [anon_sym_true] = ACTIONS(927),
    [anon_sym_LBRACK] = ACTIONS(925),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(927),
    [anon_sym_DOT] = ACTIONS(927),
    [anon_sym_SLASH_GT] = ACTIONS(925),
  },
  [280] = {
    [aux_sym_top_level_repeat1] = STATE(280),
    [anon_sym_LBRACE] = ACTIONS(929),
    [anon_sym_as] = ACTIONS(931),
    [anon_sym_QMARK] = ACTIONS(931),
    [anon_sym_LPAREN] = ACTIONS(929),
    [anon_sym_GT] = ACTIONS(929),
    [anon_sym_using] = ACTIONS(931),
    [anon_sym_COMMA] = ACTIONS(929),
    [anon_sym_DOT_DOT] = ACTIONS(931),
    [anon_sym_DOT_DOT_LT] = ACTIONS(929),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(929),
    [anon_sym_COLON] = ACTIONS(929),
    [anon_sym_STAR] = ACTIONS(929),
    [anon_sym_PLUS] = ACTIONS(929),
    [anon_sym_SLASH] = ACTIONS(931),
    [anon_sym_DASH] = ACTIONS(929),
    [anon_sym_PERCENT] = ACTIONS(929),
    [anon_sym_EQ_EQ] = ACTIONS(929),
    [anon_sym_BANG_EQ] = ACTIONS(929),
    [anon_sym_LT] = ACTIONS(931),
    [anon_sym_LT_EQ] = ACTIONS(929),
    [anon_sym_lt] = ACTIONS(931),
    [anon_sym_lte] = ACTIONS(931),
    [anon_sym_gt] = ACTIONS(931),
    [anon_sym_gte] = ACTIONS(931),
    [anon_sym_BANG] = ACTIONS(931),
    [anon_sym_AMP_AMP] = ACTIONS(929),
    [anon_sym_PIPE_PIPE] = ACTIONS(929),
    [anon_sym_QMARK_QMARK] = ACTIONS(929),
    [anon_sym_EQ] = ACTIONS(931),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(929),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(929),
    [sym_number] = ACTIONS(931),
    [anon_sym_true] = ACTIONS(931),
    [anon_sym_LBRACK] = ACTIONS(929),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(931),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1219),
    [anon_sym_DOT] = ACTIONS(931),
    [anon_sym_SLASH_GT] = ACTIONS(929),
  },
  [281] = {
    [sym_type] = STATE(273),
    [sym_string] = STATE(94),
    [sym_boolean] = STATE(94),
    [sym_sequence] = STATE(94),
    [sym_hash] = STATE(94),
    [sym_top_level] = STATE(94),
    [sym_spec_var] = STATE(94),
    [aux_sym_as_expression_repeat2] = STATE(273),
    [anon_sym_LBRACE] = ACTIONS(936),
    [anon_sym_as] = ACTIONS(938),
    [anon_sym_QMARK] = ACTIONS(938),
    [anon_sym_GT] = ACTIONS(936),
    [anon_sym_using] = ACTIONS(938),
    [anon_sym_COMMA] = ACTIONS(936),
    [anon_sym_DOT_DOT] = ACTIONS(938),
    [anon_sym_DOT_DOT_LT] = ACTIONS(936),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(936),
    [anon_sym_COLON] = ACTIONS(936),
    [anon_sym_STAR] = ACTIONS(936),
    [anon_sym_PLUS] = ACTIONS(936),
    [anon_sym_SLASH] = ACTIONS(938),
    [anon_sym_DASH] = ACTIONS(936),
    [anon_sym_PERCENT] = ACTIONS(936),
    [anon_sym_EQ_EQ] = ACTIONS(936),
    [anon_sym_BANG_EQ] = ACTIONS(936),
    [anon_sym_LT] = ACTIONS(938),
    [anon_sym_LT_EQ] = ACTIONS(936),
    [anon_sym_lt] = ACTIONS(938),
    [anon_sym_lte] = ACTIONS(938),
    [anon_sym_gt] = ACTIONS(938),
    [anon_sym_gte] = ACTIONS(938),
    [anon_sym_BANG] = ACTIONS(938),
    [anon_sym_AMP_AMP] = ACTIONS(936),
    [anon_sym_PIPE_PIPE] = ACTIONS(936),
    [anon_sym_QMARK_QMARK] = ACTIONS(936),
    [anon_sym_EQ] = ACTIONS(938),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(936),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(936),
    [sym_number] = ACTIONS(938),
    [anon_sym_true] = ACTIONS(938),
    [anon_sym_LBRACK] = ACTIONS(936),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(938),
    [anon_sym_DOT] = ACTIONS(938),
    [anon_sym_SLASH_GT] = ACTIONS(936),
  },
  [282] = {
    [sym_type] = STATE(273),
    [sym_string] = STATE(94),
    [sym_boolean] = STATE(94),
    [sym_sequence] = STATE(94),
    [sym_hash] = STATE(94),
    [sym_top_level] = STATE(94),
    [sym_spec_var] = STATE(94),
    [aux_sym_as_expression_repeat2] = STATE(273),
    [anon_sym_LBRACE] = ACTIONS(940),
    [anon_sym_as] = ACTIONS(942),
    [anon_sym_QMARK] = ACTIONS(942),
    [anon_sym_GT] = ACTIONS(940),
    [anon_sym_using] = ACTIONS(942),
    [anon_sym_COMMA] = ACTIONS(940),
    [anon_sym_DOT_DOT] = ACTIONS(942),
    [anon_sym_DOT_DOT_LT] = ACTIONS(940),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(940),
    [anon_sym_COLON] = ACTIONS(940),
    [anon_sym_STAR] = ACTIONS(940),
    [anon_sym_PLUS] = ACTIONS(940),
    [anon_sym_SLASH] = ACTIONS(942),
    [anon_sym_DASH] = ACTIONS(940),
    [anon_sym_PERCENT] = ACTIONS(940),
    [anon_sym_EQ_EQ] = ACTIONS(940),
    [anon_sym_BANG_EQ] = ACTIONS(940),
    [anon_sym_LT] = ACTIONS(942),
    [anon_sym_LT_EQ] = ACTIONS(940),
    [anon_sym_lt] = ACTIONS(942),
    [anon_sym_lte] = ACTIONS(942),
    [anon_sym_gt] = ACTIONS(942),
    [anon_sym_gte] = ACTIONS(942),
    [anon_sym_BANG] = ACTIONS(942),
    [anon_sym_AMP_AMP] = ACTIONS(940),
    [anon_sym_PIPE_PIPE] = ACTIONS(940),
    [anon_sym_QMARK_QMARK] = ACTIONS(940),
    [anon_sym_EQ] = ACTIONS(942),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(940),
    [sym_number] = ACTIONS(942),
    [anon_sym_true] = ACTIONS(942),
    [anon_sym_LBRACK] = ACTIONS(940),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(942),
    [anon_sym_DOT] = ACTIONS(942),
    [anon_sym_SLASH_GT] = ACTIONS(940),
  },
  [283] = {
    [aux_sym_top_level_repeat1] = STATE(283),
    [anon_sym_LBRACE] = ACTIONS(929),
    [anon_sym_LPAREN] = ACTIONS(929),
    [anon_sym_using] = ACTIONS(931),
    [anon_sym_COMMA] = ACTIONS(929),
    [anon_sym_DOT_DOT] = ACTIONS(931),
    [anon_sym_DOT_DOT_LT] = ACTIONS(929),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(929),
    [anon_sym_COLON] = ACTIONS(929),
    [anon_sym_STAR] = ACTIONS(929),
    [anon_sym_PLUS] = ACTIONS(929),
    [anon_sym_SLASH] = ACTIONS(929),
    [anon_sym_DASH] = ACTIONS(929),
    [anon_sym_PERCENT] = ACTIONS(929),
    [anon_sym_EQ_EQ] = ACTIONS(929),
    [anon_sym_BANG_EQ] = ACTIONS(929),
    [anon_sym_LT] = ACTIONS(931),
    [anon_sym_LT_EQ] = ACTIONS(929),
    [anon_sym_lt] = ACTIONS(931),
    [anon_sym_lte] = ACTIONS(931),
    [anon_sym_gt] = ACTIONS(931),
    [anon_sym_gte] = ACTIONS(931),
    [anon_sym_BANG] = ACTIONS(931),
    [anon_sym_AMP_AMP] = ACTIONS(929),
    [anon_sym_PIPE_PIPE] = ACTIONS(929),
    [anon_sym_QMARK_QMARK] = ACTIONS(929),
    [anon_sym_EQ] = ACTIONS(931),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(929),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(929),
    [sym_number] = ACTIONS(931),
    [anon_sym_true] = ACTIONS(931),
    [anon_sym_LBRACK] = ACTIONS(929),
    [anon_sym_RBRACK] = ACTIONS(929),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(931),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1154),
    [anon_sym_DOT] = ACTIONS(931),
  },
  [284] = {
    [sym_type] = STATE(284),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_as_expression_repeat2] = STATE(284),
    [anon_sym_LBRACE] = ACTIONS(1157),
    [anon_sym_using] = ACTIONS(851),
    [anon_sym_COMMA] = ACTIONS(853),
    [anon_sym_DOT_DOT] = ACTIONS(851),
    [anon_sym_DOT_DOT_LT] = ACTIONS(853),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(853),
    [anon_sym_COLON] = ACTIONS(853),
    [anon_sym_STAR] = ACTIONS(853),
    [anon_sym_PLUS] = ACTIONS(853),
    [anon_sym_SLASH] = ACTIONS(853),
    [anon_sym_DASH] = ACTIONS(853),
    [anon_sym_PERCENT] = ACTIONS(853),
    [anon_sym_EQ_EQ] = ACTIONS(853),
    [anon_sym_BANG_EQ] = ACTIONS(853),
    [anon_sym_LT] = ACTIONS(851),
    [anon_sym_LT_EQ] = ACTIONS(853),
    [anon_sym_lt] = ACTIONS(851),
    [anon_sym_lte] = ACTIONS(851),
    [anon_sym_gt] = ACTIONS(851),
    [anon_sym_gte] = ACTIONS(851),
    [anon_sym_BANG] = ACTIONS(851),
    [anon_sym_AMP_AMP] = ACTIONS(853),
    [anon_sym_PIPE_PIPE] = ACTIONS(853),
    [anon_sym_QMARK_QMARK] = ACTIONS(853),
    [anon_sym_EQ] = ACTIONS(851),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1160),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1160),
    [sym_number] = ACTIONS(1163),
    [anon_sym_true] = ACTIONS(1166),
    [anon_sym_LBRACK] = ACTIONS(1169),
    [anon_sym_RBRACK] = ACTIONS(853),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1222),
    [anon_sym_DOT] = ACTIONS(1175),
  },
  [285] = {
    [sym_type] = STATE(284),
    [sym_string] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_sequence] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_top_level] = STATE(79),
    [sym_spec_var] = STATE(79),
    [aux_sym_as_expression_repeat2] = STATE(284),
    [anon_sym_LBRACE] = ACTIONS(940),
    [anon_sym_using] = ACTIONS(942),
    [anon_sym_COMMA] = ACTIONS(940),
    [anon_sym_DOT_DOT] = ACTIONS(942),
    [anon_sym_DOT_DOT_LT] = ACTIONS(940),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(940),
    [anon_sym_COLON] = ACTIONS(940),
    [anon_sym_STAR] = ACTIONS(940),
    [anon_sym_PLUS] = ACTIONS(940),
    [anon_sym_SLASH] = ACTIONS(940),
    [anon_sym_DASH] = ACTIONS(940),
    [anon_sym_PERCENT] = ACTIONS(940),
    [anon_sym_EQ_EQ] = ACTIONS(940),
    [anon_sym_BANG_EQ] = ACTIONS(940),
    [anon_sym_LT] = ACTIONS(942),
    [anon_sym_LT_EQ] = ACTIONS(940),
    [anon_sym_lt] = ACTIONS(942),
    [anon_sym_lte] = ACTIONS(942),
    [anon_sym_gt] = ACTIONS(942),
    [anon_sym_gte] = ACTIONS(942),
    [anon_sym_BANG] = ACTIONS(942),
    [anon_sym_AMP_AMP] = ACTIONS(940),
    [anon_sym_PIPE_PIPE] = ACTIONS(940),
    [anon_sym_QMARK_QMARK] = ACTIONS(940),
    [anon_sym_EQ] = ACTIONS(942),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(940),
    [sym_number] = ACTIONS(942),
    [anon_sym_true] = ACTIONS(942),
    [anon_sym_LBRACK] = ACTIONS(940),
    [anon_sym_RBRACK] = ACTIONS(940),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(942),
    [anon_sym_DOT] = ACTIONS(942),
  },
  [286] = {
    [sym_type] = STATE(325),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat2] = STATE(325),
    [anon_sym_LBRACE] = ACTIONS(441),
    [anon_sym_as] = ACTIONS(443),
    [anon_sym_QMARK] = ACTIONS(443),
    [anon_sym_RPAREN] = ACTIONS(441),
    [anon_sym_using] = ACTIONS(443),
    [anon_sym_COMMA] = ACTIONS(441),
    [anon_sym_DOT_DOT] = ACTIONS(443),
    [anon_sym_DOT_DOT_LT] = ACTIONS(441),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(441),
    [anon_sym_COLON] = ACTIONS(441),
    [anon_sym_STAR] = ACTIONS(441),
    [anon_sym_PLUS] = ACTIONS(441),
    [anon_sym_SLASH] = ACTIONS(441),
    [anon_sym_DASH] = ACTIONS(441),
    [anon_sym_PERCENT] = ACTIONS(441),
    [anon_sym_EQ_EQ] = ACTIONS(441),
    [anon_sym_BANG_EQ] = ACTIONS(441),
    [anon_sym_LT] = ACTIONS(443),
    [anon_sym_LT_EQ] = ACTIONS(441),
    [anon_sym_lt] = ACTIONS(443),
    [anon_sym_lte] = ACTIONS(443),
    [anon_sym_gt] = ACTIONS(443),
    [anon_sym_gte] = ACTIONS(443),
    [anon_sym_BANG] = ACTIONS(443),
    [anon_sym_AMP_AMP] = ACTIONS(441),
    [anon_sym_PIPE_PIPE] = ACTIONS(441),
    [anon_sym_QMARK_QMARK] = ACTIONS(441),
    [anon_sym_EQ] = ACTIONS(443),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(441),
    [sym_number] = ACTIONS(443),
    [anon_sym_true] = ACTIONS(443),
    [anon_sym_LBRACK] = ACTIONS(441),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(443),
    [anon_sym_DOT] = ACTIONS(443),
  },
  [287] = {
    [sym_group] = STATE(117),
    [aux_sym_top_level_repeat1] = STATE(326),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_as] = ACTIONS(207),
    [anon_sym_QMARK] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_using] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_DOT_DOT] = ACTIONS(207),
    [anon_sym_DOT_DOT_LT] = ACTIONS(205),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(205),
    [anon_sym_COLON] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_PLUS] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(205),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_PERCENT] = ACTIONS(205),
    [anon_sym_EQ_EQ] = ACTIONS(205),
    [anon_sym_BANG_EQ] = ACTIONS(205),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_LT_EQ] = ACTIONS(205),
    [anon_sym_lt] = ACTIONS(207),
    [anon_sym_lte] = ACTIONS(207),
    [anon_sym_gt] = ACTIONS(207),
    [anon_sym_gte] = ACTIONS(207),
    [anon_sym_BANG] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(205),
    [anon_sym_PIPE_PIPE] = ACTIONS(205),
    [anon_sym_QMARK_QMARK] = ACTIONS(205),
    [anon_sym_EQ] = ACTIONS(207),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(205),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(205),
    [sym_number] = ACTIONS(207),
    [anon_sym_true] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(205),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(207),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(207),
  },
  [288] = {
    [sym_group] = STATE(215),
    [aux_sym_top_level_repeat1] = STATE(327),
    [anon_sym_LBRACE] = ACTIONS(482),
    [anon_sym_as] = ACTIONS(484),
    [anon_sym_QMARK] = ACTIONS(484),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(482),
    [anon_sym_using] = ACTIONS(484),
    [anon_sym_COMMA] = ACTIONS(482),
    [anon_sym_DOT_DOT] = ACTIONS(484),
    [anon_sym_DOT_DOT_LT] = ACTIONS(482),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(482),
    [anon_sym_COLON] = ACTIONS(482),
    [anon_sym_STAR] = ACTIONS(482),
    [anon_sym_PLUS] = ACTIONS(482),
    [anon_sym_SLASH] = ACTIONS(482),
    [anon_sym_DASH] = ACTIONS(482),
    [anon_sym_PERCENT] = ACTIONS(482),
    [anon_sym_EQ_EQ] = ACTIONS(482),
    [anon_sym_BANG_EQ] = ACTIONS(482),
    [anon_sym_LT] = ACTIONS(484),
    [anon_sym_LT_EQ] = ACTIONS(482),
    [anon_sym_lt] = ACTIONS(484),
    [anon_sym_lte] = ACTIONS(484),
    [anon_sym_gt] = ACTIONS(484),
    [anon_sym_gte] = ACTIONS(484),
    [anon_sym_BANG] = ACTIONS(484),
    [anon_sym_AMP_AMP] = ACTIONS(482),
    [anon_sym_PIPE_PIPE] = ACTIONS(482),
    [anon_sym_QMARK_QMARK] = ACTIONS(482),
    [anon_sym_EQ] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(482),
    [sym_number] = ACTIONS(484),
    [anon_sym_true] = ACTIONS(484),
    [anon_sym_LBRACK] = ACTIONS(482),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(484),
  },
  [289] = {
    [sym_type] = STATE(325),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat2] = STATE(325),
    [anon_sym_LBRACE] = ACTIONS(490),
    [anon_sym_as] = ACTIONS(492),
    [anon_sym_QMARK] = ACTIONS(492),
    [anon_sym_RPAREN] = ACTIONS(490),
    [anon_sym_using] = ACTIONS(492),
    [anon_sym_COMMA] = ACTIONS(490),
    [anon_sym_DOT_DOT] = ACTIONS(492),
    [anon_sym_DOT_DOT_LT] = ACTIONS(490),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(490),
    [anon_sym_COLON] = ACTIONS(490),
    [anon_sym_STAR] = ACTIONS(490),
    [anon_sym_PLUS] = ACTIONS(490),
    [anon_sym_SLASH] = ACTIONS(490),
    [anon_sym_DASH] = ACTIONS(490),
    [anon_sym_PERCENT] = ACTIONS(490),
    [anon_sym_EQ_EQ] = ACTIONS(490),
    [anon_sym_BANG_EQ] = ACTIONS(490),
    [anon_sym_LT] = ACTIONS(492),
    [anon_sym_LT_EQ] = ACTIONS(490),
    [anon_sym_lt] = ACTIONS(492),
    [anon_sym_lte] = ACTIONS(492),
    [anon_sym_gt] = ACTIONS(492),
    [anon_sym_gte] = ACTIONS(492),
    [anon_sym_BANG] = ACTIONS(492),
    [anon_sym_AMP_AMP] = ACTIONS(490),
    [anon_sym_PIPE_PIPE] = ACTIONS(490),
    [anon_sym_QMARK_QMARK] = ACTIONS(490),
    [anon_sym_EQ] = ACTIONS(492),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(490),
    [sym_number] = ACTIONS(492),
    [anon_sym_true] = ACTIONS(492),
    [anon_sym_LBRACK] = ACTIONS(490),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(492),
    [anon_sym_DOT] = ACTIONS(492),
  },
  [290] = {
    [sym_type] = STATE(328),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat2] = STATE(328),
    [anon_sym_LBRACE] = ACTIONS(57),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(472),
    [anon_sym_DOT] = ACTIONS(183),
  },
  [291] = {
    [sym_type] = STATE(329),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat2] = STATE(329),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(492),
    [anon_sym_QMARK] = ACTIONS(492),
    [anon_sym_RPAREN] = ACTIONS(490),
    [anon_sym_using] = ACTIONS(492),
    [anon_sym_COMMA] = ACTIONS(490),
    [anon_sym_DOT_DOT] = ACTIONS(492),
    [anon_sym_DOT_DOT_LT] = ACTIONS(490),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(490),
    [anon_sym_COLON] = ACTIONS(490),
    [anon_sym_STAR] = ACTIONS(490),
    [anon_sym_PLUS] = ACTIONS(490),
    [anon_sym_SLASH] = ACTIONS(490),
    [anon_sym_DASH] = ACTIONS(490),
    [anon_sym_PERCENT] = ACTIONS(490),
    [anon_sym_EQ_EQ] = ACTIONS(490),
    [anon_sym_BANG_EQ] = ACTIONS(490),
    [anon_sym_LT] = ACTIONS(492),
    [anon_sym_LT_EQ] = ACTIONS(490),
    [anon_sym_lt] = ACTIONS(492),
    [anon_sym_lte] = ACTIONS(492),
    [anon_sym_gt] = ACTIONS(492),
    [anon_sym_gte] = ACTIONS(492),
    [anon_sym_BANG] = ACTIONS(492),
    [anon_sym_AMP_AMP] = ACTIONS(490),
    [anon_sym_PIPE_PIPE] = ACTIONS(490),
    [anon_sym_QMARK_QMARK] = ACTIONS(490),
    [anon_sym_EQ] = ACTIONS(492),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(472),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [292] = {
    [sym_type] = STATE(292),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(292),
    [anon_sym_LBRACE] = ACTIONS(494),
    [anon_sym_as] = ACTIONS(497),
    [anon_sym_QMARK] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(499),
    [anon_sym_using] = ACTIONS(497),
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_DOT_DOT] = ACTIONS(497),
    [anon_sym_DOT_DOT_LT] = ACTIONS(499),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(499),
    [anon_sym_COLON] = ACTIONS(499),
    [anon_sym_STAR] = ACTIONS(499),
    [anon_sym_PLUS] = ACTIONS(499),
    [anon_sym_SLASH] = ACTIONS(499),
    [anon_sym_DASH] = ACTIONS(499),
    [anon_sym_PERCENT] = ACTIONS(499),
    [anon_sym_EQ_EQ] = ACTIONS(499),
    [anon_sym_BANG_EQ] = ACTIONS(499),
    [anon_sym_LT] = ACTIONS(497),
    [anon_sym_LT_EQ] = ACTIONS(499),
    [anon_sym_lt] = ACTIONS(497),
    [anon_sym_lte] = ACTIONS(497),
    [anon_sym_gt] = ACTIONS(497),
    [anon_sym_gte] = ACTIONS(497),
    [anon_sym_BANG] = ACTIONS(497),
    [anon_sym_AMP_AMP] = ACTIONS(499),
    [anon_sym_PIPE_PIPE] = ACTIONS(499),
    [anon_sym_QMARK_QMARK] = ACTIONS(499),
    [anon_sym_EQ] = ACTIONS(497),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(501),
    [sym_number] = ACTIONS(504),
    [anon_sym_true] = ACTIONS(507),
    [anon_sym_LBRACK] = ACTIONS(510),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1225),
    [anon_sym_DOT] = ACTIONS(516),
  },
  [293] = {
    [anon_sym_LBRACE] = ACTIONS(1228),
    [anon_sym_as] = ACTIONS(1230),
    [anon_sym_QMARK] = ACTIONS(1230),
    [anon_sym_LPAREN] = ACTIONS(1228),
    [anon_sym_RPAREN] = ACTIONS(1228),
    [anon_sym_GT] = ACTIONS(1228),
    [anon_sym_using] = ACTIONS(1230),
    [anon_sym_COMMA] = ACTIONS(1228),
    [anon_sym_DOT_DOT] = ACTIONS(1230),
    [anon_sym_DOT_DOT_LT] = ACTIONS(1228),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(1228),
    [anon_sym_COLON] = ACTIONS(1228),
    [anon_sym_STAR] = ACTIONS(1228),
    [anon_sym_PLUS] = ACTIONS(1228),
    [anon_sym_SLASH] = ACTIONS(1228),
    [anon_sym_DASH] = ACTIONS(1228),
    [anon_sym_PERCENT] = ACTIONS(1228),
    [anon_sym_EQ_EQ] = ACTIONS(1228),
    [anon_sym_BANG_EQ] = ACTIONS(1228),
    [anon_sym_LT] = ACTIONS(1230),
    [anon_sym_LT_EQ] = ACTIONS(1228),
    [anon_sym_lt] = ACTIONS(1230),
    [anon_sym_lte] = ACTIONS(1230),
    [anon_sym_gt] = ACTIONS(1230),
    [anon_sym_gte] = ACTIONS(1230),
    [anon_sym_BANG] = ACTIONS(1230),
    [anon_sym_AMP_AMP] = ACTIONS(1228),
    [anon_sym_PIPE_PIPE] = ACTIONS(1228),
    [anon_sym_QMARK_QMARK] = ACTIONS(1228),
    [anon_sym_EQ] = ACTIONS(1230),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1228),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1228),
    [sym_number] = ACTIONS(1230),
    [anon_sym_true] = ACTIONS(1230),
    [anon_sym_LBRACK] = ACTIONS(1228),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1230),
    [anon_sym_DOT] = ACTIONS(1230),
  },
  [294] = {
    [sym_parameter_group] = STATE(294),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(213),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(212),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(213),
    [aux_sym_group_repeat1] = STATE(294),
    [anon_sym_LBRACE] = ACTIONS(525),
    [anon_sym_as] = ACTIONS(1232),
    [anon_sym_QMARK] = ACTIONS(1235),
    [anon_sym_RPAREN] = ACTIONS(534),
    [anon_sym_using] = ACTIONS(536),
    [anon_sym_COMMA] = ACTIONS(539),
    [anon_sym_DOT_DOT] = ACTIONS(536),
    [anon_sym_DOT_DOT_LT] = ACTIONS(539),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(539),
    [anon_sym_COLON] = ACTIONS(539),
    [anon_sym_STAR] = ACTIONS(539),
    [anon_sym_PLUS] = ACTIONS(539),
    [anon_sym_SLASH] = ACTIONS(539),
    [anon_sym_DASH] = ACTIONS(539),
    [anon_sym_PERCENT] = ACTIONS(539),
    [anon_sym_EQ_EQ] = ACTIONS(539),
    [anon_sym_BANG_EQ] = ACTIONS(539),
    [anon_sym_LT] = ACTIONS(536),
    [anon_sym_LT_EQ] = ACTIONS(539),
    [anon_sym_lt] = ACTIONS(536),
    [anon_sym_lte] = ACTIONS(536),
    [anon_sym_gt] = ACTIONS(536),
    [anon_sym_gte] = ACTIONS(536),
    [anon_sym_BANG] = ACTIONS(536),
    [anon_sym_AMP_AMP] = ACTIONS(539),
    [anon_sym_PIPE_PIPE] = ACTIONS(539),
    [anon_sym_QMARK_QMARK] = ACTIONS(539),
    [anon_sym_EQ] = ACTIONS(536),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(542),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(542),
    [sym_number] = ACTIONS(545),
    [anon_sym_true] = ACTIONS(548),
    [anon_sym_LBRACK] = ACTIONS(551),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1238),
    [anon_sym_DOT] = ACTIONS(557),
  },
  [295] = {
    [sym_directive] = STATE(222),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_elseif] = STATE(222),
    [sym_if_middle] = STATE(330),
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
    [aux_sym_if_repeat1] = STATE(330),
    [anon_sym_LT_POUND] = ACTIONS(11),
    [anon_sym_LT_AT] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1241),
    [anon_sym_LT_POUNDelseif] = ACTIONS(523),
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
  [296] = {
    [anon_sym_LT_POUND] = ACTIONS(1243),
    [anon_sym_LT_AT] = ACTIONS(1245),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1245),
    [anon_sym_LT_POUNDif] = ACTIONS(1245),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1245),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1245),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1245),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1245),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1245),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1245),
    [sym_fallback] = ACTIONS(1245),
    [sym_flush] = ACTIONS(1245),
    [anon_sym_LT_POUNDftl] = ACTIONS(1245),
    [anon_sym_LT_POUNDimport] = ACTIONS(1245),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1245),
    [sym_lt] = ACTIONS(1245),
    [sym_nt] = ACTIONS(1245),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1245),
    [sym_rt] = ACTIONS(1245),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1245),
    [sym_stop] = ACTIONS(1245),
    [sym_t] = ACTIONS(1245),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1245),
    [anon_sym_LT_POUNDassign] = ACTIONS(1245),
    [sym_end_assign] = ACTIONS(1245),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1245),
    [sym_end_global] = ACTIONS(1245),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1245),
    [sym_end_local] = ACTIONS(1245),
  },
  [297] = {
    [sym_parameter_group] = STATE(125),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(40),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(39),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(40),
    [aux_sym_group_repeat1] = STATE(125),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(1247),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [298] = {
    [ts_builtin_sym_end] = ACTIONS(1249),
    [sym_comment] = ACTIONS(1249),
    [anon_sym_DOLLAR] = ACTIONS(1249),
    [anon_sym_LT_POUND] = ACTIONS(1251),
    [anon_sym_LT_AT] = ACTIONS(1249),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1249),
    [sym_break] = ACTIONS(1249),
    [sym_continue] = ACTIONS(1249),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1249),
    [anon_sym_LT_POUNDitems] = ACTIONS(1249),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1249),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1249),
    [anon_sym_LT_POUNDif] = ACTIONS(1249),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1249),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1249),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1249),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1249),
    [anon_sym_LT_POUNDcase] = ACTIONS(1249),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1249),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1249),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1249),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1249),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1249),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1249),
    [anon_sym_LT_POUNDnested] = ACTIONS(1249),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1249),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1249),
    [sym_recover] = ACTIONS(1249),
    [sym_fallback] = ACTIONS(1249),
    [sym_flush] = ACTIONS(1249),
    [anon_sym_LT_POUNDftl] = ACTIONS(1249),
    [anon_sym_LT_POUNDimport] = ACTIONS(1249),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1249),
    [sym_lt] = ACTIONS(1249),
    [sym_nt] = ACTIONS(1249),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1249),
    [sym_rt] = ACTIONS(1249),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1249),
    [sym_stop] = ACTIONS(1249),
    [sym_t] = ACTIONS(1249),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1249),
    [anon_sym_LT_POUNDassign] = ACTIONS(1249),
    [sym_end_assign] = ACTIONS(1249),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1249),
    [sym_end_global] = ACTIONS(1249),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1249),
    [sym_end_local] = ACTIONS(1249),
  },
  [299] = {
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1253),
  },
  [300] = {
    [sym_directive] = STATE(222),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_elseif] = STATE(222),
    [sym_if_middle] = STATE(300),
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
    [aux_sym_if_repeat1] = STATE(300),
    [anon_sym_LT_POUND] = ACTIONS(1255),
    [anon_sym_LT_AT] = ACTIONS(1258),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1261),
    [anon_sym_LT_POUNDif] = ACTIONS(1263),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1261),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1266),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1269),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1272),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1275),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1278),
    [sym_fallback] = ACTIONS(1281),
    [sym_flush] = ACTIONS(1281),
    [anon_sym_LT_POUNDftl] = ACTIONS(1284),
    [anon_sym_LT_POUNDimport] = ACTIONS(1287),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1290),
    [sym_lt] = ACTIONS(1281),
    [sym_nt] = ACTIONS(1281),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1293),
    [sym_rt] = ACTIONS(1281),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1296),
    [sym_stop] = ACTIONS(1281),
    [sym_t] = ACTIONS(1281),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1299),
    [anon_sym_LT_POUNDassign] = ACTIONS(1302),
    [sym_end_assign] = ACTIONS(1305),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1308),
    [sym_end_global] = ACTIONS(1311),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1314),
    [sym_end_local] = ACTIONS(1317),
  },
  [301] = {
    [anon_sym_LBRACE] = ACTIONS(844),
    [anon_sym_GT] = ACTIONS(844),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(844),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(844),
    [sym_number] = ACTIONS(846),
    [anon_sym_true] = ACTIONS(846),
    [anon_sym_LBRACK] = ACTIONS(844),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(846),
    [anon_sym_DOT] = ACTIONS(844),
  },
  [302] = {
    [anon_sym_LBRACE] = ACTIONS(884),
    [anon_sym_GT] = ACTIONS(884),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(884),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(884),
    [sym_number] = ACTIONS(886),
    [anon_sym_true] = ACTIONS(886),
    [anon_sym_LBRACK] = ACTIONS(884),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(886),
    [anon_sym_DOT] = ACTIONS(884),
  },
  [303] = {
    [anon_sym_LBRACE] = ACTIONS(917),
    [anon_sym_GT] = ACTIONS(917),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(917),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(917),
    [sym_number] = ACTIONS(919),
    [anon_sym_true] = ACTIONS(919),
    [anon_sym_LBRACK] = ACTIONS(917),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(919),
    [anon_sym_DOT] = ACTIONS(917),
  },
  [304] = {
    [sym_parameter_group] = STATE(294),
    [sym_as_expression] = STATE(38),
    [sym_expression] = STATE(38),
    [sym_type] = STATE(213),
    [sym_built_in] = STATE(38),
    [sym_operator] = STATE(212),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat1] = STATE(213),
    [aux_sym_group_repeat1] = STATE(294),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(466),
    [anon_sym_QMARK] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(1320),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_DOT_DOT_LT] = ACTIONS(65),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(63),
    [anon_sym_lte] = ACTIONS(63),
    [anon_sym_gt] = ACTIONS(63),
    [anon_sym_gte] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_QMARK_QMARK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(472),
    [anon_sym_DOT] = ACTIONS(77),
  },
  [305] = {
    [anon_sym_LBRACE] = ACTIONS(925),
    [anon_sym_GT] = ACTIONS(925),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(925),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(925),
    [sym_number] = ACTIONS(927),
    [anon_sym_true] = ACTIONS(927),
    [anon_sym_LBRACK] = ACTIONS(925),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(927),
    [anon_sym_DOT] = ACTIONS(925),
  },
  [306] = {
    [aux_sym_top_level_repeat1] = STATE(306),
    [anon_sym_LBRACE] = ACTIONS(929),
    [anon_sym_LPAREN] = ACTIONS(929),
    [anon_sym_GT] = ACTIONS(929),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(929),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(929),
    [sym_number] = ACTIONS(931),
    [anon_sym_true] = ACTIONS(931),
    [anon_sym_LBRACK] = ACTIONS(929),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(931),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1322),
    [anon_sym_DOT] = ACTIONS(931),
  },
  [307] = {
    [aux_sym_top_level_repeat1] = STATE(307),
    [anon_sym_LPAREN] = ACTIONS(929),
    [anon_sym_GT] = ACTIONS(929),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(933),
  },
  [308] = {
    [anon_sym_GT] = ACTIONS(1325),
  },
  [309] = {
    [sym_directive] = STATE(335),
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
    [aux_sym_case_repeat1] = STATE(335),
    [anon_sym_LT_POUND] = ACTIONS(11),
    [anon_sym_LT_AT] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1327),
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
    [ts_builtin_sym_end] = ACTIONS(1329),
    [sym_comment] = ACTIONS(1329),
    [anon_sym_DOLLAR] = ACTIONS(1329),
    [anon_sym_LT_POUND] = ACTIONS(1331),
    [anon_sym_LT_AT] = ACTIONS(1329),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1329),
    [sym_break] = ACTIONS(1329),
    [sym_continue] = ACTIONS(1329),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1329),
    [anon_sym_LT_POUNDitems] = ACTIONS(1329),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1329),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1329),
    [anon_sym_LT_POUNDif] = ACTIONS(1329),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1329),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1329),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1329),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1329),
    [anon_sym_LT_POUNDcase] = ACTIONS(1329),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1329),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1329),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1329),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1329),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1329),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1329),
    [anon_sym_LT_POUNDnested] = ACTIONS(1329),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1329),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1329),
    [sym_recover] = ACTIONS(1329),
    [sym_fallback] = ACTIONS(1329),
    [sym_flush] = ACTIONS(1329),
    [anon_sym_LT_POUNDftl] = ACTIONS(1329),
    [anon_sym_LT_POUNDimport] = ACTIONS(1329),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1329),
    [sym_lt] = ACTIONS(1329),
    [sym_nt] = ACTIONS(1329),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1329),
    [sym_rt] = ACTIONS(1329),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1329),
    [sym_stop] = ACTIONS(1329),
    [sym_t] = ACTIONS(1329),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1329),
    [anon_sym_LT_POUNDassign] = ACTIONS(1329),
    [sym_end_assign] = ACTIONS(1329),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1329),
    [sym_end_global] = ACTIONS(1329),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1329),
    [sym_end_local] = ACTIONS(1329),
  },
  [311] = {
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1333),
  },
  [312] = {
    [sym_case] = STATE(241),
    [sym_switch_middle] = STATE(312),
    [aux_sym_switch_repeat1] = STATE(312),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1335),
    [anon_sym_LT_POUNDcase] = ACTIONS(1337),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1335),
  },
  [313] = {
    [anon_sym_LT_POUND] = ACTIONS(1340),
    [anon_sym_LT_AT] = ACTIONS(1342),
    [anon_sym_LT_POUNDif] = ACTIONS(1342),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1342),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1342),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1342),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1342),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1342),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1342),
    [anon_sym_LT_POUNDnested] = ACTIONS(1342),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1342),
    [sym_fallback] = ACTIONS(1342),
    [sym_flush] = ACTIONS(1342),
    [anon_sym_LT_POUNDftl] = ACTIONS(1342),
    [anon_sym_LT_POUNDimport] = ACTIONS(1342),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1342),
    [sym_lt] = ACTIONS(1342),
    [sym_nt] = ACTIONS(1342),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1342),
    [sym_rt] = ACTIONS(1342),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1342),
    [sym_stop] = ACTIONS(1342),
    [sym_t] = ACTIONS(1342),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1342),
    [anon_sym_LT_POUNDassign] = ACTIONS(1342),
    [sym_end_assign] = ACTIONS(1342),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1342),
    [sym_end_global] = ACTIONS(1342),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1342),
    [sym_end_local] = ACTIONS(1342),
  },
  [314] = {
    [ts_builtin_sym_end] = ACTIONS(1344),
    [sym_comment] = ACTIONS(1344),
    [anon_sym_DOLLAR] = ACTIONS(1344),
    [anon_sym_LT_POUND] = ACTIONS(1346),
    [anon_sym_LT_AT] = ACTIONS(1344),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1344),
    [sym_break] = ACTIONS(1344),
    [sym_continue] = ACTIONS(1344),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1344),
    [anon_sym_LT_POUNDitems] = ACTIONS(1344),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1344),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1344),
    [anon_sym_LT_POUNDif] = ACTIONS(1344),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1344),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1344),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1344),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1344),
    [anon_sym_LT_POUNDcase] = ACTIONS(1344),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1344),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1344),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1344),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1344),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1344),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1344),
    [anon_sym_LT_POUNDnested] = ACTIONS(1344),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1344),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1344),
    [sym_recover] = ACTIONS(1344),
    [sym_fallback] = ACTIONS(1344),
    [sym_flush] = ACTIONS(1344),
    [anon_sym_LT_POUNDftl] = ACTIONS(1344),
    [anon_sym_LT_POUNDimport] = ACTIONS(1344),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1344),
    [sym_lt] = ACTIONS(1344),
    [sym_nt] = ACTIONS(1344),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1344),
    [sym_rt] = ACTIONS(1344),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1344),
    [sym_stop] = ACTIONS(1344),
    [sym_t] = ACTIONS(1344),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1344),
    [anon_sym_LT_POUNDassign] = ACTIONS(1344),
    [sym_end_assign] = ACTIONS(1344),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1344),
    [sym_end_global] = ACTIONS(1344),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1344),
    [sym_end_local] = ACTIONS(1344),
  },
  [315] = {
    [anon_sym_LT_POUND] = ACTIONS(1348),
    [anon_sym_LT_AT] = ACTIONS(1350),
    [anon_sym_LT_POUNDif] = ACTIONS(1350),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1350),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1350),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1350),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1350),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1350),
    [anon_sym_LT_POUNDnested] = ACTIONS(1350),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1350),
    [sym_fallback] = ACTIONS(1350),
    [sym_flush] = ACTIONS(1350),
    [anon_sym_LT_POUNDftl] = ACTIONS(1350),
    [anon_sym_LT_POUNDimport] = ACTIONS(1350),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1350),
    [sym_lt] = ACTIONS(1350),
    [sym_nt] = ACTIONS(1350),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1350),
    [sym_rt] = ACTIONS(1350),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1350),
    [sym_stop] = ACTIONS(1350),
    [sym_t] = ACTIONS(1350),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1350),
    [anon_sym_LT_POUNDassign] = ACTIONS(1350),
    [sym_end_assign] = ACTIONS(1350),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1350),
    [sym_end_global] = ACTIONS(1350),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1350),
    [sym_end_local] = ACTIONS(1350),
  },
  [316] = {
    [ts_builtin_sym_end] = ACTIONS(1352),
    [sym_comment] = ACTIONS(1352),
    [anon_sym_DOLLAR] = ACTIONS(1352),
    [anon_sym_LT_POUND] = ACTIONS(1354),
    [anon_sym_LT_AT] = ACTIONS(1352),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1352),
    [sym_break] = ACTIONS(1352),
    [sym_continue] = ACTIONS(1352),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1352),
    [anon_sym_LT_POUNDitems] = ACTIONS(1352),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1352),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1352),
    [anon_sym_LT_POUNDif] = ACTIONS(1352),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1352),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1352),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1352),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1352),
    [anon_sym_LT_POUNDcase] = ACTIONS(1352),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1352),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1352),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1352),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1352),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1352),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1352),
    [anon_sym_LT_POUNDnested] = ACTIONS(1352),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1352),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1352),
    [sym_recover] = ACTIONS(1352),
    [sym_fallback] = ACTIONS(1352),
    [sym_flush] = ACTIONS(1352),
    [anon_sym_LT_POUNDftl] = ACTIONS(1352),
    [anon_sym_LT_POUNDimport] = ACTIONS(1352),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1352),
    [sym_lt] = ACTIONS(1352),
    [sym_nt] = ACTIONS(1352),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1352),
    [sym_rt] = ACTIONS(1352),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1352),
    [sym_stop] = ACTIONS(1352),
    [sym_t] = ACTIONS(1352),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1352),
    [anon_sym_LT_POUNDassign] = ACTIONS(1352),
    [sym_end_assign] = ACTIONS(1352),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1352),
    [sym_end_global] = ACTIONS(1352),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1352),
    [sym_end_local] = ACTIONS(1352),
  },
  [317] = {
    [anon_sym_LBRACE] = ACTIONS(1228),
    [anon_sym_RBRACE] = ACTIONS(1228),
    [anon_sym_using] = ACTIONS(1230),
    [anon_sym_COMMA] = ACTIONS(1228),
    [anon_sym_DOT_DOT] = ACTIONS(1230),
    [anon_sym_DOT_DOT_LT] = ACTIONS(1228),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(1228),
    [anon_sym_COLON] = ACTIONS(1228),
    [anon_sym_STAR] = ACTIONS(1228),
    [anon_sym_PLUS] = ACTIONS(1228),
    [anon_sym_SLASH] = ACTIONS(1228),
    [anon_sym_DASH] = ACTIONS(1228),
    [anon_sym_PERCENT] = ACTIONS(1228),
    [anon_sym_EQ_EQ] = ACTIONS(1228),
    [anon_sym_BANG_EQ] = ACTIONS(1228),
    [anon_sym_LT] = ACTIONS(1230),
    [anon_sym_LT_EQ] = ACTIONS(1228),
    [anon_sym_lt] = ACTIONS(1230),
    [anon_sym_lte] = ACTIONS(1230),
    [anon_sym_gt] = ACTIONS(1230),
    [anon_sym_gte] = ACTIONS(1230),
    [anon_sym_BANG] = ACTIONS(1230),
    [anon_sym_AMP_AMP] = ACTIONS(1228),
    [anon_sym_PIPE_PIPE] = ACTIONS(1228),
    [anon_sym_QMARK_QMARK] = ACTIONS(1228),
    [anon_sym_EQ] = ACTIONS(1230),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1228),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1228),
    [sym_number] = ACTIONS(1230),
    [anon_sym_true] = ACTIONS(1230),
    [anon_sym_LBRACK] = ACTIONS(1228),
    [anon_sym_RBRACK] = ACTIONS(1228),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1230),
    [anon_sym_DOT] = ACTIONS(1230),
  },
  [318] = {
    [sym_directive] = STATE(265),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_list_middle] = STATE(337),
    [sym_items] = STATE(265),
    [sym_sep] = STATE(265),
    [sym_sep_block] = STATE(270),
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
    [aux_sym_list_repeat1] = STATE(337),
    [anon_sym_LT_POUND] = ACTIONS(11),
    [anon_sym_LT_AT] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1356),
    [sym_break] = ACTIONS(772),
    [sym_continue] = ACTIONS(772),
    [anon_sym_LT_POUNDitems] = ACTIONS(776),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(778),
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
  [319] = {
    [anon_sym_GT] = ACTIONS(1358),
  },
  [320] = {
    [anon_sym_LT_POUND] = ACTIONS(1360),
    [anon_sym_LT_AT] = ACTIONS(1362),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1362),
    [sym_break] = ACTIONS(1362),
    [sym_continue] = ACTIONS(1362),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1362),
    [anon_sym_LT_POUNDitems] = ACTIONS(1362),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1362),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1362),
    [anon_sym_LT_POUNDif] = ACTIONS(1362),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1362),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1362),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1362),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1362),
    [sym_fallback] = ACTIONS(1362),
    [sym_flush] = ACTIONS(1362),
    [anon_sym_LT_POUNDftl] = ACTIONS(1362),
    [anon_sym_LT_POUNDimport] = ACTIONS(1362),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1362),
    [sym_lt] = ACTIONS(1362),
    [sym_nt] = ACTIONS(1362),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1362),
    [sym_rt] = ACTIONS(1362),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1362),
    [sym_stop] = ACTIONS(1362),
    [sym_t] = ACTIONS(1362),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1362),
    [anon_sym_LT_POUNDassign] = ACTIONS(1362),
    [sym_end_assign] = ACTIONS(1362),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1362),
    [sym_end_global] = ACTIONS(1362),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1362),
    [sym_end_local] = ACTIONS(1362),
  },
  [321] = {
    [ts_builtin_sym_end] = ACTIONS(1364),
    [sym_comment] = ACTIONS(1364),
    [anon_sym_DOLLAR] = ACTIONS(1364),
    [anon_sym_LT_POUND] = ACTIONS(1366),
    [anon_sym_LT_AT] = ACTIONS(1364),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1364),
    [sym_break] = ACTIONS(1364),
    [sym_continue] = ACTIONS(1364),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1364),
    [anon_sym_LT_POUNDitems] = ACTIONS(1364),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1364),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1364),
    [anon_sym_LT_POUNDif] = ACTIONS(1364),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1364),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1364),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1364),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1364),
    [anon_sym_LT_POUNDcase] = ACTIONS(1364),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1364),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1364),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1364),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1364),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1364),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1364),
    [anon_sym_LT_POUNDnested] = ACTIONS(1364),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1364),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1364),
    [sym_recover] = ACTIONS(1364),
    [sym_fallback] = ACTIONS(1364),
    [sym_flush] = ACTIONS(1364),
    [anon_sym_LT_POUNDftl] = ACTIONS(1364),
    [anon_sym_LT_POUNDimport] = ACTIONS(1364),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1364),
    [sym_lt] = ACTIONS(1364),
    [sym_nt] = ACTIONS(1364),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1364),
    [sym_rt] = ACTIONS(1364),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1364),
    [sym_stop] = ACTIONS(1364),
    [sym_t] = ACTIONS(1364),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1364),
    [anon_sym_LT_POUNDassign] = ACTIONS(1364),
    [sym_end_assign] = ACTIONS(1364),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1364),
    [sym_end_global] = ACTIONS(1364),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1364),
    [sym_end_local] = ACTIONS(1364),
  },
  [322] = {
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1368),
  },
  [323] = {
    [sym_directive] = STATE(265),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_list_middle] = STATE(323),
    [sym_items] = STATE(265),
    [sym_sep] = STATE(265),
    [sym_sep_block] = STATE(270),
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
    [aux_sym_list_repeat1] = STATE(323),
    [anon_sym_LT_POUND] = ACTIONS(1370),
    [anon_sym_LT_AT] = ACTIONS(1373),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1376),
    [sym_break] = ACTIONS(1378),
    [sym_continue] = ACTIONS(1378),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1376),
    [anon_sym_LT_POUNDitems] = ACTIONS(1381),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1384),
    [anon_sym_LT_POUNDif] = ACTIONS(1387),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1390),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1393),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1396),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1399),
    [sym_fallback] = ACTIONS(1402),
    [sym_flush] = ACTIONS(1402),
    [anon_sym_LT_POUNDftl] = ACTIONS(1405),
    [anon_sym_LT_POUNDimport] = ACTIONS(1408),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1411),
    [sym_lt] = ACTIONS(1402),
    [sym_nt] = ACTIONS(1402),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1414),
    [sym_rt] = ACTIONS(1402),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1417),
    [sym_stop] = ACTIONS(1402),
    [sym_t] = ACTIONS(1402),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1420),
    [anon_sym_LT_POUNDassign] = ACTIONS(1423),
    [sym_end_assign] = ACTIONS(1426),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1429),
    [sym_end_global] = ACTIONS(1432),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1435),
    [sym_end_local] = ACTIONS(1438),
  },
  [324] = {
    [anon_sym_LBRACE] = ACTIONS(1228),
    [anon_sym_as] = ACTIONS(1230),
    [anon_sym_QMARK] = ACTIONS(1230),
    [anon_sym_LPAREN] = ACTIONS(1228),
    [anon_sym_GT] = ACTIONS(1228),
    [anon_sym_using] = ACTIONS(1230),
    [anon_sym_COMMA] = ACTIONS(1228),
    [anon_sym_DOT_DOT] = ACTIONS(1230),
    [anon_sym_DOT_DOT_LT] = ACTIONS(1228),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(1228),
    [anon_sym_COLON] = ACTIONS(1228),
    [anon_sym_STAR] = ACTIONS(1228),
    [anon_sym_PLUS] = ACTIONS(1228),
    [anon_sym_SLASH] = ACTIONS(1230),
    [anon_sym_DASH] = ACTIONS(1228),
    [anon_sym_PERCENT] = ACTIONS(1228),
    [anon_sym_EQ_EQ] = ACTIONS(1228),
    [anon_sym_BANG_EQ] = ACTIONS(1228),
    [anon_sym_LT] = ACTIONS(1230),
    [anon_sym_LT_EQ] = ACTIONS(1228),
    [anon_sym_lt] = ACTIONS(1230),
    [anon_sym_lte] = ACTIONS(1230),
    [anon_sym_gt] = ACTIONS(1230),
    [anon_sym_gte] = ACTIONS(1230),
    [anon_sym_BANG] = ACTIONS(1230),
    [anon_sym_AMP_AMP] = ACTIONS(1228),
    [anon_sym_PIPE_PIPE] = ACTIONS(1228),
    [anon_sym_QMARK_QMARK] = ACTIONS(1228),
    [anon_sym_EQ] = ACTIONS(1230),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1228),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1228),
    [sym_number] = ACTIONS(1230),
    [anon_sym_true] = ACTIONS(1230),
    [anon_sym_LBRACK] = ACTIONS(1228),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1230),
    [anon_sym_DOT] = ACTIONS(1230),
    [anon_sym_SLASH_GT] = ACTIONS(1228),
  },
  [325] = {
    [sym_type] = STATE(325),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat2] = STATE(325),
    [anon_sym_LBRACE] = ACTIONS(848),
    [anon_sym_as] = ACTIONS(851),
    [anon_sym_QMARK] = ACTIONS(851),
    [anon_sym_RPAREN] = ACTIONS(853),
    [anon_sym_using] = ACTIONS(851),
    [anon_sym_COMMA] = ACTIONS(853),
    [anon_sym_DOT_DOT] = ACTIONS(851),
    [anon_sym_DOT_DOT_LT] = ACTIONS(853),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(853),
    [anon_sym_COLON] = ACTIONS(853),
    [anon_sym_STAR] = ACTIONS(853),
    [anon_sym_PLUS] = ACTIONS(853),
    [anon_sym_SLASH] = ACTIONS(853),
    [anon_sym_DASH] = ACTIONS(853),
    [anon_sym_PERCENT] = ACTIONS(853),
    [anon_sym_EQ_EQ] = ACTIONS(853),
    [anon_sym_BANG_EQ] = ACTIONS(853),
    [anon_sym_LT] = ACTIONS(851),
    [anon_sym_LT_EQ] = ACTIONS(853),
    [anon_sym_lt] = ACTIONS(851),
    [anon_sym_lte] = ACTIONS(851),
    [anon_sym_gt] = ACTIONS(851),
    [anon_sym_gte] = ACTIONS(851),
    [anon_sym_BANG] = ACTIONS(851),
    [anon_sym_AMP_AMP] = ACTIONS(853),
    [anon_sym_PIPE_PIPE] = ACTIONS(853),
    [anon_sym_QMARK_QMARK] = ACTIONS(853),
    [anon_sym_EQ] = ACTIONS(851),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(855),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(855),
    [sym_number] = ACTIONS(858),
    [anon_sym_true] = ACTIONS(861),
    [anon_sym_LBRACK] = ACTIONS(864),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1441),
    [anon_sym_DOT] = ACTIONS(870),
  },
  [326] = {
    [sym_group] = STATE(215),
    [aux_sym_top_level_repeat1] = STATE(327),
    [anon_sym_LBRACE] = ACTIONS(482),
    [anon_sym_as] = ACTIONS(484),
    [anon_sym_QMARK] = ACTIONS(484),
    [anon_sym_LPAREN] = ACTIONS(482),
    [anon_sym_RPAREN] = ACTIONS(482),
    [anon_sym_using] = ACTIONS(484),
    [anon_sym_COMMA] = ACTIONS(482),
    [anon_sym_DOT_DOT] = ACTIONS(484),
    [anon_sym_DOT_DOT_LT] = ACTIONS(482),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(482),
    [anon_sym_COLON] = ACTIONS(482),
    [anon_sym_STAR] = ACTIONS(482),
    [anon_sym_PLUS] = ACTIONS(482),
    [anon_sym_SLASH] = ACTIONS(482),
    [anon_sym_DASH] = ACTIONS(482),
    [anon_sym_PERCENT] = ACTIONS(482),
    [anon_sym_EQ_EQ] = ACTIONS(482),
    [anon_sym_BANG_EQ] = ACTIONS(482),
    [anon_sym_LT] = ACTIONS(484),
    [anon_sym_LT_EQ] = ACTIONS(482),
    [anon_sym_lt] = ACTIONS(484),
    [anon_sym_lte] = ACTIONS(484),
    [anon_sym_gt] = ACTIONS(484),
    [anon_sym_gte] = ACTIONS(484),
    [anon_sym_BANG] = ACTIONS(484),
    [anon_sym_AMP_AMP] = ACTIONS(482),
    [anon_sym_PIPE_PIPE] = ACTIONS(482),
    [anon_sym_QMARK_QMARK] = ACTIONS(482),
    [anon_sym_EQ] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(482),
    [sym_number] = ACTIONS(484),
    [anon_sym_true] = ACTIONS(484),
    [anon_sym_LBRACK] = ACTIONS(482),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(484),
  },
  [327] = {
    [aux_sym_top_level_repeat1] = STATE(327),
    [anon_sym_LBRACE] = ACTIONS(929),
    [anon_sym_as] = ACTIONS(931),
    [anon_sym_QMARK] = ACTIONS(931),
    [anon_sym_LPAREN] = ACTIONS(929),
    [anon_sym_RPAREN] = ACTIONS(929),
    [anon_sym_using] = ACTIONS(931),
    [anon_sym_COMMA] = ACTIONS(929),
    [anon_sym_DOT_DOT] = ACTIONS(931),
    [anon_sym_DOT_DOT_LT] = ACTIONS(929),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(929),
    [anon_sym_COLON] = ACTIONS(929),
    [anon_sym_STAR] = ACTIONS(929),
    [anon_sym_PLUS] = ACTIONS(929),
    [anon_sym_SLASH] = ACTIONS(929),
    [anon_sym_DASH] = ACTIONS(929),
    [anon_sym_PERCENT] = ACTIONS(929),
    [anon_sym_EQ_EQ] = ACTIONS(929),
    [anon_sym_BANG_EQ] = ACTIONS(929),
    [anon_sym_LT] = ACTIONS(931),
    [anon_sym_LT_EQ] = ACTIONS(929),
    [anon_sym_lt] = ACTIONS(931),
    [anon_sym_lte] = ACTIONS(931),
    [anon_sym_gt] = ACTIONS(931),
    [anon_sym_gte] = ACTIONS(931),
    [anon_sym_BANG] = ACTIONS(931),
    [anon_sym_AMP_AMP] = ACTIONS(929),
    [anon_sym_PIPE_PIPE] = ACTIONS(929),
    [anon_sym_QMARK_QMARK] = ACTIONS(929),
    [anon_sym_EQ] = ACTIONS(931),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(929),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(929),
    [sym_number] = ACTIONS(931),
    [anon_sym_true] = ACTIONS(931),
    [anon_sym_LBRACK] = ACTIONS(929),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(931),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(933),
    [anon_sym_DOT] = ACTIONS(931),
  },
  [328] = {
    [sym_type] = STATE(325),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat2] = STATE(325),
    [anon_sym_LBRACE] = ACTIONS(936),
    [anon_sym_as] = ACTIONS(938),
    [anon_sym_QMARK] = ACTIONS(938),
    [anon_sym_RPAREN] = ACTIONS(936),
    [anon_sym_using] = ACTIONS(938),
    [anon_sym_COMMA] = ACTIONS(936),
    [anon_sym_DOT_DOT] = ACTIONS(938),
    [anon_sym_DOT_DOT_LT] = ACTIONS(936),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(936),
    [anon_sym_COLON] = ACTIONS(936),
    [anon_sym_STAR] = ACTIONS(936),
    [anon_sym_PLUS] = ACTIONS(936),
    [anon_sym_SLASH] = ACTIONS(936),
    [anon_sym_DASH] = ACTIONS(936),
    [anon_sym_PERCENT] = ACTIONS(936),
    [anon_sym_EQ_EQ] = ACTIONS(936),
    [anon_sym_BANG_EQ] = ACTIONS(936),
    [anon_sym_LT] = ACTIONS(938),
    [anon_sym_LT_EQ] = ACTIONS(936),
    [anon_sym_lt] = ACTIONS(938),
    [anon_sym_lte] = ACTIONS(938),
    [anon_sym_gt] = ACTIONS(938),
    [anon_sym_gte] = ACTIONS(938),
    [anon_sym_BANG] = ACTIONS(938),
    [anon_sym_AMP_AMP] = ACTIONS(936),
    [anon_sym_PIPE_PIPE] = ACTIONS(936),
    [anon_sym_QMARK_QMARK] = ACTIONS(936),
    [anon_sym_EQ] = ACTIONS(938),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(936),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(936),
    [sym_number] = ACTIONS(938),
    [anon_sym_true] = ACTIONS(938),
    [anon_sym_LBRACK] = ACTIONS(936),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(938),
    [anon_sym_DOT] = ACTIONS(938),
  },
  [329] = {
    [sym_type] = STATE(325),
    [sym_string] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_hash] = STATE(33),
    [sym_top_level] = STATE(33),
    [sym_spec_var] = STATE(33),
    [aux_sym_as_expression_repeat2] = STATE(325),
    [anon_sym_LBRACE] = ACTIONS(940),
    [anon_sym_as] = ACTIONS(942),
    [anon_sym_QMARK] = ACTIONS(942),
    [anon_sym_RPAREN] = ACTIONS(940),
    [anon_sym_using] = ACTIONS(942),
    [anon_sym_COMMA] = ACTIONS(940),
    [anon_sym_DOT_DOT] = ACTIONS(942),
    [anon_sym_DOT_DOT_LT] = ACTIONS(940),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(940),
    [anon_sym_COLON] = ACTIONS(940),
    [anon_sym_STAR] = ACTIONS(940),
    [anon_sym_PLUS] = ACTIONS(940),
    [anon_sym_SLASH] = ACTIONS(940),
    [anon_sym_DASH] = ACTIONS(940),
    [anon_sym_PERCENT] = ACTIONS(940),
    [anon_sym_EQ_EQ] = ACTIONS(940),
    [anon_sym_BANG_EQ] = ACTIONS(940),
    [anon_sym_LT] = ACTIONS(942),
    [anon_sym_LT_EQ] = ACTIONS(940),
    [anon_sym_lt] = ACTIONS(942),
    [anon_sym_lte] = ACTIONS(942),
    [anon_sym_gt] = ACTIONS(942),
    [anon_sym_gte] = ACTIONS(942),
    [anon_sym_BANG] = ACTIONS(942),
    [anon_sym_AMP_AMP] = ACTIONS(940),
    [anon_sym_PIPE_PIPE] = ACTIONS(940),
    [anon_sym_QMARK_QMARK] = ACTIONS(940),
    [anon_sym_EQ] = ACTIONS(942),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(940),
    [sym_number] = ACTIONS(942),
    [anon_sym_true] = ACTIONS(942),
    [anon_sym_LBRACK] = ACTIONS(940),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(942),
    [anon_sym_DOT] = ACTIONS(942),
  },
  [330] = {
    [sym_directive] = STATE(222),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_elseif] = STATE(222),
    [sym_if_middle] = STATE(330),
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
    [aux_sym_if_repeat1] = STATE(330),
    [anon_sym_LT_POUND] = ACTIONS(1255),
    [anon_sym_LT_AT] = ACTIONS(1258),
    [anon_sym_LT_POUNDif] = ACTIONS(1263),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1261),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1266),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1269),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1272),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1275),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1278),
    [sym_fallback] = ACTIONS(1281),
    [sym_flush] = ACTIONS(1281),
    [anon_sym_LT_POUNDftl] = ACTIONS(1284),
    [anon_sym_LT_POUNDimport] = ACTIONS(1287),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1290),
    [sym_lt] = ACTIONS(1281),
    [sym_nt] = ACTIONS(1281),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1293),
    [sym_rt] = ACTIONS(1281),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1296),
    [sym_stop] = ACTIONS(1281),
    [sym_t] = ACTIONS(1281),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1299),
    [anon_sym_LT_POUNDassign] = ACTIONS(1302),
    [sym_end_assign] = ACTIONS(1305),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1308),
    [sym_end_global] = ACTIONS(1311),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1314),
    [sym_end_local] = ACTIONS(1317),
  },
  [331] = {
    [anon_sym_LT_POUND] = ACTIONS(1444),
    [anon_sym_LT_AT] = ACTIONS(1446),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1446),
    [anon_sym_LT_POUNDif] = ACTIONS(1446),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1446),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1446),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1446),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1446),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1446),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1446),
    [sym_fallback] = ACTIONS(1446),
    [sym_flush] = ACTIONS(1446),
    [anon_sym_LT_POUNDftl] = ACTIONS(1446),
    [anon_sym_LT_POUNDimport] = ACTIONS(1446),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1446),
    [sym_lt] = ACTIONS(1446),
    [sym_nt] = ACTIONS(1446),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1446),
    [sym_rt] = ACTIONS(1446),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1446),
    [sym_stop] = ACTIONS(1446),
    [sym_t] = ACTIONS(1446),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1446),
    [anon_sym_LT_POUNDassign] = ACTIONS(1446),
    [sym_end_assign] = ACTIONS(1446),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1446),
    [sym_end_global] = ACTIONS(1446),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1446),
    [sym_end_local] = ACTIONS(1446),
  },
  [332] = {
    [ts_builtin_sym_end] = ACTIONS(1448),
    [sym_comment] = ACTIONS(1448),
    [anon_sym_DOLLAR] = ACTIONS(1448),
    [anon_sym_LT_POUND] = ACTIONS(1450),
    [anon_sym_LT_AT] = ACTIONS(1448),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1448),
    [sym_break] = ACTIONS(1448),
    [sym_continue] = ACTIONS(1448),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1448),
    [anon_sym_LT_POUNDitems] = ACTIONS(1448),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1448),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1448),
    [anon_sym_LT_POUNDif] = ACTIONS(1448),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1448),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1448),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1448),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1448),
    [anon_sym_LT_POUNDcase] = ACTIONS(1448),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1448),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1448),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1448),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1448),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1448),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1448),
    [anon_sym_LT_POUNDnested] = ACTIONS(1448),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1448),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1448),
    [sym_recover] = ACTIONS(1448),
    [sym_fallback] = ACTIONS(1448),
    [sym_flush] = ACTIONS(1448),
    [anon_sym_LT_POUNDftl] = ACTIONS(1448),
    [anon_sym_LT_POUNDimport] = ACTIONS(1448),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1448),
    [sym_lt] = ACTIONS(1448),
    [sym_nt] = ACTIONS(1448),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1448),
    [sym_rt] = ACTIONS(1448),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1448),
    [sym_stop] = ACTIONS(1448),
    [sym_t] = ACTIONS(1448),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1448),
    [anon_sym_LT_POUNDassign] = ACTIONS(1448),
    [sym_end_assign] = ACTIONS(1448),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1448),
    [sym_end_global] = ACTIONS(1448),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1448),
    [sym_end_local] = ACTIONS(1448),
  },
  [333] = {
    [anon_sym_LBRACE] = ACTIONS(1228),
    [anon_sym_GT] = ACTIONS(1228),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1228),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1228),
    [sym_number] = ACTIONS(1230),
    [anon_sym_true] = ACTIONS(1230),
    [anon_sym_LBRACK] = ACTIONS(1228),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1230),
    [anon_sym_DOT] = ACTIONS(1228),
  },
  [334] = {
    [sym_directive] = STATE(340),
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
    [aux_sym_case_repeat1] = STATE(340),
    [aux_sym_case_repeat2] = STATE(341),
    [anon_sym_LT_POUND] = ACTIONS(11),
    [anon_sym_LT_AT] = ACTIONS(13),
    [sym_break] = ACTIONS(1452),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1454),
    [anon_sym_LT_POUNDcase] = ACTIONS(1454),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1454),
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
  [335] = {
    [sym_directive] = STATE(335),
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
    [aux_sym_case_repeat1] = STATE(335),
    [anon_sym_LT_POUND] = ACTIONS(1456),
    [anon_sym_LT_AT] = ACTIONS(1459),
    [anon_sym_LT_POUNDif] = ACTIONS(1462),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1465),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1468),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1470),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1473),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1476),
    [sym_fallback] = ACTIONS(1479),
    [sym_flush] = ACTIONS(1479),
    [anon_sym_LT_POUNDftl] = ACTIONS(1482),
    [anon_sym_LT_POUNDimport] = ACTIONS(1485),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1488),
    [sym_lt] = ACTIONS(1479),
    [sym_nt] = ACTIONS(1479),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1491),
    [sym_rt] = ACTIONS(1479),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1494),
    [sym_stop] = ACTIONS(1479),
    [sym_t] = ACTIONS(1479),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1497),
    [anon_sym_LT_POUNDassign] = ACTIONS(1500),
    [sym_end_assign] = ACTIONS(1503),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1506),
    [sym_end_global] = ACTIONS(1509),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1512),
    [sym_end_local] = ACTIONS(1515),
  },
  [336] = {
    [ts_builtin_sym_end] = ACTIONS(1518),
    [sym_comment] = ACTIONS(1518),
    [anon_sym_DOLLAR] = ACTIONS(1518),
    [anon_sym_LT_POUND] = ACTIONS(1520),
    [anon_sym_LT_AT] = ACTIONS(1518),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1518),
    [sym_break] = ACTIONS(1518),
    [sym_continue] = ACTIONS(1518),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1518),
    [anon_sym_LT_POUNDitems] = ACTIONS(1518),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1518),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1518),
    [anon_sym_LT_POUNDif] = ACTIONS(1518),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1518),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1518),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1518),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1518),
    [anon_sym_LT_POUNDcase] = ACTIONS(1518),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1518),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1518),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1518),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1518),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1518),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1518),
    [anon_sym_LT_POUNDnested] = ACTIONS(1518),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1518),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1518),
    [sym_recover] = ACTIONS(1518),
    [sym_fallback] = ACTIONS(1518),
    [sym_flush] = ACTIONS(1518),
    [anon_sym_LT_POUNDftl] = ACTIONS(1518),
    [anon_sym_LT_POUNDimport] = ACTIONS(1518),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1518),
    [sym_lt] = ACTIONS(1518),
    [sym_nt] = ACTIONS(1518),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1518),
    [sym_rt] = ACTIONS(1518),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1518),
    [sym_stop] = ACTIONS(1518),
    [sym_t] = ACTIONS(1518),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1518),
    [anon_sym_LT_POUNDassign] = ACTIONS(1518),
    [sym_end_assign] = ACTIONS(1518),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1518),
    [sym_end_global] = ACTIONS(1518),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1518),
    [sym_end_local] = ACTIONS(1518),
  },
  [337] = {
    [sym_directive] = STATE(265),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_list_middle] = STATE(337),
    [sym_items] = STATE(265),
    [sym_sep] = STATE(265),
    [sym_sep_block] = STATE(270),
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
    [aux_sym_list_repeat1] = STATE(337),
    [anon_sym_LT_POUND] = ACTIONS(1370),
    [anon_sym_LT_AT] = ACTIONS(1373),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1376),
    [sym_break] = ACTIONS(1378),
    [sym_continue] = ACTIONS(1378),
    [anon_sym_LT_POUNDitems] = ACTIONS(1381),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1384),
    [anon_sym_LT_POUNDif] = ACTIONS(1387),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1390),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1393),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1396),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1399),
    [sym_fallback] = ACTIONS(1402),
    [sym_flush] = ACTIONS(1402),
    [anon_sym_LT_POUNDftl] = ACTIONS(1405),
    [anon_sym_LT_POUNDimport] = ACTIONS(1408),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1411),
    [sym_lt] = ACTIONS(1402),
    [sym_nt] = ACTIONS(1402),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1414),
    [sym_rt] = ACTIONS(1402),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1417),
    [sym_stop] = ACTIONS(1402),
    [sym_t] = ACTIONS(1402),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1420),
    [anon_sym_LT_POUNDassign] = ACTIONS(1423),
    [sym_end_assign] = ACTIONS(1426),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1429),
    [sym_end_global] = ACTIONS(1432),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1435),
    [sym_end_local] = ACTIONS(1438),
  },
  [338] = {
    [sym_directive] = STATE(342),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_items_middle] = STATE(344),
    [sym_sep] = STATE(342),
    [sym_sep_block] = STATE(270),
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
    [aux_sym_items_repeat1] = STATE(344),
    [anon_sym_LT_POUND] = ACTIONS(11),
    [anon_sym_LT_AT] = ACTIONS(13),
    [sym_break] = ACTIONS(1522),
    [sym_continue] = ACTIONS(1522),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1524),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(778),
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
  [339] = {
    [ts_builtin_sym_end] = ACTIONS(1526),
    [sym_comment] = ACTIONS(1526),
    [anon_sym_DOLLAR] = ACTIONS(1526),
    [anon_sym_LT_POUND] = ACTIONS(1528),
    [anon_sym_LT_AT] = ACTIONS(1526),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1526),
    [sym_break] = ACTIONS(1526),
    [sym_continue] = ACTIONS(1526),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1526),
    [anon_sym_LT_POUNDitems] = ACTIONS(1526),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1526),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1526),
    [anon_sym_LT_POUNDif] = ACTIONS(1526),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1526),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1526),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1526),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1526),
    [anon_sym_LT_POUNDcase] = ACTIONS(1526),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1526),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1526),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1526),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1526),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1526),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1526),
    [anon_sym_LT_POUNDnested] = ACTIONS(1526),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1526),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1526),
    [sym_recover] = ACTIONS(1526),
    [sym_fallback] = ACTIONS(1526),
    [sym_flush] = ACTIONS(1526),
    [anon_sym_LT_POUNDftl] = ACTIONS(1526),
    [anon_sym_LT_POUNDimport] = ACTIONS(1526),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1526),
    [sym_lt] = ACTIONS(1526),
    [sym_nt] = ACTIONS(1526),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1526),
    [sym_rt] = ACTIONS(1526),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1526),
    [sym_stop] = ACTIONS(1526),
    [sym_t] = ACTIONS(1526),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1526),
    [anon_sym_LT_POUNDassign] = ACTIONS(1526),
    [sym_end_assign] = ACTIONS(1526),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1526),
    [sym_end_global] = ACTIONS(1526),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1526),
    [sym_end_local] = ACTIONS(1526),
  },
  [340] = {
    [sym_directive] = STATE(345),
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
    [aux_sym_case_repeat1] = STATE(345),
    [aux_sym_case_repeat2] = STATE(346),
    [anon_sym_LT_POUND] = ACTIONS(11),
    [anon_sym_LT_AT] = ACTIONS(13),
    [sym_break] = ACTIONS(1530),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1532),
    [anon_sym_LT_POUNDcase] = ACTIONS(1532),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1532),
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
  [341] = {
    [aux_sym_case_repeat2] = STATE(347),
    [sym_break] = ACTIONS(1534),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1532),
    [anon_sym_LT_POUNDcase] = ACTIONS(1532),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1532),
  },
  [342] = {
    [anon_sym_LT_POUND] = ACTIONS(1536),
    [anon_sym_LT_AT] = ACTIONS(1538),
    [sym_break] = ACTIONS(1538),
    [sym_continue] = ACTIONS(1538),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1538),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1538),
    [anon_sym_LT_POUNDif] = ACTIONS(1538),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1538),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1538),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1538),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1538),
    [sym_fallback] = ACTIONS(1538),
    [sym_flush] = ACTIONS(1538),
    [anon_sym_LT_POUNDftl] = ACTIONS(1538),
    [anon_sym_LT_POUNDimport] = ACTIONS(1538),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1538),
    [sym_lt] = ACTIONS(1538),
    [sym_nt] = ACTIONS(1538),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1538),
    [sym_rt] = ACTIONS(1538),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1538),
    [sym_stop] = ACTIONS(1538),
    [sym_t] = ACTIONS(1538),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1538),
    [anon_sym_LT_POUNDassign] = ACTIONS(1538),
    [sym_end_assign] = ACTIONS(1538),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1538),
    [sym_end_global] = ACTIONS(1538),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1538),
    [sym_end_local] = ACTIONS(1538),
  },
  [343] = {
    [anon_sym_LT_POUND] = ACTIONS(1540),
    [anon_sym_LT_AT] = ACTIONS(1542),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1542),
    [sym_break] = ACTIONS(1542),
    [sym_continue] = ACTIONS(1542),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1542),
    [anon_sym_LT_POUNDitems] = ACTIONS(1542),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1542),
    [anon_sym_LT_POUNDif] = ACTIONS(1542),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1542),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1542),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1542),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1542),
    [sym_fallback] = ACTIONS(1542),
    [sym_flush] = ACTIONS(1542),
    [anon_sym_LT_POUNDftl] = ACTIONS(1542),
    [anon_sym_LT_POUNDimport] = ACTIONS(1542),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1542),
    [sym_lt] = ACTIONS(1542),
    [sym_nt] = ACTIONS(1542),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1542),
    [sym_rt] = ACTIONS(1542),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1542),
    [sym_stop] = ACTIONS(1542),
    [sym_t] = ACTIONS(1542),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1542),
    [anon_sym_LT_POUNDassign] = ACTIONS(1542),
    [sym_end_assign] = ACTIONS(1542),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1542),
    [sym_end_global] = ACTIONS(1542),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1542),
    [sym_end_local] = ACTIONS(1542),
  },
  [344] = {
    [sym_directive] = STATE(342),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_items_middle] = STATE(349),
    [sym_sep] = STATE(342),
    [sym_sep_block] = STATE(270),
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
    [aux_sym_items_repeat1] = STATE(349),
    [anon_sym_LT_POUND] = ACTIONS(11),
    [anon_sym_LT_AT] = ACTIONS(13),
    [sym_break] = ACTIONS(1522),
    [sym_continue] = ACTIONS(1522),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1544),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(778),
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
  [345] = {
    [sym_directive] = STATE(345),
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
    [aux_sym_case_repeat1] = STATE(345),
    [anon_sym_LT_POUND] = ACTIONS(1456),
    [anon_sym_LT_AT] = ACTIONS(1459),
    [sym_break] = ACTIONS(1468),
    [anon_sym_LT_POUNDif] = ACTIONS(1462),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1465),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1468),
    [anon_sym_LT_POUNDcase] = ACTIONS(1468),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1468),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1470),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1473),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1476),
    [sym_fallback] = ACTIONS(1479),
    [sym_flush] = ACTIONS(1479),
    [anon_sym_LT_POUNDftl] = ACTIONS(1482),
    [anon_sym_LT_POUNDimport] = ACTIONS(1485),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1488),
    [sym_lt] = ACTIONS(1479),
    [sym_nt] = ACTIONS(1479),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1491),
    [sym_rt] = ACTIONS(1479),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1494),
    [sym_stop] = ACTIONS(1479),
    [sym_t] = ACTIONS(1479),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1497),
    [anon_sym_LT_POUNDassign] = ACTIONS(1500),
    [sym_end_assign] = ACTIONS(1503),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1506),
    [sym_end_global] = ACTIONS(1509),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1512),
    [sym_end_local] = ACTIONS(1515),
  },
  [346] = {
    [aux_sym_case_repeat2] = STATE(347),
    [sym_break] = ACTIONS(1534),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1546),
    [anon_sym_LT_POUNDcase] = ACTIONS(1546),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1546),
  },
  [347] = {
    [aux_sym_case_repeat2] = STATE(347),
    [sym_break] = ACTIONS(1548),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1551),
    [anon_sym_LT_POUNDcase] = ACTIONS(1551),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1551),
  },
  [348] = {
    [anon_sym_LT_POUND] = ACTIONS(1553),
    [anon_sym_LT_AT] = ACTIONS(1555),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1555),
    [sym_break] = ACTIONS(1555),
    [sym_continue] = ACTIONS(1555),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1555),
    [anon_sym_LT_POUNDitems] = ACTIONS(1555),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1555),
    [anon_sym_LT_POUNDif] = ACTIONS(1555),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1555),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1555),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1555),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1555),
    [sym_fallback] = ACTIONS(1555),
    [sym_flush] = ACTIONS(1555),
    [anon_sym_LT_POUNDftl] = ACTIONS(1555),
    [anon_sym_LT_POUNDimport] = ACTIONS(1555),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1555),
    [sym_lt] = ACTIONS(1555),
    [sym_nt] = ACTIONS(1555),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1555),
    [sym_rt] = ACTIONS(1555),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1555),
    [sym_stop] = ACTIONS(1555),
    [sym_t] = ACTIONS(1555),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1555),
    [anon_sym_LT_POUNDassign] = ACTIONS(1555),
    [sym_end_assign] = ACTIONS(1555),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1555),
    [sym_end_global] = ACTIONS(1555),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1555),
    [sym_end_local] = ACTIONS(1555),
  },
  [349] = {
    [sym_directive] = STATE(342),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_items_middle] = STATE(349),
    [sym_sep] = STATE(342),
    [sym_sep_block] = STATE(270),
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
    [aux_sym_items_repeat1] = STATE(349),
    [anon_sym_LT_POUND] = ACTIONS(1557),
    [anon_sym_LT_AT] = ACTIONS(1560),
    [sym_break] = ACTIONS(1563),
    [sym_continue] = ACTIONS(1563),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1566),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1568),
    [anon_sym_LT_POUNDif] = ACTIONS(1571),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1574),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1577),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1580),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1583),
    [sym_fallback] = ACTIONS(1586),
    [sym_flush] = ACTIONS(1586),
    [anon_sym_LT_POUNDftl] = ACTIONS(1589),
    [anon_sym_LT_POUNDimport] = ACTIONS(1592),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1595),
    [sym_lt] = ACTIONS(1586),
    [sym_nt] = ACTIONS(1586),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1598),
    [sym_rt] = ACTIONS(1586),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1601),
    [sym_stop] = ACTIONS(1586),
    [sym_t] = ACTIONS(1586),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1604),
    [anon_sym_LT_POUNDassign] = ACTIONS(1607),
    [sym_end_assign] = ACTIONS(1610),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1613),
    [sym_end_global] = ACTIONS(1616),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1619),
    [sym_end_local] = ACTIONS(1622),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(24),
  [9] = {.count = 1, .reusable = true}, SHIFT(2),
  [11] = {.count = 1, .reusable = false}, SHIFT(3),
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
  [55] = {.count = 1, .reusable = true}, SHIFT(27),
  [57] = {.count = 1, .reusable = true}, SHIFT(28),
  [59] = {.count = 1, .reusable = false}, SHIFT(29),
  [61] = {.count = 1, .reusable = false}, SHIFT(30),
  [63] = {.count = 1, .reusable = false}, SHIFT(31),
  [65] = {.count = 1, .reusable = true}, SHIFT(31),
  [67] = {.count = 1, .reusable = true}, SHIFT(32),
  [69] = {.count = 1, .reusable = false}, SHIFT(33),
  [71] = {.count = 1, .reusable = false}, SHIFT(34),
  [73] = {.count = 1, .reusable = true}, SHIFT(35),
  [75] = {.count = 1, .reusable = false}, SHIFT(36),
  [77] = {.count = 1, .reusable = false}, SHIFT(37),
  [79] = {.count = 1, .reusable = false}, SHIFT(42),
  [81] = {.count = 1, .reusable = false}, SHIFT(43),
  [83] = {.count = 1, .reusable = false}, SHIFT(44),
  [85] = {.count = 1, .reusable = true}, SHIFT(44),
  [87] = {.count = 1, .reusable = false}, SHIFT(45),
  [89] = {.count = 1, .reusable = true}, SHIFT(49),
  [91] = {.count = 1, .reusable = true}, SHIFT(51),
  [93] = {.count = 1, .reusable = true}, SHIFT(53),
  [95] = {.count = 1, .reusable = true}, SHIFT(54),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_directive, 1),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_directive, 1),
  [101] = {.count = 1, .reusable = true}, SHIFT(56),
  [103] = {.count = 1, .reusable = true}, SHIFT(58),
  [105] = {.count = 1, .reusable = true}, SHIFT(60),
  [107] = {.count = 1, .reusable = true}, SHIFT(62),
  [109] = {.count = 1, .reusable = true}, SHIFT(64),
  [111] = {.count = 1, .reusable = true}, SHIFT(66),
  [113] = {.count = 1, .reusable = true}, SHIFT(68),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 1),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym_assign, 1),
  [119] = {.count = 1, .reusable = true}, SHIFT(70),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_global, 1),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym_global, 1),
  [125] = {.count = 1, .reusable = true}, SHIFT(72),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_local, 1),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_local, 1),
  [131] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [135] = {.count = 1, .reusable = true}, SHIFT(74),
  [137] = {.count = 1, .reusable = true}, SHIFT(75),
  [139] = {.count = 1, .reusable = true}, SHIFT(76),
  [141] = {.count = 1, .reusable = false}, SHIFT(77),
  [143] = {.count = 1, .reusable = true}, SHIFT(77),
  [145] = {.count = 1, .reusable = true}, SHIFT(78),
  [147] = {.count = 1, .reusable = false}, SHIFT(79),
  [149] = {.count = 1, .reusable = false}, SHIFT(80),
  [151] = {.count = 1, .reusable = true}, SHIFT(81),
  [153] = {.count = 1, .reusable = false}, SHIFT(82),
  [155] = {.count = 1, .reusable = false}, SHIFT(83),
  [157] = {.count = 1, .reusable = true}, SHIFT(88),
  [159] = {.count = 1, .reusable = false}, SHIFT(89),
  [161] = {.count = 1, .reusable = false}, SHIFT(90),
  [163] = {.count = 1, .reusable = true}, SHIFT(91),
  [165] = {.count = 1, .reusable = false}, SHIFT(92),
  [167] = {.count = 1, .reusable = true}, SHIFT(92),
  [169] = {.count = 1, .reusable = true}, SHIFT(93),
  [171] = {.count = 1, .reusable = false}, SHIFT(94),
  [173] = {.count = 1, .reusable = false}, SHIFT(95),
  [175] = {.count = 1, .reusable = true}, SHIFT(96),
  [177] = {.count = 1, .reusable = false}, SHIFT(97),
  [179] = {.count = 1, .reusable = false}, SHIFT(98),
  [181] = {.count = 1, .reusable = true}, SHIFT(103),
  [183] = {.count = 1, .reusable = true}, SHIFT(37),
  [185] = {.count = 1, .reusable = true}, SHIFT(106),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_operator, 1),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym_operator, 1),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym_string, 1),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [199] = {.count = 1, .reusable = true}, SHIFT(108),
  [201] = {.count = 1, .reusable = true}, SHIFT(109),
  [203] = {.count = 1, .reusable = false}, SHIFT(110),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_top_level, 1),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_top_level, 1),
  [209] = {.count = 1, .reusable = true}, SHIFT(115),
  [211] = {.count = 1, .reusable = true}, SHIFT(116),
  [213] = {.count = 1, .reusable = true}, SHIFT(119),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_group, 1),
  [217] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_group, 1),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [221] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 1),
  [223] = {.count = 1, .reusable = false}, SHIFT(121),
  [225] = {.count = 1, .reusable = true}, SHIFT(124),
  [227] = {.count = 1, .reusable = true}, SHIFT(126),
  [229] = {.count = 1, .reusable = true}, SHIFT(127),
  [231] = {.count = 1, .reusable = false}, SHIFT(128),
  [233] = {.count = 1, .reusable = false}, SHIFT(129),
  [235] = {.count = 1, .reusable = true}, SHIFT(130),
  [237] = {.count = 1, .reusable = false}, SHIFT(131),
  [239] = {.count = 1, .reusable = true}, SHIFT(132),
  [241] = {.count = 1, .reusable = true}, SHIFT(134),
  [243] = {.count = 1, .reusable = true}, SHIFT(136),
  [245] = {.count = 1, .reusable = false}, SHIFT(138),
  [247] = {.count = 1, .reusable = true}, SHIFT(141),
  [249] = {.count = 1, .reusable = true}, SHIFT(142),
  [251] = {.count = 1, .reusable = true}, SHIFT(145),
  [253] = {.count = 1, .reusable = true}, SHIFT(146),
  [255] = {.count = 1, .reusable = true}, SHIFT(147),
  [257] = {.count = 1, .reusable = true}, SHIFT(150),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_attempt, 2),
  [261] = {.count = 1, .reusable = false}, REDUCE(sym_attempt, 2),
  [263] = {.count = 1, .reusable = false}, REDUCE(sym_attempt_middle, 1),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_attempt_middle, 1),
  [267] = {.count = 1, .reusable = true}, SHIFT(151),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_ftl, 2),
  [271] = {.count = 1, .reusable = false}, REDUCE(sym_ftl, 2),
  [273] = {.count = 1, .reusable = true}, SHIFT(153),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_import, 2),
  [277] = {.count = 1, .reusable = false}, REDUCE(sym_import, 2),
  [279] = {.count = 1, .reusable = true}, SHIFT(154),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym_include, 2),
  [285] = {.count = 1, .reusable = true}, SHIFT(155),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_recurse, 2),
  [289] = {.count = 1, .reusable = false}, REDUCE(sym_recurse, 2),
  [291] = {.count = 1, .reusable = true}, SHIFT(156),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_setting, 2),
  [295] = {.count = 1, .reusable = false}, REDUCE(sym_setting, 2),
  [297] = {.count = 1, .reusable = true}, SHIFT(157),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_visit, 2),
  [301] = {.count = 1, .reusable = false}, REDUCE(sym_visit, 2),
  [303] = {.count = 1, .reusable = true}, SHIFT(158),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 2),
  [307] = {.count = 1, .reusable = false}, REDUCE(sym_assign, 2),
  [309] = {.count = 1, .reusable = true}, SHIFT(159),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_global, 2),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym_global, 2),
  [315] = {.count = 1, .reusable = true}, SHIFT(160),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_local, 2),
  [319] = {.count = 1, .reusable = false}, REDUCE(sym_local, 2),
  [321] = {.count = 1, .reusable = true}, SHIFT(161),
  [323] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [325] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [328] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [331] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [334] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [337] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [340] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [343] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [346] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [349] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [352] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [355] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [358] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [361] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [364] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [367] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [370] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [373] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [376] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [379] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [382] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [385] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [388] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [391] = {.count = 1, .reusable = true}, SHIFT(162),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_interpolation, 3),
  [395] = {.count = 1, .reusable = false}, REDUCE(sym_interpolation, 3),
  [397] = {.count = 1, .reusable = true}, SHIFT(164),
  [399] = {.count = 1, .reusable = true}, SHIFT(165),
  [401] = {.count = 1, .reusable = true}, SHIFT(167),
  [403] = {.count = 1, .reusable = true}, SHIFT(168),
  [405] = {.count = 1, .reusable = true}, SHIFT(171),
  [407] = {.count = 1, .reusable = true}, SHIFT(173),
  [409] = {.count = 1, .reusable = true}, SHIFT(177),
  [411] = {.count = 1, .reusable = true}, SHIFT(178),
  [413] = {.count = 1, .reusable = true}, SHIFT(98),
  [415] = {.count = 1, .reusable = true}, SHIFT(181),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_user_defined, 3),
  [419] = {.count = 1, .reusable = false}, REDUCE(sym_user_defined, 3),
  [421] = {.count = 1, .reusable = true}, SHIFT(183),
  [423] = {.count = 1, .reusable = true}, SHIFT(184),
  [425] = {.count = 1, .reusable = true}, SHIFT(186),
  [427] = {.count = 1, .reusable = true}, SHIFT(187),
  [429] = {.count = 1, .reusable = true}, SHIFT(190),
  [431] = {.count = 1, .reusable = false}, SHIFT(192),
  [433] = {.count = 1, .reusable = true}, SHIFT(195),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_hash, 2),
  [437] = {.count = 1, .reusable = false}, REDUCE(sym_hash, 2),
  [439] = {.count = 1, .reusable = true}, SHIFT(197),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_as_expression, 2),
  [443] = {.count = 1, .reusable = false}, REDUCE(sym_as_expression, 2),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_built_in, 2),
  [447] = {.count = 1, .reusable = false}, REDUCE(sym_built_in, 2),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 2),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 2),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_sequence, 2),
  [455] = {.count = 1, .reusable = false}, REDUCE(sym_sequence, 2),
  [457] = {.count = 1, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 1),
  [459] = {.count = 1, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 1),
  [461] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 1), SHIFT_REPEAT(202),
  [464] = {.count = 1, .reusable = true}, SHIFT(206),
  [466] = {.count = 1, .reusable = false}, SHIFT(208),
  [468] = {.count = 1, .reusable = false}, SHIFT(209),
  [470] = {.count = 1, .reusable = true}, SHIFT(210),
  [472] = {.count = 1, .reusable = false}, SHIFT(211),
  [474] = {.count = 1, .reusable = true}, REDUCE(aux_sym_top_level_repeat1, 1),
  [476] = {.count = 1, .reusable = false}, REDUCE(aux_sym_top_level_repeat1, 1),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym_top_level, 2),
  [480] = {.count = 1, .reusable = false}, REDUCE(sym_top_level, 2),
  [482] = {.count = 1, .reusable = true}, REDUCE(sym_top_level, 2, .alias_sequence_id = 1),
  [484] = {.count = 1, .reusable = false}, REDUCE(sym_top_level, 2, .alias_sequence_id = 1),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym_spec_var, 2),
  [488] = {.count = 1, .reusable = false}, REDUCE(sym_spec_var, 2),
  [490] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 2),
  [492] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 2),
  [494] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(28),
  [497] = {.count = 1, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2),
  [499] = {.count = 1, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2),
  [501] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(32),
  [504] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(33),
  [507] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(34),
  [510] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(35),
  [513] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(36),
  [516] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(37),
  [519] = {.count = 1, .reusable = true}, SHIFT(219),
  [521] = {.count = 1, .reusable = true}, SHIFT(220),
  [523] = {.count = 1, .reusable = true}, SHIFT(221),
  [525] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(28),
  [528] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(29),
  [531] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(30),
  [534] = {.count = 1, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2),
  [536] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(31),
  [539] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(31),
  [542] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(32),
  [545] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(33),
  [548] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(34),
  [551] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(35),
  [554] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(36),
  [557] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(37),
  [560] = {.count = 1, .reusable = true}, SHIFT(225),
  [562] = {.count = 1, .reusable = true}, SHIFT(227),
  [564] = {.count = 1, .reusable = true}, SHIFT(228),
  [566] = {.count = 1, .reusable = true}, SHIFT(230),
  [568] = {.count = 1, .reusable = true}, SHIFT(231),
  [570] = {.count = 1, .reusable = true}, SHIFT(234),
  [572] = {.count = 1, .reusable = true}, SHIFT(238),
  [574] = {.count = 1, .reusable = true}, SHIFT(239),
  [576] = {.count = 1, .reusable = true}, SHIFT(240),
  [578] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(45),
  [581] = {.count = 1, .reusable = true}, REDUCE(sym_function, 3),
  [583] = {.count = 1, .reusable = false}, REDUCE(sym_function, 3),
  [585] = {.count = 1, .reusable = true}, SHIFT(246),
  [587] = {.count = 1, .reusable = false}, REDUCE(sym_function_middle, 1),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym_function_middle, 1),
  [591] = {.count = 1, .reusable = true}, SHIFT(248),
  [593] = {.count = 1, .reusable = true}, REDUCE(sym_macro, 3),
  [595] = {.count = 1, .reusable = false}, REDUCE(sym_macro, 3),
  [597] = {.count = 1, .reusable = true}, SHIFT(251),
  [599] = {.count = 1, .reusable = false}, REDUCE(sym_macro_middle, 1),
  [601] = {.count = 1, .reusable = true}, REDUCE(sym_macro_middle, 1),
  [603] = {.count = 1, .reusable = true}, SHIFT(253),
  [605] = {.count = 1, .reusable = true}, REDUCE(sym_attempt, 3),
  [607] = {.count = 1, .reusable = false}, REDUCE(sym_attempt, 3),
  [609] = {.count = 2, .reusable = false}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(3),
  [612] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(4),
  [615] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(5),
  [618] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(6),
  [621] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(7),
  [624] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(8),
  [627] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(9),
  [630] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2),
  [632] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(54),
  [635] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(10),
  [638] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(11),
  [641] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(12),
  [644] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(13),
  [647] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(14),
  [650] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(15),
  [653] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(16),
  [656] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(17),
  [659] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(18),
  [662] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(19),
  [665] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(20),
  [668] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(21),
  [671] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(22),
  [674] = {.count = 1, .reusable = true}, REDUCE(sym_ftl, 3),
  [676] = {.count = 1, .reusable = false}, REDUCE(sym_ftl, 3),
  [678] = {.count = 1, .reusable = true}, REDUCE(sym_import, 3),
  [680] = {.count = 1, .reusable = false}, REDUCE(sym_import, 3),
  [682] = {.count = 1, .reusable = true}, REDUCE(sym_include, 3),
  [684] = {.count = 1, .reusable = false}, REDUCE(sym_include, 3),
  [686] = {.count = 1, .reusable = true}, REDUCE(sym_recurse, 3),
  [688] = {.count = 1, .reusable = false}, REDUCE(sym_recurse, 3),
  [690] = {.count = 1, .reusable = true}, REDUCE(sym_setting, 3),
  [692] = {.count = 1, .reusable = false}, REDUCE(sym_setting, 3),
  [694] = {.count = 1, .reusable = true}, REDUCE(sym_visit, 3),
  [696] = {.count = 1, .reusable = false}, REDUCE(sym_visit, 3),
  [698] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 3),
  [700] = {.count = 1, .reusable = false}, REDUCE(sym_assign, 3),
  [702] = {.count = 1, .reusable = true}, REDUCE(sym_global, 3),
  [704] = {.count = 1, .reusable = false}, REDUCE(sym_global, 3),
  [706] = {.count = 1, .reusable = true}, REDUCE(sym_local, 3),
  [708] = {.count = 1, .reusable = false}, REDUCE(sym_local, 3),
  [710] = {.count = 1, .reusable = true}, SHIFT(256),
  [712] = {.count = 1, .reusable = true}, SHIFT(257),
  [714] = {.count = 1, .reusable = true}, SHIFT(258),
  [716] = {.count = 1, .reusable = true}, REDUCE(sym_interpolation, 4),
  [718] = {.count = 1, .reusable = false}, REDUCE(sym_interpolation, 4),
  [720] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(75),
  [723] = {.count = 1, .reusable = true}, REDUCE(aux_sym_interpolation_repeat1, 2),
  [725] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(77),
  [728] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(77),
  [731] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(78),
  [734] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(79),
  [737] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(80),
  [740] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(81),
  [743] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(82),
  [746] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(83),
  [749] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(75),
  [752] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(78),
  [755] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(79),
  [758] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(80),
  [761] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(81),
  [764] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(82),
  [767] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(83),
  [770] = {.count = 1, .reusable = true}, SHIFT(264),
  [772] = {.count = 1, .reusable = true}, SHIFT(265),
  [774] = {.count = 1, .reusable = true}, SHIFT(266),
  [776] = {.count = 1, .reusable = true}, SHIFT(267),
  [778] = {.count = 1, .reusable = true}, SHIFT(268),
  [780] = {.count = 1, .reusable = true}, SHIFT(272),
  [782] = {.count = 1, .reusable = true}, SHIFT(276),
  [784] = {.count = 1, .reusable = true}, SHIFT(277),
  [786] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(88),
  [789] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(93),
  [792] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(94),
  [795] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(95),
  [798] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(96),
  [801] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(97),
  [804] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(98),
  [807] = {.count = 1, .reusable = true}, REDUCE(sym_user_defined, 4),
  [809] = {.count = 1, .reusable = false}, REDUCE(sym_user_defined, 4),
  [811] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(88),
  [814] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(89),
  [817] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(90),
  [820] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(92),
  [823] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(92),
  [826] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(93),
  [829] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(94),
  [832] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(95),
  [835] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(96),
  [838] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(97),
  [841] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(98),
  [844] = {.count = 1, .reusable = true}, REDUCE(sym_hash, 3),
  [846] = {.count = 1, .reusable = false}, REDUCE(sym_hash, 3),
  [848] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(28),
  [851] = {.count = 1, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2),
  [853] = {.count = 1, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2),
  [855] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(32),
  [858] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(33),
  [861] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(34),
  [864] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(35),
  [867] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(36),
  [870] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(37),
  [873] = {.count = 1, .reusable = true}, REDUCE(sym_built_in, 3),
  [875] = {.count = 1, .reusable = false}, REDUCE(sym_built_in, 3),
  [877] = {.count = 1, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2),
  [879] = {.count = 1, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 2),
  [881] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(110),
  [884] = {.count = 1, .reusable = true}, REDUCE(sym_sequence, 3),
  [886] = {.count = 1, .reusable = false}, REDUCE(sym_sequence, 3),
  [888] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(75),
  [891] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(77),
  [894] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(77),
  [897] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(78),
  [900] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(79),
  [903] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(80),
  [906] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(81),
  [909] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(110),
  [912] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(83),
  [915] = {.count = 1, .reusable = true}, SHIFT(287),
  [917] = {.count = 1, .reusable = true}, REDUCE(sym_group, 2),
  [919] = {.count = 1, .reusable = false}, REDUCE(sym_group, 2),
  [921] = {.count = 1, .reusable = false}, SHIFT(290),
  [923] = {.count = 1, .reusable = true}, SHIFT(293),
  [925] = {.count = 1, .reusable = true}, REDUCE(sym_top_level, 3, .alias_sequence_id = 1),
  [927] = {.count = 1, .reusable = false}, REDUCE(sym_top_level, 3, .alias_sequence_id = 1),
  [929] = {.count = 1, .reusable = true}, REDUCE(aux_sym_top_level_repeat1, 2),
  [931] = {.count = 1, .reusable = false}, REDUCE(aux_sym_top_level_repeat1, 2),
  [933] = {.count = 2, .reusable = true}, REDUCE(aux_sym_top_level_repeat1, 2), SHIFT_REPEAT(116),
  [936] = {.count = 1, .reusable = true}, REDUCE(sym_as_expression, 3),
  [938] = {.count = 1, .reusable = false}, REDUCE(sym_as_expression, 3),
  [940] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 3),
  [942] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 3),
  [944] = {.count = 1, .reusable = true}, REDUCE(sym_if_else, 1),
  [946] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4),
  [948] = {.count = 1, .reusable = false}, REDUCE(sym_if, 4),
  [950] = {.count = 1, .reusable = true}, SHIFT(296),
  [952] = {.count = 1, .reusable = false}, REDUCE(sym_if_middle, 1),
  [954] = {.count = 1, .reusable = true}, REDUCE(sym_if_middle, 1),
  [956] = {.count = 1, .reusable = true}, SHIFT(298),
  [958] = {.count = 1, .reusable = true}, SHIFT(301),
  [960] = {.count = 1, .reusable = true}, SHIFT(302),
  [962] = {.count = 1, .reusable = true}, SHIFT(303),
  [964] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(126),
  [967] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(127),
  [970] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(128),
  [973] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(129),
  [976] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(130),
  [979] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(131),
  [982] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(132),
  [985] = {.count = 1, .reusable = true}, REDUCE(sym_switch, 4),
  [987] = {.count = 1, .reusable = false}, REDUCE(sym_switch, 4),
  [989] = {.count = 1, .reusable = true}, REDUCE(sym_default, 1),
  [991] = {.count = 1, .reusable = true}, REDUCE(sym_switch_middle, 1),
  [993] = {.count = 1, .reusable = true}, SHIFT(310),
  [995] = {.count = 1, .reusable = false}, REDUCE(sym_return, 2),
  [997] = {.count = 1, .reusable = true}, REDUCE(sym_return, 2),
  [999] = {.count = 1, .reusable = true}, SHIFT(313),
  [1001] = {.count = 1, .reusable = true}, REDUCE(sym_function, 4),
  [1003] = {.count = 1, .reusable = false}, REDUCE(sym_function, 4),
  [1005] = {.count = 2, .reusable = false}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(3),
  [1008] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(4),
  [1011] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(5),
  [1014] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(6),
  [1017] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(7),
  [1020] = {.count = 1, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2),
  [1022] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(142),
  [1025] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(8),
  [1028] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(9),
  [1031] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(10),
  [1034] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(11),
  [1037] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(12),
  [1040] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(13),
  [1043] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(14),
  [1046] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(15),
  [1049] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(16),
  [1052] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(17),
  [1055] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(18),
  [1058] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(19),
  [1061] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(20),
  [1064] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(21),
  [1067] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(22),
  [1070] = {.count = 1, .reusable = true}, SHIFT(314),
  [1072] = {.count = 1, .reusable = false}, REDUCE(sym_nested, 2),
  [1074] = {.count = 1, .reusable = true}, REDUCE(sym_nested, 2),
  [1076] = {.count = 1, .reusable = true}, SHIFT(315),
  [1078] = {.count = 1, .reusable = true}, REDUCE(sym_macro, 4),
  [1080] = {.count = 1, .reusable = false}, REDUCE(sym_macro, 4),
  [1082] = {.count = 2, .reusable = false}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(3),
  [1085] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(4),
  [1088] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(5),
  [1091] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(6),
  [1094] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(7),
  [1097] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(142),
  [1100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(8),
  [1103] = {.count = 1, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2),
  [1105] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(147),
  [1108] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(9),
  [1111] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(10),
  [1114] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(11),
  [1117] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(12),
  [1120] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(13),
  [1123] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(14),
  [1126] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(15),
  [1129] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(16),
  [1132] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(17),
  [1135] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(18),
  [1138] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(19),
  [1141] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(20),
  [1144] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(21),
  [1147] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(22),
  [1150] = {.count = 1, .reusable = true}, SHIFT(316),
  [1152] = {.count = 1, .reusable = true}, SHIFT(317),
  [1154] = {.count = 2, .reusable = true}, REDUCE(aux_sym_top_level_repeat1, 2), SHIFT_REPEAT(168),
  [1157] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(75),
  [1160] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(78),
  [1163] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(79),
  [1166] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(80),
  [1169] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(81),
  [1172] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(82),
  [1175] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(83),
  [1178] = {.count = 1, .reusable = true}, REDUCE(sym_list, 5, .alias_sequence_id = 2),
  [1180] = {.count = 1, .reusable = false}, REDUCE(sym_list, 5, .alias_sequence_id = 2),
  [1182] = {.count = 1, .reusable = false}, REDUCE(sym_list_middle, 1),
  [1184] = {.count = 1, .reusable = true}, REDUCE(sym_list_middle, 1),
  [1186] = {.count = 1, .reusable = true}, REDUCE(sym_list_else, 1),
  [1188] = {.count = 1, .reusable = false}, REDUCE(sym_sep, 1),
  [1190] = {.count = 1, .reusable = true}, REDUCE(sym_sep, 1),
  [1192] = {.count = 1, .reusable = true}, SHIFT(320),
  [1194] = {.count = 1, .reusable = true}, SHIFT(321),
  [1196] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(88),
  [1199] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(93),
  [1202] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(94),
  [1205] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(95),
  [1208] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(96),
  [1211] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(97),
  [1214] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(98),
  [1217] = {.count = 1, .reusable = true}, SHIFT(324),
  [1219] = {.count = 2, .reusable = true}, REDUCE(aux_sym_top_level_repeat1, 2), SHIFT_REPEAT(187),
  [1222] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(110),
  [1225] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(211),
  [1228] = {.count = 1, .reusable = true}, REDUCE(sym_group, 3),
  [1230] = {.count = 1, .reusable = false}, REDUCE(sym_group, 3),
  [1232] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(208),
  [1235] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(209),
  [1238] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(211),
  [1241] = {.count = 1, .reusable = true}, REDUCE(sym_if_else, 2),
  [1243] = {.count = 1, .reusable = false}, REDUCE(sym_elseif, 2),
  [1245] = {.count = 1, .reusable = true}, REDUCE(sym_elseif, 2),
  [1247] = {.count = 1, .reusable = true}, SHIFT(331),
  [1249] = {.count = 1, .reusable = true}, REDUCE(sym_if, 5),
  [1251] = {.count = 1, .reusable = false}, REDUCE(sym_if, 5),
  [1253] = {.count = 1, .reusable = true}, SHIFT(332),
  [1255] = {.count = 2, .reusable = false}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(3),
  [1258] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(4),
  [1261] = {.count = 1, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2),
  [1263] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(5),
  [1266] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(221),
  [1269] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(6),
  [1272] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(7),
  [1275] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(8),
  [1278] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(9),
  [1281] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(10),
  [1284] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(11),
  [1287] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(12),
  [1290] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(13),
  [1293] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(14),
  [1296] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(15),
  [1299] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(16),
  [1302] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(17),
  [1305] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(18),
  [1308] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(19),
  [1311] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(20),
  [1314] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(21),
  [1317] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(22),
  [1320] = {.count = 1, .reusable = true}, SHIFT(333),
  [1322] = {.count = 2, .reusable = true}, REDUCE(aux_sym_top_level_repeat1, 2), SHIFT_REPEAT(231),
  [1325] = {.count = 1, .reusable = true}, SHIFT(334),
  [1327] = {.count = 1, .reusable = true}, REDUCE(sym_default, 2),
  [1329] = {.count = 1, .reusable = true}, REDUCE(sym_switch, 5),
  [1331] = {.count = 1, .reusable = false}, REDUCE(sym_switch, 5),
  [1333] = {.count = 1, .reusable = true}, SHIFT(336),
  [1335] = {.count = 1, .reusable = true}, REDUCE(aux_sym_switch_repeat1, 2),
  [1337] = {.count = 2, .reusable = true}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(239),
  [1340] = {.count = 1, .reusable = false}, REDUCE(sym_return, 3),
  [1342] = {.count = 1, .reusable = true}, REDUCE(sym_return, 3),
  [1344] = {.count = 1, .reusable = true}, REDUCE(sym_function, 5),
  [1346] = {.count = 1, .reusable = false}, REDUCE(sym_function, 5),
  [1348] = {.count = 1, .reusable = false}, REDUCE(sym_nested, 3),
  [1350] = {.count = 1, .reusable = true}, REDUCE(sym_nested, 3),
  [1352] = {.count = 1, .reusable = true}, REDUCE(sym_macro, 5),
  [1354] = {.count = 1, .reusable = false}, REDUCE(sym_macro, 5),
  [1356] = {.count = 1, .reusable = true}, REDUCE(sym_list_else, 2),
  [1358] = {.count = 1, .reusable = true}, SHIFT(338),
  [1360] = {.count = 1, .reusable = false}, REDUCE(sym_sep_block, 2),
  [1362] = {.count = 1, .reusable = true}, REDUCE(sym_sep_block, 2),
  [1364] = {.count = 1, .reusable = true}, REDUCE(sym_list, 6, .alias_sequence_id = 2),
  [1366] = {.count = 1, .reusable = false}, REDUCE(sym_list, 6, .alias_sequence_id = 2),
  [1368] = {.count = 1, .reusable = true}, SHIFT(339),
  [1370] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(3),
  [1373] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(4),
  [1376] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2),
  [1378] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(265),
  [1381] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(267),
  [1384] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(268),
  [1387] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(5),
  [1390] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(6),
  [1393] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(7),
  [1396] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(8),
  [1399] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(9),
  [1402] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(10),
  [1405] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(11),
  [1408] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(12),
  [1411] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(13),
  [1414] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(14),
  [1417] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(15),
  [1420] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(16),
  [1423] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(17),
  [1426] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(18),
  [1429] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(19),
  [1432] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(20),
  [1435] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(21),
  [1438] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(22),
  [1441] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(211),
  [1444] = {.count = 1, .reusable = false}, REDUCE(sym_elseif, 3),
  [1446] = {.count = 1, .reusable = true}, REDUCE(sym_elseif, 3),
  [1448] = {.count = 1, .reusable = true}, REDUCE(sym_if, 6),
  [1450] = {.count = 1, .reusable = false}, REDUCE(sym_if, 6),
  [1452] = {.count = 1, .reusable = true}, SHIFT(341),
  [1454] = {.count = 1, .reusable = true}, REDUCE(sym_case, 3),
  [1456] = {.count = 2, .reusable = false}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(3),
  [1459] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(4),
  [1462] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(5),
  [1465] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(6),
  [1468] = {.count = 1, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2),
  [1470] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(7),
  [1473] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(8),
  [1476] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(9),
  [1479] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(10),
  [1482] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(11),
  [1485] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(12),
  [1488] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(13),
  [1491] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(14),
  [1494] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(15),
  [1497] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(16),
  [1500] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(17),
  [1503] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(18),
  [1506] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(19),
  [1509] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(20),
  [1512] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(21),
  [1515] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(22),
  [1518] = {.count = 1, .reusable = true}, REDUCE(sym_switch, 6),
  [1520] = {.count = 1, .reusable = false}, REDUCE(sym_switch, 6),
  [1522] = {.count = 1, .reusable = true}, SHIFT(342),
  [1524] = {.count = 1, .reusable = true}, SHIFT(343),
  [1526] = {.count = 1, .reusable = true}, REDUCE(sym_list, 7, .alias_sequence_id = 2),
  [1528] = {.count = 1, .reusable = false}, REDUCE(sym_list, 7, .alias_sequence_id = 2),
  [1530] = {.count = 1, .reusable = true}, SHIFT(346),
  [1532] = {.count = 1, .reusable = true}, REDUCE(sym_case, 4),
  [1534] = {.count = 1, .reusable = true}, SHIFT(347),
  [1536] = {.count = 1, .reusable = false}, REDUCE(sym_items_middle, 1),
  [1538] = {.count = 1, .reusable = true}, REDUCE(sym_items_middle, 1),
  [1540] = {.count = 1, .reusable = false}, REDUCE(sym_items, 4),
  [1542] = {.count = 1, .reusable = true}, REDUCE(sym_items, 4),
  [1544] = {.count = 1, .reusable = true}, SHIFT(348),
  [1546] = {.count = 1, .reusable = true}, REDUCE(sym_case, 5),
  [1548] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat2, 2), SHIFT_REPEAT(347),
  [1551] = {.count = 1, .reusable = true}, REDUCE(aux_sym_case_repeat2, 2),
  [1553] = {.count = 1, .reusable = false}, REDUCE(sym_items, 5),
  [1555] = {.count = 1, .reusable = true}, REDUCE(sym_items, 5),
  [1557] = {.count = 2, .reusable = false}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(3),
  [1560] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(4),
  [1563] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(342),
  [1566] = {.count = 1, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2),
  [1568] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(268),
  [1571] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(5),
  [1574] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(6),
  [1577] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(7),
  [1580] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(8),
  [1583] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(9),
  [1586] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(10),
  [1589] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(11),
  [1592] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(12),
  [1595] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(13),
  [1598] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(14),
  [1601] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(15),
  [1604] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(16),
  [1607] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(17),
  [1610] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(18),
  [1613] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(19),
  [1616] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(20),
  [1619] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(21),
  [1622] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(22),
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
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
