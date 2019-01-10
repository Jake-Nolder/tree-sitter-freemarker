#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 341
#define SYMBOL_COUNT 183
#define ALIAS_COUNT 1
#define TOKEN_COUNT 116
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym_comment = 1,
  anon_sym_DOLLAR = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_as = 5,
  anon_sym_QMARK = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_using = 9,
  anon_sym_is = 10,
  anon_sym_COMMA = 11,
  anon_sym_DOT_DOT = 12,
  anon_sym_DOT_DOT_LT = 13,
  anon_sym_DOT_DOT_BANG = 14,
  anon_sym_COLON = 15,
  anon_sym_STAR = 16,
  anon_sym_PLUS = 17,
  anon_sym_SLASH = 18,
  anon_sym_DASH = 19,
  anon_sym_PERCENT = 20,
  anon_sym_EQ_EQ = 21,
  anon_sym_BANG_EQ = 22,
  anon_sym_LT = 23,
  anon_sym_LT_EQ = 24,
  anon_sym_lt = 25,
  anon_sym_lte = 26,
  anon_sym_gt = 27,
  anon_sym_gte = 28,
  anon_sym_BANG = 29,
  anon_sym_AMP_AMP = 30,
  anon_sym_PIPE_PIPE = 31,
  anon_sym_QMARK_QMARK = 32,
  anon_sym_EQ = 33,
  aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH = 34,
  aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH = 35,
  sym_number = 36,
  anon_sym_true = 37,
  anon_sym_false = 38,
  anon_sym_LBRACK = 39,
  anon_sym_RBRACK = 40,
  aux_sym_SLASH_BSLASHw_PLUS_SLASH = 41,
  aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH = 42,
  anon_sym_DOT = 43,
  anon_sym_auto_esc = 44,
  anon_sym_caller_template_name = 45,
  anon_sym_current_template_name = 46,
  anon_sym_data_model = 47,
  anon_sym_error = 48,
  anon_sym_globals = 49,
  anon_sym_incompatible_improvements = 50,
  anon_sym_lang = 51,
  anon_sym_locale = 52,
  anon_sym_locale_object = 53,
  anon_sym_locals = 54,
  anon_sym_main = 55,
  anon_sym_main_template_name = 56,
  anon_sym_namespace = 57,
  anon_sym_node = 58,
  anon_sym_now = 59,
  anon_sym_output_encoding = 60,
  anon_sym_get_optional_template = 61,
  anon_sym_pass = 62,
  anon_sym_template_name = 63,
  anon_sym_url_escaping_charset = 64,
  anon_sym_output_format = 65,
  anon_sym_vars = 66,
  anon_sym_version = 67,
  anon_sym_LT_AT = 68,
  anon_sym_GT = 69,
  anon_sym_SLASH_GT = 70,
  anon_sym_LT_POUND = 71,
  anon_sym_list = 72,
  anon_sym_LT_SLASH_POUNDlist_GT = 73,
  sym_break = 74,
  sym_continue = 75,
  anon_sym_LT_POUNDelse_GT = 76,
  anon_sym_LT_POUNDitems = 77,
  anon_sym_LT_SLASH_POUNDitems_GT = 78,
  anon_sym_LT_POUNDsep_GT = 79,
  anon_sym_LT_SLASH_POUNDsep_GT = 80,
  anon_sym_LT_POUNDif = 81,
  anon_sym_LT_SLASH_POUNDif_GT = 82,
  anon_sym_LT_POUNDelseif = 83,
  anon_sym_LT_POUNDswitch = 84,
  anon_sym_LT_SLASH_POUNDswitch_GT = 85,
  anon_sym_LT_POUNDcase = 86,
  anon_sym_LT_POUNDdefault_GT = 87,
  anon_sym_LT_POUNDfunction = 88,
  anon_sym_LT_SLASH_POUNDfunction_GT = 89,
  anon_sym_LT_POUNDreturn = 90,
  anon_sym_LT_POUNDmacro = 91,
  anon_sym_LT_SLASH_POUNDmacro_GT = 92,
  anon_sym_LT_POUNDnested = 93,
  anon_sym_LT_POUNDattempt_GT = 94,
  anon_sym_LT_SLASH_POUNDattempt_GT = 95,
  sym_recover = 96,
  sym_fallback = 97,
  sym_flush = 98,
  anon_sym_LT_POUNDftl = 99,
  anon_sym_LT_POUNDimport = 100,
  anon_sym_LT_POUNDinclude = 101,
  sym_lt = 102,
  sym_nt = 103,
  anon_sym_LT_POUNDrecurse = 104,
  sym_rt = 105,
  anon_sym_LT_POUNDsetting = 106,
  sym_stop = 107,
  sym_t = 108,
  anon_sym_LT_POUNDvisit = 109,
  anon_sym_LT_POUNDassign = 110,
  sym_end_assign = 111,
  anon_sym_LT_POUNDglobal = 112,
  sym_end_global = 113,
  anon_sym_LT_POUNDlocal = 114,
  sym_end_local = 115,
  sym_source_file = 116,
  sym__definition = 117,
  sym_interpolation = 118,
  sym_directive = 119,
  sym_parameter_group = 120,
  sym_as_expression = 121,
  sym_expression = 122,
  sym_type = 123,
  sym_built_in = 124,
  sym_group = 125,
  sym_operator = 126,
  sym_string = 127,
  sym_boolean = 128,
  sym_sequence = 129,
  sym_hash = 130,
  sym_top_level = 131,
  sym_spec_var = 132,
  sym__spec_var_name = 133,
  sym_user_defined = 134,
  sym_list = 135,
  sym_list_middle = 136,
  sym_items_middle = 137,
  sym_list_else = 138,
  sym_items = 139,
  sym_sep = 140,
  sym_sep_block = 141,
  sym_if = 142,
  sym_if_else = 143,
  sym_elseif = 144,
  sym_if_middle = 145,
  sym_switch = 146,
  sym_case = 147,
  sym_default = 148,
  sym_switch_middle = 149,
  sym_function = 150,
  sym_function_middle = 151,
  sym_return = 152,
  sym_macro = 153,
  sym_macro_middle = 154,
  sym_nested = 155,
  sym_attempt = 156,
  sym_attempt_middle = 157,
  sym_ftl = 158,
  sym_import = 159,
  sym_include = 160,
  sym_recurse = 161,
  sym_setting = 162,
  sym_visit = 163,
  sym_assign = 164,
  sym_global = 165,
  sym_local = 166,
  aux_sym_source_file_repeat1 = 167,
  aux_sym_interpolation_repeat1 = 168,
  aux_sym_as_expression_repeat1 = 169,
  aux_sym_as_expression_repeat2 = 170,
  aux_sym_group_repeat1 = 171,
  aux_sym_sequence_repeat1 = 172,
  aux_sym_top_level_repeat1 = 173,
  aux_sym_list_repeat1 = 174,
  aux_sym_items_repeat1 = 175,
  aux_sym_if_repeat1 = 176,
  aux_sym_switch_repeat1 = 177,
  aux_sym_case_repeat1 = 178,
  aux_sym_case_repeat2 = 179,
  aux_sym_function_repeat1 = 180,
  aux_sym_macro_repeat1 = 181,
  aux_sym_attempt_repeat1 = 182,
  alias_sym_sub_level = 183,
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
  [anon_sym_using] = "using",
  [anon_sym_is] = "is",
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
  [anon_sym_auto_esc] = "auto_esc",
  [anon_sym_caller_template_name] = "caller_template_name",
  [anon_sym_current_template_name] = "current_template_name",
  [anon_sym_data_model] = "data_model",
  [anon_sym_error] = "error",
  [anon_sym_globals] = "globals",
  [anon_sym_incompatible_improvements] = "incompatible_improvements",
  [anon_sym_lang] = "lang",
  [anon_sym_locale] = "locale",
  [anon_sym_locale_object] = "locale_object",
  [anon_sym_locals] = "locals",
  [anon_sym_main] = "main",
  [anon_sym_main_template_name] = "main_template_name",
  [anon_sym_namespace] = "namespace",
  [anon_sym_node] = "node",
  [anon_sym_now] = "now",
  [anon_sym_output_encoding] = "output_encoding",
  [anon_sym_get_optional_template] = "get_optional_template",
  [anon_sym_pass] = "pass",
  [anon_sym_template_name] = "template_name",
  [anon_sym_url_escaping_charset] = "url_escaping_charset",
  [anon_sym_output_format] = "output_format",
  [anon_sym_vars] = "vars",
  [anon_sym_version] = "version",
  [anon_sym_LT_AT] = "<@",
  [anon_sym_GT] = ">",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_POUND] = "<#",
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
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
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
  [anon_sym_auto_esc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_caller_template_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_current_template_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data_model] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_globals] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_incompatible_improvements] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lang] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_locale] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_locale_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_locals] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_main] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_main_template_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_namespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_node] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_now] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output_encoding] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get_optional_template] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_template_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_url_escaping_charset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output_format] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vars] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_version] = {
    .visible = true,
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
  [anon_sym_LT_POUND] = {
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
  [alias_sym_sub_level] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [1] = alias_sym_sub_level,
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
      if (lookahead == 'c')
        ADVANCE(211);
      if (lookahead == 'd')
        ADVANCE(251);
      if (lookahead == 'e')
        ADVANCE(261);
      if (lookahead == 'f')
        ADVANCE(266);
      if (lookahead == 'g')
        ADVANCE(271);
      if (lookahead == 'i')
        ADVANCE(300);
      if (lookahead == 'l')
        ADVANCE(326);
      if (lookahead == 'm')
        ADVANCE(348);
      if (lookahead == 'n')
        ADVANCE(366);
      if (lookahead == 'o')
        ADVANCE(379);
      if (lookahead == 'p')
        ADVANCE(400);
      if (lookahead == 't')
        ADVANCE(404);
      if (lookahead == 'u')
        ADVANCE(420);
      if (lookahead == 'v')
        ADVANCE(444);
      if (lookahead == '{')
        ADVANCE(454);
      if (lookahead == '|')
        ADVANCE(455);
      if (lookahead == '}')
        ADVANCE(457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(458);
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
      if (lookahead == 'u')
        ADVANCE(231);
      END_STATE();
    case 212:
      if (lookahead == 'l')
        ADVANCE(213);
      END_STATE();
    case 213:
      if (lookahead == 'l')
        ADVANCE(214);
      END_STATE();
    case 214:
      if (lookahead == 'e')
        ADVANCE(215);
      END_STATE();
    case 215:
      if (lookahead == 'r')
        ADVANCE(216);
      END_STATE();
    case 216:
      if (lookahead == '_')
        ADVANCE(217);
      END_STATE();
    case 217:
      if (lookahead == 't')
        ADVANCE(218);
      END_STATE();
    case 218:
      if (lookahead == 'e')
        ADVANCE(219);
      END_STATE();
    case 219:
      if (lookahead == 'm')
        ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead == 'p')
        ADVANCE(221);
      END_STATE();
    case 221:
      if (lookahead == 'l')
        ADVANCE(222);
      END_STATE();
    case 222:
      if (lookahead == 'a')
        ADVANCE(223);
      END_STATE();
    case 223:
      if (lookahead == 't')
        ADVANCE(224);
      END_STATE();
    case 224:
      if (lookahead == 'e')
        ADVANCE(225);
      END_STATE();
    case 225:
      if (lookahead == '_')
        ADVANCE(226);
      END_STATE();
    case 226:
      if (lookahead == 'n')
        ADVANCE(227);
      END_STATE();
    case 227:
      if (lookahead == 'a')
        ADVANCE(228);
      END_STATE();
    case 228:
      if (lookahead == 'm')
        ADVANCE(229);
      END_STATE();
    case 229:
      if (lookahead == 'e')
        ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_caller_template_name);
      END_STATE();
    case 231:
      if (lookahead == 'r')
        ADVANCE(232);
      END_STATE();
    case 232:
      if (lookahead == 'r')
        ADVANCE(233);
      END_STATE();
    case 233:
      if (lookahead == 'e')
        ADVANCE(234);
      END_STATE();
    case 234:
      if (lookahead == 'n')
        ADVANCE(235);
      END_STATE();
    case 235:
      if (lookahead == 't')
        ADVANCE(236);
      END_STATE();
    case 236:
      if (lookahead == '_')
        ADVANCE(237);
      END_STATE();
    case 237:
      if (lookahead == 't')
        ADVANCE(238);
      END_STATE();
    case 238:
      if (lookahead == 'e')
        ADVANCE(239);
      END_STATE();
    case 239:
      if (lookahead == 'm')
        ADVANCE(240);
      END_STATE();
    case 240:
      if (lookahead == 'p')
        ADVANCE(241);
      END_STATE();
    case 241:
      if (lookahead == 'l')
        ADVANCE(242);
      END_STATE();
    case 242:
      if (lookahead == 'a')
        ADVANCE(243);
      END_STATE();
    case 243:
      if (lookahead == 't')
        ADVANCE(244);
      END_STATE();
    case 244:
      if (lookahead == 'e')
        ADVANCE(245);
      END_STATE();
    case 245:
      if (lookahead == '_')
        ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead == 'n')
        ADVANCE(247);
      END_STATE();
    case 247:
      if (lookahead == 'a')
        ADVANCE(248);
      END_STATE();
    case 248:
      if (lookahead == 'm')
        ADVANCE(249);
      END_STATE();
    case 249:
      if (lookahead == 'e')
        ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_current_template_name);
      END_STATE();
    case 251:
      if (lookahead == 'a')
        ADVANCE(252);
      END_STATE();
    case 252:
      if (lookahead == 't')
        ADVANCE(253);
      END_STATE();
    case 253:
      if (lookahead == 'a')
        ADVANCE(254);
      END_STATE();
    case 254:
      if (lookahead == '_')
        ADVANCE(255);
      END_STATE();
    case 255:
      if (lookahead == 'm')
        ADVANCE(256);
      END_STATE();
    case 256:
      if (lookahead == 'o')
        ADVANCE(257);
      END_STATE();
    case 257:
      if (lookahead == 'd')
        ADVANCE(258);
      END_STATE();
    case 258:
      if (lookahead == 'e')
        ADVANCE(259);
      END_STATE();
    case 259:
      if (lookahead == 'l')
        ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_data_model);
      END_STATE();
    case 261:
      if (lookahead == 'r')
        ADVANCE(262);
      END_STATE();
    case 262:
      if (lookahead == 'r')
        ADVANCE(263);
      END_STATE();
    case 263:
      if (lookahead == 'o')
        ADVANCE(264);
      END_STATE();
    case 264:
      if (lookahead == 'r')
        ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_error);
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
      if (lookahead == 's')
        ADVANCE(269);
      END_STATE();
    case 269:
      if (lookahead == 'e')
        ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 271:
      if (lookahead == 'e')
        ADVANCE(272);
      if (lookahead == 'l')
        ADVANCE(292);
      if (lookahead == 't')
        ADVANCE(298);
      END_STATE();
    case 272:
      if (lookahead == 't')
        ADVANCE(273);
      END_STATE();
    case 273:
      if (lookahead == '_')
        ADVANCE(274);
      END_STATE();
    case 274:
      if (lookahead == 'o')
        ADVANCE(275);
      END_STATE();
    case 275:
      if (lookahead == 'p')
        ADVANCE(276);
      END_STATE();
    case 276:
      if (lookahead == 't')
        ADVANCE(277);
      END_STATE();
    case 277:
      if (lookahead == 'i')
        ADVANCE(278);
      END_STATE();
    case 278:
      if (lookahead == 'o')
        ADVANCE(279);
      END_STATE();
    case 279:
      if (lookahead == 'n')
        ADVANCE(280);
      END_STATE();
    case 280:
      if (lookahead == 'a')
        ADVANCE(281);
      END_STATE();
    case 281:
      if (lookahead == 'l')
        ADVANCE(282);
      END_STATE();
    case 282:
      if (lookahead == '_')
        ADVANCE(283);
      END_STATE();
    case 283:
      if (lookahead == 't')
        ADVANCE(284);
      END_STATE();
    case 284:
      if (lookahead == 'e')
        ADVANCE(285);
      END_STATE();
    case 285:
      if (lookahead == 'm')
        ADVANCE(286);
      END_STATE();
    case 286:
      if (lookahead == 'p')
        ADVANCE(287);
      END_STATE();
    case 287:
      if (lookahead == 'l')
        ADVANCE(288);
      END_STATE();
    case 288:
      if (lookahead == 'a')
        ADVANCE(289);
      END_STATE();
    case 289:
      if (lookahead == 't')
        ADVANCE(290);
      END_STATE();
    case 290:
      if (lookahead == 'e')
        ADVANCE(291);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_get_optional_template);
      END_STATE();
    case 292:
      if (lookahead == 'o')
        ADVANCE(293);
      END_STATE();
    case 293:
      if (lookahead == 'b')
        ADVANCE(294);
      END_STATE();
    case 294:
      if (lookahead == 'a')
        ADVANCE(295);
      END_STATE();
    case 295:
      if (lookahead == 'l')
        ADVANCE(296);
      END_STATE();
    case 296:
      if (lookahead == 's')
        ADVANCE(297);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_globals);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_gt);
      if (lookahead == 'e')
        ADVANCE(299);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_gte);
      END_STATE();
    case 300:
      if (lookahead == 'n')
        ADVANCE(301);
      if (lookahead == 's')
        ADVANCE(325);
      END_STATE();
    case 301:
      if (lookahead == 'c')
        ADVANCE(302);
      END_STATE();
    case 302:
      if (lookahead == 'o')
        ADVANCE(303);
      END_STATE();
    case 303:
      if (lookahead == 'm')
        ADVANCE(304);
      END_STATE();
    case 304:
      if (lookahead == 'p')
        ADVANCE(305);
      END_STATE();
    case 305:
      if (lookahead == 'a')
        ADVANCE(306);
      END_STATE();
    case 306:
      if (lookahead == 't')
        ADVANCE(307);
      END_STATE();
    case 307:
      if (lookahead == 'i')
        ADVANCE(308);
      END_STATE();
    case 308:
      if (lookahead == 'b')
        ADVANCE(309);
      END_STATE();
    case 309:
      if (lookahead == 'l')
        ADVANCE(310);
      END_STATE();
    case 310:
      if (lookahead == 'e')
        ADVANCE(311);
      END_STATE();
    case 311:
      if (lookahead == '_')
        ADVANCE(312);
      END_STATE();
    case 312:
      if (lookahead == 'i')
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
      if (lookahead == 'r')
        ADVANCE(316);
      END_STATE();
    case 316:
      if (lookahead == 'o')
        ADVANCE(317);
      END_STATE();
    case 317:
      if (lookahead == 'v')
        ADVANCE(318);
      END_STATE();
    case 318:
      if (lookahead == 'e')
        ADVANCE(319);
      END_STATE();
    case 319:
      if (lookahead == 'm')
        ADVANCE(320);
      END_STATE();
    case 320:
      if (lookahead == 'e')
        ADVANCE(321);
      END_STATE();
    case 321:
      if (lookahead == 'n')
        ADVANCE(322);
      END_STATE();
    case 322:
      if (lookahead == 't')
        ADVANCE(323);
      END_STATE();
    case 323:
      if (lookahead == 's')
        ADVANCE(324);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_incompatible_improvements);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 326:
      if (lookahead == 'a')
        ADVANCE(327);
      if (lookahead == 'i')
        ADVANCE(330);
      if (lookahead == 'o')
        ADVANCE(333);
      if (lookahead == 't')
        ADVANCE(346);
      END_STATE();
    case 327:
      if (lookahead == 'n')
        ADVANCE(328);
      END_STATE();
    case 328:
      if (lookahead == 'g')
        ADVANCE(329);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_lang);
      END_STATE();
    case 330:
      if (lookahead == 's')
        ADVANCE(331);
      END_STATE();
    case 331:
      if (lookahead == 't')
        ADVANCE(332);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 333:
      if (lookahead == 'c')
        ADVANCE(334);
      END_STATE();
    case 334:
      if (lookahead == 'a')
        ADVANCE(335);
      END_STATE();
    case 335:
      if (lookahead == 'l')
        ADVANCE(336);
      END_STATE();
    case 336:
      if (lookahead == 'e')
        ADVANCE(337);
      if (lookahead == 's')
        ADVANCE(345);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_locale);
      if (lookahead == '_')
        ADVANCE(338);
      END_STATE();
    case 338:
      if (lookahead == 'o')
        ADVANCE(339);
      END_STATE();
    case 339:
      if (lookahead == 'b')
        ADVANCE(340);
      END_STATE();
    case 340:
      if (lookahead == 'j')
        ADVANCE(341);
      END_STATE();
    case 341:
      if (lookahead == 'e')
        ADVANCE(342);
      END_STATE();
    case 342:
      if (lookahead == 'c')
        ADVANCE(343);
      END_STATE();
    case 343:
      if (lookahead == 't')
        ADVANCE(344);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_locale_object);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_locals);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_lt);
      if (lookahead == 'e')
        ADVANCE(347);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_lte);
      END_STATE();
    case 348:
      if (lookahead == 'a')
        ADVANCE(349);
      END_STATE();
    case 349:
      if (lookahead == 'i')
        ADVANCE(350);
      END_STATE();
    case 350:
      if (lookahead == 'n')
        ADVANCE(351);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_main);
      if (lookahead == '_')
        ADVANCE(352);
      END_STATE();
    case 352:
      if (lookahead == 't')
        ADVANCE(353);
      END_STATE();
    case 353:
      if (lookahead == 'e')
        ADVANCE(354);
      END_STATE();
    case 354:
      if (lookahead == 'm')
        ADVANCE(355);
      END_STATE();
    case 355:
      if (lookahead == 'p')
        ADVANCE(356);
      END_STATE();
    case 356:
      if (lookahead == 'l')
        ADVANCE(357);
      END_STATE();
    case 357:
      if (lookahead == 'a')
        ADVANCE(358);
      END_STATE();
    case 358:
      if (lookahead == 't')
        ADVANCE(359);
      END_STATE();
    case 359:
      if (lookahead == 'e')
        ADVANCE(360);
      END_STATE();
    case 360:
      if (lookahead == '_')
        ADVANCE(361);
      END_STATE();
    case 361:
      if (lookahead == 'n')
        ADVANCE(362);
      END_STATE();
    case 362:
      if (lookahead == 'a')
        ADVANCE(363);
      END_STATE();
    case 363:
      if (lookahead == 'm')
        ADVANCE(364);
      END_STATE();
    case 364:
      if (lookahead == 'e')
        ADVANCE(365);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_main_template_name);
      END_STATE();
    case 366:
      if (lookahead == 'a')
        ADVANCE(367);
      if (lookahead == 'o')
        ADVANCE(375);
      END_STATE();
    case 367:
      if (lookahead == 'm')
        ADVANCE(368);
      END_STATE();
    case 368:
      if (lookahead == 'e')
        ADVANCE(369);
      END_STATE();
    case 369:
      if (lookahead == 's')
        ADVANCE(370);
      END_STATE();
    case 370:
      if (lookahead == 'p')
        ADVANCE(371);
      END_STATE();
    case 371:
      if (lookahead == 'a')
        ADVANCE(372);
      END_STATE();
    case 372:
      if (lookahead == 'c')
        ADVANCE(373);
      END_STATE();
    case 373:
      if (lookahead == 'e')
        ADVANCE(374);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 375:
      if (lookahead == 'd')
        ADVANCE(376);
      if (lookahead == 'w')
        ADVANCE(378);
      END_STATE();
    case 376:
      if (lookahead == 'e')
        ADVANCE(377);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_node);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_now);
      END_STATE();
    case 379:
      if (lookahead == 'u')
        ADVANCE(380);
      END_STATE();
    case 380:
      if (lookahead == 't')
        ADVANCE(381);
      END_STATE();
    case 381:
      if (lookahead == 'p')
        ADVANCE(382);
      END_STATE();
    case 382:
      if (lookahead == 'u')
        ADVANCE(383);
      END_STATE();
    case 383:
      if (lookahead == 't')
        ADVANCE(384);
      END_STATE();
    case 384:
      if (lookahead == '_')
        ADVANCE(385);
      END_STATE();
    case 385:
      if (lookahead == 'e')
        ADVANCE(386);
      if (lookahead == 'f')
        ADVANCE(394);
      END_STATE();
    case 386:
      if (lookahead == 'n')
        ADVANCE(387);
      END_STATE();
    case 387:
      if (lookahead == 'c')
        ADVANCE(388);
      END_STATE();
    case 388:
      if (lookahead == 'o')
        ADVANCE(389);
      END_STATE();
    case 389:
      if (lookahead == 'd')
        ADVANCE(390);
      END_STATE();
    case 390:
      if (lookahead == 'i')
        ADVANCE(391);
      END_STATE();
    case 391:
      if (lookahead == 'n')
        ADVANCE(392);
      END_STATE();
    case 392:
      if (lookahead == 'g')
        ADVANCE(393);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_output_encoding);
      END_STATE();
    case 394:
      if (lookahead == 'o')
        ADVANCE(395);
      END_STATE();
    case 395:
      if (lookahead == 'r')
        ADVANCE(396);
      END_STATE();
    case 396:
      if (lookahead == 'm')
        ADVANCE(397);
      END_STATE();
    case 397:
      if (lookahead == 'a')
        ADVANCE(398);
      END_STATE();
    case 398:
      if (lookahead == 't')
        ADVANCE(399);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_output_format);
      END_STATE();
    case 400:
      if (lookahead == 'a')
        ADVANCE(401);
      END_STATE();
    case 401:
      if (lookahead == 's')
        ADVANCE(402);
      END_STATE();
    case 402:
      if (lookahead == 's')
        ADVANCE(403);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_pass);
      END_STATE();
    case 404:
      if (lookahead == 'e')
        ADVANCE(405);
      if (lookahead == 'r')
        ADVANCE(417);
      END_STATE();
    case 405:
      if (lookahead == 'm')
        ADVANCE(406);
      END_STATE();
    case 406:
      if (lookahead == 'p')
        ADVANCE(407);
      END_STATE();
    case 407:
      if (lookahead == 'l')
        ADVANCE(408);
      END_STATE();
    case 408:
      if (lookahead == 'a')
        ADVANCE(409);
      END_STATE();
    case 409:
      if (lookahead == 't')
        ADVANCE(410);
      END_STATE();
    case 410:
      if (lookahead == 'e')
        ADVANCE(411);
      END_STATE();
    case 411:
      if (lookahead == '_')
        ADVANCE(412);
      END_STATE();
    case 412:
      if (lookahead == 'n')
        ADVANCE(413);
      END_STATE();
    case 413:
      if (lookahead == 'a')
        ADVANCE(414);
      END_STATE();
    case 414:
      if (lookahead == 'm')
        ADVANCE(415);
      END_STATE();
    case 415:
      if (lookahead == 'e')
        ADVANCE(416);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_template_name);
      END_STATE();
    case 417:
      if (lookahead == 'u')
        ADVANCE(418);
      END_STATE();
    case 418:
      if (lookahead == 'e')
        ADVANCE(419);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 420:
      if (lookahead == 'r')
        ADVANCE(421);
      if (lookahead == 's')
        ADVANCE(440);
      END_STATE();
    case 421:
      if (lookahead == 'l')
        ADVANCE(422);
      END_STATE();
    case 422:
      if (lookahead == '_')
        ADVANCE(423);
      END_STATE();
    case 423:
      if (lookahead == 'e')
        ADVANCE(424);
      END_STATE();
    case 424:
      if (lookahead == 's')
        ADVANCE(425);
      END_STATE();
    case 425:
      if (lookahead == 'c')
        ADVANCE(426);
      END_STATE();
    case 426:
      if (lookahead == 'a')
        ADVANCE(427);
      END_STATE();
    case 427:
      if (lookahead == 'p')
        ADVANCE(428);
      END_STATE();
    case 428:
      if (lookahead == 'i')
        ADVANCE(429);
      END_STATE();
    case 429:
      if (lookahead == 'n')
        ADVANCE(430);
      END_STATE();
    case 430:
      if (lookahead == 'g')
        ADVANCE(431);
      END_STATE();
    case 431:
      if (lookahead == '_')
        ADVANCE(432);
      END_STATE();
    case 432:
      if (lookahead == 'c')
        ADVANCE(433);
      END_STATE();
    case 433:
      if (lookahead == 'h')
        ADVANCE(434);
      END_STATE();
    case 434:
      if (lookahead == 'a')
        ADVANCE(435);
      END_STATE();
    case 435:
      if (lookahead == 'r')
        ADVANCE(436);
      END_STATE();
    case 436:
      if (lookahead == 's')
        ADVANCE(437);
      END_STATE();
    case 437:
      if (lookahead == 'e')
        ADVANCE(438);
      END_STATE();
    case 438:
      if (lookahead == 't')
        ADVANCE(439);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_url_escaping_charset);
      END_STATE();
    case 440:
      if (lookahead == 'i')
        ADVANCE(441);
      END_STATE();
    case 441:
      if (lookahead == 'n')
        ADVANCE(442);
      END_STATE();
    case 442:
      if (lookahead == 'g')
        ADVANCE(443);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 444:
      if (lookahead == 'a')
        ADVANCE(445);
      if (lookahead == 'e')
        ADVANCE(448);
      END_STATE();
    case 445:
      if (lookahead == 'r')
        ADVANCE(446);
      END_STATE();
    case 446:
      if (lookahead == 's')
        ADVANCE(447);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_vars);
      END_STATE();
    case 448:
      if (lookahead == 'r')
        ADVANCE(449);
      END_STATE();
    case 449:
      if (lookahead == 's')
        ADVANCE(450);
      END_STATE();
    case 450:
      if (lookahead == 'i')
        ADVANCE(451);
      END_STATE();
    case 451:
      if (lookahead == 'o')
        ADVANCE(452);
      END_STATE();
    case 452:
      if (lookahead == 'n')
        ADVANCE(453);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 455:
      if (lookahead == '|')
        ADVANCE(456);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 459:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(460);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(459);
      END_STATE();
    case 460:
      if (lookahead == '#')
        ADVANCE(461);
      if (lookahead == '/')
        ADVANCE(469);
      if (lookahead == '@')
        ADVANCE(194);
      END_STATE();
    case 461:
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
        ADVANCE(462);
      if (lookahead == 'l')
        ADVANCE(130);
      if (lookahead == 'm')
        ADVANCE(137);
      if (lookahead == 'n')
        ADVANCE(463);
      if (lookahead == 'r')
        ADVANCE(464);
      if (lookahead == 's')
        ADVANCE(467);
      if (lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'v')
        ADVANCE(188);
      END_STATE();
    case 462:
      if (lookahead == 'f')
        ADVANCE(114);
      if (lookahead == 'm')
        ADVANCE(115);
      if (lookahead == 'n')
        ADVANCE(120);
      END_STATE();
    case 463:
      if (lookahead == 't')
        ADVANCE(148);
      END_STATE();
    case 464:
      if (lookahead == 'e')
        ADVANCE(465);
      if (lookahead == 't')
        ADVANCE(166);
      END_STATE();
    case 465:
      if (lookahead == 'c')
        ADVANCE(466);
      END_STATE();
    case 466:
      if (lookahead == 'u')
        ADVANCE(158);
      END_STATE();
    case 467:
      if (lookahead == 'e')
        ADVANCE(468);
      if (lookahead == 't')
        ADVANCE(177);
      if (lookahead == 'w')
        ADVANCE(181);
      END_STATE();
    case 468:
      if (lookahead == 't')
        ADVANCE(172);
      END_STATE();
    case 469:
      if (lookahead == '#')
        ADVANCE(470);
      END_STATE();
    case 470:
      if (lookahead == 'a')
        ADVANCE(471);
      if (lookahead == 'g')
        ADVANCE(478);
      if (lookahead == 'l')
        ADVANCE(485);
      END_STATE();
    case 471:
      if (lookahead == 's')
        ADVANCE(472);
      END_STATE();
    case 472:
      if (lookahead == 's')
        ADVANCE(473);
      END_STATE();
    case 473:
      if (lookahead == 'i')
        ADVANCE(474);
      END_STATE();
    case 474:
      if (lookahead == 'g')
        ADVANCE(475);
      END_STATE();
    case 475:
      if (lookahead == 'n')
        ADVANCE(476);
      END_STATE();
    case 476:
      if (lookahead == '>')
        ADVANCE(477);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_end_assign);
      END_STATE();
    case 478:
      if (lookahead == 'l')
        ADVANCE(479);
      END_STATE();
    case 479:
      if (lookahead == 'o')
        ADVANCE(480);
      END_STATE();
    case 480:
      if (lookahead == 'b')
        ADVANCE(481);
      END_STATE();
    case 481:
      if (lookahead == 'a')
        ADVANCE(482);
      END_STATE();
    case 482:
      if (lookahead == 'l')
        ADVANCE(483);
      END_STATE();
    case 483:
      if (lookahead == '>')
        ADVANCE(484);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_end_global);
      END_STATE();
    case 485:
      if (lookahead == 'o')
        ADVANCE(486);
      END_STATE();
    case 486:
      if (lookahead == 'c')
        ADVANCE(487);
      END_STATE();
    case 487:
      if (lookahead == 'a')
        ADVANCE(488);
      END_STATE();
    case 488:
      if (lookahead == 'l')
        ADVANCE(489);
      END_STATE();
    case 489:
      if (lookahead == '>')
        ADVANCE(490);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_end_local);
      END_STATE();
    case 491:
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '.')
        ADVANCE(492);
      if (lookahead == '>')
        ADVANCE(197);
      if (lookahead == '{')
        ADVANCE(454);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 492:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 494:
      if (lookahead == 'l')
        ADVANCE(495);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(494);
      END_STATE();
    case 495:
      if (lookahead == 'i')
        ADVANCE(330);
      END_STATE();
    case 496:
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
        ADVANCE(497);
      if (lookahead == '/')
        ADVANCE(498);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(499);
      if (lookahead == '=')
        ADVANCE(195);
      if (lookahead == '>')
        ADVANCE(197);
      if (lookahead == '?')
        ADVANCE(198);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == 'a')
        ADVANCE(500);
      if (lookahead == 'g')
        ADVANCE(502);
      if (lookahead == 'i')
        ADVANCE(505);
      if (lookahead == 'l')
        ADVANCE(507);
      if (lookahead == 't')
        ADVANCE(510);
      if (lookahead == 'u')
        ADVANCE(514);
      if (lookahead == '{')
        ADVANCE(454);
      if (lookahead == '|')
        ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(496);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(23);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=')
        ADVANCE(193);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_gt);
      if (lookahead == 'e')
        ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_gte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_is);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_lt);
      if (lookahead == 'e')
        ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_lte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'u')
        ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'g')
        ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_using);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 520:
      if (lookahead == '<')
        ADVANCE(521);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(520);
      END_STATE();
    case 521:
      if (lookahead == '#')
        ADVANCE(522);
      if (lookahead == '/')
        ADVANCE(525);
      if (lookahead == '@')
        ADVANCE(194);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_LT_POUND);
      if (lookahead == 'a')
        ADVANCE(38);
      if (lookahead == 'f')
        ADVANCE(84);
      if (lookahead == 'g')
        ADVANCE(107);
      if (lookahead == 'i')
        ADVANCE(462);
      if (lookahead == 'l')
        ADVANCE(130);
      if (lookahead == 'm')
        ADVANCE(137);
      if (lookahead == 'n')
        ADVANCE(463);
      if (lookahead == 'r')
        ADVANCE(523);
      if (lookahead == 's')
        ADVANCE(467);
      if (lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'v')
        ADVANCE(188);
      END_STATE();
    case 523:
      if (lookahead == 'e')
        ADVANCE(524);
      if (lookahead == 't')
        ADVANCE(166);
      END_STATE();
    case 524:
      if (lookahead == 'c')
        ADVANCE(152);
      END_STATE();
    case 525:
      if (lookahead == '#')
        ADVANCE(526);
      END_STATE();
    case 526:
      if (lookahead == 'a')
        ADVANCE(527);
      if (lookahead == 'g')
        ADVANCE(478);
      if (lookahead == 'l')
        ADVANCE(485);
      END_STATE();
    case 527:
      if (lookahead == 's')
        ADVANCE(472);
      if (lookahead == 't')
        ADVANCE(528);
      END_STATE();
    case 528:
      if (lookahead == 't')
        ADVANCE(529);
      END_STATE();
    case 529:
      if (lookahead == 'e')
        ADVANCE(530);
      END_STATE();
    case 530:
      if (lookahead == 'm')
        ADVANCE(531);
      END_STATE();
    case 531:
      if (lookahead == 'p')
        ADVANCE(532);
      END_STATE();
    case 532:
      if (lookahead == 't')
        ADVANCE(533);
      END_STATE();
    case 533:
      if (lookahead == '>')
        ADVANCE(534);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDattempt_GT);
      END_STATE();
    case 535:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(536);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(535);
      END_STATE();
    case 536:
      if (lookahead == '#')
        ADVANCE(31);
      if (lookahead == '/')
        ADVANCE(537);
      if (lookahead == '@')
        ADVANCE(194);
      END_STATE();
    case 537:
      if (lookahead == '#')
        ADVANCE(538);
      END_STATE();
    case 538:
      if (lookahead == 'a')
        ADVANCE(527);
      if (lookahead == 'f')
        ADVANCE(539);
      if (lookahead == 'g')
        ADVANCE(478);
      if (lookahead == 'i')
        ADVANCE(548);
      if (lookahead == 'l')
        ADVANCE(556);
      if (lookahead == 'm')
        ADVANCE(561);
      if (lookahead == 's')
        ADVANCE(567);
      END_STATE();
    case 539:
      if (lookahead == 'u')
        ADVANCE(540);
      END_STATE();
    case 540:
      if (lookahead == 'n')
        ADVANCE(541);
      END_STATE();
    case 541:
      if (lookahead == 'c')
        ADVANCE(542);
      END_STATE();
    case 542:
      if (lookahead == 't')
        ADVANCE(543);
      END_STATE();
    case 543:
      if (lookahead == 'i')
        ADVANCE(544);
      END_STATE();
    case 544:
      if (lookahead == 'o')
        ADVANCE(545);
      END_STATE();
    case 545:
      if (lookahead == 'n')
        ADVANCE(546);
      END_STATE();
    case 546:
      if (lookahead == '>')
        ADVANCE(547);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDfunction_GT);
      END_STATE();
    case 548:
      if (lookahead == 'f')
        ADVANCE(549);
      if (lookahead == 't')
        ADVANCE(551);
      END_STATE();
    case 549:
      if (lookahead == '>')
        ADVANCE(550);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDif_GT);
      END_STATE();
    case 551:
      if (lookahead == 'e')
        ADVANCE(552);
      END_STATE();
    case 552:
      if (lookahead == 'm')
        ADVANCE(553);
      END_STATE();
    case 553:
      if (lookahead == 's')
        ADVANCE(554);
      END_STATE();
    case 554:
      if (lookahead == '>')
        ADVANCE(555);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDitems_GT);
      END_STATE();
    case 556:
      if (lookahead == 'i')
        ADVANCE(557);
      if (lookahead == 'o')
        ADVANCE(486);
      END_STATE();
    case 557:
      if (lookahead == 's')
        ADVANCE(558);
      END_STATE();
    case 558:
      if (lookahead == 't')
        ADVANCE(559);
      END_STATE();
    case 559:
      if (lookahead == '>')
        ADVANCE(560);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDlist_GT);
      END_STATE();
    case 561:
      if (lookahead == 'a')
        ADVANCE(562);
      END_STATE();
    case 562:
      if (lookahead == 'c')
        ADVANCE(563);
      END_STATE();
    case 563:
      if (lookahead == 'r')
        ADVANCE(564);
      END_STATE();
    case 564:
      if (lookahead == 'o')
        ADVANCE(565);
      END_STATE();
    case 565:
      if (lookahead == '>')
        ADVANCE(566);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDmacro_GT);
      END_STATE();
    case 567:
      if (lookahead == 'w')
        ADVANCE(568);
      END_STATE();
    case 568:
      if (lookahead == 'i')
        ADVANCE(569);
      END_STATE();
    case 569:
      if (lookahead == 't')
        ADVANCE(570);
      END_STATE();
    case 570:
      if (lookahead == 'c')
        ADVANCE(571);
      END_STATE();
    case 571:
      if (lookahead == 'h')
        ADVANCE(572);
      END_STATE();
    case 572:
      if (lookahead == '>')
        ADVANCE(573);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDswitch_GT);
      END_STATE();
    case 574:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(574);
      END_STATE();
    case 575:
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
        ADVANCE(497);
      if (lookahead == '/')
        ADVANCE(498);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(499);
      if (lookahead == '=')
        ADVANCE(195);
      if (lookahead == '?')
        ADVANCE(576);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == 'g')
        ADVANCE(502);
      if (lookahead == 'i')
        ADVANCE(505);
      if (lookahead == 'l')
        ADVANCE(507);
      if (lookahead == 't')
        ADVANCE(510);
      if (lookahead == 'u')
        ADVANCE(514);
      if (lookahead == '{')
        ADVANCE(454);
      if (lookahead == '|')
        ADVANCE(455);
      if (lookahead == '}')
        ADVANCE(457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(575);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 576:
      if (lookahead == '?')
        ADVANCE(199);
      END_STATE();
    case 577:
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
        ADVANCE(497);
      if (lookahead == '/')
        ADVANCE(27);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(499);
      if (lookahead == '=')
        ADVANCE(195);
      if (lookahead == '>')
        ADVANCE(197);
      if (lookahead == '?')
        ADVANCE(198);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == 'a')
        ADVANCE(500);
      if (lookahead == 'g')
        ADVANCE(502);
      if (lookahead == 'i')
        ADVANCE(505);
      if (lookahead == 'l')
        ADVANCE(507);
      if (lookahead == 't')
        ADVANCE(510);
      if (lookahead == 'u')
        ADVANCE(514);
      if (lookahead == '{')
        ADVANCE(454);
      if (lookahead == '|')
        ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(577);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 578:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '.')
        ADVANCE(579);
      if (lookahead == '>')
        ADVANCE(197);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == 't')
        ADVANCE(510);
      if (lookahead == '{')
        ADVANCE(454);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(578);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 580:
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
        ADVANCE(497);
      if (lookahead == '/')
        ADVANCE(498);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(499);
      if (lookahead == '=')
        ADVANCE(195);
      if (lookahead == '>')
        ADVANCE(197);
      if (lookahead == '?')
        ADVANCE(198);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == 'a')
        ADVANCE(500);
      if (lookahead == 'g')
        ADVANCE(502);
      if (lookahead == 'i')
        ADVANCE(505);
      if (lookahead == 'l')
        ADVANCE(507);
      if (lookahead == 't')
        ADVANCE(510);
      if (lookahead == 'u')
        ADVANCE(514);
      if (lookahead == '{')
        ADVANCE(454);
      if (lookahead == '|')
        ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(580);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 581:
      if (lookahead == 'f')
        ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(581);
      END_STATE();
    case 582:
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
        ADVANCE(497);
      if (lookahead == '/')
        ADVANCE(498);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(499);
      if (lookahead == '=')
        ADVANCE(195);
      if (lookahead == '?')
        ADVANCE(576);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == ']')
        ADVANCE(201);
      if (lookahead == 'g')
        ADVANCE(502);
      if (lookahead == 'i')
        ADVANCE(505);
      if (lookahead == 'l')
        ADVANCE(507);
      if (lookahead == 't')
        ADVANCE(510);
      if (lookahead == 'u')
        ADVANCE(514);
      if (lookahead == '{')
        ADVANCE(454);
      if (lookahead == '|')
        ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(582);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 583:
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
        ADVANCE(498);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(499);
      if (lookahead == '=')
        ADVANCE(195);
      if (lookahead == '>')
        ADVANCE(197);
      if (lookahead == '?')
        ADVANCE(198);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == 'a')
        ADVANCE(500);
      if (lookahead == 'g')
        ADVANCE(502);
      if (lookahead == 'i')
        ADVANCE(505);
      if (lookahead == 'l')
        ADVANCE(507);
      if (lookahead == 't')
        ADVANCE(510);
      if (lookahead == 'u')
        ADVANCE(514);
      if (lookahead == '{')
        ADVANCE(454);
      if (lookahead == '|')
        ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(583);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 584:
      if (lookahead == 'a')
        ADVANCE(585);
      if (lookahead == 'c')
        ADVANCE(211);
      if (lookahead == 'd')
        ADVANCE(251);
      if (lookahead == 'e')
        ADVANCE(261);
      if (lookahead == 'g')
        ADVANCE(586);
      if (lookahead == 'i')
        ADVANCE(587);
      if (lookahead == 'l')
        ADVANCE(588);
      if (lookahead == 'm')
        ADVANCE(348);
      if (lookahead == 'n')
        ADVANCE(366);
      if (lookahead == 'o')
        ADVANCE(379);
      if (lookahead == 'p')
        ADVANCE(400);
      if (lookahead == 't')
        ADVANCE(589);
      if (lookahead == 'u')
        ADVANCE(590);
      if (lookahead == 'v')
        ADVANCE(444);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(584);
      END_STATE();
    case 585:
      if (lookahead == 'u')
        ADVANCE(204);
      END_STATE();
    case 586:
      if (lookahead == 'e')
        ADVANCE(272);
      if (lookahead == 'l')
        ADVANCE(292);
      END_STATE();
    case 587:
      if (lookahead == 'n')
        ADVANCE(301);
      END_STATE();
    case 588:
      if (lookahead == 'a')
        ADVANCE(327);
      if (lookahead == 'o')
        ADVANCE(333);
      END_STATE();
    case 589:
      if (lookahead == 'e')
        ADVANCE(405);
      END_STATE();
    case 590:
      if (lookahead == 'r')
        ADVANCE(421);
      END_STATE();
    case 591:
      if (lookahead == '<')
        ADVANCE(592);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(591);
      END_STATE();
    case 592:
      if (lookahead == '#')
        ADVANCE(593);
      if (lookahead == '/')
        ADVANCE(596);
      if (lookahead == '@')
        ADVANCE(194);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_LT_POUND);
      if (lookahead == 'a')
        ADVANCE(38);
      if (lookahead == 'f')
        ADVANCE(84);
      if (lookahead == 'g')
        ADVANCE(107);
      if (lookahead == 'i')
        ADVANCE(462);
      if (lookahead == 'l')
        ADVANCE(130);
      if (lookahead == 'm')
        ADVANCE(137);
      if (lookahead == 'n')
        ADVANCE(463);
      if (lookahead == 'r')
        ADVANCE(594);
      if (lookahead == 's')
        ADVANCE(467);
      if (lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'v')
        ADVANCE(188);
      END_STATE();
    case 594:
      if (lookahead == 'e')
        ADVANCE(595);
      if (lookahead == 't')
        ADVANCE(166);
      END_STATE();
    case 595:
      if (lookahead == 'c')
        ADVANCE(466);
      if (lookahead == 't')
        ADVANCE(162);
      END_STATE();
    case 596:
      if (lookahead == '#')
        ADVANCE(597);
      END_STATE();
    case 597:
      if (lookahead == 'a')
        ADVANCE(471);
      if (lookahead == 'f')
        ADVANCE(539);
      if (lookahead == 'g')
        ADVANCE(478);
      if (lookahead == 'l')
        ADVANCE(485);
      END_STATE();
    case 598:
      if (lookahead == '<')
        ADVANCE(599);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(598);
      END_STATE();
    case 599:
      if (lookahead == '#')
        ADVANCE(600);
      if (lookahead == '/')
        ADVANCE(601);
      if (lookahead == '@')
        ADVANCE(194);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_LT_POUND);
      if (lookahead == 'a')
        ADVANCE(38);
      if (lookahead == 'f')
        ADVANCE(84);
      if (lookahead == 'g')
        ADVANCE(107);
      if (lookahead == 'i')
        ADVANCE(462);
      if (lookahead == 'l')
        ADVANCE(130);
      if (lookahead == 'm')
        ADVANCE(137);
      if (lookahead == 'n')
        ADVANCE(142);
      if (lookahead == 'r')
        ADVANCE(594);
      if (lookahead == 's')
        ADVANCE(467);
      if (lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'v')
        ADVANCE(188);
      END_STATE();
    case 601:
      if (lookahead == '#')
        ADVANCE(602);
      END_STATE();
    case 602:
      if (lookahead == 'a')
        ADVANCE(471);
      if (lookahead == 'g')
        ADVANCE(478);
      if (lookahead == 'l')
        ADVANCE(485);
      if (lookahead == 'm')
        ADVANCE(561);
      END_STATE();
    case 603:
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
        ADVANCE(497);
      if (lookahead == '/')
        ADVANCE(498);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(499);
      if (lookahead == '=')
        ADVANCE(195);
      if (lookahead == '?')
        ADVANCE(576);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == ']')
        ADVANCE(201);
      if (lookahead == 'g')
        ADVANCE(502);
      if (lookahead == 'i')
        ADVANCE(505);
      if (lookahead == 'l')
        ADVANCE(507);
      if (lookahead == 't')
        ADVANCE(510);
      if (lookahead == 'u')
        ADVANCE(514);
      if (lookahead == '{')
        ADVANCE(454);
      if (lookahead == '|')
        ADVANCE(455);
      if (lookahead == '}')
        ADVANCE(457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(603);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 604:
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
        ADVANCE(498);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(499);
      if (lookahead == '=')
        ADVANCE(195);
      if (lookahead == '?')
        ADVANCE(576);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == 'g')
        ADVANCE(502);
      if (lookahead == 'i')
        ADVANCE(505);
      if (lookahead == 'l')
        ADVANCE(507);
      if (lookahead == 't')
        ADVANCE(510);
      if (lookahead == 'u')
        ADVANCE(514);
      if (lookahead == '{')
        ADVANCE(454);
      if (lookahead == '|')
        ADVANCE(455);
      if (lookahead == '}')
        ADVANCE(457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(604);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 605:
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
        ADVANCE(499);
      if (lookahead == '=')
        ADVANCE(195);
      if (lookahead == '>')
        ADVANCE(197);
      if (lookahead == '?')
        ADVANCE(198);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == 'a')
        ADVANCE(500);
      if (lookahead == 'g')
        ADVANCE(502);
      if (lookahead == 'i')
        ADVANCE(505);
      if (lookahead == 'l')
        ADVANCE(507);
      if (lookahead == 't')
        ADVANCE(510);
      if (lookahead == 'u')
        ADVANCE(514);
      if (lookahead == '{')
        ADVANCE(454);
      if (lookahead == '|')
        ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(605);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 606:
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
        ADVANCE(498);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(499);
      if (lookahead == '=')
        ADVANCE(195);
      if (lookahead == '?')
        ADVANCE(198);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == 'a')
        ADVANCE(500);
      if (lookahead == 'g')
        ADVANCE(502);
      if (lookahead == 'i')
        ADVANCE(505);
      if (lookahead == 'l')
        ADVANCE(507);
      if (lookahead == 't')
        ADVANCE(510);
      if (lookahead == 'u')
        ADVANCE(514);
      if (lookahead == '{')
        ADVANCE(454);
      if (lookahead == '|')
        ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(606);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 607:
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
        ADVANCE(497);
      if (lookahead == '/')
        ADVANCE(498);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(499);
      if (lookahead == '=')
        ADVANCE(195);
      if (lookahead == '?')
        ADVANCE(198);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == 'a')
        ADVANCE(500);
      if (lookahead == 'g')
        ADVANCE(502);
      if (lookahead == 'i')
        ADVANCE(505);
      if (lookahead == 'l')
        ADVANCE(507);
      if (lookahead == 't')
        ADVANCE(510);
      if (lookahead == 'u')
        ADVANCE(514);
      if (lookahead == '{')
        ADVANCE(454);
      if (lookahead == '|')
        ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(607);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 608:
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
        ADVANCE(498);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(499);
      if (lookahead == '=')
        ADVANCE(195);
      if (lookahead == '?')
        ADVANCE(576);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == ']')
        ADVANCE(201);
      if (lookahead == 'g')
        ADVANCE(502);
      if (lookahead == 'i')
        ADVANCE(505);
      if (lookahead == 'l')
        ADVANCE(507);
      if (lookahead == 't')
        ADVANCE(510);
      if (lookahead == 'u')
        ADVANCE(514);
      if (lookahead == '{')
        ADVANCE(454);
      if (lookahead == '|')
        ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(608);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 609:
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
        ADVANCE(498);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(499);
      if (lookahead == '=')
        ADVANCE(195);
      if (lookahead == '>')
        ADVANCE(197);
      if (lookahead == '?')
        ADVANCE(198);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == 'a')
        ADVANCE(500);
      if (lookahead == 'g')
        ADVANCE(502);
      if (lookahead == 'i')
        ADVANCE(505);
      if (lookahead == 'l')
        ADVANCE(507);
      if (lookahead == 't')
        ADVANCE(510);
      if (lookahead == 'u')
        ADVANCE(514);
      if (lookahead == '{')
        ADVANCE(454);
      if (lookahead == '|')
        ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(609);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 610:
      if (lookahead == '<')
        ADVANCE(611);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(610);
      END_STATE();
    case 611:
      if (lookahead == '#')
        ADVANCE(612);
      if (lookahead == '/')
        ADVANCE(613);
      if (lookahead == '@')
        ADVANCE(194);
      END_STATE();
    case 612:
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
        ADVANCE(462);
      if (lookahead == 'l')
        ADVANCE(130);
      if (lookahead == 'm')
        ADVANCE(137);
      if (lookahead == 'n')
        ADVANCE(463);
      if (lookahead == 'r')
        ADVANCE(464);
      if (lookahead == 's')
        ADVANCE(467);
      if (lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'v')
        ADVANCE(188);
      END_STATE();
    case 613:
      if (lookahead == '#')
        ADVANCE(614);
      END_STATE();
    case 614:
      if (lookahead == 'a')
        ADVANCE(471);
      if (lookahead == 'g')
        ADVANCE(478);
      if (lookahead == 'i')
        ADVANCE(615);
      if (lookahead == 'l')
        ADVANCE(485);
      END_STATE();
    case 615:
      if (lookahead == 'f')
        ADVANCE(549);
      END_STATE();
    case 616:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '.')
        ADVANCE(617);
      if (lookahead == '>')
        ADVANCE(197);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == 't')
        ADVANCE(510);
      if (lookahead == '{')
        ADVANCE(454);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(616);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 618:
      if (lookahead == '<')
        ADVANCE(619);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(618);
      END_STATE();
    case 619:
      if (lookahead == '#')
        ADVANCE(620);
      if (lookahead == '/')
        ADVANCE(622);
      if (lookahead == '@')
        ADVANCE(194);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_LT_POUND);
      if (lookahead == 'a')
        ADVANCE(38);
      if (lookahead == 'b')
        ADVANCE(51);
      if (lookahead == 'c')
        ADVANCE(621);
      if (lookahead == 'd')
        ADVANCE(69);
      if (lookahead == 'f')
        ADVANCE(84);
      if (lookahead == 'g')
        ADVANCE(107);
      if (lookahead == 'i')
        ADVANCE(462);
      if (lookahead == 'l')
        ADVANCE(130);
      if (lookahead == 'm')
        ADVANCE(137);
      if (lookahead == 'n')
        ADVANCE(463);
      if (lookahead == 'r')
        ADVANCE(464);
      if (lookahead == 's')
        ADVANCE(467);
      if (lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'v')
        ADVANCE(188);
      END_STATE();
    case 621:
      if (lookahead == 'a')
        ADVANCE(58);
      END_STATE();
    case 622:
      if (lookahead == '#')
        ADVANCE(623);
      END_STATE();
    case 623:
      if (lookahead == 'a')
        ADVANCE(471);
      if (lookahead == 'g')
        ADVANCE(478);
      if (lookahead == 'l')
        ADVANCE(485);
      if (lookahead == 's')
        ADVANCE(567);
      END_STATE();
    case 624:
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
        ADVANCE(498);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(499);
      if (lookahead == '=')
        ADVANCE(195);
      if (lookahead == '?')
        ADVANCE(576);
      if (lookahead == '[')
        ADVANCE(200);
      if (lookahead == ']')
        ADVANCE(201);
      if (lookahead == 'g')
        ADVANCE(502);
      if (lookahead == 'i')
        ADVANCE(505);
      if (lookahead == 'l')
        ADVANCE(507);
      if (lookahead == 't')
        ADVANCE(510);
      if (lookahead == 'u')
        ADVANCE(514);
      if (lookahead == '{')
        ADVANCE(454);
      if (lookahead == '|')
        ADVANCE(455);
      if (lookahead == '}')
        ADVANCE(457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(624);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 625:
      if (lookahead == '<')
        ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(625);
      END_STATE();
    case 626:
      if (lookahead == '#')
        ADVANCE(627);
      if (lookahead == '/')
        ADVANCE(633);
      if (lookahead == '@')
        ADVANCE(194);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_LT_POUND);
      if (lookahead == 'a')
        ADVANCE(38);
      if (lookahead == 'b')
        ADVANCE(51);
      if (lookahead == 'c')
        ADVANCE(628);
      if (lookahead == 'e')
        ADVANCE(629);
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
        ADVANCE(463);
      if (lookahead == 'r')
        ADVANCE(464);
      if (lookahead == 's')
        ADVANCE(168);
      if (lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'v')
        ADVANCE(188);
      END_STATE();
    case 628:
      if (lookahead == 'o')
        ADVANCE(61);
      END_STATE();
    case 629:
      if (lookahead == 'l')
        ADVANCE(630);
      END_STATE();
    case 630:
      if (lookahead == 's')
        ADVANCE(631);
      END_STATE();
    case 631:
      if (lookahead == 'e')
        ADVANCE(632);
      END_STATE();
    case 632:
      if (lookahead == '>')
        ADVANCE(81);
      END_STATE();
    case 633:
      if (lookahead == '#')
        ADVANCE(634);
      END_STATE();
    case 634:
      if (lookahead == 'a')
        ADVANCE(471);
      if (lookahead == 'g')
        ADVANCE(478);
      if (lookahead == 'l')
        ADVANCE(556);
      END_STATE();
    case 635:
      if (lookahead == '<')
        ADVANCE(636);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(635);
      END_STATE();
    case 636:
      if (lookahead == '#')
        ADVANCE(600);
      if (lookahead == '/')
        ADVANCE(637);
      if (lookahead == '@')
        ADVANCE(194);
      END_STATE();
    case 637:
      if (lookahead == '#')
        ADVANCE(638);
      END_STATE();
    case 638:
      if (lookahead == 'a')
        ADVANCE(471);
      if (lookahead == 'f')
        ADVANCE(539);
      if (lookahead == 'g')
        ADVANCE(478);
      if (lookahead == 'l')
        ADVANCE(485);
      if (lookahead == 'm')
        ADVANCE(561);
      END_STATE();
    case 639:
      if (lookahead == '<')
        ADVANCE(640);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(639);
      END_STATE();
    case 640:
      if (lookahead == '#')
        ADVANCE(627);
      if (lookahead == '/')
        ADVANCE(641);
      if (lookahead == '@')
        ADVANCE(194);
      END_STATE();
    case 641:
      if (lookahead == '#')
        ADVANCE(642);
      END_STATE();
    case 642:
      if (lookahead == 'a')
        ADVANCE(471);
      if (lookahead == 'g')
        ADVANCE(478);
      if (lookahead == 'i')
        ADVANCE(643);
      if (lookahead == 'l')
        ADVANCE(556);
      if (lookahead == 's')
        ADVANCE(644);
      END_STATE();
    case 643:
      if (lookahead == 't')
        ADVANCE(551);
      END_STATE();
    case 644:
      if (lookahead == 'e')
        ADVANCE(645);
      END_STATE();
    case 645:
      if (lookahead == 'p')
        ADVANCE(646);
      END_STATE();
    case 646:
      if (lookahead == '>')
        ADVANCE(647);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDsep_GT);
      END_STATE();
    case 648:
      if (lookahead == '<')
        ADVANCE(649);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(648);
      END_STATE();
    case 649:
      if (lookahead == '#')
        ADVANCE(650);
      if (lookahead == '/')
        ADVANCE(651);
      if (lookahead == '@')
        ADVANCE(194);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_LT_POUND);
      if (lookahead == 'a')
        ADVANCE(38);
      if (lookahead == 'b')
        ADVANCE(51);
      if (lookahead == 'c')
        ADVANCE(628);
      if (lookahead == 'f')
        ADVANCE(84);
      if (lookahead == 'g')
        ADVANCE(107);
      if (lookahead == 'i')
        ADVANCE(462);
      if (lookahead == 'l')
        ADVANCE(130);
      if (lookahead == 'm')
        ADVANCE(137);
      if (lookahead == 'n')
        ADVANCE(463);
      if (lookahead == 'r')
        ADVANCE(464);
      if (lookahead == 's')
        ADVANCE(168);
      if (lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'v')
        ADVANCE(188);
      END_STATE();
    case 651:
      if (lookahead == '#')
        ADVANCE(652);
      END_STATE();
    case 652:
      if (lookahead == 'a')
        ADVANCE(471);
      if (lookahead == 'g')
        ADVANCE(478);
      if (lookahead == 'i')
        ADVANCE(643);
      if (lookahead == 'l')
        ADVANCE(485);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 459},
  [2] = {.lex_state = 491},
  [3] = {.lex_state = 491},
  [4] = {.lex_state = 494},
  [5] = {.lex_state = 496},
  [6] = {.lex_state = 496},
  [7] = {.lex_state = 496},
  [8] = {.lex_state = 496},
  [9] = {.lex_state = 520},
  [10] = {.lex_state = 535},
  [11] = {.lex_state = 496},
  [12] = {.lex_state = 496},
  [13] = {.lex_state = 496},
  [14] = {.lex_state = 496},
  [15] = {.lex_state = 496},
  [16] = {.lex_state = 496},
  [17] = {.lex_state = 496},
  [18] = {.lex_state = 535},
  [19] = {.lex_state = 496},
  [20] = {.lex_state = 535},
  [21] = {.lex_state = 496},
  [22] = {.lex_state = 535},
  [23] = {.lex_state = 574},
  [24] = {.lex_state = 459},
  [25] = {.lex_state = 575},
  [26] = {.lex_state = 577},
  [27] = {.lex_state = 496},
  [28] = {.lex_state = 575},
  [29] = {.lex_state = 578},
  [30] = {.lex_state = 491},
  [31] = {.lex_state = 496},
  [32] = {.lex_state = 580},
  [33] = {.lex_state = 580},
  [34] = {.lex_state = 580},
  [35] = {.lex_state = 581},
  [36] = {.lex_state = 582},
  [37] = {.lex_state = 583},
  [38] = {.lex_state = 584},
  [39] = {.lex_state = 580},
  [40] = {.lex_state = 496},
  [41] = {.lex_state = 496},
  [42] = {.lex_state = 496},
  [43] = {.lex_state = 578},
  [44] = {.lex_state = 491},
  [45] = {.lex_state = 578},
  [46] = {.lex_state = 583},
  [47] = {.lex_state = 491},
  [48] = {.lex_state = 578},
  [49] = {.lex_state = 496},
  [50] = {.lex_state = 591},
  [51] = {.lex_state = 496},
  [52] = {.lex_state = 598},
  [53] = {.lex_state = 496},
  [54] = {.lex_state = 535},
  [55] = {.lex_state = 520},
  [56] = {.lex_state = 520},
  [57] = {.lex_state = 535},
  [58] = {.lex_state = 496},
  [59] = {.lex_state = 535},
  [60] = {.lex_state = 496},
  [61] = {.lex_state = 535},
  [62] = {.lex_state = 496},
  [63] = {.lex_state = 535},
  [64] = {.lex_state = 496},
  [65] = {.lex_state = 535},
  [66] = {.lex_state = 496},
  [67] = {.lex_state = 535},
  [68] = {.lex_state = 496},
  [69] = {.lex_state = 535},
  [70] = {.lex_state = 496},
  [71] = {.lex_state = 535},
  [72] = {.lex_state = 496},
  [73] = {.lex_state = 535},
  [74] = {.lex_state = 496},
  [75] = {.lex_state = 459},
  [76] = {.lex_state = 575},
  [77] = {.lex_state = 459},
  [78] = {.lex_state = 496},
  [79] = {.lex_state = 603},
  [80] = {.lex_state = 603},
  [81] = {.lex_state = 603},
  [82] = {.lex_state = 581},
  [83] = {.lex_state = 582},
  [84] = {.lex_state = 604},
  [85] = {.lex_state = 584},
  [86] = {.lex_state = 575},
  [87] = {.lex_state = 575},
  [88] = {.lex_state = 575},
  [89] = {.lex_state = 575},
  [90] = {.lex_state = 578},
  [91] = {.lex_state = 491},
  [92] = {.lex_state = 496},
  [93] = {.lex_state = 577},
  [94] = {.lex_state = 577},
  [95] = {.lex_state = 577},
  [96] = {.lex_state = 581},
  [97] = {.lex_state = 582},
  [98] = {.lex_state = 605},
  [99] = {.lex_state = 584},
  [100] = {.lex_state = 535},
  [101] = {.lex_state = 577},
  [102] = {.lex_state = 577},
  [103] = {.lex_state = 577},
  [104] = {.lex_state = 577},
  [105] = {.lex_state = 491},
  [106] = {.lex_state = 580},
  [107] = {.lex_state = 575},
  [108] = {.lex_state = 496},
  [109] = {.lex_state = 580},
  [110] = {.lex_state = 578},
  [111] = {.lex_state = 491},
  [112] = {.lex_state = 606},
  [113] = {.lex_state = 607},
  [114] = {.lex_state = 607},
  [115] = {.lex_state = 607},
  [116] = {.lex_state = 580},
  [117] = {.lex_state = 580},
  [118] = {.lex_state = 608},
  [119] = {.lex_state = 582},
  [120] = {.lex_state = 582},
  [121] = {.lex_state = 582},
  [122] = {.lex_state = 582},
  [123] = {.lex_state = 609},
  [124] = {.lex_state = 580},
  [125] = {.lex_state = 583},
  [126] = {.lex_state = 580},
  [127] = {.lex_state = 496},
  [128] = {.lex_state = 578},
  [129] = {.lex_state = 496},
  [130] = {.lex_state = 496},
  [131] = {.lex_state = 610},
  [132] = {.lex_state = 496},
  [133] = {.lex_state = 575},
  [134] = {.lex_state = 496},
  [135] = {.lex_state = 578},
  [136] = {.lex_state = 578},
  [137] = {.lex_state = 581},
  [138] = {.lex_state = 582},
  [139] = {.lex_state = 616},
  [140] = {.lex_state = 584},
  [141] = {.lex_state = 578},
  [142] = {.lex_state = 491},
  [143] = {.lex_state = 491},
  [144] = {.lex_state = 583},
  [145] = {.lex_state = 618},
  [146] = {.lex_state = 578},
  [147] = {.lex_state = 578},
  [148] = {.lex_state = 578},
  [149] = {.lex_state = 496},
  [150] = {.lex_state = 535},
  [151] = {.lex_state = 496},
  [152] = {.lex_state = 591},
  [153] = {.lex_state = 591},
  [154] = {.lex_state = 591},
  [155] = {.lex_state = 535},
  [156] = {.lex_state = 496},
  [157] = {.lex_state = 598},
  [158] = {.lex_state = 598},
  [159] = {.lex_state = 598},
  [160] = {.lex_state = 535},
  [161] = {.lex_state = 520},
  [162] = {.lex_state = 535},
  [163] = {.lex_state = 535},
  [164] = {.lex_state = 535},
  [165] = {.lex_state = 535},
  [166] = {.lex_state = 535},
  [167] = {.lex_state = 535},
  [168] = {.lex_state = 535},
  [169] = {.lex_state = 535},
  [170] = {.lex_state = 535},
  [171] = {.lex_state = 603},
  [172] = {.lex_state = 575},
  [173] = {.lex_state = 607},
  [174] = {.lex_state = 603},
  [175] = {.lex_state = 603},
  [176] = {.lex_state = 582},
  [177] = {.lex_state = 624},
  [178] = {.lex_state = 603},
  [179] = {.lex_state = 604},
  [180] = {.lex_state = 603},
  [181] = {.lex_state = 575},
  [182] = {.lex_state = 459},
  [183] = {.lex_state = 575},
  [184] = {.lex_state = 575},
  [185] = {.lex_state = 575},
  [186] = {.lex_state = 577},
  [187] = {.lex_state = 575},
  [188] = {.lex_state = 577},
  [189] = {.lex_state = 577},
  [190] = {.lex_state = 607},
  [191] = {.lex_state = 577},
  [192] = {.lex_state = 577},
  [193] = {.lex_state = 582},
  [194] = {.lex_state = 605},
  [195] = {.lex_state = 577},
  [196] = {.lex_state = 605},
  [197] = {.lex_state = 577},
  [198] = {.lex_state = 577},
  [199] = {.lex_state = 578},
  [200] = {.lex_state = 577},
  [201] = {.lex_state = 577},
  [202] = {.lex_state = 535},
  [203] = {.lex_state = 577},
  [204] = {.lex_state = 625},
  [205] = {.lex_state = 580},
  [206] = {.lex_state = 496},
  [207] = {.lex_state = 580},
  [208] = {.lex_state = 607},
  [209] = {.lex_state = 606},
  [210] = {.lex_state = 607},
  [211] = {.lex_state = 578},
  [212] = {.lex_state = 607},
  [213] = {.lex_state = 607},
  [214] = {.lex_state = 580},
  [215] = {.lex_state = 607},
  [216] = {.lex_state = 608},
  [217] = {.lex_state = 582},
  [218] = {.lex_state = 582},
  [219] = {.lex_state = 582},
  [220] = {.lex_state = 582},
  [221] = {.lex_state = 580},
  [222] = {.lex_state = 582},
  [223] = {.lex_state = 580},
  [224] = {.lex_state = 583},
  [225] = {.lex_state = 496},
  [226] = {.lex_state = 496},
  [227] = {.lex_state = 610},
  [228] = {.lex_state = 535},
  [229] = {.lex_state = 496},
  [230] = {.lex_state = 610},
  [231] = {.lex_state = 610},
  [232] = {.lex_state = 610},
  [233] = {.lex_state = 578},
  [234] = {.lex_state = 575},
  [235] = {.lex_state = 607},
  [236] = {.lex_state = 578},
  [237] = {.lex_state = 578},
  [238] = {.lex_state = 582},
  [239] = {.lex_state = 616},
  [240] = {.lex_state = 578},
  [241] = {.lex_state = 616},
  [242] = {.lex_state = 578},
  [243] = {.lex_state = 578},
  [244] = {.lex_state = 491},
  [245] = {.lex_state = 583},
  [246] = {.lex_state = 535},
  [247] = {.lex_state = 496},
  [248] = {.lex_state = 618},
  [249] = {.lex_state = 618},
  [250] = {.lex_state = 618},
  [251] = {.lex_state = 618},
  [252] = {.lex_state = 578},
  [253] = {.lex_state = 578},
  [254] = {.lex_state = 635},
  [255] = {.lex_state = 491},
  [256] = {.lex_state = 535},
  [257] = {.lex_state = 591},
  [258] = {.lex_state = 591},
  [259] = {.lex_state = 598},
  [260] = {.lex_state = 496},
  [261] = {.lex_state = 535},
  [262] = {.lex_state = 598},
  [263] = {.lex_state = 598},
  [264] = {.lex_state = 603},
  [265] = {.lex_state = 603},
  [266] = {.lex_state = 603},
  [267] = {.lex_state = 603},
  [268] = {.lex_state = 604},
  [269] = {.lex_state = 575},
  [270] = {.lex_state = 575},
  [271] = {.lex_state = 577},
  [272] = {.lex_state = 577},
  [273] = {.lex_state = 577},
  [274] = {.lex_state = 577},
  [275] = {.lex_state = 577},
  [276] = {.lex_state = 577},
  [277] = {.lex_state = 605},
  [278] = {.lex_state = 577},
  [279] = {.lex_state = 577},
  [280] = {.lex_state = 535},
  [281] = {.lex_state = 625},
  [282] = {.lex_state = 625},
  [283] = {.lex_state = 496},
  [284] = {.lex_state = 639},
  [285] = {.lex_state = 625},
  [286] = {.lex_state = 639},
  [287] = {.lex_state = 625},
  [288] = {.lex_state = 607},
  [289] = {.lex_state = 606},
  [290] = {.lex_state = 607},
  [291] = {.lex_state = 607},
  [292] = {.lex_state = 608},
  [293] = {.lex_state = 582},
  [294] = {.lex_state = 582},
  [295] = {.lex_state = 610},
  [296] = {.lex_state = 610},
  [297] = {.lex_state = 496},
  [298] = {.lex_state = 535},
  [299] = {.lex_state = 610},
  [300] = {.lex_state = 610},
  [301] = {.lex_state = 578},
  [302] = {.lex_state = 578},
  [303] = {.lex_state = 578},
  [304] = {.lex_state = 578},
  [305] = {.lex_state = 616},
  [306] = {.lex_state = 491},
  [307] = {.lex_state = 491},
  [308] = {.lex_state = 618},
  [309] = {.lex_state = 535},
  [310] = {.lex_state = 618},
  [311] = {.lex_state = 618},
  [312] = {.lex_state = 635},
  [313] = {.lex_state = 535},
  [314] = {.lex_state = 598},
  [315] = {.lex_state = 535},
  [316] = {.lex_state = 625},
  [317] = {.lex_state = 491},
  [318] = {.lex_state = 639},
  [319] = {.lex_state = 535},
  [320] = {.lex_state = 625},
  [321] = {.lex_state = 625},
  [322] = {.lex_state = 610},
  [323] = {.lex_state = 610},
  [324] = {.lex_state = 535},
  [325] = {.lex_state = 618},
  [326] = {.lex_state = 618},
  [327] = {.lex_state = 535},
  [328] = {.lex_state = 625},
  [329] = {.lex_state = 648},
  [330] = {.lex_state = 535},
  [331] = {.lex_state = 618},
  [332] = {.lex_state = 618},
  [333] = {.lex_state = 648},
  [334] = {.lex_state = 625},
  [335] = {.lex_state = 648},
  [336] = {.lex_state = 618},
  [337] = {.lex_state = 618},
  [338] = {.lex_state = 618},
  [339] = {.lex_state = 625},
  [340] = {.lex_state = 648},
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
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
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
    [anon_sym_auto_esc] = ACTIONS(1),
    [anon_sym_caller_template_name] = ACTIONS(1),
    [anon_sym_current_template_name] = ACTIONS(1),
    [anon_sym_data_model] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_globals] = ACTIONS(1),
    [anon_sym_incompatible_improvements] = ACTIONS(1),
    [anon_sym_lang] = ACTIONS(1),
    [anon_sym_locale] = ACTIONS(3),
    [anon_sym_locale_object] = ACTIONS(1),
    [anon_sym_locals] = ACTIONS(1),
    [anon_sym_main] = ACTIONS(3),
    [anon_sym_main_template_name] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_node] = ACTIONS(1),
    [anon_sym_now] = ACTIONS(1),
    [anon_sym_output_encoding] = ACTIONS(1),
    [anon_sym_get_optional_template] = ACTIONS(1),
    [anon_sym_pass] = ACTIONS(1),
    [anon_sym_template_name] = ACTIONS(1),
    [anon_sym_url_escaping_charset] = ACTIONS(1),
    [anon_sym_output_format] = ACTIONS(1),
    [anon_sym_vars] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [anon_sym_LT_AT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_POUND] = ACTIONS(3),
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
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
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
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(53),
  },
  [4] = {
    [anon_sym_list] = ACTIONS(55),
  },
  [5] = {
    [sym_parameter_group] = STATE(42),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(41),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(40),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(41),
    [aux_sym_group_repeat1] = STATE(42),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
  },
  [6] = {
    [sym_parameter_group] = STATE(47),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(49),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(48),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(49),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(81),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(85),
    [anon_sym_is] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_DOT_DOT] = ACTIONS(85),
    [anon_sym_DOT_DOT_LT] = ACTIONS(87),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_PERCENT] = ACTIONS(87),
    [anon_sym_EQ_EQ] = ACTIONS(87),
    [anon_sym_BANG_EQ] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_LT_EQ] = ACTIONS(87),
    [anon_sym_lt] = ACTIONS(85),
    [anon_sym_lte] = ACTIONS(85),
    [anon_sym_gt] = ACTIONS(85),
    [anon_sym_gte] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_PIPE_PIPE] = ACTIONS(87),
    [anon_sym_QMARK_QMARK] = ACTIONS(87),
    [anon_sym_EQ] = ACTIONS(85),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(89),
    [anon_sym_DOT] = ACTIONS(79),
  },
  [7] = {
    [sym_parameter_group] = STATE(51),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(41),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(40),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(41),
    [aux_sym_group_repeat1] = STATE(51),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(91),
  },
  [8] = {
    [sym_parameter_group] = STATE(53),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(41),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(40),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(41),
    [aux_sym_group_repeat1] = STATE(53),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(93),
  },
  [9] = {
    [sym_directive] = STATE(55),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_attempt_middle] = STATE(56),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_attempt_repeat1] = STATE(56),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
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
    [anon_sym_DOLLAR] = ACTIONS(99),
    [anon_sym_LT_AT] = ACTIONS(99),
    [anon_sym_LT_POUND] = ACTIONS(101),
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
    [sym_parameter_group] = STATE(58),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(41),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(40),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(41),
    [aux_sym_group_repeat1] = STATE(58),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(103),
  },
  [12] = {
    [sym_parameter_group] = STATE(60),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(41),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(40),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(41),
    [aux_sym_group_repeat1] = STATE(60),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(105),
  },
  [13] = {
    [sym_parameter_group] = STATE(62),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(41),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(40),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(41),
    [aux_sym_group_repeat1] = STATE(62),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(107),
  },
  [14] = {
    [sym_parameter_group] = STATE(64),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(41),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(40),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(41),
    [aux_sym_group_repeat1] = STATE(64),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(109),
  },
  [15] = {
    [sym_parameter_group] = STATE(66),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(41),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(40),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(41),
    [aux_sym_group_repeat1] = STATE(66),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(111),
  },
  [16] = {
    [sym_parameter_group] = STATE(68),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(41),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(40),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(41),
    [aux_sym_group_repeat1] = STATE(68),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(113),
  },
  [17] = {
    [sym_parameter_group] = STATE(70),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(41),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(40),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(41),
    [aux_sym_group_repeat1] = STATE(70),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(115),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [sym_comment] = ACTIONS(117),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_LT_AT] = ACTIONS(117),
    [anon_sym_LT_POUND] = ACTIONS(119),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(117),
    [sym_break] = ACTIONS(117),
    [sym_continue] = ACTIONS(117),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(117),
    [anon_sym_LT_POUNDitems] = ACTIONS(117),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(117),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(117),
    [anon_sym_LT_POUNDif] = ACTIONS(117),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(117),
    [anon_sym_LT_POUNDelseif] = ACTIONS(117),
    [anon_sym_LT_POUNDswitch] = ACTIONS(117),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(117),
    [anon_sym_LT_POUNDcase] = ACTIONS(117),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(117),
    [anon_sym_LT_POUNDfunction] = ACTIONS(117),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(117),
    [anon_sym_LT_POUNDreturn] = ACTIONS(117),
    [anon_sym_LT_POUNDmacro] = ACTIONS(117),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(117),
    [anon_sym_LT_POUNDnested] = ACTIONS(117),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(117),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(117),
    [sym_recover] = ACTIONS(117),
    [sym_fallback] = ACTIONS(117),
    [sym_flush] = ACTIONS(117),
    [anon_sym_LT_POUNDftl] = ACTIONS(117),
    [anon_sym_LT_POUNDimport] = ACTIONS(117),
    [anon_sym_LT_POUNDinclude] = ACTIONS(117),
    [sym_lt] = ACTIONS(117),
    [sym_nt] = ACTIONS(117),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(117),
    [sym_rt] = ACTIONS(117),
    [anon_sym_LT_POUNDsetting] = ACTIONS(117),
    [sym_stop] = ACTIONS(117),
    [sym_t] = ACTIONS(117),
    [anon_sym_LT_POUNDvisit] = ACTIONS(117),
    [anon_sym_LT_POUNDassign] = ACTIONS(117),
    [sym_end_assign] = ACTIONS(117),
    [anon_sym_LT_POUNDglobal] = ACTIONS(117),
    [sym_end_global] = ACTIONS(117),
    [anon_sym_LT_POUNDlocal] = ACTIONS(117),
    [sym_end_local] = ACTIONS(117),
  },
  [19] = {
    [sym_parameter_group] = STATE(72),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(41),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(40),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(41),
    [aux_sym_group_repeat1] = STATE(72),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(121),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_comment] = ACTIONS(123),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [anon_sym_LT_AT] = ACTIONS(123),
    [anon_sym_LT_POUND] = ACTIONS(125),
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
  [21] = {
    [sym_parameter_group] = STATE(74),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(41),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(40),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(41),
    [aux_sym_group_repeat1] = STATE(74),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(127),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_comment] = ACTIONS(129),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_LT_AT] = ACTIONS(129),
    [anon_sym_LT_POUND] = ACTIONS(131),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(129),
    [sym_break] = ACTIONS(129),
    [sym_continue] = ACTIONS(129),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(129),
    [anon_sym_LT_POUNDitems] = ACTIONS(129),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(129),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(129),
    [anon_sym_LT_POUNDif] = ACTIONS(129),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(129),
    [anon_sym_LT_POUNDelseif] = ACTIONS(129),
    [anon_sym_LT_POUNDswitch] = ACTIONS(129),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(129),
    [anon_sym_LT_POUNDcase] = ACTIONS(129),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(129),
    [anon_sym_LT_POUNDfunction] = ACTIONS(129),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(129),
    [anon_sym_LT_POUNDreturn] = ACTIONS(129),
    [anon_sym_LT_POUNDmacro] = ACTIONS(129),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(129),
    [anon_sym_LT_POUNDnested] = ACTIONS(129),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(129),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(129),
    [sym_recover] = ACTIONS(129),
    [sym_fallback] = ACTIONS(129),
    [sym_flush] = ACTIONS(129),
    [anon_sym_LT_POUNDftl] = ACTIONS(129),
    [anon_sym_LT_POUNDimport] = ACTIONS(129),
    [anon_sym_LT_POUNDinclude] = ACTIONS(129),
    [sym_lt] = ACTIONS(129),
    [sym_nt] = ACTIONS(129),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(129),
    [sym_rt] = ACTIONS(129),
    [anon_sym_LT_POUNDsetting] = ACTIONS(129),
    [sym_stop] = ACTIONS(129),
    [sym_t] = ACTIONS(129),
    [anon_sym_LT_POUNDvisit] = ACTIONS(129),
    [anon_sym_LT_POUNDassign] = ACTIONS(129),
    [sym_end_assign] = ACTIONS(129),
    [anon_sym_LT_POUNDglobal] = ACTIONS(129),
    [sym_end_global] = ACTIONS(129),
    [anon_sym_LT_POUNDlocal] = ACTIONS(129),
    [sym_end_local] = ACTIONS(129),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(133),
  },
  [24] = {
    [sym__definition] = STATE(75),
    [sym_interpolation] = STATE(75),
    [sym_directive] = STATE(75),
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
    [aux_sym_source_file_repeat1] = STATE(75),
    [ts_builtin_sym_end] = ACTIONS(135),
    [sym_comment] = ACTIONS(137),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
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
    [sym_expression] = STATE(87),
    [sym_type] = STATE(88),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(86),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_interpolation_repeat1] = STATE(87),
    [aux_sym_as_expression_repeat1] = STATE(88),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_using] = ACTIONS(145),
    [anon_sym_is] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_DOT_DOT] = ACTIONS(145),
    [anon_sym_DOT_DOT_LT] = ACTIONS(147),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_lt] = ACTIONS(145),
    [anon_sym_lte] = ACTIONS(145),
    [anon_sym_gt] = ACTIONS(145),
    [anon_sym_gte] = ACTIONS(145),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_QMARK_QMARK] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(149),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(157),
    [anon_sym_DOT] = ACTIONS(159),
  },
  [26] = {
    [sym_parameter_group] = STATE(104),
    [sym_as_expression] = STATE(101),
    [sym_expression] = STATE(101),
    [sym_type] = STATE(103),
    [sym_built_in] = STATE(101),
    [sym_group] = STATE(95),
    [sym_operator] = STATE(102),
    [sym_string] = STATE(95),
    [sym_boolean] = STATE(95),
    [sym_sequence] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_top_level] = STATE(95),
    [sym_spec_var] = STATE(95),
    [aux_sym_as_expression_repeat1] = STATE(103),
    [aux_sym_group_repeat1] = STATE(104),
    [anon_sym_LBRACE] = ACTIONS(161),
    [anon_sym_as] = ACTIONS(163),
    [anon_sym_QMARK] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_using] = ACTIONS(169),
    [anon_sym_is] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_DOT_DOT] = ACTIONS(169),
    [anon_sym_DOT_DOT_LT] = ACTIONS(171),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(171),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_STAR] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_SLASH] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_PERCENT] = ACTIONS(171),
    [anon_sym_EQ_EQ] = ACTIONS(171),
    [anon_sym_BANG_EQ] = ACTIONS(171),
    [anon_sym_LT] = ACTIONS(169),
    [anon_sym_LT_EQ] = ACTIONS(171),
    [anon_sym_lt] = ACTIONS(169),
    [anon_sym_lte] = ACTIONS(169),
    [anon_sym_gt] = ACTIONS(169),
    [anon_sym_gte] = ACTIONS(169),
    [anon_sym_BANG] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(171),
    [anon_sym_PIPE_PIPE] = ACTIONS(171),
    [anon_sym_QMARK_QMARK] = ACTIONS(171),
    [anon_sym_EQ] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(173),
    [sym_number] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(179),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(181),
    [anon_sym_DOT] = ACTIONS(183),
    [anon_sym_GT] = ACTIONS(185),
    [anon_sym_SLASH_GT] = ACTIONS(185),
  },
  [27] = {
    [sym_parameter_group] = STATE(105),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(49),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(48),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(49),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(81),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(85),
    [anon_sym_is] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_DOT_DOT] = ACTIONS(85),
    [anon_sym_DOT_DOT_LT] = ACTIONS(87),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_PERCENT] = ACTIONS(87),
    [anon_sym_EQ_EQ] = ACTIONS(87),
    [anon_sym_BANG_EQ] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_LT_EQ] = ACTIONS(87),
    [anon_sym_lt] = ACTIONS(85),
    [anon_sym_lte] = ACTIONS(85),
    [anon_sym_gt] = ACTIONS(85),
    [anon_sym_gte] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_PIPE_PIPE] = ACTIONS(87),
    [anon_sym_QMARK_QMARK] = ACTIONS(87),
    [anon_sym_EQ] = ACTIONS(85),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(89),
    [anon_sym_DOT] = ACTIONS(79),
  },
  [28] = {
    [sym_expression] = STATE(107),
    [sym_type] = STATE(88),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(86),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_interpolation_repeat1] = STATE(107),
    [aux_sym_as_expression_repeat1] = STATE(88),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_using] = ACTIONS(145),
    [anon_sym_is] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_DOT_DOT] = ACTIONS(145),
    [anon_sym_DOT_DOT_LT] = ACTIONS(147),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_lt] = ACTIONS(145),
    [anon_sym_lte] = ACTIONS(145),
    [anon_sym_gt] = ACTIONS(145),
    [anon_sym_gte] = ACTIONS(145),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_QMARK_QMARK] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(149),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(157),
    [anon_sym_DOT] = ACTIONS(159),
  },
  [29] = {
    [sym_type] = STATE(108),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(108),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(189),
  },
  [30] = {
    [sym_top_level] = STATE(109),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(191),
  },
  [31] = {
    [sym_parameter_group] = STATE(115),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(114),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(113),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(114),
    [aux_sym_group_repeat1] = STATE(115),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(193),
    [anon_sym_QMARK] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(79),
  },
  [32] = {
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_as] = ACTIONS(201),
    [anon_sym_QMARK] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_using] = ACTIONS(201),
    [anon_sym_is] = ACTIONS(201),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_DOT_DOT] = ACTIONS(201),
    [anon_sym_DOT_DOT_LT] = ACTIONS(199),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(199),
    [anon_sym_COLON] = ACTIONS(199),
    [anon_sym_STAR] = ACTIONS(199),
    [anon_sym_PLUS] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(199),
    [anon_sym_DASH] = ACTIONS(199),
    [anon_sym_PERCENT] = ACTIONS(199),
    [anon_sym_EQ_EQ] = ACTIONS(199),
    [anon_sym_BANG_EQ] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(201),
    [anon_sym_LT_EQ] = ACTIONS(199),
    [anon_sym_lt] = ACTIONS(201),
    [anon_sym_lte] = ACTIONS(201),
    [anon_sym_gt] = ACTIONS(201),
    [anon_sym_gte] = ACTIONS(201),
    [anon_sym_BANG] = ACTIONS(201),
    [anon_sym_AMP_AMP] = ACTIONS(199),
    [anon_sym_PIPE_PIPE] = ACTIONS(199),
    [anon_sym_QMARK_QMARK] = ACTIONS(199),
    [anon_sym_EQ] = ACTIONS(201),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(199),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(199),
    [sym_number] = ACTIONS(201),
    [anon_sym_true] = ACTIONS(201),
    [anon_sym_LBRACK] = ACTIONS(199),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(201),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_GT] = ACTIONS(199),
  },
  [33] = {
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_as] = ACTIONS(205),
    [anon_sym_QMARK] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_using] = ACTIONS(205),
    [anon_sym_is] = ACTIONS(205),
    [anon_sym_COMMA] = ACTIONS(203),
    [anon_sym_DOT_DOT] = ACTIONS(205),
    [anon_sym_DOT_DOT_LT] = ACTIONS(203),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(203),
    [anon_sym_STAR] = ACTIONS(203),
    [anon_sym_PLUS] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_PERCENT] = ACTIONS(203),
    [anon_sym_EQ_EQ] = ACTIONS(203),
    [anon_sym_BANG_EQ] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(205),
    [anon_sym_LT_EQ] = ACTIONS(203),
    [anon_sym_lt] = ACTIONS(205),
    [anon_sym_lte] = ACTIONS(205),
    [anon_sym_gt] = ACTIONS(205),
    [anon_sym_gte] = ACTIONS(205),
    [anon_sym_BANG] = ACTIONS(205),
    [anon_sym_AMP_AMP] = ACTIONS(203),
    [anon_sym_PIPE_PIPE] = ACTIONS(203),
    [anon_sym_QMARK_QMARK] = ACTIONS(203),
    [anon_sym_EQ] = ACTIONS(205),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(203),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(203),
    [sym_number] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(203),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(205),
    [anon_sym_DOT] = ACTIONS(205),
    [anon_sym_GT] = ACTIONS(203),
  },
  [34] = {
    [anon_sym_LBRACE] = ACTIONS(207),
    [anon_sym_as] = ACTIONS(209),
    [anon_sym_QMARK] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_using] = ACTIONS(209),
    [anon_sym_is] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_DOT_DOT] = ACTIONS(209),
    [anon_sym_DOT_DOT_LT] = ACTIONS(207),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(207),
    [anon_sym_COLON] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(207),
    [anon_sym_PERCENT] = ACTIONS(207),
    [anon_sym_EQ_EQ] = ACTIONS(207),
    [anon_sym_BANG_EQ] = ACTIONS(207),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_LT_EQ] = ACTIONS(207),
    [anon_sym_lt] = ACTIONS(209),
    [anon_sym_lte] = ACTIONS(209),
    [anon_sym_gt] = ACTIONS(209),
    [anon_sym_gte] = ACTIONS(209),
    [anon_sym_BANG] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(207),
    [anon_sym_PIPE_PIPE] = ACTIONS(207),
    [anon_sym_QMARK_QMARK] = ACTIONS(207),
    [anon_sym_EQ] = ACTIONS(209),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(207),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(207),
    [sym_number] = ACTIONS(209),
    [anon_sym_true] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(207),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(209),
    [anon_sym_DOT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(207),
  },
  [35] = {
    [anon_sym_false] = ACTIONS(211),
  },
  [36] = {
    [sym_expression] = STATE(119),
    [sym_type] = STATE(121),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(120),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat1] = STATE(121),
    [aux_sym_sequence_repeat1] = STATE(122),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_using] = ACTIONS(145),
    [anon_sym_is] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_DOT_DOT] = ACTIONS(145),
    [anon_sym_DOT_DOT_LT] = ACTIONS(147),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_lt] = ACTIONS(145),
    [anon_sym_lte] = ACTIONS(145),
    [anon_sym_gt] = ACTIONS(145),
    [anon_sym_gte] = ACTIONS(145),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_QMARK_QMARK] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(149),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_RBRACK] = ACTIONS(213),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(159),
  },
  [37] = {
    [sym_group] = STATE(124),
    [aux_sym_top_level_repeat1] = STATE(125),
    [anon_sym_LBRACE] = ACTIONS(217),
    [anon_sym_as] = ACTIONS(219),
    [anon_sym_QMARK] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(217),
    [anon_sym_using] = ACTIONS(219),
    [anon_sym_is] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_DOT_DOT] = ACTIONS(219),
    [anon_sym_DOT_DOT_LT] = ACTIONS(217),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(217),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_PERCENT] = ACTIONS(217),
    [anon_sym_EQ_EQ] = ACTIONS(217),
    [anon_sym_BANG_EQ] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_LT_EQ] = ACTIONS(217),
    [anon_sym_lt] = ACTIONS(219),
    [anon_sym_lte] = ACTIONS(219),
    [anon_sym_gt] = ACTIONS(219),
    [anon_sym_gte] = ACTIONS(219),
    [anon_sym_BANG] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_QMARK_QMARK] = ACTIONS(217),
    [anon_sym_EQ] = ACTIONS(219),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(217),
    [sym_number] = ACTIONS(219),
    [anon_sym_true] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(217),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(219),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(217),
  },
  [38] = {
    [sym__spec_var_name] = STATE(126),
    [anon_sym_auto_esc] = ACTIONS(223),
    [anon_sym_caller_template_name] = ACTIONS(223),
    [anon_sym_current_template_name] = ACTIONS(223),
    [anon_sym_data_model] = ACTIONS(223),
    [anon_sym_error] = ACTIONS(223),
    [anon_sym_globals] = ACTIONS(223),
    [anon_sym_incompatible_improvements] = ACTIONS(223),
    [anon_sym_lang] = ACTIONS(223),
    [anon_sym_locale] = ACTIONS(225),
    [anon_sym_locale_object] = ACTIONS(223),
    [anon_sym_locals] = ACTIONS(223),
    [anon_sym_main] = ACTIONS(225),
    [anon_sym_main_template_name] = ACTIONS(223),
    [anon_sym_namespace] = ACTIONS(223),
    [anon_sym_node] = ACTIONS(223),
    [anon_sym_now] = ACTIONS(223),
    [anon_sym_output_encoding] = ACTIONS(223),
    [anon_sym_get_optional_template] = ACTIONS(223),
    [anon_sym_pass] = ACTIONS(223),
    [anon_sym_template_name] = ACTIONS(223),
    [anon_sym_url_escaping_charset] = ACTIONS(223),
    [anon_sym_output_format] = ACTIONS(223),
    [anon_sym_vars] = ACTIONS(223),
    [anon_sym_version] = ACTIONS(223),
  },
  [39] = {
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_as] = ACTIONS(229),
    [anon_sym_QMARK] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_RPAREN] = ACTIONS(227),
    [anon_sym_using] = ACTIONS(229),
    [anon_sym_is] = ACTIONS(229),
    [anon_sym_COMMA] = ACTIONS(227),
    [anon_sym_DOT_DOT] = ACTIONS(229),
    [anon_sym_DOT_DOT_LT] = ACTIONS(227),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(227),
    [anon_sym_COLON] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(227),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(227),
    [anon_sym_EQ_EQ] = ACTIONS(227),
    [anon_sym_BANG_EQ] = ACTIONS(227),
    [anon_sym_LT] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(227),
    [anon_sym_lt] = ACTIONS(229),
    [anon_sym_lte] = ACTIONS(229),
    [anon_sym_gt] = ACTIONS(229),
    [anon_sym_gte] = ACTIONS(229),
    [anon_sym_BANG] = ACTIONS(229),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [anon_sym_PIPE_PIPE] = ACTIONS(227),
    [anon_sym_QMARK_QMARK] = ACTIONS(227),
    [anon_sym_EQ] = ACTIONS(229),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(227),
    [sym_number] = ACTIONS(229),
    [anon_sym_true] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(227),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(229),
    [anon_sym_DOT] = ACTIONS(229),
    [anon_sym_GT] = ACTIONS(227),
  },
  [40] = {
    [sym_type] = STATE(127),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(127),
    [anon_sym_LBRACE] = ACTIONS(231),
    [anon_sym_as] = ACTIONS(233),
    [anon_sym_QMARK] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_using] = ACTIONS(233),
    [anon_sym_is] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(231),
    [anon_sym_DOT_DOT] = ACTIONS(233),
    [anon_sym_DOT_DOT_LT] = ACTIONS(231),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(231),
    [anon_sym_COLON] = ACTIONS(231),
    [anon_sym_STAR] = ACTIONS(231),
    [anon_sym_PLUS] = ACTIONS(231),
    [anon_sym_SLASH] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(231),
    [anon_sym_PERCENT] = ACTIONS(231),
    [anon_sym_EQ_EQ] = ACTIONS(231),
    [anon_sym_BANG_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(231),
    [anon_sym_lt] = ACTIONS(233),
    [anon_sym_lte] = ACTIONS(233),
    [anon_sym_gt] = ACTIONS(233),
    [anon_sym_gte] = ACTIONS(233),
    [anon_sym_BANG] = ACTIONS(233),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [anon_sym_QMARK_QMARK] = ACTIONS(231),
    [anon_sym_EQ] = ACTIONS(233),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(231),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(231),
    [sym_number] = ACTIONS(233),
    [anon_sym_true] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(231),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(233),
    [anon_sym_DOT] = ACTIONS(233),
    [anon_sym_GT] = ACTIONS(231),
  },
  [41] = {
    [sym_type] = STATE(130),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(129),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(130),
    [aux_sym_as_expression_repeat2] = STATE(127),
    [anon_sym_LBRACE] = ACTIONS(231),
    [anon_sym_as] = ACTIONS(235),
    [anon_sym_QMARK] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(231),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(231),
    [sym_number] = ACTIONS(233),
    [anon_sym_true] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(231),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(233),
    [anon_sym_DOT] = ACTIONS(233),
    [anon_sym_GT] = ACTIONS(231),
  },
  [42] = {
    [sym_parameter_group] = STATE(132),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(41),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(40),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(41),
    [aux_sym_group_repeat1] = STATE(132),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(237),
  },
  [43] = {
    [sym_type] = STATE(141),
    [sym_group] = STATE(136),
    [sym_string] = STATE(136),
    [sym_boolean] = STATE(136),
    [sym_sequence] = STATE(136),
    [sym_hash] = STATE(136),
    [sym_top_level] = STATE(136),
    [sym_spec_var] = STATE(136),
    [aux_sym_as_expression_repeat2] = STATE(141),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_LPAREN] = ACTIONS(241),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(243),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(243),
    [sym_number] = ACTIONS(245),
    [anon_sym_true] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(249),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(251),
    [anon_sym_DOT] = ACTIONS(253),
  },
  [44] = {
    [sym_top_level] = STATE(143),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(255),
  },
  [45] = {
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(199),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(199),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(199),
    [sym_number] = ACTIONS(201),
    [anon_sym_true] = ACTIONS(201),
    [anon_sym_LBRACK] = ACTIONS(199),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(201),
    [anon_sym_DOT] = ACTIONS(199),
    [anon_sym_GT] = ACTIONS(199),
  },
  [46] = {
    [sym_group] = STATE(124),
    [aux_sym_top_level_repeat1] = STATE(144),
    [anon_sym_LBRACE] = ACTIONS(217),
    [anon_sym_as] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(217),
    [anon_sym_using] = ACTIONS(219),
    [anon_sym_is] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_DOT_DOT] = ACTIONS(219),
    [anon_sym_DOT_DOT_LT] = ACTIONS(217),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(217),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_PERCENT] = ACTIONS(217),
    [anon_sym_EQ_EQ] = ACTIONS(217),
    [anon_sym_BANG_EQ] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_LT_EQ] = ACTIONS(217),
    [anon_sym_lt] = ACTIONS(219),
    [anon_sym_lte] = ACTIONS(219),
    [anon_sym_gt] = ACTIONS(219),
    [anon_sym_gte] = ACTIONS(219),
    [anon_sym_BANG] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_QMARK_QMARK] = ACTIONS(217),
    [anon_sym_EQ] = ACTIONS(219),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(217),
    [sym_number] = ACTIONS(219),
    [anon_sym_true] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(217),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(219),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(217),
  },
  [47] = {
    [anon_sym_GT] = ACTIONS(257),
  },
  [48] = {
    [sym_type] = STATE(146),
    [sym_group] = STATE(136),
    [sym_string] = STATE(136),
    [sym_boolean] = STATE(136),
    [sym_sequence] = STATE(136),
    [sym_hash] = STATE(136),
    [sym_top_level] = STATE(136),
    [sym_spec_var] = STATE(136),
    [aux_sym_as_expression_repeat2] = STATE(146),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_LPAREN] = ACTIONS(241),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(243),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(243),
    [sym_number] = ACTIONS(245),
    [anon_sym_true] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(249),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(251),
    [anon_sym_DOT] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(231),
  },
  [49] = {
    [sym_type] = STATE(149),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(148),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(149),
    [aux_sym_as_expression_repeat2] = STATE(146),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(259),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(85),
    [anon_sym_is] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_DOT_DOT] = ACTIONS(85),
    [anon_sym_DOT_DOT_LT] = ACTIONS(87),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_PERCENT] = ACTIONS(87),
    [anon_sym_EQ_EQ] = ACTIONS(87),
    [anon_sym_BANG_EQ] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_LT_EQ] = ACTIONS(87),
    [anon_sym_lt] = ACTIONS(85),
    [anon_sym_lte] = ACTIONS(85),
    [anon_sym_gt] = ACTIONS(85),
    [anon_sym_gte] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_PIPE_PIPE] = ACTIONS(87),
    [anon_sym_QMARK_QMARK] = ACTIONS(87),
    [anon_sym_EQ] = ACTIONS(85),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(89),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(231),
  },
  [50] = {
    [sym_directive] = STATE(152),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_function_middle] = STATE(153),
    [sym_return] = STATE(152),
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
    [aux_sym_function_repeat1] = STATE(153),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(261),
    [anon_sym_LT_POUNDreturn] = ACTIONS(263),
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
  [51] = {
    [sym_parameter_group] = STATE(132),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(41),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(40),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(41),
    [aux_sym_group_repeat1] = STATE(132),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(265),
  },
  [52] = {
    [sym_directive] = STATE(157),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_return] = STATE(157),
    [sym_macro] = STATE(10),
    [sym_macro_middle] = STATE(158),
    [sym_nested] = STATE(157),
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
    [aux_sym_macro_repeat1] = STATE(158),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDreturn] = ACTIONS(263),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(267),
    [anon_sym_LT_POUNDnested] = ACTIONS(269),
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
  [53] = {
    [sym_parameter_group] = STATE(132),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(41),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(40),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(41),
    [aux_sym_group_repeat1] = STATE(132),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(271),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(273),
    [sym_comment] = ACTIONS(273),
    [anon_sym_DOLLAR] = ACTIONS(273),
    [anon_sym_LT_AT] = ACTIONS(273),
    [anon_sym_LT_POUND] = ACTIONS(275),
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
  [55] = {
    [anon_sym_LT_AT] = ACTIONS(277),
    [anon_sym_LT_POUND] = ACTIONS(279),
    [anon_sym_LT_POUNDif] = ACTIONS(277),
    [anon_sym_LT_POUNDswitch] = ACTIONS(277),
    [anon_sym_LT_POUNDfunction] = ACTIONS(277),
    [anon_sym_LT_POUNDmacro] = ACTIONS(277),
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
  [56] = {
    [sym_directive] = STATE(55),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_attempt_middle] = STATE(161),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_attempt_repeat1] = STATE(161),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(23),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(281),
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
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [sym_comment] = ACTIONS(283),
    [anon_sym_DOLLAR] = ACTIONS(283),
    [anon_sym_LT_AT] = ACTIONS(283),
    [anon_sym_LT_POUND] = ACTIONS(285),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(283),
    [sym_break] = ACTIONS(283),
    [sym_continue] = ACTIONS(283),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(283),
    [anon_sym_LT_POUNDitems] = ACTIONS(283),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(283),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(283),
    [anon_sym_LT_POUNDif] = ACTIONS(283),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(283),
    [anon_sym_LT_POUNDelseif] = ACTIONS(283),
    [anon_sym_LT_POUNDswitch] = ACTIONS(283),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(283),
    [anon_sym_LT_POUNDcase] = ACTIONS(283),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(283),
    [anon_sym_LT_POUNDfunction] = ACTIONS(283),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(283),
    [anon_sym_LT_POUNDreturn] = ACTIONS(283),
    [anon_sym_LT_POUNDmacro] = ACTIONS(283),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(283),
    [anon_sym_LT_POUNDnested] = ACTIONS(283),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(283),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(283),
    [sym_recover] = ACTIONS(283),
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
  [58] = {
    [sym_parameter_group] = STATE(132),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(41),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(40),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(41),
    [aux_sym_group_repeat1] = STATE(132),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(287),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [sym_comment] = ACTIONS(289),
    [anon_sym_DOLLAR] = ACTIONS(289),
    [anon_sym_LT_AT] = ACTIONS(289),
    [anon_sym_LT_POUND] = ACTIONS(291),
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
  [60] = {
    [sym_parameter_group] = STATE(132),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(41),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(40),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(41),
    [aux_sym_group_repeat1] = STATE(132),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(293),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(295),
    [sym_comment] = ACTIONS(295),
    [anon_sym_DOLLAR] = ACTIONS(295),
    [anon_sym_LT_AT] = ACTIONS(295),
    [anon_sym_LT_POUND] = ACTIONS(297),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(295),
    [sym_break] = ACTIONS(295),
    [sym_continue] = ACTIONS(295),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(295),
    [anon_sym_LT_POUNDitems] = ACTIONS(295),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(295),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(295),
    [anon_sym_LT_POUNDif] = ACTIONS(295),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(295),
    [anon_sym_LT_POUNDelseif] = ACTIONS(295),
    [anon_sym_LT_POUNDswitch] = ACTIONS(295),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(295),
    [anon_sym_LT_POUNDcase] = ACTIONS(295),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(295),
    [anon_sym_LT_POUNDfunction] = ACTIONS(295),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(295),
    [anon_sym_LT_POUNDreturn] = ACTIONS(295),
    [anon_sym_LT_POUNDmacro] = ACTIONS(295),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(295),
    [anon_sym_LT_POUNDnested] = ACTIONS(295),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(295),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(295),
    [sym_recover] = ACTIONS(295),
    [sym_fallback] = ACTIONS(295),
    [sym_flush] = ACTIONS(295),
    [anon_sym_LT_POUNDftl] = ACTIONS(295),
    [anon_sym_LT_POUNDimport] = ACTIONS(295),
    [anon_sym_LT_POUNDinclude] = ACTIONS(295),
    [sym_lt] = ACTIONS(295),
    [sym_nt] = ACTIONS(295),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(295),
    [sym_rt] = ACTIONS(295),
    [anon_sym_LT_POUNDsetting] = ACTIONS(295),
    [sym_stop] = ACTIONS(295),
    [sym_t] = ACTIONS(295),
    [anon_sym_LT_POUNDvisit] = ACTIONS(295),
    [anon_sym_LT_POUNDassign] = ACTIONS(295),
    [sym_end_assign] = ACTIONS(295),
    [anon_sym_LT_POUNDglobal] = ACTIONS(295),
    [sym_end_global] = ACTIONS(295),
    [anon_sym_LT_POUNDlocal] = ACTIONS(295),
    [sym_end_local] = ACTIONS(295),
  },
  [62] = {
    [sym_parameter_group] = STATE(132),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(41),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(40),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(41),
    [aux_sym_group_repeat1] = STATE(132),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(299),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(301),
    [sym_comment] = ACTIONS(301),
    [anon_sym_DOLLAR] = ACTIONS(301),
    [anon_sym_LT_AT] = ACTIONS(301),
    [anon_sym_LT_POUND] = ACTIONS(303),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(301),
    [sym_break] = ACTIONS(301),
    [sym_continue] = ACTIONS(301),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(301),
    [anon_sym_LT_POUNDitems] = ACTIONS(301),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(301),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(301),
    [anon_sym_LT_POUNDif] = ACTIONS(301),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(301),
    [anon_sym_LT_POUNDelseif] = ACTIONS(301),
    [anon_sym_LT_POUNDswitch] = ACTIONS(301),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(301),
    [anon_sym_LT_POUNDcase] = ACTIONS(301),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(301),
    [anon_sym_LT_POUNDfunction] = ACTIONS(301),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(301),
    [anon_sym_LT_POUNDreturn] = ACTIONS(301),
    [anon_sym_LT_POUNDmacro] = ACTIONS(301),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(301),
    [anon_sym_LT_POUNDnested] = ACTIONS(301),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(301),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(301),
    [sym_recover] = ACTIONS(301),
    [sym_fallback] = ACTIONS(301),
    [sym_flush] = ACTIONS(301),
    [anon_sym_LT_POUNDftl] = ACTIONS(301),
    [anon_sym_LT_POUNDimport] = ACTIONS(301),
    [anon_sym_LT_POUNDinclude] = ACTIONS(301),
    [sym_lt] = ACTIONS(301),
    [sym_nt] = ACTIONS(301),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(301),
    [sym_rt] = ACTIONS(301),
    [anon_sym_LT_POUNDsetting] = ACTIONS(301),
    [sym_stop] = ACTIONS(301),
    [sym_t] = ACTIONS(301),
    [anon_sym_LT_POUNDvisit] = ACTIONS(301),
    [anon_sym_LT_POUNDassign] = ACTIONS(301),
    [sym_end_assign] = ACTIONS(301),
    [anon_sym_LT_POUNDglobal] = ACTIONS(301),
    [sym_end_global] = ACTIONS(301),
    [anon_sym_LT_POUNDlocal] = ACTIONS(301),
    [sym_end_local] = ACTIONS(301),
  },
  [64] = {
    [sym_parameter_group] = STATE(132),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(41),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(40),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(41),
    [aux_sym_group_repeat1] = STATE(132),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(305),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(307),
    [sym_comment] = ACTIONS(307),
    [anon_sym_DOLLAR] = ACTIONS(307),
    [anon_sym_LT_AT] = ACTIONS(307),
    [anon_sym_LT_POUND] = ACTIONS(309),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(307),
    [sym_break] = ACTIONS(307),
    [sym_continue] = ACTIONS(307),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(307),
    [anon_sym_LT_POUNDitems] = ACTIONS(307),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(307),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(307),
    [anon_sym_LT_POUNDif] = ACTIONS(307),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(307),
    [anon_sym_LT_POUNDelseif] = ACTIONS(307),
    [anon_sym_LT_POUNDswitch] = ACTIONS(307),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(307),
    [anon_sym_LT_POUNDcase] = ACTIONS(307),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(307),
    [anon_sym_LT_POUNDfunction] = ACTIONS(307),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(307),
    [anon_sym_LT_POUNDreturn] = ACTIONS(307),
    [anon_sym_LT_POUNDmacro] = ACTIONS(307),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(307),
    [anon_sym_LT_POUNDnested] = ACTIONS(307),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(307),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(307),
    [sym_recover] = ACTIONS(307),
    [sym_fallback] = ACTIONS(307),
    [sym_flush] = ACTIONS(307),
    [anon_sym_LT_POUNDftl] = ACTIONS(307),
    [anon_sym_LT_POUNDimport] = ACTIONS(307),
    [anon_sym_LT_POUNDinclude] = ACTIONS(307),
    [sym_lt] = ACTIONS(307),
    [sym_nt] = ACTIONS(307),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(307),
    [sym_rt] = ACTIONS(307),
    [anon_sym_LT_POUNDsetting] = ACTIONS(307),
    [sym_stop] = ACTIONS(307),
    [sym_t] = ACTIONS(307),
    [anon_sym_LT_POUNDvisit] = ACTIONS(307),
    [anon_sym_LT_POUNDassign] = ACTIONS(307),
    [sym_end_assign] = ACTIONS(307),
    [anon_sym_LT_POUNDglobal] = ACTIONS(307),
    [sym_end_global] = ACTIONS(307),
    [anon_sym_LT_POUNDlocal] = ACTIONS(307),
    [sym_end_local] = ACTIONS(307),
  },
  [66] = {
    [sym_parameter_group] = STATE(132),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(41),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(40),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(41),
    [aux_sym_group_repeat1] = STATE(132),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(311),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(313),
    [sym_comment] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(313),
    [anon_sym_LT_AT] = ACTIONS(313),
    [anon_sym_LT_POUND] = ACTIONS(315),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(313),
    [sym_break] = ACTIONS(313),
    [sym_continue] = ACTIONS(313),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(313),
    [anon_sym_LT_POUNDitems] = ACTIONS(313),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(313),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(313),
    [anon_sym_LT_POUNDif] = ACTIONS(313),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(313),
    [anon_sym_LT_POUNDelseif] = ACTIONS(313),
    [anon_sym_LT_POUNDswitch] = ACTIONS(313),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(313),
    [anon_sym_LT_POUNDcase] = ACTIONS(313),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(313),
    [anon_sym_LT_POUNDfunction] = ACTIONS(313),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(313),
    [anon_sym_LT_POUNDreturn] = ACTIONS(313),
    [anon_sym_LT_POUNDmacro] = ACTIONS(313),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(313),
    [anon_sym_LT_POUNDnested] = ACTIONS(313),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(313),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(313),
    [sym_recover] = ACTIONS(313),
    [sym_fallback] = ACTIONS(313),
    [sym_flush] = ACTIONS(313),
    [anon_sym_LT_POUNDftl] = ACTIONS(313),
    [anon_sym_LT_POUNDimport] = ACTIONS(313),
    [anon_sym_LT_POUNDinclude] = ACTIONS(313),
    [sym_lt] = ACTIONS(313),
    [sym_nt] = ACTIONS(313),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(313),
    [sym_rt] = ACTIONS(313),
    [anon_sym_LT_POUNDsetting] = ACTIONS(313),
    [sym_stop] = ACTIONS(313),
    [sym_t] = ACTIONS(313),
    [anon_sym_LT_POUNDvisit] = ACTIONS(313),
    [anon_sym_LT_POUNDassign] = ACTIONS(313),
    [sym_end_assign] = ACTIONS(313),
    [anon_sym_LT_POUNDglobal] = ACTIONS(313),
    [sym_end_global] = ACTIONS(313),
    [anon_sym_LT_POUNDlocal] = ACTIONS(313),
    [sym_end_local] = ACTIONS(313),
  },
  [68] = {
    [sym_parameter_group] = STATE(132),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(41),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(40),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(41),
    [aux_sym_group_repeat1] = STATE(132),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(317),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(319),
    [sym_comment] = ACTIONS(319),
    [anon_sym_DOLLAR] = ACTIONS(319),
    [anon_sym_LT_AT] = ACTIONS(319),
    [anon_sym_LT_POUND] = ACTIONS(321),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(319),
    [sym_break] = ACTIONS(319),
    [sym_continue] = ACTIONS(319),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(319),
    [anon_sym_LT_POUNDitems] = ACTIONS(319),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(319),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(319),
    [anon_sym_LT_POUNDif] = ACTIONS(319),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(319),
    [anon_sym_LT_POUNDelseif] = ACTIONS(319),
    [anon_sym_LT_POUNDswitch] = ACTIONS(319),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(319),
    [anon_sym_LT_POUNDcase] = ACTIONS(319),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(319),
    [anon_sym_LT_POUNDfunction] = ACTIONS(319),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(319),
    [anon_sym_LT_POUNDreturn] = ACTIONS(319),
    [anon_sym_LT_POUNDmacro] = ACTIONS(319),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(319),
    [anon_sym_LT_POUNDnested] = ACTIONS(319),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(319),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(319),
    [sym_recover] = ACTIONS(319),
    [sym_fallback] = ACTIONS(319),
    [sym_flush] = ACTIONS(319),
    [anon_sym_LT_POUNDftl] = ACTIONS(319),
    [anon_sym_LT_POUNDimport] = ACTIONS(319),
    [anon_sym_LT_POUNDinclude] = ACTIONS(319),
    [sym_lt] = ACTIONS(319),
    [sym_nt] = ACTIONS(319),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(319),
    [sym_rt] = ACTIONS(319),
    [anon_sym_LT_POUNDsetting] = ACTIONS(319),
    [sym_stop] = ACTIONS(319),
    [sym_t] = ACTIONS(319),
    [anon_sym_LT_POUNDvisit] = ACTIONS(319),
    [anon_sym_LT_POUNDassign] = ACTIONS(319),
    [sym_end_assign] = ACTIONS(319),
    [anon_sym_LT_POUNDglobal] = ACTIONS(319),
    [sym_end_global] = ACTIONS(319),
    [anon_sym_LT_POUNDlocal] = ACTIONS(319),
    [sym_end_local] = ACTIONS(319),
  },
  [70] = {
    [sym_parameter_group] = STATE(132),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(41),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(40),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(41),
    [aux_sym_group_repeat1] = STATE(132),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(323),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(325),
    [sym_comment] = ACTIONS(325),
    [anon_sym_DOLLAR] = ACTIONS(325),
    [anon_sym_LT_AT] = ACTIONS(325),
    [anon_sym_LT_POUND] = ACTIONS(327),
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
  [72] = {
    [sym_parameter_group] = STATE(132),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(41),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(40),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(41),
    [aux_sym_group_repeat1] = STATE(132),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(329),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(331),
    [sym_comment] = ACTIONS(331),
    [anon_sym_DOLLAR] = ACTIONS(331),
    [anon_sym_LT_AT] = ACTIONS(331),
    [anon_sym_LT_POUND] = ACTIONS(333),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(331),
    [sym_break] = ACTIONS(331),
    [sym_continue] = ACTIONS(331),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(331),
    [anon_sym_LT_POUNDitems] = ACTIONS(331),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(331),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(331),
    [anon_sym_LT_POUNDif] = ACTIONS(331),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(331),
    [anon_sym_LT_POUNDelseif] = ACTIONS(331),
    [anon_sym_LT_POUNDswitch] = ACTIONS(331),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(331),
    [anon_sym_LT_POUNDcase] = ACTIONS(331),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(331),
    [anon_sym_LT_POUNDfunction] = ACTIONS(331),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(331),
    [anon_sym_LT_POUNDreturn] = ACTIONS(331),
    [anon_sym_LT_POUNDmacro] = ACTIONS(331),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(331),
    [anon_sym_LT_POUNDnested] = ACTIONS(331),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(331),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(331),
    [sym_recover] = ACTIONS(331),
    [sym_fallback] = ACTIONS(331),
    [sym_flush] = ACTIONS(331),
    [anon_sym_LT_POUNDftl] = ACTIONS(331),
    [anon_sym_LT_POUNDimport] = ACTIONS(331),
    [anon_sym_LT_POUNDinclude] = ACTIONS(331),
    [sym_lt] = ACTIONS(331),
    [sym_nt] = ACTIONS(331),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(331),
    [sym_rt] = ACTIONS(331),
    [anon_sym_LT_POUNDsetting] = ACTIONS(331),
    [sym_stop] = ACTIONS(331),
    [sym_t] = ACTIONS(331),
    [anon_sym_LT_POUNDvisit] = ACTIONS(331),
    [anon_sym_LT_POUNDassign] = ACTIONS(331),
    [sym_end_assign] = ACTIONS(331),
    [anon_sym_LT_POUNDglobal] = ACTIONS(331),
    [sym_end_global] = ACTIONS(331),
    [anon_sym_LT_POUNDlocal] = ACTIONS(331),
    [sym_end_local] = ACTIONS(331),
  },
  [74] = {
    [sym_parameter_group] = STATE(132),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(41),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(40),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(41),
    [aux_sym_group_repeat1] = STATE(132),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(335),
  },
  [75] = {
    [sym__definition] = STATE(75),
    [sym_interpolation] = STATE(75),
    [sym_directive] = STATE(75),
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
    [aux_sym_source_file_repeat1] = STATE(75),
    [ts_builtin_sym_end] = ACTIONS(337),
    [sym_comment] = ACTIONS(339),
    [anon_sym_DOLLAR] = ACTIONS(342),
    [anon_sym_LT_AT] = ACTIONS(345),
    [anon_sym_LT_POUND] = ACTIONS(348),
    [anon_sym_LT_POUNDif] = ACTIONS(351),
    [anon_sym_LT_POUNDswitch] = ACTIONS(354),
    [anon_sym_LT_POUNDfunction] = ACTIONS(357),
    [anon_sym_LT_POUNDmacro] = ACTIONS(360),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(363),
    [sym_fallback] = ACTIONS(366),
    [sym_flush] = ACTIONS(366),
    [anon_sym_LT_POUNDftl] = ACTIONS(369),
    [anon_sym_LT_POUNDimport] = ACTIONS(372),
    [anon_sym_LT_POUNDinclude] = ACTIONS(375),
    [sym_lt] = ACTIONS(366),
    [sym_nt] = ACTIONS(366),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(378),
    [sym_rt] = ACTIONS(366),
    [anon_sym_LT_POUNDsetting] = ACTIONS(381),
    [sym_stop] = ACTIONS(366),
    [sym_t] = ACTIONS(366),
    [anon_sym_LT_POUNDvisit] = ACTIONS(384),
    [anon_sym_LT_POUNDassign] = ACTIONS(387),
    [sym_end_assign] = ACTIONS(390),
    [anon_sym_LT_POUNDglobal] = ACTIONS(393),
    [sym_end_global] = ACTIONS(396),
    [anon_sym_LT_POUNDlocal] = ACTIONS(399),
    [sym_end_local] = ACTIONS(402),
  },
  [76] = {
    [sym_expression] = STATE(172),
    [sym_type] = STATE(88),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(86),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_interpolation_repeat1] = STATE(172),
    [aux_sym_as_expression_repeat1] = STATE(88),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(405),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_using] = ACTIONS(145),
    [anon_sym_is] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_DOT_DOT] = ACTIONS(145),
    [anon_sym_DOT_DOT_LT] = ACTIONS(147),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_lt] = ACTIONS(145),
    [anon_sym_lte] = ACTIONS(145),
    [anon_sym_gt] = ACTIONS(145),
    [anon_sym_gte] = ACTIONS(145),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_QMARK_QMARK] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(149),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(157),
    [anon_sym_DOT] = ACTIONS(159),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(407),
    [sym_comment] = ACTIONS(407),
    [anon_sym_DOLLAR] = ACTIONS(407),
    [anon_sym_LT_AT] = ACTIONS(407),
    [anon_sym_LT_POUND] = ACTIONS(409),
    [anon_sym_LT_POUNDif] = ACTIONS(407),
    [anon_sym_LT_POUNDswitch] = ACTIONS(407),
    [anon_sym_LT_POUNDfunction] = ACTIONS(407),
    [anon_sym_LT_POUNDmacro] = ACTIONS(407),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(407),
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
  [78] = {
    [sym_parameter_group] = STATE(173),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(114),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(113),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(114),
    [aux_sym_group_repeat1] = STATE(173),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(193),
    [anon_sym_QMARK] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(79),
  },
  [79] = {
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_using] = ACTIONS(201),
    [anon_sym_is] = ACTIONS(201),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_DOT_DOT] = ACTIONS(201),
    [anon_sym_DOT_DOT_LT] = ACTIONS(199),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(199),
    [anon_sym_COLON] = ACTIONS(199),
    [anon_sym_STAR] = ACTIONS(199),
    [anon_sym_PLUS] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(199),
    [anon_sym_DASH] = ACTIONS(199),
    [anon_sym_PERCENT] = ACTIONS(199),
    [anon_sym_EQ_EQ] = ACTIONS(199),
    [anon_sym_BANG_EQ] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(201),
    [anon_sym_LT_EQ] = ACTIONS(199),
    [anon_sym_lt] = ACTIONS(201),
    [anon_sym_lte] = ACTIONS(201),
    [anon_sym_gt] = ACTIONS(201),
    [anon_sym_gte] = ACTIONS(201),
    [anon_sym_BANG] = ACTIONS(201),
    [anon_sym_AMP_AMP] = ACTIONS(199),
    [anon_sym_PIPE_PIPE] = ACTIONS(199),
    [anon_sym_QMARK_QMARK] = ACTIONS(199),
    [anon_sym_EQ] = ACTIONS(201),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(199),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(199),
    [sym_number] = ACTIONS(201),
    [anon_sym_true] = ACTIONS(201),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_RBRACK] = ACTIONS(199),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(201),
    [anon_sym_DOT] = ACTIONS(201),
  },
  [80] = {
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_RBRACE] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_using] = ACTIONS(205),
    [anon_sym_is] = ACTIONS(205),
    [anon_sym_COMMA] = ACTIONS(203),
    [anon_sym_DOT_DOT] = ACTIONS(205),
    [anon_sym_DOT_DOT_LT] = ACTIONS(203),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(203),
    [anon_sym_STAR] = ACTIONS(203),
    [anon_sym_PLUS] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_PERCENT] = ACTIONS(203),
    [anon_sym_EQ_EQ] = ACTIONS(203),
    [anon_sym_BANG_EQ] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(205),
    [anon_sym_LT_EQ] = ACTIONS(203),
    [anon_sym_lt] = ACTIONS(205),
    [anon_sym_lte] = ACTIONS(205),
    [anon_sym_gt] = ACTIONS(205),
    [anon_sym_gte] = ACTIONS(205),
    [anon_sym_BANG] = ACTIONS(205),
    [anon_sym_AMP_AMP] = ACTIONS(203),
    [anon_sym_PIPE_PIPE] = ACTIONS(203),
    [anon_sym_QMARK_QMARK] = ACTIONS(203),
    [anon_sym_EQ] = ACTIONS(205),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(203),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(203),
    [sym_number] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(203),
    [anon_sym_RBRACK] = ACTIONS(203),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(205),
    [anon_sym_DOT] = ACTIONS(205),
  },
  [81] = {
    [anon_sym_LBRACE] = ACTIONS(207),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(207),
    [anon_sym_using] = ACTIONS(209),
    [anon_sym_is] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_DOT_DOT] = ACTIONS(209),
    [anon_sym_DOT_DOT_LT] = ACTIONS(207),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(207),
    [anon_sym_COLON] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(207),
    [anon_sym_PERCENT] = ACTIONS(207),
    [anon_sym_EQ_EQ] = ACTIONS(207),
    [anon_sym_BANG_EQ] = ACTIONS(207),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_LT_EQ] = ACTIONS(207),
    [anon_sym_lt] = ACTIONS(209),
    [anon_sym_lte] = ACTIONS(209),
    [anon_sym_gt] = ACTIONS(209),
    [anon_sym_gte] = ACTIONS(209),
    [anon_sym_BANG] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(207),
    [anon_sym_PIPE_PIPE] = ACTIONS(207),
    [anon_sym_QMARK_QMARK] = ACTIONS(207),
    [anon_sym_EQ] = ACTIONS(209),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(207),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(207),
    [sym_number] = ACTIONS(209),
    [anon_sym_true] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_RBRACK] = ACTIONS(207),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(209),
    [anon_sym_DOT] = ACTIONS(209),
  },
  [82] = {
    [anon_sym_false] = ACTIONS(411),
  },
  [83] = {
    [sym_expression] = STATE(119),
    [sym_type] = STATE(121),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(120),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat1] = STATE(121),
    [aux_sym_sequence_repeat1] = STATE(176),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_using] = ACTIONS(145),
    [anon_sym_is] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_DOT_DOT] = ACTIONS(145),
    [anon_sym_DOT_DOT_LT] = ACTIONS(147),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_lt] = ACTIONS(145),
    [anon_sym_lte] = ACTIONS(145),
    [anon_sym_gt] = ACTIONS(145),
    [anon_sym_gte] = ACTIONS(145),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_QMARK_QMARK] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(149),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_RBRACK] = ACTIONS(413),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(159),
  },
  [84] = {
    [sym_group] = STATE(178),
    [aux_sym_top_level_repeat1] = STATE(179),
    [anon_sym_LBRACE] = ACTIONS(217),
    [anon_sym_RBRACE] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(217),
    [anon_sym_using] = ACTIONS(219),
    [anon_sym_is] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_DOT_DOT] = ACTIONS(219),
    [anon_sym_DOT_DOT_LT] = ACTIONS(217),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(217),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_PERCENT] = ACTIONS(217),
    [anon_sym_EQ_EQ] = ACTIONS(217),
    [anon_sym_BANG_EQ] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_LT_EQ] = ACTIONS(217),
    [anon_sym_lt] = ACTIONS(219),
    [anon_sym_lte] = ACTIONS(219),
    [anon_sym_gt] = ACTIONS(219),
    [anon_sym_gte] = ACTIONS(219),
    [anon_sym_BANG] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_QMARK_QMARK] = ACTIONS(217),
    [anon_sym_EQ] = ACTIONS(219),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(217),
    [sym_number] = ACTIONS(219),
    [anon_sym_true] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(217),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(219),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(415),
    [anon_sym_DOT] = ACTIONS(219),
  },
  [85] = {
    [sym__spec_var_name] = STATE(180),
    [anon_sym_auto_esc] = ACTIONS(417),
    [anon_sym_caller_template_name] = ACTIONS(417),
    [anon_sym_current_template_name] = ACTIONS(417),
    [anon_sym_data_model] = ACTIONS(417),
    [anon_sym_error] = ACTIONS(417),
    [anon_sym_globals] = ACTIONS(417),
    [anon_sym_incompatible_improvements] = ACTIONS(417),
    [anon_sym_lang] = ACTIONS(417),
    [anon_sym_locale] = ACTIONS(419),
    [anon_sym_locale_object] = ACTIONS(417),
    [anon_sym_locals] = ACTIONS(417),
    [anon_sym_main] = ACTIONS(419),
    [anon_sym_main_template_name] = ACTIONS(417),
    [anon_sym_namespace] = ACTIONS(417),
    [anon_sym_node] = ACTIONS(417),
    [anon_sym_now] = ACTIONS(417),
    [anon_sym_output_encoding] = ACTIONS(417),
    [anon_sym_get_optional_template] = ACTIONS(417),
    [anon_sym_pass] = ACTIONS(417),
    [anon_sym_template_name] = ACTIONS(417),
    [anon_sym_url_escaping_charset] = ACTIONS(417),
    [anon_sym_output_format] = ACTIONS(417),
    [anon_sym_vars] = ACTIONS(417),
    [anon_sym_version] = ACTIONS(417),
  },
  [86] = {
    [sym_type] = STATE(181),
    [sym_group] = STATE(81),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat2] = STATE(181),
    [anon_sym_LBRACE] = ACTIONS(231),
    [anon_sym_RBRACE] = ACTIONS(231),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_using] = ACTIONS(233),
    [anon_sym_is] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(231),
    [anon_sym_DOT_DOT] = ACTIONS(233),
    [anon_sym_DOT_DOT_LT] = ACTIONS(231),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(231),
    [anon_sym_COLON] = ACTIONS(231),
    [anon_sym_STAR] = ACTIONS(231),
    [anon_sym_PLUS] = ACTIONS(231),
    [anon_sym_SLASH] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(231),
    [anon_sym_PERCENT] = ACTIONS(231),
    [anon_sym_EQ_EQ] = ACTIONS(231),
    [anon_sym_BANG_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(231),
    [anon_sym_lt] = ACTIONS(233),
    [anon_sym_lte] = ACTIONS(233),
    [anon_sym_gt] = ACTIONS(233),
    [anon_sym_gte] = ACTIONS(233),
    [anon_sym_BANG] = ACTIONS(233),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [anon_sym_QMARK_QMARK] = ACTIONS(231),
    [anon_sym_EQ] = ACTIONS(233),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(231),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(231),
    [sym_number] = ACTIONS(233),
    [anon_sym_true] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(231),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(233),
    [anon_sym_DOT] = ACTIONS(233),
  },
  [87] = {
    [sym_expression] = STATE(183),
    [sym_type] = STATE(88),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(86),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_interpolation_repeat1] = STATE(183),
    [aux_sym_as_expression_repeat1] = STATE(88),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(421),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_using] = ACTIONS(145),
    [anon_sym_is] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_DOT_DOT] = ACTIONS(145),
    [anon_sym_DOT_DOT_LT] = ACTIONS(147),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_lt] = ACTIONS(145),
    [anon_sym_lte] = ACTIONS(145),
    [anon_sym_gt] = ACTIONS(145),
    [anon_sym_gte] = ACTIONS(145),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_QMARK_QMARK] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(149),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(157),
    [anon_sym_DOT] = ACTIONS(159),
  },
  [88] = {
    [sym_type] = STATE(185),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(184),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat1] = STATE(185),
    [aux_sym_as_expression_repeat2] = STATE(181),
    [anon_sym_LBRACE] = ACTIONS(231),
    [anon_sym_RBRACE] = ACTIONS(231),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_using] = ACTIONS(145),
    [anon_sym_is] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_DOT_DOT] = ACTIONS(145),
    [anon_sym_DOT_DOT_LT] = ACTIONS(147),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_lt] = ACTIONS(145),
    [anon_sym_lte] = ACTIONS(145),
    [anon_sym_gt] = ACTIONS(145),
    [anon_sym_gte] = ACTIONS(145),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_QMARK_QMARK] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(231),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(231),
    [sym_number] = ACTIONS(233),
    [anon_sym_true] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(231),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(233),
    [anon_sym_DOT] = ACTIONS(233),
  },
  [89] = {
    [sym_expression] = STATE(187),
    [sym_type] = STATE(88),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(86),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_interpolation_repeat1] = STATE(187),
    [aux_sym_as_expression_repeat1] = STATE(88),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(423),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_using] = ACTIONS(145),
    [anon_sym_is] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_DOT_DOT] = ACTIONS(145),
    [anon_sym_DOT_DOT_LT] = ACTIONS(147),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_lt] = ACTIONS(145),
    [anon_sym_lte] = ACTIONS(145),
    [anon_sym_gt] = ACTIONS(145),
    [anon_sym_gte] = ACTIONS(145),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_QMARK_QMARK] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(149),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(157),
    [anon_sym_DOT] = ACTIONS(159),
  },
  [90] = {
    [sym_type] = STATE(188),
    [sym_group] = STATE(95),
    [sym_string] = STATE(95),
    [sym_boolean] = STATE(95),
    [sym_sequence] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_top_level] = STATE(95),
    [sym_spec_var] = STATE(95),
    [aux_sym_as_expression_repeat2] = STATE(188),
    [anon_sym_LBRACE] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(167),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(173),
    [sym_number] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(179),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(181),
    [anon_sym_DOT] = ACTIONS(425),
  },
  [91] = {
    [sym_top_level] = STATE(189),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(427),
  },
  [92] = {
    [sym_parameter_group] = STATE(190),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(114),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(113),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(114),
    [aux_sym_group_repeat1] = STATE(190),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(193),
    [anon_sym_QMARK] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(79),
  },
  [93] = {
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_as] = ACTIONS(201),
    [anon_sym_QMARK] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_using] = ACTIONS(201),
    [anon_sym_is] = ACTIONS(201),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_DOT_DOT] = ACTIONS(201),
    [anon_sym_DOT_DOT_LT] = ACTIONS(199),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(199),
    [anon_sym_COLON] = ACTIONS(199),
    [anon_sym_STAR] = ACTIONS(199),
    [anon_sym_PLUS] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(199),
    [anon_sym_PERCENT] = ACTIONS(199),
    [anon_sym_EQ_EQ] = ACTIONS(199),
    [anon_sym_BANG_EQ] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(201),
    [anon_sym_LT_EQ] = ACTIONS(199),
    [anon_sym_lt] = ACTIONS(201),
    [anon_sym_lte] = ACTIONS(201),
    [anon_sym_gt] = ACTIONS(201),
    [anon_sym_gte] = ACTIONS(201),
    [anon_sym_BANG] = ACTIONS(201),
    [anon_sym_AMP_AMP] = ACTIONS(199),
    [anon_sym_PIPE_PIPE] = ACTIONS(199),
    [anon_sym_QMARK_QMARK] = ACTIONS(199),
    [anon_sym_EQ] = ACTIONS(201),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(199),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(199),
    [sym_number] = ACTIONS(201),
    [anon_sym_true] = ACTIONS(201),
    [anon_sym_LBRACK] = ACTIONS(199),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(201),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_GT] = ACTIONS(199),
    [anon_sym_SLASH_GT] = ACTIONS(199),
  },
  [94] = {
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_as] = ACTIONS(205),
    [anon_sym_QMARK] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_using] = ACTIONS(205),
    [anon_sym_is] = ACTIONS(205),
    [anon_sym_COMMA] = ACTIONS(203),
    [anon_sym_DOT_DOT] = ACTIONS(205),
    [anon_sym_DOT_DOT_LT] = ACTIONS(203),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(203),
    [anon_sym_STAR] = ACTIONS(203),
    [anon_sym_PLUS] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(205),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_PERCENT] = ACTIONS(203),
    [anon_sym_EQ_EQ] = ACTIONS(203),
    [anon_sym_BANG_EQ] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(205),
    [anon_sym_LT_EQ] = ACTIONS(203),
    [anon_sym_lt] = ACTIONS(205),
    [anon_sym_lte] = ACTIONS(205),
    [anon_sym_gt] = ACTIONS(205),
    [anon_sym_gte] = ACTIONS(205),
    [anon_sym_BANG] = ACTIONS(205),
    [anon_sym_AMP_AMP] = ACTIONS(203),
    [anon_sym_PIPE_PIPE] = ACTIONS(203),
    [anon_sym_QMARK_QMARK] = ACTIONS(203),
    [anon_sym_EQ] = ACTIONS(205),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(203),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(203),
    [sym_number] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(203),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(205),
    [anon_sym_DOT] = ACTIONS(205),
    [anon_sym_GT] = ACTIONS(203),
    [anon_sym_SLASH_GT] = ACTIONS(203),
  },
  [95] = {
    [anon_sym_LBRACE] = ACTIONS(207),
    [anon_sym_as] = ACTIONS(209),
    [anon_sym_QMARK] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(207),
    [anon_sym_using] = ACTIONS(209),
    [anon_sym_is] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_DOT_DOT] = ACTIONS(209),
    [anon_sym_DOT_DOT_LT] = ACTIONS(207),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(207),
    [anon_sym_COLON] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_DASH] = ACTIONS(207),
    [anon_sym_PERCENT] = ACTIONS(207),
    [anon_sym_EQ_EQ] = ACTIONS(207),
    [anon_sym_BANG_EQ] = ACTIONS(207),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_LT_EQ] = ACTIONS(207),
    [anon_sym_lt] = ACTIONS(209),
    [anon_sym_lte] = ACTIONS(209),
    [anon_sym_gt] = ACTIONS(209),
    [anon_sym_gte] = ACTIONS(209),
    [anon_sym_BANG] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(207),
    [anon_sym_PIPE_PIPE] = ACTIONS(207),
    [anon_sym_QMARK_QMARK] = ACTIONS(207),
    [anon_sym_EQ] = ACTIONS(209),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(207),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(207),
    [sym_number] = ACTIONS(209),
    [anon_sym_true] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(207),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(209),
    [anon_sym_DOT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(207),
    [anon_sym_SLASH_GT] = ACTIONS(207),
  },
  [96] = {
    [anon_sym_false] = ACTIONS(429),
  },
  [97] = {
    [sym_expression] = STATE(119),
    [sym_type] = STATE(121),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(120),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat1] = STATE(121),
    [aux_sym_sequence_repeat1] = STATE(193),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_using] = ACTIONS(145),
    [anon_sym_is] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_DOT_DOT] = ACTIONS(145),
    [anon_sym_DOT_DOT_LT] = ACTIONS(147),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_lt] = ACTIONS(145),
    [anon_sym_lte] = ACTIONS(145),
    [anon_sym_gt] = ACTIONS(145),
    [anon_sym_gte] = ACTIONS(145),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_QMARK_QMARK] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(149),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_RBRACK] = ACTIONS(431),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(159),
  },
  [98] = {
    [sym_group] = STATE(195),
    [aux_sym_top_level_repeat1] = STATE(196),
    [anon_sym_LBRACE] = ACTIONS(217),
    [anon_sym_as] = ACTIONS(219),
    [anon_sym_QMARK] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(217),
    [anon_sym_using] = ACTIONS(219),
    [anon_sym_is] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_DOT_DOT] = ACTIONS(219),
    [anon_sym_DOT_DOT_LT] = ACTIONS(217),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(217),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_SLASH] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_PERCENT] = ACTIONS(217),
    [anon_sym_EQ_EQ] = ACTIONS(217),
    [anon_sym_BANG_EQ] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_LT_EQ] = ACTIONS(217),
    [anon_sym_lt] = ACTIONS(219),
    [anon_sym_lte] = ACTIONS(219),
    [anon_sym_gt] = ACTIONS(219),
    [anon_sym_gte] = ACTIONS(219),
    [anon_sym_BANG] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_QMARK_QMARK] = ACTIONS(217),
    [anon_sym_EQ] = ACTIONS(219),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(217),
    [sym_number] = ACTIONS(219),
    [anon_sym_true] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(217),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(219),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(433),
    [anon_sym_DOT] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(217),
    [anon_sym_SLASH_GT] = ACTIONS(217),
  },
  [99] = {
    [sym__spec_var_name] = STATE(197),
    [anon_sym_auto_esc] = ACTIONS(435),
    [anon_sym_caller_template_name] = ACTIONS(435),
    [anon_sym_current_template_name] = ACTIONS(435),
    [anon_sym_data_model] = ACTIONS(435),
    [anon_sym_error] = ACTIONS(435),
    [anon_sym_globals] = ACTIONS(435),
    [anon_sym_incompatible_improvements] = ACTIONS(435),
    [anon_sym_lang] = ACTIONS(435),
    [anon_sym_locale] = ACTIONS(437),
    [anon_sym_locale_object] = ACTIONS(435),
    [anon_sym_locals] = ACTIONS(435),
    [anon_sym_main] = ACTIONS(437),
    [anon_sym_main_template_name] = ACTIONS(435),
    [anon_sym_namespace] = ACTIONS(435),
    [anon_sym_node] = ACTIONS(435),
    [anon_sym_now] = ACTIONS(435),
    [anon_sym_output_encoding] = ACTIONS(435),
    [anon_sym_get_optional_template] = ACTIONS(435),
    [anon_sym_pass] = ACTIONS(435),
    [anon_sym_template_name] = ACTIONS(435),
    [anon_sym_url_escaping_charset] = ACTIONS(435),
    [anon_sym_output_format] = ACTIONS(435),
    [anon_sym_vars] = ACTIONS(435),
    [anon_sym_version] = ACTIONS(435),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(439),
    [sym_comment] = ACTIONS(439),
    [anon_sym_DOLLAR] = ACTIONS(439),
    [anon_sym_LT_AT] = ACTIONS(439),
    [anon_sym_LT_POUND] = ACTIONS(441),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(439),
    [sym_break] = ACTIONS(439),
    [sym_continue] = ACTIONS(439),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(439),
    [anon_sym_LT_POUNDitems] = ACTIONS(439),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(439),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(439),
    [anon_sym_LT_POUNDif] = ACTIONS(439),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(439),
    [anon_sym_LT_POUNDelseif] = ACTIONS(439),
    [anon_sym_LT_POUNDswitch] = ACTIONS(439),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(439),
    [anon_sym_LT_POUNDcase] = ACTIONS(439),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(439),
    [anon_sym_LT_POUNDfunction] = ACTIONS(439),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(439),
    [anon_sym_LT_POUNDreturn] = ACTIONS(439),
    [anon_sym_LT_POUNDmacro] = ACTIONS(439),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(439),
    [anon_sym_LT_POUNDnested] = ACTIONS(439),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(439),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(439),
    [sym_recover] = ACTIONS(439),
    [sym_fallback] = ACTIONS(439),
    [sym_flush] = ACTIONS(439),
    [anon_sym_LT_POUNDftl] = ACTIONS(439),
    [anon_sym_LT_POUNDimport] = ACTIONS(439),
    [anon_sym_LT_POUNDinclude] = ACTIONS(439),
    [sym_lt] = ACTIONS(439),
    [sym_nt] = ACTIONS(439),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(439),
    [sym_rt] = ACTIONS(439),
    [anon_sym_LT_POUNDsetting] = ACTIONS(439),
    [sym_stop] = ACTIONS(439),
    [sym_t] = ACTIONS(439),
    [anon_sym_LT_POUNDvisit] = ACTIONS(439),
    [anon_sym_LT_POUNDassign] = ACTIONS(439),
    [sym_end_assign] = ACTIONS(439),
    [anon_sym_LT_POUNDglobal] = ACTIONS(439),
    [sym_end_global] = ACTIONS(439),
    [anon_sym_LT_POUNDlocal] = ACTIONS(439),
    [sym_end_local] = ACTIONS(439),
  },
  [101] = {
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_as] = ACTIONS(229),
    [anon_sym_QMARK] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_using] = ACTIONS(229),
    [anon_sym_is] = ACTIONS(229),
    [anon_sym_COMMA] = ACTIONS(227),
    [anon_sym_DOT_DOT] = ACTIONS(229),
    [anon_sym_DOT_DOT_LT] = ACTIONS(227),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(227),
    [anon_sym_COLON] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(227),
    [anon_sym_EQ_EQ] = ACTIONS(227),
    [anon_sym_BANG_EQ] = ACTIONS(227),
    [anon_sym_LT] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(227),
    [anon_sym_lt] = ACTIONS(229),
    [anon_sym_lte] = ACTIONS(229),
    [anon_sym_gt] = ACTIONS(229),
    [anon_sym_gte] = ACTIONS(229),
    [anon_sym_BANG] = ACTIONS(229),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [anon_sym_PIPE_PIPE] = ACTIONS(227),
    [anon_sym_QMARK_QMARK] = ACTIONS(227),
    [anon_sym_EQ] = ACTIONS(229),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(227),
    [sym_number] = ACTIONS(229),
    [anon_sym_true] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(227),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(229),
    [anon_sym_DOT] = ACTIONS(229),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_SLASH_GT] = ACTIONS(227),
  },
  [102] = {
    [sym_type] = STATE(198),
    [sym_group] = STATE(95),
    [sym_string] = STATE(95),
    [sym_boolean] = STATE(95),
    [sym_sequence] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_top_level] = STATE(95),
    [sym_spec_var] = STATE(95),
    [aux_sym_as_expression_repeat2] = STATE(198),
    [anon_sym_LBRACE] = ACTIONS(231),
    [anon_sym_as] = ACTIONS(233),
    [anon_sym_QMARK] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_using] = ACTIONS(233),
    [anon_sym_is] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(231),
    [anon_sym_DOT_DOT] = ACTIONS(233),
    [anon_sym_DOT_DOT_LT] = ACTIONS(231),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(231),
    [anon_sym_COLON] = ACTIONS(231),
    [anon_sym_STAR] = ACTIONS(231),
    [anon_sym_PLUS] = ACTIONS(231),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(231),
    [anon_sym_PERCENT] = ACTIONS(231),
    [anon_sym_EQ_EQ] = ACTIONS(231),
    [anon_sym_BANG_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(231),
    [anon_sym_lt] = ACTIONS(233),
    [anon_sym_lte] = ACTIONS(233),
    [anon_sym_gt] = ACTIONS(233),
    [anon_sym_gte] = ACTIONS(233),
    [anon_sym_BANG] = ACTIONS(233),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [anon_sym_QMARK_QMARK] = ACTIONS(231),
    [anon_sym_EQ] = ACTIONS(233),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(231),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(231),
    [sym_number] = ACTIONS(233),
    [anon_sym_true] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(231),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(233),
    [anon_sym_DOT] = ACTIONS(233),
    [anon_sym_GT] = ACTIONS(231),
    [anon_sym_SLASH_GT] = ACTIONS(231),
  },
  [103] = {
    [sym_type] = STATE(201),
    [sym_group] = STATE(95),
    [sym_operator] = STATE(200),
    [sym_string] = STATE(95),
    [sym_boolean] = STATE(95),
    [sym_sequence] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_top_level] = STATE(95),
    [sym_spec_var] = STATE(95),
    [aux_sym_as_expression_repeat1] = STATE(201),
    [aux_sym_as_expression_repeat2] = STATE(198),
    [anon_sym_LBRACE] = ACTIONS(231),
    [anon_sym_as] = ACTIONS(443),
    [anon_sym_QMARK] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_using] = ACTIONS(169),
    [anon_sym_is] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_DOT_DOT] = ACTIONS(169),
    [anon_sym_DOT_DOT_LT] = ACTIONS(171),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(171),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_STAR] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_SLASH] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_PERCENT] = ACTIONS(171),
    [anon_sym_EQ_EQ] = ACTIONS(171),
    [anon_sym_BANG_EQ] = ACTIONS(171),
    [anon_sym_LT] = ACTIONS(169),
    [anon_sym_LT_EQ] = ACTIONS(171),
    [anon_sym_lt] = ACTIONS(169),
    [anon_sym_lte] = ACTIONS(169),
    [anon_sym_gt] = ACTIONS(169),
    [anon_sym_gte] = ACTIONS(169),
    [anon_sym_BANG] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(171),
    [anon_sym_PIPE_PIPE] = ACTIONS(171),
    [anon_sym_QMARK_QMARK] = ACTIONS(171),
    [anon_sym_EQ] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(231),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(231),
    [sym_number] = ACTIONS(233),
    [anon_sym_true] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(231),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(233),
    [anon_sym_DOT] = ACTIONS(233),
    [anon_sym_GT] = ACTIONS(231),
    [anon_sym_SLASH_GT] = ACTIONS(231),
  },
  [104] = {
    [sym_parameter_group] = STATE(203),
    [sym_as_expression] = STATE(101),
    [sym_expression] = STATE(101),
    [sym_type] = STATE(103),
    [sym_built_in] = STATE(101),
    [sym_group] = STATE(95),
    [sym_operator] = STATE(102),
    [sym_string] = STATE(95),
    [sym_boolean] = STATE(95),
    [sym_sequence] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_top_level] = STATE(95),
    [sym_spec_var] = STATE(95),
    [aux_sym_as_expression_repeat1] = STATE(103),
    [aux_sym_group_repeat1] = STATE(203),
    [anon_sym_LBRACE] = ACTIONS(161),
    [anon_sym_as] = ACTIONS(163),
    [anon_sym_QMARK] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_using] = ACTIONS(169),
    [anon_sym_is] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_DOT_DOT] = ACTIONS(169),
    [anon_sym_DOT_DOT_LT] = ACTIONS(171),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(171),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_STAR] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_SLASH] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_PERCENT] = ACTIONS(171),
    [anon_sym_EQ_EQ] = ACTIONS(171),
    [anon_sym_BANG_EQ] = ACTIONS(171),
    [anon_sym_LT] = ACTIONS(169),
    [anon_sym_LT_EQ] = ACTIONS(171),
    [anon_sym_lt] = ACTIONS(169),
    [anon_sym_lte] = ACTIONS(169),
    [anon_sym_gt] = ACTIONS(169),
    [anon_sym_gte] = ACTIONS(169),
    [anon_sym_BANG] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(171),
    [anon_sym_PIPE_PIPE] = ACTIONS(171),
    [anon_sym_QMARK_QMARK] = ACTIONS(171),
    [anon_sym_EQ] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(173),
    [sym_number] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(179),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(181),
    [anon_sym_DOT] = ACTIONS(183),
    [anon_sym_GT] = ACTIONS(445),
    [anon_sym_SLASH_GT] = ACTIONS(445),
  },
  [105] = {
    [anon_sym_GT] = ACTIONS(447),
  },
  [106] = {
    [anon_sym_LBRACE] = ACTIONS(449),
    [anon_sym_as] = ACTIONS(451),
    [anon_sym_QMARK] = ACTIONS(451),
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_RPAREN] = ACTIONS(449),
    [anon_sym_using] = ACTIONS(451),
    [anon_sym_is] = ACTIONS(451),
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
    [anon_sym_GT] = ACTIONS(449),
  },
  [107] = {
    [sym_expression] = STATE(183),
    [sym_type] = STATE(88),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(86),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_interpolation_repeat1] = STATE(183),
    [aux_sym_as_expression_repeat1] = STATE(88),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(453),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_using] = ACTIONS(145),
    [anon_sym_is] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_DOT_DOT] = ACTIONS(145),
    [anon_sym_DOT_DOT_LT] = ACTIONS(147),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_lt] = ACTIONS(145),
    [anon_sym_lte] = ACTIONS(145),
    [anon_sym_gt] = ACTIONS(145),
    [anon_sym_gte] = ACTIONS(145),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_QMARK_QMARK] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(149),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(157),
    [anon_sym_DOT] = ACTIONS(159),
  },
  [108] = {
    [sym_type] = STATE(206),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(206),
    [anon_sym_LBRACE] = ACTIONS(455),
    [anon_sym_as] = ACTIONS(457),
    [anon_sym_QMARK] = ACTIONS(457),
    [anon_sym_LPAREN] = ACTIONS(455),
    [anon_sym_using] = ACTIONS(457),
    [anon_sym_is] = ACTIONS(457),
    [anon_sym_COMMA] = ACTIONS(455),
    [anon_sym_DOT_DOT] = ACTIONS(457),
    [anon_sym_DOT_DOT_LT] = ACTIONS(455),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(455),
    [anon_sym_COLON] = ACTIONS(455),
    [anon_sym_STAR] = ACTIONS(455),
    [anon_sym_PLUS] = ACTIONS(455),
    [anon_sym_SLASH] = ACTIONS(455),
    [anon_sym_DASH] = ACTIONS(455),
    [anon_sym_PERCENT] = ACTIONS(455),
    [anon_sym_EQ_EQ] = ACTIONS(455),
    [anon_sym_BANG_EQ] = ACTIONS(455),
    [anon_sym_LT] = ACTIONS(457),
    [anon_sym_LT_EQ] = ACTIONS(455),
    [anon_sym_lt] = ACTIONS(457),
    [anon_sym_lte] = ACTIONS(457),
    [anon_sym_gt] = ACTIONS(457),
    [anon_sym_gte] = ACTIONS(457),
    [anon_sym_BANG] = ACTIONS(457),
    [anon_sym_AMP_AMP] = ACTIONS(455),
    [anon_sym_PIPE_PIPE] = ACTIONS(455),
    [anon_sym_QMARK_QMARK] = ACTIONS(455),
    [anon_sym_EQ] = ACTIONS(457),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(455),
    [sym_number] = ACTIONS(457),
    [anon_sym_true] = ACTIONS(457),
    [anon_sym_LBRACK] = ACTIONS(455),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(457),
    [anon_sym_DOT] = ACTIONS(457),
    [anon_sym_GT] = ACTIONS(455),
  },
  [109] = {
    [sym_group] = STATE(207),
    [anon_sym_LBRACE] = ACTIONS(459),
    [anon_sym_as] = ACTIONS(461),
    [anon_sym_QMARK] = ACTIONS(461),
    [anon_sym_LPAREN] = ACTIONS(459),
    [anon_sym_RPAREN] = ACTIONS(459),
    [anon_sym_using] = ACTIONS(461),
    [anon_sym_is] = ACTIONS(461),
    [anon_sym_COMMA] = ACTIONS(459),
    [anon_sym_DOT_DOT] = ACTIONS(461),
    [anon_sym_DOT_DOT_LT] = ACTIONS(459),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(459),
    [anon_sym_COLON] = ACTIONS(459),
    [anon_sym_STAR] = ACTIONS(459),
    [anon_sym_PLUS] = ACTIONS(459),
    [anon_sym_SLASH] = ACTIONS(459),
    [anon_sym_DASH] = ACTIONS(459),
    [anon_sym_PERCENT] = ACTIONS(459),
    [anon_sym_EQ_EQ] = ACTIONS(459),
    [anon_sym_BANG_EQ] = ACTIONS(459),
    [anon_sym_LT] = ACTIONS(461),
    [anon_sym_LT_EQ] = ACTIONS(459),
    [anon_sym_lt] = ACTIONS(461),
    [anon_sym_lte] = ACTIONS(461),
    [anon_sym_gt] = ACTIONS(461),
    [anon_sym_gte] = ACTIONS(461),
    [anon_sym_BANG] = ACTIONS(461),
    [anon_sym_AMP_AMP] = ACTIONS(459),
    [anon_sym_PIPE_PIPE] = ACTIONS(459),
    [anon_sym_QMARK_QMARK] = ACTIONS(459),
    [anon_sym_EQ] = ACTIONS(461),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(459),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(459),
    [sym_number] = ACTIONS(461),
    [anon_sym_true] = ACTIONS(461),
    [anon_sym_LBRACK] = ACTIONS(459),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(461),
    [anon_sym_DOT] = ACTIONS(461),
    [anon_sym_GT] = ACTIONS(459),
  },
  [110] = {
    [sym_type] = STATE(208),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(208),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(189),
  },
  [111] = {
    [sym_top_level] = STATE(109),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(463),
  },
  [112] = {
    [sym_group] = STATE(124),
    [aux_sym_top_level_repeat1] = STATE(209),
    [anon_sym_LBRACE] = ACTIONS(217),
    [anon_sym_as] = ACTIONS(219),
    [anon_sym_QMARK] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(217),
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_using] = ACTIONS(219),
    [anon_sym_is] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_DOT_DOT] = ACTIONS(219),
    [anon_sym_DOT_DOT_LT] = ACTIONS(217),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(217),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_PERCENT] = ACTIONS(217),
    [anon_sym_EQ_EQ] = ACTIONS(217),
    [anon_sym_BANG_EQ] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_LT_EQ] = ACTIONS(217),
    [anon_sym_lt] = ACTIONS(219),
    [anon_sym_lte] = ACTIONS(219),
    [anon_sym_gt] = ACTIONS(219),
    [anon_sym_gte] = ACTIONS(219),
    [anon_sym_BANG] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_QMARK_QMARK] = ACTIONS(217),
    [anon_sym_EQ] = ACTIONS(219),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(217),
    [sym_number] = ACTIONS(219),
    [anon_sym_true] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(217),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(219),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(219),
  },
  [113] = {
    [sym_type] = STATE(210),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(210),
    [anon_sym_LBRACE] = ACTIONS(231),
    [anon_sym_as] = ACTIONS(233),
    [anon_sym_QMARK] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_RPAREN] = ACTIONS(231),
    [anon_sym_using] = ACTIONS(233),
    [anon_sym_is] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(231),
    [anon_sym_DOT_DOT] = ACTIONS(233),
    [anon_sym_DOT_DOT_LT] = ACTIONS(231),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(231),
    [anon_sym_COLON] = ACTIONS(231),
    [anon_sym_STAR] = ACTIONS(231),
    [anon_sym_PLUS] = ACTIONS(231),
    [anon_sym_SLASH] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(231),
    [anon_sym_PERCENT] = ACTIONS(231),
    [anon_sym_EQ_EQ] = ACTIONS(231),
    [anon_sym_BANG_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(231),
    [anon_sym_lt] = ACTIONS(233),
    [anon_sym_lte] = ACTIONS(233),
    [anon_sym_gt] = ACTIONS(233),
    [anon_sym_gte] = ACTIONS(233),
    [anon_sym_BANG] = ACTIONS(233),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [anon_sym_QMARK_QMARK] = ACTIONS(231),
    [anon_sym_EQ] = ACTIONS(233),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(231),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(231),
    [sym_number] = ACTIONS(233),
    [anon_sym_true] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(231),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(233),
    [anon_sym_DOT] = ACTIONS(233),
  },
  [114] = {
    [sym_type] = STATE(213),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(212),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(213),
    [aux_sym_as_expression_repeat2] = STATE(210),
    [anon_sym_LBRACE] = ACTIONS(231),
    [anon_sym_as] = ACTIONS(465),
    [anon_sym_QMARK] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_RPAREN] = ACTIONS(231),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(231),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(231),
    [sym_number] = ACTIONS(233),
    [anon_sym_true] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(231),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(233),
    [anon_sym_DOT] = ACTIONS(233),
  },
  [115] = {
    [sym_parameter_group] = STATE(215),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(114),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(113),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(114),
    [aux_sym_group_repeat1] = STATE(215),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(193),
    [anon_sym_QMARK] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(467),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(79),
  },
  [116] = {
    [anon_sym_LBRACE] = ACTIONS(469),
    [anon_sym_as] = ACTIONS(471),
    [anon_sym_QMARK] = ACTIONS(471),
    [anon_sym_LPAREN] = ACTIONS(469),
    [anon_sym_RPAREN] = ACTIONS(469),
    [anon_sym_using] = ACTIONS(471),
    [anon_sym_is] = ACTIONS(471),
    [anon_sym_COMMA] = ACTIONS(469),
    [anon_sym_DOT_DOT] = ACTIONS(471),
    [anon_sym_DOT_DOT_LT] = ACTIONS(469),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(469),
    [anon_sym_COLON] = ACTIONS(469),
    [anon_sym_STAR] = ACTIONS(469),
    [anon_sym_PLUS] = ACTIONS(469),
    [anon_sym_SLASH] = ACTIONS(469),
    [anon_sym_DASH] = ACTIONS(469),
    [anon_sym_PERCENT] = ACTIONS(469),
    [anon_sym_EQ_EQ] = ACTIONS(469),
    [anon_sym_BANG_EQ] = ACTIONS(469),
    [anon_sym_LT] = ACTIONS(471),
    [anon_sym_LT_EQ] = ACTIONS(469),
    [anon_sym_lt] = ACTIONS(471),
    [anon_sym_lte] = ACTIONS(471),
    [anon_sym_gt] = ACTIONS(471),
    [anon_sym_gte] = ACTIONS(471),
    [anon_sym_BANG] = ACTIONS(471),
    [anon_sym_AMP_AMP] = ACTIONS(469),
    [anon_sym_PIPE_PIPE] = ACTIONS(469),
    [anon_sym_QMARK_QMARK] = ACTIONS(469),
    [anon_sym_EQ] = ACTIONS(471),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(469),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(469),
    [sym_number] = ACTIONS(471),
    [anon_sym_true] = ACTIONS(471),
    [anon_sym_LBRACK] = ACTIONS(469),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(471),
    [anon_sym_DOT] = ACTIONS(471),
    [anon_sym_GT] = ACTIONS(469),
  },
  [117] = {
    [anon_sym_LBRACE] = ACTIONS(473),
    [anon_sym_as] = ACTIONS(475),
    [anon_sym_QMARK] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(473),
    [anon_sym_RPAREN] = ACTIONS(473),
    [anon_sym_using] = ACTIONS(475),
    [anon_sym_is] = ACTIONS(475),
    [anon_sym_COMMA] = ACTIONS(473),
    [anon_sym_DOT_DOT] = ACTIONS(475),
    [anon_sym_DOT_DOT_LT] = ACTIONS(473),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(473),
    [anon_sym_COLON] = ACTIONS(473),
    [anon_sym_STAR] = ACTIONS(473),
    [anon_sym_PLUS] = ACTIONS(473),
    [anon_sym_SLASH] = ACTIONS(473),
    [anon_sym_DASH] = ACTIONS(473),
    [anon_sym_PERCENT] = ACTIONS(473),
    [anon_sym_EQ_EQ] = ACTIONS(473),
    [anon_sym_BANG_EQ] = ACTIONS(473),
    [anon_sym_LT] = ACTIONS(475),
    [anon_sym_LT_EQ] = ACTIONS(473),
    [anon_sym_lt] = ACTIONS(475),
    [anon_sym_lte] = ACTIONS(475),
    [anon_sym_gt] = ACTIONS(475),
    [anon_sym_gte] = ACTIONS(475),
    [anon_sym_BANG] = ACTIONS(475),
    [anon_sym_AMP_AMP] = ACTIONS(473),
    [anon_sym_PIPE_PIPE] = ACTIONS(473),
    [anon_sym_QMARK_QMARK] = ACTIONS(473),
    [anon_sym_EQ] = ACTIONS(475),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(473),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(473),
    [sym_number] = ACTIONS(475),
    [anon_sym_true] = ACTIONS(475),
    [anon_sym_LBRACK] = ACTIONS(473),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(475),
    [anon_sym_DOT] = ACTIONS(475),
    [anon_sym_GT] = ACTIONS(473),
  },
  [118] = {
    [sym_group] = STATE(178),
    [aux_sym_top_level_repeat1] = STATE(216),
    [anon_sym_LBRACE] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(217),
    [anon_sym_using] = ACTIONS(219),
    [anon_sym_is] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_DOT_DOT] = ACTIONS(219),
    [anon_sym_DOT_DOT_LT] = ACTIONS(217),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(217),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_PERCENT] = ACTIONS(217),
    [anon_sym_EQ_EQ] = ACTIONS(217),
    [anon_sym_BANG_EQ] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_LT_EQ] = ACTIONS(217),
    [anon_sym_lt] = ACTIONS(219),
    [anon_sym_lte] = ACTIONS(219),
    [anon_sym_gt] = ACTIONS(219),
    [anon_sym_gte] = ACTIONS(219),
    [anon_sym_BANG] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_QMARK_QMARK] = ACTIONS(217),
    [anon_sym_EQ] = ACTIONS(219),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(217),
    [sym_number] = ACTIONS(219),
    [anon_sym_true] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_RBRACK] = ACTIONS(217),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(219),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(415),
    [anon_sym_DOT] = ACTIONS(219),
  },
  [119] = {
    [anon_sym_LBRACE] = ACTIONS(477),
    [anon_sym_LPAREN] = ACTIONS(477),
    [anon_sym_using] = ACTIONS(479),
    [anon_sym_is] = ACTIONS(479),
    [anon_sym_COMMA] = ACTIONS(481),
    [anon_sym_DOT_DOT] = ACTIONS(479),
    [anon_sym_DOT_DOT_LT] = ACTIONS(477),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(477),
    [anon_sym_COLON] = ACTIONS(477),
    [anon_sym_STAR] = ACTIONS(477),
    [anon_sym_PLUS] = ACTIONS(477),
    [anon_sym_SLASH] = ACTIONS(477),
    [anon_sym_DASH] = ACTIONS(477),
    [anon_sym_PERCENT] = ACTIONS(477),
    [anon_sym_EQ_EQ] = ACTIONS(477),
    [anon_sym_BANG_EQ] = ACTIONS(477),
    [anon_sym_LT] = ACTIONS(479),
    [anon_sym_LT_EQ] = ACTIONS(477),
    [anon_sym_lt] = ACTIONS(479),
    [anon_sym_lte] = ACTIONS(479),
    [anon_sym_gt] = ACTIONS(479),
    [anon_sym_gte] = ACTIONS(479),
    [anon_sym_BANG] = ACTIONS(479),
    [anon_sym_AMP_AMP] = ACTIONS(477),
    [anon_sym_PIPE_PIPE] = ACTIONS(477),
    [anon_sym_QMARK_QMARK] = ACTIONS(477),
    [anon_sym_EQ] = ACTIONS(479),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(477),
    [sym_number] = ACTIONS(479),
    [anon_sym_true] = ACTIONS(479),
    [anon_sym_LBRACK] = ACTIONS(477),
    [anon_sym_RBRACK] = ACTIONS(477),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(479),
    [anon_sym_DOT] = ACTIONS(479),
  },
  [120] = {
    [sym_type] = STATE(218),
    [sym_group] = STATE(81),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat2] = STATE(218),
    [anon_sym_LBRACE] = ACTIONS(231),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_using] = ACTIONS(233),
    [anon_sym_is] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(231),
    [anon_sym_DOT_DOT] = ACTIONS(233),
    [anon_sym_DOT_DOT_LT] = ACTIONS(231),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(231),
    [anon_sym_COLON] = ACTIONS(231),
    [anon_sym_STAR] = ACTIONS(231),
    [anon_sym_PLUS] = ACTIONS(231),
    [anon_sym_SLASH] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(231),
    [anon_sym_PERCENT] = ACTIONS(231),
    [anon_sym_EQ_EQ] = ACTIONS(231),
    [anon_sym_BANG_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(231),
    [anon_sym_lt] = ACTIONS(233),
    [anon_sym_lte] = ACTIONS(233),
    [anon_sym_gt] = ACTIONS(233),
    [anon_sym_gte] = ACTIONS(233),
    [anon_sym_BANG] = ACTIONS(233),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [anon_sym_QMARK_QMARK] = ACTIONS(231),
    [anon_sym_EQ] = ACTIONS(233),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(231),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(231),
    [sym_number] = ACTIONS(233),
    [anon_sym_true] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_RBRACK] = ACTIONS(231),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(233),
    [anon_sym_DOT] = ACTIONS(233),
  },
  [121] = {
    [sym_type] = STATE(220),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(219),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat1] = STATE(220),
    [aux_sym_as_expression_repeat2] = STATE(218),
    [anon_sym_LBRACE] = ACTIONS(231),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_using] = ACTIONS(145),
    [anon_sym_is] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_DOT_DOT] = ACTIONS(145),
    [anon_sym_DOT_DOT_LT] = ACTIONS(147),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_lt] = ACTIONS(145),
    [anon_sym_lte] = ACTIONS(145),
    [anon_sym_gt] = ACTIONS(145),
    [anon_sym_gte] = ACTIONS(145),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_QMARK_QMARK] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(231),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(231),
    [sym_number] = ACTIONS(233),
    [anon_sym_true] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_RBRACK] = ACTIONS(231),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(233),
    [anon_sym_DOT] = ACTIONS(233),
  },
  [122] = {
    [sym_expression] = STATE(119),
    [sym_type] = STATE(121),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(120),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat1] = STATE(121),
    [aux_sym_sequence_repeat1] = STATE(222),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_using] = ACTIONS(145),
    [anon_sym_is] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_DOT_DOT] = ACTIONS(145),
    [anon_sym_DOT_DOT_LT] = ACTIONS(147),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_lt] = ACTIONS(145),
    [anon_sym_lte] = ACTIONS(145),
    [anon_sym_gt] = ACTIONS(145),
    [anon_sym_gte] = ACTIONS(145),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_QMARK_QMARK] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(149),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_RBRACK] = ACTIONS(484),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(159),
  },
  [123] = {
    [anon_sym_LBRACE] = ACTIONS(486),
    [anon_sym_as] = ACTIONS(488),
    [anon_sym_QMARK] = ACTIONS(488),
    [anon_sym_LPAREN] = ACTIONS(486),
    [anon_sym_RPAREN] = ACTIONS(486),
    [anon_sym_using] = ACTIONS(488),
    [anon_sym_is] = ACTIONS(488),
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
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(486),
    [anon_sym_DOT] = ACTIONS(488),
    [anon_sym_GT] = ACTIONS(486),
  },
  [124] = {
    [anon_sym_LBRACE] = ACTIONS(490),
    [anon_sym_as] = ACTIONS(492),
    [anon_sym_QMARK] = ACTIONS(492),
    [anon_sym_LPAREN] = ACTIONS(490),
    [anon_sym_RPAREN] = ACTIONS(490),
    [anon_sym_using] = ACTIONS(492),
    [anon_sym_is] = ACTIONS(492),
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
    [anon_sym_GT] = ACTIONS(490),
  },
  [125] = {
    [sym_group] = STATE(223),
    [aux_sym_top_level_repeat1] = STATE(224),
    [anon_sym_LBRACE] = ACTIONS(494),
    [anon_sym_as] = ACTIONS(496),
    [anon_sym_QMARK] = ACTIONS(496),
    [anon_sym_LPAREN] = ACTIONS(494),
    [anon_sym_using] = ACTIONS(496),
    [anon_sym_is] = ACTIONS(496),
    [anon_sym_COMMA] = ACTIONS(494),
    [anon_sym_DOT_DOT] = ACTIONS(496),
    [anon_sym_DOT_DOT_LT] = ACTIONS(494),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(494),
    [anon_sym_COLON] = ACTIONS(494),
    [anon_sym_STAR] = ACTIONS(494),
    [anon_sym_PLUS] = ACTIONS(494),
    [anon_sym_SLASH] = ACTIONS(494),
    [anon_sym_DASH] = ACTIONS(494),
    [anon_sym_PERCENT] = ACTIONS(494),
    [anon_sym_EQ_EQ] = ACTIONS(494),
    [anon_sym_BANG_EQ] = ACTIONS(494),
    [anon_sym_LT] = ACTIONS(496),
    [anon_sym_LT_EQ] = ACTIONS(494),
    [anon_sym_lt] = ACTIONS(496),
    [anon_sym_lte] = ACTIONS(496),
    [anon_sym_gt] = ACTIONS(496),
    [anon_sym_gte] = ACTIONS(496),
    [anon_sym_BANG] = ACTIONS(496),
    [anon_sym_AMP_AMP] = ACTIONS(494),
    [anon_sym_PIPE_PIPE] = ACTIONS(494),
    [anon_sym_QMARK_QMARK] = ACTIONS(494),
    [anon_sym_EQ] = ACTIONS(496),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(494),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(494),
    [sym_number] = ACTIONS(496),
    [anon_sym_true] = ACTIONS(496),
    [anon_sym_LBRACK] = ACTIONS(494),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(496),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(496),
    [anon_sym_GT] = ACTIONS(494),
  },
  [126] = {
    [anon_sym_LBRACE] = ACTIONS(498),
    [anon_sym_as] = ACTIONS(500),
    [anon_sym_QMARK] = ACTIONS(500),
    [anon_sym_LPAREN] = ACTIONS(498),
    [anon_sym_RPAREN] = ACTIONS(498),
    [anon_sym_using] = ACTIONS(500),
    [anon_sym_is] = ACTIONS(500),
    [anon_sym_COMMA] = ACTIONS(498),
    [anon_sym_DOT_DOT] = ACTIONS(500),
    [anon_sym_DOT_DOT_LT] = ACTIONS(498),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(498),
    [anon_sym_COLON] = ACTIONS(498),
    [anon_sym_STAR] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(498),
    [anon_sym_SLASH] = ACTIONS(498),
    [anon_sym_DASH] = ACTIONS(498),
    [anon_sym_PERCENT] = ACTIONS(498),
    [anon_sym_EQ_EQ] = ACTIONS(498),
    [anon_sym_BANG_EQ] = ACTIONS(498),
    [anon_sym_LT] = ACTIONS(500),
    [anon_sym_LT_EQ] = ACTIONS(498),
    [anon_sym_lt] = ACTIONS(500),
    [anon_sym_lte] = ACTIONS(500),
    [anon_sym_gt] = ACTIONS(500),
    [anon_sym_gte] = ACTIONS(500),
    [anon_sym_BANG] = ACTIONS(500),
    [anon_sym_AMP_AMP] = ACTIONS(498),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_QMARK_QMARK] = ACTIONS(498),
    [anon_sym_EQ] = ACTIONS(500),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(498),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(498),
    [sym_number] = ACTIONS(500),
    [anon_sym_true] = ACTIONS(500),
    [anon_sym_LBRACK] = ACTIONS(498),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(500),
    [anon_sym_DOT] = ACTIONS(500),
    [anon_sym_GT] = ACTIONS(498),
  },
  [127] = {
    [sym_type] = STATE(206),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(206),
    [anon_sym_LBRACE] = ACTIONS(502),
    [anon_sym_as] = ACTIONS(504),
    [anon_sym_QMARK] = ACTIONS(504),
    [anon_sym_LPAREN] = ACTIONS(502),
    [anon_sym_using] = ACTIONS(504),
    [anon_sym_is] = ACTIONS(504),
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_DOT_DOT] = ACTIONS(504),
    [anon_sym_DOT_DOT_LT] = ACTIONS(502),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(502),
    [anon_sym_COLON] = ACTIONS(502),
    [anon_sym_STAR] = ACTIONS(502),
    [anon_sym_PLUS] = ACTIONS(502),
    [anon_sym_SLASH] = ACTIONS(502),
    [anon_sym_DASH] = ACTIONS(502),
    [anon_sym_PERCENT] = ACTIONS(502),
    [anon_sym_EQ_EQ] = ACTIONS(502),
    [anon_sym_BANG_EQ] = ACTIONS(502),
    [anon_sym_LT] = ACTIONS(504),
    [anon_sym_LT_EQ] = ACTIONS(502),
    [anon_sym_lt] = ACTIONS(504),
    [anon_sym_lte] = ACTIONS(504),
    [anon_sym_gt] = ACTIONS(504),
    [anon_sym_gte] = ACTIONS(504),
    [anon_sym_BANG] = ACTIONS(504),
    [anon_sym_AMP_AMP] = ACTIONS(502),
    [anon_sym_PIPE_PIPE] = ACTIONS(502),
    [anon_sym_QMARK_QMARK] = ACTIONS(502),
    [anon_sym_EQ] = ACTIONS(504),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(502),
    [sym_number] = ACTIONS(504),
    [anon_sym_true] = ACTIONS(504),
    [anon_sym_LBRACK] = ACTIONS(502),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(504),
    [anon_sym_DOT] = ACTIONS(504),
    [anon_sym_GT] = ACTIONS(502),
  },
  [128] = {
    [sym_type] = STATE(225),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(225),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(189),
  },
  [129] = {
    [sym_type] = STATE(226),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(226),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(504),
    [anon_sym_QMARK] = ACTIONS(504),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(504),
    [anon_sym_is] = ACTIONS(504),
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_DOT_DOT] = ACTIONS(504),
    [anon_sym_DOT_DOT_LT] = ACTIONS(502),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(502),
    [anon_sym_COLON] = ACTIONS(502),
    [anon_sym_STAR] = ACTIONS(502),
    [anon_sym_PLUS] = ACTIONS(502),
    [anon_sym_SLASH] = ACTIONS(502),
    [anon_sym_DASH] = ACTIONS(502),
    [anon_sym_PERCENT] = ACTIONS(502),
    [anon_sym_EQ_EQ] = ACTIONS(502),
    [anon_sym_BANG_EQ] = ACTIONS(502),
    [anon_sym_LT] = ACTIONS(504),
    [anon_sym_LT_EQ] = ACTIONS(502),
    [anon_sym_lt] = ACTIONS(504),
    [anon_sym_lte] = ACTIONS(504),
    [anon_sym_gt] = ACTIONS(504),
    [anon_sym_gte] = ACTIONS(504),
    [anon_sym_BANG] = ACTIONS(504),
    [anon_sym_AMP_AMP] = ACTIONS(502),
    [anon_sym_PIPE_PIPE] = ACTIONS(502),
    [anon_sym_QMARK_QMARK] = ACTIONS(502),
    [anon_sym_EQ] = ACTIONS(504),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(502),
  },
  [130] = {
    [sym_type] = STATE(130),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(130),
    [anon_sym_LBRACE] = ACTIONS(506),
    [anon_sym_as] = ACTIONS(509),
    [anon_sym_QMARK] = ACTIONS(509),
    [anon_sym_LPAREN] = ACTIONS(511),
    [anon_sym_using] = ACTIONS(509),
    [anon_sym_is] = ACTIONS(509),
    [anon_sym_COMMA] = ACTIONS(514),
    [anon_sym_DOT_DOT] = ACTIONS(509),
    [anon_sym_DOT_DOT_LT] = ACTIONS(514),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(514),
    [anon_sym_COLON] = ACTIONS(514),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_PLUS] = ACTIONS(514),
    [anon_sym_SLASH] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_PERCENT] = ACTIONS(514),
    [anon_sym_EQ_EQ] = ACTIONS(514),
    [anon_sym_BANG_EQ] = ACTIONS(514),
    [anon_sym_LT] = ACTIONS(509),
    [anon_sym_LT_EQ] = ACTIONS(514),
    [anon_sym_lt] = ACTIONS(509),
    [anon_sym_lte] = ACTIONS(509),
    [anon_sym_gt] = ACTIONS(509),
    [anon_sym_gte] = ACTIONS(509),
    [anon_sym_BANG] = ACTIONS(509),
    [anon_sym_AMP_AMP] = ACTIONS(514),
    [anon_sym_PIPE_PIPE] = ACTIONS(514),
    [anon_sym_QMARK_QMARK] = ACTIONS(514),
    [anon_sym_EQ] = ACTIONS(509),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(516),
    [sym_number] = ACTIONS(519),
    [anon_sym_true] = ACTIONS(522),
    [anon_sym_LBRACK] = ACTIONS(525),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(528),
    [anon_sym_DOT] = ACTIONS(531),
    [anon_sym_GT] = ACTIONS(514),
  },
  [131] = {
    [sym_directive] = STATE(230),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_if_else] = STATE(231),
    [sym_elseif] = STATE(230),
    [sym_if_middle] = STATE(232),
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
    [aux_sym_if_repeat1] = STATE(232),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(534),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(536),
    [anon_sym_LT_POUNDelseif] = ACTIONS(538),
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
  [132] = {
    [sym_parameter_group] = STATE(132),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(41),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(40),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(41),
    [aux_sym_group_repeat1] = STATE(132),
    [anon_sym_LBRACE] = ACTIONS(540),
    [anon_sym_as] = ACTIONS(543),
    [anon_sym_QMARK] = ACTIONS(546),
    [anon_sym_LPAREN] = ACTIONS(549),
    [anon_sym_using] = ACTIONS(552),
    [anon_sym_is] = ACTIONS(552),
    [anon_sym_COMMA] = ACTIONS(555),
    [anon_sym_DOT_DOT] = ACTIONS(552),
    [anon_sym_DOT_DOT_LT] = ACTIONS(555),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(555),
    [anon_sym_COLON] = ACTIONS(555),
    [anon_sym_STAR] = ACTIONS(555),
    [anon_sym_PLUS] = ACTIONS(555),
    [anon_sym_SLASH] = ACTIONS(555),
    [anon_sym_DASH] = ACTIONS(555),
    [anon_sym_PERCENT] = ACTIONS(555),
    [anon_sym_EQ_EQ] = ACTIONS(555),
    [anon_sym_BANG_EQ] = ACTIONS(555),
    [anon_sym_LT] = ACTIONS(552),
    [anon_sym_LT_EQ] = ACTIONS(555),
    [anon_sym_lt] = ACTIONS(552),
    [anon_sym_lte] = ACTIONS(552),
    [anon_sym_gt] = ACTIONS(552),
    [anon_sym_gte] = ACTIONS(552),
    [anon_sym_BANG] = ACTIONS(552),
    [anon_sym_AMP_AMP] = ACTIONS(555),
    [anon_sym_PIPE_PIPE] = ACTIONS(555),
    [anon_sym_QMARK_QMARK] = ACTIONS(555),
    [anon_sym_EQ] = ACTIONS(552),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(558),
    [sym_number] = ACTIONS(561),
    [anon_sym_true] = ACTIONS(564),
    [anon_sym_LBRACK] = ACTIONS(567),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(570),
    [anon_sym_DOT] = ACTIONS(573),
    [anon_sym_GT] = ACTIONS(576),
  },
  [133] = {
    [sym_expression] = STATE(234),
    [sym_type] = STATE(88),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(86),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_interpolation_repeat1] = STATE(234),
    [aux_sym_as_expression_repeat1] = STATE(88),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(578),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_using] = ACTIONS(145),
    [anon_sym_is] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_DOT_DOT] = ACTIONS(145),
    [anon_sym_DOT_DOT_LT] = ACTIONS(147),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_lt] = ACTIONS(145),
    [anon_sym_lte] = ACTIONS(145),
    [anon_sym_gt] = ACTIONS(145),
    [anon_sym_gte] = ACTIONS(145),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_QMARK_QMARK] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(149),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(157),
    [anon_sym_DOT] = ACTIONS(159),
  },
  [134] = {
    [sym_parameter_group] = STATE(235),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(114),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(113),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(114),
    [aux_sym_group_repeat1] = STATE(235),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(193),
    [anon_sym_QMARK] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(79),
  },
  [135] = {
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(203),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(203),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(203),
    [sym_number] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(203),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(205),
    [anon_sym_DOT] = ACTIONS(203),
    [anon_sym_GT] = ACTIONS(203),
  },
  [136] = {
    [anon_sym_LBRACE] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(207),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(207),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(207),
    [sym_number] = ACTIONS(209),
    [anon_sym_true] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(207),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(209),
    [anon_sym_DOT] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(207),
  },
  [137] = {
    [anon_sym_false] = ACTIONS(580),
  },
  [138] = {
    [sym_expression] = STATE(119),
    [sym_type] = STATE(121),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(120),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat1] = STATE(121),
    [aux_sym_sequence_repeat1] = STATE(238),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_using] = ACTIONS(145),
    [anon_sym_is] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_DOT_DOT] = ACTIONS(145),
    [anon_sym_DOT_DOT_LT] = ACTIONS(147),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_lt] = ACTIONS(145),
    [anon_sym_lte] = ACTIONS(145),
    [anon_sym_gt] = ACTIONS(145),
    [anon_sym_gte] = ACTIONS(145),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_QMARK_QMARK] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(149),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_RBRACK] = ACTIONS(582),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(159),
  },
  [139] = {
    [sym_group] = STATE(240),
    [aux_sym_top_level_repeat1] = STATE(241),
    [anon_sym_LBRACE] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(217),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(217),
    [sym_number] = ACTIONS(219),
    [anon_sym_true] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(217),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(219),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(584),
    [anon_sym_DOT] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(217),
  },
  [140] = {
    [sym__spec_var_name] = STATE(242),
    [anon_sym_auto_esc] = ACTIONS(586),
    [anon_sym_caller_template_name] = ACTIONS(586),
    [anon_sym_current_template_name] = ACTIONS(586),
    [anon_sym_data_model] = ACTIONS(586),
    [anon_sym_error] = ACTIONS(586),
    [anon_sym_globals] = ACTIONS(586),
    [anon_sym_incompatible_improvements] = ACTIONS(586),
    [anon_sym_lang] = ACTIONS(586),
    [anon_sym_locale] = ACTIONS(588),
    [anon_sym_locale_object] = ACTIONS(586),
    [anon_sym_locals] = ACTIONS(586),
    [anon_sym_main] = ACTIONS(588),
    [anon_sym_main_template_name] = ACTIONS(586),
    [anon_sym_namespace] = ACTIONS(586),
    [anon_sym_node] = ACTIONS(586),
    [anon_sym_now] = ACTIONS(586),
    [anon_sym_output_encoding] = ACTIONS(586),
    [anon_sym_get_optional_template] = ACTIONS(586),
    [anon_sym_pass] = ACTIONS(586),
    [anon_sym_template_name] = ACTIONS(586),
    [anon_sym_url_escaping_charset] = ACTIONS(586),
    [anon_sym_output_format] = ACTIONS(586),
    [anon_sym_vars] = ACTIONS(586),
    [anon_sym_version] = ACTIONS(586),
  },
  [141] = {
    [sym_type] = STATE(243),
    [sym_group] = STATE(136),
    [sym_string] = STATE(136),
    [sym_boolean] = STATE(136),
    [sym_sequence] = STATE(136),
    [sym_hash] = STATE(136),
    [sym_top_level] = STATE(136),
    [sym_spec_var] = STATE(136),
    [aux_sym_as_expression_repeat2] = STATE(243),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_LPAREN] = ACTIONS(241),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(243),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(243),
    [sym_number] = ACTIONS(245),
    [anon_sym_true] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(249),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(251),
    [anon_sym_DOT] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(455),
  },
  [142] = {
    [sym_group] = STATE(124),
    [aux_sym_top_level_repeat1] = STATE(244),
    [anon_sym_LPAREN] = ACTIONS(217),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(221),
    [anon_sym_GT] = ACTIONS(217),
  },
  [143] = {
    [sym_group] = STATE(207),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(459),
  },
  [144] = {
    [sym_group] = STATE(223),
    [aux_sym_top_level_repeat1] = STATE(245),
    [anon_sym_LBRACE] = ACTIONS(494),
    [anon_sym_as] = ACTIONS(496),
    [anon_sym_LPAREN] = ACTIONS(494),
    [anon_sym_using] = ACTIONS(496),
    [anon_sym_is] = ACTIONS(496),
    [anon_sym_COMMA] = ACTIONS(494),
    [anon_sym_DOT_DOT] = ACTIONS(496),
    [anon_sym_DOT_DOT_LT] = ACTIONS(494),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(494),
    [anon_sym_COLON] = ACTIONS(494),
    [anon_sym_STAR] = ACTIONS(494),
    [anon_sym_PLUS] = ACTIONS(494),
    [anon_sym_SLASH] = ACTIONS(494),
    [anon_sym_DASH] = ACTIONS(494),
    [anon_sym_PERCENT] = ACTIONS(494),
    [anon_sym_EQ_EQ] = ACTIONS(494),
    [anon_sym_BANG_EQ] = ACTIONS(494),
    [anon_sym_LT] = ACTIONS(496),
    [anon_sym_LT_EQ] = ACTIONS(494),
    [anon_sym_lt] = ACTIONS(496),
    [anon_sym_lte] = ACTIONS(496),
    [anon_sym_gt] = ACTIONS(496),
    [anon_sym_gte] = ACTIONS(496),
    [anon_sym_BANG] = ACTIONS(496),
    [anon_sym_AMP_AMP] = ACTIONS(494),
    [anon_sym_PIPE_PIPE] = ACTIONS(494),
    [anon_sym_QMARK_QMARK] = ACTIONS(494),
    [anon_sym_EQ] = ACTIONS(496),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(494),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(494),
    [sym_number] = ACTIONS(496),
    [anon_sym_true] = ACTIONS(496),
    [anon_sym_LBRACK] = ACTIONS(494),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(496),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(496),
    [anon_sym_GT] = ACTIONS(494),
  },
  [145] = {
    [sym_case] = STATE(249),
    [sym_default] = STATE(250),
    [sym_switch_middle] = STATE(251),
    [aux_sym_switch_repeat1] = STATE(251),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(590),
    [anon_sym_LT_POUNDcase] = ACTIONS(592),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(594),
  },
  [146] = {
    [sym_type] = STATE(243),
    [sym_group] = STATE(136),
    [sym_string] = STATE(136),
    [sym_boolean] = STATE(136),
    [sym_sequence] = STATE(136),
    [sym_hash] = STATE(136),
    [sym_top_level] = STATE(136),
    [sym_spec_var] = STATE(136),
    [aux_sym_as_expression_repeat2] = STATE(243),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_LPAREN] = ACTIONS(241),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(243),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(243),
    [sym_number] = ACTIONS(245),
    [anon_sym_true] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(249),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(251),
    [anon_sym_DOT] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(502),
  },
  [147] = {
    [sym_type] = STATE(252),
    [sym_group] = STATE(136),
    [sym_string] = STATE(136),
    [sym_boolean] = STATE(136),
    [sym_sequence] = STATE(136),
    [sym_hash] = STATE(136),
    [sym_top_level] = STATE(136),
    [sym_spec_var] = STATE(136),
    [aux_sym_as_expression_repeat2] = STATE(252),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_LPAREN] = ACTIONS(241),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(243),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(243),
    [sym_number] = ACTIONS(245),
    [anon_sym_true] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(249),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(251),
    [anon_sym_DOT] = ACTIONS(253),
  },
  [148] = {
    [sym_type] = STATE(253),
    [sym_group] = STATE(136),
    [sym_string] = STATE(136),
    [sym_boolean] = STATE(136),
    [sym_sequence] = STATE(136),
    [sym_hash] = STATE(136),
    [sym_top_level] = STATE(136),
    [sym_spec_var] = STATE(136),
    [aux_sym_as_expression_repeat2] = STATE(253),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_LPAREN] = ACTIONS(241),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(243),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(243),
    [sym_number] = ACTIONS(245),
    [anon_sym_true] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(249),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(251),
    [anon_sym_DOT] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(502),
  },
  [149] = {
    [sym_type] = STATE(149),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(149),
    [anon_sym_LBRACE] = ACTIONS(506),
    [anon_sym_as] = ACTIONS(509),
    [anon_sym_LPAREN] = ACTIONS(511),
    [anon_sym_using] = ACTIONS(509),
    [anon_sym_is] = ACTIONS(509),
    [anon_sym_COMMA] = ACTIONS(514),
    [anon_sym_DOT_DOT] = ACTIONS(509),
    [anon_sym_DOT_DOT_LT] = ACTIONS(514),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(514),
    [anon_sym_COLON] = ACTIONS(514),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_PLUS] = ACTIONS(514),
    [anon_sym_SLASH] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_PERCENT] = ACTIONS(514),
    [anon_sym_EQ_EQ] = ACTIONS(514),
    [anon_sym_BANG_EQ] = ACTIONS(514),
    [anon_sym_LT] = ACTIONS(509),
    [anon_sym_LT_EQ] = ACTIONS(514),
    [anon_sym_lt] = ACTIONS(509),
    [anon_sym_lte] = ACTIONS(509),
    [anon_sym_gt] = ACTIONS(509),
    [anon_sym_gte] = ACTIONS(509),
    [anon_sym_BANG] = ACTIONS(509),
    [anon_sym_AMP_AMP] = ACTIONS(514),
    [anon_sym_PIPE_PIPE] = ACTIONS(514),
    [anon_sym_QMARK_QMARK] = ACTIONS(514),
    [anon_sym_EQ] = ACTIONS(509),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(516),
    [sym_number] = ACTIONS(519),
    [anon_sym_true] = ACTIONS(522),
    [anon_sym_LBRACK] = ACTIONS(525),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(596),
    [anon_sym_DOT] = ACTIONS(531),
    [anon_sym_GT] = ACTIONS(514),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(599),
    [sym_comment] = ACTIONS(599),
    [anon_sym_DOLLAR] = ACTIONS(599),
    [anon_sym_LT_AT] = ACTIONS(599),
    [anon_sym_LT_POUND] = ACTIONS(601),
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
  [151] = {
    [sym_parameter_group] = STATE(255),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(49),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(48),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(49),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(81),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(85),
    [anon_sym_is] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_DOT_DOT] = ACTIONS(85),
    [anon_sym_DOT_DOT_LT] = ACTIONS(87),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_PERCENT] = ACTIONS(87),
    [anon_sym_EQ_EQ] = ACTIONS(87),
    [anon_sym_BANG_EQ] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_LT_EQ] = ACTIONS(87),
    [anon_sym_lt] = ACTIONS(85),
    [anon_sym_lte] = ACTIONS(85),
    [anon_sym_gt] = ACTIONS(85),
    [anon_sym_gte] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_PIPE_PIPE] = ACTIONS(87),
    [anon_sym_QMARK_QMARK] = ACTIONS(87),
    [anon_sym_EQ] = ACTIONS(85),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(89),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(603),
  },
  [152] = {
    [anon_sym_LT_AT] = ACTIONS(605),
    [anon_sym_LT_POUND] = ACTIONS(607),
    [anon_sym_LT_POUNDif] = ACTIONS(605),
    [anon_sym_LT_POUNDswitch] = ACTIONS(605),
    [anon_sym_LT_POUNDfunction] = ACTIONS(605),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(605),
    [anon_sym_LT_POUNDreturn] = ACTIONS(605),
    [anon_sym_LT_POUNDmacro] = ACTIONS(605),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(605),
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
  [153] = {
    [sym_directive] = STATE(152),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_function_middle] = STATE(257),
    [sym_return] = STATE(152),
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
    [aux_sym_function_repeat1] = STATE(257),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(609),
    [anon_sym_LT_POUNDreturn] = ACTIONS(263),
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
  [154] = {
    [sym_directive] = STATE(152),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_function_middle] = STATE(258),
    [sym_return] = STATE(152),
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
    [aux_sym_function_repeat1] = STATE(258),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(609),
    [anon_sym_LT_POUNDreturn] = ACTIONS(263),
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
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(611),
    [sym_comment] = ACTIONS(611),
    [anon_sym_DOLLAR] = ACTIONS(611),
    [anon_sym_LT_AT] = ACTIONS(611),
    [anon_sym_LT_POUND] = ACTIONS(613),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(611),
    [sym_break] = ACTIONS(611),
    [sym_continue] = ACTIONS(611),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(611),
    [anon_sym_LT_POUNDitems] = ACTIONS(611),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(611),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(611),
    [anon_sym_LT_POUNDif] = ACTIONS(611),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(611),
    [anon_sym_LT_POUNDelseif] = ACTIONS(611),
    [anon_sym_LT_POUNDswitch] = ACTIONS(611),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(611),
    [anon_sym_LT_POUNDcase] = ACTIONS(611),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(611),
    [anon_sym_LT_POUNDfunction] = ACTIONS(611),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(611),
    [anon_sym_LT_POUNDreturn] = ACTIONS(611),
    [anon_sym_LT_POUNDmacro] = ACTIONS(611),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(611),
    [anon_sym_LT_POUNDnested] = ACTIONS(611),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(611),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(611),
    [sym_recover] = ACTIONS(611),
    [sym_fallback] = ACTIONS(611),
    [sym_flush] = ACTIONS(611),
    [anon_sym_LT_POUNDftl] = ACTIONS(611),
    [anon_sym_LT_POUNDimport] = ACTIONS(611),
    [anon_sym_LT_POUNDinclude] = ACTIONS(611),
    [sym_lt] = ACTIONS(611),
    [sym_nt] = ACTIONS(611),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(611),
    [sym_rt] = ACTIONS(611),
    [anon_sym_LT_POUNDsetting] = ACTIONS(611),
    [sym_stop] = ACTIONS(611),
    [sym_t] = ACTIONS(611),
    [anon_sym_LT_POUNDvisit] = ACTIONS(611),
    [anon_sym_LT_POUNDassign] = ACTIONS(611),
    [sym_end_assign] = ACTIONS(611),
    [anon_sym_LT_POUNDglobal] = ACTIONS(611),
    [sym_end_global] = ACTIONS(611),
    [anon_sym_LT_POUNDlocal] = ACTIONS(611),
    [sym_end_local] = ACTIONS(611),
  },
  [156] = {
    [sym_parameter_group] = STATE(260),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(41),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(40),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(41),
    [aux_sym_group_repeat1] = STATE(260),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(615),
  },
  [157] = {
    [anon_sym_LT_AT] = ACTIONS(617),
    [anon_sym_LT_POUND] = ACTIONS(619),
    [anon_sym_LT_POUNDif] = ACTIONS(617),
    [anon_sym_LT_POUNDswitch] = ACTIONS(617),
    [anon_sym_LT_POUNDfunction] = ACTIONS(617),
    [anon_sym_LT_POUNDreturn] = ACTIONS(617),
    [anon_sym_LT_POUNDmacro] = ACTIONS(617),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(617),
    [anon_sym_LT_POUNDnested] = ACTIONS(617),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(617),
    [sym_fallback] = ACTIONS(617),
    [sym_flush] = ACTIONS(617),
    [anon_sym_LT_POUNDftl] = ACTIONS(617),
    [anon_sym_LT_POUNDimport] = ACTIONS(617),
    [anon_sym_LT_POUNDinclude] = ACTIONS(617),
    [sym_lt] = ACTIONS(617),
    [sym_nt] = ACTIONS(617),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(617),
    [sym_rt] = ACTIONS(617),
    [anon_sym_LT_POUNDsetting] = ACTIONS(617),
    [sym_stop] = ACTIONS(617),
    [sym_t] = ACTIONS(617),
    [anon_sym_LT_POUNDvisit] = ACTIONS(617),
    [anon_sym_LT_POUNDassign] = ACTIONS(617),
    [sym_end_assign] = ACTIONS(617),
    [anon_sym_LT_POUNDglobal] = ACTIONS(617),
    [sym_end_global] = ACTIONS(617),
    [anon_sym_LT_POUNDlocal] = ACTIONS(617),
    [sym_end_local] = ACTIONS(617),
  },
  [158] = {
    [sym_directive] = STATE(157),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_return] = STATE(157),
    [sym_macro] = STATE(10),
    [sym_macro_middle] = STATE(262),
    [sym_nested] = STATE(157),
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
    [aux_sym_macro_repeat1] = STATE(262),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDreturn] = ACTIONS(263),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(621),
    [anon_sym_LT_POUNDnested] = ACTIONS(269),
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
  [159] = {
    [sym_directive] = STATE(157),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_return] = STATE(157),
    [sym_macro] = STATE(10),
    [sym_macro_middle] = STATE(263),
    [sym_nested] = STATE(157),
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
    [aux_sym_macro_repeat1] = STATE(263),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDreturn] = ACTIONS(263),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(621),
    [anon_sym_LT_POUNDnested] = ACTIONS(269),
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
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(623),
    [sym_comment] = ACTIONS(623),
    [anon_sym_DOLLAR] = ACTIONS(623),
    [anon_sym_LT_AT] = ACTIONS(623),
    [anon_sym_LT_POUND] = ACTIONS(625),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(623),
    [sym_break] = ACTIONS(623),
    [sym_continue] = ACTIONS(623),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(623),
    [anon_sym_LT_POUNDitems] = ACTIONS(623),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(623),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(623),
    [anon_sym_LT_POUNDif] = ACTIONS(623),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(623),
    [anon_sym_LT_POUNDelseif] = ACTIONS(623),
    [anon_sym_LT_POUNDswitch] = ACTIONS(623),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(623),
    [anon_sym_LT_POUNDcase] = ACTIONS(623),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(623),
    [anon_sym_LT_POUNDfunction] = ACTIONS(623),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(623),
    [anon_sym_LT_POUNDreturn] = ACTIONS(623),
    [anon_sym_LT_POUNDmacro] = ACTIONS(623),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(623),
    [anon_sym_LT_POUNDnested] = ACTIONS(623),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(623),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(623),
    [sym_recover] = ACTIONS(623),
    [sym_fallback] = ACTIONS(623),
    [sym_flush] = ACTIONS(623),
    [anon_sym_LT_POUNDftl] = ACTIONS(623),
    [anon_sym_LT_POUNDimport] = ACTIONS(623),
    [anon_sym_LT_POUNDinclude] = ACTIONS(623),
    [sym_lt] = ACTIONS(623),
    [sym_nt] = ACTIONS(623),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(623),
    [sym_rt] = ACTIONS(623),
    [anon_sym_LT_POUNDsetting] = ACTIONS(623),
    [sym_stop] = ACTIONS(623),
    [sym_t] = ACTIONS(623),
    [anon_sym_LT_POUNDvisit] = ACTIONS(623),
    [anon_sym_LT_POUNDassign] = ACTIONS(623),
    [sym_end_assign] = ACTIONS(623),
    [anon_sym_LT_POUNDglobal] = ACTIONS(623),
    [sym_end_global] = ACTIONS(623),
    [anon_sym_LT_POUNDlocal] = ACTIONS(623),
    [sym_end_local] = ACTIONS(623),
  },
  [161] = {
    [sym_directive] = STATE(55),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_attempt_middle] = STATE(161),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_attempt_repeat1] = STATE(161),
    [anon_sym_LT_AT] = ACTIONS(627),
    [anon_sym_LT_POUND] = ACTIONS(630),
    [anon_sym_LT_POUNDif] = ACTIONS(633),
    [anon_sym_LT_POUNDswitch] = ACTIONS(636),
    [anon_sym_LT_POUNDfunction] = ACTIONS(639),
    [anon_sym_LT_POUNDmacro] = ACTIONS(642),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(645),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(648),
    [sym_recover] = ACTIONS(650),
    [sym_fallback] = ACTIONS(653),
    [sym_flush] = ACTIONS(653),
    [anon_sym_LT_POUNDftl] = ACTIONS(656),
    [anon_sym_LT_POUNDimport] = ACTIONS(659),
    [anon_sym_LT_POUNDinclude] = ACTIONS(662),
    [sym_lt] = ACTIONS(653),
    [sym_nt] = ACTIONS(653),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(665),
    [sym_rt] = ACTIONS(653),
    [anon_sym_LT_POUNDsetting] = ACTIONS(668),
    [sym_stop] = ACTIONS(653),
    [sym_t] = ACTIONS(653),
    [anon_sym_LT_POUNDvisit] = ACTIONS(671),
    [anon_sym_LT_POUNDassign] = ACTIONS(674),
    [sym_end_assign] = ACTIONS(677),
    [anon_sym_LT_POUNDglobal] = ACTIONS(680),
    [sym_end_global] = ACTIONS(683),
    [anon_sym_LT_POUNDlocal] = ACTIONS(686),
    [sym_end_local] = ACTIONS(689),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(692),
    [sym_comment] = ACTIONS(692),
    [anon_sym_DOLLAR] = ACTIONS(692),
    [anon_sym_LT_AT] = ACTIONS(692),
    [anon_sym_LT_POUND] = ACTIONS(694),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(692),
    [sym_break] = ACTIONS(692),
    [sym_continue] = ACTIONS(692),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(692),
    [anon_sym_LT_POUNDitems] = ACTIONS(692),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(692),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(692),
    [anon_sym_LT_POUNDif] = ACTIONS(692),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(692),
    [anon_sym_LT_POUNDelseif] = ACTIONS(692),
    [anon_sym_LT_POUNDswitch] = ACTIONS(692),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(692),
    [anon_sym_LT_POUNDcase] = ACTIONS(692),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(692),
    [anon_sym_LT_POUNDfunction] = ACTIONS(692),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(692),
    [anon_sym_LT_POUNDreturn] = ACTIONS(692),
    [anon_sym_LT_POUNDmacro] = ACTIONS(692),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(692),
    [anon_sym_LT_POUNDnested] = ACTIONS(692),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(692),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(692),
    [sym_recover] = ACTIONS(692),
    [sym_fallback] = ACTIONS(692),
    [sym_flush] = ACTIONS(692),
    [anon_sym_LT_POUNDftl] = ACTIONS(692),
    [anon_sym_LT_POUNDimport] = ACTIONS(692),
    [anon_sym_LT_POUNDinclude] = ACTIONS(692),
    [sym_lt] = ACTIONS(692),
    [sym_nt] = ACTIONS(692),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(692),
    [sym_rt] = ACTIONS(692),
    [anon_sym_LT_POUNDsetting] = ACTIONS(692),
    [sym_stop] = ACTIONS(692),
    [sym_t] = ACTIONS(692),
    [anon_sym_LT_POUNDvisit] = ACTIONS(692),
    [anon_sym_LT_POUNDassign] = ACTIONS(692),
    [sym_end_assign] = ACTIONS(692),
    [anon_sym_LT_POUNDglobal] = ACTIONS(692),
    [sym_end_global] = ACTIONS(692),
    [anon_sym_LT_POUNDlocal] = ACTIONS(692),
    [sym_end_local] = ACTIONS(692),
  },
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(696),
    [sym_comment] = ACTIONS(696),
    [anon_sym_DOLLAR] = ACTIONS(696),
    [anon_sym_LT_AT] = ACTIONS(696),
    [anon_sym_LT_POUND] = ACTIONS(698),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(696),
    [sym_break] = ACTIONS(696),
    [sym_continue] = ACTIONS(696),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(696),
    [anon_sym_LT_POUNDitems] = ACTIONS(696),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(696),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(696),
    [anon_sym_LT_POUNDif] = ACTIONS(696),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(696),
    [anon_sym_LT_POUNDelseif] = ACTIONS(696),
    [anon_sym_LT_POUNDswitch] = ACTIONS(696),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(696),
    [anon_sym_LT_POUNDcase] = ACTIONS(696),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(696),
    [anon_sym_LT_POUNDfunction] = ACTIONS(696),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(696),
    [anon_sym_LT_POUNDreturn] = ACTIONS(696),
    [anon_sym_LT_POUNDmacro] = ACTIONS(696),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(696),
    [anon_sym_LT_POUNDnested] = ACTIONS(696),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(696),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(696),
    [sym_recover] = ACTIONS(696),
    [sym_fallback] = ACTIONS(696),
    [sym_flush] = ACTIONS(696),
    [anon_sym_LT_POUNDftl] = ACTIONS(696),
    [anon_sym_LT_POUNDimport] = ACTIONS(696),
    [anon_sym_LT_POUNDinclude] = ACTIONS(696),
    [sym_lt] = ACTIONS(696),
    [sym_nt] = ACTIONS(696),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(696),
    [sym_rt] = ACTIONS(696),
    [anon_sym_LT_POUNDsetting] = ACTIONS(696),
    [sym_stop] = ACTIONS(696),
    [sym_t] = ACTIONS(696),
    [anon_sym_LT_POUNDvisit] = ACTIONS(696),
    [anon_sym_LT_POUNDassign] = ACTIONS(696),
    [sym_end_assign] = ACTIONS(696),
    [anon_sym_LT_POUNDglobal] = ACTIONS(696),
    [sym_end_global] = ACTIONS(696),
    [anon_sym_LT_POUNDlocal] = ACTIONS(696),
    [sym_end_local] = ACTIONS(696),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(700),
    [sym_comment] = ACTIONS(700),
    [anon_sym_DOLLAR] = ACTIONS(700),
    [anon_sym_LT_AT] = ACTIONS(700),
    [anon_sym_LT_POUND] = ACTIONS(702),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(700),
    [sym_break] = ACTIONS(700),
    [sym_continue] = ACTIONS(700),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(700),
    [anon_sym_LT_POUNDitems] = ACTIONS(700),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(700),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(700),
    [anon_sym_LT_POUNDif] = ACTIONS(700),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(700),
    [anon_sym_LT_POUNDelseif] = ACTIONS(700),
    [anon_sym_LT_POUNDswitch] = ACTIONS(700),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(700),
    [anon_sym_LT_POUNDcase] = ACTIONS(700),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(700),
    [anon_sym_LT_POUNDfunction] = ACTIONS(700),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(700),
    [anon_sym_LT_POUNDreturn] = ACTIONS(700),
    [anon_sym_LT_POUNDmacro] = ACTIONS(700),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(700),
    [anon_sym_LT_POUNDnested] = ACTIONS(700),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(700),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(700),
    [sym_recover] = ACTIONS(700),
    [sym_fallback] = ACTIONS(700),
    [sym_flush] = ACTIONS(700),
    [anon_sym_LT_POUNDftl] = ACTIONS(700),
    [anon_sym_LT_POUNDimport] = ACTIONS(700),
    [anon_sym_LT_POUNDinclude] = ACTIONS(700),
    [sym_lt] = ACTIONS(700),
    [sym_nt] = ACTIONS(700),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(700),
    [sym_rt] = ACTIONS(700),
    [anon_sym_LT_POUNDsetting] = ACTIONS(700),
    [sym_stop] = ACTIONS(700),
    [sym_t] = ACTIONS(700),
    [anon_sym_LT_POUNDvisit] = ACTIONS(700),
    [anon_sym_LT_POUNDassign] = ACTIONS(700),
    [sym_end_assign] = ACTIONS(700),
    [anon_sym_LT_POUNDglobal] = ACTIONS(700),
    [sym_end_global] = ACTIONS(700),
    [anon_sym_LT_POUNDlocal] = ACTIONS(700),
    [sym_end_local] = ACTIONS(700),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(704),
    [sym_comment] = ACTIONS(704),
    [anon_sym_DOLLAR] = ACTIONS(704),
    [anon_sym_LT_AT] = ACTIONS(704),
    [anon_sym_LT_POUND] = ACTIONS(706),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(704),
    [sym_break] = ACTIONS(704),
    [sym_continue] = ACTIONS(704),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(704),
    [anon_sym_LT_POUNDitems] = ACTIONS(704),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(704),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(704),
    [anon_sym_LT_POUNDif] = ACTIONS(704),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(704),
    [anon_sym_LT_POUNDelseif] = ACTIONS(704),
    [anon_sym_LT_POUNDswitch] = ACTIONS(704),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(704),
    [anon_sym_LT_POUNDcase] = ACTIONS(704),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(704),
    [anon_sym_LT_POUNDfunction] = ACTIONS(704),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(704),
    [anon_sym_LT_POUNDreturn] = ACTIONS(704),
    [anon_sym_LT_POUNDmacro] = ACTIONS(704),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(704),
    [anon_sym_LT_POUNDnested] = ACTIONS(704),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(704),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(704),
    [sym_recover] = ACTIONS(704),
    [sym_fallback] = ACTIONS(704),
    [sym_flush] = ACTIONS(704),
    [anon_sym_LT_POUNDftl] = ACTIONS(704),
    [anon_sym_LT_POUNDimport] = ACTIONS(704),
    [anon_sym_LT_POUNDinclude] = ACTIONS(704),
    [sym_lt] = ACTIONS(704),
    [sym_nt] = ACTIONS(704),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(704),
    [sym_rt] = ACTIONS(704),
    [anon_sym_LT_POUNDsetting] = ACTIONS(704),
    [sym_stop] = ACTIONS(704),
    [sym_t] = ACTIONS(704),
    [anon_sym_LT_POUNDvisit] = ACTIONS(704),
    [anon_sym_LT_POUNDassign] = ACTIONS(704),
    [sym_end_assign] = ACTIONS(704),
    [anon_sym_LT_POUNDglobal] = ACTIONS(704),
    [sym_end_global] = ACTIONS(704),
    [anon_sym_LT_POUNDlocal] = ACTIONS(704),
    [sym_end_local] = ACTIONS(704),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(708),
    [sym_comment] = ACTIONS(708),
    [anon_sym_DOLLAR] = ACTIONS(708),
    [anon_sym_LT_AT] = ACTIONS(708),
    [anon_sym_LT_POUND] = ACTIONS(710),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(708),
    [sym_break] = ACTIONS(708),
    [sym_continue] = ACTIONS(708),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(708),
    [anon_sym_LT_POUNDitems] = ACTIONS(708),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(708),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(708),
    [anon_sym_LT_POUNDif] = ACTIONS(708),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(708),
    [anon_sym_LT_POUNDelseif] = ACTIONS(708),
    [anon_sym_LT_POUNDswitch] = ACTIONS(708),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(708),
    [anon_sym_LT_POUNDcase] = ACTIONS(708),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(708),
    [anon_sym_LT_POUNDfunction] = ACTIONS(708),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(708),
    [anon_sym_LT_POUNDreturn] = ACTIONS(708),
    [anon_sym_LT_POUNDmacro] = ACTIONS(708),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(708),
    [anon_sym_LT_POUNDnested] = ACTIONS(708),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(708),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(708),
    [sym_recover] = ACTIONS(708),
    [sym_fallback] = ACTIONS(708),
    [sym_flush] = ACTIONS(708),
    [anon_sym_LT_POUNDftl] = ACTIONS(708),
    [anon_sym_LT_POUNDimport] = ACTIONS(708),
    [anon_sym_LT_POUNDinclude] = ACTIONS(708),
    [sym_lt] = ACTIONS(708),
    [sym_nt] = ACTIONS(708),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(708),
    [sym_rt] = ACTIONS(708),
    [anon_sym_LT_POUNDsetting] = ACTIONS(708),
    [sym_stop] = ACTIONS(708),
    [sym_t] = ACTIONS(708),
    [anon_sym_LT_POUNDvisit] = ACTIONS(708),
    [anon_sym_LT_POUNDassign] = ACTIONS(708),
    [sym_end_assign] = ACTIONS(708),
    [anon_sym_LT_POUNDglobal] = ACTIONS(708),
    [sym_end_global] = ACTIONS(708),
    [anon_sym_LT_POUNDlocal] = ACTIONS(708),
    [sym_end_local] = ACTIONS(708),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(712),
    [sym_comment] = ACTIONS(712),
    [anon_sym_DOLLAR] = ACTIONS(712),
    [anon_sym_LT_AT] = ACTIONS(712),
    [anon_sym_LT_POUND] = ACTIONS(714),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(712),
    [sym_break] = ACTIONS(712),
    [sym_continue] = ACTIONS(712),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(712),
    [anon_sym_LT_POUNDitems] = ACTIONS(712),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(712),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(712),
    [anon_sym_LT_POUNDif] = ACTIONS(712),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(712),
    [anon_sym_LT_POUNDelseif] = ACTIONS(712),
    [anon_sym_LT_POUNDswitch] = ACTIONS(712),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(712),
    [anon_sym_LT_POUNDcase] = ACTIONS(712),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(712),
    [anon_sym_LT_POUNDfunction] = ACTIONS(712),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(712),
    [anon_sym_LT_POUNDreturn] = ACTIONS(712),
    [anon_sym_LT_POUNDmacro] = ACTIONS(712),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(712),
    [anon_sym_LT_POUNDnested] = ACTIONS(712),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(712),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(712),
    [sym_recover] = ACTIONS(712),
    [sym_fallback] = ACTIONS(712),
    [sym_flush] = ACTIONS(712),
    [anon_sym_LT_POUNDftl] = ACTIONS(712),
    [anon_sym_LT_POUNDimport] = ACTIONS(712),
    [anon_sym_LT_POUNDinclude] = ACTIONS(712),
    [sym_lt] = ACTIONS(712),
    [sym_nt] = ACTIONS(712),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(712),
    [sym_rt] = ACTIONS(712),
    [anon_sym_LT_POUNDsetting] = ACTIONS(712),
    [sym_stop] = ACTIONS(712),
    [sym_t] = ACTIONS(712),
    [anon_sym_LT_POUNDvisit] = ACTIONS(712),
    [anon_sym_LT_POUNDassign] = ACTIONS(712),
    [sym_end_assign] = ACTIONS(712),
    [anon_sym_LT_POUNDglobal] = ACTIONS(712),
    [sym_end_global] = ACTIONS(712),
    [anon_sym_LT_POUNDlocal] = ACTIONS(712),
    [sym_end_local] = ACTIONS(712),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(716),
    [sym_comment] = ACTIONS(716),
    [anon_sym_DOLLAR] = ACTIONS(716),
    [anon_sym_LT_AT] = ACTIONS(716),
    [anon_sym_LT_POUND] = ACTIONS(718),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(716),
    [sym_break] = ACTIONS(716),
    [sym_continue] = ACTIONS(716),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(716),
    [anon_sym_LT_POUNDitems] = ACTIONS(716),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(716),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(716),
    [anon_sym_LT_POUNDif] = ACTIONS(716),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(716),
    [anon_sym_LT_POUNDelseif] = ACTIONS(716),
    [anon_sym_LT_POUNDswitch] = ACTIONS(716),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(716),
    [anon_sym_LT_POUNDcase] = ACTIONS(716),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(716),
    [anon_sym_LT_POUNDfunction] = ACTIONS(716),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(716),
    [anon_sym_LT_POUNDreturn] = ACTIONS(716),
    [anon_sym_LT_POUNDmacro] = ACTIONS(716),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(716),
    [anon_sym_LT_POUNDnested] = ACTIONS(716),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(716),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(716),
    [sym_recover] = ACTIONS(716),
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
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(720),
    [sym_comment] = ACTIONS(720),
    [anon_sym_DOLLAR] = ACTIONS(720),
    [anon_sym_LT_AT] = ACTIONS(720),
    [anon_sym_LT_POUND] = ACTIONS(722),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(720),
    [sym_break] = ACTIONS(720),
    [sym_continue] = ACTIONS(720),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(720),
    [anon_sym_LT_POUNDitems] = ACTIONS(720),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(720),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(720),
    [anon_sym_LT_POUNDif] = ACTIONS(720),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(720),
    [anon_sym_LT_POUNDelseif] = ACTIONS(720),
    [anon_sym_LT_POUNDswitch] = ACTIONS(720),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(720),
    [anon_sym_LT_POUNDcase] = ACTIONS(720),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(720),
    [anon_sym_LT_POUNDfunction] = ACTIONS(720),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(720),
    [anon_sym_LT_POUNDreturn] = ACTIONS(720),
    [anon_sym_LT_POUNDmacro] = ACTIONS(720),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(720),
    [anon_sym_LT_POUNDnested] = ACTIONS(720),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(720),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(720),
    [sym_recover] = ACTIONS(720),
    [sym_fallback] = ACTIONS(720),
    [sym_flush] = ACTIONS(720),
    [anon_sym_LT_POUNDftl] = ACTIONS(720),
    [anon_sym_LT_POUNDimport] = ACTIONS(720),
    [anon_sym_LT_POUNDinclude] = ACTIONS(720),
    [sym_lt] = ACTIONS(720),
    [sym_nt] = ACTIONS(720),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(720),
    [sym_rt] = ACTIONS(720),
    [anon_sym_LT_POUNDsetting] = ACTIONS(720),
    [sym_stop] = ACTIONS(720),
    [sym_t] = ACTIONS(720),
    [anon_sym_LT_POUNDvisit] = ACTIONS(720),
    [anon_sym_LT_POUNDassign] = ACTIONS(720),
    [sym_end_assign] = ACTIONS(720),
    [anon_sym_LT_POUNDglobal] = ACTIONS(720),
    [sym_end_global] = ACTIONS(720),
    [anon_sym_LT_POUNDlocal] = ACTIONS(720),
    [sym_end_local] = ACTIONS(720),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(724),
    [sym_comment] = ACTIONS(724),
    [anon_sym_DOLLAR] = ACTIONS(724),
    [anon_sym_LT_AT] = ACTIONS(724),
    [anon_sym_LT_POUND] = ACTIONS(726),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(724),
    [sym_break] = ACTIONS(724),
    [sym_continue] = ACTIONS(724),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(724),
    [anon_sym_LT_POUNDitems] = ACTIONS(724),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(724),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(724),
    [anon_sym_LT_POUNDif] = ACTIONS(724),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(724),
    [anon_sym_LT_POUNDelseif] = ACTIONS(724),
    [anon_sym_LT_POUNDswitch] = ACTIONS(724),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(724),
    [anon_sym_LT_POUNDcase] = ACTIONS(724),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(724),
    [anon_sym_LT_POUNDfunction] = ACTIONS(724),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(724),
    [anon_sym_LT_POUNDreturn] = ACTIONS(724),
    [anon_sym_LT_POUNDmacro] = ACTIONS(724),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(724),
    [anon_sym_LT_POUNDnested] = ACTIONS(724),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(724),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(724),
    [sym_recover] = ACTIONS(724),
    [sym_fallback] = ACTIONS(724),
    [sym_flush] = ACTIONS(724),
    [anon_sym_LT_POUNDftl] = ACTIONS(724),
    [anon_sym_LT_POUNDimport] = ACTIONS(724),
    [anon_sym_LT_POUNDinclude] = ACTIONS(724),
    [sym_lt] = ACTIONS(724),
    [sym_nt] = ACTIONS(724),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(724),
    [sym_rt] = ACTIONS(724),
    [anon_sym_LT_POUNDsetting] = ACTIONS(724),
    [sym_stop] = ACTIONS(724),
    [sym_t] = ACTIONS(724),
    [anon_sym_LT_POUNDvisit] = ACTIONS(724),
    [anon_sym_LT_POUNDassign] = ACTIONS(724),
    [sym_end_assign] = ACTIONS(724),
    [anon_sym_LT_POUNDglobal] = ACTIONS(724),
    [sym_end_global] = ACTIONS(724),
    [anon_sym_LT_POUNDlocal] = ACTIONS(724),
    [sym_end_local] = ACTIONS(724),
  },
  [171] = {
    [anon_sym_LBRACE] = ACTIONS(449),
    [anon_sym_RBRACE] = ACTIONS(449),
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_using] = ACTIONS(451),
    [anon_sym_is] = ACTIONS(451),
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
  [172] = {
    [sym_expression] = STATE(183),
    [sym_type] = STATE(88),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(86),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_interpolation_repeat1] = STATE(183),
    [aux_sym_as_expression_repeat1] = STATE(88),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(728),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_using] = ACTIONS(145),
    [anon_sym_is] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_DOT_DOT] = ACTIONS(145),
    [anon_sym_DOT_DOT_LT] = ACTIONS(147),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_lt] = ACTIONS(145),
    [anon_sym_lte] = ACTIONS(145),
    [anon_sym_gt] = ACTIONS(145),
    [anon_sym_gte] = ACTIONS(145),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_QMARK_QMARK] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(149),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(157),
    [anon_sym_DOT] = ACTIONS(159),
  },
  [173] = {
    [sym_parameter_group] = STATE(215),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(114),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(113),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(114),
    [aux_sym_group_repeat1] = STATE(215),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(193),
    [anon_sym_QMARK] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(730),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(79),
  },
  [174] = {
    [anon_sym_LBRACE] = ACTIONS(469),
    [anon_sym_RBRACE] = ACTIONS(469),
    [anon_sym_LPAREN] = ACTIONS(469),
    [anon_sym_using] = ACTIONS(471),
    [anon_sym_is] = ACTIONS(471),
    [anon_sym_COMMA] = ACTIONS(469),
    [anon_sym_DOT_DOT] = ACTIONS(471),
    [anon_sym_DOT_DOT_LT] = ACTIONS(469),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(469),
    [anon_sym_COLON] = ACTIONS(469),
    [anon_sym_STAR] = ACTIONS(469),
    [anon_sym_PLUS] = ACTIONS(469),
    [anon_sym_SLASH] = ACTIONS(469),
    [anon_sym_DASH] = ACTIONS(469),
    [anon_sym_PERCENT] = ACTIONS(469),
    [anon_sym_EQ_EQ] = ACTIONS(469),
    [anon_sym_BANG_EQ] = ACTIONS(469),
    [anon_sym_LT] = ACTIONS(471),
    [anon_sym_LT_EQ] = ACTIONS(469),
    [anon_sym_lt] = ACTIONS(471),
    [anon_sym_lte] = ACTIONS(471),
    [anon_sym_gt] = ACTIONS(471),
    [anon_sym_gte] = ACTIONS(471),
    [anon_sym_BANG] = ACTIONS(471),
    [anon_sym_AMP_AMP] = ACTIONS(469),
    [anon_sym_PIPE_PIPE] = ACTIONS(469),
    [anon_sym_QMARK_QMARK] = ACTIONS(469),
    [anon_sym_EQ] = ACTIONS(471),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(469),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(469),
    [sym_number] = ACTIONS(471),
    [anon_sym_true] = ACTIONS(471),
    [anon_sym_LBRACK] = ACTIONS(469),
    [anon_sym_RBRACK] = ACTIONS(469),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(471),
    [anon_sym_DOT] = ACTIONS(471),
  },
  [175] = {
    [anon_sym_LBRACE] = ACTIONS(473),
    [anon_sym_RBRACE] = ACTIONS(473),
    [anon_sym_LPAREN] = ACTIONS(473),
    [anon_sym_using] = ACTIONS(475),
    [anon_sym_is] = ACTIONS(475),
    [anon_sym_COMMA] = ACTIONS(473),
    [anon_sym_DOT_DOT] = ACTIONS(475),
    [anon_sym_DOT_DOT_LT] = ACTIONS(473),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(473),
    [anon_sym_COLON] = ACTIONS(473),
    [anon_sym_STAR] = ACTIONS(473),
    [anon_sym_PLUS] = ACTIONS(473),
    [anon_sym_SLASH] = ACTIONS(473),
    [anon_sym_DASH] = ACTIONS(473),
    [anon_sym_PERCENT] = ACTIONS(473),
    [anon_sym_EQ_EQ] = ACTIONS(473),
    [anon_sym_BANG_EQ] = ACTIONS(473),
    [anon_sym_LT] = ACTIONS(475),
    [anon_sym_LT_EQ] = ACTIONS(473),
    [anon_sym_lt] = ACTIONS(475),
    [anon_sym_lte] = ACTIONS(475),
    [anon_sym_gt] = ACTIONS(475),
    [anon_sym_gte] = ACTIONS(475),
    [anon_sym_BANG] = ACTIONS(475),
    [anon_sym_AMP_AMP] = ACTIONS(473),
    [anon_sym_PIPE_PIPE] = ACTIONS(473),
    [anon_sym_QMARK_QMARK] = ACTIONS(473),
    [anon_sym_EQ] = ACTIONS(475),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(473),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(473),
    [sym_number] = ACTIONS(475),
    [anon_sym_true] = ACTIONS(475),
    [anon_sym_LBRACK] = ACTIONS(473),
    [anon_sym_RBRACK] = ACTIONS(473),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(475),
    [anon_sym_DOT] = ACTIONS(475),
  },
  [176] = {
    [sym_expression] = STATE(119),
    [sym_type] = STATE(121),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(120),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat1] = STATE(121),
    [aux_sym_sequence_repeat1] = STATE(222),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_using] = ACTIONS(145),
    [anon_sym_is] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_DOT_DOT] = ACTIONS(145),
    [anon_sym_DOT_DOT_LT] = ACTIONS(147),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_lt] = ACTIONS(145),
    [anon_sym_lte] = ACTIONS(145),
    [anon_sym_gt] = ACTIONS(145),
    [anon_sym_gte] = ACTIONS(145),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_QMARK_QMARK] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(149),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_RBRACK] = ACTIONS(732),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(159),
  },
  [177] = {
    [anon_sym_LBRACE] = ACTIONS(486),
    [anon_sym_RBRACE] = ACTIONS(486),
    [anon_sym_LPAREN] = ACTIONS(486),
    [anon_sym_using] = ACTIONS(488),
    [anon_sym_is] = ACTIONS(488),
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
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(486),
    [anon_sym_DOT] = ACTIONS(488),
  },
  [178] = {
    [anon_sym_LBRACE] = ACTIONS(490),
    [anon_sym_RBRACE] = ACTIONS(490),
    [anon_sym_LPAREN] = ACTIONS(490),
    [anon_sym_using] = ACTIONS(492),
    [anon_sym_is] = ACTIONS(492),
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
  [179] = {
    [sym_group] = STATE(267),
    [aux_sym_top_level_repeat1] = STATE(268),
    [anon_sym_LBRACE] = ACTIONS(494),
    [anon_sym_RBRACE] = ACTIONS(494),
    [anon_sym_LPAREN] = ACTIONS(494),
    [anon_sym_using] = ACTIONS(496),
    [anon_sym_is] = ACTIONS(496),
    [anon_sym_COMMA] = ACTIONS(494),
    [anon_sym_DOT_DOT] = ACTIONS(496),
    [anon_sym_DOT_DOT_LT] = ACTIONS(494),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(494),
    [anon_sym_COLON] = ACTIONS(494),
    [anon_sym_STAR] = ACTIONS(494),
    [anon_sym_PLUS] = ACTIONS(494),
    [anon_sym_SLASH] = ACTIONS(494),
    [anon_sym_DASH] = ACTIONS(494),
    [anon_sym_PERCENT] = ACTIONS(494),
    [anon_sym_EQ_EQ] = ACTIONS(494),
    [anon_sym_BANG_EQ] = ACTIONS(494),
    [anon_sym_LT] = ACTIONS(496),
    [anon_sym_LT_EQ] = ACTIONS(494),
    [anon_sym_lt] = ACTIONS(496),
    [anon_sym_lte] = ACTIONS(496),
    [anon_sym_gt] = ACTIONS(496),
    [anon_sym_gte] = ACTIONS(496),
    [anon_sym_BANG] = ACTIONS(496),
    [anon_sym_AMP_AMP] = ACTIONS(494),
    [anon_sym_PIPE_PIPE] = ACTIONS(494),
    [anon_sym_QMARK_QMARK] = ACTIONS(494),
    [anon_sym_EQ] = ACTIONS(496),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(494),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(494),
    [sym_number] = ACTIONS(496),
    [anon_sym_true] = ACTIONS(496),
    [anon_sym_LBRACK] = ACTIONS(494),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(496),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(415),
    [anon_sym_DOT] = ACTIONS(496),
  },
  [180] = {
    [anon_sym_LBRACE] = ACTIONS(498),
    [anon_sym_RBRACE] = ACTIONS(498),
    [anon_sym_LPAREN] = ACTIONS(498),
    [anon_sym_using] = ACTIONS(500),
    [anon_sym_is] = ACTIONS(500),
    [anon_sym_COMMA] = ACTIONS(498),
    [anon_sym_DOT_DOT] = ACTIONS(500),
    [anon_sym_DOT_DOT_LT] = ACTIONS(498),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(498),
    [anon_sym_COLON] = ACTIONS(498),
    [anon_sym_STAR] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(498),
    [anon_sym_SLASH] = ACTIONS(498),
    [anon_sym_DASH] = ACTIONS(498),
    [anon_sym_PERCENT] = ACTIONS(498),
    [anon_sym_EQ_EQ] = ACTIONS(498),
    [anon_sym_BANG_EQ] = ACTIONS(498),
    [anon_sym_LT] = ACTIONS(500),
    [anon_sym_LT_EQ] = ACTIONS(498),
    [anon_sym_lt] = ACTIONS(500),
    [anon_sym_lte] = ACTIONS(500),
    [anon_sym_gt] = ACTIONS(500),
    [anon_sym_gte] = ACTIONS(500),
    [anon_sym_BANG] = ACTIONS(500),
    [anon_sym_AMP_AMP] = ACTIONS(498),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_QMARK_QMARK] = ACTIONS(498),
    [anon_sym_EQ] = ACTIONS(500),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(498),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(498),
    [sym_number] = ACTIONS(500),
    [anon_sym_true] = ACTIONS(500),
    [anon_sym_LBRACK] = ACTIONS(498),
    [anon_sym_RBRACK] = ACTIONS(498),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(500),
    [anon_sym_DOT] = ACTIONS(500),
  },
  [181] = {
    [sym_type] = STATE(269),
    [sym_group] = STATE(81),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat2] = STATE(269),
    [anon_sym_LBRACE] = ACTIONS(502),
    [anon_sym_RBRACE] = ACTIONS(502),
    [anon_sym_LPAREN] = ACTIONS(502),
    [anon_sym_using] = ACTIONS(504),
    [anon_sym_is] = ACTIONS(504),
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_DOT_DOT] = ACTIONS(504),
    [anon_sym_DOT_DOT_LT] = ACTIONS(502),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(502),
    [anon_sym_COLON] = ACTIONS(502),
    [anon_sym_STAR] = ACTIONS(502),
    [anon_sym_PLUS] = ACTIONS(502),
    [anon_sym_SLASH] = ACTIONS(502),
    [anon_sym_DASH] = ACTIONS(502),
    [anon_sym_PERCENT] = ACTIONS(502),
    [anon_sym_EQ_EQ] = ACTIONS(502),
    [anon_sym_BANG_EQ] = ACTIONS(502),
    [anon_sym_LT] = ACTIONS(504),
    [anon_sym_LT_EQ] = ACTIONS(502),
    [anon_sym_lt] = ACTIONS(504),
    [anon_sym_lte] = ACTIONS(504),
    [anon_sym_gt] = ACTIONS(504),
    [anon_sym_gte] = ACTIONS(504),
    [anon_sym_BANG] = ACTIONS(504),
    [anon_sym_AMP_AMP] = ACTIONS(502),
    [anon_sym_PIPE_PIPE] = ACTIONS(502),
    [anon_sym_QMARK_QMARK] = ACTIONS(502),
    [anon_sym_EQ] = ACTIONS(504),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(502),
    [sym_number] = ACTIONS(504),
    [anon_sym_true] = ACTIONS(504),
    [anon_sym_LBRACK] = ACTIONS(502),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(504),
    [anon_sym_DOT] = ACTIONS(504),
  },
  [182] = {
    [ts_builtin_sym_end] = ACTIONS(734),
    [sym_comment] = ACTIONS(734),
    [anon_sym_DOLLAR] = ACTIONS(734),
    [anon_sym_LT_AT] = ACTIONS(734),
    [anon_sym_LT_POUND] = ACTIONS(736),
    [anon_sym_LT_POUNDif] = ACTIONS(734),
    [anon_sym_LT_POUNDswitch] = ACTIONS(734),
    [anon_sym_LT_POUNDfunction] = ACTIONS(734),
    [anon_sym_LT_POUNDmacro] = ACTIONS(734),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(734),
    [sym_fallback] = ACTIONS(734),
    [sym_flush] = ACTIONS(734),
    [anon_sym_LT_POUNDftl] = ACTIONS(734),
    [anon_sym_LT_POUNDimport] = ACTIONS(734),
    [anon_sym_LT_POUNDinclude] = ACTIONS(734),
    [sym_lt] = ACTIONS(734),
    [sym_nt] = ACTIONS(734),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(734),
    [sym_rt] = ACTIONS(734),
    [anon_sym_LT_POUNDsetting] = ACTIONS(734),
    [sym_stop] = ACTIONS(734),
    [sym_t] = ACTIONS(734),
    [anon_sym_LT_POUNDvisit] = ACTIONS(734),
    [anon_sym_LT_POUNDassign] = ACTIONS(734),
    [sym_end_assign] = ACTIONS(734),
    [anon_sym_LT_POUNDglobal] = ACTIONS(734),
    [sym_end_global] = ACTIONS(734),
    [anon_sym_LT_POUNDlocal] = ACTIONS(734),
    [sym_end_local] = ACTIONS(734),
  },
  [183] = {
    [sym_expression] = STATE(183),
    [sym_type] = STATE(88),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(86),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_interpolation_repeat1] = STATE(183),
    [aux_sym_as_expression_repeat1] = STATE(88),
    [anon_sym_LBRACE] = ACTIONS(738),
    [anon_sym_RBRACE] = ACTIONS(741),
    [anon_sym_LPAREN] = ACTIONS(743),
    [anon_sym_using] = ACTIONS(746),
    [anon_sym_is] = ACTIONS(746),
    [anon_sym_COMMA] = ACTIONS(749),
    [anon_sym_DOT_DOT] = ACTIONS(746),
    [anon_sym_DOT_DOT_LT] = ACTIONS(749),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(749),
    [anon_sym_COLON] = ACTIONS(749),
    [anon_sym_STAR] = ACTIONS(749),
    [anon_sym_PLUS] = ACTIONS(749),
    [anon_sym_SLASH] = ACTIONS(749),
    [anon_sym_DASH] = ACTIONS(749),
    [anon_sym_PERCENT] = ACTIONS(749),
    [anon_sym_EQ_EQ] = ACTIONS(749),
    [anon_sym_BANG_EQ] = ACTIONS(749),
    [anon_sym_LT] = ACTIONS(746),
    [anon_sym_LT_EQ] = ACTIONS(749),
    [anon_sym_lt] = ACTIONS(746),
    [anon_sym_lte] = ACTIONS(746),
    [anon_sym_gt] = ACTIONS(746),
    [anon_sym_gte] = ACTIONS(746),
    [anon_sym_BANG] = ACTIONS(746),
    [anon_sym_AMP_AMP] = ACTIONS(749),
    [anon_sym_PIPE_PIPE] = ACTIONS(749),
    [anon_sym_QMARK_QMARK] = ACTIONS(749),
    [anon_sym_EQ] = ACTIONS(746),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(752),
    [sym_number] = ACTIONS(755),
    [anon_sym_true] = ACTIONS(758),
    [anon_sym_LBRACK] = ACTIONS(761),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(764),
    [anon_sym_DOT] = ACTIONS(767),
  },
  [184] = {
    [sym_type] = STATE(270),
    [sym_group] = STATE(81),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat2] = STATE(270),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(502),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_using] = ACTIONS(504),
    [anon_sym_is] = ACTIONS(504),
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_DOT_DOT] = ACTIONS(504),
    [anon_sym_DOT_DOT_LT] = ACTIONS(502),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(502),
    [anon_sym_COLON] = ACTIONS(502),
    [anon_sym_STAR] = ACTIONS(502),
    [anon_sym_PLUS] = ACTIONS(502),
    [anon_sym_SLASH] = ACTIONS(502),
    [anon_sym_DASH] = ACTIONS(502),
    [anon_sym_PERCENT] = ACTIONS(502),
    [anon_sym_EQ_EQ] = ACTIONS(502),
    [anon_sym_BANG_EQ] = ACTIONS(502),
    [anon_sym_LT] = ACTIONS(504),
    [anon_sym_LT_EQ] = ACTIONS(502),
    [anon_sym_lt] = ACTIONS(504),
    [anon_sym_lte] = ACTIONS(504),
    [anon_sym_gt] = ACTIONS(504),
    [anon_sym_gte] = ACTIONS(504),
    [anon_sym_BANG] = ACTIONS(504),
    [anon_sym_AMP_AMP] = ACTIONS(502),
    [anon_sym_PIPE_PIPE] = ACTIONS(502),
    [anon_sym_QMARK_QMARK] = ACTIONS(502),
    [anon_sym_EQ] = ACTIONS(504),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(149),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(157),
    [anon_sym_DOT] = ACTIONS(159),
  },
  [185] = {
    [sym_type] = STATE(185),
    [sym_group] = STATE(81),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat1] = STATE(185),
    [anon_sym_LBRACE] = ACTIONS(770),
    [anon_sym_RBRACE] = ACTIONS(514),
    [anon_sym_LPAREN] = ACTIONS(773),
    [anon_sym_using] = ACTIONS(509),
    [anon_sym_is] = ACTIONS(509),
    [anon_sym_COMMA] = ACTIONS(514),
    [anon_sym_DOT_DOT] = ACTIONS(509),
    [anon_sym_DOT_DOT_LT] = ACTIONS(514),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(514),
    [anon_sym_COLON] = ACTIONS(514),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_PLUS] = ACTIONS(514),
    [anon_sym_SLASH] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_PERCENT] = ACTIONS(514),
    [anon_sym_EQ_EQ] = ACTIONS(514),
    [anon_sym_BANG_EQ] = ACTIONS(514),
    [anon_sym_LT] = ACTIONS(509),
    [anon_sym_LT_EQ] = ACTIONS(514),
    [anon_sym_lt] = ACTIONS(509),
    [anon_sym_lte] = ACTIONS(509),
    [anon_sym_gt] = ACTIONS(509),
    [anon_sym_gte] = ACTIONS(509),
    [anon_sym_BANG] = ACTIONS(509),
    [anon_sym_AMP_AMP] = ACTIONS(514),
    [anon_sym_PIPE_PIPE] = ACTIONS(514),
    [anon_sym_QMARK_QMARK] = ACTIONS(514),
    [anon_sym_EQ] = ACTIONS(509),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(776),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(776),
    [sym_number] = ACTIONS(779),
    [anon_sym_true] = ACTIONS(782),
    [anon_sym_LBRACK] = ACTIONS(785),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(788),
    [anon_sym_DOT] = ACTIONS(791),
  },
  [186] = {
    [anon_sym_LBRACE] = ACTIONS(449),
    [anon_sym_as] = ACTIONS(451),
    [anon_sym_QMARK] = ACTIONS(451),
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_using] = ACTIONS(451),
    [anon_sym_is] = ACTIONS(451),
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
    [anon_sym_GT] = ACTIONS(449),
    [anon_sym_SLASH_GT] = ACTIONS(449),
  },
  [187] = {
    [sym_expression] = STATE(183),
    [sym_type] = STATE(88),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(86),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_interpolation_repeat1] = STATE(183),
    [aux_sym_as_expression_repeat1] = STATE(88),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(794),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_using] = ACTIONS(145),
    [anon_sym_is] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_DOT_DOT] = ACTIONS(145),
    [anon_sym_DOT_DOT_LT] = ACTIONS(147),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_lt] = ACTIONS(145),
    [anon_sym_lte] = ACTIONS(145),
    [anon_sym_gt] = ACTIONS(145),
    [anon_sym_gte] = ACTIONS(145),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_QMARK_QMARK] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(149),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(157),
    [anon_sym_DOT] = ACTIONS(159),
  },
  [188] = {
    [sym_type] = STATE(272),
    [sym_group] = STATE(95),
    [sym_string] = STATE(95),
    [sym_boolean] = STATE(95),
    [sym_sequence] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_top_level] = STATE(95),
    [sym_spec_var] = STATE(95),
    [aux_sym_as_expression_repeat2] = STATE(272),
    [anon_sym_LBRACE] = ACTIONS(455),
    [anon_sym_as] = ACTIONS(457),
    [anon_sym_QMARK] = ACTIONS(457),
    [anon_sym_LPAREN] = ACTIONS(455),
    [anon_sym_using] = ACTIONS(457),
    [anon_sym_is] = ACTIONS(457),
    [anon_sym_COMMA] = ACTIONS(455),
    [anon_sym_DOT_DOT] = ACTIONS(457),
    [anon_sym_DOT_DOT_LT] = ACTIONS(455),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(455),
    [anon_sym_COLON] = ACTIONS(455),
    [anon_sym_STAR] = ACTIONS(455),
    [anon_sym_PLUS] = ACTIONS(455),
    [anon_sym_SLASH] = ACTIONS(457),
    [anon_sym_DASH] = ACTIONS(455),
    [anon_sym_PERCENT] = ACTIONS(455),
    [anon_sym_EQ_EQ] = ACTIONS(455),
    [anon_sym_BANG_EQ] = ACTIONS(455),
    [anon_sym_LT] = ACTIONS(457),
    [anon_sym_LT_EQ] = ACTIONS(455),
    [anon_sym_lt] = ACTIONS(457),
    [anon_sym_lte] = ACTIONS(457),
    [anon_sym_gt] = ACTIONS(457),
    [anon_sym_gte] = ACTIONS(457),
    [anon_sym_BANG] = ACTIONS(457),
    [anon_sym_AMP_AMP] = ACTIONS(455),
    [anon_sym_PIPE_PIPE] = ACTIONS(455),
    [anon_sym_QMARK_QMARK] = ACTIONS(455),
    [anon_sym_EQ] = ACTIONS(457),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(455),
    [sym_number] = ACTIONS(457),
    [anon_sym_true] = ACTIONS(457),
    [anon_sym_LBRACK] = ACTIONS(455),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(457),
    [anon_sym_DOT] = ACTIONS(457),
    [anon_sym_GT] = ACTIONS(455),
    [anon_sym_SLASH_GT] = ACTIONS(455),
  },
  [189] = {
    [sym_group] = STATE(273),
    [anon_sym_LBRACE] = ACTIONS(459),
    [anon_sym_as] = ACTIONS(461),
    [anon_sym_QMARK] = ACTIONS(461),
    [anon_sym_LPAREN] = ACTIONS(459),
    [anon_sym_using] = ACTIONS(461),
    [anon_sym_is] = ACTIONS(461),
    [anon_sym_COMMA] = ACTIONS(459),
    [anon_sym_DOT_DOT] = ACTIONS(461),
    [anon_sym_DOT_DOT_LT] = ACTIONS(459),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(459),
    [anon_sym_COLON] = ACTIONS(459),
    [anon_sym_STAR] = ACTIONS(459),
    [anon_sym_PLUS] = ACTIONS(459),
    [anon_sym_SLASH] = ACTIONS(461),
    [anon_sym_DASH] = ACTIONS(459),
    [anon_sym_PERCENT] = ACTIONS(459),
    [anon_sym_EQ_EQ] = ACTIONS(459),
    [anon_sym_BANG_EQ] = ACTIONS(459),
    [anon_sym_LT] = ACTIONS(461),
    [anon_sym_LT_EQ] = ACTIONS(459),
    [anon_sym_lt] = ACTIONS(461),
    [anon_sym_lte] = ACTIONS(461),
    [anon_sym_gt] = ACTIONS(461),
    [anon_sym_gte] = ACTIONS(461),
    [anon_sym_BANG] = ACTIONS(461),
    [anon_sym_AMP_AMP] = ACTIONS(459),
    [anon_sym_PIPE_PIPE] = ACTIONS(459),
    [anon_sym_QMARK_QMARK] = ACTIONS(459),
    [anon_sym_EQ] = ACTIONS(461),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(459),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(459),
    [sym_number] = ACTIONS(461),
    [anon_sym_true] = ACTIONS(461),
    [anon_sym_LBRACK] = ACTIONS(459),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(461),
    [anon_sym_DOT] = ACTIONS(461),
    [anon_sym_GT] = ACTIONS(459),
    [anon_sym_SLASH_GT] = ACTIONS(459),
  },
  [190] = {
    [sym_parameter_group] = STATE(215),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(114),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(113),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(114),
    [aux_sym_group_repeat1] = STATE(215),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(193),
    [anon_sym_QMARK] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(796),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(79),
  },
  [191] = {
    [anon_sym_LBRACE] = ACTIONS(469),
    [anon_sym_as] = ACTIONS(471),
    [anon_sym_QMARK] = ACTIONS(471),
    [anon_sym_LPAREN] = ACTIONS(469),
    [anon_sym_using] = ACTIONS(471),
    [anon_sym_is] = ACTIONS(471),
    [anon_sym_COMMA] = ACTIONS(469),
    [anon_sym_DOT_DOT] = ACTIONS(471),
    [anon_sym_DOT_DOT_LT] = ACTIONS(469),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(469),
    [anon_sym_COLON] = ACTIONS(469),
    [anon_sym_STAR] = ACTIONS(469),
    [anon_sym_PLUS] = ACTIONS(469),
    [anon_sym_SLASH] = ACTIONS(471),
    [anon_sym_DASH] = ACTIONS(469),
    [anon_sym_PERCENT] = ACTIONS(469),
    [anon_sym_EQ_EQ] = ACTIONS(469),
    [anon_sym_BANG_EQ] = ACTIONS(469),
    [anon_sym_LT] = ACTIONS(471),
    [anon_sym_LT_EQ] = ACTIONS(469),
    [anon_sym_lt] = ACTIONS(471),
    [anon_sym_lte] = ACTIONS(471),
    [anon_sym_gt] = ACTIONS(471),
    [anon_sym_gte] = ACTIONS(471),
    [anon_sym_BANG] = ACTIONS(471),
    [anon_sym_AMP_AMP] = ACTIONS(469),
    [anon_sym_PIPE_PIPE] = ACTIONS(469),
    [anon_sym_QMARK_QMARK] = ACTIONS(469),
    [anon_sym_EQ] = ACTIONS(471),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(469),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(469),
    [sym_number] = ACTIONS(471),
    [anon_sym_true] = ACTIONS(471),
    [anon_sym_LBRACK] = ACTIONS(469),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(471),
    [anon_sym_DOT] = ACTIONS(471),
    [anon_sym_GT] = ACTIONS(469),
    [anon_sym_SLASH_GT] = ACTIONS(469),
  },
  [192] = {
    [anon_sym_LBRACE] = ACTIONS(473),
    [anon_sym_as] = ACTIONS(475),
    [anon_sym_QMARK] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(473),
    [anon_sym_using] = ACTIONS(475),
    [anon_sym_is] = ACTIONS(475),
    [anon_sym_COMMA] = ACTIONS(473),
    [anon_sym_DOT_DOT] = ACTIONS(475),
    [anon_sym_DOT_DOT_LT] = ACTIONS(473),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(473),
    [anon_sym_COLON] = ACTIONS(473),
    [anon_sym_STAR] = ACTIONS(473),
    [anon_sym_PLUS] = ACTIONS(473),
    [anon_sym_SLASH] = ACTIONS(475),
    [anon_sym_DASH] = ACTIONS(473),
    [anon_sym_PERCENT] = ACTIONS(473),
    [anon_sym_EQ_EQ] = ACTIONS(473),
    [anon_sym_BANG_EQ] = ACTIONS(473),
    [anon_sym_LT] = ACTIONS(475),
    [anon_sym_LT_EQ] = ACTIONS(473),
    [anon_sym_lt] = ACTIONS(475),
    [anon_sym_lte] = ACTIONS(475),
    [anon_sym_gt] = ACTIONS(475),
    [anon_sym_gte] = ACTIONS(475),
    [anon_sym_BANG] = ACTIONS(475),
    [anon_sym_AMP_AMP] = ACTIONS(473),
    [anon_sym_PIPE_PIPE] = ACTIONS(473),
    [anon_sym_QMARK_QMARK] = ACTIONS(473),
    [anon_sym_EQ] = ACTIONS(475),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(473),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(473),
    [sym_number] = ACTIONS(475),
    [anon_sym_true] = ACTIONS(475),
    [anon_sym_LBRACK] = ACTIONS(473),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(475),
    [anon_sym_DOT] = ACTIONS(475),
    [anon_sym_GT] = ACTIONS(473),
    [anon_sym_SLASH_GT] = ACTIONS(473),
  },
  [193] = {
    [sym_expression] = STATE(119),
    [sym_type] = STATE(121),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(120),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat1] = STATE(121),
    [aux_sym_sequence_repeat1] = STATE(222),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_using] = ACTIONS(145),
    [anon_sym_is] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_DOT_DOT] = ACTIONS(145),
    [anon_sym_DOT_DOT_LT] = ACTIONS(147),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_lt] = ACTIONS(145),
    [anon_sym_lte] = ACTIONS(145),
    [anon_sym_gt] = ACTIONS(145),
    [anon_sym_gte] = ACTIONS(145),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_QMARK_QMARK] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(149),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_RBRACK] = ACTIONS(798),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(159),
  },
  [194] = {
    [anon_sym_LBRACE] = ACTIONS(486),
    [anon_sym_as] = ACTIONS(488),
    [anon_sym_QMARK] = ACTIONS(488),
    [anon_sym_LPAREN] = ACTIONS(486),
    [anon_sym_using] = ACTIONS(488),
    [anon_sym_is] = ACTIONS(488),
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
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(486),
    [anon_sym_DOT] = ACTIONS(488),
    [anon_sym_GT] = ACTIONS(486),
    [anon_sym_SLASH_GT] = ACTIONS(486),
  },
  [195] = {
    [anon_sym_LBRACE] = ACTIONS(490),
    [anon_sym_as] = ACTIONS(492),
    [anon_sym_QMARK] = ACTIONS(492),
    [anon_sym_LPAREN] = ACTIONS(490),
    [anon_sym_using] = ACTIONS(492),
    [anon_sym_is] = ACTIONS(492),
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
    [anon_sym_GT] = ACTIONS(490),
    [anon_sym_SLASH_GT] = ACTIONS(490),
  },
  [196] = {
    [sym_group] = STATE(276),
    [aux_sym_top_level_repeat1] = STATE(277),
    [anon_sym_LBRACE] = ACTIONS(494),
    [anon_sym_as] = ACTIONS(496),
    [anon_sym_QMARK] = ACTIONS(496),
    [anon_sym_LPAREN] = ACTIONS(494),
    [anon_sym_using] = ACTIONS(496),
    [anon_sym_is] = ACTIONS(496),
    [anon_sym_COMMA] = ACTIONS(494),
    [anon_sym_DOT_DOT] = ACTIONS(496),
    [anon_sym_DOT_DOT_LT] = ACTIONS(494),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(494),
    [anon_sym_COLON] = ACTIONS(494),
    [anon_sym_STAR] = ACTIONS(494),
    [anon_sym_PLUS] = ACTIONS(494),
    [anon_sym_SLASH] = ACTIONS(496),
    [anon_sym_DASH] = ACTIONS(494),
    [anon_sym_PERCENT] = ACTIONS(494),
    [anon_sym_EQ_EQ] = ACTIONS(494),
    [anon_sym_BANG_EQ] = ACTIONS(494),
    [anon_sym_LT] = ACTIONS(496),
    [anon_sym_LT_EQ] = ACTIONS(494),
    [anon_sym_lt] = ACTIONS(496),
    [anon_sym_lte] = ACTIONS(496),
    [anon_sym_gt] = ACTIONS(496),
    [anon_sym_gte] = ACTIONS(496),
    [anon_sym_BANG] = ACTIONS(496),
    [anon_sym_AMP_AMP] = ACTIONS(494),
    [anon_sym_PIPE_PIPE] = ACTIONS(494),
    [anon_sym_QMARK_QMARK] = ACTIONS(494),
    [anon_sym_EQ] = ACTIONS(496),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(494),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(494),
    [sym_number] = ACTIONS(496),
    [anon_sym_true] = ACTIONS(496),
    [anon_sym_LBRACK] = ACTIONS(494),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(496),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(433),
    [anon_sym_DOT] = ACTIONS(496),
    [anon_sym_GT] = ACTIONS(494),
    [anon_sym_SLASH_GT] = ACTIONS(494),
  },
  [197] = {
    [anon_sym_LBRACE] = ACTIONS(498),
    [anon_sym_as] = ACTIONS(500),
    [anon_sym_QMARK] = ACTIONS(500),
    [anon_sym_LPAREN] = ACTIONS(498),
    [anon_sym_using] = ACTIONS(500),
    [anon_sym_is] = ACTIONS(500),
    [anon_sym_COMMA] = ACTIONS(498),
    [anon_sym_DOT_DOT] = ACTIONS(500),
    [anon_sym_DOT_DOT_LT] = ACTIONS(498),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(498),
    [anon_sym_COLON] = ACTIONS(498),
    [anon_sym_STAR] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(498),
    [anon_sym_SLASH] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(498),
    [anon_sym_PERCENT] = ACTIONS(498),
    [anon_sym_EQ_EQ] = ACTIONS(498),
    [anon_sym_BANG_EQ] = ACTIONS(498),
    [anon_sym_LT] = ACTIONS(500),
    [anon_sym_LT_EQ] = ACTIONS(498),
    [anon_sym_lt] = ACTIONS(500),
    [anon_sym_lte] = ACTIONS(500),
    [anon_sym_gt] = ACTIONS(500),
    [anon_sym_gte] = ACTIONS(500),
    [anon_sym_BANG] = ACTIONS(500),
    [anon_sym_AMP_AMP] = ACTIONS(498),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_QMARK_QMARK] = ACTIONS(498),
    [anon_sym_EQ] = ACTIONS(500),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(498),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(498),
    [sym_number] = ACTIONS(500),
    [anon_sym_true] = ACTIONS(500),
    [anon_sym_LBRACK] = ACTIONS(498),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(500),
    [anon_sym_DOT] = ACTIONS(500),
    [anon_sym_GT] = ACTIONS(498),
    [anon_sym_SLASH_GT] = ACTIONS(498),
  },
  [198] = {
    [sym_type] = STATE(272),
    [sym_group] = STATE(95),
    [sym_string] = STATE(95),
    [sym_boolean] = STATE(95),
    [sym_sequence] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_top_level] = STATE(95),
    [sym_spec_var] = STATE(95),
    [aux_sym_as_expression_repeat2] = STATE(272),
    [anon_sym_LBRACE] = ACTIONS(502),
    [anon_sym_as] = ACTIONS(504),
    [anon_sym_QMARK] = ACTIONS(504),
    [anon_sym_LPAREN] = ACTIONS(502),
    [anon_sym_using] = ACTIONS(504),
    [anon_sym_is] = ACTIONS(504),
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_DOT_DOT] = ACTIONS(504),
    [anon_sym_DOT_DOT_LT] = ACTIONS(502),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(502),
    [anon_sym_COLON] = ACTIONS(502),
    [anon_sym_STAR] = ACTIONS(502),
    [anon_sym_PLUS] = ACTIONS(502),
    [anon_sym_SLASH] = ACTIONS(504),
    [anon_sym_DASH] = ACTIONS(502),
    [anon_sym_PERCENT] = ACTIONS(502),
    [anon_sym_EQ_EQ] = ACTIONS(502),
    [anon_sym_BANG_EQ] = ACTIONS(502),
    [anon_sym_LT] = ACTIONS(504),
    [anon_sym_LT_EQ] = ACTIONS(502),
    [anon_sym_lt] = ACTIONS(504),
    [anon_sym_lte] = ACTIONS(504),
    [anon_sym_gt] = ACTIONS(504),
    [anon_sym_gte] = ACTIONS(504),
    [anon_sym_BANG] = ACTIONS(504),
    [anon_sym_AMP_AMP] = ACTIONS(502),
    [anon_sym_PIPE_PIPE] = ACTIONS(502),
    [anon_sym_QMARK_QMARK] = ACTIONS(502),
    [anon_sym_EQ] = ACTIONS(504),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(502),
    [sym_number] = ACTIONS(504),
    [anon_sym_true] = ACTIONS(504),
    [anon_sym_LBRACK] = ACTIONS(502),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(504),
    [anon_sym_DOT] = ACTIONS(504),
    [anon_sym_GT] = ACTIONS(502),
    [anon_sym_SLASH_GT] = ACTIONS(502),
  },
  [199] = {
    [sym_type] = STATE(278),
    [sym_group] = STATE(95),
    [sym_string] = STATE(95),
    [sym_boolean] = STATE(95),
    [sym_sequence] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_top_level] = STATE(95),
    [sym_spec_var] = STATE(95),
    [aux_sym_as_expression_repeat2] = STATE(278),
    [anon_sym_LBRACE] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(167),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(173),
    [sym_number] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(179),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(181),
    [anon_sym_DOT] = ACTIONS(425),
  },
  [200] = {
    [sym_type] = STATE(279),
    [sym_group] = STATE(95),
    [sym_string] = STATE(95),
    [sym_boolean] = STATE(95),
    [sym_sequence] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_top_level] = STATE(95),
    [sym_spec_var] = STATE(95),
    [aux_sym_as_expression_repeat2] = STATE(279),
    [anon_sym_LBRACE] = ACTIONS(161),
    [anon_sym_as] = ACTIONS(504),
    [anon_sym_QMARK] = ACTIONS(504),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_using] = ACTIONS(504),
    [anon_sym_is] = ACTIONS(504),
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_DOT_DOT] = ACTIONS(504),
    [anon_sym_DOT_DOT_LT] = ACTIONS(502),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(502),
    [anon_sym_COLON] = ACTIONS(502),
    [anon_sym_STAR] = ACTIONS(502),
    [anon_sym_PLUS] = ACTIONS(502),
    [anon_sym_SLASH] = ACTIONS(504),
    [anon_sym_DASH] = ACTIONS(502),
    [anon_sym_PERCENT] = ACTIONS(502),
    [anon_sym_EQ_EQ] = ACTIONS(502),
    [anon_sym_BANG_EQ] = ACTIONS(502),
    [anon_sym_LT] = ACTIONS(504),
    [anon_sym_LT_EQ] = ACTIONS(502),
    [anon_sym_lt] = ACTIONS(504),
    [anon_sym_lte] = ACTIONS(504),
    [anon_sym_gt] = ACTIONS(504),
    [anon_sym_gte] = ACTIONS(504),
    [anon_sym_BANG] = ACTIONS(504),
    [anon_sym_AMP_AMP] = ACTIONS(502),
    [anon_sym_PIPE_PIPE] = ACTIONS(502),
    [anon_sym_QMARK_QMARK] = ACTIONS(502),
    [anon_sym_EQ] = ACTIONS(504),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(173),
    [sym_number] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(179),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(181),
    [anon_sym_DOT] = ACTIONS(183),
    [anon_sym_GT] = ACTIONS(502),
    [anon_sym_SLASH_GT] = ACTIONS(502),
  },
  [201] = {
    [sym_type] = STATE(201),
    [sym_group] = STATE(95),
    [sym_string] = STATE(95),
    [sym_boolean] = STATE(95),
    [sym_sequence] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_top_level] = STATE(95),
    [sym_spec_var] = STATE(95),
    [aux_sym_as_expression_repeat1] = STATE(201),
    [anon_sym_LBRACE] = ACTIONS(800),
    [anon_sym_as] = ACTIONS(509),
    [anon_sym_QMARK] = ACTIONS(509),
    [anon_sym_LPAREN] = ACTIONS(803),
    [anon_sym_using] = ACTIONS(509),
    [anon_sym_is] = ACTIONS(509),
    [anon_sym_COMMA] = ACTIONS(514),
    [anon_sym_DOT_DOT] = ACTIONS(509),
    [anon_sym_DOT_DOT_LT] = ACTIONS(514),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(514),
    [anon_sym_COLON] = ACTIONS(514),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_PLUS] = ACTIONS(514),
    [anon_sym_SLASH] = ACTIONS(509),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_PERCENT] = ACTIONS(514),
    [anon_sym_EQ_EQ] = ACTIONS(514),
    [anon_sym_BANG_EQ] = ACTIONS(514),
    [anon_sym_LT] = ACTIONS(509),
    [anon_sym_LT_EQ] = ACTIONS(514),
    [anon_sym_lt] = ACTIONS(509),
    [anon_sym_lte] = ACTIONS(509),
    [anon_sym_gt] = ACTIONS(509),
    [anon_sym_gte] = ACTIONS(509),
    [anon_sym_BANG] = ACTIONS(509),
    [anon_sym_AMP_AMP] = ACTIONS(514),
    [anon_sym_PIPE_PIPE] = ACTIONS(514),
    [anon_sym_QMARK_QMARK] = ACTIONS(514),
    [anon_sym_EQ] = ACTIONS(509),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(806),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(806),
    [sym_number] = ACTIONS(809),
    [anon_sym_true] = ACTIONS(812),
    [anon_sym_LBRACK] = ACTIONS(815),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(818),
    [anon_sym_DOT] = ACTIONS(821),
    [anon_sym_GT] = ACTIONS(514),
    [anon_sym_SLASH_GT] = ACTIONS(514),
  },
  [202] = {
    [ts_builtin_sym_end] = ACTIONS(824),
    [sym_comment] = ACTIONS(824),
    [anon_sym_DOLLAR] = ACTIONS(824),
    [anon_sym_LT_AT] = ACTIONS(824),
    [anon_sym_LT_POUND] = ACTIONS(826),
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
  [203] = {
    [sym_parameter_group] = STATE(203),
    [sym_as_expression] = STATE(101),
    [sym_expression] = STATE(101),
    [sym_type] = STATE(103),
    [sym_built_in] = STATE(101),
    [sym_group] = STATE(95),
    [sym_operator] = STATE(102),
    [sym_string] = STATE(95),
    [sym_boolean] = STATE(95),
    [sym_sequence] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_top_level] = STATE(95),
    [sym_spec_var] = STATE(95),
    [aux_sym_as_expression_repeat1] = STATE(103),
    [aux_sym_group_repeat1] = STATE(203),
    [anon_sym_LBRACE] = ACTIONS(828),
    [anon_sym_as] = ACTIONS(831),
    [anon_sym_QMARK] = ACTIONS(834),
    [anon_sym_LPAREN] = ACTIONS(837),
    [anon_sym_using] = ACTIONS(840),
    [anon_sym_is] = ACTIONS(840),
    [anon_sym_COMMA] = ACTIONS(843),
    [anon_sym_DOT_DOT] = ACTIONS(840),
    [anon_sym_DOT_DOT_LT] = ACTIONS(843),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(843),
    [anon_sym_COLON] = ACTIONS(843),
    [anon_sym_STAR] = ACTIONS(843),
    [anon_sym_PLUS] = ACTIONS(843),
    [anon_sym_SLASH] = ACTIONS(840),
    [anon_sym_DASH] = ACTIONS(843),
    [anon_sym_PERCENT] = ACTIONS(843),
    [anon_sym_EQ_EQ] = ACTIONS(843),
    [anon_sym_BANG_EQ] = ACTIONS(843),
    [anon_sym_LT] = ACTIONS(840),
    [anon_sym_LT_EQ] = ACTIONS(843),
    [anon_sym_lt] = ACTIONS(840),
    [anon_sym_lte] = ACTIONS(840),
    [anon_sym_gt] = ACTIONS(840),
    [anon_sym_gte] = ACTIONS(840),
    [anon_sym_BANG] = ACTIONS(840),
    [anon_sym_AMP_AMP] = ACTIONS(843),
    [anon_sym_PIPE_PIPE] = ACTIONS(843),
    [anon_sym_QMARK_QMARK] = ACTIONS(843),
    [anon_sym_EQ] = ACTIONS(840),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(846),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(846),
    [sym_number] = ACTIONS(849),
    [anon_sym_true] = ACTIONS(852),
    [anon_sym_LBRACK] = ACTIONS(855),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(858),
    [anon_sym_DOT] = ACTIONS(861),
    [anon_sym_GT] = ACTIONS(576),
    [anon_sym_SLASH_GT] = ACTIONS(576),
  },
  [204] = {
    [sym_directive] = STATE(281),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_list_middle] = STATE(287),
    [sym_list_else] = STATE(285),
    [sym_items] = STATE(281),
    [sym_sep] = STATE(281),
    [sym_sep_block] = STATE(286),
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
    [aux_sym_list_repeat1] = STATE(287),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(864),
    [sym_break] = ACTIONS(866),
    [sym_continue] = ACTIONS(866),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(868),
    [anon_sym_LT_POUNDitems] = ACTIONS(870),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(872),
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
  [205] = {
    [anon_sym_LBRACE] = ACTIONS(874),
    [anon_sym_as] = ACTIONS(876),
    [anon_sym_QMARK] = ACTIONS(876),
    [anon_sym_LPAREN] = ACTIONS(874),
    [anon_sym_RPAREN] = ACTIONS(874),
    [anon_sym_using] = ACTIONS(876),
    [anon_sym_is] = ACTIONS(876),
    [anon_sym_COMMA] = ACTIONS(874),
    [anon_sym_DOT_DOT] = ACTIONS(876),
    [anon_sym_DOT_DOT_LT] = ACTIONS(874),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(874),
    [anon_sym_COLON] = ACTIONS(874),
    [anon_sym_STAR] = ACTIONS(874),
    [anon_sym_PLUS] = ACTIONS(874),
    [anon_sym_SLASH] = ACTIONS(874),
    [anon_sym_DASH] = ACTIONS(874),
    [anon_sym_PERCENT] = ACTIONS(874),
    [anon_sym_EQ_EQ] = ACTIONS(874),
    [anon_sym_BANG_EQ] = ACTIONS(874),
    [anon_sym_LT] = ACTIONS(876),
    [anon_sym_LT_EQ] = ACTIONS(874),
    [anon_sym_lt] = ACTIONS(876),
    [anon_sym_lte] = ACTIONS(876),
    [anon_sym_gt] = ACTIONS(876),
    [anon_sym_gte] = ACTIONS(876),
    [anon_sym_BANG] = ACTIONS(876),
    [anon_sym_AMP_AMP] = ACTIONS(874),
    [anon_sym_PIPE_PIPE] = ACTIONS(874),
    [anon_sym_QMARK_QMARK] = ACTIONS(874),
    [anon_sym_EQ] = ACTIONS(876),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(874),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(874),
    [sym_number] = ACTIONS(876),
    [anon_sym_true] = ACTIONS(876),
    [anon_sym_LBRACK] = ACTIONS(874),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(876),
    [anon_sym_DOT] = ACTIONS(876),
    [anon_sym_GT] = ACTIONS(874),
  },
  [206] = {
    [sym_type] = STATE(206),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(206),
    [anon_sym_LBRACE] = ACTIONS(878),
    [anon_sym_as] = ACTIONS(881),
    [anon_sym_QMARK] = ACTIONS(881),
    [anon_sym_LPAREN] = ACTIONS(883),
    [anon_sym_using] = ACTIONS(881),
    [anon_sym_is] = ACTIONS(881),
    [anon_sym_COMMA] = ACTIONS(886),
    [anon_sym_DOT_DOT] = ACTIONS(881),
    [anon_sym_DOT_DOT_LT] = ACTIONS(886),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(886),
    [anon_sym_COLON] = ACTIONS(886),
    [anon_sym_STAR] = ACTIONS(886),
    [anon_sym_PLUS] = ACTIONS(886),
    [anon_sym_SLASH] = ACTIONS(886),
    [anon_sym_DASH] = ACTIONS(886),
    [anon_sym_PERCENT] = ACTIONS(886),
    [anon_sym_EQ_EQ] = ACTIONS(886),
    [anon_sym_BANG_EQ] = ACTIONS(886),
    [anon_sym_LT] = ACTIONS(881),
    [anon_sym_LT_EQ] = ACTIONS(886),
    [anon_sym_lt] = ACTIONS(881),
    [anon_sym_lte] = ACTIONS(881),
    [anon_sym_gt] = ACTIONS(881),
    [anon_sym_gte] = ACTIONS(881),
    [anon_sym_BANG] = ACTIONS(881),
    [anon_sym_AMP_AMP] = ACTIONS(886),
    [anon_sym_PIPE_PIPE] = ACTIONS(886),
    [anon_sym_QMARK_QMARK] = ACTIONS(886),
    [anon_sym_EQ] = ACTIONS(881),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(888),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(888),
    [sym_number] = ACTIONS(891),
    [anon_sym_true] = ACTIONS(894),
    [anon_sym_LBRACK] = ACTIONS(897),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(900),
    [anon_sym_DOT] = ACTIONS(903),
    [anon_sym_GT] = ACTIONS(886),
  },
  [207] = {
    [anon_sym_LBRACE] = ACTIONS(906),
    [anon_sym_as] = ACTIONS(908),
    [anon_sym_QMARK] = ACTIONS(908),
    [anon_sym_LPAREN] = ACTIONS(906),
    [anon_sym_RPAREN] = ACTIONS(906),
    [anon_sym_using] = ACTIONS(908),
    [anon_sym_is] = ACTIONS(908),
    [anon_sym_COMMA] = ACTIONS(906),
    [anon_sym_DOT_DOT] = ACTIONS(908),
    [anon_sym_DOT_DOT_LT] = ACTIONS(906),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(906),
    [anon_sym_COLON] = ACTIONS(906),
    [anon_sym_STAR] = ACTIONS(906),
    [anon_sym_PLUS] = ACTIONS(906),
    [anon_sym_SLASH] = ACTIONS(906),
    [anon_sym_DASH] = ACTIONS(906),
    [anon_sym_PERCENT] = ACTIONS(906),
    [anon_sym_EQ_EQ] = ACTIONS(906),
    [anon_sym_BANG_EQ] = ACTIONS(906),
    [anon_sym_LT] = ACTIONS(908),
    [anon_sym_LT_EQ] = ACTIONS(906),
    [anon_sym_lt] = ACTIONS(908),
    [anon_sym_lte] = ACTIONS(908),
    [anon_sym_gt] = ACTIONS(908),
    [anon_sym_gte] = ACTIONS(908),
    [anon_sym_BANG] = ACTIONS(908),
    [anon_sym_AMP_AMP] = ACTIONS(906),
    [anon_sym_PIPE_PIPE] = ACTIONS(906),
    [anon_sym_QMARK_QMARK] = ACTIONS(906),
    [anon_sym_EQ] = ACTIONS(908),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(906),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(906),
    [sym_number] = ACTIONS(908),
    [anon_sym_true] = ACTIONS(908),
    [anon_sym_LBRACK] = ACTIONS(906),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(908),
    [anon_sym_DOT] = ACTIONS(908),
    [anon_sym_GT] = ACTIONS(906),
  },
  [208] = {
    [sym_type] = STATE(288),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(288),
    [anon_sym_LBRACE] = ACTIONS(455),
    [anon_sym_as] = ACTIONS(457),
    [anon_sym_QMARK] = ACTIONS(457),
    [anon_sym_LPAREN] = ACTIONS(455),
    [anon_sym_RPAREN] = ACTIONS(455),
    [anon_sym_using] = ACTIONS(457),
    [anon_sym_is] = ACTIONS(457),
    [anon_sym_COMMA] = ACTIONS(455),
    [anon_sym_DOT_DOT] = ACTIONS(457),
    [anon_sym_DOT_DOT_LT] = ACTIONS(455),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(455),
    [anon_sym_COLON] = ACTIONS(455),
    [anon_sym_STAR] = ACTIONS(455),
    [anon_sym_PLUS] = ACTIONS(455),
    [anon_sym_SLASH] = ACTIONS(455),
    [anon_sym_DASH] = ACTIONS(455),
    [anon_sym_PERCENT] = ACTIONS(455),
    [anon_sym_EQ_EQ] = ACTIONS(455),
    [anon_sym_BANG_EQ] = ACTIONS(455),
    [anon_sym_LT] = ACTIONS(457),
    [anon_sym_LT_EQ] = ACTIONS(455),
    [anon_sym_lt] = ACTIONS(457),
    [anon_sym_lte] = ACTIONS(457),
    [anon_sym_gt] = ACTIONS(457),
    [anon_sym_gte] = ACTIONS(457),
    [anon_sym_BANG] = ACTIONS(457),
    [anon_sym_AMP_AMP] = ACTIONS(455),
    [anon_sym_PIPE_PIPE] = ACTIONS(455),
    [anon_sym_QMARK_QMARK] = ACTIONS(455),
    [anon_sym_EQ] = ACTIONS(457),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(455),
    [sym_number] = ACTIONS(457),
    [anon_sym_true] = ACTIONS(457),
    [anon_sym_LBRACK] = ACTIONS(455),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(457),
    [anon_sym_DOT] = ACTIONS(457),
  },
  [209] = {
    [sym_group] = STATE(223),
    [aux_sym_top_level_repeat1] = STATE(289),
    [anon_sym_LBRACE] = ACTIONS(494),
    [anon_sym_as] = ACTIONS(496),
    [anon_sym_QMARK] = ACTIONS(496),
    [anon_sym_LPAREN] = ACTIONS(494),
    [anon_sym_RPAREN] = ACTIONS(494),
    [anon_sym_using] = ACTIONS(496),
    [anon_sym_is] = ACTIONS(496),
    [anon_sym_COMMA] = ACTIONS(494),
    [anon_sym_DOT_DOT] = ACTIONS(496),
    [anon_sym_DOT_DOT_LT] = ACTIONS(494),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(494),
    [anon_sym_COLON] = ACTIONS(494),
    [anon_sym_STAR] = ACTIONS(494),
    [anon_sym_PLUS] = ACTIONS(494),
    [anon_sym_SLASH] = ACTIONS(494),
    [anon_sym_DASH] = ACTIONS(494),
    [anon_sym_PERCENT] = ACTIONS(494),
    [anon_sym_EQ_EQ] = ACTIONS(494),
    [anon_sym_BANG_EQ] = ACTIONS(494),
    [anon_sym_LT] = ACTIONS(496),
    [anon_sym_LT_EQ] = ACTIONS(494),
    [anon_sym_lt] = ACTIONS(496),
    [anon_sym_lte] = ACTIONS(496),
    [anon_sym_gt] = ACTIONS(496),
    [anon_sym_gte] = ACTIONS(496),
    [anon_sym_BANG] = ACTIONS(496),
    [anon_sym_AMP_AMP] = ACTIONS(494),
    [anon_sym_PIPE_PIPE] = ACTIONS(494),
    [anon_sym_QMARK_QMARK] = ACTIONS(494),
    [anon_sym_EQ] = ACTIONS(496),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(494),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(494),
    [sym_number] = ACTIONS(496),
    [anon_sym_true] = ACTIONS(496),
    [anon_sym_LBRACK] = ACTIONS(494),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(496),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(496),
  },
  [210] = {
    [sym_type] = STATE(288),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(288),
    [anon_sym_LBRACE] = ACTIONS(502),
    [anon_sym_as] = ACTIONS(504),
    [anon_sym_QMARK] = ACTIONS(504),
    [anon_sym_LPAREN] = ACTIONS(502),
    [anon_sym_RPAREN] = ACTIONS(502),
    [anon_sym_using] = ACTIONS(504),
    [anon_sym_is] = ACTIONS(504),
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_DOT_DOT] = ACTIONS(504),
    [anon_sym_DOT_DOT_LT] = ACTIONS(502),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(502),
    [anon_sym_COLON] = ACTIONS(502),
    [anon_sym_STAR] = ACTIONS(502),
    [anon_sym_PLUS] = ACTIONS(502),
    [anon_sym_SLASH] = ACTIONS(502),
    [anon_sym_DASH] = ACTIONS(502),
    [anon_sym_PERCENT] = ACTIONS(502),
    [anon_sym_EQ_EQ] = ACTIONS(502),
    [anon_sym_BANG_EQ] = ACTIONS(502),
    [anon_sym_LT] = ACTIONS(504),
    [anon_sym_LT_EQ] = ACTIONS(502),
    [anon_sym_lt] = ACTIONS(504),
    [anon_sym_lte] = ACTIONS(504),
    [anon_sym_gt] = ACTIONS(504),
    [anon_sym_gte] = ACTIONS(504),
    [anon_sym_BANG] = ACTIONS(504),
    [anon_sym_AMP_AMP] = ACTIONS(502),
    [anon_sym_PIPE_PIPE] = ACTIONS(502),
    [anon_sym_QMARK_QMARK] = ACTIONS(502),
    [anon_sym_EQ] = ACTIONS(504),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(502),
    [sym_number] = ACTIONS(504),
    [anon_sym_true] = ACTIONS(504),
    [anon_sym_LBRACK] = ACTIONS(502),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(504),
    [anon_sym_DOT] = ACTIONS(504),
  },
  [211] = {
    [sym_type] = STATE(290),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(290),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(189),
  },
  [212] = {
    [sym_type] = STATE(291),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(291),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(504),
    [anon_sym_QMARK] = ACTIONS(504),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(502),
    [anon_sym_using] = ACTIONS(504),
    [anon_sym_is] = ACTIONS(504),
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_DOT_DOT] = ACTIONS(504),
    [anon_sym_DOT_DOT_LT] = ACTIONS(502),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(502),
    [anon_sym_COLON] = ACTIONS(502),
    [anon_sym_STAR] = ACTIONS(502),
    [anon_sym_PLUS] = ACTIONS(502),
    [anon_sym_SLASH] = ACTIONS(502),
    [anon_sym_DASH] = ACTIONS(502),
    [anon_sym_PERCENT] = ACTIONS(502),
    [anon_sym_EQ_EQ] = ACTIONS(502),
    [anon_sym_BANG_EQ] = ACTIONS(502),
    [anon_sym_LT] = ACTIONS(504),
    [anon_sym_LT_EQ] = ACTIONS(502),
    [anon_sym_lt] = ACTIONS(504),
    [anon_sym_lte] = ACTIONS(504),
    [anon_sym_gt] = ACTIONS(504),
    [anon_sym_gte] = ACTIONS(504),
    [anon_sym_BANG] = ACTIONS(504),
    [anon_sym_AMP_AMP] = ACTIONS(502),
    [anon_sym_PIPE_PIPE] = ACTIONS(502),
    [anon_sym_QMARK_QMARK] = ACTIONS(502),
    [anon_sym_EQ] = ACTIONS(504),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(79),
  },
  [213] = {
    [sym_type] = STATE(213),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(213),
    [anon_sym_LBRACE] = ACTIONS(506),
    [anon_sym_as] = ACTIONS(509),
    [anon_sym_QMARK] = ACTIONS(509),
    [anon_sym_LPAREN] = ACTIONS(511),
    [anon_sym_RPAREN] = ACTIONS(514),
    [anon_sym_using] = ACTIONS(509),
    [anon_sym_is] = ACTIONS(509),
    [anon_sym_COMMA] = ACTIONS(514),
    [anon_sym_DOT_DOT] = ACTIONS(509),
    [anon_sym_DOT_DOT_LT] = ACTIONS(514),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(514),
    [anon_sym_COLON] = ACTIONS(514),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_PLUS] = ACTIONS(514),
    [anon_sym_SLASH] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_PERCENT] = ACTIONS(514),
    [anon_sym_EQ_EQ] = ACTIONS(514),
    [anon_sym_BANG_EQ] = ACTIONS(514),
    [anon_sym_LT] = ACTIONS(509),
    [anon_sym_LT_EQ] = ACTIONS(514),
    [anon_sym_lt] = ACTIONS(509),
    [anon_sym_lte] = ACTIONS(509),
    [anon_sym_gt] = ACTIONS(509),
    [anon_sym_gte] = ACTIONS(509),
    [anon_sym_BANG] = ACTIONS(509),
    [anon_sym_AMP_AMP] = ACTIONS(514),
    [anon_sym_PIPE_PIPE] = ACTIONS(514),
    [anon_sym_QMARK_QMARK] = ACTIONS(514),
    [anon_sym_EQ] = ACTIONS(509),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(516),
    [sym_number] = ACTIONS(519),
    [anon_sym_true] = ACTIONS(522),
    [anon_sym_LBRACK] = ACTIONS(525),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(910),
    [anon_sym_DOT] = ACTIONS(531),
  },
  [214] = {
    [anon_sym_LBRACE] = ACTIONS(913),
    [anon_sym_as] = ACTIONS(915),
    [anon_sym_QMARK] = ACTIONS(915),
    [anon_sym_LPAREN] = ACTIONS(913),
    [anon_sym_RPAREN] = ACTIONS(913),
    [anon_sym_using] = ACTIONS(915),
    [anon_sym_is] = ACTIONS(915),
    [anon_sym_COMMA] = ACTIONS(913),
    [anon_sym_DOT_DOT] = ACTIONS(915),
    [anon_sym_DOT_DOT_LT] = ACTIONS(913),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(913),
    [anon_sym_COLON] = ACTIONS(913),
    [anon_sym_STAR] = ACTIONS(913),
    [anon_sym_PLUS] = ACTIONS(913),
    [anon_sym_SLASH] = ACTIONS(913),
    [anon_sym_DASH] = ACTIONS(913),
    [anon_sym_PERCENT] = ACTIONS(913),
    [anon_sym_EQ_EQ] = ACTIONS(913),
    [anon_sym_BANG_EQ] = ACTIONS(913),
    [anon_sym_LT] = ACTIONS(915),
    [anon_sym_LT_EQ] = ACTIONS(913),
    [anon_sym_lt] = ACTIONS(915),
    [anon_sym_lte] = ACTIONS(915),
    [anon_sym_gt] = ACTIONS(915),
    [anon_sym_gte] = ACTIONS(915),
    [anon_sym_BANG] = ACTIONS(915),
    [anon_sym_AMP_AMP] = ACTIONS(913),
    [anon_sym_PIPE_PIPE] = ACTIONS(913),
    [anon_sym_QMARK_QMARK] = ACTIONS(913),
    [anon_sym_EQ] = ACTIONS(915),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(913),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(913),
    [sym_number] = ACTIONS(915),
    [anon_sym_true] = ACTIONS(915),
    [anon_sym_LBRACK] = ACTIONS(913),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(915),
    [anon_sym_DOT] = ACTIONS(915),
    [anon_sym_GT] = ACTIONS(913),
  },
  [215] = {
    [sym_parameter_group] = STATE(215),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(114),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(113),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(114),
    [aux_sym_group_repeat1] = STATE(215),
    [anon_sym_LBRACE] = ACTIONS(540),
    [anon_sym_as] = ACTIONS(917),
    [anon_sym_QMARK] = ACTIONS(920),
    [anon_sym_LPAREN] = ACTIONS(549),
    [anon_sym_RPAREN] = ACTIONS(576),
    [anon_sym_using] = ACTIONS(552),
    [anon_sym_is] = ACTIONS(552),
    [anon_sym_COMMA] = ACTIONS(555),
    [anon_sym_DOT_DOT] = ACTIONS(552),
    [anon_sym_DOT_DOT_LT] = ACTIONS(555),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(555),
    [anon_sym_COLON] = ACTIONS(555),
    [anon_sym_STAR] = ACTIONS(555),
    [anon_sym_PLUS] = ACTIONS(555),
    [anon_sym_SLASH] = ACTIONS(555),
    [anon_sym_DASH] = ACTIONS(555),
    [anon_sym_PERCENT] = ACTIONS(555),
    [anon_sym_EQ_EQ] = ACTIONS(555),
    [anon_sym_BANG_EQ] = ACTIONS(555),
    [anon_sym_LT] = ACTIONS(552),
    [anon_sym_LT_EQ] = ACTIONS(555),
    [anon_sym_lt] = ACTIONS(552),
    [anon_sym_lte] = ACTIONS(552),
    [anon_sym_gt] = ACTIONS(552),
    [anon_sym_gte] = ACTIONS(552),
    [anon_sym_BANG] = ACTIONS(552),
    [anon_sym_AMP_AMP] = ACTIONS(555),
    [anon_sym_PIPE_PIPE] = ACTIONS(555),
    [anon_sym_QMARK_QMARK] = ACTIONS(555),
    [anon_sym_EQ] = ACTIONS(552),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(558),
    [sym_number] = ACTIONS(561),
    [anon_sym_true] = ACTIONS(564),
    [anon_sym_LBRACK] = ACTIONS(567),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(923),
    [anon_sym_DOT] = ACTIONS(573),
  },
  [216] = {
    [sym_group] = STATE(267),
    [aux_sym_top_level_repeat1] = STATE(292),
    [anon_sym_LBRACE] = ACTIONS(494),
    [anon_sym_LPAREN] = ACTIONS(494),
    [anon_sym_using] = ACTIONS(496),
    [anon_sym_is] = ACTIONS(496),
    [anon_sym_COMMA] = ACTIONS(494),
    [anon_sym_DOT_DOT] = ACTIONS(496),
    [anon_sym_DOT_DOT_LT] = ACTIONS(494),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(494),
    [anon_sym_COLON] = ACTIONS(494),
    [anon_sym_STAR] = ACTIONS(494),
    [anon_sym_PLUS] = ACTIONS(494),
    [anon_sym_SLASH] = ACTIONS(494),
    [anon_sym_DASH] = ACTIONS(494),
    [anon_sym_PERCENT] = ACTIONS(494),
    [anon_sym_EQ_EQ] = ACTIONS(494),
    [anon_sym_BANG_EQ] = ACTIONS(494),
    [anon_sym_LT] = ACTIONS(496),
    [anon_sym_LT_EQ] = ACTIONS(494),
    [anon_sym_lt] = ACTIONS(496),
    [anon_sym_lte] = ACTIONS(496),
    [anon_sym_gt] = ACTIONS(496),
    [anon_sym_gte] = ACTIONS(496),
    [anon_sym_BANG] = ACTIONS(496),
    [anon_sym_AMP_AMP] = ACTIONS(494),
    [anon_sym_PIPE_PIPE] = ACTIONS(494),
    [anon_sym_QMARK_QMARK] = ACTIONS(494),
    [anon_sym_EQ] = ACTIONS(496),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(494),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(494),
    [sym_number] = ACTIONS(496),
    [anon_sym_true] = ACTIONS(496),
    [anon_sym_LBRACK] = ACTIONS(494),
    [anon_sym_RBRACK] = ACTIONS(494),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(496),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(415),
    [anon_sym_DOT] = ACTIONS(496),
  },
  [217] = {
    [anon_sym_LBRACE] = ACTIONS(926),
    [anon_sym_LPAREN] = ACTIONS(926),
    [anon_sym_using] = ACTIONS(928),
    [anon_sym_is] = ACTIONS(928),
    [anon_sym_COMMA] = ACTIONS(926),
    [anon_sym_DOT_DOT] = ACTIONS(928),
    [anon_sym_DOT_DOT_LT] = ACTIONS(926),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(926),
    [anon_sym_COLON] = ACTIONS(926),
    [anon_sym_STAR] = ACTIONS(926),
    [anon_sym_PLUS] = ACTIONS(926),
    [anon_sym_SLASH] = ACTIONS(926),
    [anon_sym_DASH] = ACTIONS(926),
    [anon_sym_PERCENT] = ACTIONS(926),
    [anon_sym_EQ_EQ] = ACTIONS(926),
    [anon_sym_BANG_EQ] = ACTIONS(926),
    [anon_sym_LT] = ACTIONS(928),
    [anon_sym_LT_EQ] = ACTIONS(926),
    [anon_sym_lt] = ACTIONS(928),
    [anon_sym_lte] = ACTIONS(928),
    [anon_sym_gt] = ACTIONS(928),
    [anon_sym_gte] = ACTIONS(928),
    [anon_sym_BANG] = ACTIONS(928),
    [anon_sym_AMP_AMP] = ACTIONS(926),
    [anon_sym_PIPE_PIPE] = ACTIONS(926),
    [anon_sym_QMARK_QMARK] = ACTIONS(926),
    [anon_sym_EQ] = ACTIONS(928),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(926),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(926),
    [sym_number] = ACTIONS(928),
    [anon_sym_true] = ACTIONS(928),
    [anon_sym_LBRACK] = ACTIONS(926),
    [anon_sym_RBRACK] = ACTIONS(926),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(928),
    [anon_sym_DOT] = ACTIONS(928),
  },
  [218] = {
    [sym_type] = STATE(293),
    [sym_group] = STATE(81),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat2] = STATE(293),
    [anon_sym_LBRACE] = ACTIONS(502),
    [anon_sym_LPAREN] = ACTIONS(502),
    [anon_sym_using] = ACTIONS(504),
    [anon_sym_is] = ACTIONS(504),
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_DOT_DOT] = ACTIONS(504),
    [anon_sym_DOT_DOT_LT] = ACTIONS(502),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(502),
    [anon_sym_COLON] = ACTIONS(502),
    [anon_sym_STAR] = ACTIONS(502),
    [anon_sym_PLUS] = ACTIONS(502),
    [anon_sym_SLASH] = ACTIONS(502),
    [anon_sym_DASH] = ACTIONS(502),
    [anon_sym_PERCENT] = ACTIONS(502),
    [anon_sym_EQ_EQ] = ACTIONS(502),
    [anon_sym_BANG_EQ] = ACTIONS(502),
    [anon_sym_LT] = ACTIONS(504),
    [anon_sym_LT_EQ] = ACTIONS(502),
    [anon_sym_lt] = ACTIONS(504),
    [anon_sym_lte] = ACTIONS(504),
    [anon_sym_gt] = ACTIONS(504),
    [anon_sym_gte] = ACTIONS(504),
    [anon_sym_BANG] = ACTIONS(504),
    [anon_sym_AMP_AMP] = ACTIONS(502),
    [anon_sym_PIPE_PIPE] = ACTIONS(502),
    [anon_sym_QMARK_QMARK] = ACTIONS(502),
    [anon_sym_EQ] = ACTIONS(504),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(502),
    [sym_number] = ACTIONS(504),
    [anon_sym_true] = ACTIONS(504),
    [anon_sym_LBRACK] = ACTIONS(502),
    [anon_sym_RBRACK] = ACTIONS(502),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(504),
    [anon_sym_DOT] = ACTIONS(504),
  },
  [219] = {
    [sym_type] = STATE(294),
    [sym_group] = STATE(81),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat2] = STATE(294),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_using] = ACTIONS(504),
    [anon_sym_is] = ACTIONS(504),
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_DOT_DOT] = ACTIONS(504),
    [anon_sym_DOT_DOT_LT] = ACTIONS(502),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(502),
    [anon_sym_COLON] = ACTIONS(502),
    [anon_sym_STAR] = ACTIONS(502),
    [anon_sym_PLUS] = ACTIONS(502),
    [anon_sym_SLASH] = ACTIONS(502),
    [anon_sym_DASH] = ACTIONS(502),
    [anon_sym_PERCENT] = ACTIONS(502),
    [anon_sym_EQ_EQ] = ACTIONS(502),
    [anon_sym_BANG_EQ] = ACTIONS(502),
    [anon_sym_LT] = ACTIONS(504),
    [anon_sym_LT_EQ] = ACTIONS(502),
    [anon_sym_lt] = ACTIONS(504),
    [anon_sym_lte] = ACTIONS(504),
    [anon_sym_gt] = ACTIONS(504),
    [anon_sym_gte] = ACTIONS(504),
    [anon_sym_BANG] = ACTIONS(504),
    [anon_sym_AMP_AMP] = ACTIONS(502),
    [anon_sym_PIPE_PIPE] = ACTIONS(502),
    [anon_sym_QMARK_QMARK] = ACTIONS(502),
    [anon_sym_EQ] = ACTIONS(504),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(149),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_RBRACK] = ACTIONS(502),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(159),
  },
  [220] = {
    [sym_type] = STATE(220),
    [sym_group] = STATE(81),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat1] = STATE(220),
    [anon_sym_LBRACE] = ACTIONS(770),
    [anon_sym_LPAREN] = ACTIONS(773),
    [anon_sym_using] = ACTIONS(509),
    [anon_sym_is] = ACTIONS(509),
    [anon_sym_COMMA] = ACTIONS(514),
    [anon_sym_DOT_DOT] = ACTIONS(509),
    [anon_sym_DOT_DOT_LT] = ACTIONS(514),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(514),
    [anon_sym_COLON] = ACTIONS(514),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_PLUS] = ACTIONS(514),
    [anon_sym_SLASH] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_PERCENT] = ACTIONS(514),
    [anon_sym_EQ_EQ] = ACTIONS(514),
    [anon_sym_BANG_EQ] = ACTIONS(514),
    [anon_sym_LT] = ACTIONS(509),
    [anon_sym_LT_EQ] = ACTIONS(514),
    [anon_sym_lt] = ACTIONS(509),
    [anon_sym_lte] = ACTIONS(509),
    [anon_sym_gt] = ACTIONS(509),
    [anon_sym_gte] = ACTIONS(509),
    [anon_sym_BANG] = ACTIONS(509),
    [anon_sym_AMP_AMP] = ACTIONS(514),
    [anon_sym_PIPE_PIPE] = ACTIONS(514),
    [anon_sym_QMARK_QMARK] = ACTIONS(514),
    [anon_sym_EQ] = ACTIONS(509),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(776),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(776),
    [sym_number] = ACTIONS(779),
    [anon_sym_true] = ACTIONS(782),
    [anon_sym_LBRACK] = ACTIONS(785),
    [anon_sym_RBRACK] = ACTIONS(514),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(930),
    [anon_sym_DOT] = ACTIONS(791),
  },
  [221] = {
    [anon_sym_LBRACE] = ACTIONS(933),
    [anon_sym_as] = ACTIONS(935),
    [anon_sym_QMARK] = ACTIONS(935),
    [anon_sym_LPAREN] = ACTIONS(933),
    [anon_sym_RPAREN] = ACTIONS(933),
    [anon_sym_using] = ACTIONS(935),
    [anon_sym_is] = ACTIONS(935),
    [anon_sym_COMMA] = ACTIONS(933),
    [anon_sym_DOT_DOT] = ACTIONS(935),
    [anon_sym_DOT_DOT_LT] = ACTIONS(933),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(933),
    [anon_sym_COLON] = ACTIONS(933),
    [anon_sym_STAR] = ACTIONS(933),
    [anon_sym_PLUS] = ACTIONS(933),
    [anon_sym_SLASH] = ACTIONS(933),
    [anon_sym_DASH] = ACTIONS(933),
    [anon_sym_PERCENT] = ACTIONS(933),
    [anon_sym_EQ_EQ] = ACTIONS(933),
    [anon_sym_BANG_EQ] = ACTIONS(933),
    [anon_sym_LT] = ACTIONS(935),
    [anon_sym_LT_EQ] = ACTIONS(933),
    [anon_sym_lt] = ACTIONS(935),
    [anon_sym_lte] = ACTIONS(935),
    [anon_sym_gt] = ACTIONS(935),
    [anon_sym_gte] = ACTIONS(935),
    [anon_sym_BANG] = ACTIONS(935),
    [anon_sym_AMP_AMP] = ACTIONS(933),
    [anon_sym_PIPE_PIPE] = ACTIONS(933),
    [anon_sym_QMARK_QMARK] = ACTIONS(933),
    [anon_sym_EQ] = ACTIONS(935),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(933),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(933),
    [sym_number] = ACTIONS(935),
    [anon_sym_true] = ACTIONS(935),
    [anon_sym_LBRACK] = ACTIONS(933),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(935),
    [anon_sym_DOT] = ACTIONS(935),
    [anon_sym_GT] = ACTIONS(933),
  },
  [222] = {
    [sym_expression] = STATE(119),
    [sym_type] = STATE(121),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(120),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat1] = STATE(121),
    [aux_sym_sequence_repeat1] = STATE(222),
    [anon_sym_LBRACE] = ACTIONS(937),
    [anon_sym_LPAREN] = ACTIONS(940),
    [anon_sym_using] = ACTIONS(943),
    [anon_sym_is] = ACTIONS(943),
    [anon_sym_COMMA] = ACTIONS(946),
    [anon_sym_DOT_DOT] = ACTIONS(943),
    [anon_sym_DOT_DOT_LT] = ACTIONS(946),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(946),
    [anon_sym_COLON] = ACTIONS(946),
    [anon_sym_STAR] = ACTIONS(946),
    [anon_sym_PLUS] = ACTIONS(946),
    [anon_sym_SLASH] = ACTIONS(946),
    [anon_sym_DASH] = ACTIONS(946),
    [anon_sym_PERCENT] = ACTIONS(946),
    [anon_sym_EQ_EQ] = ACTIONS(946),
    [anon_sym_BANG_EQ] = ACTIONS(946),
    [anon_sym_LT] = ACTIONS(943),
    [anon_sym_LT_EQ] = ACTIONS(946),
    [anon_sym_lt] = ACTIONS(943),
    [anon_sym_lte] = ACTIONS(943),
    [anon_sym_gt] = ACTIONS(943),
    [anon_sym_gte] = ACTIONS(943),
    [anon_sym_BANG] = ACTIONS(943),
    [anon_sym_AMP_AMP] = ACTIONS(946),
    [anon_sym_PIPE_PIPE] = ACTIONS(946),
    [anon_sym_QMARK_QMARK] = ACTIONS(946),
    [anon_sym_EQ] = ACTIONS(943),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(949),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(949),
    [sym_number] = ACTIONS(952),
    [anon_sym_true] = ACTIONS(955),
    [anon_sym_LBRACK] = ACTIONS(958),
    [anon_sym_RBRACK] = ACTIONS(926),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(961),
    [anon_sym_DOT] = ACTIONS(964),
  },
  [223] = {
    [anon_sym_LBRACE] = ACTIONS(967),
    [anon_sym_as] = ACTIONS(969),
    [anon_sym_QMARK] = ACTIONS(969),
    [anon_sym_LPAREN] = ACTIONS(967),
    [anon_sym_RPAREN] = ACTIONS(967),
    [anon_sym_using] = ACTIONS(969),
    [anon_sym_is] = ACTIONS(969),
    [anon_sym_COMMA] = ACTIONS(967),
    [anon_sym_DOT_DOT] = ACTIONS(969),
    [anon_sym_DOT_DOT_LT] = ACTIONS(967),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(967),
    [anon_sym_COLON] = ACTIONS(967),
    [anon_sym_STAR] = ACTIONS(967),
    [anon_sym_PLUS] = ACTIONS(967),
    [anon_sym_SLASH] = ACTIONS(967),
    [anon_sym_DASH] = ACTIONS(967),
    [anon_sym_PERCENT] = ACTIONS(967),
    [anon_sym_EQ_EQ] = ACTIONS(967),
    [anon_sym_BANG_EQ] = ACTIONS(967),
    [anon_sym_LT] = ACTIONS(969),
    [anon_sym_LT_EQ] = ACTIONS(967),
    [anon_sym_lt] = ACTIONS(969),
    [anon_sym_lte] = ACTIONS(969),
    [anon_sym_gt] = ACTIONS(969),
    [anon_sym_gte] = ACTIONS(969),
    [anon_sym_BANG] = ACTIONS(969),
    [anon_sym_AMP_AMP] = ACTIONS(967),
    [anon_sym_PIPE_PIPE] = ACTIONS(967),
    [anon_sym_QMARK_QMARK] = ACTIONS(967),
    [anon_sym_EQ] = ACTIONS(969),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(967),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(967),
    [sym_number] = ACTIONS(969),
    [anon_sym_true] = ACTIONS(969),
    [anon_sym_LBRACK] = ACTIONS(967),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(969),
    [anon_sym_DOT] = ACTIONS(969),
    [anon_sym_GT] = ACTIONS(967),
  },
  [224] = {
    [aux_sym_top_level_repeat1] = STATE(224),
    [anon_sym_LBRACE] = ACTIONS(971),
    [anon_sym_as] = ACTIONS(973),
    [anon_sym_QMARK] = ACTIONS(973),
    [anon_sym_LPAREN] = ACTIONS(971),
    [anon_sym_using] = ACTIONS(973),
    [anon_sym_is] = ACTIONS(973),
    [anon_sym_COMMA] = ACTIONS(971),
    [anon_sym_DOT_DOT] = ACTIONS(973),
    [anon_sym_DOT_DOT_LT] = ACTIONS(971),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(971),
    [anon_sym_COLON] = ACTIONS(971),
    [anon_sym_STAR] = ACTIONS(971),
    [anon_sym_PLUS] = ACTIONS(971),
    [anon_sym_SLASH] = ACTIONS(971),
    [anon_sym_DASH] = ACTIONS(971),
    [anon_sym_PERCENT] = ACTIONS(971),
    [anon_sym_EQ_EQ] = ACTIONS(971),
    [anon_sym_BANG_EQ] = ACTIONS(971),
    [anon_sym_LT] = ACTIONS(973),
    [anon_sym_LT_EQ] = ACTIONS(971),
    [anon_sym_lt] = ACTIONS(973),
    [anon_sym_lte] = ACTIONS(973),
    [anon_sym_gt] = ACTIONS(973),
    [anon_sym_gte] = ACTIONS(973),
    [anon_sym_BANG] = ACTIONS(973),
    [anon_sym_AMP_AMP] = ACTIONS(971),
    [anon_sym_PIPE_PIPE] = ACTIONS(971),
    [anon_sym_QMARK_QMARK] = ACTIONS(971),
    [anon_sym_EQ] = ACTIONS(973),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(971),
    [sym_number] = ACTIONS(973),
    [anon_sym_true] = ACTIONS(973),
    [anon_sym_LBRACK] = ACTIONS(971),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(973),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(975),
    [anon_sym_DOT] = ACTIONS(973),
    [anon_sym_GT] = ACTIONS(971),
  },
  [225] = {
    [sym_type] = STATE(206),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(206),
    [anon_sym_LBRACE] = ACTIONS(978),
    [anon_sym_as] = ACTIONS(980),
    [anon_sym_QMARK] = ACTIONS(980),
    [anon_sym_LPAREN] = ACTIONS(978),
    [anon_sym_using] = ACTIONS(980),
    [anon_sym_is] = ACTIONS(980),
    [anon_sym_COMMA] = ACTIONS(978),
    [anon_sym_DOT_DOT] = ACTIONS(980),
    [anon_sym_DOT_DOT_LT] = ACTIONS(978),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(978),
    [anon_sym_COLON] = ACTIONS(978),
    [anon_sym_STAR] = ACTIONS(978),
    [anon_sym_PLUS] = ACTIONS(978),
    [anon_sym_SLASH] = ACTIONS(978),
    [anon_sym_DASH] = ACTIONS(978),
    [anon_sym_PERCENT] = ACTIONS(978),
    [anon_sym_EQ_EQ] = ACTIONS(978),
    [anon_sym_BANG_EQ] = ACTIONS(978),
    [anon_sym_LT] = ACTIONS(980),
    [anon_sym_LT_EQ] = ACTIONS(978),
    [anon_sym_lt] = ACTIONS(980),
    [anon_sym_lte] = ACTIONS(980),
    [anon_sym_gt] = ACTIONS(980),
    [anon_sym_gte] = ACTIONS(980),
    [anon_sym_BANG] = ACTIONS(980),
    [anon_sym_AMP_AMP] = ACTIONS(978),
    [anon_sym_PIPE_PIPE] = ACTIONS(978),
    [anon_sym_QMARK_QMARK] = ACTIONS(978),
    [anon_sym_EQ] = ACTIONS(980),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(978),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(978),
    [sym_number] = ACTIONS(980),
    [anon_sym_true] = ACTIONS(980),
    [anon_sym_LBRACK] = ACTIONS(978),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(980),
    [anon_sym_DOT] = ACTIONS(980),
    [anon_sym_GT] = ACTIONS(978),
  },
  [226] = {
    [sym_type] = STATE(206),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(206),
    [anon_sym_LBRACE] = ACTIONS(982),
    [anon_sym_as] = ACTIONS(984),
    [anon_sym_QMARK] = ACTIONS(984),
    [anon_sym_LPAREN] = ACTIONS(982),
    [anon_sym_using] = ACTIONS(984),
    [anon_sym_is] = ACTIONS(984),
    [anon_sym_COMMA] = ACTIONS(982),
    [anon_sym_DOT_DOT] = ACTIONS(984),
    [anon_sym_DOT_DOT_LT] = ACTIONS(982),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(982),
    [anon_sym_COLON] = ACTIONS(982),
    [anon_sym_STAR] = ACTIONS(982),
    [anon_sym_PLUS] = ACTIONS(982),
    [anon_sym_SLASH] = ACTIONS(982),
    [anon_sym_DASH] = ACTIONS(982),
    [anon_sym_PERCENT] = ACTIONS(982),
    [anon_sym_EQ_EQ] = ACTIONS(982),
    [anon_sym_BANG_EQ] = ACTIONS(982),
    [anon_sym_LT] = ACTIONS(984),
    [anon_sym_LT_EQ] = ACTIONS(982),
    [anon_sym_lt] = ACTIONS(984),
    [anon_sym_lte] = ACTIONS(984),
    [anon_sym_gt] = ACTIONS(984),
    [anon_sym_gte] = ACTIONS(984),
    [anon_sym_BANG] = ACTIONS(984),
    [anon_sym_AMP_AMP] = ACTIONS(982),
    [anon_sym_PIPE_PIPE] = ACTIONS(982),
    [anon_sym_QMARK_QMARK] = ACTIONS(982),
    [anon_sym_EQ] = ACTIONS(984),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(982),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(982),
    [sym_number] = ACTIONS(984),
    [anon_sym_true] = ACTIONS(984),
    [anon_sym_LBRACK] = ACTIONS(982),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(984),
    [anon_sym_DOT] = ACTIONS(984),
    [anon_sym_GT] = ACTIONS(982),
  },
  [227] = {
    [sym_directive] = STATE(230),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_elseif] = STATE(230),
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
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(986),
    [anon_sym_LT_POUNDelseif] = ACTIONS(538),
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
  [228] = {
    [ts_builtin_sym_end] = ACTIONS(988),
    [sym_comment] = ACTIONS(988),
    [anon_sym_DOLLAR] = ACTIONS(988),
    [anon_sym_LT_AT] = ACTIONS(988),
    [anon_sym_LT_POUND] = ACTIONS(990),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(988),
    [sym_break] = ACTIONS(988),
    [sym_continue] = ACTIONS(988),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(988),
    [anon_sym_LT_POUNDitems] = ACTIONS(988),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(988),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(988),
    [anon_sym_LT_POUNDif] = ACTIONS(988),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(988),
    [anon_sym_LT_POUNDelseif] = ACTIONS(988),
    [anon_sym_LT_POUNDswitch] = ACTIONS(988),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(988),
    [anon_sym_LT_POUNDcase] = ACTIONS(988),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(988),
    [anon_sym_LT_POUNDfunction] = ACTIONS(988),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(988),
    [anon_sym_LT_POUNDreturn] = ACTIONS(988),
    [anon_sym_LT_POUNDmacro] = ACTIONS(988),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(988),
    [anon_sym_LT_POUNDnested] = ACTIONS(988),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(988),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(988),
    [sym_recover] = ACTIONS(988),
    [sym_fallback] = ACTIONS(988),
    [sym_flush] = ACTIONS(988),
    [anon_sym_LT_POUNDftl] = ACTIONS(988),
    [anon_sym_LT_POUNDimport] = ACTIONS(988),
    [anon_sym_LT_POUNDinclude] = ACTIONS(988),
    [sym_lt] = ACTIONS(988),
    [sym_nt] = ACTIONS(988),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(988),
    [sym_rt] = ACTIONS(988),
    [anon_sym_LT_POUNDsetting] = ACTIONS(988),
    [sym_stop] = ACTIONS(988),
    [sym_t] = ACTIONS(988),
    [anon_sym_LT_POUNDvisit] = ACTIONS(988),
    [anon_sym_LT_POUNDassign] = ACTIONS(988),
    [sym_end_assign] = ACTIONS(988),
    [anon_sym_LT_POUNDglobal] = ACTIONS(988),
    [sym_end_global] = ACTIONS(988),
    [anon_sym_LT_POUNDlocal] = ACTIONS(988),
    [sym_end_local] = ACTIONS(988),
  },
  [229] = {
    [sym_parameter_group] = STATE(297),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(41),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(40),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(41),
    [aux_sym_group_repeat1] = STATE(297),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(992),
  },
  [230] = {
    [anon_sym_LT_AT] = ACTIONS(994),
    [anon_sym_LT_POUND] = ACTIONS(996),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(994),
    [anon_sym_LT_POUNDif] = ACTIONS(994),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(994),
    [anon_sym_LT_POUNDelseif] = ACTIONS(994),
    [anon_sym_LT_POUNDswitch] = ACTIONS(994),
    [anon_sym_LT_POUNDfunction] = ACTIONS(994),
    [anon_sym_LT_POUNDmacro] = ACTIONS(994),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(994),
    [sym_fallback] = ACTIONS(994),
    [sym_flush] = ACTIONS(994),
    [anon_sym_LT_POUNDftl] = ACTIONS(994),
    [anon_sym_LT_POUNDimport] = ACTIONS(994),
    [anon_sym_LT_POUNDinclude] = ACTIONS(994),
    [sym_lt] = ACTIONS(994),
    [sym_nt] = ACTIONS(994),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(994),
    [sym_rt] = ACTIONS(994),
    [anon_sym_LT_POUNDsetting] = ACTIONS(994),
    [sym_stop] = ACTIONS(994),
    [sym_t] = ACTIONS(994),
    [anon_sym_LT_POUNDvisit] = ACTIONS(994),
    [anon_sym_LT_POUNDassign] = ACTIONS(994),
    [sym_end_assign] = ACTIONS(994),
    [anon_sym_LT_POUNDglobal] = ACTIONS(994),
    [sym_end_global] = ACTIONS(994),
    [anon_sym_LT_POUNDlocal] = ACTIONS(994),
    [sym_end_local] = ACTIONS(994),
  },
  [231] = {
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(998),
  },
  [232] = {
    [sym_directive] = STATE(230),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_if_else] = STATE(299),
    [sym_elseif] = STATE(230),
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
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(534),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(998),
    [anon_sym_LT_POUNDelseif] = ACTIONS(538),
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
  [233] = {
    [anon_sym_LBRACE] = ACTIONS(449),
    [anon_sym_LPAREN] = ACTIONS(449),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(449),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(449),
    [sym_number] = ACTIONS(451),
    [anon_sym_true] = ACTIONS(451),
    [anon_sym_LBRACK] = ACTIONS(449),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(451),
    [anon_sym_DOT] = ACTIONS(449),
    [anon_sym_GT] = ACTIONS(449),
  },
  [234] = {
    [sym_expression] = STATE(183),
    [sym_type] = STATE(88),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(86),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_interpolation_repeat1] = STATE(183),
    [aux_sym_as_expression_repeat1] = STATE(88),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(1000),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_using] = ACTIONS(145),
    [anon_sym_is] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_DOT_DOT] = ACTIONS(145),
    [anon_sym_DOT_DOT_LT] = ACTIONS(147),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_lt] = ACTIONS(145),
    [anon_sym_lte] = ACTIONS(145),
    [anon_sym_gt] = ACTIONS(145),
    [anon_sym_gte] = ACTIONS(145),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_QMARK_QMARK] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(149),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(157),
    [anon_sym_DOT] = ACTIONS(159),
  },
  [235] = {
    [sym_parameter_group] = STATE(215),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(114),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(113),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(114),
    [aux_sym_group_repeat1] = STATE(215),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(193),
    [anon_sym_QMARK] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(1002),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(79),
  },
  [236] = {
    [anon_sym_LBRACE] = ACTIONS(469),
    [anon_sym_LPAREN] = ACTIONS(469),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(469),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(469),
    [sym_number] = ACTIONS(471),
    [anon_sym_true] = ACTIONS(471),
    [anon_sym_LBRACK] = ACTIONS(469),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(471),
    [anon_sym_DOT] = ACTIONS(469),
    [anon_sym_GT] = ACTIONS(469),
  },
  [237] = {
    [anon_sym_LBRACE] = ACTIONS(473),
    [anon_sym_LPAREN] = ACTIONS(473),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(473),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(473),
    [sym_number] = ACTIONS(475),
    [anon_sym_true] = ACTIONS(475),
    [anon_sym_LBRACK] = ACTIONS(473),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(475),
    [anon_sym_DOT] = ACTIONS(473),
    [anon_sym_GT] = ACTIONS(473),
  },
  [238] = {
    [sym_expression] = STATE(119),
    [sym_type] = STATE(121),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(120),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat1] = STATE(121),
    [aux_sym_sequence_repeat1] = STATE(222),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_using] = ACTIONS(145),
    [anon_sym_is] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_DOT_DOT] = ACTIONS(145),
    [anon_sym_DOT_DOT_LT] = ACTIONS(147),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_lt] = ACTIONS(145),
    [anon_sym_lte] = ACTIONS(145),
    [anon_sym_gt] = ACTIONS(145),
    [anon_sym_gte] = ACTIONS(145),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_QMARK_QMARK] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(149),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_RBRACK] = ACTIONS(1004),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(159),
  },
  [239] = {
    [anon_sym_LBRACE] = ACTIONS(486),
    [anon_sym_LPAREN] = ACTIONS(486),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(486),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(486),
    [sym_number] = ACTIONS(488),
    [anon_sym_true] = ACTIONS(488),
    [anon_sym_LBRACK] = ACTIONS(486),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(486),
    [anon_sym_DOT] = ACTIONS(488),
    [anon_sym_GT] = ACTIONS(486),
  },
  [240] = {
    [anon_sym_LBRACE] = ACTIONS(490),
    [anon_sym_LPAREN] = ACTIONS(490),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(490),
    [sym_number] = ACTIONS(492),
    [anon_sym_true] = ACTIONS(492),
    [anon_sym_LBRACK] = ACTIONS(490),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(492),
    [anon_sym_DOT] = ACTIONS(490),
    [anon_sym_GT] = ACTIONS(490),
  },
  [241] = {
    [sym_group] = STATE(304),
    [aux_sym_top_level_repeat1] = STATE(305),
    [anon_sym_LBRACE] = ACTIONS(494),
    [anon_sym_LPAREN] = ACTIONS(494),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(494),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(494),
    [sym_number] = ACTIONS(496),
    [anon_sym_true] = ACTIONS(496),
    [anon_sym_LBRACK] = ACTIONS(494),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(496),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(584),
    [anon_sym_DOT] = ACTIONS(496),
    [anon_sym_GT] = ACTIONS(494),
  },
  [242] = {
    [anon_sym_LBRACE] = ACTIONS(498),
    [anon_sym_LPAREN] = ACTIONS(498),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(498),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(498),
    [sym_number] = ACTIONS(500),
    [anon_sym_true] = ACTIONS(500),
    [anon_sym_LBRACK] = ACTIONS(498),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(500),
    [anon_sym_DOT] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(498),
  },
  [243] = {
    [sym_type] = STATE(243),
    [sym_group] = STATE(136),
    [sym_string] = STATE(136),
    [sym_boolean] = STATE(136),
    [sym_sequence] = STATE(136),
    [sym_hash] = STATE(136),
    [sym_top_level] = STATE(136),
    [sym_spec_var] = STATE(136),
    [aux_sym_as_expression_repeat2] = STATE(243),
    [anon_sym_LBRACE] = ACTIONS(1006),
    [anon_sym_LPAREN] = ACTIONS(1009),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1012),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1012),
    [sym_number] = ACTIONS(1015),
    [anon_sym_true] = ACTIONS(1018),
    [anon_sym_LBRACK] = ACTIONS(1021),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1024),
    [anon_sym_DOT] = ACTIONS(1027),
    [anon_sym_GT] = ACTIONS(886),
  },
  [244] = {
    [sym_group] = STATE(223),
    [aux_sym_top_level_repeat1] = STATE(306),
    [anon_sym_LPAREN] = ACTIONS(494),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(221),
    [anon_sym_GT] = ACTIONS(494),
  },
  [245] = {
    [aux_sym_top_level_repeat1] = STATE(245),
    [anon_sym_LBRACE] = ACTIONS(971),
    [anon_sym_as] = ACTIONS(973),
    [anon_sym_LPAREN] = ACTIONS(971),
    [anon_sym_using] = ACTIONS(973),
    [anon_sym_is] = ACTIONS(973),
    [anon_sym_COMMA] = ACTIONS(971),
    [anon_sym_DOT_DOT] = ACTIONS(973),
    [anon_sym_DOT_DOT_LT] = ACTIONS(971),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(971),
    [anon_sym_COLON] = ACTIONS(971),
    [anon_sym_STAR] = ACTIONS(971),
    [anon_sym_PLUS] = ACTIONS(971),
    [anon_sym_SLASH] = ACTIONS(971),
    [anon_sym_DASH] = ACTIONS(971),
    [anon_sym_PERCENT] = ACTIONS(971),
    [anon_sym_EQ_EQ] = ACTIONS(971),
    [anon_sym_BANG_EQ] = ACTIONS(971),
    [anon_sym_LT] = ACTIONS(973),
    [anon_sym_LT_EQ] = ACTIONS(971),
    [anon_sym_lt] = ACTIONS(973),
    [anon_sym_lte] = ACTIONS(973),
    [anon_sym_gt] = ACTIONS(973),
    [anon_sym_gte] = ACTIONS(973),
    [anon_sym_BANG] = ACTIONS(973),
    [anon_sym_AMP_AMP] = ACTIONS(971),
    [anon_sym_PIPE_PIPE] = ACTIONS(971),
    [anon_sym_QMARK_QMARK] = ACTIONS(971),
    [anon_sym_EQ] = ACTIONS(973),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(971),
    [sym_number] = ACTIONS(973),
    [anon_sym_true] = ACTIONS(973),
    [anon_sym_LBRACK] = ACTIONS(971),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(973),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(975),
    [anon_sym_DOT] = ACTIONS(973),
    [anon_sym_GT] = ACTIONS(971),
  },
  [246] = {
    [ts_builtin_sym_end] = ACTIONS(1030),
    [sym_comment] = ACTIONS(1030),
    [anon_sym_DOLLAR] = ACTIONS(1030),
    [anon_sym_LT_AT] = ACTIONS(1030),
    [anon_sym_LT_POUND] = ACTIONS(1032),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1030),
    [sym_break] = ACTIONS(1030),
    [sym_continue] = ACTIONS(1030),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1030),
    [anon_sym_LT_POUNDitems] = ACTIONS(1030),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1030),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1030),
    [anon_sym_LT_POUNDif] = ACTIONS(1030),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1030),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1030),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1030),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1030),
    [anon_sym_LT_POUNDcase] = ACTIONS(1030),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1030),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1030),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1030),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1030),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1030),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1030),
    [anon_sym_LT_POUNDnested] = ACTIONS(1030),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1030),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1030),
    [sym_recover] = ACTIONS(1030),
    [sym_fallback] = ACTIONS(1030),
    [sym_flush] = ACTIONS(1030),
    [anon_sym_LT_POUNDftl] = ACTIONS(1030),
    [anon_sym_LT_POUNDimport] = ACTIONS(1030),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1030),
    [sym_lt] = ACTIONS(1030),
    [sym_nt] = ACTIONS(1030),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1030),
    [sym_rt] = ACTIONS(1030),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1030),
    [sym_stop] = ACTIONS(1030),
    [sym_t] = ACTIONS(1030),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1030),
    [anon_sym_LT_POUNDassign] = ACTIONS(1030),
    [sym_end_assign] = ACTIONS(1030),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1030),
    [sym_end_global] = ACTIONS(1030),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1030),
    [sym_end_local] = ACTIONS(1030),
  },
  [247] = {
    [sym_parameter_group] = STATE(307),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(49),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(48),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(49),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(81),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(85),
    [anon_sym_is] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_DOT_DOT] = ACTIONS(85),
    [anon_sym_DOT_DOT_LT] = ACTIONS(87),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_PERCENT] = ACTIONS(87),
    [anon_sym_EQ_EQ] = ACTIONS(87),
    [anon_sym_BANG_EQ] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_LT_EQ] = ACTIONS(87),
    [anon_sym_lt] = ACTIONS(85),
    [anon_sym_lte] = ACTIONS(85),
    [anon_sym_gt] = ACTIONS(85),
    [anon_sym_gte] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_PIPE_PIPE] = ACTIONS(87),
    [anon_sym_QMARK_QMARK] = ACTIONS(87),
    [anon_sym_EQ] = ACTIONS(85),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(89),
    [anon_sym_DOT] = ACTIONS(79),
  },
  [248] = {
    [sym_directive] = STATE(308),
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
    [aux_sym_case_repeat1] = STATE(308),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1034),
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
  [249] = {
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1036),
    [anon_sym_LT_POUNDcase] = ACTIONS(1036),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1036),
  },
  [250] = {
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1038),
  },
  [251] = {
    [sym_case] = STATE(249),
    [sym_default] = STATE(310),
    [sym_switch_middle] = STATE(311),
    [aux_sym_switch_repeat1] = STATE(311),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1038),
    [anon_sym_LT_POUNDcase] = ACTIONS(592),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(594),
  },
  [252] = {
    [sym_type] = STATE(243),
    [sym_group] = STATE(136),
    [sym_string] = STATE(136),
    [sym_boolean] = STATE(136),
    [sym_sequence] = STATE(136),
    [sym_hash] = STATE(136),
    [sym_top_level] = STATE(136),
    [sym_spec_var] = STATE(136),
    [aux_sym_as_expression_repeat2] = STATE(243),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_LPAREN] = ACTIONS(241),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(243),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(243),
    [sym_number] = ACTIONS(245),
    [anon_sym_true] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(249),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(251),
    [anon_sym_DOT] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(978),
  },
  [253] = {
    [sym_type] = STATE(243),
    [sym_group] = STATE(136),
    [sym_string] = STATE(136),
    [sym_boolean] = STATE(136),
    [sym_sequence] = STATE(136),
    [sym_hash] = STATE(136),
    [sym_top_level] = STATE(136),
    [sym_spec_var] = STATE(136),
    [aux_sym_as_expression_repeat2] = STATE(243),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_LPAREN] = ACTIONS(241),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(243),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(243),
    [sym_number] = ACTIONS(245),
    [anon_sym_true] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(249),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(251),
    [anon_sym_DOT] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(982),
  },
  [254] = {
    [anon_sym_LT_AT] = ACTIONS(1040),
    [anon_sym_LT_POUND] = ACTIONS(1042),
    [anon_sym_LT_POUNDif] = ACTIONS(1040),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1040),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1040),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1040),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1040),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1040),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1040),
    [anon_sym_LT_POUNDnested] = ACTIONS(1040),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1040),
    [sym_fallback] = ACTIONS(1040),
    [sym_flush] = ACTIONS(1040),
    [anon_sym_LT_POUNDftl] = ACTIONS(1040),
    [anon_sym_LT_POUNDimport] = ACTIONS(1040),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1040),
    [sym_lt] = ACTIONS(1040),
    [sym_nt] = ACTIONS(1040),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1040),
    [sym_rt] = ACTIONS(1040),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1040),
    [sym_stop] = ACTIONS(1040),
    [sym_t] = ACTIONS(1040),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1040),
    [anon_sym_LT_POUNDassign] = ACTIONS(1040),
    [sym_end_assign] = ACTIONS(1040),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1040),
    [sym_end_global] = ACTIONS(1040),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1040),
    [sym_end_local] = ACTIONS(1040),
  },
  [255] = {
    [anon_sym_GT] = ACTIONS(1044),
  },
  [256] = {
    [ts_builtin_sym_end] = ACTIONS(1046),
    [sym_comment] = ACTIONS(1046),
    [anon_sym_DOLLAR] = ACTIONS(1046),
    [anon_sym_LT_AT] = ACTIONS(1046),
    [anon_sym_LT_POUND] = ACTIONS(1048),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1046),
    [sym_break] = ACTIONS(1046),
    [sym_continue] = ACTIONS(1046),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1046),
    [anon_sym_LT_POUNDitems] = ACTIONS(1046),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1046),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1046),
    [anon_sym_LT_POUNDif] = ACTIONS(1046),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1046),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1046),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1046),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1046),
    [anon_sym_LT_POUNDcase] = ACTIONS(1046),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1046),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1046),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1046),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1046),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1046),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1046),
    [anon_sym_LT_POUNDnested] = ACTIONS(1046),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1046),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1046),
    [sym_recover] = ACTIONS(1046),
    [sym_fallback] = ACTIONS(1046),
    [sym_flush] = ACTIONS(1046),
    [anon_sym_LT_POUNDftl] = ACTIONS(1046),
    [anon_sym_LT_POUNDimport] = ACTIONS(1046),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1046),
    [sym_lt] = ACTIONS(1046),
    [sym_nt] = ACTIONS(1046),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1046),
    [sym_rt] = ACTIONS(1046),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1046),
    [sym_stop] = ACTIONS(1046),
    [sym_t] = ACTIONS(1046),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1046),
    [anon_sym_LT_POUNDassign] = ACTIONS(1046),
    [sym_end_assign] = ACTIONS(1046),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1046),
    [sym_end_global] = ACTIONS(1046),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1046),
    [sym_end_local] = ACTIONS(1046),
  },
  [257] = {
    [sym_directive] = STATE(152),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_function_middle] = STATE(257),
    [sym_return] = STATE(152),
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
    [aux_sym_function_repeat1] = STATE(257),
    [anon_sym_LT_AT] = ACTIONS(1050),
    [anon_sym_LT_POUND] = ACTIONS(1053),
    [anon_sym_LT_POUNDif] = ACTIONS(1056),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1059),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1062),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1065),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1067),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1070),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1073),
    [sym_fallback] = ACTIONS(1076),
    [sym_flush] = ACTIONS(1076),
    [anon_sym_LT_POUNDftl] = ACTIONS(1079),
    [anon_sym_LT_POUNDimport] = ACTIONS(1082),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1085),
    [sym_lt] = ACTIONS(1076),
    [sym_nt] = ACTIONS(1076),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1088),
    [sym_rt] = ACTIONS(1076),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1091),
    [sym_stop] = ACTIONS(1076),
    [sym_t] = ACTIONS(1076),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1094),
    [anon_sym_LT_POUNDassign] = ACTIONS(1097),
    [sym_end_assign] = ACTIONS(1100),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1103),
    [sym_end_global] = ACTIONS(1106),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1109),
    [sym_end_local] = ACTIONS(1112),
  },
  [258] = {
    [sym_directive] = STATE(152),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_function_middle] = STATE(257),
    [sym_return] = STATE(152),
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
    [aux_sym_function_repeat1] = STATE(257),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1115),
    [anon_sym_LT_POUNDreturn] = ACTIONS(263),
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
  [259] = {
    [anon_sym_LT_AT] = ACTIONS(1117),
    [anon_sym_LT_POUND] = ACTIONS(1119),
    [anon_sym_LT_POUNDif] = ACTIONS(1117),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1117),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1117),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1117),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1117),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1117),
    [anon_sym_LT_POUNDnested] = ACTIONS(1117),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1117),
    [sym_fallback] = ACTIONS(1117),
    [sym_flush] = ACTIONS(1117),
    [anon_sym_LT_POUNDftl] = ACTIONS(1117),
    [anon_sym_LT_POUNDimport] = ACTIONS(1117),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1117),
    [sym_lt] = ACTIONS(1117),
    [sym_nt] = ACTIONS(1117),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1117),
    [sym_rt] = ACTIONS(1117),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1117),
    [sym_stop] = ACTIONS(1117),
    [sym_t] = ACTIONS(1117),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1117),
    [anon_sym_LT_POUNDassign] = ACTIONS(1117),
    [sym_end_assign] = ACTIONS(1117),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1117),
    [sym_end_global] = ACTIONS(1117),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1117),
    [sym_end_local] = ACTIONS(1117),
  },
  [260] = {
    [sym_parameter_group] = STATE(132),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(41),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(40),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(41),
    [aux_sym_group_repeat1] = STATE(132),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(1121),
  },
  [261] = {
    [ts_builtin_sym_end] = ACTIONS(1123),
    [sym_comment] = ACTIONS(1123),
    [anon_sym_DOLLAR] = ACTIONS(1123),
    [anon_sym_LT_AT] = ACTIONS(1123),
    [anon_sym_LT_POUND] = ACTIONS(1125),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1123),
    [sym_break] = ACTIONS(1123),
    [sym_continue] = ACTIONS(1123),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1123),
    [anon_sym_LT_POUNDitems] = ACTIONS(1123),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1123),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1123),
    [anon_sym_LT_POUNDif] = ACTIONS(1123),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1123),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1123),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1123),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1123),
    [anon_sym_LT_POUNDcase] = ACTIONS(1123),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1123),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1123),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1123),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1123),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1123),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1123),
    [anon_sym_LT_POUNDnested] = ACTIONS(1123),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1123),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1123),
    [sym_recover] = ACTIONS(1123),
    [sym_fallback] = ACTIONS(1123),
    [sym_flush] = ACTIONS(1123),
    [anon_sym_LT_POUNDftl] = ACTIONS(1123),
    [anon_sym_LT_POUNDimport] = ACTIONS(1123),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1123),
    [sym_lt] = ACTIONS(1123),
    [sym_nt] = ACTIONS(1123),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1123),
    [sym_rt] = ACTIONS(1123),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1123),
    [sym_stop] = ACTIONS(1123),
    [sym_t] = ACTIONS(1123),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1123),
    [anon_sym_LT_POUNDassign] = ACTIONS(1123),
    [sym_end_assign] = ACTIONS(1123),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1123),
    [sym_end_global] = ACTIONS(1123),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1123),
    [sym_end_local] = ACTIONS(1123),
  },
  [262] = {
    [sym_directive] = STATE(157),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_return] = STATE(157),
    [sym_macro] = STATE(10),
    [sym_macro_middle] = STATE(262),
    [sym_nested] = STATE(157),
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
    [aux_sym_macro_repeat1] = STATE(262),
    [anon_sym_LT_AT] = ACTIONS(1127),
    [anon_sym_LT_POUND] = ACTIONS(1130),
    [anon_sym_LT_POUNDif] = ACTIONS(1133),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1136),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1139),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1142),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1145),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1148),
    [anon_sym_LT_POUNDnested] = ACTIONS(1150),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1153),
    [sym_fallback] = ACTIONS(1156),
    [sym_flush] = ACTIONS(1156),
    [anon_sym_LT_POUNDftl] = ACTIONS(1159),
    [anon_sym_LT_POUNDimport] = ACTIONS(1162),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1165),
    [sym_lt] = ACTIONS(1156),
    [sym_nt] = ACTIONS(1156),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1168),
    [sym_rt] = ACTIONS(1156),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1171),
    [sym_stop] = ACTIONS(1156),
    [sym_t] = ACTIONS(1156),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1174),
    [anon_sym_LT_POUNDassign] = ACTIONS(1177),
    [sym_end_assign] = ACTIONS(1180),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1183),
    [sym_end_global] = ACTIONS(1186),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1189),
    [sym_end_local] = ACTIONS(1192),
  },
  [263] = {
    [sym_directive] = STATE(157),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_return] = STATE(157),
    [sym_macro] = STATE(10),
    [sym_macro_middle] = STATE(262),
    [sym_nested] = STATE(157),
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
    [aux_sym_macro_repeat1] = STATE(262),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDreturn] = ACTIONS(263),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1195),
    [anon_sym_LT_POUNDnested] = ACTIONS(269),
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
  [264] = {
    [anon_sym_LBRACE] = ACTIONS(874),
    [anon_sym_RBRACE] = ACTIONS(874),
    [anon_sym_LPAREN] = ACTIONS(874),
    [anon_sym_using] = ACTIONS(876),
    [anon_sym_is] = ACTIONS(876),
    [anon_sym_COMMA] = ACTIONS(874),
    [anon_sym_DOT_DOT] = ACTIONS(876),
    [anon_sym_DOT_DOT_LT] = ACTIONS(874),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(874),
    [anon_sym_COLON] = ACTIONS(874),
    [anon_sym_STAR] = ACTIONS(874),
    [anon_sym_PLUS] = ACTIONS(874),
    [anon_sym_SLASH] = ACTIONS(874),
    [anon_sym_DASH] = ACTIONS(874),
    [anon_sym_PERCENT] = ACTIONS(874),
    [anon_sym_EQ_EQ] = ACTIONS(874),
    [anon_sym_BANG_EQ] = ACTIONS(874),
    [anon_sym_LT] = ACTIONS(876),
    [anon_sym_LT_EQ] = ACTIONS(874),
    [anon_sym_lt] = ACTIONS(876),
    [anon_sym_lte] = ACTIONS(876),
    [anon_sym_gt] = ACTIONS(876),
    [anon_sym_gte] = ACTIONS(876),
    [anon_sym_BANG] = ACTIONS(876),
    [anon_sym_AMP_AMP] = ACTIONS(874),
    [anon_sym_PIPE_PIPE] = ACTIONS(874),
    [anon_sym_QMARK_QMARK] = ACTIONS(874),
    [anon_sym_EQ] = ACTIONS(876),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(874),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(874),
    [sym_number] = ACTIONS(876),
    [anon_sym_true] = ACTIONS(876),
    [anon_sym_LBRACK] = ACTIONS(874),
    [anon_sym_RBRACK] = ACTIONS(874),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(876),
    [anon_sym_DOT] = ACTIONS(876),
  },
  [265] = {
    [anon_sym_LBRACE] = ACTIONS(913),
    [anon_sym_RBRACE] = ACTIONS(913),
    [anon_sym_LPAREN] = ACTIONS(913),
    [anon_sym_using] = ACTIONS(915),
    [anon_sym_is] = ACTIONS(915),
    [anon_sym_COMMA] = ACTIONS(913),
    [anon_sym_DOT_DOT] = ACTIONS(915),
    [anon_sym_DOT_DOT_LT] = ACTIONS(913),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(913),
    [anon_sym_COLON] = ACTIONS(913),
    [anon_sym_STAR] = ACTIONS(913),
    [anon_sym_PLUS] = ACTIONS(913),
    [anon_sym_SLASH] = ACTIONS(913),
    [anon_sym_DASH] = ACTIONS(913),
    [anon_sym_PERCENT] = ACTIONS(913),
    [anon_sym_EQ_EQ] = ACTIONS(913),
    [anon_sym_BANG_EQ] = ACTIONS(913),
    [anon_sym_LT] = ACTIONS(915),
    [anon_sym_LT_EQ] = ACTIONS(913),
    [anon_sym_lt] = ACTIONS(915),
    [anon_sym_lte] = ACTIONS(915),
    [anon_sym_gt] = ACTIONS(915),
    [anon_sym_gte] = ACTIONS(915),
    [anon_sym_BANG] = ACTIONS(915),
    [anon_sym_AMP_AMP] = ACTIONS(913),
    [anon_sym_PIPE_PIPE] = ACTIONS(913),
    [anon_sym_QMARK_QMARK] = ACTIONS(913),
    [anon_sym_EQ] = ACTIONS(915),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(913),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(913),
    [sym_number] = ACTIONS(915),
    [anon_sym_true] = ACTIONS(915),
    [anon_sym_LBRACK] = ACTIONS(913),
    [anon_sym_RBRACK] = ACTIONS(913),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(915),
    [anon_sym_DOT] = ACTIONS(915),
  },
  [266] = {
    [anon_sym_LBRACE] = ACTIONS(933),
    [anon_sym_RBRACE] = ACTIONS(933),
    [anon_sym_LPAREN] = ACTIONS(933),
    [anon_sym_using] = ACTIONS(935),
    [anon_sym_is] = ACTIONS(935),
    [anon_sym_COMMA] = ACTIONS(933),
    [anon_sym_DOT_DOT] = ACTIONS(935),
    [anon_sym_DOT_DOT_LT] = ACTIONS(933),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(933),
    [anon_sym_COLON] = ACTIONS(933),
    [anon_sym_STAR] = ACTIONS(933),
    [anon_sym_PLUS] = ACTIONS(933),
    [anon_sym_SLASH] = ACTIONS(933),
    [anon_sym_DASH] = ACTIONS(933),
    [anon_sym_PERCENT] = ACTIONS(933),
    [anon_sym_EQ_EQ] = ACTIONS(933),
    [anon_sym_BANG_EQ] = ACTIONS(933),
    [anon_sym_LT] = ACTIONS(935),
    [anon_sym_LT_EQ] = ACTIONS(933),
    [anon_sym_lt] = ACTIONS(935),
    [anon_sym_lte] = ACTIONS(935),
    [anon_sym_gt] = ACTIONS(935),
    [anon_sym_gte] = ACTIONS(935),
    [anon_sym_BANG] = ACTIONS(935),
    [anon_sym_AMP_AMP] = ACTIONS(933),
    [anon_sym_PIPE_PIPE] = ACTIONS(933),
    [anon_sym_QMARK_QMARK] = ACTIONS(933),
    [anon_sym_EQ] = ACTIONS(935),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(933),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(933),
    [sym_number] = ACTIONS(935),
    [anon_sym_true] = ACTIONS(935),
    [anon_sym_LBRACK] = ACTIONS(933),
    [anon_sym_RBRACK] = ACTIONS(933),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(935),
    [anon_sym_DOT] = ACTIONS(935),
  },
  [267] = {
    [anon_sym_LBRACE] = ACTIONS(967),
    [anon_sym_RBRACE] = ACTIONS(967),
    [anon_sym_LPAREN] = ACTIONS(967),
    [anon_sym_using] = ACTIONS(969),
    [anon_sym_is] = ACTIONS(969),
    [anon_sym_COMMA] = ACTIONS(967),
    [anon_sym_DOT_DOT] = ACTIONS(969),
    [anon_sym_DOT_DOT_LT] = ACTIONS(967),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(967),
    [anon_sym_COLON] = ACTIONS(967),
    [anon_sym_STAR] = ACTIONS(967),
    [anon_sym_PLUS] = ACTIONS(967),
    [anon_sym_SLASH] = ACTIONS(967),
    [anon_sym_DASH] = ACTIONS(967),
    [anon_sym_PERCENT] = ACTIONS(967),
    [anon_sym_EQ_EQ] = ACTIONS(967),
    [anon_sym_BANG_EQ] = ACTIONS(967),
    [anon_sym_LT] = ACTIONS(969),
    [anon_sym_LT_EQ] = ACTIONS(967),
    [anon_sym_lt] = ACTIONS(969),
    [anon_sym_lte] = ACTIONS(969),
    [anon_sym_gt] = ACTIONS(969),
    [anon_sym_gte] = ACTIONS(969),
    [anon_sym_BANG] = ACTIONS(969),
    [anon_sym_AMP_AMP] = ACTIONS(967),
    [anon_sym_PIPE_PIPE] = ACTIONS(967),
    [anon_sym_QMARK_QMARK] = ACTIONS(967),
    [anon_sym_EQ] = ACTIONS(969),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(967),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(967),
    [sym_number] = ACTIONS(969),
    [anon_sym_true] = ACTIONS(969),
    [anon_sym_LBRACK] = ACTIONS(967),
    [anon_sym_RBRACK] = ACTIONS(967),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(969),
    [anon_sym_DOT] = ACTIONS(969),
  },
  [268] = {
    [aux_sym_top_level_repeat1] = STATE(268),
    [anon_sym_LBRACE] = ACTIONS(971),
    [anon_sym_RBRACE] = ACTIONS(971),
    [anon_sym_LPAREN] = ACTIONS(971),
    [anon_sym_using] = ACTIONS(973),
    [anon_sym_is] = ACTIONS(973),
    [anon_sym_COMMA] = ACTIONS(971),
    [anon_sym_DOT_DOT] = ACTIONS(973),
    [anon_sym_DOT_DOT_LT] = ACTIONS(971),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(971),
    [anon_sym_COLON] = ACTIONS(971),
    [anon_sym_STAR] = ACTIONS(971),
    [anon_sym_PLUS] = ACTIONS(971),
    [anon_sym_SLASH] = ACTIONS(971),
    [anon_sym_DASH] = ACTIONS(971),
    [anon_sym_PERCENT] = ACTIONS(971),
    [anon_sym_EQ_EQ] = ACTIONS(971),
    [anon_sym_BANG_EQ] = ACTIONS(971),
    [anon_sym_LT] = ACTIONS(973),
    [anon_sym_LT_EQ] = ACTIONS(971),
    [anon_sym_lt] = ACTIONS(973),
    [anon_sym_lte] = ACTIONS(973),
    [anon_sym_gt] = ACTIONS(973),
    [anon_sym_gte] = ACTIONS(973),
    [anon_sym_BANG] = ACTIONS(973),
    [anon_sym_AMP_AMP] = ACTIONS(971),
    [anon_sym_PIPE_PIPE] = ACTIONS(971),
    [anon_sym_QMARK_QMARK] = ACTIONS(971),
    [anon_sym_EQ] = ACTIONS(973),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(971),
    [sym_number] = ACTIONS(973),
    [anon_sym_true] = ACTIONS(973),
    [anon_sym_LBRACK] = ACTIONS(971),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(973),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1197),
    [anon_sym_DOT] = ACTIONS(973),
  },
  [269] = {
    [sym_type] = STATE(269),
    [sym_group] = STATE(81),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat2] = STATE(269),
    [anon_sym_LBRACE] = ACTIONS(1200),
    [anon_sym_RBRACE] = ACTIONS(886),
    [anon_sym_LPAREN] = ACTIONS(1203),
    [anon_sym_using] = ACTIONS(881),
    [anon_sym_is] = ACTIONS(881),
    [anon_sym_COMMA] = ACTIONS(886),
    [anon_sym_DOT_DOT] = ACTIONS(881),
    [anon_sym_DOT_DOT_LT] = ACTIONS(886),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(886),
    [anon_sym_COLON] = ACTIONS(886),
    [anon_sym_STAR] = ACTIONS(886),
    [anon_sym_PLUS] = ACTIONS(886),
    [anon_sym_SLASH] = ACTIONS(886),
    [anon_sym_DASH] = ACTIONS(886),
    [anon_sym_PERCENT] = ACTIONS(886),
    [anon_sym_EQ_EQ] = ACTIONS(886),
    [anon_sym_BANG_EQ] = ACTIONS(886),
    [anon_sym_LT] = ACTIONS(881),
    [anon_sym_LT_EQ] = ACTIONS(886),
    [anon_sym_lt] = ACTIONS(881),
    [anon_sym_lte] = ACTIONS(881),
    [anon_sym_gt] = ACTIONS(881),
    [anon_sym_gte] = ACTIONS(881),
    [anon_sym_BANG] = ACTIONS(881),
    [anon_sym_AMP_AMP] = ACTIONS(886),
    [anon_sym_PIPE_PIPE] = ACTIONS(886),
    [anon_sym_QMARK_QMARK] = ACTIONS(886),
    [anon_sym_EQ] = ACTIONS(881),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1206),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1206),
    [sym_number] = ACTIONS(1209),
    [anon_sym_true] = ACTIONS(1212),
    [anon_sym_LBRACK] = ACTIONS(1215),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1218),
    [anon_sym_DOT] = ACTIONS(1221),
  },
  [270] = {
    [sym_type] = STATE(269),
    [sym_group] = STATE(81),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat2] = STATE(269),
    [anon_sym_LBRACE] = ACTIONS(982),
    [anon_sym_RBRACE] = ACTIONS(982),
    [anon_sym_LPAREN] = ACTIONS(982),
    [anon_sym_using] = ACTIONS(984),
    [anon_sym_is] = ACTIONS(984),
    [anon_sym_COMMA] = ACTIONS(982),
    [anon_sym_DOT_DOT] = ACTIONS(984),
    [anon_sym_DOT_DOT_LT] = ACTIONS(982),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(982),
    [anon_sym_COLON] = ACTIONS(982),
    [anon_sym_STAR] = ACTIONS(982),
    [anon_sym_PLUS] = ACTIONS(982),
    [anon_sym_SLASH] = ACTIONS(982),
    [anon_sym_DASH] = ACTIONS(982),
    [anon_sym_PERCENT] = ACTIONS(982),
    [anon_sym_EQ_EQ] = ACTIONS(982),
    [anon_sym_BANG_EQ] = ACTIONS(982),
    [anon_sym_LT] = ACTIONS(984),
    [anon_sym_LT_EQ] = ACTIONS(982),
    [anon_sym_lt] = ACTIONS(984),
    [anon_sym_lte] = ACTIONS(984),
    [anon_sym_gt] = ACTIONS(984),
    [anon_sym_gte] = ACTIONS(984),
    [anon_sym_BANG] = ACTIONS(984),
    [anon_sym_AMP_AMP] = ACTIONS(982),
    [anon_sym_PIPE_PIPE] = ACTIONS(982),
    [anon_sym_QMARK_QMARK] = ACTIONS(982),
    [anon_sym_EQ] = ACTIONS(984),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(982),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(982),
    [sym_number] = ACTIONS(984),
    [anon_sym_true] = ACTIONS(984),
    [anon_sym_LBRACK] = ACTIONS(982),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(984),
    [anon_sym_DOT] = ACTIONS(984),
  },
  [271] = {
    [anon_sym_LBRACE] = ACTIONS(874),
    [anon_sym_as] = ACTIONS(876),
    [anon_sym_QMARK] = ACTIONS(876),
    [anon_sym_LPAREN] = ACTIONS(874),
    [anon_sym_using] = ACTIONS(876),
    [anon_sym_is] = ACTIONS(876),
    [anon_sym_COMMA] = ACTIONS(874),
    [anon_sym_DOT_DOT] = ACTIONS(876),
    [anon_sym_DOT_DOT_LT] = ACTIONS(874),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(874),
    [anon_sym_COLON] = ACTIONS(874),
    [anon_sym_STAR] = ACTIONS(874),
    [anon_sym_PLUS] = ACTIONS(874),
    [anon_sym_SLASH] = ACTIONS(876),
    [anon_sym_DASH] = ACTIONS(874),
    [anon_sym_PERCENT] = ACTIONS(874),
    [anon_sym_EQ_EQ] = ACTIONS(874),
    [anon_sym_BANG_EQ] = ACTIONS(874),
    [anon_sym_LT] = ACTIONS(876),
    [anon_sym_LT_EQ] = ACTIONS(874),
    [anon_sym_lt] = ACTIONS(876),
    [anon_sym_lte] = ACTIONS(876),
    [anon_sym_gt] = ACTIONS(876),
    [anon_sym_gte] = ACTIONS(876),
    [anon_sym_BANG] = ACTIONS(876),
    [anon_sym_AMP_AMP] = ACTIONS(874),
    [anon_sym_PIPE_PIPE] = ACTIONS(874),
    [anon_sym_QMARK_QMARK] = ACTIONS(874),
    [anon_sym_EQ] = ACTIONS(876),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(874),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(874),
    [sym_number] = ACTIONS(876),
    [anon_sym_true] = ACTIONS(876),
    [anon_sym_LBRACK] = ACTIONS(874),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(876),
    [anon_sym_DOT] = ACTIONS(876),
    [anon_sym_GT] = ACTIONS(874),
    [anon_sym_SLASH_GT] = ACTIONS(874),
  },
  [272] = {
    [sym_type] = STATE(272),
    [sym_group] = STATE(95),
    [sym_string] = STATE(95),
    [sym_boolean] = STATE(95),
    [sym_sequence] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_top_level] = STATE(95),
    [sym_spec_var] = STATE(95),
    [aux_sym_as_expression_repeat2] = STATE(272),
    [anon_sym_LBRACE] = ACTIONS(1224),
    [anon_sym_as] = ACTIONS(881),
    [anon_sym_QMARK] = ACTIONS(881),
    [anon_sym_LPAREN] = ACTIONS(1227),
    [anon_sym_using] = ACTIONS(881),
    [anon_sym_is] = ACTIONS(881),
    [anon_sym_COMMA] = ACTIONS(886),
    [anon_sym_DOT_DOT] = ACTIONS(881),
    [anon_sym_DOT_DOT_LT] = ACTIONS(886),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(886),
    [anon_sym_COLON] = ACTIONS(886),
    [anon_sym_STAR] = ACTIONS(886),
    [anon_sym_PLUS] = ACTIONS(886),
    [anon_sym_SLASH] = ACTIONS(881),
    [anon_sym_DASH] = ACTIONS(886),
    [anon_sym_PERCENT] = ACTIONS(886),
    [anon_sym_EQ_EQ] = ACTIONS(886),
    [anon_sym_BANG_EQ] = ACTIONS(886),
    [anon_sym_LT] = ACTIONS(881),
    [anon_sym_LT_EQ] = ACTIONS(886),
    [anon_sym_lt] = ACTIONS(881),
    [anon_sym_lte] = ACTIONS(881),
    [anon_sym_gt] = ACTIONS(881),
    [anon_sym_gte] = ACTIONS(881),
    [anon_sym_BANG] = ACTIONS(881),
    [anon_sym_AMP_AMP] = ACTIONS(886),
    [anon_sym_PIPE_PIPE] = ACTIONS(886),
    [anon_sym_QMARK_QMARK] = ACTIONS(886),
    [anon_sym_EQ] = ACTIONS(881),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1230),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1230),
    [sym_number] = ACTIONS(1233),
    [anon_sym_true] = ACTIONS(1236),
    [anon_sym_LBRACK] = ACTIONS(1239),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1242),
    [anon_sym_DOT] = ACTIONS(1245),
    [anon_sym_GT] = ACTIONS(886),
    [anon_sym_SLASH_GT] = ACTIONS(886),
  },
  [273] = {
    [anon_sym_LBRACE] = ACTIONS(906),
    [anon_sym_as] = ACTIONS(908),
    [anon_sym_QMARK] = ACTIONS(908),
    [anon_sym_LPAREN] = ACTIONS(906),
    [anon_sym_using] = ACTIONS(908),
    [anon_sym_is] = ACTIONS(908),
    [anon_sym_COMMA] = ACTIONS(906),
    [anon_sym_DOT_DOT] = ACTIONS(908),
    [anon_sym_DOT_DOT_LT] = ACTIONS(906),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(906),
    [anon_sym_COLON] = ACTIONS(906),
    [anon_sym_STAR] = ACTIONS(906),
    [anon_sym_PLUS] = ACTIONS(906),
    [anon_sym_SLASH] = ACTIONS(908),
    [anon_sym_DASH] = ACTIONS(906),
    [anon_sym_PERCENT] = ACTIONS(906),
    [anon_sym_EQ_EQ] = ACTIONS(906),
    [anon_sym_BANG_EQ] = ACTIONS(906),
    [anon_sym_LT] = ACTIONS(908),
    [anon_sym_LT_EQ] = ACTIONS(906),
    [anon_sym_lt] = ACTIONS(908),
    [anon_sym_lte] = ACTIONS(908),
    [anon_sym_gt] = ACTIONS(908),
    [anon_sym_gte] = ACTIONS(908),
    [anon_sym_BANG] = ACTIONS(908),
    [anon_sym_AMP_AMP] = ACTIONS(906),
    [anon_sym_PIPE_PIPE] = ACTIONS(906),
    [anon_sym_QMARK_QMARK] = ACTIONS(906),
    [anon_sym_EQ] = ACTIONS(908),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(906),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(906),
    [sym_number] = ACTIONS(908),
    [anon_sym_true] = ACTIONS(908),
    [anon_sym_LBRACK] = ACTIONS(906),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(908),
    [anon_sym_DOT] = ACTIONS(908),
    [anon_sym_GT] = ACTIONS(906),
    [anon_sym_SLASH_GT] = ACTIONS(906),
  },
  [274] = {
    [anon_sym_LBRACE] = ACTIONS(913),
    [anon_sym_as] = ACTIONS(915),
    [anon_sym_QMARK] = ACTIONS(915),
    [anon_sym_LPAREN] = ACTIONS(913),
    [anon_sym_using] = ACTIONS(915),
    [anon_sym_is] = ACTIONS(915),
    [anon_sym_COMMA] = ACTIONS(913),
    [anon_sym_DOT_DOT] = ACTIONS(915),
    [anon_sym_DOT_DOT_LT] = ACTIONS(913),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(913),
    [anon_sym_COLON] = ACTIONS(913),
    [anon_sym_STAR] = ACTIONS(913),
    [anon_sym_PLUS] = ACTIONS(913),
    [anon_sym_SLASH] = ACTIONS(915),
    [anon_sym_DASH] = ACTIONS(913),
    [anon_sym_PERCENT] = ACTIONS(913),
    [anon_sym_EQ_EQ] = ACTIONS(913),
    [anon_sym_BANG_EQ] = ACTIONS(913),
    [anon_sym_LT] = ACTIONS(915),
    [anon_sym_LT_EQ] = ACTIONS(913),
    [anon_sym_lt] = ACTIONS(915),
    [anon_sym_lte] = ACTIONS(915),
    [anon_sym_gt] = ACTIONS(915),
    [anon_sym_gte] = ACTIONS(915),
    [anon_sym_BANG] = ACTIONS(915),
    [anon_sym_AMP_AMP] = ACTIONS(913),
    [anon_sym_PIPE_PIPE] = ACTIONS(913),
    [anon_sym_QMARK_QMARK] = ACTIONS(913),
    [anon_sym_EQ] = ACTIONS(915),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(913),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(913),
    [sym_number] = ACTIONS(915),
    [anon_sym_true] = ACTIONS(915),
    [anon_sym_LBRACK] = ACTIONS(913),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(915),
    [anon_sym_DOT] = ACTIONS(915),
    [anon_sym_GT] = ACTIONS(913),
    [anon_sym_SLASH_GT] = ACTIONS(913),
  },
  [275] = {
    [anon_sym_LBRACE] = ACTIONS(933),
    [anon_sym_as] = ACTIONS(935),
    [anon_sym_QMARK] = ACTIONS(935),
    [anon_sym_LPAREN] = ACTIONS(933),
    [anon_sym_using] = ACTIONS(935),
    [anon_sym_is] = ACTIONS(935),
    [anon_sym_COMMA] = ACTIONS(933),
    [anon_sym_DOT_DOT] = ACTIONS(935),
    [anon_sym_DOT_DOT_LT] = ACTIONS(933),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(933),
    [anon_sym_COLON] = ACTIONS(933),
    [anon_sym_STAR] = ACTIONS(933),
    [anon_sym_PLUS] = ACTIONS(933),
    [anon_sym_SLASH] = ACTIONS(935),
    [anon_sym_DASH] = ACTIONS(933),
    [anon_sym_PERCENT] = ACTIONS(933),
    [anon_sym_EQ_EQ] = ACTIONS(933),
    [anon_sym_BANG_EQ] = ACTIONS(933),
    [anon_sym_LT] = ACTIONS(935),
    [anon_sym_LT_EQ] = ACTIONS(933),
    [anon_sym_lt] = ACTIONS(935),
    [anon_sym_lte] = ACTIONS(935),
    [anon_sym_gt] = ACTIONS(935),
    [anon_sym_gte] = ACTIONS(935),
    [anon_sym_BANG] = ACTIONS(935),
    [anon_sym_AMP_AMP] = ACTIONS(933),
    [anon_sym_PIPE_PIPE] = ACTIONS(933),
    [anon_sym_QMARK_QMARK] = ACTIONS(933),
    [anon_sym_EQ] = ACTIONS(935),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(933),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(933),
    [sym_number] = ACTIONS(935),
    [anon_sym_true] = ACTIONS(935),
    [anon_sym_LBRACK] = ACTIONS(933),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(935),
    [anon_sym_DOT] = ACTIONS(935),
    [anon_sym_GT] = ACTIONS(933),
    [anon_sym_SLASH_GT] = ACTIONS(933),
  },
  [276] = {
    [anon_sym_LBRACE] = ACTIONS(967),
    [anon_sym_as] = ACTIONS(969),
    [anon_sym_QMARK] = ACTIONS(969),
    [anon_sym_LPAREN] = ACTIONS(967),
    [anon_sym_using] = ACTIONS(969),
    [anon_sym_is] = ACTIONS(969),
    [anon_sym_COMMA] = ACTIONS(967),
    [anon_sym_DOT_DOT] = ACTIONS(969),
    [anon_sym_DOT_DOT_LT] = ACTIONS(967),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(967),
    [anon_sym_COLON] = ACTIONS(967),
    [anon_sym_STAR] = ACTIONS(967),
    [anon_sym_PLUS] = ACTIONS(967),
    [anon_sym_SLASH] = ACTIONS(969),
    [anon_sym_DASH] = ACTIONS(967),
    [anon_sym_PERCENT] = ACTIONS(967),
    [anon_sym_EQ_EQ] = ACTIONS(967),
    [anon_sym_BANG_EQ] = ACTIONS(967),
    [anon_sym_LT] = ACTIONS(969),
    [anon_sym_LT_EQ] = ACTIONS(967),
    [anon_sym_lt] = ACTIONS(969),
    [anon_sym_lte] = ACTIONS(969),
    [anon_sym_gt] = ACTIONS(969),
    [anon_sym_gte] = ACTIONS(969),
    [anon_sym_BANG] = ACTIONS(969),
    [anon_sym_AMP_AMP] = ACTIONS(967),
    [anon_sym_PIPE_PIPE] = ACTIONS(967),
    [anon_sym_QMARK_QMARK] = ACTIONS(967),
    [anon_sym_EQ] = ACTIONS(969),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(967),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(967),
    [sym_number] = ACTIONS(969),
    [anon_sym_true] = ACTIONS(969),
    [anon_sym_LBRACK] = ACTIONS(967),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(969),
    [anon_sym_DOT] = ACTIONS(969),
    [anon_sym_GT] = ACTIONS(967),
    [anon_sym_SLASH_GT] = ACTIONS(967),
  },
  [277] = {
    [aux_sym_top_level_repeat1] = STATE(277),
    [anon_sym_LBRACE] = ACTIONS(971),
    [anon_sym_as] = ACTIONS(973),
    [anon_sym_QMARK] = ACTIONS(973),
    [anon_sym_LPAREN] = ACTIONS(971),
    [anon_sym_using] = ACTIONS(973),
    [anon_sym_is] = ACTIONS(973),
    [anon_sym_COMMA] = ACTIONS(971),
    [anon_sym_DOT_DOT] = ACTIONS(973),
    [anon_sym_DOT_DOT_LT] = ACTIONS(971),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(971),
    [anon_sym_COLON] = ACTIONS(971),
    [anon_sym_STAR] = ACTIONS(971),
    [anon_sym_PLUS] = ACTIONS(971),
    [anon_sym_SLASH] = ACTIONS(973),
    [anon_sym_DASH] = ACTIONS(971),
    [anon_sym_PERCENT] = ACTIONS(971),
    [anon_sym_EQ_EQ] = ACTIONS(971),
    [anon_sym_BANG_EQ] = ACTIONS(971),
    [anon_sym_LT] = ACTIONS(973),
    [anon_sym_LT_EQ] = ACTIONS(971),
    [anon_sym_lt] = ACTIONS(973),
    [anon_sym_lte] = ACTIONS(973),
    [anon_sym_gt] = ACTIONS(973),
    [anon_sym_gte] = ACTIONS(973),
    [anon_sym_BANG] = ACTIONS(973),
    [anon_sym_AMP_AMP] = ACTIONS(971),
    [anon_sym_PIPE_PIPE] = ACTIONS(971),
    [anon_sym_QMARK_QMARK] = ACTIONS(971),
    [anon_sym_EQ] = ACTIONS(973),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(971),
    [sym_number] = ACTIONS(973),
    [anon_sym_true] = ACTIONS(973),
    [anon_sym_LBRACK] = ACTIONS(971),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(973),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1248),
    [anon_sym_DOT] = ACTIONS(973),
    [anon_sym_GT] = ACTIONS(971),
    [anon_sym_SLASH_GT] = ACTIONS(971),
  },
  [278] = {
    [sym_type] = STATE(272),
    [sym_group] = STATE(95),
    [sym_string] = STATE(95),
    [sym_boolean] = STATE(95),
    [sym_sequence] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_top_level] = STATE(95),
    [sym_spec_var] = STATE(95),
    [aux_sym_as_expression_repeat2] = STATE(272),
    [anon_sym_LBRACE] = ACTIONS(978),
    [anon_sym_as] = ACTIONS(980),
    [anon_sym_QMARK] = ACTIONS(980),
    [anon_sym_LPAREN] = ACTIONS(978),
    [anon_sym_using] = ACTIONS(980),
    [anon_sym_is] = ACTIONS(980),
    [anon_sym_COMMA] = ACTIONS(978),
    [anon_sym_DOT_DOT] = ACTIONS(980),
    [anon_sym_DOT_DOT_LT] = ACTIONS(978),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(978),
    [anon_sym_COLON] = ACTIONS(978),
    [anon_sym_STAR] = ACTIONS(978),
    [anon_sym_PLUS] = ACTIONS(978),
    [anon_sym_SLASH] = ACTIONS(980),
    [anon_sym_DASH] = ACTIONS(978),
    [anon_sym_PERCENT] = ACTIONS(978),
    [anon_sym_EQ_EQ] = ACTIONS(978),
    [anon_sym_BANG_EQ] = ACTIONS(978),
    [anon_sym_LT] = ACTIONS(980),
    [anon_sym_LT_EQ] = ACTIONS(978),
    [anon_sym_lt] = ACTIONS(980),
    [anon_sym_lte] = ACTIONS(980),
    [anon_sym_gt] = ACTIONS(980),
    [anon_sym_gte] = ACTIONS(980),
    [anon_sym_BANG] = ACTIONS(980),
    [anon_sym_AMP_AMP] = ACTIONS(978),
    [anon_sym_PIPE_PIPE] = ACTIONS(978),
    [anon_sym_QMARK_QMARK] = ACTIONS(978),
    [anon_sym_EQ] = ACTIONS(980),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(978),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(978),
    [sym_number] = ACTIONS(980),
    [anon_sym_true] = ACTIONS(980),
    [anon_sym_LBRACK] = ACTIONS(978),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(980),
    [anon_sym_DOT] = ACTIONS(980),
    [anon_sym_GT] = ACTIONS(978),
    [anon_sym_SLASH_GT] = ACTIONS(978),
  },
  [279] = {
    [sym_type] = STATE(272),
    [sym_group] = STATE(95),
    [sym_string] = STATE(95),
    [sym_boolean] = STATE(95),
    [sym_sequence] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_top_level] = STATE(95),
    [sym_spec_var] = STATE(95),
    [aux_sym_as_expression_repeat2] = STATE(272),
    [anon_sym_LBRACE] = ACTIONS(982),
    [anon_sym_as] = ACTIONS(984),
    [anon_sym_QMARK] = ACTIONS(984),
    [anon_sym_LPAREN] = ACTIONS(982),
    [anon_sym_using] = ACTIONS(984),
    [anon_sym_is] = ACTIONS(984),
    [anon_sym_COMMA] = ACTIONS(982),
    [anon_sym_DOT_DOT] = ACTIONS(984),
    [anon_sym_DOT_DOT_LT] = ACTIONS(982),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(982),
    [anon_sym_COLON] = ACTIONS(982),
    [anon_sym_STAR] = ACTIONS(982),
    [anon_sym_PLUS] = ACTIONS(982),
    [anon_sym_SLASH] = ACTIONS(984),
    [anon_sym_DASH] = ACTIONS(982),
    [anon_sym_PERCENT] = ACTIONS(982),
    [anon_sym_EQ_EQ] = ACTIONS(982),
    [anon_sym_BANG_EQ] = ACTIONS(982),
    [anon_sym_LT] = ACTIONS(984),
    [anon_sym_LT_EQ] = ACTIONS(982),
    [anon_sym_lt] = ACTIONS(984),
    [anon_sym_lte] = ACTIONS(984),
    [anon_sym_gt] = ACTIONS(984),
    [anon_sym_gte] = ACTIONS(984),
    [anon_sym_BANG] = ACTIONS(984),
    [anon_sym_AMP_AMP] = ACTIONS(982),
    [anon_sym_PIPE_PIPE] = ACTIONS(982),
    [anon_sym_QMARK_QMARK] = ACTIONS(982),
    [anon_sym_EQ] = ACTIONS(984),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(982),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(982),
    [sym_number] = ACTIONS(984),
    [anon_sym_true] = ACTIONS(984),
    [anon_sym_LBRACK] = ACTIONS(982),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(984),
    [anon_sym_DOT] = ACTIONS(984),
    [anon_sym_GT] = ACTIONS(982),
    [anon_sym_SLASH_GT] = ACTIONS(982),
  },
  [280] = {
    [ts_builtin_sym_end] = ACTIONS(1251),
    [sym_comment] = ACTIONS(1251),
    [anon_sym_DOLLAR] = ACTIONS(1251),
    [anon_sym_LT_AT] = ACTIONS(1251),
    [anon_sym_LT_POUND] = ACTIONS(1253),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1251),
    [sym_break] = ACTIONS(1251),
    [sym_continue] = ACTIONS(1251),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1251),
    [anon_sym_LT_POUNDitems] = ACTIONS(1251),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1251),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1251),
    [anon_sym_LT_POUNDif] = ACTIONS(1251),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1251),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1251),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1251),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1251),
    [anon_sym_LT_POUNDcase] = ACTIONS(1251),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1251),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1251),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1251),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1251),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1251),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1251),
    [anon_sym_LT_POUNDnested] = ACTIONS(1251),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1251),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1251),
    [sym_recover] = ACTIONS(1251),
    [sym_fallback] = ACTIONS(1251),
    [sym_flush] = ACTIONS(1251),
    [anon_sym_LT_POUNDftl] = ACTIONS(1251),
    [anon_sym_LT_POUNDimport] = ACTIONS(1251),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1251),
    [sym_lt] = ACTIONS(1251),
    [sym_nt] = ACTIONS(1251),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1251),
    [sym_rt] = ACTIONS(1251),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1251),
    [sym_stop] = ACTIONS(1251),
    [sym_t] = ACTIONS(1251),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1251),
    [anon_sym_LT_POUNDassign] = ACTIONS(1251),
    [sym_end_assign] = ACTIONS(1251),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1251),
    [sym_end_global] = ACTIONS(1251),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1251),
    [sym_end_local] = ACTIONS(1251),
  },
  [281] = {
    [anon_sym_LT_AT] = ACTIONS(1255),
    [anon_sym_LT_POUND] = ACTIONS(1257),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1255),
    [sym_break] = ACTIONS(1255),
    [sym_continue] = ACTIONS(1255),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1255),
    [anon_sym_LT_POUNDitems] = ACTIONS(1255),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1255),
    [anon_sym_LT_POUNDif] = ACTIONS(1255),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1255),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1255),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1255),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1255),
    [sym_fallback] = ACTIONS(1255),
    [sym_flush] = ACTIONS(1255),
    [anon_sym_LT_POUNDftl] = ACTIONS(1255),
    [anon_sym_LT_POUNDimport] = ACTIONS(1255),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1255),
    [sym_lt] = ACTIONS(1255),
    [sym_nt] = ACTIONS(1255),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1255),
    [sym_rt] = ACTIONS(1255),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1255),
    [sym_stop] = ACTIONS(1255),
    [sym_t] = ACTIONS(1255),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1255),
    [anon_sym_LT_POUNDassign] = ACTIONS(1255),
    [sym_end_assign] = ACTIONS(1255),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1255),
    [sym_end_global] = ACTIONS(1255),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1255),
    [sym_end_local] = ACTIONS(1255),
  },
  [282] = {
    [sym_directive] = STATE(281),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_list_middle] = STATE(316),
    [sym_items] = STATE(281),
    [sym_sep] = STATE(281),
    [sym_sep_block] = STATE(286),
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
    [aux_sym_list_repeat1] = STATE(316),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1259),
    [sym_break] = ACTIONS(866),
    [sym_continue] = ACTIONS(866),
    [anon_sym_LT_POUNDitems] = ACTIONS(870),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(872),
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
  [283] = {
    [sym_parameter_group] = STATE(317),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(49),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(48),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(49),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(81),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(85),
    [anon_sym_is] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_DOT_DOT] = ACTIONS(85),
    [anon_sym_DOT_DOT_LT] = ACTIONS(87),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_PERCENT] = ACTIONS(87),
    [anon_sym_EQ_EQ] = ACTIONS(87),
    [anon_sym_BANG_EQ] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_LT_EQ] = ACTIONS(87),
    [anon_sym_lt] = ACTIONS(85),
    [anon_sym_lte] = ACTIONS(85),
    [anon_sym_gt] = ACTIONS(85),
    [anon_sym_gte] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_PIPE_PIPE] = ACTIONS(87),
    [anon_sym_QMARK_QMARK] = ACTIONS(87),
    [anon_sym_EQ] = ACTIONS(85),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(89),
    [anon_sym_DOT] = ACTIONS(79),
  },
  [284] = {
    [anon_sym_LT_AT] = ACTIONS(1261),
    [anon_sym_LT_POUND] = ACTIONS(1263),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1261),
    [sym_break] = ACTIONS(1261),
    [sym_continue] = ACTIONS(1261),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1261),
    [anon_sym_LT_POUNDitems] = ACTIONS(1261),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1261),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1261),
    [anon_sym_LT_SLASH_POUNDsep_GT] = ACTIONS(1265),
    [anon_sym_LT_POUNDif] = ACTIONS(1261),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1261),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1261),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1261),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1261),
    [sym_fallback] = ACTIONS(1261),
    [sym_flush] = ACTIONS(1261),
    [anon_sym_LT_POUNDftl] = ACTIONS(1261),
    [anon_sym_LT_POUNDimport] = ACTIONS(1261),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1261),
    [sym_lt] = ACTIONS(1261),
    [sym_nt] = ACTIONS(1261),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1261),
    [sym_rt] = ACTIONS(1261),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1261),
    [sym_stop] = ACTIONS(1261),
    [sym_t] = ACTIONS(1261),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1261),
    [anon_sym_LT_POUNDassign] = ACTIONS(1261),
    [sym_end_assign] = ACTIONS(1261),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1261),
    [sym_end_global] = ACTIONS(1261),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1261),
    [sym_end_local] = ACTIONS(1261),
  },
  [285] = {
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1267),
  },
  [286] = {
    [anon_sym_LT_AT] = ACTIONS(1261),
    [anon_sym_LT_POUND] = ACTIONS(1263),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1261),
    [sym_break] = ACTIONS(1261),
    [sym_continue] = ACTIONS(1261),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1261),
    [anon_sym_LT_POUNDitems] = ACTIONS(1261),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1261),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1261),
    [anon_sym_LT_POUNDif] = ACTIONS(1261),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1261),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1261),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1261),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1261),
    [sym_fallback] = ACTIONS(1261),
    [sym_flush] = ACTIONS(1261),
    [anon_sym_LT_POUNDftl] = ACTIONS(1261),
    [anon_sym_LT_POUNDimport] = ACTIONS(1261),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1261),
    [sym_lt] = ACTIONS(1261),
    [sym_nt] = ACTIONS(1261),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1261),
    [sym_rt] = ACTIONS(1261),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1261),
    [sym_stop] = ACTIONS(1261),
    [sym_t] = ACTIONS(1261),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1261),
    [anon_sym_LT_POUNDassign] = ACTIONS(1261),
    [sym_end_assign] = ACTIONS(1261),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1261),
    [sym_end_global] = ACTIONS(1261),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1261),
    [sym_end_local] = ACTIONS(1261),
  },
  [287] = {
    [sym_directive] = STATE(281),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_list_middle] = STATE(321),
    [sym_list_else] = STATE(320),
    [sym_items] = STATE(281),
    [sym_sep] = STATE(281),
    [sym_sep_block] = STATE(286),
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
    [aux_sym_list_repeat1] = STATE(321),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1267),
    [sym_break] = ACTIONS(866),
    [sym_continue] = ACTIONS(866),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(868),
    [anon_sym_LT_POUNDitems] = ACTIONS(870),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(872),
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
  [288] = {
    [sym_type] = STATE(288),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(288),
    [anon_sym_LBRACE] = ACTIONS(878),
    [anon_sym_as] = ACTIONS(881),
    [anon_sym_QMARK] = ACTIONS(881),
    [anon_sym_LPAREN] = ACTIONS(883),
    [anon_sym_RPAREN] = ACTIONS(886),
    [anon_sym_using] = ACTIONS(881),
    [anon_sym_is] = ACTIONS(881),
    [anon_sym_COMMA] = ACTIONS(886),
    [anon_sym_DOT_DOT] = ACTIONS(881),
    [anon_sym_DOT_DOT_LT] = ACTIONS(886),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(886),
    [anon_sym_COLON] = ACTIONS(886),
    [anon_sym_STAR] = ACTIONS(886),
    [anon_sym_PLUS] = ACTIONS(886),
    [anon_sym_SLASH] = ACTIONS(886),
    [anon_sym_DASH] = ACTIONS(886),
    [anon_sym_PERCENT] = ACTIONS(886),
    [anon_sym_EQ_EQ] = ACTIONS(886),
    [anon_sym_BANG_EQ] = ACTIONS(886),
    [anon_sym_LT] = ACTIONS(881),
    [anon_sym_LT_EQ] = ACTIONS(886),
    [anon_sym_lt] = ACTIONS(881),
    [anon_sym_lte] = ACTIONS(881),
    [anon_sym_gt] = ACTIONS(881),
    [anon_sym_gte] = ACTIONS(881),
    [anon_sym_BANG] = ACTIONS(881),
    [anon_sym_AMP_AMP] = ACTIONS(886),
    [anon_sym_PIPE_PIPE] = ACTIONS(886),
    [anon_sym_QMARK_QMARK] = ACTIONS(886),
    [anon_sym_EQ] = ACTIONS(881),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(888),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(888),
    [sym_number] = ACTIONS(891),
    [anon_sym_true] = ACTIONS(894),
    [anon_sym_LBRACK] = ACTIONS(897),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1269),
    [anon_sym_DOT] = ACTIONS(903),
  },
  [289] = {
    [aux_sym_top_level_repeat1] = STATE(289),
    [anon_sym_LBRACE] = ACTIONS(971),
    [anon_sym_as] = ACTIONS(973),
    [anon_sym_QMARK] = ACTIONS(973),
    [anon_sym_LPAREN] = ACTIONS(971),
    [anon_sym_RPAREN] = ACTIONS(971),
    [anon_sym_using] = ACTIONS(973),
    [anon_sym_is] = ACTIONS(973),
    [anon_sym_COMMA] = ACTIONS(971),
    [anon_sym_DOT_DOT] = ACTIONS(973),
    [anon_sym_DOT_DOT_LT] = ACTIONS(971),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(971),
    [anon_sym_COLON] = ACTIONS(971),
    [anon_sym_STAR] = ACTIONS(971),
    [anon_sym_PLUS] = ACTIONS(971),
    [anon_sym_SLASH] = ACTIONS(971),
    [anon_sym_DASH] = ACTIONS(971),
    [anon_sym_PERCENT] = ACTIONS(971),
    [anon_sym_EQ_EQ] = ACTIONS(971),
    [anon_sym_BANG_EQ] = ACTIONS(971),
    [anon_sym_LT] = ACTIONS(973),
    [anon_sym_LT_EQ] = ACTIONS(971),
    [anon_sym_lt] = ACTIONS(973),
    [anon_sym_lte] = ACTIONS(973),
    [anon_sym_gt] = ACTIONS(973),
    [anon_sym_gte] = ACTIONS(973),
    [anon_sym_BANG] = ACTIONS(973),
    [anon_sym_AMP_AMP] = ACTIONS(971),
    [anon_sym_PIPE_PIPE] = ACTIONS(971),
    [anon_sym_QMARK_QMARK] = ACTIONS(971),
    [anon_sym_EQ] = ACTIONS(973),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(971),
    [sym_number] = ACTIONS(973),
    [anon_sym_true] = ACTIONS(973),
    [anon_sym_LBRACK] = ACTIONS(971),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(973),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(975),
    [anon_sym_DOT] = ACTIONS(973),
  },
  [290] = {
    [sym_type] = STATE(288),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(288),
    [anon_sym_LBRACE] = ACTIONS(978),
    [anon_sym_as] = ACTIONS(980),
    [anon_sym_QMARK] = ACTIONS(980),
    [anon_sym_LPAREN] = ACTIONS(978),
    [anon_sym_RPAREN] = ACTIONS(978),
    [anon_sym_using] = ACTIONS(980),
    [anon_sym_is] = ACTIONS(980),
    [anon_sym_COMMA] = ACTIONS(978),
    [anon_sym_DOT_DOT] = ACTIONS(980),
    [anon_sym_DOT_DOT_LT] = ACTIONS(978),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(978),
    [anon_sym_COLON] = ACTIONS(978),
    [anon_sym_STAR] = ACTIONS(978),
    [anon_sym_PLUS] = ACTIONS(978),
    [anon_sym_SLASH] = ACTIONS(978),
    [anon_sym_DASH] = ACTIONS(978),
    [anon_sym_PERCENT] = ACTIONS(978),
    [anon_sym_EQ_EQ] = ACTIONS(978),
    [anon_sym_BANG_EQ] = ACTIONS(978),
    [anon_sym_LT] = ACTIONS(980),
    [anon_sym_LT_EQ] = ACTIONS(978),
    [anon_sym_lt] = ACTIONS(980),
    [anon_sym_lte] = ACTIONS(980),
    [anon_sym_gt] = ACTIONS(980),
    [anon_sym_gte] = ACTIONS(980),
    [anon_sym_BANG] = ACTIONS(980),
    [anon_sym_AMP_AMP] = ACTIONS(978),
    [anon_sym_PIPE_PIPE] = ACTIONS(978),
    [anon_sym_QMARK_QMARK] = ACTIONS(978),
    [anon_sym_EQ] = ACTIONS(980),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(978),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(978),
    [sym_number] = ACTIONS(980),
    [anon_sym_true] = ACTIONS(980),
    [anon_sym_LBRACK] = ACTIONS(978),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(980),
    [anon_sym_DOT] = ACTIONS(980),
  },
  [291] = {
    [sym_type] = STATE(288),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(288),
    [anon_sym_LBRACE] = ACTIONS(982),
    [anon_sym_as] = ACTIONS(984),
    [anon_sym_QMARK] = ACTIONS(984),
    [anon_sym_LPAREN] = ACTIONS(982),
    [anon_sym_RPAREN] = ACTIONS(982),
    [anon_sym_using] = ACTIONS(984),
    [anon_sym_is] = ACTIONS(984),
    [anon_sym_COMMA] = ACTIONS(982),
    [anon_sym_DOT_DOT] = ACTIONS(984),
    [anon_sym_DOT_DOT_LT] = ACTIONS(982),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(982),
    [anon_sym_COLON] = ACTIONS(982),
    [anon_sym_STAR] = ACTIONS(982),
    [anon_sym_PLUS] = ACTIONS(982),
    [anon_sym_SLASH] = ACTIONS(982),
    [anon_sym_DASH] = ACTIONS(982),
    [anon_sym_PERCENT] = ACTIONS(982),
    [anon_sym_EQ_EQ] = ACTIONS(982),
    [anon_sym_BANG_EQ] = ACTIONS(982),
    [anon_sym_LT] = ACTIONS(984),
    [anon_sym_LT_EQ] = ACTIONS(982),
    [anon_sym_lt] = ACTIONS(984),
    [anon_sym_lte] = ACTIONS(984),
    [anon_sym_gt] = ACTIONS(984),
    [anon_sym_gte] = ACTIONS(984),
    [anon_sym_BANG] = ACTIONS(984),
    [anon_sym_AMP_AMP] = ACTIONS(982),
    [anon_sym_PIPE_PIPE] = ACTIONS(982),
    [anon_sym_QMARK_QMARK] = ACTIONS(982),
    [anon_sym_EQ] = ACTIONS(984),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(982),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(982),
    [sym_number] = ACTIONS(984),
    [anon_sym_true] = ACTIONS(984),
    [anon_sym_LBRACK] = ACTIONS(982),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(984),
    [anon_sym_DOT] = ACTIONS(984),
  },
  [292] = {
    [aux_sym_top_level_repeat1] = STATE(292),
    [anon_sym_LBRACE] = ACTIONS(971),
    [anon_sym_LPAREN] = ACTIONS(971),
    [anon_sym_using] = ACTIONS(973),
    [anon_sym_is] = ACTIONS(973),
    [anon_sym_COMMA] = ACTIONS(971),
    [anon_sym_DOT_DOT] = ACTIONS(973),
    [anon_sym_DOT_DOT_LT] = ACTIONS(971),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(971),
    [anon_sym_COLON] = ACTIONS(971),
    [anon_sym_STAR] = ACTIONS(971),
    [anon_sym_PLUS] = ACTIONS(971),
    [anon_sym_SLASH] = ACTIONS(971),
    [anon_sym_DASH] = ACTIONS(971),
    [anon_sym_PERCENT] = ACTIONS(971),
    [anon_sym_EQ_EQ] = ACTIONS(971),
    [anon_sym_BANG_EQ] = ACTIONS(971),
    [anon_sym_LT] = ACTIONS(973),
    [anon_sym_LT_EQ] = ACTIONS(971),
    [anon_sym_lt] = ACTIONS(973),
    [anon_sym_lte] = ACTIONS(973),
    [anon_sym_gt] = ACTIONS(973),
    [anon_sym_gte] = ACTIONS(973),
    [anon_sym_BANG] = ACTIONS(973),
    [anon_sym_AMP_AMP] = ACTIONS(971),
    [anon_sym_PIPE_PIPE] = ACTIONS(971),
    [anon_sym_QMARK_QMARK] = ACTIONS(971),
    [anon_sym_EQ] = ACTIONS(973),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(971),
    [sym_number] = ACTIONS(973),
    [anon_sym_true] = ACTIONS(973),
    [anon_sym_LBRACK] = ACTIONS(971),
    [anon_sym_RBRACK] = ACTIONS(971),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(973),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1197),
    [anon_sym_DOT] = ACTIONS(973),
  },
  [293] = {
    [sym_type] = STATE(293),
    [sym_group] = STATE(81),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat2] = STATE(293),
    [anon_sym_LBRACE] = ACTIONS(1200),
    [anon_sym_LPAREN] = ACTIONS(1203),
    [anon_sym_using] = ACTIONS(881),
    [anon_sym_is] = ACTIONS(881),
    [anon_sym_COMMA] = ACTIONS(886),
    [anon_sym_DOT_DOT] = ACTIONS(881),
    [anon_sym_DOT_DOT_LT] = ACTIONS(886),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(886),
    [anon_sym_COLON] = ACTIONS(886),
    [anon_sym_STAR] = ACTIONS(886),
    [anon_sym_PLUS] = ACTIONS(886),
    [anon_sym_SLASH] = ACTIONS(886),
    [anon_sym_DASH] = ACTIONS(886),
    [anon_sym_PERCENT] = ACTIONS(886),
    [anon_sym_EQ_EQ] = ACTIONS(886),
    [anon_sym_BANG_EQ] = ACTIONS(886),
    [anon_sym_LT] = ACTIONS(881),
    [anon_sym_LT_EQ] = ACTIONS(886),
    [anon_sym_lt] = ACTIONS(881),
    [anon_sym_lte] = ACTIONS(881),
    [anon_sym_gt] = ACTIONS(881),
    [anon_sym_gte] = ACTIONS(881),
    [anon_sym_BANG] = ACTIONS(881),
    [anon_sym_AMP_AMP] = ACTIONS(886),
    [anon_sym_PIPE_PIPE] = ACTIONS(886),
    [anon_sym_QMARK_QMARK] = ACTIONS(886),
    [anon_sym_EQ] = ACTIONS(881),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1206),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1206),
    [sym_number] = ACTIONS(1209),
    [anon_sym_true] = ACTIONS(1212),
    [anon_sym_LBRACK] = ACTIONS(1215),
    [anon_sym_RBRACK] = ACTIONS(886),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1272),
    [anon_sym_DOT] = ACTIONS(1221),
  },
  [294] = {
    [sym_type] = STATE(293),
    [sym_group] = STATE(81),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat2] = STATE(293),
    [anon_sym_LBRACE] = ACTIONS(982),
    [anon_sym_LPAREN] = ACTIONS(982),
    [anon_sym_using] = ACTIONS(984),
    [anon_sym_is] = ACTIONS(984),
    [anon_sym_COMMA] = ACTIONS(982),
    [anon_sym_DOT_DOT] = ACTIONS(984),
    [anon_sym_DOT_DOT_LT] = ACTIONS(982),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(982),
    [anon_sym_COLON] = ACTIONS(982),
    [anon_sym_STAR] = ACTIONS(982),
    [anon_sym_PLUS] = ACTIONS(982),
    [anon_sym_SLASH] = ACTIONS(982),
    [anon_sym_DASH] = ACTIONS(982),
    [anon_sym_PERCENT] = ACTIONS(982),
    [anon_sym_EQ_EQ] = ACTIONS(982),
    [anon_sym_BANG_EQ] = ACTIONS(982),
    [anon_sym_LT] = ACTIONS(984),
    [anon_sym_LT_EQ] = ACTIONS(982),
    [anon_sym_lt] = ACTIONS(984),
    [anon_sym_lte] = ACTIONS(984),
    [anon_sym_gt] = ACTIONS(984),
    [anon_sym_gte] = ACTIONS(984),
    [anon_sym_BANG] = ACTIONS(984),
    [anon_sym_AMP_AMP] = ACTIONS(982),
    [anon_sym_PIPE_PIPE] = ACTIONS(982),
    [anon_sym_QMARK_QMARK] = ACTIONS(982),
    [anon_sym_EQ] = ACTIONS(984),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(982),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(982),
    [sym_number] = ACTIONS(984),
    [anon_sym_true] = ACTIONS(984),
    [anon_sym_LBRACK] = ACTIONS(982),
    [anon_sym_RBRACK] = ACTIONS(982),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(984),
    [anon_sym_DOT] = ACTIONS(984),
  },
  [295] = {
    [sym_directive] = STATE(230),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_elseif] = STATE(230),
    [sym_if_middle] = STATE(322),
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
    [aux_sym_if_repeat1] = STATE(322),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1275),
    [anon_sym_LT_POUNDelseif] = ACTIONS(538),
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
    [anon_sym_LT_AT] = ACTIONS(1277),
    [anon_sym_LT_POUND] = ACTIONS(1279),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1277),
    [anon_sym_LT_POUNDif] = ACTIONS(1277),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1277),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1277),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1277),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1277),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1277),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1277),
    [sym_fallback] = ACTIONS(1277),
    [sym_flush] = ACTIONS(1277),
    [anon_sym_LT_POUNDftl] = ACTIONS(1277),
    [anon_sym_LT_POUNDimport] = ACTIONS(1277),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1277),
    [sym_lt] = ACTIONS(1277),
    [sym_nt] = ACTIONS(1277),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1277),
    [sym_rt] = ACTIONS(1277),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1277),
    [sym_stop] = ACTIONS(1277),
    [sym_t] = ACTIONS(1277),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1277),
    [anon_sym_LT_POUNDassign] = ACTIONS(1277),
    [sym_end_assign] = ACTIONS(1277),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1277),
    [sym_end_global] = ACTIONS(1277),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1277),
    [sym_end_local] = ACTIONS(1277),
  },
  [297] = {
    [sym_parameter_group] = STATE(132),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(41),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(40),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(41),
    [aux_sym_group_repeat1] = STATE(132),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DOT_DOT_LT] = ACTIONS(67),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_lte] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_gte] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_QMARK_QMARK] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(1281),
  },
  [298] = {
    [ts_builtin_sym_end] = ACTIONS(1283),
    [sym_comment] = ACTIONS(1283),
    [anon_sym_DOLLAR] = ACTIONS(1283),
    [anon_sym_LT_AT] = ACTIONS(1283),
    [anon_sym_LT_POUND] = ACTIONS(1285),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1283),
    [sym_break] = ACTIONS(1283),
    [sym_continue] = ACTIONS(1283),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1283),
    [anon_sym_LT_POUNDitems] = ACTIONS(1283),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1283),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1283),
    [anon_sym_LT_POUNDif] = ACTIONS(1283),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1283),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1283),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1283),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1283),
    [anon_sym_LT_POUNDcase] = ACTIONS(1283),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1283),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1283),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1283),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1283),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1283),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1283),
    [anon_sym_LT_POUNDnested] = ACTIONS(1283),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1283),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1283),
    [sym_recover] = ACTIONS(1283),
    [sym_fallback] = ACTIONS(1283),
    [sym_flush] = ACTIONS(1283),
    [anon_sym_LT_POUNDftl] = ACTIONS(1283),
    [anon_sym_LT_POUNDimport] = ACTIONS(1283),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1283),
    [sym_lt] = ACTIONS(1283),
    [sym_nt] = ACTIONS(1283),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1283),
    [sym_rt] = ACTIONS(1283),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1283),
    [sym_stop] = ACTIONS(1283),
    [sym_t] = ACTIONS(1283),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1283),
    [anon_sym_LT_POUNDassign] = ACTIONS(1283),
    [sym_end_assign] = ACTIONS(1283),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1283),
    [sym_end_global] = ACTIONS(1283),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1283),
    [sym_end_local] = ACTIONS(1283),
  },
  [299] = {
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1287),
  },
  [300] = {
    [sym_directive] = STATE(230),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_elseif] = STATE(230),
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
    [anon_sym_LT_AT] = ACTIONS(1289),
    [anon_sym_LT_POUND] = ACTIONS(1292),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1295),
    [anon_sym_LT_POUNDif] = ACTIONS(1297),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1295),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1300),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1303),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1306),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1309),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1312),
    [sym_fallback] = ACTIONS(1315),
    [sym_flush] = ACTIONS(1315),
    [anon_sym_LT_POUNDftl] = ACTIONS(1318),
    [anon_sym_LT_POUNDimport] = ACTIONS(1321),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1324),
    [sym_lt] = ACTIONS(1315),
    [sym_nt] = ACTIONS(1315),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1327),
    [sym_rt] = ACTIONS(1315),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1330),
    [sym_stop] = ACTIONS(1315),
    [sym_t] = ACTIONS(1315),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1333),
    [anon_sym_LT_POUNDassign] = ACTIONS(1336),
    [sym_end_assign] = ACTIONS(1339),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1342),
    [sym_end_global] = ACTIONS(1345),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1348),
    [sym_end_local] = ACTIONS(1351),
  },
  [301] = {
    [anon_sym_LBRACE] = ACTIONS(874),
    [anon_sym_LPAREN] = ACTIONS(874),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(874),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(874),
    [sym_number] = ACTIONS(876),
    [anon_sym_true] = ACTIONS(876),
    [anon_sym_LBRACK] = ACTIONS(874),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(876),
    [anon_sym_DOT] = ACTIONS(874),
    [anon_sym_GT] = ACTIONS(874),
  },
  [302] = {
    [anon_sym_LBRACE] = ACTIONS(913),
    [anon_sym_LPAREN] = ACTIONS(913),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(913),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(913),
    [sym_number] = ACTIONS(915),
    [anon_sym_true] = ACTIONS(915),
    [anon_sym_LBRACK] = ACTIONS(913),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(915),
    [anon_sym_DOT] = ACTIONS(913),
    [anon_sym_GT] = ACTIONS(913),
  },
  [303] = {
    [anon_sym_LBRACE] = ACTIONS(933),
    [anon_sym_LPAREN] = ACTIONS(933),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(933),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(933),
    [sym_number] = ACTIONS(935),
    [anon_sym_true] = ACTIONS(935),
    [anon_sym_LBRACK] = ACTIONS(933),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(935),
    [anon_sym_DOT] = ACTIONS(933),
    [anon_sym_GT] = ACTIONS(933),
  },
  [304] = {
    [anon_sym_LBRACE] = ACTIONS(967),
    [anon_sym_LPAREN] = ACTIONS(967),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(967),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(967),
    [sym_number] = ACTIONS(969),
    [anon_sym_true] = ACTIONS(969),
    [anon_sym_LBRACK] = ACTIONS(967),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(969),
    [anon_sym_DOT] = ACTIONS(967),
    [anon_sym_GT] = ACTIONS(967),
  },
  [305] = {
    [aux_sym_top_level_repeat1] = STATE(305),
    [anon_sym_LBRACE] = ACTIONS(971),
    [anon_sym_LPAREN] = ACTIONS(971),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(971),
    [sym_number] = ACTIONS(973),
    [anon_sym_true] = ACTIONS(973),
    [anon_sym_LBRACK] = ACTIONS(971),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(973),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1354),
    [anon_sym_DOT] = ACTIONS(973),
    [anon_sym_GT] = ACTIONS(971),
  },
  [306] = {
    [aux_sym_top_level_repeat1] = STATE(306),
    [anon_sym_LPAREN] = ACTIONS(971),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(975),
    [anon_sym_GT] = ACTIONS(971),
  },
  [307] = {
    [anon_sym_GT] = ACTIONS(1357),
  },
  [308] = {
    [sym_directive] = STATE(326),
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
    [aux_sym_case_repeat1] = STATE(326),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1359),
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
  [309] = {
    [ts_builtin_sym_end] = ACTIONS(1361),
    [sym_comment] = ACTIONS(1361),
    [anon_sym_DOLLAR] = ACTIONS(1361),
    [anon_sym_LT_AT] = ACTIONS(1361),
    [anon_sym_LT_POUND] = ACTIONS(1363),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1361),
    [sym_break] = ACTIONS(1361),
    [sym_continue] = ACTIONS(1361),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1361),
    [anon_sym_LT_POUNDitems] = ACTIONS(1361),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1361),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1361),
    [anon_sym_LT_POUNDif] = ACTIONS(1361),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1361),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1361),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1361),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1361),
    [anon_sym_LT_POUNDcase] = ACTIONS(1361),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1361),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1361),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1361),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1361),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1361),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1361),
    [anon_sym_LT_POUNDnested] = ACTIONS(1361),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1361),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1361),
    [sym_recover] = ACTIONS(1361),
    [sym_fallback] = ACTIONS(1361),
    [sym_flush] = ACTIONS(1361),
    [anon_sym_LT_POUNDftl] = ACTIONS(1361),
    [anon_sym_LT_POUNDimport] = ACTIONS(1361),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1361),
    [sym_lt] = ACTIONS(1361),
    [sym_nt] = ACTIONS(1361),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1361),
    [sym_rt] = ACTIONS(1361),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1361),
    [sym_stop] = ACTIONS(1361),
    [sym_t] = ACTIONS(1361),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1361),
    [anon_sym_LT_POUNDassign] = ACTIONS(1361),
    [sym_end_assign] = ACTIONS(1361),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1361),
    [sym_end_global] = ACTIONS(1361),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1361),
    [sym_end_local] = ACTIONS(1361),
  },
  [310] = {
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1365),
  },
  [311] = {
    [sym_case] = STATE(249),
    [sym_switch_middle] = STATE(311),
    [aux_sym_switch_repeat1] = STATE(311),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1367),
    [anon_sym_LT_POUNDcase] = ACTIONS(1369),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1367),
  },
  [312] = {
    [anon_sym_LT_AT] = ACTIONS(1372),
    [anon_sym_LT_POUND] = ACTIONS(1374),
    [anon_sym_LT_POUNDif] = ACTIONS(1372),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1372),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1372),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1372),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1372),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1372),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1372),
    [anon_sym_LT_POUNDnested] = ACTIONS(1372),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1372),
    [sym_fallback] = ACTIONS(1372),
    [sym_flush] = ACTIONS(1372),
    [anon_sym_LT_POUNDftl] = ACTIONS(1372),
    [anon_sym_LT_POUNDimport] = ACTIONS(1372),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1372),
    [sym_lt] = ACTIONS(1372),
    [sym_nt] = ACTIONS(1372),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1372),
    [sym_rt] = ACTIONS(1372),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1372),
    [sym_stop] = ACTIONS(1372),
    [sym_t] = ACTIONS(1372),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1372),
    [anon_sym_LT_POUNDassign] = ACTIONS(1372),
    [sym_end_assign] = ACTIONS(1372),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1372),
    [sym_end_global] = ACTIONS(1372),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1372),
    [sym_end_local] = ACTIONS(1372),
  },
  [313] = {
    [ts_builtin_sym_end] = ACTIONS(1376),
    [sym_comment] = ACTIONS(1376),
    [anon_sym_DOLLAR] = ACTIONS(1376),
    [anon_sym_LT_AT] = ACTIONS(1376),
    [anon_sym_LT_POUND] = ACTIONS(1378),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1376),
    [sym_break] = ACTIONS(1376),
    [sym_continue] = ACTIONS(1376),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1376),
    [anon_sym_LT_POUNDitems] = ACTIONS(1376),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1376),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1376),
    [anon_sym_LT_POUNDif] = ACTIONS(1376),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1376),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1376),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1376),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1376),
    [anon_sym_LT_POUNDcase] = ACTIONS(1376),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1376),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1376),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1376),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1376),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1376),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1376),
    [anon_sym_LT_POUNDnested] = ACTIONS(1376),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1376),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1376),
    [sym_recover] = ACTIONS(1376),
    [sym_fallback] = ACTIONS(1376),
    [sym_flush] = ACTIONS(1376),
    [anon_sym_LT_POUNDftl] = ACTIONS(1376),
    [anon_sym_LT_POUNDimport] = ACTIONS(1376),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1376),
    [sym_lt] = ACTIONS(1376),
    [sym_nt] = ACTIONS(1376),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1376),
    [sym_rt] = ACTIONS(1376),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1376),
    [sym_stop] = ACTIONS(1376),
    [sym_t] = ACTIONS(1376),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1376),
    [anon_sym_LT_POUNDassign] = ACTIONS(1376),
    [sym_end_assign] = ACTIONS(1376),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1376),
    [sym_end_global] = ACTIONS(1376),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1376),
    [sym_end_local] = ACTIONS(1376),
  },
  [314] = {
    [anon_sym_LT_AT] = ACTIONS(1380),
    [anon_sym_LT_POUND] = ACTIONS(1382),
    [anon_sym_LT_POUNDif] = ACTIONS(1380),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1380),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1380),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1380),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1380),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1380),
    [anon_sym_LT_POUNDnested] = ACTIONS(1380),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1380),
    [sym_fallback] = ACTIONS(1380),
    [sym_flush] = ACTIONS(1380),
    [anon_sym_LT_POUNDftl] = ACTIONS(1380),
    [anon_sym_LT_POUNDimport] = ACTIONS(1380),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1380),
    [sym_lt] = ACTIONS(1380),
    [sym_nt] = ACTIONS(1380),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1380),
    [sym_rt] = ACTIONS(1380),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1380),
    [sym_stop] = ACTIONS(1380),
    [sym_t] = ACTIONS(1380),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1380),
    [anon_sym_LT_POUNDassign] = ACTIONS(1380),
    [sym_end_assign] = ACTIONS(1380),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1380),
    [sym_end_global] = ACTIONS(1380),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1380),
    [sym_end_local] = ACTIONS(1380),
  },
  [315] = {
    [ts_builtin_sym_end] = ACTIONS(1384),
    [sym_comment] = ACTIONS(1384),
    [anon_sym_DOLLAR] = ACTIONS(1384),
    [anon_sym_LT_AT] = ACTIONS(1384),
    [anon_sym_LT_POUND] = ACTIONS(1386),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1384),
    [sym_break] = ACTIONS(1384),
    [sym_continue] = ACTIONS(1384),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1384),
    [anon_sym_LT_POUNDitems] = ACTIONS(1384),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1384),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1384),
    [anon_sym_LT_POUNDif] = ACTIONS(1384),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1384),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1384),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1384),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1384),
    [anon_sym_LT_POUNDcase] = ACTIONS(1384),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1384),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1384),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1384),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1384),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1384),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1384),
    [anon_sym_LT_POUNDnested] = ACTIONS(1384),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1384),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1384),
    [sym_recover] = ACTIONS(1384),
    [sym_fallback] = ACTIONS(1384),
    [sym_flush] = ACTIONS(1384),
    [anon_sym_LT_POUNDftl] = ACTIONS(1384),
    [anon_sym_LT_POUNDimport] = ACTIONS(1384),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1384),
    [sym_lt] = ACTIONS(1384),
    [sym_nt] = ACTIONS(1384),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1384),
    [sym_rt] = ACTIONS(1384),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1384),
    [sym_stop] = ACTIONS(1384),
    [sym_t] = ACTIONS(1384),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1384),
    [anon_sym_LT_POUNDassign] = ACTIONS(1384),
    [sym_end_assign] = ACTIONS(1384),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1384),
    [sym_end_global] = ACTIONS(1384),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1384),
    [sym_end_local] = ACTIONS(1384),
  },
  [316] = {
    [sym_directive] = STATE(281),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_list_middle] = STATE(328),
    [sym_items] = STATE(281),
    [sym_sep] = STATE(281),
    [sym_sep_block] = STATE(286),
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
    [aux_sym_list_repeat1] = STATE(328),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1388),
    [sym_break] = ACTIONS(866),
    [sym_continue] = ACTIONS(866),
    [anon_sym_LT_POUNDitems] = ACTIONS(870),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(872),
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
  [317] = {
    [anon_sym_GT] = ACTIONS(1390),
  },
  [318] = {
    [anon_sym_LT_AT] = ACTIONS(1392),
    [anon_sym_LT_POUND] = ACTIONS(1394),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1392),
    [sym_break] = ACTIONS(1392),
    [sym_continue] = ACTIONS(1392),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1392),
    [anon_sym_LT_POUNDitems] = ACTIONS(1392),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1392),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1392),
    [anon_sym_LT_POUNDif] = ACTIONS(1392),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1392),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1392),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1392),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1392),
    [sym_fallback] = ACTIONS(1392),
    [sym_flush] = ACTIONS(1392),
    [anon_sym_LT_POUNDftl] = ACTIONS(1392),
    [anon_sym_LT_POUNDimport] = ACTIONS(1392),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1392),
    [sym_lt] = ACTIONS(1392),
    [sym_nt] = ACTIONS(1392),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1392),
    [sym_rt] = ACTIONS(1392),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1392),
    [sym_stop] = ACTIONS(1392),
    [sym_t] = ACTIONS(1392),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1392),
    [anon_sym_LT_POUNDassign] = ACTIONS(1392),
    [sym_end_assign] = ACTIONS(1392),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1392),
    [sym_end_global] = ACTIONS(1392),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1392),
    [sym_end_local] = ACTIONS(1392),
  },
  [319] = {
    [ts_builtin_sym_end] = ACTIONS(1396),
    [sym_comment] = ACTIONS(1396),
    [anon_sym_DOLLAR] = ACTIONS(1396),
    [anon_sym_LT_AT] = ACTIONS(1396),
    [anon_sym_LT_POUND] = ACTIONS(1398),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1396),
    [sym_break] = ACTIONS(1396),
    [sym_continue] = ACTIONS(1396),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1396),
    [anon_sym_LT_POUNDitems] = ACTIONS(1396),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1396),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1396),
    [anon_sym_LT_POUNDif] = ACTIONS(1396),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1396),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1396),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1396),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1396),
    [anon_sym_LT_POUNDcase] = ACTIONS(1396),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1396),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1396),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1396),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1396),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1396),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1396),
    [anon_sym_LT_POUNDnested] = ACTIONS(1396),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1396),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1396),
    [sym_recover] = ACTIONS(1396),
    [sym_fallback] = ACTIONS(1396),
    [sym_flush] = ACTIONS(1396),
    [anon_sym_LT_POUNDftl] = ACTIONS(1396),
    [anon_sym_LT_POUNDimport] = ACTIONS(1396),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1396),
    [sym_lt] = ACTIONS(1396),
    [sym_nt] = ACTIONS(1396),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1396),
    [sym_rt] = ACTIONS(1396),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1396),
    [sym_stop] = ACTIONS(1396),
    [sym_t] = ACTIONS(1396),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1396),
    [anon_sym_LT_POUNDassign] = ACTIONS(1396),
    [sym_end_assign] = ACTIONS(1396),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1396),
    [sym_end_global] = ACTIONS(1396),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1396),
    [sym_end_local] = ACTIONS(1396),
  },
  [320] = {
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1400),
  },
  [321] = {
    [sym_directive] = STATE(281),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_list_middle] = STATE(321),
    [sym_items] = STATE(281),
    [sym_sep] = STATE(281),
    [sym_sep_block] = STATE(286),
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
    [aux_sym_list_repeat1] = STATE(321),
    [anon_sym_LT_AT] = ACTIONS(1402),
    [anon_sym_LT_POUND] = ACTIONS(1405),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1408),
    [sym_break] = ACTIONS(1410),
    [sym_continue] = ACTIONS(1410),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1408),
    [anon_sym_LT_POUNDitems] = ACTIONS(1413),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1416),
    [anon_sym_LT_POUNDif] = ACTIONS(1419),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1422),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1425),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1428),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1431),
    [sym_fallback] = ACTIONS(1434),
    [sym_flush] = ACTIONS(1434),
    [anon_sym_LT_POUNDftl] = ACTIONS(1437),
    [anon_sym_LT_POUNDimport] = ACTIONS(1440),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1443),
    [sym_lt] = ACTIONS(1434),
    [sym_nt] = ACTIONS(1434),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1446),
    [sym_rt] = ACTIONS(1434),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1449),
    [sym_stop] = ACTIONS(1434),
    [sym_t] = ACTIONS(1434),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1452),
    [anon_sym_LT_POUNDassign] = ACTIONS(1455),
    [sym_end_assign] = ACTIONS(1458),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1461),
    [sym_end_global] = ACTIONS(1464),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1467),
    [sym_end_local] = ACTIONS(1470),
  },
  [322] = {
    [sym_directive] = STATE(230),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_elseif] = STATE(230),
    [sym_if_middle] = STATE(322),
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
    [aux_sym_if_repeat1] = STATE(322),
    [anon_sym_LT_AT] = ACTIONS(1289),
    [anon_sym_LT_POUND] = ACTIONS(1292),
    [anon_sym_LT_POUNDif] = ACTIONS(1297),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1295),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1300),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1303),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1306),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1309),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1312),
    [sym_fallback] = ACTIONS(1315),
    [sym_flush] = ACTIONS(1315),
    [anon_sym_LT_POUNDftl] = ACTIONS(1318),
    [anon_sym_LT_POUNDimport] = ACTIONS(1321),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1324),
    [sym_lt] = ACTIONS(1315),
    [sym_nt] = ACTIONS(1315),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1327),
    [sym_rt] = ACTIONS(1315),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1330),
    [sym_stop] = ACTIONS(1315),
    [sym_t] = ACTIONS(1315),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1333),
    [anon_sym_LT_POUNDassign] = ACTIONS(1336),
    [sym_end_assign] = ACTIONS(1339),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1342),
    [sym_end_global] = ACTIONS(1345),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1348),
    [sym_end_local] = ACTIONS(1351),
  },
  [323] = {
    [anon_sym_LT_AT] = ACTIONS(1473),
    [anon_sym_LT_POUND] = ACTIONS(1475),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1473),
    [anon_sym_LT_POUNDif] = ACTIONS(1473),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1473),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1473),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1473),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1473),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1473),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1473),
    [sym_fallback] = ACTIONS(1473),
    [sym_flush] = ACTIONS(1473),
    [anon_sym_LT_POUNDftl] = ACTIONS(1473),
    [anon_sym_LT_POUNDimport] = ACTIONS(1473),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1473),
    [sym_lt] = ACTIONS(1473),
    [sym_nt] = ACTIONS(1473),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1473),
    [sym_rt] = ACTIONS(1473),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1473),
    [sym_stop] = ACTIONS(1473),
    [sym_t] = ACTIONS(1473),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1473),
    [anon_sym_LT_POUNDassign] = ACTIONS(1473),
    [sym_end_assign] = ACTIONS(1473),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1473),
    [sym_end_global] = ACTIONS(1473),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1473),
    [sym_end_local] = ACTIONS(1473),
  },
  [324] = {
    [ts_builtin_sym_end] = ACTIONS(1477),
    [sym_comment] = ACTIONS(1477),
    [anon_sym_DOLLAR] = ACTIONS(1477),
    [anon_sym_LT_AT] = ACTIONS(1477),
    [anon_sym_LT_POUND] = ACTIONS(1479),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1477),
    [sym_break] = ACTIONS(1477),
    [sym_continue] = ACTIONS(1477),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1477),
    [anon_sym_LT_POUNDitems] = ACTIONS(1477),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1477),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1477),
    [anon_sym_LT_POUNDif] = ACTIONS(1477),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1477),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1477),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1477),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1477),
    [anon_sym_LT_POUNDcase] = ACTIONS(1477),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1477),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1477),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1477),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1477),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1477),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1477),
    [anon_sym_LT_POUNDnested] = ACTIONS(1477),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1477),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1477),
    [sym_recover] = ACTIONS(1477),
    [sym_fallback] = ACTIONS(1477),
    [sym_flush] = ACTIONS(1477),
    [anon_sym_LT_POUNDftl] = ACTIONS(1477),
    [anon_sym_LT_POUNDimport] = ACTIONS(1477),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1477),
    [sym_lt] = ACTIONS(1477),
    [sym_nt] = ACTIONS(1477),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1477),
    [sym_rt] = ACTIONS(1477),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1477),
    [sym_stop] = ACTIONS(1477),
    [sym_t] = ACTIONS(1477),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1477),
    [anon_sym_LT_POUNDassign] = ACTIONS(1477),
    [sym_end_assign] = ACTIONS(1477),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1477),
    [sym_end_global] = ACTIONS(1477),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1477),
    [sym_end_local] = ACTIONS(1477),
  },
  [325] = {
    [sym_directive] = STATE(331),
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
    [aux_sym_case_repeat1] = STATE(331),
    [aux_sym_case_repeat2] = STATE(332),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [sym_break] = ACTIONS(1481),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1483),
    [anon_sym_LT_POUNDcase] = ACTIONS(1483),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1483),
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
  [326] = {
    [sym_directive] = STATE(326),
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
    [aux_sym_case_repeat1] = STATE(326),
    [anon_sym_LT_AT] = ACTIONS(1485),
    [anon_sym_LT_POUND] = ACTIONS(1488),
    [anon_sym_LT_POUNDif] = ACTIONS(1491),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1494),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1497),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1499),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1502),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1505),
    [sym_fallback] = ACTIONS(1508),
    [sym_flush] = ACTIONS(1508),
    [anon_sym_LT_POUNDftl] = ACTIONS(1511),
    [anon_sym_LT_POUNDimport] = ACTIONS(1514),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1517),
    [sym_lt] = ACTIONS(1508),
    [sym_nt] = ACTIONS(1508),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1520),
    [sym_rt] = ACTIONS(1508),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1523),
    [sym_stop] = ACTIONS(1508),
    [sym_t] = ACTIONS(1508),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1526),
    [anon_sym_LT_POUNDassign] = ACTIONS(1529),
    [sym_end_assign] = ACTIONS(1532),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1535),
    [sym_end_global] = ACTIONS(1538),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1541),
    [sym_end_local] = ACTIONS(1544),
  },
  [327] = {
    [ts_builtin_sym_end] = ACTIONS(1547),
    [sym_comment] = ACTIONS(1547),
    [anon_sym_DOLLAR] = ACTIONS(1547),
    [anon_sym_LT_AT] = ACTIONS(1547),
    [anon_sym_LT_POUND] = ACTIONS(1549),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1547),
    [sym_break] = ACTIONS(1547),
    [sym_continue] = ACTIONS(1547),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1547),
    [anon_sym_LT_POUNDitems] = ACTIONS(1547),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1547),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1547),
    [anon_sym_LT_POUNDif] = ACTIONS(1547),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1547),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1547),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1547),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1547),
    [anon_sym_LT_POUNDcase] = ACTIONS(1547),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1547),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1547),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1547),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1547),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1547),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1547),
    [anon_sym_LT_POUNDnested] = ACTIONS(1547),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1547),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1547),
    [sym_recover] = ACTIONS(1547),
    [sym_fallback] = ACTIONS(1547),
    [sym_flush] = ACTIONS(1547),
    [anon_sym_LT_POUNDftl] = ACTIONS(1547),
    [anon_sym_LT_POUNDimport] = ACTIONS(1547),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1547),
    [sym_lt] = ACTIONS(1547),
    [sym_nt] = ACTIONS(1547),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1547),
    [sym_rt] = ACTIONS(1547),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1547),
    [sym_stop] = ACTIONS(1547),
    [sym_t] = ACTIONS(1547),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1547),
    [anon_sym_LT_POUNDassign] = ACTIONS(1547),
    [sym_end_assign] = ACTIONS(1547),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1547),
    [sym_end_global] = ACTIONS(1547),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1547),
    [sym_end_local] = ACTIONS(1547),
  },
  [328] = {
    [sym_directive] = STATE(281),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_list_middle] = STATE(328),
    [sym_items] = STATE(281),
    [sym_sep] = STATE(281),
    [sym_sep_block] = STATE(286),
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
    [aux_sym_list_repeat1] = STATE(328),
    [anon_sym_LT_AT] = ACTIONS(1402),
    [anon_sym_LT_POUND] = ACTIONS(1405),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1408),
    [sym_break] = ACTIONS(1410),
    [sym_continue] = ACTIONS(1410),
    [anon_sym_LT_POUNDitems] = ACTIONS(1413),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1416),
    [anon_sym_LT_POUNDif] = ACTIONS(1419),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1422),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1425),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1428),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1431),
    [sym_fallback] = ACTIONS(1434),
    [sym_flush] = ACTIONS(1434),
    [anon_sym_LT_POUNDftl] = ACTIONS(1437),
    [anon_sym_LT_POUNDimport] = ACTIONS(1440),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1443),
    [sym_lt] = ACTIONS(1434),
    [sym_nt] = ACTIONS(1434),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1446),
    [sym_rt] = ACTIONS(1434),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1449),
    [sym_stop] = ACTIONS(1434),
    [sym_t] = ACTIONS(1434),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1452),
    [anon_sym_LT_POUNDassign] = ACTIONS(1455),
    [sym_end_assign] = ACTIONS(1458),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1461),
    [sym_end_global] = ACTIONS(1464),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1467),
    [sym_end_local] = ACTIONS(1470),
  },
  [329] = {
    [sym_directive] = STATE(333),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_items_middle] = STATE(335),
    [sym_sep] = STATE(333),
    [sym_sep_block] = STATE(286),
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
    [aux_sym_items_repeat1] = STATE(335),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [sym_break] = ACTIONS(1551),
    [sym_continue] = ACTIONS(1551),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1553),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(872),
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
  [330] = {
    [ts_builtin_sym_end] = ACTIONS(1555),
    [sym_comment] = ACTIONS(1555),
    [anon_sym_DOLLAR] = ACTIONS(1555),
    [anon_sym_LT_AT] = ACTIONS(1555),
    [anon_sym_LT_POUND] = ACTIONS(1557),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1555),
    [sym_break] = ACTIONS(1555),
    [sym_continue] = ACTIONS(1555),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1555),
    [anon_sym_LT_POUNDitems] = ACTIONS(1555),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1555),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1555),
    [anon_sym_LT_POUNDif] = ACTIONS(1555),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1555),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1555),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1555),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1555),
    [anon_sym_LT_POUNDcase] = ACTIONS(1555),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1555),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1555),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1555),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1555),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1555),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1555),
    [anon_sym_LT_POUNDnested] = ACTIONS(1555),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1555),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1555),
    [sym_recover] = ACTIONS(1555),
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
  [331] = {
    [sym_directive] = STATE(336),
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
    [aux_sym_case_repeat1] = STATE(336),
    [aux_sym_case_repeat2] = STATE(337),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [sym_break] = ACTIONS(1559),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1561),
    [anon_sym_LT_POUNDcase] = ACTIONS(1561),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1561),
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
  [332] = {
    [aux_sym_case_repeat2] = STATE(338),
    [sym_break] = ACTIONS(1563),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1561),
    [anon_sym_LT_POUNDcase] = ACTIONS(1561),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1561),
  },
  [333] = {
    [anon_sym_LT_AT] = ACTIONS(1565),
    [anon_sym_LT_POUND] = ACTIONS(1567),
    [sym_break] = ACTIONS(1565),
    [sym_continue] = ACTIONS(1565),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1565),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1565),
    [anon_sym_LT_POUNDif] = ACTIONS(1565),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1565),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1565),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1565),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1565),
    [sym_fallback] = ACTIONS(1565),
    [sym_flush] = ACTIONS(1565),
    [anon_sym_LT_POUNDftl] = ACTIONS(1565),
    [anon_sym_LT_POUNDimport] = ACTIONS(1565),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1565),
    [sym_lt] = ACTIONS(1565),
    [sym_nt] = ACTIONS(1565),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1565),
    [sym_rt] = ACTIONS(1565),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1565),
    [sym_stop] = ACTIONS(1565),
    [sym_t] = ACTIONS(1565),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1565),
    [anon_sym_LT_POUNDassign] = ACTIONS(1565),
    [sym_end_assign] = ACTIONS(1565),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1565),
    [sym_end_global] = ACTIONS(1565),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1565),
    [sym_end_local] = ACTIONS(1565),
  },
  [334] = {
    [anon_sym_LT_AT] = ACTIONS(1569),
    [anon_sym_LT_POUND] = ACTIONS(1571),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1569),
    [sym_break] = ACTIONS(1569),
    [sym_continue] = ACTIONS(1569),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1569),
    [anon_sym_LT_POUNDitems] = ACTIONS(1569),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1569),
    [anon_sym_LT_POUNDif] = ACTIONS(1569),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1569),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1569),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1569),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1569),
    [sym_fallback] = ACTIONS(1569),
    [sym_flush] = ACTIONS(1569),
    [anon_sym_LT_POUNDftl] = ACTIONS(1569),
    [anon_sym_LT_POUNDimport] = ACTIONS(1569),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1569),
    [sym_lt] = ACTIONS(1569),
    [sym_nt] = ACTIONS(1569),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1569),
    [sym_rt] = ACTIONS(1569),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1569),
    [sym_stop] = ACTIONS(1569),
    [sym_t] = ACTIONS(1569),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1569),
    [anon_sym_LT_POUNDassign] = ACTIONS(1569),
    [sym_end_assign] = ACTIONS(1569),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1569),
    [sym_end_global] = ACTIONS(1569),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1569),
    [sym_end_local] = ACTIONS(1569),
  },
  [335] = {
    [sym_directive] = STATE(333),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_items_middle] = STATE(340),
    [sym_sep] = STATE(333),
    [sym_sep_block] = STATE(286),
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
    [aux_sym_items_repeat1] = STATE(340),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [sym_break] = ACTIONS(1551),
    [sym_continue] = ACTIONS(1551),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1573),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(872),
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
  [336] = {
    [sym_directive] = STATE(336),
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
    [aux_sym_case_repeat1] = STATE(336),
    [anon_sym_LT_AT] = ACTIONS(1485),
    [anon_sym_LT_POUND] = ACTIONS(1488),
    [sym_break] = ACTIONS(1497),
    [anon_sym_LT_POUNDif] = ACTIONS(1491),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1494),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1497),
    [anon_sym_LT_POUNDcase] = ACTIONS(1497),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1497),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1499),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1502),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1505),
    [sym_fallback] = ACTIONS(1508),
    [sym_flush] = ACTIONS(1508),
    [anon_sym_LT_POUNDftl] = ACTIONS(1511),
    [anon_sym_LT_POUNDimport] = ACTIONS(1514),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1517),
    [sym_lt] = ACTIONS(1508),
    [sym_nt] = ACTIONS(1508),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1520),
    [sym_rt] = ACTIONS(1508),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1523),
    [sym_stop] = ACTIONS(1508),
    [sym_t] = ACTIONS(1508),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1526),
    [anon_sym_LT_POUNDassign] = ACTIONS(1529),
    [sym_end_assign] = ACTIONS(1532),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1535),
    [sym_end_global] = ACTIONS(1538),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1541),
    [sym_end_local] = ACTIONS(1544),
  },
  [337] = {
    [aux_sym_case_repeat2] = STATE(338),
    [sym_break] = ACTIONS(1563),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1575),
    [anon_sym_LT_POUNDcase] = ACTIONS(1575),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1575),
  },
  [338] = {
    [aux_sym_case_repeat2] = STATE(338),
    [sym_break] = ACTIONS(1577),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1580),
    [anon_sym_LT_POUNDcase] = ACTIONS(1580),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1580),
  },
  [339] = {
    [anon_sym_LT_AT] = ACTIONS(1582),
    [anon_sym_LT_POUND] = ACTIONS(1584),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1582),
    [sym_break] = ACTIONS(1582),
    [sym_continue] = ACTIONS(1582),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1582),
    [anon_sym_LT_POUNDitems] = ACTIONS(1582),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1582),
    [anon_sym_LT_POUNDif] = ACTIONS(1582),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1582),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1582),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1582),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1582),
    [sym_fallback] = ACTIONS(1582),
    [sym_flush] = ACTIONS(1582),
    [anon_sym_LT_POUNDftl] = ACTIONS(1582),
    [anon_sym_LT_POUNDimport] = ACTIONS(1582),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1582),
    [sym_lt] = ACTIONS(1582),
    [sym_nt] = ACTIONS(1582),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1582),
    [sym_rt] = ACTIONS(1582),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1582),
    [sym_stop] = ACTIONS(1582),
    [sym_t] = ACTIONS(1582),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1582),
    [anon_sym_LT_POUNDassign] = ACTIONS(1582),
    [sym_end_assign] = ACTIONS(1582),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1582),
    [sym_end_global] = ACTIONS(1582),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1582),
    [sym_end_local] = ACTIONS(1582),
  },
  [340] = {
    [sym_directive] = STATE(333),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_items_middle] = STATE(340),
    [sym_sep] = STATE(333),
    [sym_sep_block] = STATE(286),
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
    [aux_sym_items_repeat1] = STATE(340),
    [anon_sym_LT_AT] = ACTIONS(1586),
    [anon_sym_LT_POUND] = ACTIONS(1589),
    [sym_break] = ACTIONS(1592),
    [sym_continue] = ACTIONS(1592),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1595),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1597),
    [anon_sym_LT_POUNDif] = ACTIONS(1600),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1603),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1606),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1609),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1612),
    [sym_fallback] = ACTIONS(1615),
    [sym_flush] = ACTIONS(1615),
    [anon_sym_LT_POUNDftl] = ACTIONS(1618),
    [anon_sym_LT_POUNDimport] = ACTIONS(1621),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1624),
    [sym_lt] = ACTIONS(1615),
    [sym_nt] = ACTIONS(1615),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1627),
    [sym_rt] = ACTIONS(1615),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1630),
    [sym_stop] = ACTIONS(1615),
    [sym_t] = ACTIONS(1615),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1633),
    [anon_sym_LT_POUNDassign] = ACTIONS(1636),
    [sym_end_assign] = ACTIONS(1639),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1642),
    [sym_end_global] = ACTIONS(1645),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1648),
    [sym_end_local] = ACTIONS(1651),
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
  [13] = {.count = 1, .reusable = false}, SHIFT(4),
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
  [63] = {.count = 1, .reusable = true}, SHIFT(31),
  [65] = {.count = 1, .reusable = false}, SHIFT(32),
  [67] = {.count = 1, .reusable = true}, SHIFT(32),
  [69] = {.count = 1, .reusable = true}, SHIFT(33),
  [71] = {.count = 1, .reusable = false}, SHIFT(34),
  [73] = {.count = 1, .reusable = false}, SHIFT(35),
  [75] = {.count = 1, .reusable = true}, SHIFT(36),
  [77] = {.count = 1, .reusable = false}, SHIFT(37),
  [79] = {.count = 1, .reusable = false}, SHIFT(38),
  [81] = {.count = 1, .reusable = false}, SHIFT(43),
  [83] = {.count = 1, .reusable = false}, SHIFT(44),
  [85] = {.count = 1, .reusable = false}, SHIFT(45),
  [87] = {.count = 1, .reusable = true}, SHIFT(45),
  [89] = {.count = 1, .reusable = false}, SHIFT(46),
  [91] = {.count = 1, .reusable = true}, SHIFT(50),
  [93] = {.count = 1, .reusable = true}, SHIFT(52),
  [95] = {.count = 1, .reusable = true}, SHIFT(54),
  [97] = {.count = 1, .reusable = true}, SHIFT(55),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_directive, 1),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym_directive, 1),
  [103] = {.count = 1, .reusable = true}, SHIFT(57),
  [105] = {.count = 1, .reusable = true}, SHIFT(59),
  [107] = {.count = 1, .reusable = true}, SHIFT(61),
  [109] = {.count = 1, .reusable = true}, SHIFT(63),
  [111] = {.count = 1, .reusable = true}, SHIFT(65),
  [113] = {.count = 1, .reusable = true}, SHIFT(67),
  [115] = {.count = 1, .reusable = true}, SHIFT(69),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 1),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_assign, 1),
  [121] = {.count = 1, .reusable = true}, SHIFT(71),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_global, 1),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_global, 1),
  [127] = {.count = 1, .reusable = true}, SHIFT(73),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_local, 1),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym_local, 1),
  [133] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [137] = {.count = 1, .reusable = true}, SHIFT(75),
  [139] = {.count = 1, .reusable = true}, SHIFT(76),
  [141] = {.count = 1, .reusable = true}, SHIFT(77),
  [143] = {.count = 1, .reusable = true}, SHIFT(78),
  [145] = {.count = 1, .reusable = false}, SHIFT(79),
  [147] = {.count = 1, .reusable = true}, SHIFT(79),
  [149] = {.count = 1, .reusable = true}, SHIFT(80),
  [151] = {.count = 1, .reusable = false}, SHIFT(81),
  [153] = {.count = 1, .reusable = false}, SHIFT(82),
  [155] = {.count = 1, .reusable = true}, SHIFT(83),
  [157] = {.count = 1, .reusable = false}, SHIFT(84),
  [159] = {.count = 1, .reusable = false}, SHIFT(85),
  [161] = {.count = 1, .reusable = true}, SHIFT(89),
  [163] = {.count = 1, .reusable = false}, SHIFT(90),
  [165] = {.count = 1, .reusable = false}, SHIFT(91),
  [167] = {.count = 1, .reusable = true}, SHIFT(92),
  [169] = {.count = 1, .reusable = false}, SHIFT(93),
  [171] = {.count = 1, .reusable = true}, SHIFT(93),
  [173] = {.count = 1, .reusable = true}, SHIFT(94),
  [175] = {.count = 1, .reusable = false}, SHIFT(95),
  [177] = {.count = 1, .reusable = false}, SHIFT(96),
  [179] = {.count = 1, .reusable = true}, SHIFT(97),
  [181] = {.count = 1, .reusable = false}, SHIFT(98),
  [183] = {.count = 1, .reusable = false}, SHIFT(99),
  [185] = {.count = 1, .reusable = true}, SHIFT(100),
  [187] = {.count = 1, .reusable = true}, SHIFT(106),
  [189] = {.count = 1, .reusable = true}, SHIFT(38),
  [191] = {.count = 1, .reusable = true}, SHIFT(37),
  [193] = {.count = 1, .reusable = false}, SHIFT(110),
  [195] = {.count = 1, .reusable = false}, SHIFT(111),
  [197] = {.count = 1, .reusable = false}, SHIFT(112),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_operator, 1),
  [201] = {.count = 1, .reusable = false}, REDUCE(sym_operator, 1),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_string, 1),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [211] = {.count = 1, .reusable = true}, SHIFT(116),
  [213] = {.count = 1, .reusable = true}, SHIFT(117),
  [215] = {.count = 1, .reusable = false}, SHIFT(118),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_top_level, 1),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym_top_level, 1),
  [221] = {.count = 1, .reusable = true}, SHIFT(123),
  [223] = {.count = 1, .reusable = true}, SHIFT(126),
  [225] = {.count = 1, .reusable = false}, SHIFT(126),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_group, 1),
  [229] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_group, 1),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [233] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 1),
  [235] = {.count = 1, .reusable = false}, SHIFT(128),
  [237] = {.count = 1, .reusable = true}, SHIFT(131),
  [239] = {.count = 1, .reusable = true}, SHIFT(133),
  [241] = {.count = 1, .reusable = true}, SHIFT(134),
  [243] = {.count = 1, .reusable = true}, SHIFT(135),
  [245] = {.count = 1, .reusable = false}, SHIFT(136),
  [247] = {.count = 1, .reusable = false}, SHIFT(137),
  [249] = {.count = 1, .reusable = true}, SHIFT(138),
  [251] = {.count = 1, .reusable = false}, SHIFT(139),
  [253] = {.count = 1, .reusable = true}, SHIFT(140),
  [255] = {.count = 1, .reusable = true}, SHIFT(142),
  [257] = {.count = 1, .reusable = true}, SHIFT(145),
  [259] = {.count = 1, .reusable = false}, SHIFT(147),
  [261] = {.count = 1, .reusable = true}, SHIFT(150),
  [263] = {.count = 1, .reusable = true}, SHIFT(151),
  [265] = {.count = 1, .reusable = true}, SHIFT(154),
  [267] = {.count = 1, .reusable = true}, SHIFT(155),
  [269] = {.count = 1, .reusable = true}, SHIFT(156),
  [271] = {.count = 1, .reusable = true}, SHIFT(159),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_attempt, 2),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym_attempt, 2),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_attempt_middle, 1),
  [279] = {.count = 1, .reusable = false}, REDUCE(sym_attempt_middle, 1),
  [281] = {.count = 1, .reusable = true}, SHIFT(160),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_ftl, 2),
  [285] = {.count = 1, .reusable = false}, REDUCE(sym_ftl, 2),
  [287] = {.count = 1, .reusable = true}, SHIFT(162),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_import, 2),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym_import, 2),
  [293] = {.count = 1, .reusable = true}, SHIFT(163),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [297] = {.count = 1, .reusable = false}, REDUCE(sym_include, 2),
  [299] = {.count = 1, .reusable = true}, SHIFT(164),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_recurse, 2),
  [303] = {.count = 1, .reusable = false}, REDUCE(sym_recurse, 2),
  [305] = {.count = 1, .reusable = true}, SHIFT(165),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_setting, 2),
  [309] = {.count = 1, .reusable = false}, REDUCE(sym_setting, 2),
  [311] = {.count = 1, .reusable = true}, SHIFT(166),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym_visit, 2),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym_visit, 2),
  [317] = {.count = 1, .reusable = true}, SHIFT(167),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 2),
  [321] = {.count = 1, .reusable = false}, REDUCE(sym_assign, 2),
  [323] = {.count = 1, .reusable = true}, SHIFT(168),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_global, 2),
  [327] = {.count = 1, .reusable = false}, REDUCE(sym_global, 2),
  [329] = {.count = 1, .reusable = true}, SHIFT(169),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_local, 2),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym_local, 2),
  [335] = {.count = 1, .reusable = true}, SHIFT(170),
  [337] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [339] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [342] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [345] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [348] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [351] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [354] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [357] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [360] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [363] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [366] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [369] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [372] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [375] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [378] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [381] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [384] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [387] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [390] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [393] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [396] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [399] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [402] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [405] = {.count = 1, .reusable = true}, SHIFT(171),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_interpolation, 3),
  [409] = {.count = 1, .reusable = false}, REDUCE(sym_interpolation, 3),
  [411] = {.count = 1, .reusable = true}, SHIFT(174),
  [413] = {.count = 1, .reusable = true}, SHIFT(175),
  [415] = {.count = 1, .reusable = true}, SHIFT(177),
  [417] = {.count = 1, .reusable = true}, SHIFT(180),
  [419] = {.count = 1, .reusable = false}, SHIFT(180),
  [421] = {.count = 1, .reusable = true}, SHIFT(182),
  [423] = {.count = 1, .reusable = true}, SHIFT(186),
  [425] = {.count = 1, .reusable = true}, SHIFT(99),
  [427] = {.count = 1, .reusable = true}, SHIFT(98),
  [429] = {.count = 1, .reusable = true}, SHIFT(191),
  [431] = {.count = 1, .reusable = true}, SHIFT(192),
  [433] = {.count = 1, .reusable = true}, SHIFT(194),
  [435] = {.count = 1, .reusable = true}, SHIFT(197),
  [437] = {.count = 1, .reusable = false}, SHIFT(197),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym_user_defined, 3),
  [441] = {.count = 1, .reusable = false}, REDUCE(sym_user_defined, 3),
  [443] = {.count = 1, .reusable = false}, SHIFT(199),
  [445] = {.count = 1, .reusable = true}, SHIFT(202),
  [447] = {.count = 1, .reusable = true}, SHIFT(204),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_hash, 2),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym_hash, 2),
  [453] = {.count = 1, .reusable = true}, SHIFT(205),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_as_expression, 2),
  [457] = {.count = 1, .reusable = false}, REDUCE(sym_as_expression, 2),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym_built_in, 2),
  [461] = {.count = 1, .reusable = false}, REDUCE(sym_built_in, 2),
  [463] = {.count = 1, .reusable = true}, SHIFT(112),
  [465] = {.count = 1, .reusable = false}, SHIFT(211),
  [467] = {.count = 1, .reusable = true}, SHIFT(214),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 2),
  [471] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 2),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym_sequence, 2),
  [475] = {.count = 1, .reusable = false}, REDUCE(sym_sequence, 2),
  [477] = {.count = 1, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 1),
  [479] = {.count = 1, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 1),
  [481] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 1), SHIFT_REPEAT(217),
  [484] = {.count = 1, .reusable = true}, SHIFT(221),
  [486] = {.count = 1, .reusable = true}, REDUCE(aux_sym_top_level_repeat1, 1),
  [488] = {.count = 1, .reusable = false}, REDUCE(aux_sym_top_level_repeat1, 1),
  [490] = {.count = 1, .reusable = true}, REDUCE(sym_top_level, 2),
  [492] = {.count = 1, .reusable = false}, REDUCE(sym_top_level, 2),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym_top_level, 2, .alias_sequence_id = 1),
  [496] = {.count = 1, .reusable = false}, REDUCE(sym_top_level, 2, .alias_sequence_id = 1),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym_spec_var, 2),
  [500] = {.count = 1, .reusable = false}, REDUCE(sym_spec_var, 2),
  [502] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 2),
  [504] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 2),
  [506] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(28),
  [509] = {.count = 1, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2),
  [511] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(31),
  [514] = {.count = 1, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2),
  [516] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(33),
  [519] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(34),
  [522] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(35),
  [525] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(36),
  [528] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(37),
  [531] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(38),
  [534] = {.count = 1, .reusable = true}, SHIFT(227),
  [536] = {.count = 1, .reusable = true}, SHIFT(228),
  [538] = {.count = 1, .reusable = true}, SHIFT(229),
  [540] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(28),
  [543] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(29),
  [546] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(30),
  [549] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(31),
  [552] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(32),
  [555] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(32),
  [558] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(33),
  [561] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(34),
  [564] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(35),
  [567] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(36),
  [570] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(37),
  [573] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(38),
  [576] = {.count = 1, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2),
  [578] = {.count = 1, .reusable = true}, SHIFT(233),
  [580] = {.count = 1, .reusable = true}, SHIFT(236),
  [582] = {.count = 1, .reusable = true}, SHIFT(237),
  [584] = {.count = 1, .reusable = true}, SHIFT(239),
  [586] = {.count = 1, .reusable = true}, SHIFT(242),
  [588] = {.count = 1, .reusable = false}, SHIFT(242),
  [590] = {.count = 1, .reusable = true}, SHIFT(246),
  [592] = {.count = 1, .reusable = true}, SHIFT(247),
  [594] = {.count = 1, .reusable = true}, SHIFT(248),
  [596] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(46),
  [599] = {.count = 1, .reusable = true}, REDUCE(sym_function, 3),
  [601] = {.count = 1, .reusable = false}, REDUCE(sym_function, 3),
  [603] = {.count = 1, .reusable = true}, SHIFT(254),
  [605] = {.count = 1, .reusable = true}, REDUCE(sym_function_middle, 1),
  [607] = {.count = 1, .reusable = false}, REDUCE(sym_function_middle, 1),
  [609] = {.count = 1, .reusable = true}, SHIFT(256),
  [611] = {.count = 1, .reusable = true}, REDUCE(sym_macro, 3),
  [613] = {.count = 1, .reusable = false}, REDUCE(sym_macro, 3),
  [615] = {.count = 1, .reusable = true}, SHIFT(259),
  [617] = {.count = 1, .reusable = true}, REDUCE(sym_macro_middle, 1),
  [619] = {.count = 1, .reusable = false}, REDUCE(sym_macro_middle, 1),
  [621] = {.count = 1, .reusable = true}, SHIFT(261),
  [623] = {.count = 1, .reusable = true}, REDUCE(sym_attempt, 3),
  [625] = {.count = 1, .reusable = false}, REDUCE(sym_attempt, 3),
  [627] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(3),
  [630] = {.count = 2, .reusable = false}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(4),
  [633] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(5),
  [636] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(6),
  [639] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(7),
  [642] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(8),
  [645] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(9),
  [648] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2),
  [650] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(55),
  [653] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(10),
  [656] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(11),
  [659] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(12),
  [662] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(13),
  [665] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(14),
  [668] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(15),
  [671] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(16),
  [674] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(17),
  [677] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(18),
  [680] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(19),
  [683] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(20),
  [686] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(21),
  [689] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(22),
  [692] = {.count = 1, .reusable = true}, REDUCE(sym_ftl, 3),
  [694] = {.count = 1, .reusable = false}, REDUCE(sym_ftl, 3),
  [696] = {.count = 1, .reusable = true}, REDUCE(sym_import, 3),
  [698] = {.count = 1, .reusable = false}, REDUCE(sym_import, 3),
  [700] = {.count = 1, .reusable = true}, REDUCE(sym_include, 3),
  [702] = {.count = 1, .reusable = false}, REDUCE(sym_include, 3),
  [704] = {.count = 1, .reusable = true}, REDUCE(sym_recurse, 3),
  [706] = {.count = 1, .reusable = false}, REDUCE(sym_recurse, 3),
  [708] = {.count = 1, .reusable = true}, REDUCE(sym_setting, 3),
  [710] = {.count = 1, .reusable = false}, REDUCE(sym_setting, 3),
  [712] = {.count = 1, .reusable = true}, REDUCE(sym_visit, 3),
  [714] = {.count = 1, .reusable = false}, REDUCE(sym_visit, 3),
  [716] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 3),
  [718] = {.count = 1, .reusable = false}, REDUCE(sym_assign, 3),
  [720] = {.count = 1, .reusable = true}, REDUCE(sym_global, 3),
  [722] = {.count = 1, .reusable = false}, REDUCE(sym_global, 3),
  [724] = {.count = 1, .reusable = true}, REDUCE(sym_local, 3),
  [726] = {.count = 1, .reusable = false}, REDUCE(sym_local, 3),
  [728] = {.count = 1, .reusable = true}, SHIFT(264),
  [730] = {.count = 1, .reusable = true}, SHIFT(265),
  [732] = {.count = 1, .reusable = true}, SHIFT(266),
  [734] = {.count = 1, .reusable = true}, REDUCE(sym_interpolation, 4),
  [736] = {.count = 1, .reusable = false}, REDUCE(sym_interpolation, 4),
  [738] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(76),
  [741] = {.count = 1, .reusable = true}, REDUCE(aux_sym_interpolation_repeat1, 2),
  [743] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(78),
  [746] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(79),
  [749] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(79),
  [752] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(80),
  [755] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(81),
  [758] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(82),
  [761] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(83),
  [764] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(84),
  [767] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(85),
  [770] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(76),
  [773] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(78),
  [776] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(80),
  [779] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(81),
  [782] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(82),
  [785] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(83),
  [788] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(84),
  [791] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(85),
  [794] = {.count = 1, .reusable = true}, SHIFT(271),
  [796] = {.count = 1, .reusable = true}, SHIFT(274),
  [798] = {.count = 1, .reusable = true}, SHIFT(275),
  [800] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(89),
  [803] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(92),
  [806] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(94),
  [809] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(95),
  [812] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(96),
  [815] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(97),
  [818] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(98),
  [821] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(99),
  [824] = {.count = 1, .reusable = true}, REDUCE(sym_user_defined, 4),
  [826] = {.count = 1, .reusable = false}, REDUCE(sym_user_defined, 4),
  [828] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(89),
  [831] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(90),
  [834] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(91),
  [837] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(92),
  [840] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(93),
  [843] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(93),
  [846] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(94),
  [849] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(95),
  [852] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(96),
  [855] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(97),
  [858] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(98),
  [861] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(99),
  [864] = {.count = 1, .reusable = true}, SHIFT(280),
  [866] = {.count = 1, .reusable = true}, SHIFT(281),
  [868] = {.count = 1, .reusable = true}, SHIFT(282),
  [870] = {.count = 1, .reusable = true}, SHIFT(283),
  [872] = {.count = 1, .reusable = true}, SHIFT(284),
  [874] = {.count = 1, .reusable = true}, REDUCE(sym_hash, 3),
  [876] = {.count = 1, .reusable = false}, REDUCE(sym_hash, 3),
  [878] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(28),
  [881] = {.count = 1, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2),
  [883] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(31),
  [886] = {.count = 1, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2),
  [888] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(33),
  [891] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(34),
  [894] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(35),
  [897] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(36),
  [900] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(37),
  [903] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(38),
  [906] = {.count = 1, .reusable = true}, REDUCE(sym_built_in, 3),
  [908] = {.count = 1, .reusable = false}, REDUCE(sym_built_in, 3),
  [910] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(112),
  [913] = {.count = 1, .reusable = true}, REDUCE(sym_group, 3),
  [915] = {.count = 1, .reusable = false}, REDUCE(sym_group, 3),
  [917] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(110),
  [920] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(111),
  [923] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(112),
  [926] = {.count = 1, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2),
  [928] = {.count = 1, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 2),
  [930] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(118),
  [933] = {.count = 1, .reusable = true}, REDUCE(sym_sequence, 3),
  [935] = {.count = 1, .reusable = false}, REDUCE(sym_sequence, 3),
  [937] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(76),
  [940] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(78),
  [943] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(79),
  [946] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(79),
  [949] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(80),
  [952] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(81),
  [955] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(82),
  [958] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(83),
  [961] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(118),
  [964] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(85),
  [967] = {.count = 1, .reusable = true}, REDUCE(sym_top_level, 3, .alias_sequence_id = 1),
  [969] = {.count = 1, .reusable = false}, REDUCE(sym_top_level, 3, .alias_sequence_id = 1),
  [971] = {.count = 1, .reusable = true}, REDUCE(aux_sym_top_level_repeat1, 2),
  [973] = {.count = 1, .reusable = false}, REDUCE(aux_sym_top_level_repeat1, 2),
  [975] = {.count = 2, .reusable = true}, REDUCE(aux_sym_top_level_repeat1, 2), SHIFT_REPEAT(123),
  [978] = {.count = 1, .reusable = true}, REDUCE(sym_as_expression, 3),
  [980] = {.count = 1, .reusable = false}, REDUCE(sym_as_expression, 3),
  [982] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 3),
  [984] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 3),
  [986] = {.count = 1, .reusable = true}, REDUCE(sym_if_else, 1),
  [988] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4),
  [990] = {.count = 1, .reusable = false}, REDUCE(sym_if, 4),
  [992] = {.count = 1, .reusable = true}, SHIFT(296),
  [994] = {.count = 1, .reusable = true}, REDUCE(sym_if_middle, 1),
  [996] = {.count = 1, .reusable = false}, REDUCE(sym_if_middle, 1),
  [998] = {.count = 1, .reusable = true}, SHIFT(298),
  [1000] = {.count = 1, .reusable = true}, SHIFT(301),
  [1002] = {.count = 1, .reusable = true}, SHIFT(302),
  [1004] = {.count = 1, .reusable = true}, SHIFT(303),
  [1006] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(133),
  [1009] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(134),
  [1012] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(135),
  [1015] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(136),
  [1018] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(137),
  [1021] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(138),
  [1024] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(139),
  [1027] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(140),
  [1030] = {.count = 1, .reusable = true}, REDUCE(sym_switch, 4),
  [1032] = {.count = 1, .reusable = false}, REDUCE(sym_switch, 4),
  [1034] = {.count = 1, .reusable = true}, REDUCE(sym_default, 1),
  [1036] = {.count = 1, .reusable = true}, REDUCE(sym_switch_middle, 1),
  [1038] = {.count = 1, .reusable = true}, SHIFT(309),
  [1040] = {.count = 1, .reusable = true}, REDUCE(sym_return, 2),
  [1042] = {.count = 1, .reusable = false}, REDUCE(sym_return, 2),
  [1044] = {.count = 1, .reusable = true}, SHIFT(312),
  [1046] = {.count = 1, .reusable = true}, REDUCE(sym_function, 4),
  [1048] = {.count = 1, .reusable = false}, REDUCE(sym_function, 4),
  [1050] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(3),
  [1053] = {.count = 2, .reusable = false}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(4),
  [1056] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(5),
  [1059] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(6),
  [1062] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(7),
  [1065] = {.count = 1, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2),
  [1067] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(151),
  [1070] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(8),
  [1073] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(9),
  [1076] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(10),
  [1079] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(11),
  [1082] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(12),
  [1085] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(13),
  [1088] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(14),
  [1091] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(15),
  [1094] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(16),
  [1097] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(17),
  [1100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(18),
  [1103] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(19),
  [1106] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(20),
  [1109] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(21),
  [1112] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(22),
  [1115] = {.count = 1, .reusable = true}, SHIFT(313),
  [1117] = {.count = 1, .reusable = true}, REDUCE(sym_nested, 2),
  [1119] = {.count = 1, .reusable = false}, REDUCE(sym_nested, 2),
  [1121] = {.count = 1, .reusable = true}, SHIFT(314),
  [1123] = {.count = 1, .reusable = true}, REDUCE(sym_macro, 4),
  [1125] = {.count = 1, .reusable = false}, REDUCE(sym_macro, 4),
  [1127] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(3),
  [1130] = {.count = 2, .reusable = false}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(4),
  [1133] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(5),
  [1136] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(6),
  [1139] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(7),
  [1142] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(151),
  [1145] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(8),
  [1148] = {.count = 1, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2),
  [1150] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(156),
  [1153] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(9),
  [1156] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(10),
  [1159] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(11),
  [1162] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(12),
  [1165] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(13),
  [1168] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(14),
  [1171] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(15),
  [1174] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(16),
  [1177] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(17),
  [1180] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(18),
  [1183] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(19),
  [1186] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(20),
  [1189] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(21),
  [1192] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(22),
  [1195] = {.count = 1, .reusable = true}, SHIFT(315),
  [1197] = {.count = 2, .reusable = true}, REDUCE(aux_sym_top_level_repeat1, 2), SHIFT_REPEAT(177),
  [1200] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(76),
  [1203] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(78),
  [1206] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(80),
  [1209] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(81),
  [1212] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(82),
  [1215] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(83),
  [1218] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(84),
  [1221] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(85),
  [1224] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(89),
  [1227] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(92),
  [1230] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(94),
  [1233] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(95),
  [1236] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(96),
  [1239] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(97),
  [1242] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(98),
  [1245] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(99),
  [1248] = {.count = 2, .reusable = true}, REDUCE(aux_sym_top_level_repeat1, 2), SHIFT_REPEAT(194),
  [1251] = {.count = 1, .reusable = true}, REDUCE(sym_list, 5),
  [1253] = {.count = 1, .reusable = false}, REDUCE(sym_list, 5),
  [1255] = {.count = 1, .reusable = true}, REDUCE(sym_list_middle, 1),
  [1257] = {.count = 1, .reusable = false}, REDUCE(sym_list_middle, 1),
  [1259] = {.count = 1, .reusable = true}, REDUCE(sym_list_else, 1),
  [1261] = {.count = 1, .reusable = true}, REDUCE(sym_sep, 1),
  [1263] = {.count = 1, .reusable = false}, REDUCE(sym_sep, 1),
  [1265] = {.count = 1, .reusable = true}, SHIFT(318),
  [1267] = {.count = 1, .reusable = true}, SHIFT(319),
  [1269] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(112),
  [1272] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(118),
  [1275] = {.count = 1, .reusable = true}, REDUCE(sym_if_else, 2),
  [1277] = {.count = 1, .reusable = true}, REDUCE(sym_elseif, 2),
  [1279] = {.count = 1, .reusable = false}, REDUCE(sym_elseif, 2),
  [1281] = {.count = 1, .reusable = true}, SHIFT(323),
  [1283] = {.count = 1, .reusable = true}, REDUCE(sym_if, 5),
  [1285] = {.count = 1, .reusable = false}, REDUCE(sym_if, 5),
  [1287] = {.count = 1, .reusable = true}, SHIFT(324),
  [1289] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(3),
  [1292] = {.count = 2, .reusable = false}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(4),
  [1295] = {.count = 1, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2),
  [1297] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(5),
  [1300] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(229),
  [1303] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(6),
  [1306] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(7),
  [1309] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(8),
  [1312] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(9),
  [1315] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(10),
  [1318] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(11),
  [1321] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(12),
  [1324] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(13),
  [1327] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(14),
  [1330] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(15),
  [1333] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(16),
  [1336] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(17),
  [1339] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(18),
  [1342] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(19),
  [1345] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(20),
  [1348] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(21),
  [1351] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(22),
  [1354] = {.count = 2, .reusable = true}, REDUCE(aux_sym_top_level_repeat1, 2), SHIFT_REPEAT(239),
  [1357] = {.count = 1, .reusable = true}, SHIFT(325),
  [1359] = {.count = 1, .reusable = true}, REDUCE(sym_default, 2),
  [1361] = {.count = 1, .reusable = true}, REDUCE(sym_switch, 5),
  [1363] = {.count = 1, .reusable = false}, REDUCE(sym_switch, 5),
  [1365] = {.count = 1, .reusable = true}, SHIFT(327),
  [1367] = {.count = 1, .reusable = true}, REDUCE(aux_sym_switch_repeat1, 2),
  [1369] = {.count = 2, .reusable = true}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(247),
  [1372] = {.count = 1, .reusable = true}, REDUCE(sym_return, 3),
  [1374] = {.count = 1, .reusable = false}, REDUCE(sym_return, 3),
  [1376] = {.count = 1, .reusable = true}, REDUCE(sym_function, 5),
  [1378] = {.count = 1, .reusable = false}, REDUCE(sym_function, 5),
  [1380] = {.count = 1, .reusable = true}, REDUCE(sym_nested, 3),
  [1382] = {.count = 1, .reusable = false}, REDUCE(sym_nested, 3),
  [1384] = {.count = 1, .reusable = true}, REDUCE(sym_macro, 5),
  [1386] = {.count = 1, .reusable = false}, REDUCE(sym_macro, 5),
  [1388] = {.count = 1, .reusable = true}, REDUCE(sym_list_else, 2),
  [1390] = {.count = 1, .reusable = true}, SHIFT(329),
  [1392] = {.count = 1, .reusable = true}, REDUCE(sym_sep_block, 2),
  [1394] = {.count = 1, .reusable = false}, REDUCE(sym_sep_block, 2),
  [1396] = {.count = 1, .reusable = true}, REDUCE(sym_list, 6),
  [1398] = {.count = 1, .reusable = false}, REDUCE(sym_list, 6),
  [1400] = {.count = 1, .reusable = true}, SHIFT(330),
  [1402] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(3),
  [1405] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(4),
  [1408] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2),
  [1410] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(281),
  [1413] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(283),
  [1416] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(284),
  [1419] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(5),
  [1422] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(6),
  [1425] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(7),
  [1428] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(8),
  [1431] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(9),
  [1434] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(10),
  [1437] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(11),
  [1440] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(12),
  [1443] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(13),
  [1446] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(14),
  [1449] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(15),
  [1452] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(16),
  [1455] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(17),
  [1458] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(18),
  [1461] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(19),
  [1464] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(20),
  [1467] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(21),
  [1470] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(22),
  [1473] = {.count = 1, .reusable = true}, REDUCE(sym_elseif, 3),
  [1475] = {.count = 1, .reusable = false}, REDUCE(sym_elseif, 3),
  [1477] = {.count = 1, .reusable = true}, REDUCE(sym_if, 6),
  [1479] = {.count = 1, .reusable = false}, REDUCE(sym_if, 6),
  [1481] = {.count = 1, .reusable = true}, SHIFT(332),
  [1483] = {.count = 1, .reusable = true}, REDUCE(sym_case, 3),
  [1485] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(3),
  [1488] = {.count = 2, .reusable = false}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(4),
  [1491] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(5),
  [1494] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(6),
  [1497] = {.count = 1, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2),
  [1499] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(7),
  [1502] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(8),
  [1505] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(9),
  [1508] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(10),
  [1511] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(11),
  [1514] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(12),
  [1517] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(13),
  [1520] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(14),
  [1523] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(15),
  [1526] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(16),
  [1529] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(17),
  [1532] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(18),
  [1535] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(19),
  [1538] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(20),
  [1541] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(21),
  [1544] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(22),
  [1547] = {.count = 1, .reusable = true}, REDUCE(sym_switch, 6),
  [1549] = {.count = 1, .reusable = false}, REDUCE(sym_switch, 6),
  [1551] = {.count = 1, .reusable = true}, SHIFT(333),
  [1553] = {.count = 1, .reusable = true}, SHIFT(334),
  [1555] = {.count = 1, .reusable = true}, REDUCE(sym_list, 7),
  [1557] = {.count = 1, .reusable = false}, REDUCE(sym_list, 7),
  [1559] = {.count = 1, .reusable = true}, SHIFT(337),
  [1561] = {.count = 1, .reusable = true}, REDUCE(sym_case, 4),
  [1563] = {.count = 1, .reusable = true}, SHIFT(338),
  [1565] = {.count = 1, .reusable = true}, REDUCE(sym_items_middle, 1),
  [1567] = {.count = 1, .reusable = false}, REDUCE(sym_items_middle, 1),
  [1569] = {.count = 1, .reusable = true}, REDUCE(sym_items, 4),
  [1571] = {.count = 1, .reusable = false}, REDUCE(sym_items, 4),
  [1573] = {.count = 1, .reusable = true}, SHIFT(339),
  [1575] = {.count = 1, .reusable = true}, REDUCE(sym_case, 5),
  [1577] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat2, 2), SHIFT_REPEAT(338),
  [1580] = {.count = 1, .reusable = true}, REDUCE(aux_sym_case_repeat2, 2),
  [1582] = {.count = 1, .reusable = true}, REDUCE(sym_items, 5),
  [1584] = {.count = 1, .reusable = false}, REDUCE(sym_items, 5),
  [1586] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(3),
  [1589] = {.count = 2, .reusable = false}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(4),
  [1592] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(333),
  [1595] = {.count = 1, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2),
  [1597] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(284),
  [1600] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(5),
  [1603] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(6),
  [1606] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(7),
  [1609] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(8),
  [1612] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(9),
  [1615] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(10),
  [1618] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(11),
  [1621] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(12),
  [1624] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(13),
  [1627] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(14),
  [1630] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(15),
  [1633] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(16),
  [1636] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(17),
  [1639] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(18),
  [1642] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(19),
  [1645] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(20),
  [1648] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(21),
  [1651] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(22),
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
