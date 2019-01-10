#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 345
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
      if (lookahead == '<')
        ADVANCE(607);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(606);
      END_STATE();
    case 607:
      if (lookahead == '#')
        ADVANCE(608);
      if (lookahead == '/')
        ADVANCE(614);
      if (lookahead == '@')
        ADVANCE(194);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_LT_POUND);
      if (lookahead == 'a')
        ADVANCE(38);
      if (lookahead == 'b')
        ADVANCE(51);
      if (lookahead == 'c')
        ADVANCE(609);
      if (lookahead == 'e')
        ADVANCE(610);
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
    case 609:
      if (lookahead == 'o')
        ADVANCE(61);
      END_STATE();
    case 610:
      if (lookahead == 'l')
        ADVANCE(611);
      END_STATE();
    case 611:
      if (lookahead == 's')
        ADVANCE(612);
      END_STATE();
    case 612:
      if (lookahead == 'e')
        ADVANCE(613);
      END_STATE();
    case 613:
      if (lookahead == '>')
        ADVANCE(81);
      END_STATE();
    case 614:
      if (lookahead == '#')
        ADVANCE(615);
      END_STATE();
    case 615:
      if (lookahead == 'a')
        ADVANCE(471);
      if (lookahead == 'g')
        ADVANCE(478);
      if (lookahead == 'l')
        ADVANCE(556);
      END_STATE();
    case 616:
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
        SKIP(616);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 617:
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
        SKIP(617);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 618:
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
        SKIP(618);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 619:
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
        SKIP(619);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 620:
      if (lookahead == '<')
        ADVANCE(621);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(620);
      END_STATE();
    case 621:
      if (lookahead == '#')
        ADVANCE(622);
      if (lookahead == '/')
        ADVANCE(623);
      if (lookahead == '@')
        ADVANCE(194);
      END_STATE();
    case 622:
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
    case 623:
      if (lookahead == '#')
        ADVANCE(624);
      END_STATE();
    case 624:
      if (lookahead == 'a')
        ADVANCE(471);
      if (lookahead == 'g')
        ADVANCE(478);
      if (lookahead == 'i')
        ADVANCE(625);
      if (lookahead == 'l')
        ADVANCE(485);
      END_STATE();
    case 625:
      if (lookahead == 'f')
        ADVANCE(549);
      END_STATE();
    case 626:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(12);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '.')
        ADVANCE(627);
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
        SKIP(626);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 628:
      if (lookahead == '<')
        ADVANCE(629);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(628);
      END_STATE();
    case 629:
      if (lookahead == '#')
        ADVANCE(630);
      if (lookahead == '/')
        ADVANCE(632);
      if (lookahead == '@')
        ADVANCE(194);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_LT_POUND);
      if (lookahead == 'a')
        ADVANCE(38);
      if (lookahead == 'b')
        ADVANCE(51);
      if (lookahead == 'c')
        ADVANCE(631);
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
    case 631:
      if (lookahead == 'a')
        ADVANCE(58);
      END_STATE();
    case 632:
      if (lookahead == '#')
        ADVANCE(633);
      END_STATE();
    case 633:
      if (lookahead == 'a')
        ADVANCE(471);
      if (lookahead == 'g')
        ADVANCE(478);
      if (lookahead == 'l')
        ADVANCE(485);
      if (lookahead == 's')
        ADVANCE(567);
      END_STATE();
    case 634:
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
        SKIP(634);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(493);
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
        ADVANCE(608);
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
      if (lookahead == 'g')
        ADVANCE(478);
      if (lookahead == 'i')
        ADVANCE(639);
      if (lookahead == 'l')
        ADVANCE(556);
      if (lookahead == 's')
        ADVANCE(640);
      END_STATE();
    case 639:
      if (lookahead == 't')
        ADVANCE(551);
      END_STATE();
    case 640:
      if (lookahead == 'e')
        ADVANCE(641);
      END_STATE();
    case 641:
      if (lookahead == 'p')
        ADVANCE(642);
      END_STATE();
    case 642:
      if (lookahead == '>')
        ADVANCE(643);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDsep_GT);
      END_STATE();
    case 644:
      if (lookahead == '<')
        ADVANCE(645);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(644);
      END_STATE();
    case 645:
      if (lookahead == '#')
        ADVANCE(600);
      if (lookahead == '/')
        ADVANCE(646);
      if (lookahead == '@')
        ADVANCE(194);
      END_STATE();
    case 646:
      if (lookahead == '#')
        ADVANCE(647);
      END_STATE();
    case 647:
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
        ADVANCE(609);
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
        ADVANCE(639);
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
  [105] = {.lex_state = 606},
  [106] = {.lex_state = 496},
  [107] = {.lex_state = 580},
  [108] = {.lex_state = 575},
  [109] = {.lex_state = 496},
  [110] = {.lex_state = 580},
  [111] = {.lex_state = 578},
  [112] = {.lex_state = 491},
  [113] = {.lex_state = 616},
  [114] = {.lex_state = 617},
  [115] = {.lex_state = 617},
  [116] = {.lex_state = 617},
  [117] = {.lex_state = 580},
  [118] = {.lex_state = 580},
  [119] = {.lex_state = 618},
  [120] = {.lex_state = 582},
  [121] = {.lex_state = 582},
  [122] = {.lex_state = 582},
  [123] = {.lex_state = 582},
  [124] = {.lex_state = 619},
  [125] = {.lex_state = 580},
  [126] = {.lex_state = 583},
  [127] = {.lex_state = 580},
  [128] = {.lex_state = 496},
  [129] = {.lex_state = 578},
  [130] = {.lex_state = 496},
  [131] = {.lex_state = 496},
  [132] = {.lex_state = 620},
  [133] = {.lex_state = 496},
  [134] = {.lex_state = 575},
  [135] = {.lex_state = 496},
  [136] = {.lex_state = 578},
  [137] = {.lex_state = 578},
  [138] = {.lex_state = 581},
  [139] = {.lex_state = 582},
  [140] = {.lex_state = 626},
  [141] = {.lex_state = 584},
  [142] = {.lex_state = 578},
  [143] = {.lex_state = 491},
  [144] = {.lex_state = 491},
  [145] = {.lex_state = 583},
  [146] = {.lex_state = 628},
  [147] = {.lex_state = 578},
  [148] = {.lex_state = 578},
  [149] = {.lex_state = 578},
  [150] = {.lex_state = 496},
  [151] = {.lex_state = 535},
  [152] = {.lex_state = 496},
  [153] = {.lex_state = 591},
  [154] = {.lex_state = 591},
  [155] = {.lex_state = 591},
  [156] = {.lex_state = 535},
  [157] = {.lex_state = 496},
  [158] = {.lex_state = 598},
  [159] = {.lex_state = 598},
  [160] = {.lex_state = 598},
  [161] = {.lex_state = 535},
  [162] = {.lex_state = 520},
  [163] = {.lex_state = 535},
  [164] = {.lex_state = 535},
  [165] = {.lex_state = 535},
  [166] = {.lex_state = 535},
  [167] = {.lex_state = 535},
  [168] = {.lex_state = 535},
  [169] = {.lex_state = 535},
  [170] = {.lex_state = 535},
  [171] = {.lex_state = 535},
  [172] = {.lex_state = 603},
  [173] = {.lex_state = 575},
  [174] = {.lex_state = 617},
  [175] = {.lex_state = 603},
  [176] = {.lex_state = 603},
  [177] = {.lex_state = 582},
  [178] = {.lex_state = 634},
  [179] = {.lex_state = 603},
  [180] = {.lex_state = 604},
  [181] = {.lex_state = 603},
  [182] = {.lex_state = 575},
  [183] = {.lex_state = 459},
  [184] = {.lex_state = 575},
  [185] = {.lex_state = 575},
  [186] = {.lex_state = 575},
  [187] = {.lex_state = 577},
  [188] = {.lex_state = 575},
  [189] = {.lex_state = 577},
  [190] = {.lex_state = 577},
  [191] = {.lex_state = 617},
  [192] = {.lex_state = 577},
  [193] = {.lex_state = 577},
  [194] = {.lex_state = 582},
  [195] = {.lex_state = 605},
  [196] = {.lex_state = 577},
  [197] = {.lex_state = 605},
  [198] = {.lex_state = 577},
  [199] = {.lex_state = 577},
  [200] = {.lex_state = 578},
  [201] = {.lex_state = 577},
  [202] = {.lex_state = 577},
  [203] = {.lex_state = 535},
  [204] = {.lex_state = 577},
  [205] = {.lex_state = 535},
  [206] = {.lex_state = 606},
  [207] = {.lex_state = 606},
  [208] = {.lex_state = 496},
  [209] = {.lex_state = 635},
  [210] = {.lex_state = 606},
  [211] = {.lex_state = 635},
  [212] = {.lex_state = 606},
  [213] = {.lex_state = 606},
  [214] = {.lex_state = 580},
  [215] = {.lex_state = 496},
  [216] = {.lex_state = 580},
  [217] = {.lex_state = 617},
  [218] = {.lex_state = 616},
  [219] = {.lex_state = 617},
  [220] = {.lex_state = 578},
  [221] = {.lex_state = 617},
  [222] = {.lex_state = 617},
  [223] = {.lex_state = 580},
  [224] = {.lex_state = 617},
  [225] = {.lex_state = 618},
  [226] = {.lex_state = 582},
  [227] = {.lex_state = 582},
  [228] = {.lex_state = 582},
  [229] = {.lex_state = 582},
  [230] = {.lex_state = 580},
  [231] = {.lex_state = 582},
  [232] = {.lex_state = 580},
  [233] = {.lex_state = 583},
  [234] = {.lex_state = 496},
  [235] = {.lex_state = 496},
  [236] = {.lex_state = 620},
  [237] = {.lex_state = 535},
  [238] = {.lex_state = 496},
  [239] = {.lex_state = 620},
  [240] = {.lex_state = 620},
  [241] = {.lex_state = 620},
  [242] = {.lex_state = 578},
  [243] = {.lex_state = 575},
  [244] = {.lex_state = 617},
  [245] = {.lex_state = 578},
  [246] = {.lex_state = 578},
  [247] = {.lex_state = 582},
  [248] = {.lex_state = 626},
  [249] = {.lex_state = 578},
  [250] = {.lex_state = 626},
  [251] = {.lex_state = 578},
  [252] = {.lex_state = 578},
  [253] = {.lex_state = 491},
  [254] = {.lex_state = 583},
  [255] = {.lex_state = 535},
  [256] = {.lex_state = 496},
  [257] = {.lex_state = 628},
  [258] = {.lex_state = 628},
  [259] = {.lex_state = 628},
  [260] = {.lex_state = 628},
  [261] = {.lex_state = 578},
  [262] = {.lex_state = 578},
  [263] = {.lex_state = 644},
  [264] = {.lex_state = 491},
  [265] = {.lex_state = 535},
  [266] = {.lex_state = 591},
  [267] = {.lex_state = 591},
  [268] = {.lex_state = 598},
  [269] = {.lex_state = 496},
  [270] = {.lex_state = 535},
  [271] = {.lex_state = 598},
  [272] = {.lex_state = 598},
  [273] = {.lex_state = 603},
  [274] = {.lex_state = 603},
  [275] = {.lex_state = 603},
  [276] = {.lex_state = 603},
  [277] = {.lex_state = 604},
  [278] = {.lex_state = 575},
  [279] = {.lex_state = 575},
  [280] = {.lex_state = 577},
  [281] = {.lex_state = 577},
  [282] = {.lex_state = 577},
  [283] = {.lex_state = 577},
  [284] = {.lex_state = 577},
  [285] = {.lex_state = 577},
  [286] = {.lex_state = 605},
  [287] = {.lex_state = 577},
  [288] = {.lex_state = 577},
  [289] = {.lex_state = 606},
  [290] = {.lex_state = 491},
  [291] = {.lex_state = 635},
  [292] = {.lex_state = 535},
  [293] = {.lex_state = 606},
  [294] = {.lex_state = 606},
  [295] = {.lex_state = 606},
  [296] = {.lex_state = 617},
  [297] = {.lex_state = 616},
  [298] = {.lex_state = 617},
  [299] = {.lex_state = 617},
  [300] = {.lex_state = 618},
  [301] = {.lex_state = 582},
  [302] = {.lex_state = 582},
  [303] = {.lex_state = 620},
  [304] = {.lex_state = 620},
  [305] = {.lex_state = 496},
  [306] = {.lex_state = 535},
  [307] = {.lex_state = 620},
  [308] = {.lex_state = 620},
  [309] = {.lex_state = 578},
  [310] = {.lex_state = 578},
  [311] = {.lex_state = 578},
  [312] = {.lex_state = 578},
  [313] = {.lex_state = 626},
  [314] = {.lex_state = 491},
  [315] = {.lex_state = 491},
  [316] = {.lex_state = 628},
  [317] = {.lex_state = 535},
  [318] = {.lex_state = 628},
  [319] = {.lex_state = 628},
  [320] = {.lex_state = 644},
  [321] = {.lex_state = 535},
  [322] = {.lex_state = 598},
  [323] = {.lex_state = 535},
  [324] = {.lex_state = 606},
  [325] = {.lex_state = 648},
  [326] = {.lex_state = 535},
  [327] = {.lex_state = 606},
  [328] = {.lex_state = 620},
  [329] = {.lex_state = 620},
  [330] = {.lex_state = 535},
  [331] = {.lex_state = 628},
  [332] = {.lex_state = 628},
  [333] = {.lex_state = 535},
  [334] = {.lex_state = 648},
  [335] = {.lex_state = 606},
  [336] = {.lex_state = 648},
  [337] = {.lex_state = 535},
  [338] = {.lex_state = 628},
  [339] = {.lex_state = 628},
  [340] = {.lex_state = 606},
  [341] = {.lex_state = 648},
  [342] = {.lex_state = 628},
  [343] = {.lex_state = 628},
  [344] = {.lex_state = 628},
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
    [sym_parameter_group] = STATE(106),
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
    [aux_sym_group_repeat1] = STATE(106),
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
    [anon_sym_GT] = ACTIONS(187),
  },
  [28] = {
    [sym_expression] = STATE(108),
    [sym_type] = STATE(88),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(86),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_interpolation_repeat1] = STATE(108),
    [aux_sym_as_expression_repeat1] = STATE(88),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(189),
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
    [sym_type] = STATE(109),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(109),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(191),
  },
  [30] = {
    [sym_top_level] = STATE(110),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(193),
  },
  [31] = {
    [sym_parameter_group] = STATE(116),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(115),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(114),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(115),
    [aux_sym_group_repeat1] = STATE(116),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(195),
    [anon_sym_QMARK] = ACTIONS(197),
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
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(79),
  },
  [32] = {
    [anon_sym_LBRACE] = ACTIONS(201),
    [anon_sym_as] = ACTIONS(203),
    [anon_sym_QMARK] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_RPAREN] = ACTIONS(201),
    [anon_sym_using] = ACTIONS(203),
    [anon_sym_is] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(201),
    [anon_sym_DOT_DOT] = ACTIONS(203),
    [anon_sym_DOT_DOT_LT] = ACTIONS(201),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(201),
    [anon_sym_COLON] = ACTIONS(201),
    [anon_sym_STAR] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(201),
    [anon_sym_PERCENT] = ACTIONS(201),
    [anon_sym_EQ_EQ] = ACTIONS(201),
    [anon_sym_BANG_EQ] = ACTIONS(201),
    [anon_sym_LT] = ACTIONS(203),
    [anon_sym_LT_EQ] = ACTIONS(201),
    [anon_sym_lt] = ACTIONS(203),
    [anon_sym_lte] = ACTIONS(203),
    [anon_sym_gt] = ACTIONS(203),
    [anon_sym_gte] = ACTIONS(203),
    [anon_sym_BANG] = ACTIONS(203),
    [anon_sym_AMP_AMP] = ACTIONS(201),
    [anon_sym_PIPE_PIPE] = ACTIONS(201),
    [anon_sym_QMARK_QMARK] = ACTIONS(201),
    [anon_sym_EQ] = ACTIONS(203),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(201),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(201),
    [sym_number] = ACTIONS(203),
    [anon_sym_true] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(201),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(203),
    [anon_sym_GT] = ACTIONS(201),
  },
  [33] = {
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_as] = ACTIONS(207),
    [anon_sym_QMARK] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_using] = ACTIONS(207),
    [anon_sym_is] = ACTIONS(207),
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
    [anon_sym_DOT] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(205),
  },
  [34] = {
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_as] = ACTIONS(211),
    [anon_sym_QMARK] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_using] = ACTIONS(211),
    [anon_sym_is] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_DOT_DOT] = ACTIONS(211),
    [anon_sym_DOT_DOT_LT] = ACTIONS(209),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_PERCENT] = ACTIONS(209),
    [anon_sym_EQ_EQ] = ACTIONS(209),
    [anon_sym_BANG_EQ] = ACTIONS(209),
    [anon_sym_LT] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(209),
    [anon_sym_lt] = ACTIONS(211),
    [anon_sym_lte] = ACTIONS(211),
    [anon_sym_gt] = ACTIONS(211),
    [anon_sym_gte] = ACTIONS(211),
    [anon_sym_BANG] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [anon_sym_QMARK_QMARK] = ACTIONS(209),
    [anon_sym_EQ] = ACTIONS(211),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(209),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(209),
    [sym_number] = ACTIONS(211),
    [anon_sym_true] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(209),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(211),
    [anon_sym_GT] = ACTIONS(209),
  },
  [35] = {
    [anon_sym_false] = ACTIONS(213),
  },
  [36] = {
    [sym_expression] = STATE(120),
    [sym_type] = STATE(122),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(121),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat1] = STATE(122),
    [aux_sym_sequence_repeat1] = STATE(123),
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
    [anon_sym_RBRACK] = ACTIONS(215),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(217),
    [anon_sym_DOT] = ACTIONS(159),
  },
  [37] = {
    [sym_group] = STATE(125),
    [aux_sym_top_level_repeat1] = STATE(126),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_as] = ACTIONS(221),
    [anon_sym_QMARK] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_using] = ACTIONS(221),
    [anon_sym_is] = ACTIONS(221),
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
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(221),
    [anon_sym_GT] = ACTIONS(219),
  },
  [38] = {
    [sym__spec_var_name] = STATE(127),
    [anon_sym_auto_esc] = ACTIONS(225),
    [anon_sym_caller_template_name] = ACTIONS(225),
    [anon_sym_current_template_name] = ACTIONS(225),
    [anon_sym_data_model] = ACTIONS(225),
    [anon_sym_error] = ACTIONS(225),
    [anon_sym_globals] = ACTIONS(225),
    [anon_sym_incompatible_improvements] = ACTIONS(225),
    [anon_sym_lang] = ACTIONS(225),
    [anon_sym_locale] = ACTIONS(227),
    [anon_sym_locale_object] = ACTIONS(225),
    [anon_sym_locals] = ACTIONS(225),
    [anon_sym_main] = ACTIONS(227),
    [anon_sym_main_template_name] = ACTIONS(225),
    [anon_sym_namespace] = ACTIONS(225),
    [anon_sym_node] = ACTIONS(225),
    [anon_sym_now] = ACTIONS(225),
    [anon_sym_output_encoding] = ACTIONS(225),
    [anon_sym_get_optional_template] = ACTIONS(225),
    [anon_sym_pass] = ACTIONS(225),
    [anon_sym_template_name] = ACTIONS(225),
    [anon_sym_url_escaping_charset] = ACTIONS(225),
    [anon_sym_output_format] = ACTIONS(225),
    [anon_sym_vars] = ACTIONS(225),
    [anon_sym_version] = ACTIONS(225),
  },
  [39] = {
    [anon_sym_LBRACE] = ACTIONS(229),
    [anon_sym_as] = ACTIONS(231),
    [anon_sym_QMARK] = ACTIONS(231),
    [anon_sym_LPAREN] = ACTIONS(229),
    [anon_sym_RPAREN] = ACTIONS(229),
    [anon_sym_using] = ACTIONS(231),
    [anon_sym_is] = ACTIONS(231),
    [anon_sym_COMMA] = ACTIONS(229),
    [anon_sym_DOT_DOT] = ACTIONS(231),
    [anon_sym_DOT_DOT_LT] = ACTIONS(229),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(229),
    [anon_sym_COLON] = ACTIONS(229),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_EQ_EQ] = ACTIONS(229),
    [anon_sym_BANG_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_lt] = ACTIONS(231),
    [anon_sym_lte] = ACTIONS(231),
    [anon_sym_gt] = ACTIONS(231),
    [anon_sym_gte] = ACTIONS(231),
    [anon_sym_BANG] = ACTIONS(231),
    [anon_sym_AMP_AMP] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(229),
    [anon_sym_QMARK_QMARK] = ACTIONS(229),
    [anon_sym_EQ] = ACTIONS(231),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(229),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(229),
    [sym_number] = ACTIONS(231),
    [anon_sym_true] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(229),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(231),
    [anon_sym_DOT] = ACTIONS(231),
    [anon_sym_GT] = ACTIONS(229),
  },
  [40] = {
    [sym_type] = STATE(128),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(128),
    [anon_sym_LBRACE] = ACTIONS(233),
    [anon_sym_as] = ACTIONS(235),
    [anon_sym_QMARK] = ACTIONS(235),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_using] = ACTIONS(235),
    [anon_sym_is] = ACTIONS(235),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_DOT_DOT] = ACTIONS(235),
    [anon_sym_DOT_DOT_LT] = ACTIONS(233),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(233),
    [anon_sym_COLON] = ACTIONS(233),
    [anon_sym_STAR] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_PERCENT] = ACTIONS(233),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_LT] = ACTIONS(235),
    [anon_sym_LT_EQ] = ACTIONS(233),
    [anon_sym_lt] = ACTIONS(235),
    [anon_sym_lte] = ACTIONS(235),
    [anon_sym_gt] = ACTIONS(235),
    [anon_sym_gte] = ACTIONS(235),
    [anon_sym_BANG] = ACTIONS(235),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_QMARK_QMARK] = ACTIONS(233),
    [anon_sym_EQ] = ACTIONS(235),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(233),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(233),
    [sym_number] = ACTIONS(235),
    [anon_sym_true] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(233),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(235),
    [anon_sym_DOT] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(233),
  },
  [41] = {
    [sym_type] = STATE(131),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(130),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(131),
    [aux_sym_as_expression_repeat2] = STATE(128),
    [anon_sym_LBRACE] = ACTIONS(233),
    [anon_sym_as] = ACTIONS(237),
    [anon_sym_QMARK] = ACTIONS(235),
    [anon_sym_LPAREN] = ACTIONS(233),
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
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(233),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(233),
    [sym_number] = ACTIONS(235),
    [anon_sym_true] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(233),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(235),
    [anon_sym_DOT] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(233),
  },
  [42] = {
    [sym_parameter_group] = STATE(133),
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
    [aux_sym_group_repeat1] = STATE(133),
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
    [anon_sym_GT] = ACTIONS(239),
  },
  [43] = {
    [sym_type] = STATE(142),
    [sym_group] = STATE(137),
    [sym_string] = STATE(137),
    [sym_boolean] = STATE(137),
    [sym_sequence] = STATE(137),
    [sym_hash] = STATE(137),
    [sym_top_level] = STATE(137),
    [sym_spec_var] = STATE(137),
    [aux_sym_as_expression_repeat2] = STATE(142),
    [anon_sym_LBRACE] = ACTIONS(241),
    [anon_sym_LPAREN] = ACTIONS(243),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(245),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(245),
    [sym_number] = ACTIONS(247),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_LBRACK] = ACTIONS(251),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(253),
    [anon_sym_DOT] = ACTIONS(255),
  },
  [44] = {
    [sym_top_level] = STATE(144),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(257),
  },
  [45] = {
    [anon_sym_LBRACE] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(201),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(201),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(201),
    [sym_number] = ACTIONS(203),
    [anon_sym_true] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(201),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_GT] = ACTIONS(201),
  },
  [46] = {
    [sym_group] = STATE(125),
    [aux_sym_top_level_repeat1] = STATE(145),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_as] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_using] = ACTIONS(221),
    [anon_sym_is] = ACTIONS(221),
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
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(221),
    [anon_sym_GT] = ACTIONS(219),
  },
  [47] = {
    [anon_sym_GT] = ACTIONS(259),
  },
  [48] = {
    [sym_type] = STATE(147),
    [sym_group] = STATE(137),
    [sym_string] = STATE(137),
    [sym_boolean] = STATE(137),
    [sym_sequence] = STATE(137),
    [sym_hash] = STATE(137),
    [sym_top_level] = STATE(137),
    [sym_spec_var] = STATE(137),
    [aux_sym_as_expression_repeat2] = STATE(147),
    [anon_sym_LBRACE] = ACTIONS(241),
    [anon_sym_LPAREN] = ACTIONS(243),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(245),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(245),
    [sym_number] = ACTIONS(247),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_LBRACK] = ACTIONS(251),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(253),
    [anon_sym_DOT] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(233),
  },
  [49] = {
    [sym_type] = STATE(150),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(149),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(150),
    [aux_sym_as_expression_repeat2] = STATE(147),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(261),
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
    [anon_sym_GT] = ACTIONS(233),
  },
  [50] = {
    [sym_directive] = STATE(153),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_function_middle] = STATE(154),
    [sym_return] = STATE(153),
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
    [aux_sym_function_repeat1] = STATE(154),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(263),
    [anon_sym_LT_POUNDreturn] = ACTIONS(265),
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
    [sym_parameter_group] = STATE(133),
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
    [aux_sym_group_repeat1] = STATE(133),
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
    [anon_sym_GT] = ACTIONS(267),
  },
  [52] = {
    [sym_directive] = STATE(158),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_return] = STATE(158),
    [sym_macro] = STATE(10),
    [sym_macro_middle] = STATE(159),
    [sym_nested] = STATE(158),
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
    [aux_sym_macro_repeat1] = STATE(159),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDreturn] = ACTIONS(265),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(269),
    [anon_sym_LT_POUNDnested] = ACTIONS(271),
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
    [sym_parameter_group] = STATE(133),
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
    [aux_sym_group_repeat1] = STATE(133),
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
    [anon_sym_GT] = ACTIONS(273),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(275),
    [sym_comment] = ACTIONS(275),
    [anon_sym_DOLLAR] = ACTIONS(275),
    [anon_sym_LT_AT] = ACTIONS(275),
    [anon_sym_LT_POUND] = ACTIONS(277),
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
  [55] = {
    [anon_sym_LT_AT] = ACTIONS(279),
    [anon_sym_LT_POUND] = ACTIONS(281),
    [anon_sym_LT_POUNDif] = ACTIONS(279),
    [anon_sym_LT_POUNDswitch] = ACTIONS(279),
    [anon_sym_LT_POUNDfunction] = ACTIONS(279),
    [anon_sym_LT_POUNDmacro] = ACTIONS(279),
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
  [56] = {
    [sym_directive] = STATE(55),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_attempt_middle] = STATE(162),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_attempt_repeat1] = STATE(162),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(23),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(283),
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
    [ts_builtin_sym_end] = ACTIONS(285),
    [sym_comment] = ACTIONS(285),
    [anon_sym_DOLLAR] = ACTIONS(285),
    [anon_sym_LT_AT] = ACTIONS(285),
    [anon_sym_LT_POUND] = ACTIONS(287),
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
  [58] = {
    [sym_parameter_group] = STATE(133),
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
    [aux_sym_group_repeat1] = STATE(133),
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
    [anon_sym_GT] = ACTIONS(289),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(291),
    [sym_comment] = ACTIONS(291),
    [anon_sym_DOLLAR] = ACTIONS(291),
    [anon_sym_LT_AT] = ACTIONS(291),
    [anon_sym_LT_POUND] = ACTIONS(293),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(291),
    [sym_break] = ACTIONS(291),
    [sym_continue] = ACTIONS(291),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(291),
    [anon_sym_LT_POUNDitems] = ACTIONS(291),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(291),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(291),
    [anon_sym_LT_POUNDif] = ACTIONS(291),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(291),
    [anon_sym_LT_POUNDelseif] = ACTIONS(291),
    [anon_sym_LT_POUNDswitch] = ACTIONS(291),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(291),
    [anon_sym_LT_POUNDcase] = ACTIONS(291),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(291),
    [anon_sym_LT_POUNDfunction] = ACTIONS(291),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(291),
    [anon_sym_LT_POUNDreturn] = ACTIONS(291),
    [anon_sym_LT_POUNDmacro] = ACTIONS(291),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(291),
    [anon_sym_LT_POUNDnested] = ACTIONS(291),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(291),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(291),
    [sym_recover] = ACTIONS(291),
    [sym_fallback] = ACTIONS(291),
    [sym_flush] = ACTIONS(291),
    [anon_sym_LT_POUNDftl] = ACTIONS(291),
    [anon_sym_LT_POUNDimport] = ACTIONS(291),
    [anon_sym_LT_POUNDinclude] = ACTIONS(291),
    [sym_lt] = ACTIONS(291),
    [sym_nt] = ACTIONS(291),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(291),
    [sym_rt] = ACTIONS(291),
    [anon_sym_LT_POUNDsetting] = ACTIONS(291),
    [sym_stop] = ACTIONS(291),
    [sym_t] = ACTIONS(291),
    [anon_sym_LT_POUNDvisit] = ACTIONS(291),
    [anon_sym_LT_POUNDassign] = ACTIONS(291),
    [sym_end_assign] = ACTIONS(291),
    [anon_sym_LT_POUNDglobal] = ACTIONS(291),
    [sym_end_global] = ACTIONS(291),
    [anon_sym_LT_POUNDlocal] = ACTIONS(291),
    [sym_end_local] = ACTIONS(291),
  },
  [60] = {
    [sym_parameter_group] = STATE(133),
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
    [aux_sym_group_repeat1] = STATE(133),
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
    [anon_sym_GT] = ACTIONS(295),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(297),
    [sym_comment] = ACTIONS(297),
    [anon_sym_DOLLAR] = ACTIONS(297),
    [anon_sym_LT_AT] = ACTIONS(297),
    [anon_sym_LT_POUND] = ACTIONS(299),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(297),
    [sym_break] = ACTIONS(297),
    [sym_continue] = ACTIONS(297),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(297),
    [anon_sym_LT_POUNDitems] = ACTIONS(297),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(297),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(297),
    [anon_sym_LT_POUNDif] = ACTIONS(297),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(297),
    [anon_sym_LT_POUNDelseif] = ACTIONS(297),
    [anon_sym_LT_POUNDswitch] = ACTIONS(297),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(297),
    [anon_sym_LT_POUNDcase] = ACTIONS(297),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(297),
    [anon_sym_LT_POUNDfunction] = ACTIONS(297),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(297),
    [anon_sym_LT_POUNDreturn] = ACTIONS(297),
    [anon_sym_LT_POUNDmacro] = ACTIONS(297),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(297),
    [anon_sym_LT_POUNDnested] = ACTIONS(297),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(297),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(297),
    [sym_recover] = ACTIONS(297),
    [sym_fallback] = ACTIONS(297),
    [sym_flush] = ACTIONS(297),
    [anon_sym_LT_POUNDftl] = ACTIONS(297),
    [anon_sym_LT_POUNDimport] = ACTIONS(297),
    [anon_sym_LT_POUNDinclude] = ACTIONS(297),
    [sym_lt] = ACTIONS(297),
    [sym_nt] = ACTIONS(297),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(297),
    [sym_rt] = ACTIONS(297),
    [anon_sym_LT_POUNDsetting] = ACTIONS(297),
    [sym_stop] = ACTIONS(297),
    [sym_t] = ACTIONS(297),
    [anon_sym_LT_POUNDvisit] = ACTIONS(297),
    [anon_sym_LT_POUNDassign] = ACTIONS(297),
    [sym_end_assign] = ACTIONS(297),
    [anon_sym_LT_POUNDglobal] = ACTIONS(297),
    [sym_end_global] = ACTIONS(297),
    [anon_sym_LT_POUNDlocal] = ACTIONS(297),
    [sym_end_local] = ACTIONS(297),
  },
  [62] = {
    [sym_parameter_group] = STATE(133),
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
    [aux_sym_group_repeat1] = STATE(133),
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
    [anon_sym_GT] = ACTIONS(301),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(303),
    [sym_comment] = ACTIONS(303),
    [anon_sym_DOLLAR] = ACTIONS(303),
    [anon_sym_LT_AT] = ACTIONS(303),
    [anon_sym_LT_POUND] = ACTIONS(305),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(303),
    [sym_break] = ACTIONS(303),
    [sym_continue] = ACTIONS(303),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(303),
    [anon_sym_LT_POUNDitems] = ACTIONS(303),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(303),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(303),
    [anon_sym_LT_POUNDif] = ACTIONS(303),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(303),
    [anon_sym_LT_POUNDelseif] = ACTIONS(303),
    [anon_sym_LT_POUNDswitch] = ACTIONS(303),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(303),
    [anon_sym_LT_POUNDcase] = ACTIONS(303),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(303),
    [anon_sym_LT_POUNDfunction] = ACTIONS(303),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(303),
    [anon_sym_LT_POUNDreturn] = ACTIONS(303),
    [anon_sym_LT_POUNDmacro] = ACTIONS(303),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(303),
    [anon_sym_LT_POUNDnested] = ACTIONS(303),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(303),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(303),
    [sym_recover] = ACTIONS(303),
    [sym_fallback] = ACTIONS(303),
    [sym_flush] = ACTIONS(303),
    [anon_sym_LT_POUNDftl] = ACTIONS(303),
    [anon_sym_LT_POUNDimport] = ACTIONS(303),
    [anon_sym_LT_POUNDinclude] = ACTIONS(303),
    [sym_lt] = ACTIONS(303),
    [sym_nt] = ACTIONS(303),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(303),
    [sym_rt] = ACTIONS(303),
    [anon_sym_LT_POUNDsetting] = ACTIONS(303),
    [sym_stop] = ACTIONS(303),
    [sym_t] = ACTIONS(303),
    [anon_sym_LT_POUNDvisit] = ACTIONS(303),
    [anon_sym_LT_POUNDassign] = ACTIONS(303),
    [sym_end_assign] = ACTIONS(303),
    [anon_sym_LT_POUNDglobal] = ACTIONS(303),
    [sym_end_global] = ACTIONS(303),
    [anon_sym_LT_POUNDlocal] = ACTIONS(303),
    [sym_end_local] = ACTIONS(303),
  },
  [64] = {
    [sym_parameter_group] = STATE(133),
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
    [aux_sym_group_repeat1] = STATE(133),
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
    [anon_sym_GT] = ACTIONS(307),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(309),
    [sym_comment] = ACTIONS(309),
    [anon_sym_DOLLAR] = ACTIONS(309),
    [anon_sym_LT_AT] = ACTIONS(309),
    [anon_sym_LT_POUND] = ACTIONS(311),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(309),
    [sym_break] = ACTIONS(309),
    [sym_continue] = ACTIONS(309),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(309),
    [anon_sym_LT_POUNDitems] = ACTIONS(309),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(309),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(309),
    [anon_sym_LT_POUNDif] = ACTIONS(309),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(309),
    [anon_sym_LT_POUNDelseif] = ACTIONS(309),
    [anon_sym_LT_POUNDswitch] = ACTIONS(309),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(309),
    [anon_sym_LT_POUNDcase] = ACTIONS(309),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(309),
    [anon_sym_LT_POUNDfunction] = ACTIONS(309),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(309),
    [anon_sym_LT_POUNDreturn] = ACTIONS(309),
    [anon_sym_LT_POUNDmacro] = ACTIONS(309),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(309),
    [anon_sym_LT_POUNDnested] = ACTIONS(309),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(309),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(309),
    [sym_recover] = ACTIONS(309),
    [sym_fallback] = ACTIONS(309),
    [sym_flush] = ACTIONS(309),
    [anon_sym_LT_POUNDftl] = ACTIONS(309),
    [anon_sym_LT_POUNDimport] = ACTIONS(309),
    [anon_sym_LT_POUNDinclude] = ACTIONS(309),
    [sym_lt] = ACTIONS(309),
    [sym_nt] = ACTIONS(309),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(309),
    [sym_rt] = ACTIONS(309),
    [anon_sym_LT_POUNDsetting] = ACTIONS(309),
    [sym_stop] = ACTIONS(309),
    [sym_t] = ACTIONS(309),
    [anon_sym_LT_POUNDvisit] = ACTIONS(309),
    [anon_sym_LT_POUNDassign] = ACTIONS(309),
    [sym_end_assign] = ACTIONS(309),
    [anon_sym_LT_POUNDglobal] = ACTIONS(309),
    [sym_end_global] = ACTIONS(309),
    [anon_sym_LT_POUNDlocal] = ACTIONS(309),
    [sym_end_local] = ACTIONS(309),
  },
  [66] = {
    [sym_parameter_group] = STATE(133),
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
    [aux_sym_group_repeat1] = STATE(133),
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
    [anon_sym_GT] = ACTIONS(313),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(315),
    [sym_comment] = ACTIONS(315),
    [anon_sym_DOLLAR] = ACTIONS(315),
    [anon_sym_LT_AT] = ACTIONS(315),
    [anon_sym_LT_POUND] = ACTIONS(317),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(315),
    [sym_break] = ACTIONS(315),
    [sym_continue] = ACTIONS(315),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(315),
    [anon_sym_LT_POUNDitems] = ACTIONS(315),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(315),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(315),
    [anon_sym_LT_POUNDif] = ACTIONS(315),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(315),
    [anon_sym_LT_POUNDelseif] = ACTIONS(315),
    [anon_sym_LT_POUNDswitch] = ACTIONS(315),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(315),
    [anon_sym_LT_POUNDcase] = ACTIONS(315),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(315),
    [anon_sym_LT_POUNDfunction] = ACTIONS(315),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(315),
    [anon_sym_LT_POUNDreturn] = ACTIONS(315),
    [anon_sym_LT_POUNDmacro] = ACTIONS(315),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(315),
    [anon_sym_LT_POUNDnested] = ACTIONS(315),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(315),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(315),
    [sym_recover] = ACTIONS(315),
    [sym_fallback] = ACTIONS(315),
    [sym_flush] = ACTIONS(315),
    [anon_sym_LT_POUNDftl] = ACTIONS(315),
    [anon_sym_LT_POUNDimport] = ACTIONS(315),
    [anon_sym_LT_POUNDinclude] = ACTIONS(315),
    [sym_lt] = ACTIONS(315),
    [sym_nt] = ACTIONS(315),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(315),
    [sym_rt] = ACTIONS(315),
    [anon_sym_LT_POUNDsetting] = ACTIONS(315),
    [sym_stop] = ACTIONS(315),
    [sym_t] = ACTIONS(315),
    [anon_sym_LT_POUNDvisit] = ACTIONS(315),
    [anon_sym_LT_POUNDassign] = ACTIONS(315),
    [sym_end_assign] = ACTIONS(315),
    [anon_sym_LT_POUNDglobal] = ACTIONS(315),
    [sym_end_global] = ACTIONS(315),
    [anon_sym_LT_POUNDlocal] = ACTIONS(315),
    [sym_end_local] = ACTIONS(315),
  },
  [68] = {
    [sym_parameter_group] = STATE(133),
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
    [aux_sym_group_repeat1] = STATE(133),
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
    [anon_sym_GT] = ACTIONS(319),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(321),
    [sym_comment] = ACTIONS(321),
    [anon_sym_DOLLAR] = ACTIONS(321),
    [anon_sym_LT_AT] = ACTIONS(321),
    [anon_sym_LT_POUND] = ACTIONS(323),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(321),
    [sym_break] = ACTIONS(321),
    [sym_continue] = ACTIONS(321),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(321),
    [anon_sym_LT_POUNDitems] = ACTIONS(321),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(321),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(321),
    [anon_sym_LT_POUNDif] = ACTIONS(321),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(321),
    [anon_sym_LT_POUNDelseif] = ACTIONS(321),
    [anon_sym_LT_POUNDswitch] = ACTIONS(321),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(321),
    [anon_sym_LT_POUNDcase] = ACTIONS(321),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(321),
    [anon_sym_LT_POUNDfunction] = ACTIONS(321),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(321),
    [anon_sym_LT_POUNDreturn] = ACTIONS(321),
    [anon_sym_LT_POUNDmacro] = ACTIONS(321),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(321),
    [anon_sym_LT_POUNDnested] = ACTIONS(321),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(321),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(321),
    [sym_recover] = ACTIONS(321),
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
  [70] = {
    [sym_parameter_group] = STATE(133),
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
    [aux_sym_group_repeat1] = STATE(133),
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
    [anon_sym_GT] = ACTIONS(325),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(327),
    [sym_comment] = ACTIONS(327),
    [anon_sym_DOLLAR] = ACTIONS(327),
    [anon_sym_LT_AT] = ACTIONS(327),
    [anon_sym_LT_POUND] = ACTIONS(329),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(327),
    [sym_break] = ACTIONS(327),
    [sym_continue] = ACTIONS(327),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(327),
    [anon_sym_LT_POUNDitems] = ACTIONS(327),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(327),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(327),
    [anon_sym_LT_POUNDif] = ACTIONS(327),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(327),
    [anon_sym_LT_POUNDelseif] = ACTIONS(327),
    [anon_sym_LT_POUNDswitch] = ACTIONS(327),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(327),
    [anon_sym_LT_POUNDcase] = ACTIONS(327),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(327),
    [anon_sym_LT_POUNDfunction] = ACTIONS(327),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(327),
    [anon_sym_LT_POUNDreturn] = ACTIONS(327),
    [anon_sym_LT_POUNDmacro] = ACTIONS(327),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(327),
    [anon_sym_LT_POUNDnested] = ACTIONS(327),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(327),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(327),
    [sym_recover] = ACTIONS(327),
    [sym_fallback] = ACTIONS(327),
    [sym_flush] = ACTIONS(327),
    [anon_sym_LT_POUNDftl] = ACTIONS(327),
    [anon_sym_LT_POUNDimport] = ACTIONS(327),
    [anon_sym_LT_POUNDinclude] = ACTIONS(327),
    [sym_lt] = ACTIONS(327),
    [sym_nt] = ACTIONS(327),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(327),
    [sym_rt] = ACTIONS(327),
    [anon_sym_LT_POUNDsetting] = ACTIONS(327),
    [sym_stop] = ACTIONS(327),
    [sym_t] = ACTIONS(327),
    [anon_sym_LT_POUNDvisit] = ACTIONS(327),
    [anon_sym_LT_POUNDassign] = ACTIONS(327),
    [sym_end_assign] = ACTIONS(327),
    [anon_sym_LT_POUNDglobal] = ACTIONS(327),
    [sym_end_global] = ACTIONS(327),
    [anon_sym_LT_POUNDlocal] = ACTIONS(327),
    [sym_end_local] = ACTIONS(327),
  },
  [72] = {
    [sym_parameter_group] = STATE(133),
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
    [aux_sym_group_repeat1] = STATE(133),
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
    [anon_sym_GT] = ACTIONS(331),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(333),
    [sym_comment] = ACTIONS(333),
    [anon_sym_DOLLAR] = ACTIONS(333),
    [anon_sym_LT_AT] = ACTIONS(333),
    [anon_sym_LT_POUND] = ACTIONS(335),
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
  [74] = {
    [sym_parameter_group] = STATE(133),
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
    [aux_sym_group_repeat1] = STATE(133),
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
    [anon_sym_GT] = ACTIONS(337),
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
    [ts_builtin_sym_end] = ACTIONS(339),
    [sym_comment] = ACTIONS(341),
    [anon_sym_DOLLAR] = ACTIONS(344),
    [anon_sym_LT_AT] = ACTIONS(347),
    [anon_sym_LT_POUND] = ACTIONS(350),
    [anon_sym_LT_POUNDif] = ACTIONS(353),
    [anon_sym_LT_POUNDswitch] = ACTIONS(356),
    [anon_sym_LT_POUNDfunction] = ACTIONS(359),
    [anon_sym_LT_POUNDmacro] = ACTIONS(362),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(365),
    [sym_fallback] = ACTIONS(368),
    [sym_flush] = ACTIONS(368),
    [anon_sym_LT_POUNDftl] = ACTIONS(371),
    [anon_sym_LT_POUNDimport] = ACTIONS(374),
    [anon_sym_LT_POUNDinclude] = ACTIONS(377),
    [sym_lt] = ACTIONS(368),
    [sym_nt] = ACTIONS(368),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(380),
    [sym_rt] = ACTIONS(368),
    [anon_sym_LT_POUNDsetting] = ACTIONS(383),
    [sym_stop] = ACTIONS(368),
    [sym_t] = ACTIONS(368),
    [anon_sym_LT_POUNDvisit] = ACTIONS(386),
    [anon_sym_LT_POUNDassign] = ACTIONS(389),
    [sym_end_assign] = ACTIONS(392),
    [anon_sym_LT_POUNDglobal] = ACTIONS(395),
    [sym_end_global] = ACTIONS(398),
    [anon_sym_LT_POUNDlocal] = ACTIONS(401),
    [sym_end_local] = ACTIONS(404),
  },
  [76] = {
    [sym_expression] = STATE(173),
    [sym_type] = STATE(88),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(86),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_interpolation_repeat1] = STATE(173),
    [aux_sym_as_expression_repeat1] = STATE(88),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(407),
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
    [ts_builtin_sym_end] = ACTIONS(409),
    [sym_comment] = ACTIONS(409),
    [anon_sym_DOLLAR] = ACTIONS(409),
    [anon_sym_LT_AT] = ACTIONS(409),
    [anon_sym_LT_POUND] = ACTIONS(411),
    [anon_sym_LT_POUNDif] = ACTIONS(409),
    [anon_sym_LT_POUNDswitch] = ACTIONS(409),
    [anon_sym_LT_POUNDfunction] = ACTIONS(409),
    [anon_sym_LT_POUNDmacro] = ACTIONS(409),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(409),
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
  [78] = {
    [sym_parameter_group] = STATE(174),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(115),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(114),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(115),
    [aux_sym_group_repeat1] = STATE(174),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(195),
    [anon_sym_QMARK] = ACTIONS(197),
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
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(79),
  },
  [79] = {
    [anon_sym_LBRACE] = ACTIONS(201),
    [anon_sym_RBRACE] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_using] = ACTIONS(203),
    [anon_sym_is] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(201),
    [anon_sym_DOT_DOT] = ACTIONS(203),
    [anon_sym_DOT_DOT_LT] = ACTIONS(201),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(201),
    [anon_sym_COLON] = ACTIONS(201),
    [anon_sym_STAR] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(201),
    [anon_sym_PERCENT] = ACTIONS(201),
    [anon_sym_EQ_EQ] = ACTIONS(201),
    [anon_sym_BANG_EQ] = ACTIONS(201),
    [anon_sym_LT] = ACTIONS(203),
    [anon_sym_LT_EQ] = ACTIONS(201),
    [anon_sym_lt] = ACTIONS(203),
    [anon_sym_lte] = ACTIONS(203),
    [anon_sym_gt] = ACTIONS(203),
    [anon_sym_gte] = ACTIONS(203),
    [anon_sym_BANG] = ACTIONS(203),
    [anon_sym_AMP_AMP] = ACTIONS(201),
    [anon_sym_PIPE_PIPE] = ACTIONS(201),
    [anon_sym_QMARK_QMARK] = ACTIONS(201),
    [anon_sym_EQ] = ACTIONS(203),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(201),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(201),
    [sym_number] = ACTIONS(203),
    [anon_sym_true] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(201),
    [anon_sym_RBRACK] = ACTIONS(201),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(203),
  },
  [80] = {
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_RBRACE] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_using] = ACTIONS(207),
    [anon_sym_is] = ACTIONS(207),
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
    [anon_sym_DOT] = ACTIONS(207),
  },
  [81] = {
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_RBRACE] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_using] = ACTIONS(211),
    [anon_sym_is] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_DOT_DOT] = ACTIONS(211),
    [anon_sym_DOT_DOT_LT] = ACTIONS(209),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_PERCENT] = ACTIONS(209),
    [anon_sym_EQ_EQ] = ACTIONS(209),
    [anon_sym_BANG_EQ] = ACTIONS(209),
    [anon_sym_LT] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(209),
    [anon_sym_lt] = ACTIONS(211),
    [anon_sym_lte] = ACTIONS(211),
    [anon_sym_gt] = ACTIONS(211),
    [anon_sym_gte] = ACTIONS(211),
    [anon_sym_BANG] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [anon_sym_QMARK_QMARK] = ACTIONS(209),
    [anon_sym_EQ] = ACTIONS(211),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(209),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(209),
    [sym_number] = ACTIONS(211),
    [anon_sym_true] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_RBRACK] = ACTIONS(209),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(211),
  },
  [82] = {
    [anon_sym_false] = ACTIONS(413),
  },
  [83] = {
    [sym_expression] = STATE(120),
    [sym_type] = STATE(122),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(121),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat1] = STATE(122),
    [aux_sym_sequence_repeat1] = STATE(177),
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
    [anon_sym_RBRACK] = ACTIONS(415),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(217),
    [anon_sym_DOT] = ACTIONS(159),
  },
  [84] = {
    [sym_group] = STATE(179),
    [aux_sym_top_level_repeat1] = STATE(180),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_RBRACE] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_using] = ACTIONS(221),
    [anon_sym_is] = ACTIONS(221),
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
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(417),
    [anon_sym_DOT] = ACTIONS(221),
  },
  [85] = {
    [sym__spec_var_name] = STATE(181),
    [anon_sym_auto_esc] = ACTIONS(419),
    [anon_sym_caller_template_name] = ACTIONS(419),
    [anon_sym_current_template_name] = ACTIONS(419),
    [anon_sym_data_model] = ACTIONS(419),
    [anon_sym_error] = ACTIONS(419),
    [anon_sym_globals] = ACTIONS(419),
    [anon_sym_incompatible_improvements] = ACTIONS(419),
    [anon_sym_lang] = ACTIONS(419),
    [anon_sym_locale] = ACTIONS(421),
    [anon_sym_locale_object] = ACTIONS(419),
    [anon_sym_locals] = ACTIONS(419),
    [anon_sym_main] = ACTIONS(421),
    [anon_sym_main_template_name] = ACTIONS(419),
    [anon_sym_namespace] = ACTIONS(419),
    [anon_sym_node] = ACTIONS(419),
    [anon_sym_now] = ACTIONS(419),
    [anon_sym_output_encoding] = ACTIONS(419),
    [anon_sym_get_optional_template] = ACTIONS(419),
    [anon_sym_pass] = ACTIONS(419),
    [anon_sym_template_name] = ACTIONS(419),
    [anon_sym_url_escaping_charset] = ACTIONS(419),
    [anon_sym_output_format] = ACTIONS(419),
    [anon_sym_vars] = ACTIONS(419),
    [anon_sym_version] = ACTIONS(419),
  },
  [86] = {
    [sym_type] = STATE(182),
    [sym_group] = STATE(81),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat2] = STATE(182),
    [anon_sym_LBRACE] = ACTIONS(233),
    [anon_sym_RBRACE] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_using] = ACTIONS(235),
    [anon_sym_is] = ACTIONS(235),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_DOT_DOT] = ACTIONS(235),
    [anon_sym_DOT_DOT_LT] = ACTIONS(233),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(233),
    [anon_sym_COLON] = ACTIONS(233),
    [anon_sym_STAR] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_PERCENT] = ACTIONS(233),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_LT] = ACTIONS(235),
    [anon_sym_LT_EQ] = ACTIONS(233),
    [anon_sym_lt] = ACTIONS(235),
    [anon_sym_lte] = ACTIONS(235),
    [anon_sym_gt] = ACTIONS(235),
    [anon_sym_gte] = ACTIONS(235),
    [anon_sym_BANG] = ACTIONS(235),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_QMARK_QMARK] = ACTIONS(233),
    [anon_sym_EQ] = ACTIONS(235),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(233),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(233),
    [sym_number] = ACTIONS(235),
    [anon_sym_true] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(233),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(235),
    [anon_sym_DOT] = ACTIONS(235),
  },
  [87] = {
    [sym_expression] = STATE(184),
    [sym_type] = STATE(88),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(86),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_interpolation_repeat1] = STATE(184),
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
  [88] = {
    [sym_type] = STATE(186),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(185),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat1] = STATE(186),
    [aux_sym_as_expression_repeat2] = STATE(182),
    [anon_sym_LBRACE] = ACTIONS(233),
    [anon_sym_RBRACE] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(233),
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
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(233),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(233),
    [sym_number] = ACTIONS(235),
    [anon_sym_true] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(233),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(235),
    [anon_sym_DOT] = ACTIONS(235),
  },
  [89] = {
    [sym_expression] = STATE(188),
    [sym_type] = STATE(88),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(86),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_interpolation_repeat1] = STATE(188),
    [aux_sym_as_expression_repeat1] = STATE(88),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(425),
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
    [sym_type] = STATE(189),
    [sym_group] = STATE(95),
    [sym_string] = STATE(95),
    [sym_boolean] = STATE(95),
    [sym_sequence] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_top_level] = STATE(95),
    [sym_spec_var] = STATE(95),
    [aux_sym_as_expression_repeat2] = STATE(189),
    [anon_sym_LBRACE] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(167),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(173),
    [sym_number] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(179),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(181),
    [anon_sym_DOT] = ACTIONS(427),
  },
  [91] = {
    [sym_top_level] = STATE(190),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(429),
  },
  [92] = {
    [sym_parameter_group] = STATE(191),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(115),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(114),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(115),
    [aux_sym_group_repeat1] = STATE(191),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(195),
    [anon_sym_QMARK] = ACTIONS(197),
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
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(79),
  },
  [93] = {
    [anon_sym_LBRACE] = ACTIONS(201),
    [anon_sym_as] = ACTIONS(203),
    [anon_sym_QMARK] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_using] = ACTIONS(203),
    [anon_sym_is] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(201),
    [anon_sym_DOT_DOT] = ACTIONS(203),
    [anon_sym_DOT_DOT_LT] = ACTIONS(201),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(201),
    [anon_sym_COLON] = ACTIONS(201),
    [anon_sym_STAR] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(201),
    [anon_sym_PERCENT] = ACTIONS(201),
    [anon_sym_EQ_EQ] = ACTIONS(201),
    [anon_sym_BANG_EQ] = ACTIONS(201),
    [anon_sym_LT] = ACTIONS(203),
    [anon_sym_LT_EQ] = ACTIONS(201),
    [anon_sym_lt] = ACTIONS(203),
    [anon_sym_lte] = ACTIONS(203),
    [anon_sym_gt] = ACTIONS(203),
    [anon_sym_gte] = ACTIONS(203),
    [anon_sym_BANG] = ACTIONS(203),
    [anon_sym_AMP_AMP] = ACTIONS(201),
    [anon_sym_PIPE_PIPE] = ACTIONS(201),
    [anon_sym_QMARK_QMARK] = ACTIONS(201),
    [anon_sym_EQ] = ACTIONS(203),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(201),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(201),
    [sym_number] = ACTIONS(203),
    [anon_sym_true] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(201),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(203),
    [anon_sym_GT] = ACTIONS(201),
    [anon_sym_SLASH_GT] = ACTIONS(201),
  },
  [94] = {
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_as] = ACTIONS(207),
    [anon_sym_QMARK] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_using] = ACTIONS(207),
    [anon_sym_is] = ACTIONS(207),
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
    [anon_sym_DOT] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(205),
    [anon_sym_SLASH_GT] = ACTIONS(205),
  },
  [95] = {
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_as] = ACTIONS(211),
    [anon_sym_QMARK] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_using] = ACTIONS(211),
    [anon_sym_is] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_DOT_DOT] = ACTIONS(211),
    [anon_sym_DOT_DOT_LT] = ACTIONS(209),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_PERCENT] = ACTIONS(209),
    [anon_sym_EQ_EQ] = ACTIONS(209),
    [anon_sym_BANG_EQ] = ACTIONS(209),
    [anon_sym_LT] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(209),
    [anon_sym_lt] = ACTIONS(211),
    [anon_sym_lte] = ACTIONS(211),
    [anon_sym_gt] = ACTIONS(211),
    [anon_sym_gte] = ACTIONS(211),
    [anon_sym_BANG] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [anon_sym_QMARK_QMARK] = ACTIONS(209),
    [anon_sym_EQ] = ACTIONS(211),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(209),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(209),
    [sym_number] = ACTIONS(211),
    [anon_sym_true] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(209),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(211),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_SLASH_GT] = ACTIONS(209),
  },
  [96] = {
    [anon_sym_false] = ACTIONS(431),
  },
  [97] = {
    [sym_expression] = STATE(120),
    [sym_type] = STATE(122),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(121),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat1] = STATE(122),
    [aux_sym_sequence_repeat1] = STATE(194),
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
    [anon_sym_RBRACK] = ACTIONS(433),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(217),
    [anon_sym_DOT] = ACTIONS(159),
  },
  [98] = {
    [sym_group] = STATE(196),
    [aux_sym_top_level_repeat1] = STATE(197),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_as] = ACTIONS(221),
    [anon_sym_QMARK] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_using] = ACTIONS(221),
    [anon_sym_is] = ACTIONS(221),
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
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(435),
    [anon_sym_DOT] = ACTIONS(221),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_SLASH_GT] = ACTIONS(219),
  },
  [99] = {
    [sym__spec_var_name] = STATE(198),
    [anon_sym_auto_esc] = ACTIONS(437),
    [anon_sym_caller_template_name] = ACTIONS(437),
    [anon_sym_current_template_name] = ACTIONS(437),
    [anon_sym_data_model] = ACTIONS(437),
    [anon_sym_error] = ACTIONS(437),
    [anon_sym_globals] = ACTIONS(437),
    [anon_sym_incompatible_improvements] = ACTIONS(437),
    [anon_sym_lang] = ACTIONS(437),
    [anon_sym_locale] = ACTIONS(439),
    [anon_sym_locale_object] = ACTIONS(437),
    [anon_sym_locals] = ACTIONS(437),
    [anon_sym_main] = ACTIONS(439),
    [anon_sym_main_template_name] = ACTIONS(437),
    [anon_sym_namespace] = ACTIONS(437),
    [anon_sym_node] = ACTIONS(437),
    [anon_sym_now] = ACTIONS(437),
    [anon_sym_output_encoding] = ACTIONS(437),
    [anon_sym_get_optional_template] = ACTIONS(437),
    [anon_sym_pass] = ACTIONS(437),
    [anon_sym_template_name] = ACTIONS(437),
    [anon_sym_url_escaping_charset] = ACTIONS(437),
    [anon_sym_output_format] = ACTIONS(437),
    [anon_sym_vars] = ACTIONS(437),
    [anon_sym_version] = ACTIONS(437),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(441),
    [sym_comment] = ACTIONS(441),
    [anon_sym_DOLLAR] = ACTIONS(441),
    [anon_sym_LT_AT] = ACTIONS(441),
    [anon_sym_LT_POUND] = ACTIONS(443),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(441),
    [sym_break] = ACTIONS(441),
    [sym_continue] = ACTIONS(441),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(441),
    [anon_sym_LT_POUNDitems] = ACTIONS(441),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(441),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(441),
    [anon_sym_LT_POUNDif] = ACTIONS(441),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(441),
    [anon_sym_LT_POUNDelseif] = ACTIONS(441),
    [anon_sym_LT_POUNDswitch] = ACTIONS(441),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(441),
    [anon_sym_LT_POUNDcase] = ACTIONS(441),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(441),
    [anon_sym_LT_POUNDfunction] = ACTIONS(441),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(441),
    [anon_sym_LT_POUNDreturn] = ACTIONS(441),
    [anon_sym_LT_POUNDmacro] = ACTIONS(441),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(441),
    [anon_sym_LT_POUNDnested] = ACTIONS(441),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(441),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(441),
    [sym_recover] = ACTIONS(441),
    [sym_fallback] = ACTIONS(441),
    [sym_flush] = ACTIONS(441),
    [anon_sym_LT_POUNDftl] = ACTIONS(441),
    [anon_sym_LT_POUNDimport] = ACTIONS(441),
    [anon_sym_LT_POUNDinclude] = ACTIONS(441),
    [sym_lt] = ACTIONS(441),
    [sym_nt] = ACTIONS(441),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(441),
    [sym_rt] = ACTIONS(441),
    [anon_sym_LT_POUNDsetting] = ACTIONS(441),
    [sym_stop] = ACTIONS(441),
    [sym_t] = ACTIONS(441),
    [anon_sym_LT_POUNDvisit] = ACTIONS(441),
    [anon_sym_LT_POUNDassign] = ACTIONS(441),
    [sym_end_assign] = ACTIONS(441),
    [anon_sym_LT_POUNDglobal] = ACTIONS(441),
    [sym_end_global] = ACTIONS(441),
    [anon_sym_LT_POUNDlocal] = ACTIONS(441),
    [sym_end_local] = ACTIONS(441),
  },
  [101] = {
    [anon_sym_LBRACE] = ACTIONS(229),
    [anon_sym_as] = ACTIONS(231),
    [anon_sym_QMARK] = ACTIONS(231),
    [anon_sym_LPAREN] = ACTIONS(229),
    [anon_sym_using] = ACTIONS(231),
    [anon_sym_is] = ACTIONS(231),
    [anon_sym_COMMA] = ACTIONS(229),
    [anon_sym_DOT_DOT] = ACTIONS(231),
    [anon_sym_DOT_DOT_LT] = ACTIONS(229),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(229),
    [anon_sym_COLON] = ACTIONS(229),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_EQ_EQ] = ACTIONS(229),
    [anon_sym_BANG_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_lt] = ACTIONS(231),
    [anon_sym_lte] = ACTIONS(231),
    [anon_sym_gt] = ACTIONS(231),
    [anon_sym_gte] = ACTIONS(231),
    [anon_sym_BANG] = ACTIONS(231),
    [anon_sym_AMP_AMP] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(229),
    [anon_sym_QMARK_QMARK] = ACTIONS(229),
    [anon_sym_EQ] = ACTIONS(231),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(229),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(229),
    [sym_number] = ACTIONS(231),
    [anon_sym_true] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(229),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(231),
    [anon_sym_DOT] = ACTIONS(231),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_SLASH_GT] = ACTIONS(229),
  },
  [102] = {
    [sym_type] = STATE(199),
    [sym_group] = STATE(95),
    [sym_string] = STATE(95),
    [sym_boolean] = STATE(95),
    [sym_sequence] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_top_level] = STATE(95),
    [sym_spec_var] = STATE(95),
    [aux_sym_as_expression_repeat2] = STATE(199),
    [anon_sym_LBRACE] = ACTIONS(233),
    [anon_sym_as] = ACTIONS(235),
    [anon_sym_QMARK] = ACTIONS(235),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_using] = ACTIONS(235),
    [anon_sym_is] = ACTIONS(235),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_DOT_DOT] = ACTIONS(235),
    [anon_sym_DOT_DOT_LT] = ACTIONS(233),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(233),
    [anon_sym_COLON] = ACTIONS(233),
    [anon_sym_STAR] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(235),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_PERCENT] = ACTIONS(233),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_LT] = ACTIONS(235),
    [anon_sym_LT_EQ] = ACTIONS(233),
    [anon_sym_lt] = ACTIONS(235),
    [anon_sym_lte] = ACTIONS(235),
    [anon_sym_gt] = ACTIONS(235),
    [anon_sym_gte] = ACTIONS(235),
    [anon_sym_BANG] = ACTIONS(235),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_QMARK_QMARK] = ACTIONS(233),
    [anon_sym_EQ] = ACTIONS(235),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(233),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(233),
    [sym_number] = ACTIONS(235),
    [anon_sym_true] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(233),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(235),
    [anon_sym_DOT] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(233),
    [anon_sym_SLASH_GT] = ACTIONS(233),
  },
  [103] = {
    [sym_type] = STATE(202),
    [sym_group] = STATE(95),
    [sym_operator] = STATE(201),
    [sym_string] = STATE(95),
    [sym_boolean] = STATE(95),
    [sym_sequence] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_top_level] = STATE(95),
    [sym_spec_var] = STATE(95),
    [aux_sym_as_expression_repeat1] = STATE(202),
    [aux_sym_as_expression_repeat2] = STATE(199),
    [anon_sym_LBRACE] = ACTIONS(233),
    [anon_sym_as] = ACTIONS(445),
    [anon_sym_QMARK] = ACTIONS(235),
    [anon_sym_LPAREN] = ACTIONS(233),
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
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(233),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(233),
    [sym_number] = ACTIONS(235),
    [anon_sym_true] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(233),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(235),
    [anon_sym_DOT] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(233),
    [anon_sym_SLASH_GT] = ACTIONS(233),
  },
  [104] = {
    [sym_parameter_group] = STATE(204),
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
    [aux_sym_group_repeat1] = STATE(204),
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
    [anon_sym_GT] = ACTIONS(447),
    [anon_sym_SLASH_GT] = ACTIONS(447),
  },
  [105] = {
    [sym_directive] = STATE(206),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_list_middle] = STATE(212),
    [sym_list_else] = STATE(210),
    [sym_items] = STATE(206),
    [sym_sep] = STATE(206),
    [sym_sep_block] = STATE(211),
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
    [aux_sym_list_repeat1] = STATE(212),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(449),
    [sym_break] = ACTIONS(451),
    [sym_continue] = ACTIONS(451),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(453),
    [anon_sym_LT_POUNDitems] = ACTIONS(455),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(457),
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
  [106] = {
    [sym_parameter_group] = STATE(133),
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
    [aux_sym_group_repeat1] = STATE(133),
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
    [anon_sym_GT] = ACTIONS(459),
  },
  [107] = {
    [anon_sym_LBRACE] = ACTIONS(461),
    [anon_sym_as] = ACTIONS(463),
    [anon_sym_QMARK] = ACTIONS(463),
    [anon_sym_LPAREN] = ACTIONS(461),
    [anon_sym_RPAREN] = ACTIONS(461),
    [anon_sym_using] = ACTIONS(463),
    [anon_sym_is] = ACTIONS(463),
    [anon_sym_COMMA] = ACTIONS(461),
    [anon_sym_DOT_DOT] = ACTIONS(463),
    [anon_sym_DOT_DOT_LT] = ACTIONS(461),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(461),
    [anon_sym_COLON] = ACTIONS(461),
    [anon_sym_STAR] = ACTIONS(461),
    [anon_sym_PLUS] = ACTIONS(461),
    [anon_sym_SLASH] = ACTIONS(461),
    [anon_sym_DASH] = ACTIONS(461),
    [anon_sym_PERCENT] = ACTIONS(461),
    [anon_sym_EQ_EQ] = ACTIONS(461),
    [anon_sym_BANG_EQ] = ACTIONS(461),
    [anon_sym_LT] = ACTIONS(463),
    [anon_sym_LT_EQ] = ACTIONS(461),
    [anon_sym_lt] = ACTIONS(463),
    [anon_sym_lte] = ACTIONS(463),
    [anon_sym_gt] = ACTIONS(463),
    [anon_sym_gte] = ACTIONS(463),
    [anon_sym_BANG] = ACTIONS(463),
    [anon_sym_AMP_AMP] = ACTIONS(461),
    [anon_sym_PIPE_PIPE] = ACTIONS(461),
    [anon_sym_QMARK_QMARK] = ACTIONS(461),
    [anon_sym_EQ] = ACTIONS(463),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(461),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(461),
    [sym_number] = ACTIONS(463),
    [anon_sym_true] = ACTIONS(463),
    [anon_sym_LBRACK] = ACTIONS(461),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(463),
    [anon_sym_DOT] = ACTIONS(463),
    [anon_sym_GT] = ACTIONS(461),
  },
  [108] = {
    [sym_expression] = STATE(184),
    [sym_type] = STATE(88),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(86),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_interpolation_repeat1] = STATE(184),
    [aux_sym_as_expression_repeat1] = STATE(88),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(465),
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
  [109] = {
    [sym_type] = STATE(215),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(215),
    [anon_sym_LBRACE] = ACTIONS(467),
    [anon_sym_as] = ACTIONS(469),
    [anon_sym_QMARK] = ACTIONS(469),
    [anon_sym_LPAREN] = ACTIONS(467),
    [anon_sym_using] = ACTIONS(469),
    [anon_sym_is] = ACTIONS(469),
    [anon_sym_COMMA] = ACTIONS(467),
    [anon_sym_DOT_DOT] = ACTIONS(469),
    [anon_sym_DOT_DOT_LT] = ACTIONS(467),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(467),
    [anon_sym_COLON] = ACTIONS(467),
    [anon_sym_STAR] = ACTIONS(467),
    [anon_sym_PLUS] = ACTIONS(467),
    [anon_sym_SLASH] = ACTIONS(467),
    [anon_sym_DASH] = ACTIONS(467),
    [anon_sym_PERCENT] = ACTIONS(467),
    [anon_sym_EQ_EQ] = ACTIONS(467),
    [anon_sym_BANG_EQ] = ACTIONS(467),
    [anon_sym_LT] = ACTIONS(469),
    [anon_sym_LT_EQ] = ACTIONS(467),
    [anon_sym_lt] = ACTIONS(469),
    [anon_sym_lte] = ACTIONS(469),
    [anon_sym_gt] = ACTIONS(469),
    [anon_sym_gte] = ACTIONS(469),
    [anon_sym_BANG] = ACTIONS(469),
    [anon_sym_AMP_AMP] = ACTIONS(467),
    [anon_sym_PIPE_PIPE] = ACTIONS(467),
    [anon_sym_QMARK_QMARK] = ACTIONS(467),
    [anon_sym_EQ] = ACTIONS(469),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(467),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(467),
    [sym_number] = ACTIONS(469),
    [anon_sym_true] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(467),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(469),
    [anon_sym_DOT] = ACTIONS(469),
    [anon_sym_GT] = ACTIONS(467),
  },
  [110] = {
    [sym_group] = STATE(216),
    [anon_sym_LBRACE] = ACTIONS(471),
    [anon_sym_as] = ACTIONS(473),
    [anon_sym_QMARK] = ACTIONS(473),
    [anon_sym_LPAREN] = ACTIONS(471),
    [anon_sym_RPAREN] = ACTIONS(471),
    [anon_sym_using] = ACTIONS(473),
    [anon_sym_is] = ACTIONS(473),
    [anon_sym_COMMA] = ACTIONS(471),
    [anon_sym_DOT_DOT] = ACTIONS(473),
    [anon_sym_DOT_DOT_LT] = ACTIONS(471),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(471),
    [anon_sym_COLON] = ACTIONS(471),
    [anon_sym_STAR] = ACTIONS(471),
    [anon_sym_PLUS] = ACTIONS(471),
    [anon_sym_SLASH] = ACTIONS(471),
    [anon_sym_DASH] = ACTIONS(471),
    [anon_sym_PERCENT] = ACTIONS(471),
    [anon_sym_EQ_EQ] = ACTIONS(471),
    [anon_sym_BANG_EQ] = ACTIONS(471),
    [anon_sym_LT] = ACTIONS(473),
    [anon_sym_LT_EQ] = ACTIONS(471),
    [anon_sym_lt] = ACTIONS(473),
    [anon_sym_lte] = ACTIONS(473),
    [anon_sym_gt] = ACTIONS(473),
    [anon_sym_gte] = ACTIONS(473),
    [anon_sym_BANG] = ACTIONS(473),
    [anon_sym_AMP_AMP] = ACTIONS(471),
    [anon_sym_PIPE_PIPE] = ACTIONS(471),
    [anon_sym_QMARK_QMARK] = ACTIONS(471),
    [anon_sym_EQ] = ACTIONS(473),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(471),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(471),
    [sym_number] = ACTIONS(473),
    [anon_sym_true] = ACTIONS(473),
    [anon_sym_LBRACK] = ACTIONS(471),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(473),
    [anon_sym_DOT] = ACTIONS(473),
    [anon_sym_GT] = ACTIONS(471),
  },
  [111] = {
    [sym_type] = STATE(217),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(217),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(191),
  },
  [112] = {
    [sym_top_level] = STATE(110),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(475),
  },
  [113] = {
    [sym_group] = STATE(125),
    [aux_sym_top_level_repeat1] = STATE(218),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_as] = ACTIONS(221),
    [anon_sym_QMARK] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_using] = ACTIONS(221),
    [anon_sym_is] = ACTIONS(221),
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
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(221),
  },
  [114] = {
    [sym_type] = STATE(219),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(219),
    [anon_sym_LBRACE] = ACTIONS(233),
    [anon_sym_as] = ACTIONS(235),
    [anon_sym_QMARK] = ACTIONS(235),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_using] = ACTIONS(235),
    [anon_sym_is] = ACTIONS(235),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_DOT_DOT] = ACTIONS(235),
    [anon_sym_DOT_DOT_LT] = ACTIONS(233),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(233),
    [anon_sym_COLON] = ACTIONS(233),
    [anon_sym_STAR] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_PERCENT] = ACTIONS(233),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_LT] = ACTIONS(235),
    [anon_sym_LT_EQ] = ACTIONS(233),
    [anon_sym_lt] = ACTIONS(235),
    [anon_sym_lte] = ACTIONS(235),
    [anon_sym_gt] = ACTIONS(235),
    [anon_sym_gte] = ACTIONS(235),
    [anon_sym_BANG] = ACTIONS(235),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_QMARK_QMARK] = ACTIONS(233),
    [anon_sym_EQ] = ACTIONS(235),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(233),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(233),
    [sym_number] = ACTIONS(235),
    [anon_sym_true] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(233),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(235),
    [anon_sym_DOT] = ACTIONS(235),
  },
  [115] = {
    [sym_type] = STATE(222),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(221),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(222),
    [aux_sym_as_expression_repeat2] = STATE(219),
    [anon_sym_LBRACE] = ACTIONS(233),
    [anon_sym_as] = ACTIONS(477),
    [anon_sym_QMARK] = ACTIONS(235),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(233),
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
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(233),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(233),
    [sym_number] = ACTIONS(235),
    [anon_sym_true] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(233),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(235),
    [anon_sym_DOT] = ACTIONS(235),
  },
  [116] = {
    [sym_parameter_group] = STATE(224),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(115),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(114),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(115),
    [aux_sym_group_repeat1] = STATE(224),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(195),
    [anon_sym_QMARK] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(479),
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
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(79),
  },
  [117] = {
    [anon_sym_LBRACE] = ACTIONS(481),
    [anon_sym_as] = ACTIONS(483),
    [anon_sym_QMARK] = ACTIONS(483),
    [anon_sym_LPAREN] = ACTIONS(481),
    [anon_sym_RPAREN] = ACTIONS(481),
    [anon_sym_using] = ACTIONS(483),
    [anon_sym_is] = ACTIONS(483),
    [anon_sym_COMMA] = ACTIONS(481),
    [anon_sym_DOT_DOT] = ACTIONS(483),
    [anon_sym_DOT_DOT_LT] = ACTIONS(481),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(481),
    [anon_sym_COLON] = ACTIONS(481),
    [anon_sym_STAR] = ACTIONS(481),
    [anon_sym_PLUS] = ACTIONS(481),
    [anon_sym_SLASH] = ACTIONS(481),
    [anon_sym_DASH] = ACTIONS(481),
    [anon_sym_PERCENT] = ACTIONS(481),
    [anon_sym_EQ_EQ] = ACTIONS(481),
    [anon_sym_BANG_EQ] = ACTIONS(481),
    [anon_sym_LT] = ACTIONS(483),
    [anon_sym_LT_EQ] = ACTIONS(481),
    [anon_sym_lt] = ACTIONS(483),
    [anon_sym_lte] = ACTIONS(483),
    [anon_sym_gt] = ACTIONS(483),
    [anon_sym_gte] = ACTIONS(483),
    [anon_sym_BANG] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(481),
    [anon_sym_PIPE_PIPE] = ACTIONS(481),
    [anon_sym_QMARK_QMARK] = ACTIONS(481),
    [anon_sym_EQ] = ACTIONS(483),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(481),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(481),
    [sym_number] = ACTIONS(483),
    [anon_sym_true] = ACTIONS(483),
    [anon_sym_LBRACK] = ACTIONS(481),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(483),
    [anon_sym_DOT] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(481),
  },
  [118] = {
    [anon_sym_LBRACE] = ACTIONS(485),
    [anon_sym_as] = ACTIONS(487),
    [anon_sym_QMARK] = ACTIONS(487),
    [anon_sym_LPAREN] = ACTIONS(485),
    [anon_sym_RPAREN] = ACTIONS(485),
    [anon_sym_using] = ACTIONS(487),
    [anon_sym_is] = ACTIONS(487),
    [anon_sym_COMMA] = ACTIONS(485),
    [anon_sym_DOT_DOT] = ACTIONS(487),
    [anon_sym_DOT_DOT_LT] = ACTIONS(485),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(485),
    [anon_sym_COLON] = ACTIONS(485),
    [anon_sym_STAR] = ACTIONS(485),
    [anon_sym_PLUS] = ACTIONS(485),
    [anon_sym_SLASH] = ACTIONS(485),
    [anon_sym_DASH] = ACTIONS(485),
    [anon_sym_PERCENT] = ACTIONS(485),
    [anon_sym_EQ_EQ] = ACTIONS(485),
    [anon_sym_BANG_EQ] = ACTIONS(485),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_LT_EQ] = ACTIONS(485),
    [anon_sym_lt] = ACTIONS(487),
    [anon_sym_lte] = ACTIONS(487),
    [anon_sym_gt] = ACTIONS(487),
    [anon_sym_gte] = ACTIONS(487),
    [anon_sym_BANG] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(485),
    [anon_sym_PIPE_PIPE] = ACTIONS(485),
    [anon_sym_QMARK_QMARK] = ACTIONS(485),
    [anon_sym_EQ] = ACTIONS(487),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(485),
    [sym_number] = ACTIONS(487),
    [anon_sym_true] = ACTIONS(487),
    [anon_sym_LBRACK] = ACTIONS(485),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(487),
    [anon_sym_DOT] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(485),
  },
  [119] = {
    [sym_group] = STATE(179),
    [aux_sym_top_level_repeat1] = STATE(225),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_using] = ACTIONS(221),
    [anon_sym_is] = ACTIONS(221),
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
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(417),
    [anon_sym_DOT] = ACTIONS(221),
  },
  [120] = {
    [anon_sym_LBRACE] = ACTIONS(489),
    [anon_sym_LPAREN] = ACTIONS(489),
    [anon_sym_using] = ACTIONS(491),
    [anon_sym_is] = ACTIONS(491),
    [anon_sym_COMMA] = ACTIONS(493),
    [anon_sym_DOT_DOT] = ACTIONS(491),
    [anon_sym_DOT_DOT_LT] = ACTIONS(489),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(489),
    [anon_sym_COLON] = ACTIONS(489),
    [anon_sym_STAR] = ACTIONS(489),
    [anon_sym_PLUS] = ACTIONS(489),
    [anon_sym_SLASH] = ACTIONS(489),
    [anon_sym_DASH] = ACTIONS(489),
    [anon_sym_PERCENT] = ACTIONS(489),
    [anon_sym_EQ_EQ] = ACTIONS(489),
    [anon_sym_BANG_EQ] = ACTIONS(489),
    [anon_sym_LT] = ACTIONS(491),
    [anon_sym_LT_EQ] = ACTIONS(489),
    [anon_sym_lt] = ACTIONS(491),
    [anon_sym_lte] = ACTIONS(491),
    [anon_sym_gt] = ACTIONS(491),
    [anon_sym_gte] = ACTIONS(491),
    [anon_sym_BANG] = ACTIONS(491),
    [anon_sym_AMP_AMP] = ACTIONS(489),
    [anon_sym_PIPE_PIPE] = ACTIONS(489),
    [anon_sym_QMARK_QMARK] = ACTIONS(489),
    [anon_sym_EQ] = ACTIONS(491),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(489),
    [sym_number] = ACTIONS(491),
    [anon_sym_true] = ACTIONS(491),
    [anon_sym_LBRACK] = ACTIONS(489),
    [anon_sym_RBRACK] = ACTIONS(489),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(491),
    [anon_sym_DOT] = ACTIONS(491),
  },
  [121] = {
    [sym_type] = STATE(227),
    [sym_group] = STATE(81),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat2] = STATE(227),
    [anon_sym_LBRACE] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_using] = ACTIONS(235),
    [anon_sym_is] = ACTIONS(235),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_DOT_DOT] = ACTIONS(235),
    [anon_sym_DOT_DOT_LT] = ACTIONS(233),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(233),
    [anon_sym_COLON] = ACTIONS(233),
    [anon_sym_STAR] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_PERCENT] = ACTIONS(233),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_LT] = ACTIONS(235),
    [anon_sym_LT_EQ] = ACTIONS(233),
    [anon_sym_lt] = ACTIONS(235),
    [anon_sym_lte] = ACTIONS(235),
    [anon_sym_gt] = ACTIONS(235),
    [anon_sym_gte] = ACTIONS(235),
    [anon_sym_BANG] = ACTIONS(235),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_QMARK_QMARK] = ACTIONS(233),
    [anon_sym_EQ] = ACTIONS(235),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(233),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(233),
    [sym_number] = ACTIONS(235),
    [anon_sym_true] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(233),
    [anon_sym_RBRACK] = ACTIONS(233),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(235),
    [anon_sym_DOT] = ACTIONS(235),
  },
  [122] = {
    [sym_type] = STATE(229),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(228),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat1] = STATE(229),
    [aux_sym_as_expression_repeat2] = STATE(227),
    [anon_sym_LBRACE] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(233),
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
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(233),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(233),
    [sym_number] = ACTIONS(235),
    [anon_sym_true] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(233),
    [anon_sym_RBRACK] = ACTIONS(233),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(235),
    [anon_sym_DOT] = ACTIONS(235),
  },
  [123] = {
    [sym_expression] = STATE(120),
    [sym_type] = STATE(122),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(121),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat1] = STATE(122),
    [aux_sym_sequence_repeat1] = STATE(231),
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
    [anon_sym_RBRACK] = ACTIONS(496),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(217),
    [anon_sym_DOT] = ACTIONS(159),
  },
  [124] = {
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
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(498),
    [anon_sym_DOT] = ACTIONS(500),
    [anon_sym_GT] = ACTIONS(498),
  },
  [125] = {
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
    [anon_sym_GT] = ACTIONS(502),
  },
  [126] = {
    [sym_group] = STATE(232),
    [aux_sym_top_level_repeat1] = STATE(233),
    [anon_sym_LBRACE] = ACTIONS(506),
    [anon_sym_as] = ACTIONS(508),
    [anon_sym_QMARK] = ACTIONS(508),
    [anon_sym_LPAREN] = ACTIONS(506),
    [anon_sym_using] = ACTIONS(508),
    [anon_sym_is] = ACTIONS(508),
    [anon_sym_COMMA] = ACTIONS(506),
    [anon_sym_DOT_DOT] = ACTIONS(508),
    [anon_sym_DOT_DOT_LT] = ACTIONS(506),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(506),
    [anon_sym_COLON] = ACTIONS(506),
    [anon_sym_STAR] = ACTIONS(506),
    [anon_sym_PLUS] = ACTIONS(506),
    [anon_sym_SLASH] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [anon_sym_PERCENT] = ACTIONS(506),
    [anon_sym_EQ_EQ] = ACTIONS(506),
    [anon_sym_BANG_EQ] = ACTIONS(506),
    [anon_sym_LT] = ACTIONS(508),
    [anon_sym_LT_EQ] = ACTIONS(506),
    [anon_sym_lt] = ACTIONS(508),
    [anon_sym_lte] = ACTIONS(508),
    [anon_sym_gt] = ACTIONS(508),
    [anon_sym_gte] = ACTIONS(508),
    [anon_sym_BANG] = ACTIONS(508),
    [anon_sym_AMP_AMP] = ACTIONS(506),
    [anon_sym_PIPE_PIPE] = ACTIONS(506),
    [anon_sym_QMARK_QMARK] = ACTIONS(506),
    [anon_sym_EQ] = ACTIONS(508),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(506),
    [sym_number] = ACTIONS(508),
    [anon_sym_true] = ACTIONS(508),
    [anon_sym_LBRACK] = ACTIONS(506),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(508),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(508),
    [anon_sym_GT] = ACTIONS(506),
  },
  [127] = {
    [anon_sym_LBRACE] = ACTIONS(510),
    [anon_sym_as] = ACTIONS(512),
    [anon_sym_QMARK] = ACTIONS(512),
    [anon_sym_LPAREN] = ACTIONS(510),
    [anon_sym_RPAREN] = ACTIONS(510),
    [anon_sym_using] = ACTIONS(512),
    [anon_sym_is] = ACTIONS(512),
    [anon_sym_COMMA] = ACTIONS(510),
    [anon_sym_DOT_DOT] = ACTIONS(512),
    [anon_sym_DOT_DOT_LT] = ACTIONS(510),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(510),
    [anon_sym_COLON] = ACTIONS(510),
    [anon_sym_STAR] = ACTIONS(510),
    [anon_sym_PLUS] = ACTIONS(510),
    [anon_sym_SLASH] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(510),
    [anon_sym_PERCENT] = ACTIONS(510),
    [anon_sym_EQ_EQ] = ACTIONS(510),
    [anon_sym_BANG_EQ] = ACTIONS(510),
    [anon_sym_LT] = ACTIONS(512),
    [anon_sym_LT_EQ] = ACTIONS(510),
    [anon_sym_lt] = ACTIONS(512),
    [anon_sym_lte] = ACTIONS(512),
    [anon_sym_gt] = ACTIONS(512),
    [anon_sym_gte] = ACTIONS(512),
    [anon_sym_BANG] = ACTIONS(512),
    [anon_sym_AMP_AMP] = ACTIONS(510),
    [anon_sym_PIPE_PIPE] = ACTIONS(510),
    [anon_sym_QMARK_QMARK] = ACTIONS(510),
    [anon_sym_EQ] = ACTIONS(512),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(510),
    [sym_number] = ACTIONS(512),
    [anon_sym_true] = ACTIONS(512),
    [anon_sym_LBRACK] = ACTIONS(510),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(512),
    [anon_sym_DOT] = ACTIONS(512),
    [anon_sym_GT] = ACTIONS(510),
  },
  [128] = {
    [sym_type] = STATE(215),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(215),
    [anon_sym_LBRACE] = ACTIONS(514),
    [anon_sym_as] = ACTIONS(516),
    [anon_sym_QMARK] = ACTIONS(516),
    [anon_sym_LPAREN] = ACTIONS(514),
    [anon_sym_using] = ACTIONS(516),
    [anon_sym_is] = ACTIONS(516),
    [anon_sym_COMMA] = ACTIONS(514),
    [anon_sym_DOT_DOT] = ACTIONS(516),
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
    [anon_sym_LT] = ACTIONS(516),
    [anon_sym_LT_EQ] = ACTIONS(514),
    [anon_sym_lt] = ACTIONS(516),
    [anon_sym_lte] = ACTIONS(516),
    [anon_sym_gt] = ACTIONS(516),
    [anon_sym_gte] = ACTIONS(516),
    [anon_sym_BANG] = ACTIONS(516),
    [anon_sym_AMP_AMP] = ACTIONS(514),
    [anon_sym_PIPE_PIPE] = ACTIONS(514),
    [anon_sym_QMARK_QMARK] = ACTIONS(514),
    [anon_sym_EQ] = ACTIONS(516),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(514),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(514),
    [sym_number] = ACTIONS(516),
    [anon_sym_true] = ACTIONS(516),
    [anon_sym_LBRACK] = ACTIONS(514),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(516),
    [anon_sym_DOT] = ACTIONS(516),
    [anon_sym_GT] = ACTIONS(514),
  },
  [129] = {
    [sym_type] = STATE(234),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(234),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(191),
  },
  [130] = {
    [sym_type] = STATE(235),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(235),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(516),
    [anon_sym_QMARK] = ACTIONS(516),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(516),
    [anon_sym_is] = ACTIONS(516),
    [anon_sym_COMMA] = ACTIONS(514),
    [anon_sym_DOT_DOT] = ACTIONS(516),
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
    [anon_sym_LT] = ACTIONS(516),
    [anon_sym_LT_EQ] = ACTIONS(514),
    [anon_sym_lt] = ACTIONS(516),
    [anon_sym_lte] = ACTIONS(516),
    [anon_sym_gt] = ACTIONS(516),
    [anon_sym_gte] = ACTIONS(516),
    [anon_sym_BANG] = ACTIONS(516),
    [anon_sym_AMP_AMP] = ACTIONS(514),
    [anon_sym_PIPE_PIPE] = ACTIONS(514),
    [anon_sym_QMARK_QMARK] = ACTIONS(514),
    [anon_sym_EQ] = ACTIONS(516),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(514),
  },
  [131] = {
    [sym_type] = STATE(131),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(131),
    [anon_sym_LBRACE] = ACTIONS(518),
    [anon_sym_as] = ACTIONS(521),
    [anon_sym_QMARK] = ACTIONS(521),
    [anon_sym_LPAREN] = ACTIONS(523),
    [anon_sym_using] = ACTIONS(521),
    [anon_sym_is] = ACTIONS(521),
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_DOT_DOT] = ACTIONS(521),
    [anon_sym_DOT_DOT_LT] = ACTIONS(526),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(526),
    [anon_sym_COLON] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(526),
    [anon_sym_BANG_EQ] = ACTIONS(526),
    [anon_sym_LT] = ACTIONS(521),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [anon_sym_lt] = ACTIONS(521),
    [anon_sym_lte] = ACTIONS(521),
    [anon_sym_gt] = ACTIONS(521),
    [anon_sym_gte] = ACTIONS(521),
    [anon_sym_BANG] = ACTIONS(521),
    [anon_sym_AMP_AMP] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(526),
    [anon_sym_QMARK_QMARK] = ACTIONS(526),
    [anon_sym_EQ] = ACTIONS(521),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(528),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(528),
    [sym_number] = ACTIONS(531),
    [anon_sym_true] = ACTIONS(534),
    [anon_sym_LBRACK] = ACTIONS(537),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(540),
    [anon_sym_DOT] = ACTIONS(543),
    [anon_sym_GT] = ACTIONS(526),
  },
  [132] = {
    [sym_directive] = STATE(239),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_if_else] = STATE(240),
    [sym_elseif] = STATE(239),
    [sym_if_middle] = STATE(241),
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
    [aux_sym_if_repeat1] = STATE(241),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(546),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(548),
    [anon_sym_LT_POUNDelseif] = ACTIONS(550),
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
  [133] = {
    [sym_parameter_group] = STATE(133),
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
    [aux_sym_group_repeat1] = STATE(133),
    [anon_sym_LBRACE] = ACTIONS(552),
    [anon_sym_as] = ACTIONS(555),
    [anon_sym_QMARK] = ACTIONS(558),
    [anon_sym_LPAREN] = ACTIONS(561),
    [anon_sym_using] = ACTIONS(564),
    [anon_sym_is] = ACTIONS(564),
    [anon_sym_COMMA] = ACTIONS(567),
    [anon_sym_DOT_DOT] = ACTIONS(564),
    [anon_sym_DOT_DOT_LT] = ACTIONS(567),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(567),
    [anon_sym_COLON] = ACTIONS(567),
    [anon_sym_STAR] = ACTIONS(567),
    [anon_sym_PLUS] = ACTIONS(567),
    [anon_sym_SLASH] = ACTIONS(567),
    [anon_sym_DASH] = ACTIONS(567),
    [anon_sym_PERCENT] = ACTIONS(567),
    [anon_sym_EQ_EQ] = ACTIONS(567),
    [anon_sym_BANG_EQ] = ACTIONS(567),
    [anon_sym_LT] = ACTIONS(564),
    [anon_sym_LT_EQ] = ACTIONS(567),
    [anon_sym_lt] = ACTIONS(564),
    [anon_sym_lte] = ACTIONS(564),
    [anon_sym_gt] = ACTIONS(564),
    [anon_sym_gte] = ACTIONS(564),
    [anon_sym_BANG] = ACTIONS(564),
    [anon_sym_AMP_AMP] = ACTIONS(567),
    [anon_sym_PIPE_PIPE] = ACTIONS(567),
    [anon_sym_QMARK_QMARK] = ACTIONS(567),
    [anon_sym_EQ] = ACTIONS(564),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(570),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(570),
    [sym_number] = ACTIONS(573),
    [anon_sym_true] = ACTIONS(576),
    [anon_sym_LBRACK] = ACTIONS(579),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(582),
    [anon_sym_DOT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(588),
  },
  [134] = {
    [sym_expression] = STATE(243),
    [sym_type] = STATE(88),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(86),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_interpolation_repeat1] = STATE(243),
    [aux_sym_as_expression_repeat1] = STATE(88),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(590),
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
  [135] = {
    [sym_parameter_group] = STATE(244),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(115),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(114),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(115),
    [aux_sym_group_repeat1] = STATE(244),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(195),
    [anon_sym_QMARK] = ACTIONS(197),
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
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(79),
  },
  [136] = {
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(205),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(205),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(205),
    [sym_number] = ACTIONS(207),
    [anon_sym_true] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(205),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(207),
    [anon_sym_DOT] = ACTIONS(205),
    [anon_sym_GT] = ACTIONS(205),
  },
  [137] = {
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(209),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(209),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(209),
    [sym_number] = ACTIONS(211),
    [anon_sym_true] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(209),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
  },
  [138] = {
    [anon_sym_false] = ACTIONS(592),
  },
  [139] = {
    [sym_expression] = STATE(120),
    [sym_type] = STATE(122),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(121),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat1] = STATE(122),
    [aux_sym_sequence_repeat1] = STATE(247),
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
    [anon_sym_RBRACK] = ACTIONS(594),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(217),
    [anon_sym_DOT] = ACTIONS(159),
  },
  [140] = {
    [sym_group] = STATE(249),
    [aux_sym_top_level_repeat1] = STATE(250),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(219),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(219),
    [sym_number] = ACTIONS(221),
    [anon_sym_true] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(219),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(221),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(596),
    [anon_sym_DOT] = ACTIONS(221),
    [anon_sym_GT] = ACTIONS(219),
  },
  [141] = {
    [sym__spec_var_name] = STATE(251),
    [anon_sym_auto_esc] = ACTIONS(598),
    [anon_sym_caller_template_name] = ACTIONS(598),
    [anon_sym_current_template_name] = ACTIONS(598),
    [anon_sym_data_model] = ACTIONS(598),
    [anon_sym_error] = ACTIONS(598),
    [anon_sym_globals] = ACTIONS(598),
    [anon_sym_incompatible_improvements] = ACTIONS(598),
    [anon_sym_lang] = ACTIONS(598),
    [anon_sym_locale] = ACTIONS(600),
    [anon_sym_locale_object] = ACTIONS(598),
    [anon_sym_locals] = ACTIONS(598),
    [anon_sym_main] = ACTIONS(600),
    [anon_sym_main_template_name] = ACTIONS(598),
    [anon_sym_namespace] = ACTIONS(598),
    [anon_sym_node] = ACTIONS(598),
    [anon_sym_now] = ACTIONS(598),
    [anon_sym_output_encoding] = ACTIONS(598),
    [anon_sym_get_optional_template] = ACTIONS(598),
    [anon_sym_pass] = ACTIONS(598),
    [anon_sym_template_name] = ACTIONS(598),
    [anon_sym_url_escaping_charset] = ACTIONS(598),
    [anon_sym_output_format] = ACTIONS(598),
    [anon_sym_vars] = ACTIONS(598),
    [anon_sym_version] = ACTIONS(598),
  },
  [142] = {
    [sym_type] = STATE(252),
    [sym_group] = STATE(137),
    [sym_string] = STATE(137),
    [sym_boolean] = STATE(137),
    [sym_sequence] = STATE(137),
    [sym_hash] = STATE(137),
    [sym_top_level] = STATE(137),
    [sym_spec_var] = STATE(137),
    [aux_sym_as_expression_repeat2] = STATE(252),
    [anon_sym_LBRACE] = ACTIONS(241),
    [anon_sym_LPAREN] = ACTIONS(243),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(245),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(245),
    [sym_number] = ACTIONS(247),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_LBRACK] = ACTIONS(251),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(253),
    [anon_sym_DOT] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(467),
  },
  [143] = {
    [sym_group] = STATE(125),
    [aux_sym_top_level_repeat1] = STATE(253),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(219),
  },
  [144] = {
    [sym_group] = STATE(216),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(471),
  },
  [145] = {
    [sym_group] = STATE(232),
    [aux_sym_top_level_repeat1] = STATE(254),
    [anon_sym_LBRACE] = ACTIONS(506),
    [anon_sym_as] = ACTIONS(508),
    [anon_sym_LPAREN] = ACTIONS(506),
    [anon_sym_using] = ACTIONS(508),
    [anon_sym_is] = ACTIONS(508),
    [anon_sym_COMMA] = ACTIONS(506),
    [anon_sym_DOT_DOT] = ACTIONS(508),
    [anon_sym_DOT_DOT_LT] = ACTIONS(506),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(506),
    [anon_sym_COLON] = ACTIONS(506),
    [anon_sym_STAR] = ACTIONS(506),
    [anon_sym_PLUS] = ACTIONS(506),
    [anon_sym_SLASH] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [anon_sym_PERCENT] = ACTIONS(506),
    [anon_sym_EQ_EQ] = ACTIONS(506),
    [anon_sym_BANG_EQ] = ACTIONS(506),
    [anon_sym_LT] = ACTIONS(508),
    [anon_sym_LT_EQ] = ACTIONS(506),
    [anon_sym_lt] = ACTIONS(508),
    [anon_sym_lte] = ACTIONS(508),
    [anon_sym_gt] = ACTIONS(508),
    [anon_sym_gte] = ACTIONS(508),
    [anon_sym_BANG] = ACTIONS(508),
    [anon_sym_AMP_AMP] = ACTIONS(506),
    [anon_sym_PIPE_PIPE] = ACTIONS(506),
    [anon_sym_QMARK_QMARK] = ACTIONS(506),
    [anon_sym_EQ] = ACTIONS(508),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(506),
    [sym_number] = ACTIONS(508),
    [anon_sym_true] = ACTIONS(508),
    [anon_sym_LBRACK] = ACTIONS(506),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(508),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(508),
    [anon_sym_GT] = ACTIONS(506),
  },
  [146] = {
    [sym_case] = STATE(258),
    [sym_default] = STATE(259),
    [sym_switch_middle] = STATE(260),
    [aux_sym_switch_repeat1] = STATE(260),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(602),
    [anon_sym_LT_POUNDcase] = ACTIONS(604),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(606),
  },
  [147] = {
    [sym_type] = STATE(252),
    [sym_group] = STATE(137),
    [sym_string] = STATE(137),
    [sym_boolean] = STATE(137),
    [sym_sequence] = STATE(137),
    [sym_hash] = STATE(137),
    [sym_top_level] = STATE(137),
    [sym_spec_var] = STATE(137),
    [aux_sym_as_expression_repeat2] = STATE(252),
    [anon_sym_LBRACE] = ACTIONS(241),
    [anon_sym_LPAREN] = ACTIONS(243),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(245),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(245),
    [sym_number] = ACTIONS(247),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_LBRACK] = ACTIONS(251),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(253),
    [anon_sym_DOT] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(514),
  },
  [148] = {
    [sym_type] = STATE(261),
    [sym_group] = STATE(137),
    [sym_string] = STATE(137),
    [sym_boolean] = STATE(137),
    [sym_sequence] = STATE(137),
    [sym_hash] = STATE(137),
    [sym_top_level] = STATE(137),
    [sym_spec_var] = STATE(137),
    [aux_sym_as_expression_repeat2] = STATE(261),
    [anon_sym_LBRACE] = ACTIONS(241),
    [anon_sym_LPAREN] = ACTIONS(243),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(245),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(245),
    [sym_number] = ACTIONS(247),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_LBRACK] = ACTIONS(251),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(253),
    [anon_sym_DOT] = ACTIONS(255),
  },
  [149] = {
    [sym_type] = STATE(262),
    [sym_group] = STATE(137),
    [sym_string] = STATE(137),
    [sym_boolean] = STATE(137),
    [sym_sequence] = STATE(137),
    [sym_hash] = STATE(137),
    [sym_top_level] = STATE(137),
    [sym_spec_var] = STATE(137),
    [aux_sym_as_expression_repeat2] = STATE(262),
    [anon_sym_LBRACE] = ACTIONS(241),
    [anon_sym_LPAREN] = ACTIONS(243),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(245),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(245),
    [sym_number] = ACTIONS(247),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_LBRACK] = ACTIONS(251),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(253),
    [anon_sym_DOT] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(514),
  },
  [150] = {
    [sym_type] = STATE(150),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(150),
    [anon_sym_LBRACE] = ACTIONS(518),
    [anon_sym_as] = ACTIONS(521),
    [anon_sym_LPAREN] = ACTIONS(523),
    [anon_sym_using] = ACTIONS(521),
    [anon_sym_is] = ACTIONS(521),
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_DOT_DOT] = ACTIONS(521),
    [anon_sym_DOT_DOT_LT] = ACTIONS(526),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(526),
    [anon_sym_COLON] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(526),
    [anon_sym_BANG_EQ] = ACTIONS(526),
    [anon_sym_LT] = ACTIONS(521),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [anon_sym_lt] = ACTIONS(521),
    [anon_sym_lte] = ACTIONS(521),
    [anon_sym_gt] = ACTIONS(521),
    [anon_sym_gte] = ACTIONS(521),
    [anon_sym_BANG] = ACTIONS(521),
    [anon_sym_AMP_AMP] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(526),
    [anon_sym_QMARK_QMARK] = ACTIONS(526),
    [anon_sym_EQ] = ACTIONS(521),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(528),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(528),
    [sym_number] = ACTIONS(531),
    [anon_sym_true] = ACTIONS(534),
    [anon_sym_LBRACK] = ACTIONS(537),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(608),
    [anon_sym_DOT] = ACTIONS(543),
    [anon_sym_GT] = ACTIONS(526),
  },
  [151] = {
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
  [152] = {
    [sym_parameter_group] = STATE(264),
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
    [anon_sym_GT] = ACTIONS(615),
  },
  [153] = {
    [anon_sym_LT_AT] = ACTIONS(617),
    [anon_sym_LT_POUND] = ACTIONS(619),
    [anon_sym_LT_POUNDif] = ACTIONS(617),
    [anon_sym_LT_POUNDswitch] = ACTIONS(617),
    [anon_sym_LT_POUNDfunction] = ACTIONS(617),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(617),
    [anon_sym_LT_POUNDreturn] = ACTIONS(617),
    [anon_sym_LT_POUNDmacro] = ACTIONS(617),
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
  [154] = {
    [sym_directive] = STATE(153),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_function_middle] = STATE(266),
    [sym_return] = STATE(153),
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
    [aux_sym_function_repeat1] = STATE(266),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(621),
    [anon_sym_LT_POUNDreturn] = ACTIONS(265),
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
    [sym_directive] = STATE(153),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_function_middle] = STATE(267),
    [sym_return] = STATE(153),
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
    [aux_sym_function_repeat1] = STATE(267),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(621),
    [anon_sym_LT_POUNDreturn] = ACTIONS(265),
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
  [156] = {
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
  [157] = {
    [sym_parameter_group] = STATE(269),
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
    [aux_sym_group_repeat1] = STATE(269),
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
    [anon_sym_GT] = ACTIONS(627),
  },
  [158] = {
    [anon_sym_LT_AT] = ACTIONS(629),
    [anon_sym_LT_POUND] = ACTIONS(631),
    [anon_sym_LT_POUNDif] = ACTIONS(629),
    [anon_sym_LT_POUNDswitch] = ACTIONS(629),
    [anon_sym_LT_POUNDfunction] = ACTIONS(629),
    [anon_sym_LT_POUNDreturn] = ACTIONS(629),
    [anon_sym_LT_POUNDmacro] = ACTIONS(629),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(629),
    [anon_sym_LT_POUNDnested] = ACTIONS(629),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(629),
    [sym_fallback] = ACTIONS(629),
    [sym_flush] = ACTIONS(629),
    [anon_sym_LT_POUNDftl] = ACTIONS(629),
    [anon_sym_LT_POUNDimport] = ACTIONS(629),
    [anon_sym_LT_POUNDinclude] = ACTIONS(629),
    [sym_lt] = ACTIONS(629),
    [sym_nt] = ACTIONS(629),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(629),
    [sym_rt] = ACTIONS(629),
    [anon_sym_LT_POUNDsetting] = ACTIONS(629),
    [sym_stop] = ACTIONS(629),
    [sym_t] = ACTIONS(629),
    [anon_sym_LT_POUNDvisit] = ACTIONS(629),
    [anon_sym_LT_POUNDassign] = ACTIONS(629),
    [sym_end_assign] = ACTIONS(629),
    [anon_sym_LT_POUNDglobal] = ACTIONS(629),
    [sym_end_global] = ACTIONS(629),
    [anon_sym_LT_POUNDlocal] = ACTIONS(629),
    [sym_end_local] = ACTIONS(629),
  },
  [159] = {
    [sym_directive] = STATE(158),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_return] = STATE(158),
    [sym_macro] = STATE(10),
    [sym_macro_middle] = STATE(271),
    [sym_nested] = STATE(158),
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
    [aux_sym_macro_repeat1] = STATE(271),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDreturn] = ACTIONS(265),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(633),
    [anon_sym_LT_POUNDnested] = ACTIONS(271),
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
    [sym_directive] = STATE(158),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_return] = STATE(158),
    [sym_macro] = STATE(10),
    [sym_macro_middle] = STATE(272),
    [sym_nested] = STATE(158),
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
    [aux_sym_macro_repeat1] = STATE(272),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDreturn] = ACTIONS(265),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(633),
    [anon_sym_LT_POUNDnested] = ACTIONS(271),
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
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(635),
    [sym_comment] = ACTIONS(635),
    [anon_sym_DOLLAR] = ACTIONS(635),
    [anon_sym_LT_AT] = ACTIONS(635),
    [anon_sym_LT_POUND] = ACTIONS(637),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(635),
    [sym_break] = ACTIONS(635),
    [sym_continue] = ACTIONS(635),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(635),
    [anon_sym_LT_POUNDitems] = ACTIONS(635),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(635),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(635),
    [anon_sym_LT_POUNDif] = ACTIONS(635),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(635),
    [anon_sym_LT_POUNDelseif] = ACTIONS(635),
    [anon_sym_LT_POUNDswitch] = ACTIONS(635),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(635),
    [anon_sym_LT_POUNDcase] = ACTIONS(635),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(635),
    [anon_sym_LT_POUNDfunction] = ACTIONS(635),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(635),
    [anon_sym_LT_POUNDreturn] = ACTIONS(635),
    [anon_sym_LT_POUNDmacro] = ACTIONS(635),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(635),
    [anon_sym_LT_POUNDnested] = ACTIONS(635),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(635),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(635),
    [sym_recover] = ACTIONS(635),
    [sym_fallback] = ACTIONS(635),
    [sym_flush] = ACTIONS(635),
    [anon_sym_LT_POUNDftl] = ACTIONS(635),
    [anon_sym_LT_POUNDimport] = ACTIONS(635),
    [anon_sym_LT_POUNDinclude] = ACTIONS(635),
    [sym_lt] = ACTIONS(635),
    [sym_nt] = ACTIONS(635),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(635),
    [sym_rt] = ACTIONS(635),
    [anon_sym_LT_POUNDsetting] = ACTIONS(635),
    [sym_stop] = ACTIONS(635),
    [sym_t] = ACTIONS(635),
    [anon_sym_LT_POUNDvisit] = ACTIONS(635),
    [anon_sym_LT_POUNDassign] = ACTIONS(635),
    [sym_end_assign] = ACTIONS(635),
    [anon_sym_LT_POUNDglobal] = ACTIONS(635),
    [sym_end_global] = ACTIONS(635),
    [anon_sym_LT_POUNDlocal] = ACTIONS(635),
    [sym_end_local] = ACTIONS(635),
  },
  [162] = {
    [sym_directive] = STATE(55),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_macro] = STATE(10),
    [sym_attempt] = STATE(10),
    [sym_attempt_middle] = STATE(162),
    [sym_ftl] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_recurse] = STATE(10),
    [sym_setting] = STATE(10),
    [sym_visit] = STATE(10),
    [sym_assign] = STATE(10),
    [sym_global] = STATE(10),
    [sym_local] = STATE(10),
    [aux_sym_attempt_repeat1] = STATE(162),
    [anon_sym_LT_AT] = ACTIONS(639),
    [anon_sym_LT_POUND] = ACTIONS(642),
    [anon_sym_LT_POUNDif] = ACTIONS(645),
    [anon_sym_LT_POUNDswitch] = ACTIONS(648),
    [anon_sym_LT_POUNDfunction] = ACTIONS(651),
    [anon_sym_LT_POUNDmacro] = ACTIONS(654),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(657),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(660),
    [sym_recover] = ACTIONS(662),
    [sym_fallback] = ACTIONS(665),
    [sym_flush] = ACTIONS(665),
    [anon_sym_LT_POUNDftl] = ACTIONS(668),
    [anon_sym_LT_POUNDimport] = ACTIONS(671),
    [anon_sym_LT_POUNDinclude] = ACTIONS(674),
    [sym_lt] = ACTIONS(665),
    [sym_nt] = ACTIONS(665),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(677),
    [sym_rt] = ACTIONS(665),
    [anon_sym_LT_POUNDsetting] = ACTIONS(680),
    [sym_stop] = ACTIONS(665),
    [sym_t] = ACTIONS(665),
    [anon_sym_LT_POUNDvisit] = ACTIONS(683),
    [anon_sym_LT_POUNDassign] = ACTIONS(686),
    [sym_end_assign] = ACTIONS(689),
    [anon_sym_LT_POUNDglobal] = ACTIONS(692),
    [sym_end_global] = ACTIONS(695),
    [anon_sym_LT_POUNDlocal] = ACTIONS(698),
    [sym_end_local] = ACTIONS(701),
  },
  [163] = {
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
  [164] = {
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
  [165] = {
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
  [166] = {
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
  [167] = {
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
  [168] = {
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
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(728),
    [sym_comment] = ACTIONS(728),
    [anon_sym_DOLLAR] = ACTIONS(728),
    [anon_sym_LT_AT] = ACTIONS(728),
    [anon_sym_LT_POUND] = ACTIONS(730),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(728),
    [sym_break] = ACTIONS(728),
    [sym_continue] = ACTIONS(728),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(728),
    [anon_sym_LT_POUNDitems] = ACTIONS(728),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(728),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(728),
    [anon_sym_LT_POUNDif] = ACTIONS(728),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(728),
    [anon_sym_LT_POUNDelseif] = ACTIONS(728),
    [anon_sym_LT_POUNDswitch] = ACTIONS(728),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(728),
    [anon_sym_LT_POUNDcase] = ACTIONS(728),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(728),
    [anon_sym_LT_POUNDfunction] = ACTIONS(728),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(728),
    [anon_sym_LT_POUNDreturn] = ACTIONS(728),
    [anon_sym_LT_POUNDmacro] = ACTIONS(728),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(728),
    [anon_sym_LT_POUNDnested] = ACTIONS(728),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(728),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(728),
    [sym_recover] = ACTIONS(728),
    [sym_fallback] = ACTIONS(728),
    [sym_flush] = ACTIONS(728),
    [anon_sym_LT_POUNDftl] = ACTIONS(728),
    [anon_sym_LT_POUNDimport] = ACTIONS(728),
    [anon_sym_LT_POUNDinclude] = ACTIONS(728),
    [sym_lt] = ACTIONS(728),
    [sym_nt] = ACTIONS(728),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(728),
    [sym_rt] = ACTIONS(728),
    [anon_sym_LT_POUNDsetting] = ACTIONS(728),
    [sym_stop] = ACTIONS(728),
    [sym_t] = ACTIONS(728),
    [anon_sym_LT_POUNDvisit] = ACTIONS(728),
    [anon_sym_LT_POUNDassign] = ACTIONS(728),
    [sym_end_assign] = ACTIONS(728),
    [anon_sym_LT_POUNDglobal] = ACTIONS(728),
    [sym_end_global] = ACTIONS(728),
    [anon_sym_LT_POUNDlocal] = ACTIONS(728),
    [sym_end_local] = ACTIONS(728),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(732),
    [sym_comment] = ACTIONS(732),
    [anon_sym_DOLLAR] = ACTIONS(732),
    [anon_sym_LT_AT] = ACTIONS(732),
    [anon_sym_LT_POUND] = ACTIONS(734),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(732),
    [sym_break] = ACTIONS(732),
    [sym_continue] = ACTIONS(732),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(732),
    [anon_sym_LT_POUNDitems] = ACTIONS(732),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(732),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(732),
    [anon_sym_LT_POUNDif] = ACTIONS(732),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(732),
    [anon_sym_LT_POUNDelseif] = ACTIONS(732),
    [anon_sym_LT_POUNDswitch] = ACTIONS(732),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(732),
    [anon_sym_LT_POUNDcase] = ACTIONS(732),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(732),
    [anon_sym_LT_POUNDfunction] = ACTIONS(732),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(732),
    [anon_sym_LT_POUNDreturn] = ACTIONS(732),
    [anon_sym_LT_POUNDmacro] = ACTIONS(732),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(732),
    [anon_sym_LT_POUNDnested] = ACTIONS(732),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(732),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(732),
    [sym_recover] = ACTIONS(732),
    [sym_fallback] = ACTIONS(732),
    [sym_flush] = ACTIONS(732),
    [anon_sym_LT_POUNDftl] = ACTIONS(732),
    [anon_sym_LT_POUNDimport] = ACTIONS(732),
    [anon_sym_LT_POUNDinclude] = ACTIONS(732),
    [sym_lt] = ACTIONS(732),
    [sym_nt] = ACTIONS(732),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(732),
    [sym_rt] = ACTIONS(732),
    [anon_sym_LT_POUNDsetting] = ACTIONS(732),
    [sym_stop] = ACTIONS(732),
    [sym_t] = ACTIONS(732),
    [anon_sym_LT_POUNDvisit] = ACTIONS(732),
    [anon_sym_LT_POUNDassign] = ACTIONS(732),
    [sym_end_assign] = ACTIONS(732),
    [anon_sym_LT_POUNDglobal] = ACTIONS(732),
    [sym_end_global] = ACTIONS(732),
    [anon_sym_LT_POUNDlocal] = ACTIONS(732),
    [sym_end_local] = ACTIONS(732),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(736),
    [sym_comment] = ACTIONS(736),
    [anon_sym_DOLLAR] = ACTIONS(736),
    [anon_sym_LT_AT] = ACTIONS(736),
    [anon_sym_LT_POUND] = ACTIONS(738),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(736),
    [sym_break] = ACTIONS(736),
    [sym_continue] = ACTIONS(736),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(736),
    [anon_sym_LT_POUNDitems] = ACTIONS(736),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(736),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(736),
    [anon_sym_LT_POUNDif] = ACTIONS(736),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(736),
    [anon_sym_LT_POUNDelseif] = ACTIONS(736),
    [anon_sym_LT_POUNDswitch] = ACTIONS(736),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(736),
    [anon_sym_LT_POUNDcase] = ACTIONS(736),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(736),
    [anon_sym_LT_POUNDfunction] = ACTIONS(736),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(736),
    [anon_sym_LT_POUNDreturn] = ACTIONS(736),
    [anon_sym_LT_POUNDmacro] = ACTIONS(736),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(736),
    [anon_sym_LT_POUNDnested] = ACTIONS(736),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(736),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(736),
    [sym_recover] = ACTIONS(736),
    [sym_fallback] = ACTIONS(736),
    [sym_flush] = ACTIONS(736),
    [anon_sym_LT_POUNDftl] = ACTIONS(736),
    [anon_sym_LT_POUNDimport] = ACTIONS(736),
    [anon_sym_LT_POUNDinclude] = ACTIONS(736),
    [sym_lt] = ACTIONS(736),
    [sym_nt] = ACTIONS(736),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(736),
    [sym_rt] = ACTIONS(736),
    [anon_sym_LT_POUNDsetting] = ACTIONS(736),
    [sym_stop] = ACTIONS(736),
    [sym_t] = ACTIONS(736),
    [anon_sym_LT_POUNDvisit] = ACTIONS(736),
    [anon_sym_LT_POUNDassign] = ACTIONS(736),
    [sym_end_assign] = ACTIONS(736),
    [anon_sym_LT_POUNDglobal] = ACTIONS(736),
    [sym_end_global] = ACTIONS(736),
    [anon_sym_LT_POUNDlocal] = ACTIONS(736),
    [sym_end_local] = ACTIONS(736),
  },
  [172] = {
    [anon_sym_LBRACE] = ACTIONS(461),
    [anon_sym_RBRACE] = ACTIONS(461),
    [anon_sym_LPAREN] = ACTIONS(461),
    [anon_sym_using] = ACTIONS(463),
    [anon_sym_is] = ACTIONS(463),
    [anon_sym_COMMA] = ACTIONS(461),
    [anon_sym_DOT_DOT] = ACTIONS(463),
    [anon_sym_DOT_DOT_LT] = ACTIONS(461),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(461),
    [anon_sym_COLON] = ACTIONS(461),
    [anon_sym_STAR] = ACTIONS(461),
    [anon_sym_PLUS] = ACTIONS(461),
    [anon_sym_SLASH] = ACTIONS(461),
    [anon_sym_DASH] = ACTIONS(461),
    [anon_sym_PERCENT] = ACTIONS(461),
    [anon_sym_EQ_EQ] = ACTIONS(461),
    [anon_sym_BANG_EQ] = ACTIONS(461),
    [anon_sym_LT] = ACTIONS(463),
    [anon_sym_LT_EQ] = ACTIONS(461),
    [anon_sym_lt] = ACTIONS(463),
    [anon_sym_lte] = ACTIONS(463),
    [anon_sym_gt] = ACTIONS(463),
    [anon_sym_gte] = ACTIONS(463),
    [anon_sym_BANG] = ACTIONS(463),
    [anon_sym_AMP_AMP] = ACTIONS(461),
    [anon_sym_PIPE_PIPE] = ACTIONS(461),
    [anon_sym_QMARK_QMARK] = ACTIONS(461),
    [anon_sym_EQ] = ACTIONS(463),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(461),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(461),
    [sym_number] = ACTIONS(463),
    [anon_sym_true] = ACTIONS(463),
    [anon_sym_LBRACK] = ACTIONS(461),
    [anon_sym_RBRACK] = ACTIONS(461),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(463),
    [anon_sym_DOT] = ACTIONS(463),
  },
  [173] = {
    [sym_expression] = STATE(184),
    [sym_type] = STATE(88),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(86),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_interpolation_repeat1] = STATE(184),
    [aux_sym_as_expression_repeat1] = STATE(88),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(740),
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
  [174] = {
    [sym_parameter_group] = STATE(224),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(115),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(114),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(115),
    [aux_sym_group_repeat1] = STATE(224),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(195),
    [anon_sym_QMARK] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(742),
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
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(79),
  },
  [175] = {
    [anon_sym_LBRACE] = ACTIONS(481),
    [anon_sym_RBRACE] = ACTIONS(481),
    [anon_sym_LPAREN] = ACTIONS(481),
    [anon_sym_using] = ACTIONS(483),
    [anon_sym_is] = ACTIONS(483),
    [anon_sym_COMMA] = ACTIONS(481),
    [anon_sym_DOT_DOT] = ACTIONS(483),
    [anon_sym_DOT_DOT_LT] = ACTIONS(481),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(481),
    [anon_sym_COLON] = ACTIONS(481),
    [anon_sym_STAR] = ACTIONS(481),
    [anon_sym_PLUS] = ACTIONS(481),
    [anon_sym_SLASH] = ACTIONS(481),
    [anon_sym_DASH] = ACTIONS(481),
    [anon_sym_PERCENT] = ACTIONS(481),
    [anon_sym_EQ_EQ] = ACTIONS(481),
    [anon_sym_BANG_EQ] = ACTIONS(481),
    [anon_sym_LT] = ACTIONS(483),
    [anon_sym_LT_EQ] = ACTIONS(481),
    [anon_sym_lt] = ACTIONS(483),
    [anon_sym_lte] = ACTIONS(483),
    [anon_sym_gt] = ACTIONS(483),
    [anon_sym_gte] = ACTIONS(483),
    [anon_sym_BANG] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(481),
    [anon_sym_PIPE_PIPE] = ACTIONS(481),
    [anon_sym_QMARK_QMARK] = ACTIONS(481),
    [anon_sym_EQ] = ACTIONS(483),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(481),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(481),
    [sym_number] = ACTIONS(483),
    [anon_sym_true] = ACTIONS(483),
    [anon_sym_LBRACK] = ACTIONS(481),
    [anon_sym_RBRACK] = ACTIONS(481),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(483),
    [anon_sym_DOT] = ACTIONS(483),
  },
  [176] = {
    [anon_sym_LBRACE] = ACTIONS(485),
    [anon_sym_RBRACE] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(485),
    [anon_sym_using] = ACTIONS(487),
    [anon_sym_is] = ACTIONS(487),
    [anon_sym_COMMA] = ACTIONS(485),
    [anon_sym_DOT_DOT] = ACTIONS(487),
    [anon_sym_DOT_DOT_LT] = ACTIONS(485),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(485),
    [anon_sym_COLON] = ACTIONS(485),
    [anon_sym_STAR] = ACTIONS(485),
    [anon_sym_PLUS] = ACTIONS(485),
    [anon_sym_SLASH] = ACTIONS(485),
    [anon_sym_DASH] = ACTIONS(485),
    [anon_sym_PERCENT] = ACTIONS(485),
    [anon_sym_EQ_EQ] = ACTIONS(485),
    [anon_sym_BANG_EQ] = ACTIONS(485),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_LT_EQ] = ACTIONS(485),
    [anon_sym_lt] = ACTIONS(487),
    [anon_sym_lte] = ACTIONS(487),
    [anon_sym_gt] = ACTIONS(487),
    [anon_sym_gte] = ACTIONS(487),
    [anon_sym_BANG] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(485),
    [anon_sym_PIPE_PIPE] = ACTIONS(485),
    [anon_sym_QMARK_QMARK] = ACTIONS(485),
    [anon_sym_EQ] = ACTIONS(487),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(485),
    [sym_number] = ACTIONS(487),
    [anon_sym_true] = ACTIONS(487),
    [anon_sym_LBRACK] = ACTIONS(485),
    [anon_sym_RBRACK] = ACTIONS(485),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(487),
    [anon_sym_DOT] = ACTIONS(487),
  },
  [177] = {
    [sym_expression] = STATE(120),
    [sym_type] = STATE(122),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(121),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat1] = STATE(122),
    [aux_sym_sequence_repeat1] = STATE(231),
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
    [anon_sym_RBRACK] = ACTIONS(744),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(217),
    [anon_sym_DOT] = ACTIONS(159),
  },
  [178] = {
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
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(498),
    [anon_sym_DOT] = ACTIONS(500),
  },
  [179] = {
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
    [anon_sym_RBRACK] = ACTIONS(502),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(504),
    [anon_sym_DOT] = ACTIONS(504),
  },
  [180] = {
    [sym_group] = STATE(276),
    [aux_sym_top_level_repeat1] = STATE(277),
    [anon_sym_LBRACE] = ACTIONS(506),
    [anon_sym_RBRACE] = ACTIONS(506),
    [anon_sym_LPAREN] = ACTIONS(506),
    [anon_sym_using] = ACTIONS(508),
    [anon_sym_is] = ACTIONS(508),
    [anon_sym_COMMA] = ACTIONS(506),
    [anon_sym_DOT_DOT] = ACTIONS(508),
    [anon_sym_DOT_DOT_LT] = ACTIONS(506),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(506),
    [anon_sym_COLON] = ACTIONS(506),
    [anon_sym_STAR] = ACTIONS(506),
    [anon_sym_PLUS] = ACTIONS(506),
    [anon_sym_SLASH] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [anon_sym_PERCENT] = ACTIONS(506),
    [anon_sym_EQ_EQ] = ACTIONS(506),
    [anon_sym_BANG_EQ] = ACTIONS(506),
    [anon_sym_LT] = ACTIONS(508),
    [anon_sym_LT_EQ] = ACTIONS(506),
    [anon_sym_lt] = ACTIONS(508),
    [anon_sym_lte] = ACTIONS(508),
    [anon_sym_gt] = ACTIONS(508),
    [anon_sym_gte] = ACTIONS(508),
    [anon_sym_BANG] = ACTIONS(508),
    [anon_sym_AMP_AMP] = ACTIONS(506),
    [anon_sym_PIPE_PIPE] = ACTIONS(506),
    [anon_sym_QMARK_QMARK] = ACTIONS(506),
    [anon_sym_EQ] = ACTIONS(508),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(506),
    [sym_number] = ACTIONS(508),
    [anon_sym_true] = ACTIONS(508),
    [anon_sym_LBRACK] = ACTIONS(506),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(508),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(417),
    [anon_sym_DOT] = ACTIONS(508),
  },
  [181] = {
    [anon_sym_LBRACE] = ACTIONS(510),
    [anon_sym_RBRACE] = ACTIONS(510),
    [anon_sym_LPAREN] = ACTIONS(510),
    [anon_sym_using] = ACTIONS(512),
    [anon_sym_is] = ACTIONS(512),
    [anon_sym_COMMA] = ACTIONS(510),
    [anon_sym_DOT_DOT] = ACTIONS(512),
    [anon_sym_DOT_DOT_LT] = ACTIONS(510),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(510),
    [anon_sym_COLON] = ACTIONS(510),
    [anon_sym_STAR] = ACTIONS(510),
    [anon_sym_PLUS] = ACTIONS(510),
    [anon_sym_SLASH] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(510),
    [anon_sym_PERCENT] = ACTIONS(510),
    [anon_sym_EQ_EQ] = ACTIONS(510),
    [anon_sym_BANG_EQ] = ACTIONS(510),
    [anon_sym_LT] = ACTIONS(512),
    [anon_sym_LT_EQ] = ACTIONS(510),
    [anon_sym_lt] = ACTIONS(512),
    [anon_sym_lte] = ACTIONS(512),
    [anon_sym_gt] = ACTIONS(512),
    [anon_sym_gte] = ACTIONS(512),
    [anon_sym_BANG] = ACTIONS(512),
    [anon_sym_AMP_AMP] = ACTIONS(510),
    [anon_sym_PIPE_PIPE] = ACTIONS(510),
    [anon_sym_QMARK_QMARK] = ACTIONS(510),
    [anon_sym_EQ] = ACTIONS(512),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(510),
    [sym_number] = ACTIONS(512),
    [anon_sym_true] = ACTIONS(512),
    [anon_sym_LBRACK] = ACTIONS(510),
    [anon_sym_RBRACK] = ACTIONS(510),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(512),
    [anon_sym_DOT] = ACTIONS(512),
  },
  [182] = {
    [sym_type] = STATE(278),
    [sym_group] = STATE(81),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat2] = STATE(278),
    [anon_sym_LBRACE] = ACTIONS(514),
    [anon_sym_RBRACE] = ACTIONS(514),
    [anon_sym_LPAREN] = ACTIONS(514),
    [anon_sym_using] = ACTIONS(516),
    [anon_sym_is] = ACTIONS(516),
    [anon_sym_COMMA] = ACTIONS(514),
    [anon_sym_DOT_DOT] = ACTIONS(516),
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
    [anon_sym_LT] = ACTIONS(516),
    [anon_sym_LT_EQ] = ACTIONS(514),
    [anon_sym_lt] = ACTIONS(516),
    [anon_sym_lte] = ACTIONS(516),
    [anon_sym_gt] = ACTIONS(516),
    [anon_sym_gte] = ACTIONS(516),
    [anon_sym_BANG] = ACTIONS(516),
    [anon_sym_AMP_AMP] = ACTIONS(514),
    [anon_sym_PIPE_PIPE] = ACTIONS(514),
    [anon_sym_QMARK_QMARK] = ACTIONS(514),
    [anon_sym_EQ] = ACTIONS(516),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(514),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(514),
    [sym_number] = ACTIONS(516),
    [anon_sym_true] = ACTIONS(516),
    [anon_sym_LBRACK] = ACTIONS(514),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(516),
    [anon_sym_DOT] = ACTIONS(516),
  },
  [183] = {
    [ts_builtin_sym_end] = ACTIONS(746),
    [sym_comment] = ACTIONS(746),
    [anon_sym_DOLLAR] = ACTIONS(746),
    [anon_sym_LT_AT] = ACTIONS(746),
    [anon_sym_LT_POUND] = ACTIONS(748),
    [anon_sym_LT_POUNDif] = ACTIONS(746),
    [anon_sym_LT_POUNDswitch] = ACTIONS(746),
    [anon_sym_LT_POUNDfunction] = ACTIONS(746),
    [anon_sym_LT_POUNDmacro] = ACTIONS(746),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(746),
    [sym_fallback] = ACTIONS(746),
    [sym_flush] = ACTIONS(746),
    [anon_sym_LT_POUNDftl] = ACTIONS(746),
    [anon_sym_LT_POUNDimport] = ACTIONS(746),
    [anon_sym_LT_POUNDinclude] = ACTIONS(746),
    [sym_lt] = ACTIONS(746),
    [sym_nt] = ACTIONS(746),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(746),
    [sym_rt] = ACTIONS(746),
    [anon_sym_LT_POUNDsetting] = ACTIONS(746),
    [sym_stop] = ACTIONS(746),
    [sym_t] = ACTIONS(746),
    [anon_sym_LT_POUNDvisit] = ACTIONS(746),
    [anon_sym_LT_POUNDassign] = ACTIONS(746),
    [sym_end_assign] = ACTIONS(746),
    [anon_sym_LT_POUNDglobal] = ACTIONS(746),
    [sym_end_global] = ACTIONS(746),
    [anon_sym_LT_POUNDlocal] = ACTIONS(746),
    [sym_end_local] = ACTIONS(746),
  },
  [184] = {
    [sym_expression] = STATE(184),
    [sym_type] = STATE(88),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(86),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_interpolation_repeat1] = STATE(184),
    [aux_sym_as_expression_repeat1] = STATE(88),
    [anon_sym_LBRACE] = ACTIONS(750),
    [anon_sym_RBRACE] = ACTIONS(753),
    [anon_sym_LPAREN] = ACTIONS(755),
    [anon_sym_using] = ACTIONS(758),
    [anon_sym_is] = ACTIONS(758),
    [anon_sym_COMMA] = ACTIONS(761),
    [anon_sym_DOT_DOT] = ACTIONS(758),
    [anon_sym_DOT_DOT_LT] = ACTIONS(761),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(761),
    [anon_sym_COLON] = ACTIONS(761),
    [anon_sym_STAR] = ACTIONS(761),
    [anon_sym_PLUS] = ACTIONS(761),
    [anon_sym_SLASH] = ACTIONS(761),
    [anon_sym_DASH] = ACTIONS(761),
    [anon_sym_PERCENT] = ACTIONS(761),
    [anon_sym_EQ_EQ] = ACTIONS(761),
    [anon_sym_BANG_EQ] = ACTIONS(761),
    [anon_sym_LT] = ACTIONS(758),
    [anon_sym_LT_EQ] = ACTIONS(761),
    [anon_sym_lt] = ACTIONS(758),
    [anon_sym_lte] = ACTIONS(758),
    [anon_sym_gt] = ACTIONS(758),
    [anon_sym_gte] = ACTIONS(758),
    [anon_sym_BANG] = ACTIONS(758),
    [anon_sym_AMP_AMP] = ACTIONS(761),
    [anon_sym_PIPE_PIPE] = ACTIONS(761),
    [anon_sym_QMARK_QMARK] = ACTIONS(761),
    [anon_sym_EQ] = ACTIONS(758),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(764),
    [sym_number] = ACTIONS(767),
    [anon_sym_true] = ACTIONS(770),
    [anon_sym_LBRACK] = ACTIONS(773),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(776),
    [anon_sym_DOT] = ACTIONS(779),
  },
  [185] = {
    [sym_type] = STATE(279),
    [sym_group] = STATE(81),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat2] = STATE(279),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(514),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_using] = ACTIONS(516),
    [anon_sym_is] = ACTIONS(516),
    [anon_sym_COMMA] = ACTIONS(514),
    [anon_sym_DOT_DOT] = ACTIONS(516),
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
    [anon_sym_LT] = ACTIONS(516),
    [anon_sym_LT_EQ] = ACTIONS(514),
    [anon_sym_lt] = ACTIONS(516),
    [anon_sym_lte] = ACTIONS(516),
    [anon_sym_gt] = ACTIONS(516),
    [anon_sym_gte] = ACTIONS(516),
    [anon_sym_BANG] = ACTIONS(516),
    [anon_sym_AMP_AMP] = ACTIONS(514),
    [anon_sym_PIPE_PIPE] = ACTIONS(514),
    [anon_sym_QMARK_QMARK] = ACTIONS(514),
    [anon_sym_EQ] = ACTIONS(516),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(149),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(157),
    [anon_sym_DOT] = ACTIONS(159),
  },
  [186] = {
    [sym_type] = STATE(186),
    [sym_group] = STATE(81),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat1] = STATE(186),
    [anon_sym_LBRACE] = ACTIONS(782),
    [anon_sym_RBRACE] = ACTIONS(526),
    [anon_sym_LPAREN] = ACTIONS(785),
    [anon_sym_using] = ACTIONS(521),
    [anon_sym_is] = ACTIONS(521),
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_DOT_DOT] = ACTIONS(521),
    [anon_sym_DOT_DOT_LT] = ACTIONS(526),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(526),
    [anon_sym_COLON] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(526),
    [anon_sym_BANG_EQ] = ACTIONS(526),
    [anon_sym_LT] = ACTIONS(521),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [anon_sym_lt] = ACTIONS(521),
    [anon_sym_lte] = ACTIONS(521),
    [anon_sym_gt] = ACTIONS(521),
    [anon_sym_gte] = ACTIONS(521),
    [anon_sym_BANG] = ACTIONS(521),
    [anon_sym_AMP_AMP] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(526),
    [anon_sym_QMARK_QMARK] = ACTIONS(526),
    [anon_sym_EQ] = ACTIONS(521),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(788),
    [sym_number] = ACTIONS(791),
    [anon_sym_true] = ACTIONS(794),
    [anon_sym_LBRACK] = ACTIONS(797),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(800),
    [anon_sym_DOT] = ACTIONS(803),
  },
  [187] = {
    [anon_sym_LBRACE] = ACTIONS(461),
    [anon_sym_as] = ACTIONS(463),
    [anon_sym_QMARK] = ACTIONS(463),
    [anon_sym_LPAREN] = ACTIONS(461),
    [anon_sym_using] = ACTIONS(463),
    [anon_sym_is] = ACTIONS(463),
    [anon_sym_COMMA] = ACTIONS(461),
    [anon_sym_DOT_DOT] = ACTIONS(463),
    [anon_sym_DOT_DOT_LT] = ACTIONS(461),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(461),
    [anon_sym_COLON] = ACTIONS(461),
    [anon_sym_STAR] = ACTIONS(461),
    [anon_sym_PLUS] = ACTIONS(461),
    [anon_sym_SLASH] = ACTIONS(463),
    [anon_sym_DASH] = ACTIONS(461),
    [anon_sym_PERCENT] = ACTIONS(461),
    [anon_sym_EQ_EQ] = ACTIONS(461),
    [anon_sym_BANG_EQ] = ACTIONS(461),
    [anon_sym_LT] = ACTIONS(463),
    [anon_sym_LT_EQ] = ACTIONS(461),
    [anon_sym_lt] = ACTIONS(463),
    [anon_sym_lte] = ACTIONS(463),
    [anon_sym_gt] = ACTIONS(463),
    [anon_sym_gte] = ACTIONS(463),
    [anon_sym_BANG] = ACTIONS(463),
    [anon_sym_AMP_AMP] = ACTIONS(461),
    [anon_sym_PIPE_PIPE] = ACTIONS(461),
    [anon_sym_QMARK_QMARK] = ACTIONS(461),
    [anon_sym_EQ] = ACTIONS(463),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(461),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(461),
    [sym_number] = ACTIONS(463),
    [anon_sym_true] = ACTIONS(463),
    [anon_sym_LBRACK] = ACTIONS(461),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(463),
    [anon_sym_DOT] = ACTIONS(463),
    [anon_sym_GT] = ACTIONS(461),
    [anon_sym_SLASH_GT] = ACTIONS(461),
  },
  [188] = {
    [sym_expression] = STATE(184),
    [sym_type] = STATE(88),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(86),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_interpolation_repeat1] = STATE(184),
    [aux_sym_as_expression_repeat1] = STATE(88),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(806),
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
  [189] = {
    [sym_type] = STATE(281),
    [sym_group] = STATE(95),
    [sym_string] = STATE(95),
    [sym_boolean] = STATE(95),
    [sym_sequence] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_top_level] = STATE(95),
    [sym_spec_var] = STATE(95),
    [aux_sym_as_expression_repeat2] = STATE(281),
    [anon_sym_LBRACE] = ACTIONS(467),
    [anon_sym_as] = ACTIONS(469),
    [anon_sym_QMARK] = ACTIONS(469),
    [anon_sym_LPAREN] = ACTIONS(467),
    [anon_sym_using] = ACTIONS(469),
    [anon_sym_is] = ACTIONS(469),
    [anon_sym_COMMA] = ACTIONS(467),
    [anon_sym_DOT_DOT] = ACTIONS(469),
    [anon_sym_DOT_DOT_LT] = ACTIONS(467),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(467),
    [anon_sym_COLON] = ACTIONS(467),
    [anon_sym_STAR] = ACTIONS(467),
    [anon_sym_PLUS] = ACTIONS(467),
    [anon_sym_SLASH] = ACTIONS(469),
    [anon_sym_DASH] = ACTIONS(467),
    [anon_sym_PERCENT] = ACTIONS(467),
    [anon_sym_EQ_EQ] = ACTIONS(467),
    [anon_sym_BANG_EQ] = ACTIONS(467),
    [anon_sym_LT] = ACTIONS(469),
    [anon_sym_LT_EQ] = ACTIONS(467),
    [anon_sym_lt] = ACTIONS(469),
    [anon_sym_lte] = ACTIONS(469),
    [anon_sym_gt] = ACTIONS(469),
    [anon_sym_gte] = ACTIONS(469),
    [anon_sym_BANG] = ACTIONS(469),
    [anon_sym_AMP_AMP] = ACTIONS(467),
    [anon_sym_PIPE_PIPE] = ACTIONS(467),
    [anon_sym_QMARK_QMARK] = ACTIONS(467),
    [anon_sym_EQ] = ACTIONS(469),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(467),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(467),
    [sym_number] = ACTIONS(469),
    [anon_sym_true] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(467),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(469),
    [anon_sym_DOT] = ACTIONS(469),
    [anon_sym_GT] = ACTIONS(467),
    [anon_sym_SLASH_GT] = ACTIONS(467),
  },
  [190] = {
    [sym_group] = STATE(282),
    [anon_sym_LBRACE] = ACTIONS(471),
    [anon_sym_as] = ACTIONS(473),
    [anon_sym_QMARK] = ACTIONS(473),
    [anon_sym_LPAREN] = ACTIONS(471),
    [anon_sym_using] = ACTIONS(473),
    [anon_sym_is] = ACTIONS(473),
    [anon_sym_COMMA] = ACTIONS(471),
    [anon_sym_DOT_DOT] = ACTIONS(473),
    [anon_sym_DOT_DOT_LT] = ACTIONS(471),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(471),
    [anon_sym_COLON] = ACTIONS(471),
    [anon_sym_STAR] = ACTIONS(471),
    [anon_sym_PLUS] = ACTIONS(471),
    [anon_sym_SLASH] = ACTIONS(473),
    [anon_sym_DASH] = ACTIONS(471),
    [anon_sym_PERCENT] = ACTIONS(471),
    [anon_sym_EQ_EQ] = ACTIONS(471),
    [anon_sym_BANG_EQ] = ACTIONS(471),
    [anon_sym_LT] = ACTIONS(473),
    [anon_sym_LT_EQ] = ACTIONS(471),
    [anon_sym_lt] = ACTIONS(473),
    [anon_sym_lte] = ACTIONS(473),
    [anon_sym_gt] = ACTIONS(473),
    [anon_sym_gte] = ACTIONS(473),
    [anon_sym_BANG] = ACTIONS(473),
    [anon_sym_AMP_AMP] = ACTIONS(471),
    [anon_sym_PIPE_PIPE] = ACTIONS(471),
    [anon_sym_QMARK_QMARK] = ACTIONS(471),
    [anon_sym_EQ] = ACTIONS(473),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(471),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(471),
    [sym_number] = ACTIONS(473),
    [anon_sym_true] = ACTIONS(473),
    [anon_sym_LBRACK] = ACTIONS(471),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(473),
    [anon_sym_DOT] = ACTIONS(473),
    [anon_sym_GT] = ACTIONS(471),
    [anon_sym_SLASH_GT] = ACTIONS(471),
  },
  [191] = {
    [sym_parameter_group] = STATE(224),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(115),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(114),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(115),
    [aux_sym_group_repeat1] = STATE(224),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(195),
    [anon_sym_QMARK] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(808),
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
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(79),
  },
  [192] = {
    [anon_sym_LBRACE] = ACTIONS(481),
    [anon_sym_as] = ACTIONS(483),
    [anon_sym_QMARK] = ACTIONS(483),
    [anon_sym_LPAREN] = ACTIONS(481),
    [anon_sym_using] = ACTIONS(483),
    [anon_sym_is] = ACTIONS(483),
    [anon_sym_COMMA] = ACTIONS(481),
    [anon_sym_DOT_DOT] = ACTIONS(483),
    [anon_sym_DOT_DOT_LT] = ACTIONS(481),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(481),
    [anon_sym_COLON] = ACTIONS(481),
    [anon_sym_STAR] = ACTIONS(481),
    [anon_sym_PLUS] = ACTIONS(481),
    [anon_sym_SLASH] = ACTIONS(483),
    [anon_sym_DASH] = ACTIONS(481),
    [anon_sym_PERCENT] = ACTIONS(481),
    [anon_sym_EQ_EQ] = ACTIONS(481),
    [anon_sym_BANG_EQ] = ACTIONS(481),
    [anon_sym_LT] = ACTIONS(483),
    [anon_sym_LT_EQ] = ACTIONS(481),
    [anon_sym_lt] = ACTIONS(483),
    [anon_sym_lte] = ACTIONS(483),
    [anon_sym_gt] = ACTIONS(483),
    [anon_sym_gte] = ACTIONS(483),
    [anon_sym_BANG] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(481),
    [anon_sym_PIPE_PIPE] = ACTIONS(481),
    [anon_sym_QMARK_QMARK] = ACTIONS(481),
    [anon_sym_EQ] = ACTIONS(483),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(481),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(481),
    [sym_number] = ACTIONS(483),
    [anon_sym_true] = ACTIONS(483),
    [anon_sym_LBRACK] = ACTIONS(481),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(483),
    [anon_sym_DOT] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(481),
    [anon_sym_SLASH_GT] = ACTIONS(481),
  },
  [193] = {
    [anon_sym_LBRACE] = ACTIONS(485),
    [anon_sym_as] = ACTIONS(487),
    [anon_sym_QMARK] = ACTIONS(487),
    [anon_sym_LPAREN] = ACTIONS(485),
    [anon_sym_using] = ACTIONS(487),
    [anon_sym_is] = ACTIONS(487),
    [anon_sym_COMMA] = ACTIONS(485),
    [anon_sym_DOT_DOT] = ACTIONS(487),
    [anon_sym_DOT_DOT_LT] = ACTIONS(485),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(485),
    [anon_sym_COLON] = ACTIONS(485),
    [anon_sym_STAR] = ACTIONS(485),
    [anon_sym_PLUS] = ACTIONS(485),
    [anon_sym_SLASH] = ACTIONS(487),
    [anon_sym_DASH] = ACTIONS(485),
    [anon_sym_PERCENT] = ACTIONS(485),
    [anon_sym_EQ_EQ] = ACTIONS(485),
    [anon_sym_BANG_EQ] = ACTIONS(485),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_LT_EQ] = ACTIONS(485),
    [anon_sym_lt] = ACTIONS(487),
    [anon_sym_lte] = ACTIONS(487),
    [anon_sym_gt] = ACTIONS(487),
    [anon_sym_gte] = ACTIONS(487),
    [anon_sym_BANG] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(485),
    [anon_sym_PIPE_PIPE] = ACTIONS(485),
    [anon_sym_QMARK_QMARK] = ACTIONS(485),
    [anon_sym_EQ] = ACTIONS(487),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(485),
    [sym_number] = ACTIONS(487),
    [anon_sym_true] = ACTIONS(487),
    [anon_sym_LBRACK] = ACTIONS(485),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(487),
    [anon_sym_DOT] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(485),
    [anon_sym_SLASH_GT] = ACTIONS(485),
  },
  [194] = {
    [sym_expression] = STATE(120),
    [sym_type] = STATE(122),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(121),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat1] = STATE(122),
    [aux_sym_sequence_repeat1] = STATE(231),
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
    [anon_sym_RBRACK] = ACTIONS(810),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(217),
    [anon_sym_DOT] = ACTIONS(159),
  },
  [195] = {
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
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(498),
    [anon_sym_DOT] = ACTIONS(500),
    [anon_sym_GT] = ACTIONS(498),
    [anon_sym_SLASH_GT] = ACTIONS(498),
  },
  [196] = {
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
  [197] = {
    [sym_group] = STATE(285),
    [aux_sym_top_level_repeat1] = STATE(286),
    [anon_sym_LBRACE] = ACTIONS(506),
    [anon_sym_as] = ACTIONS(508),
    [anon_sym_QMARK] = ACTIONS(508),
    [anon_sym_LPAREN] = ACTIONS(506),
    [anon_sym_using] = ACTIONS(508),
    [anon_sym_is] = ACTIONS(508),
    [anon_sym_COMMA] = ACTIONS(506),
    [anon_sym_DOT_DOT] = ACTIONS(508),
    [anon_sym_DOT_DOT_LT] = ACTIONS(506),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(506),
    [anon_sym_COLON] = ACTIONS(506),
    [anon_sym_STAR] = ACTIONS(506),
    [anon_sym_PLUS] = ACTIONS(506),
    [anon_sym_SLASH] = ACTIONS(508),
    [anon_sym_DASH] = ACTIONS(506),
    [anon_sym_PERCENT] = ACTIONS(506),
    [anon_sym_EQ_EQ] = ACTIONS(506),
    [anon_sym_BANG_EQ] = ACTIONS(506),
    [anon_sym_LT] = ACTIONS(508),
    [anon_sym_LT_EQ] = ACTIONS(506),
    [anon_sym_lt] = ACTIONS(508),
    [anon_sym_lte] = ACTIONS(508),
    [anon_sym_gt] = ACTIONS(508),
    [anon_sym_gte] = ACTIONS(508),
    [anon_sym_BANG] = ACTIONS(508),
    [anon_sym_AMP_AMP] = ACTIONS(506),
    [anon_sym_PIPE_PIPE] = ACTIONS(506),
    [anon_sym_QMARK_QMARK] = ACTIONS(506),
    [anon_sym_EQ] = ACTIONS(508),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(506),
    [sym_number] = ACTIONS(508),
    [anon_sym_true] = ACTIONS(508),
    [anon_sym_LBRACK] = ACTIONS(506),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(508),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(435),
    [anon_sym_DOT] = ACTIONS(508),
    [anon_sym_GT] = ACTIONS(506),
    [anon_sym_SLASH_GT] = ACTIONS(506),
  },
  [198] = {
    [anon_sym_LBRACE] = ACTIONS(510),
    [anon_sym_as] = ACTIONS(512),
    [anon_sym_QMARK] = ACTIONS(512),
    [anon_sym_LPAREN] = ACTIONS(510),
    [anon_sym_using] = ACTIONS(512),
    [anon_sym_is] = ACTIONS(512),
    [anon_sym_COMMA] = ACTIONS(510),
    [anon_sym_DOT_DOT] = ACTIONS(512),
    [anon_sym_DOT_DOT_LT] = ACTIONS(510),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(510),
    [anon_sym_COLON] = ACTIONS(510),
    [anon_sym_STAR] = ACTIONS(510),
    [anon_sym_PLUS] = ACTIONS(510),
    [anon_sym_SLASH] = ACTIONS(512),
    [anon_sym_DASH] = ACTIONS(510),
    [anon_sym_PERCENT] = ACTIONS(510),
    [anon_sym_EQ_EQ] = ACTIONS(510),
    [anon_sym_BANG_EQ] = ACTIONS(510),
    [anon_sym_LT] = ACTIONS(512),
    [anon_sym_LT_EQ] = ACTIONS(510),
    [anon_sym_lt] = ACTIONS(512),
    [anon_sym_lte] = ACTIONS(512),
    [anon_sym_gt] = ACTIONS(512),
    [anon_sym_gte] = ACTIONS(512),
    [anon_sym_BANG] = ACTIONS(512),
    [anon_sym_AMP_AMP] = ACTIONS(510),
    [anon_sym_PIPE_PIPE] = ACTIONS(510),
    [anon_sym_QMARK_QMARK] = ACTIONS(510),
    [anon_sym_EQ] = ACTIONS(512),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(510),
    [sym_number] = ACTIONS(512),
    [anon_sym_true] = ACTIONS(512),
    [anon_sym_LBRACK] = ACTIONS(510),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(512),
    [anon_sym_DOT] = ACTIONS(512),
    [anon_sym_GT] = ACTIONS(510),
    [anon_sym_SLASH_GT] = ACTIONS(510),
  },
  [199] = {
    [sym_type] = STATE(281),
    [sym_group] = STATE(95),
    [sym_string] = STATE(95),
    [sym_boolean] = STATE(95),
    [sym_sequence] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_top_level] = STATE(95),
    [sym_spec_var] = STATE(95),
    [aux_sym_as_expression_repeat2] = STATE(281),
    [anon_sym_LBRACE] = ACTIONS(514),
    [anon_sym_as] = ACTIONS(516),
    [anon_sym_QMARK] = ACTIONS(516),
    [anon_sym_LPAREN] = ACTIONS(514),
    [anon_sym_using] = ACTIONS(516),
    [anon_sym_is] = ACTIONS(516),
    [anon_sym_COMMA] = ACTIONS(514),
    [anon_sym_DOT_DOT] = ACTIONS(516),
    [anon_sym_DOT_DOT_LT] = ACTIONS(514),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(514),
    [anon_sym_COLON] = ACTIONS(514),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_PLUS] = ACTIONS(514),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_PERCENT] = ACTIONS(514),
    [anon_sym_EQ_EQ] = ACTIONS(514),
    [anon_sym_BANG_EQ] = ACTIONS(514),
    [anon_sym_LT] = ACTIONS(516),
    [anon_sym_LT_EQ] = ACTIONS(514),
    [anon_sym_lt] = ACTIONS(516),
    [anon_sym_lte] = ACTIONS(516),
    [anon_sym_gt] = ACTIONS(516),
    [anon_sym_gte] = ACTIONS(516),
    [anon_sym_BANG] = ACTIONS(516),
    [anon_sym_AMP_AMP] = ACTIONS(514),
    [anon_sym_PIPE_PIPE] = ACTIONS(514),
    [anon_sym_QMARK_QMARK] = ACTIONS(514),
    [anon_sym_EQ] = ACTIONS(516),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(514),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(514),
    [sym_number] = ACTIONS(516),
    [anon_sym_true] = ACTIONS(516),
    [anon_sym_LBRACK] = ACTIONS(514),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(516),
    [anon_sym_DOT] = ACTIONS(516),
    [anon_sym_GT] = ACTIONS(514),
    [anon_sym_SLASH_GT] = ACTIONS(514),
  },
  [200] = {
    [sym_type] = STATE(287),
    [sym_group] = STATE(95),
    [sym_string] = STATE(95),
    [sym_boolean] = STATE(95),
    [sym_sequence] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_top_level] = STATE(95),
    [sym_spec_var] = STATE(95),
    [aux_sym_as_expression_repeat2] = STATE(287),
    [anon_sym_LBRACE] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(167),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(173),
    [sym_number] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(179),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(181),
    [anon_sym_DOT] = ACTIONS(427),
  },
  [201] = {
    [sym_type] = STATE(288),
    [sym_group] = STATE(95),
    [sym_string] = STATE(95),
    [sym_boolean] = STATE(95),
    [sym_sequence] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_top_level] = STATE(95),
    [sym_spec_var] = STATE(95),
    [aux_sym_as_expression_repeat2] = STATE(288),
    [anon_sym_LBRACE] = ACTIONS(161),
    [anon_sym_as] = ACTIONS(516),
    [anon_sym_QMARK] = ACTIONS(516),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_using] = ACTIONS(516),
    [anon_sym_is] = ACTIONS(516),
    [anon_sym_COMMA] = ACTIONS(514),
    [anon_sym_DOT_DOT] = ACTIONS(516),
    [anon_sym_DOT_DOT_LT] = ACTIONS(514),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(514),
    [anon_sym_COLON] = ACTIONS(514),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_PLUS] = ACTIONS(514),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_PERCENT] = ACTIONS(514),
    [anon_sym_EQ_EQ] = ACTIONS(514),
    [anon_sym_BANG_EQ] = ACTIONS(514),
    [anon_sym_LT] = ACTIONS(516),
    [anon_sym_LT_EQ] = ACTIONS(514),
    [anon_sym_lt] = ACTIONS(516),
    [anon_sym_lte] = ACTIONS(516),
    [anon_sym_gt] = ACTIONS(516),
    [anon_sym_gte] = ACTIONS(516),
    [anon_sym_BANG] = ACTIONS(516),
    [anon_sym_AMP_AMP] = ACTIONS(514),
    [anon_sym_PIPE_PIPE] = ACTIONS(514),
    [anon_sym_QMARK_QMARK] = ACTIONS(514),
    [anon_sym_EQ] = ACTIONS(516),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(173),
    [sym_number] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(179),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(181),
    [anon_sym_DOT] = ACTIONS(183),
    [anon_sym_GT] = ACTIONS(514),
    [anon_sym_SLASH_GT] = ACTIONS(514),
  },
  [202] = {
    [sym_type] = STATE(202),
    [sym_group] = STATE(95),
    [sym_string] = STATE(95),
    [sym_boolean] = STATE(95),
    [sym_sequence] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_top_level] = STATE(95),
    [sym_spec_var] = STATE(95),
    [aux_sym_as_expression_repeat1] = STATE(202),
    [anon_sym_LBRACE] = ACTIONS(812),
    [anon_sym_as] = ACTIONS(521),
    [anon_sym_QMARK] = ACTIONS(521),
    [anon_sym_LPAREN] = ACTIONS(815),
    [anon_sym_using] = ACTIONS(521),
    [anon_sym_is] = ACTIONS(521),
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_DOT_DOT] = ACTIONS(521),
    [anon_sym_DOT_DOT_LT] = ACTIONS(526),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(526),
    [anon_sym_COLON] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(521),
    [anon_sym_DASH] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(526),
    [anon_sym_BANG_EQ] = ACTIONS(526),
    [anon_sym_LT] = ACTIONS(521),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [anon_sym_lt] = ACTIONS(521),
    [anon_sym_lte] = ACTIONS(521),
    [anon_sym_gt] = ACTIONS(521),
    [anon_sym_gte] = ACTIONS(521),
    [anon_sym_BANG] = ACTIONS(521),
    [anon_sym_AMP_AMP] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(526),
    [anon_sym_QMARK_QMARK] = ACTIONS(526),
    [anon_sym_EQ] = ACTIONS(521),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(818),
    [sym_number] = ACTIONS(821),
    [anon_sym_true] = ACTIONS(824),
    [anon_sym_LBRACK] = ACTIONS(827),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(830),
    [anon_sym_DOT] = ACTIONS(833),
    [anon_sym_GT] = ACTIONS(526),
    [anon_sym_SLASH_GT] = ACTIONS(526),
  },
  [203] = {
    [ts_builtin_sym_end] = ACTIONS(836),
    [sym_comment] = ACTIONS(836),
    [anon_sym_DOLLAR] = ACTIONS(836),
    [anon_sym_LT_AT] = ACTIONS(836),
    [anon_sym_LT_POUND] = ACTIONS(838),
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
  [204] = {
    [sym_parameter_group] = STATE(204),
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
    [aux_sym_group_repeat1] = STATE(204),
    [anon_sym_LBRACE] = ACTIONS(840),
    [anon_sym_as] = ACTIONS(843),
    [anon_sym_QMARK] = ACTIONS(846),
    [anon_sym_LPAREN] = ACTIONS(849),
    [anon_sym_using] = ACTIONS(852),
    [anon_sym_is] = ACTIONS(852),
    [anon_sym_COMMA] = ACTIONS(855),
    [anon_sym_DOT_DOT] = ACTIONS(852),
    [anon_sym_DOT_DOT_LT] = ACTIONS(855),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(855),
    [anon_sym_COLON] = ACTIONS(855),
    [anon_sym_STAR] = ACTIONS(855),
    [anon_sym_PLUS] = ACTIONS(855),
    [anon_sym_SLASH] = ACTIONS(852),
    [anon_sym_DASH] = ACTIONS(855),
    [anon_sym_PERCENT] = ACTIONS(855),
    [anon_sym_EQ_EQ] = ACTIONS(855),
    [anon_sym_BANG_EQ] = ACTIONS(855),
    [anon_sym_LT] = ACTIONS(852),
    [anon_sym_LT_EQ] = ACTIONS(855),
    [anon_sym_lt] = ACTIONS(852),
    [anon_sym_lte] = ACTIONS(852),
    [anon_sym_gt] = ACTIONS(852),
    [anon_sym_gte] = ACTIONS(852),
    [anon_sym_BANG] = ACTIONS(852),
    [anon_sym_AMP_AMP] = ACTIONS(855),
    [anon_sym_PIPE_PIPE] = ACTIONS(855),
    [anon_sym_QMARK_QMARK] = ACTIONS(855),
    [anon_sym_EQ] = ACTIONS(852),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(858),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(858),
    [sym_number] = ACTIONS(861),
    [anon_sym_true] = ACTIONS(864),
    [anon_sym_LBRACK] = ACTIONS(867),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(870),
    [anon_sym_DOT] = ACTIONS(873),
    [anon_sym_GT] = ACTIONS(588),
    [anon_sym_SLASH_GT] = ACTIONS(588),
  },
  [205] = {
    [ts_builtin_sym_end] = ACTIONS(876),
    [sym_comment] = ACTIONS(876),
    [anon_sym_DOLLAR] = ACTIONS(876),
    [anon_sym_LT_AT] = ACTIONS(876),
    [anon_sym_LT_POUND] = ACTIONS(878),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(876),
    [sym_break] = ACTIONS(876),
    [sym_continue] = ACTIONS(876),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(876),
    [anon_sym_LT_POUNDitems] = ACTIONS(876),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(876),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(876),
    [anon_sym_LT_POUNDif] = ACTIONS(876),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(876),
    [anon_sym_LT_POUNDelseif] = ACTIONS(876),
    [anon_sym_LT_POUNDswitch] = ACTIONS(876),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(876),
    [anon_sym_LT_POUNDcase] = ACTIONS(876),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(876),
    [anon_sym_LT_POUNDfunction] = ACTIONS(876),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(876),
    [anon_sym_LT_POUNDreturn] = ACTIONS(876),
    [anon_sym_LT_POUNDmacro] = ACTIONS(876),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(876),
    [anon_sym_LT_POUNDnested] = ACTIONS(876),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(876),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(876),
    [sym_recover] = ACTIONS(876),
    [sym_fallback] = ACTIONS(876),
    [sym_flush] = ACTIONS(876),
    [anon_sym_LT_POUNDftl] = ACTIONS(876),
    [anon_sym_LT_POUNDimport] = ACTIONS(876),
    [anon_sym_LT_POUNDinclude] = ACTIONS(876),
    [sym_lt] = ACTIONS(876),
    [sym_nt] = ACTIONS(876),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(876),
    [sym_rt] = ACTIONS(876),
    [anon_sym_LT_POUNDsetting] = ACTIONS(876),
    [sym_stop] = ACTIONS(876),
    [sym_t] = ACTIONS(876),
    [anon_sym_LT_POUNDvisit] = ACTIONS(876),
    [anon_sym_LT_POUNDassign] = ACTIONS(876),
    [sym_end_assign] = ACTIONS(876),
    [anon_sym_LT_POUNDglobal] = ACTIONS(876),
    [sym_end_global] = ACTIONS(876),
    [anon_sym_LT_POUNDlocal] = ACTIONS(876),
    [sym_end_local] = ACTIONS(876),
  },
  [206] = {
    [anon_sym_LT_AT] = ACTIONS(880),
    [anon_sym_LT_POUND] = ACTIONS(882),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(880),
    [sym_break] = ACTIONS(880),
    [sym_continue] = ACTIONS(880),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(880),
    [anon_sym_LT_POUNDitems] = ACTIONS(880),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(880),
    [anon_sym_LT_POUNDif] = ACTIONS(880),
    [anon_sym_LT_POUNDswitch] = ACTIONS(880),
    [anon_sym_LT_POUNDfunction] = ACTIONS(880),
    [anon_sym_LT_POUNDmacro] = ACTIONS(880),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(880),
    [sym_fallback] = ACTIONS(880),
    [sym_flush] = ACTIONS(880),
    [anon_sym_LT_POUNDftl] = ACTIONS(880),
    [anon_sym_LT_POUNDimport] = ACTIONS(880),
    [anon_sym_LT_POUNDinclude] = ACTIONS(880),
    [sym_lt] = ACTIONS(880),
    [sym_nt] = ACTIONS(880),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(880),
    [sym_rt] = ACTIONS(880),
    [anon_sym_LT_POUNDsetting] = ACTIONS(880),
    [sym_stop] = ACTIONS(880),
    [sym_t] = ACTIONS(880),
    [anon_sym_LT_POUNDvisit] = ACTIONS(880),
    [anon_sym_LT_POUNDassign] = ACTIONS(880),
    [sym_end_assign] = ACTIONS(880),
    [anon_sym_LT_POUNDglobal] = ACTIONS(880),
    [sym_end_global] = ACTIONS(880),
    [anon_sym_LT_POUNDlocal] = ACTIONS(880),
    [sym_end_local] = ACTIONS(880),
  },
  [207] = {
    [sym_directive] = STATE(206),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_list_middle] = STATE(289),
    [sym_items] = STATE(206),
    [sym_sep] = STATE(206),
    [sym_sep_block] = STATE(211),
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
    [aux_sym_list_repeat1] = STATE(289),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(884),
    [sym_break] = ACTIONS(451),
    [sym_continue] = ACTIONS(451),
    [anon_sym_LT_POUNDitems] = ACTIONS(455),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(457),
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
  [208] = {
    [sym_parameter_group] = STATE(290),
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
  [209] = {
    [anon_sym_LT_AT] = ACTIONS(886),
    [anon_sym_LT_POUND] = ACTIONS(888),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(886),
    [sym_break] = ACTIONS(886),
    [sym_continue] = ACTIONS(886),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(886),
    [anon_sym_LT_POUNDitems] = ACTIONS(886),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(886),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(886),
    [anon_sym_LT_SLASH_POUNDsep_GT] = ACTIONS(890),
    [anon_sym_LT_POUNDif] = ACTIONS(886),
    [anon_sym_LT_POUNDswitch] = ACTIONS(886),
    [anon_sym_LT_POUNDfunction] = ACTIONS(886),
    [anon_sym_LT_POUNDmacro] = ACTIONS(886),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(886),
    [sym_fallback] = ACTIONS(886),
    [sym_flush] = ACTIONS(886),
    [anon_sym_LT_POUNDftl] = ACTIONS(886),
    [anon_sym_LT_POUNDimport] = ACTIONS(886),
    [anon_sym_LT_POUNDinclude] = ACTIONS(886),
    [sym_lt] = ACTIONS(886),
    [sym_nt] = ACTIONS(886),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(886),
    [sym_rt] = ACTIONS(886),
    [anon_sym_LT_POUNDsetting] = ACTIONS(886),
    [sym_stop] = ACTIONS(886),
    [sym_t] = ACTIONS(886),
    [anon_sym_LT_POUNDvisit] = ACTIONS(886),
    [anon_sym_LT_POUNDassign] = ACTIONS(886),
    [sym_end_assign] = ACTIONS(886),
    [anon_sym_LT_POUNDglobal] = ACTIONS(886),
    [sym_end_global] = ACTIONS(886),
    [anon_sym_LT_POUNDlocal] = ACTIONS(886),
    [sym_end_local] = ACTIONS(886),
  },
  [210] = {
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(892),
  },
  [211] = {
    [anon_sym_LT_AT] = ACTIONS(886),
    [anon_sym_LT_POUND] = ACTIONS(888),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(886),
    [sym_break] = ACTIONS(886),
    [sym_continue] = ACTIONS(886),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(886),
    [anon_sym_LT_POUNDitems] = ACTIONS(886),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(886),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(886),
    [anon_sym_LT_POUNDif] = ACTIONS(886),
    [anon_sym_LT_POUNDswitch] = ACTIONS(886),
    [anon_sym_LT_POUNDfunction] = ACTIONS(886),
    [anon_sym_LT_POUNDmacro] = ACTIONS(886),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(886),
    [sym_fallback] = ACTIONS(886),
    [sym_flush] = ACTIONS(886),
    [anon_sym_LT_POUNDftl] = ACTIONS(886),
    [anon_sym_LT_POUNDimport] = ACTIONS(886),
    [anon_sym_LT_POUNDinclude] = ACTIONS(886),
    [sym_lt] = ACTIONS(886),
    [sym_nt] = ACTIONS(886),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(886),
    [sym_rt] = ACTIONS(886),
    [anon_sym_LT_POUNDsetting] = ACTIONS(886),
    [sym_stop] = ACTIONS(886),
    [sym_t] = ACTIONS(886),
    [anon_sym_LT_POUNDvisit] = ACTIONS(886),
    [anon_sym_LT_POUNDassign] = ACTIONS(886),
    [sym_end_assign] = ACTIONS(886),
    [anon_sym_LT_POUNDglobal] = ACTIONS(886),
    [sym_end_global] = ACTIONS(886),
    [anon_sym_LT_POUNDlocal] = ACTIONS(886),
    [sym_end_local] = ACTIONS(886),
  },
  [212] = {
    [sym_directive] = STATE(206),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_list_middle] = STATE(294),
    [sym_list_else] = STATE(293),
    [sym_items] = STATE(206),
    [sym_sep] = STATE(206),
    [sym_sep_block] = STATE(211),
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
    [aux_sym_list_repeat1] = STATE(294),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(892),
    [sym_break] = ACTIONS(451),
    [sym_continue] = ACTIONS(451),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(453),
    [anon_sym_LT_POUNDitems] = ACTIONS(455),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(457),
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
  [213] = {
    [sym_directive] = STATE(206),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_list_middle] = STATE(295),
    [sym_list_else] = STATE(293),
    [sym_items] = STATE(206),
    [sym_sep] = STATE(206),
    [sym_sep_block] = STATE(211),
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
    [aux_sym_list_repeat1] = STATE(295),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(892),
    [sym_break] = ACTIONS(451),
    [sym_continue] = ACTIONS(451),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(453),
    [anon_sym_LT_POUNDitems] = ACTIONS(455),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(457),
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
  [214] = {
    [anon_sym_LBRACE] = ACTIONS(894),
    [anon_sym_as] = ACTIONS(896),
    [anon_sym_QMARK] = ACTIONS(896),
    [anon_sym_LPAREN] = ACTIONS(894),
    [anon_sym_RPAREN] = ACTIONS(894),
    [anon_sym_using] = ACTIONS(896),
    [anon_sym_is] = ACTIONS(896),
    [anon_sym_COMMA] = ACTIONS(894),
    [anon_sym_DOT_DOT] = ACTIONS(896),
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
    [anon_sym_LT] = ACTIONS(896),
    [anon_sym_LT_EQ] = ACTIONS(894),
    [anon_sym_lt] = ACTIONS(896),
    [anon_sym_lte] = ACTIONS(896),
    [anon_sym_gt] = ACTIONS(896),
    [anon_sym_gte] = ACTIONS(896),
    [anon_sym_BANG] = ACTIONS(896),
    [anon_sym_AMP_AMP] = ACTIONS(894),
    [anon_sym_PIPE_PIPE] = ACTIONS(894),
    [anon_sym_QMARK_QMARK] = ACTIONS(894),
    [anon_sym_EQ] = ACTIONS(896),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(894),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(894),
    [sym_number] = ACTIONS(896),
    [anon_sym_true] = ACTIONS(896),
    [anon_sym_LBRACK] = ACTIONS(894),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(896),
    [anon_sym_DOT] = ACTIONS(896),
    [anon_sym_GT] = ACTIONS(894),
  },
  [215] = {
    [sym_type] = STATE(215),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(215),
    [anon_sym_LBRACE] = ACTIONS(898),
    [anon_sym_as] = ACTIONS(901),
    [anon_sym_QMARK] = ACTIONS(901),
    [anon_sym_LPAREN] = ACTIONS(903),
    [anon_sym_using] = ACTIONS(901),
    [anon_sym_is] = ACTIONS(901),
    [anon_sym_COMMA] = ACTIONS(906),
    [anon_sym_DOT_DOT] = ACTIONS(901),
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
    [anon_sym_LT] = ACTIONS(901),
    [anon_sym_LT_EQ] = ACTIONS(906),
    [anon_sym_lt] = ACTIONS(901),
    [anon_sym_lte] = ACTIONS(901),
    [anon_sym_gt] = ACTIONS(901),
    [anon_sym_gte] = ACTIONS(901),
    [anon_sym_BANG] = ACTIONS(901),
    [anon_sym_AMP_AMP] = ACTIONS(906),
    [anon_sym_PIPE_PIPE] = ACTIONS(906),
    [anon_sym_QMARK_QMARK] = ACTIONS(906),
    [anon_sym_EQ] = ACTIONS(901),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(908),
    [sym_number] = ACTIONS(911),
    [anon_sym_true] = ACTIONS(914),
    [anon_sym_LBRACK] = ACTIONS(917),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(920),
    [anon_sym_DOT] = ACTIONS(923),
    [anon_sym_GT] = ACTIONS(906),
  },
  [216] = {
    [anon_sym_LBRACE] = ACTIONS(926),
    [anon_sym_as] = ACTIONS(928),
    [anon_sym_QMARK] = ACTIONS(928),
    [anon_sym_LPAREN] = ACTIONS(926),
    [anon_sym_RPAREN] = ACTIONS(926),
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
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(928),
    [anon_sym_DOT] = ACTIONS(928),
    [anon_sym_GT] = ACTIONS(926),
  },
  [217] = {
    [sym_type] = STATE(296),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(296),
    [anon_sym_LBRACE] = ACTIONS(467),
    [anon_sym_as] = ACTIONS(469),
    [anon_sym_QMARK] = ACTIONS(469),
    [anon_sym_LPAREN] = ACTIONS(467),
    [anon_sym_RPAREN] = ACTIONS(467),
    [anon_sym_using] = ACTIONS(469),
    [anon_sym_is] = ACTIONS(469),
    [anon_sym_COMMA] = ACTIONS(467),
    [anon_sym_DOT_DOT] = ACTIONS(469),
    [anon_sym_DOT_DOT_LT] = ACTIONS(467),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(467),
    [anon_sym_COLON] = ACTIONS(467),
    [anon_sym_STAR] = ACTIONS(467),
    [anon_sym_PLUS] = ACTIONS(467),
    [anon_sym_SLASH] = ACTIONS(467),
    [anon_sym_DASH] = ACTIONS(467),
    [anon_sym_PERCENT] = ACTIONS(467),
    [anon_sym_EQ_EQ] = ACTIONS(467),
    [anon_sym_BANG_EQ] = ACTIONS(467),
    [anon_sym_LT] = ACTIONS(469),
    [anon_sym_LT_EQ] = ACTIONS(467),
    [anon_sym_lt] = ACTIONS(469),
    [anon_sym_lte] = ACTIONS(469),
    [anon_sym_gt] = ACTIONS(469),
    [anon_sym_gte] = ACTIONS(469),
    [anon_sym_BANG] = ACTIONS(469),
    [anon_sym_AMP_AMP] = ACTIONS(467),
    [anon_sym_PIPE_PIPE] = ACTIONS(467),
    [anon_sym_QMARK_QMARK] = ACTIONS(467),
    [anon_sym_EQ] = ACTIONS(469),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(467),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(467),
    [sym_number] = ACTIONS(469),
    [anon_sym_true] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(467),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(469),
    [anon_sym_DOT] = ACTIONS(469),
  },
  [218] = {
    [sym_group] = STATE(232),
    [aux_sym_top_level_repeat1] = STATE(297),
    [anon_sym_LBRACE] = ACTIONS(506),
    [anon_sym_as] = ACTIONS(508),
    [anon_sym_QMARK] = ACTIONS(508),
    [anon_sym_LPAREN] = ACTIONS(506),
    [anon_sym_RPAREN] = ACTIONS(506),
    [anon_sym_using] = ACTIONS(508),
    [anon_sym_is] = ACTIONS(508),
    [anon_sym_COMMA] = ACTIONS(506),
    [anon_sym_DOT_DOT] = ACTIONS(508),
    [anon_sym_DOT_DOT_LT] = ACTIONS(506),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(506),
    [anon_sym_COLON] = ACTIONS(506),
    [anon_sym_STAR] = ACTIONS(506),
    [anon_sym_PLUS] = ACTIONS(506),
    [anon_sym_SLASH] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [anon_sym_PERCENT] = ACTIONS(506),
    [anon_sym_EQ_EQ] = ACTIONS(506),
    [anon_sym_BANG_EQ] = ACTIONS(506),
    [anon_sym_LT] = ACTIONS(508),
    [anon_sym_LT_EQ] = ACTIONS(506),
    [anon_sym_lt] = ACTIONS(508),
    [anon_sym_lte] = ACTIONS(508),
    [anon_sym_gt] = ACTIONS(508),
    [anon_sym_gte] = ACTIONS(508),
    [anon_sym_BANG] = ACTIONS(508),
    [anon_sym_AMP_AMP] = ACTIONS(506),
    [anon_sym_PIPE_PIPE] = ACTIONS(506),
    [anon_sym_QMARK_QMARK] = ACTIONS(506),
    [anon_sym_EQ] = ACTIONS(508),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(506),
    [sym_number] = ACTIONS(508),
    [anon_sym_true] = ACTIONS(508),
    [anon_sym_LBRACK] = ACTIONS(506),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(508),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(508),
  },
  [219] = {
    [sym_type] = STATE(296),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(296),
    [anon_sym_LBRACE] = ACTIONS(514),
    [anon_sym_as] = ACTIONS(516),
    [anon_sym_QMARK] = ACTIONS(516),
    [anon_sym_LPAREN] = ACTIONS(514),
    [anon_sym_RPAREN] = ACTIONS(514),
    [anon_sym_using] = ACTIONS(516),
    [anon_sym_is] = ACTIONS(516),
    [anon_sym_COMMA] = ACTIONS(514),
    [anon_sym_DOT_DOT] = ACTIONS(516),
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
    [anon_sym_LT] = ACTIONS(516),
    [anon_sym_LT_EQ] = ACTIONS(514),
    [anon_sym_lt] = ACTIONS(516),
    [anon_sym_lte] = ACTIONS(516),
    [anon_sym_gt] = ACTIONS(516),
    [anon_sym_gte] = ACTIONS(516),
    [anon_sym_BANG] = ACTIONS(516),
    [anon_sym_AMP_AMP] = ACTIONS(514),
    [anon_sym_PIPE_PIPE] = ACTIONS(514),
    [anon_sym_QMARK_QMARK] = ACTIONS(514),
    [anon_sym_EQ] = ACTIONS(516),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(514),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(514),
    [sym_number] = ACTIONS(516),
    [anon_sym_true] = ACTIONS(516),
    [anon_sym_LBRACK] = ACTIONS(514),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(516),
    [anon_sym_DOT] = ACTIONS(516),
  },
  [220] = {
    [sym_type] = STATE(298),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(298),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(63),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(191),
  },
  [221] = {
    [sym_type] = STATE(299),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(299),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(516),
    [anon_sym_QMARK] = ACTIONS(516),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(514),
    [anon_sym_using] = ACTIONS(516),
    [anon_sym_is] = ACTIONS(516),
    [anon_sym_COMMA] = ACTIONS(514),
    [anon_sym_DOT_DOT] = ACTIONS(516),
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
    [anon_sym_LT] = ACTIONS(516),
    [anon_sym_LT_EQ] = ACTIONS(514),
    [anon_sym_lt] = ACTIONS(516),
    [anon_sym_lte] = ACTIONS(516),
    [anon_sym_gt] = ACTIONS(516),
    [anon_sym_gte] = ACTIONS(516),
    [anon_sym_BANG] = ACTIONS(516),
    [anon_sym_AMP_AMP] = ACTIONS(514),
    [anon_sym_PIPE_PIPE] = ACTIONS(514),
    [anon_sym_QMARK_QMARK] = ACTIONS(514),
    [anon_sym_EQ] = ACTIONS(516),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(69),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(79),
  },
  [222] = {
    [sym_type] = STATE(222),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(222),
    [anon_sym_LBRACE] = ACTIONS(518),
    [anon_sym_as] = ACTIONS(521),
    [anon_sym_QMARK] = ACTIONS(521),
    [anon_sym_LPAREN] = ACTIONS(523),
    [anon_sym_RPAREN] = ACTIONS(526),
    [anon_sym_using] = ACTIONS(521),
    [anon_sym_is] = ACTIONS(521),
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_DOT_DOT] = ACTIONS(521),
    [anon_sym_DOT_DOT_LT] = ACTIONS(526),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(526),
    [anon_sym_COLON] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(526),
    [anon_sym_BANG_EQ] = ACTIONS(526),
    [anon_sym_LT] = ACTIONS(521),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [anon_sym_lt] = ACTIONS(521),
    [anon_sym_lte] = ACTIONS(521),
    [anon_sym_gt] = ACTIONS(521),
    [anon_sym_gte] = ACTIONS(521),
    [anon_sym_BANG] = ACTIONS(521),
    [anon_sym_AMP_AMP] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(526),
    [anon_sym_QMARK_QMARK] = ACTIONS(526),
    [anon_sym_EQ] = ACTIONS(521),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(528),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(528),
    [sym_number] = ACTIONS(531),
    [anon_sym_true] = ACTIONS(534),
    [anon_sym_LBRACK] = ACTIONS(537),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(930),
    [anon_sym_DOT] = ACTIONS(543),
  },
  [223] = {
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
  [224] = {
    [sym_parameter_group] = STATE(224),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(115),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(114),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(115),
    [aux_sym_group_repeat1] = STATE(224),
    [anon_sym_LBRACE] = ACTIONS(552),
    [anon_sym_as] = ACTIONS(937),
    [anon_sym_QMARK] = ACTIONS(940),
    [anon_sym_LPAREN] = ACTIONS(561),
    [anon_sym_RPAREN] = ACTIONS(588),
    [anon_sym_using] = ACTIONS(564),
    [anon_sym_is] = ACTIONS(564),
    [anon_sym_COMMA] = ACTIONS(567),
    [anon_sym_DOT_DOT] = ACTIONS(564),
    [anon_sym_DOT_DOT_LT] = ACTIONS(567),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(567),
    [anon_sym_COLON] = ACTIONS(567),
    [anon_sym_STAR] = ACTIONS(567),
    [anon_sym_PLUS] = ACTIONS(567),
    [anon_sym_SLASH] = ACTIONS(567),
    [anon_sym_DASH] = ACTIONS(567),
    [anon_sym_PERCENT] = ACTIONS(567),
    [anon_sym_EQ_EQ] = ACTIONS(567),
    [anon_sym_BANG_EQ] = ACTIONS(567),
    [anon_sym_LT] = ACTIONS(564),
    [anon_sym_LT_EQ] = ACTIONS(567),
    [anon_sym_lt] = ACTIONS(564),
    [anon_sym_lte] = ACTIONS(564),
    [anon_sym_gt] = ACTIONS(564),
    [anon_sym_gte] = ACTIONS(564),
    [anon_sym_BANG] = ACTIONS(564),
    [anon_sym_AMP_AMP] = ACTIONS(567),
    [anon_sym_PIPE_PIPE] = ACTIONS(567),
    [anon_sym_QMARK_QMARK] = ACTIONS(567),
    [anon_sym_EQ] = ACTIONS(564),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(570),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(570),
    [sym_number] = ACTIONS(573),
    [anon_sym_true] = ACTIONS(576),
    [anon_sym_LBRACK] = ACTIONS(579),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(943),
    [anon_sym_DOT] = ACTIONS(585),
  },
  [225] = {
    [sym_group] = STATE(276),
    [aux_sym_top_level_repeat1] = STATE(300),
    [anon_sym_LBRACE] = ACTIONS(506),
    [anon_sym_LPAREN] = ACTIONS(506),
    [anon_sym_using] = ACTIONS(508),
    [anon_sym_is] = ACTIONS(508),
    [anon_sym_COMMA] = ACTIONS(506),
    [anon_sym_DOT_DOT] = ACTIONS(508),
    [anon_sym_DOT_DOT_LT] = ACTIONS(506),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(506),
    [anon_sym_COLON] = ACTIONS(506),
    [anon_sym_STAR] = ACTIONS(506),
    [anon_sym_PLUS] = ACTIONS(506),
    [anon_sym_SLASH] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [anon_sym_PERCENT] = ACTIONS(506),
    [anon_sym_EQ_EQ] = ACTIONS(506),
    [anon_sym_BANG_EQ] = ACTIONS(506),
    [anon_sym_LT] = ACTIONS(508),
    [anon_sym_LT_EQ] = ACTIONS(506),
    [anon_sym_lt] = ACTIONS(508),
    [anon_sym_lte] = ACTIONS(508),
    [anon_sym_gt] = ACTIONS(508),
    [anon_sym_gte] = ACTIONS(508),
    [anon_sym_BANG] = ACTIONS(508),
    [anon_sym_AMP_AMP] = ACTIONS(506),
    [anon_sym_PIPE_PIPE] = ACTIONS(506),
    [anon_sym_QMARK_QMARK] = ACTIONS(506),
    [anon_sym_EQ] = ACTIONS(508),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(506),
    [sym_number] = ACTIONS(508),
    [anon_sym_true] = ACTIONS(508),
    [anon_sym_LBRACK] = ACTIONS(506),
    [anon_sym_RBRACK] = ACTIONS(506),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(508),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(417),
    [anon_sym_DOT] = ACTIONS(508),
  },
  [226] = {
    [anon_sym_LBRACE] = ACTIONS(946),
    [anon_sym_LPAREN] = ACTIONS(946),
    [anon_sym_using] = ACTIONS(948),
    [anon_sym_is] = ACTIONS(948),
    [anon_sym_COMMA] = ACTIONS(946),
    [anon_sym_DOT_DOT] = ACTIONS(948),
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
    [anon_sym_LT] = ACTIONS(948),
    [anon_sym_LT_EQ] = ACTIONS(946),
    [anon_sym_lt] = ACTIONS(948),
    [anon_sym_lte] = ACTIONS(948),
    [anon_sym_gt] = ACTIONS(948),
    [anon_sym_gte] = ACTIONS(948),
    [anon_sym_BANG] = ACTIONS(948),
    [anon_sym_AMP_AMP] = ACTIONS(946),
    [anon_sym_PIPE_PIPE] = ACTIONS(946),
    [anon_sym_QMARK_QMARK] = ACTIONS(946),
    [anon_sym_EQ] = ACTIONS(948),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(946),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(946),
    [sym_number] = ACTIONS(948),
    [anon_sym_true] = ACTIONS(948),
    [anon_sym_LBRACK] = ACTIONS(946),
    [anon_sym_RBRACK] = ACTIONS(946),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(948),
    [anon_sym_DOT] = ACTIONS(948),
  },
  [227] = {
    [sym_type] = STATE(301),
    [sym_group] = STATE(81),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat2] = STATE(301),
    [anon_sym_LBRACE] = ACTIONS(514),
    [anon_sym_LPAREN] = ACTIONS(514),
    [anon_sym_using] = ACTIONS(516),
    [anon_sym_is] = ACTIONS(516),
    [anon_sym_COMMA] = ACTIONS(514),
    [anon_sym_DOT_DOT] = ACTIONS(516),
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
    [anon_sym_LT] = ACTIONS(516),
    [anon_sym_LT_EQ] = ACTIONS(514),
    [anon_sym_lt] = ACTIONS(516),
    [anon_sym_lte] = ACTIONS(516),
    [anon_sym_gt] = ACTIONS(516),
    [anon_sym_gte] = ACTIONS(516),
    [anon_sym_BANG] = ACTIONS(516),
    [anon_sym_AMP_AMP] = ACTIONS(514),
    [anon_sym_PIPE_PIPE] = ACTIONS(514),
    [anon_sym_QMARK_QMARK] = ACTIONS(514),
    [anon_sym_EQ] = ACTIONS(516),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(514),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(514),
    [sym_number] = ACTIONS(516),
    [anon_sym_true] = ACTIONS(516),
    [anon_sym_LBRACK] = ACTIONS(514),
    [anon_sym_RBRACK] = ACTIONS(514),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(516),
    [anon_sym_DOT] = ACTIONS(516),
  },
  [228] = {
    [sym_type] = STATE(302),
    [sym_group] = STATE(81),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat2] = STATE(302),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_using] = ACTIONS(516),
    [anon_sym_is] = ACTIONS(516),
    [anon_sym_COMMA] = ACTIONS(514),
    [anon_sym_DOT_DOT] = ACTIONS(516),
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
    [anon_sym_LT] = ACTIONS(516),
    [anon_sym_LT_EQ] = ACTIONS(514),
    [anon_sym_lt] = ACTIONS(516),
    [anon_sym_lte] = ACTIONS(516),
    [anon_sym_gt] = ACTIONS(516),
    [anon_sym_gte] = ACTIONS(516),
    [anon_sym_BANG] = ACTIONS(516),
    [anon_sym_AMP_AMP] = ACTIONS(514),
    [anon_sym_PIPE_PIPE] = ACTIONS(514),
    [anon_sym_QMARK_QMARK] = ACTIONS(514),
    [anon_sym_EQ] = ACTIONS(516),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(149),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_RBRACK] = ACTIONS(514),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(217),
    [anon_sym_DOT] = ACTIONS(159),
  },
  [229] = {
    [sym_type] = STATE(229),
    [sym_group] = STATE(81),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat1] = STATE(229),
    [anon_sym_LBRACE] = ACTIONS(782),
    [anon_sym_LPAREN] = ACTIONS(785),
    [anon_sym_using] = ACTIONS(521),
    [anon_sym_is] = ACTIONS(521),
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_DOT_DOT] = ACTIONS(521),
    [anon_sym_DOT_DOT_LT] = ACTIONS(526),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(526),
    [anon_sym_COLON] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(526),
    [anon_sym_BANG_EQ] = ACTIONS(526),
    [anon_sym_LT] = ACTIONS(521),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [anon_sym_lt] = ACTIONS(521),
    [anon_sym_lte] = ACTIONS(521),
    [anon_sym_gt] = ACTIONS(521),
    [anon_sym_gte] = ACTIONS(521),
    [anon_sym_BANG] = ACTIONS(521),
    [anon_sym_AMP_AMP] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(526),
    [anon_sym_QMARK_QMARK] = ACTIONS(526),
    [anon_sym_EQ] = ACTIONS(521),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(788),
    [sym_number] = ACTIONS(791),
    [anon_sym_true] = ACTIONS(794),
    [anon_sym_LBRACK] = ACTIONS(797),
    [anon_sym_RBRACK] = ACTIONS(526),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(950),
    [anon_sym_DOT] = ACTIONS(803),
  },
  [230] = {
    [anon_sym_LBRACE] = ACTIONS(953),
    [anon_sym_as] = ACTIONS(955),
    [anon_sym_QMARK] = ACTIONS(955),
    [anon_sym_LPAREN] = ACTIONS(953),
    [anon_sym_RPAREN] = ACTIONS(953),
    [anon_sym_using] = ACTIONS(955),
    [anon_sym_is] = ACTIONS(955),
    [anon_sym_COMMA] = ACTIONS(953),
    [anon_sym_DOT_DOT] = ACTIONS(955),
    [anon_sym_DOT_DOT_LT] = ACTIONS(953),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(953),
    [anon_sym_COLON] = ACTIONS(953),
    [anon_sym_STAR] = ACTIONS(953),
    [anon_sym_PLUS] = ACTIONS(953),
    [anon_sym_SLASH] = ACTIONS(953),
    [anon_sym_DASH] = ACTIONS(953),
    [anon_sym_PERCENT] = ACTIONS(953),
    [anon_sym_EQ_EQ] = ACTIONS(953),
    [anon_sym_BANG_EQ] = ACTIONS(953),
    [anon_sym_LT] = ACTIONS(955),
    [anon_sym_LT_EQ] = ACTIONS(953),
    [anon_sym_lt] = ACTIONS(955),
    [anon_sym_lte] = ACTIONS(955),
    [anon_sym_gt] = ACTIONS(955),
    [anon_sym_gte] = ACTIONS(955),
    [anon_sym_BANG] = ACTIONS(955),
    [anon_sym_AMP_AMP] = ACTIONS(953),
    [anon_sym_PIPE_PIPE] = ACTIONS(953),
    [anon_sym_QMARK_QMARK] = ACTIONS(953),
    [anon_sym_EQ] = ACTIONS(955),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(953),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(953),
    [sym_number] = ACTIONS(955),
    [anon_sym_true] = ACTIONS(955),
    [anon_sym_LBRACK] = ACTIONS(953),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(955),
    [anon_sym_DOT] = ACTIONS(955),
    [anon_sym_GT] = ACTIONS(953),
  },
  [231] = {
    [sym_expression] = STATE(120),
    [sym_type] = STATE(122),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(121),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat1] = STATE(122),
    [aux_sym_sequence_repeat1] = STATE(231),
    [anon_sym_LBRACE] = ACTIONS(957),
    [anon_sym_LPAREN] = ACTIONS(960),
    [anon_sym_using] = ACTIONS(963),
    [anon_sym_is] = ACTIONS(963),
    [anon_sym_COMMA] = ACTIONS(966),
    [anon_sym_DOT_DOT] = ACTIONS(963),
    [anon_sym_DOT_DOT_LT] = ACTIONS(966),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(966),
    [anon_sym_COLON] = ACTIONS(966),
    [anon_sym_STAR] = ACTIONS(966),
    [anon_sym_PLUS] = ACTIONS(966),
    [anon_sym_SLASH] = ACTIONS(966),
    [anon_sym_DASH] = ACTIONS(966),
    [anon_sym_PERCENT] = ACTIONS(966),
    [anon_sym_EQ_EQ] = ACTIONS(966),
    [anon_sym_BANG_EQ] = ACTIONS(966),
    [anon_sym_LT] = ACTIONS(963),
    [anon_sym_LT_EQ] = ACTIONS(966),
    [anon_sym_lt] = ACTIONS(963),
    [anon_sym_lte] = ACTIONS(963),
    [anon_sym_gt] = ACTIONS(963),
    [anon_sym_gte] = ACTIONS(963),
    [anon_sym_BANG] = ACTIONS(963),
    [anon_sym_AMP_AMP] = ACTIONS(966),
    [anon_sym_PIPE_PIPE] = ACTIONS(966),
    [anon_sym_QMARK_QMARK] = ACTIONS(966),
    [anon_sym_EQ] = ACTIONS(963),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(969),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(969),
    [sym_number] = ACTIONS(972),
    [anon_sym_true] = ACTIONS(975),
    [anon_sym_LBRACK] = ACTIONS(978),
    [anon_sym_RBRACK] = ACTIONS(946),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(981),
    [anon_sym_DOT] = ACTIONS(984),
  },
  [232] = {
    [anon_sym_LBRACE] = ACTIONS(987),
    [anon_sym_as] = ACTIONS(989),
    [anon_sym_QMARK] = ACTIONS(989),
    [anon_sym_LPAREN] = ACTIONS(987),
    [anon_sym_RPAREN] = ACTIONS(987),
    [anon_sym_using] = ACTIONS(989),
    [anon_sym_is] = ACTIONS(989),
    [anon_sym_COMMA] = ACTIONS(987),
    [anon_sym_DOT_DOT] = ACTIONS(989),
    [anon_sym_DOT_DOT_LT] = ACTIONS(987),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(987),
    [anon_sym_COLON] = ACTIONS(987),
    [anon_sym_STAR] = ACTIONS(987),
    [anon_sym_PLUS] = ACTIONS(987),
    [anon_sym_SLASH] = ACTIONS(987),
    [anon_sym_DASH] = ACTIONS(987),
    [anon_sym_PERCENT] = ACTIONS(987),
    [anon_sym_EQ_EQ] = ACTIONS(987),
    [anon_sym_BANG_EQ] = ACTIONS(987),
    [anon_sym_LT] = ACTIONS(989),
    [anon_sym_LT_EQ] = ACTIONS(987),
    [anon_sym_lt] = ACTIONS(989),
    [anon_sym_lte] = ACTIONS(989),
    [anon_sym_gt] = ACTIONS(989),
    [anon_sym_gte] = ACTIONS(989),
    [anon_sym_BANG] = ACTIONS(989),
    [anon_sym_AMP_AMP] = ACTIONS(987),
    [anon_sym_PIPE_PIPE] = ACTIONS(987),
    [anon_sym_QMARK_QMARK] = ACTIONS(987),
    [anon_sym_EQ] = ACTIONS(989),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(987),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(987),
    [sym_number] = ACTIONS(989),
    [anon_sym_true] = ACTIONS(989),
    [anon_sym_LBRACK] = ACTIONS(987),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(989),
    [anon_sym_DOT] = ACTIONS(989),
    [anon_sym_GT] = ACTIONS(987),
  },
  [233] = {
    [aux_sym_top_level_repeat1] = STATE(233),
    [anon_sym_LBRACE] = ACTIONS(991),
    [anon_sym_as] = ACTIONS(993),
    [anon_sym_QMARK] = ACTIONS(993),
    [anon_sym_LPAREN] = ACTIONS(991),
    [anon_sym_using] = ACTIONS(993),
    [anon_sym_is] = ACTIONS(993),
    [anon_sym_COMMA] = ACTIONS(991),
    [anon_sym_DOT_DOT] = ACTIONS(993),
    [anon_sym_DOT_DOT_LT] = ACTIONS(991),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(991),
    [anon_sym_COLON] = ACTIONS(991),
    [anon_sym_STAR] = ACTIONS(991),
    [anon_sym_PLUS] = ACTIONS(991),
    [anon_sym_SLASH] = ACTIONS(991),
    [anon_sym_DASH] = ACTIONS(991),
    [anon_sym_PERCENT] = ACTIONS(991),
    [anon_sym_EQ_EQ] = ACTIONS(991),
    [anon_sym_BANG_EQ] = ACTIONS(991),
    [anon_sym_LT] = ACTIONS(993),
    [anon_sym_LT_EQ] = ACTIONS(991),
    [anon_sym_lt] = ACTIONS(993),
    [anon_sym_lte] = ACTIONS(993),
    [anon_sym_gt] = ACTIONS(993),
    [anon_sym_gte] = ACTIONS(993),
    [anon_sym_BANG] = ACTIONS(993),
    [anon_sym_AMP_AMP] = ACTIONS(991),
    [anon_sym_PIPE_PIPE] = ACTIONS(991),
    [anon_sym_QMARK_QMARK] = ACTIONS(991),
    [anon_sym_EQ] = ACTIONS(993),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(991),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(991),
    [sym_number] = ACTIONS(993),
    [anon_sym_true] = ACTIONS(993),
    [anon_sym_LBRACK] = ACTIONS(991),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(995),
    [anon_sym_DOT] = ACTIONS(993),
    [anon_sym_GT] = ACTIONS(991),
  },
  [234] = {
    [sym_type] = STATE(215),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(215),
    [anon_sym_LBRACE] = ACTIONS(998),
    [anon_sym_as] = ACTIONS(1000),
    [anon_sym_QMARK] = ACTIONS(1000),
    [anon_sym_LPAREN] = ACTIONS(998),
    [anon_sym_using] = ACTIONS(1000),
    [anon_sym_is] = ACTIONS(1000),
    [anon_sym_COMMA] = ACTIONS(998),
    [anon_sym_DOT_DOT] = ACTIONS(1000),
    [anon_sym_DOT_DOT_LT] = ACTIONS(998),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(998),
    [anon_sym_COLON] = ACTIONS(998),
    [anon_sym_STAR] = ACTIONS(998),
    [anon_sym_PLUS] = ACTIONS(998),
    [anon_sym_SLASH] = ACTIONS(998),
    [anon_sym_DASH] = ACTIONS(998),
    [anon_sym_PERCENT] = ACTIONS(998),
    [anon_sym_EQ_EQ] = ACTIONS(998),
    [anon_sym_BANG_EQ] = ACTIONS(998),
    [anon_sym_LT] = ACTIONS(1000),
    [anon_sym_LT_EQ] = ACTIONS(998),
    [anon_sym_lt] = ACTIONS(1000),
    [anon_sym_lte] = ACTIONS(1000),
    [anon_sym_gt] = ACTIONS(1000),
    [anon_sym_gte] = ACTIONS(1000),
    [anon_sym_BANG] = ACTIONS(1000),
    [anon_sym_AMP_AMP] = ACTIONS(998),
    [anon_sym_PIPE_PIPE] = ACTIONS(998),
    [anon_sym_QMARK_QMARK] = ACTIONS(998),
    [anon_sym_EQ] = ACTIONS(1000),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(998),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(998),
    [sym_number] = ACTIONS(1000),
    [anon_sym_true] = ACTIONS(1000),
    [anon_sym_LBRACK] = ACTIONS(998),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1000),
    [anon_sym_DOT] = ACTIONS(1000),
    [anon_sym_GT] = ACTIONS(998),
  },
  [235] = {
    [sym_type] = STATE(215),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(215),
    [anon_sym_LBRACE] = ACTIONS(1002),
    [anon_sym_as] = ACTIONS(1004),
    [anon_sym_QMARK] = ACTIONS(1004),
    [anon_sym_LPAREN] = ACTIONS(1002),
    [anon_sym_using] = ACTIONS(1004),
    [anon_sym_is] = ACTIONS(1004),
    [anon_sym_COMMA] = ACTIONS(1002),
    [anon_sym_DOT_DOT] = ACTIONS(1004),
    [anon_sym_DOT_DOT_LT] = ACTIONS(1002),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(1002),
    [anon_sym_COLON] = ACTIONS(1002),
    [anon_sym_STAR] = ACTIONS(1002),
    [anon_sym_PLUS] = ACTIONS(1002),
    [anon_sym_SLASH] = ACTIONS(1002),
    [anon_sym_DASH] = ACTIONS(1002),
    [anon_sym_PERCENT] = ACTIONS(1002),
    [anon_sym_EQ_EQ] = ACTIONS(1002),
    [anon_sym_BANG_EQ] = ACTIONS(1002),
    [anon_sym_LT] = ACTIONS(1004),
    [anon_sym_LT_EQ] = ACTIONS(1002),
    [anon_sym_lt] = ACTIONS(1004),
    [anon_sym_lte] = ACTIONS(1004),
    [anon_sym_gt] = ACTIONS(1004),
    [anon_sym_gte] = ACTIONS(1004),
    [anon_sym_BANG] = ACTIONS(1004),
    [anon_sym_AMP_AMP] = ACTIONS(1002),
    [anon_sym_PIPE_PIPE] = ACTIONS(1002),
    [anon_sym_QMARK_QMARK] = ACTIONS(1002),
    [anon_sym_EQ] = ACTIONS(1004),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1002),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1002),
    [sym_number] = ACTIONS(1004),
    [anon_sym_true] = ACTIONS(1004),
    [anon_sym_LBRACK] = ACTIONS(1002),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1004),
    [anon_sym_DOT] = ACTIONS(1004),
    [anon_sym_GT] = ACTIONS(1002),
  },
  [236] = {
    [sym_directive] = STATE(239),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_elseif] = STATE(239),
    [sym_if_middle] = STATE(303),
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
    [aux_sym_if_repeat1] = STATE(303),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1006),
    [anon_sym_LT_POUNDelseif] = ACTIONS(550),
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
  [237] = {
    [ts_builtin_sym_end] = ACTIONS(1008),
    [sym_comment] = ACTIONS(1008),
    [anon_sym_DOLLAR] = ACTIONS(1008),
    [anon_sym_LT_AT] = ACTIONS(1008),
    [anon_sym_LT_POUND] = ACTIONS(1010),
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
  [238] = {
    [sym_parameter_group] = STATE(305),
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
    [aux_sym_group_repeat1] = STATE(305),
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
    [anon_sym_GT] = ACTIONS(1012),
  },
  [239] = {
    [anon_sym_LT_AT] = ACTIONS(1014),
    [anon_sym_LT_POUND] = ACTIONS(1016),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1014),
    [anon_sym_LT_POUNDif] = ACTIONS(1014),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1014),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1014),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1014),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1014),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1014),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1014),
    [sym_fallback] = ACTIONS(1014),
    [sym_flush] = ACTIONS(1014),
    [anon_sym_LT_POUNDftl] = ACTIONS(1014),
    [anon_sym_LT_POUNDimport] = ACTIONS(1014),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1014),
    [sym_lt] = ACTIONS(1014),
    [sym_nt] = ACTIONS(1014),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1014),
    [sym_rt] = ACTIONS(1014),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1014),
    [sym_stop] = ACTIONS(1014),
    [sym_t] = ACTIONS(1014),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1014),
    [anon_sym_LT_POUNDassign] = ACTIONS(1014),
    [sym_end_assign] = ACTIONS(1014),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1014),
    [sym_end_global] = ACTIONS(1014),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1014),
    [sym_end_local] = ACTIONS(1014),
  },
  [240] = {
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1018),
  },
  [241] = {
    [sym_directive] = STATE(239),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_if_else] = STATE(307),
    [sym_elseif] = STATE(239),
    [sym_if_middle] = STATE(308),
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
    [aux_sym_if_repeat1] = STATE(308),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(546),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1018),
    [anon_sym_LT_POUNDelseif] = ACTIONS(550),
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
  [242] = {
    [anon_sym_LBRACE] = ACTIONS(461),
    [anon_sym_LPAREN] = ACTIONS(461),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(461),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(461),
    [sym_number] = ACTIONS(463),
    [anon_sym_true] = ACTIONS(463),
    [anon_sym_LBRACK] = ACTIONS(461),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(463),
    [anon_sym_DOT] = ACTIONS(461),
    [anon_sym_GT] = ACTIONS(461),
  },
  [243] = {
    [sym_expression] = STATE(184),
    [sym_type] = STATE(88),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(86),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_interpolation_repeat1] = STATE(184),
    [aux_sym_as_expression_repeat1] = STATE(88),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(1020),
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
  [244] = {
    [sym_parameter_group] = STATE(224),
    [sym_as_expression] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_type] = STATE(115),
    [sym_built_in] = STATE(39),
    [sym_group] = STATE(34),
    [sym_operator] = STATE(114),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat1] = STATE(115),
    [aux_sym_group_repeat1] = STATE(224),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(195),
    [anon_sym_QMARK] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(1022),
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
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(79),
  },
  [245] = {
    [anon_sym_LBRACE] = ACTIONS(481),
    [anon_sym_LPAREN] = ACTIONS(481),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(481),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(481),
    [sym_number] = ACTIONS(483),
    [anon_sym_true] = ACTIONS(483),
    [anon_sym_LBRACK] = ACTIONS(481),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(483),
    [anon_sym_DOT] = ACTIONS(481),
    [anon_sym_GT] = ACTIONS(481),
  },
  [246] = {
    [anon_sym_LBRACE] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(485),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(485),
    [sym_number] = ACTIONS(487),
    [anon_sym_true] = ACTIONS(487),
    [anon_sym_LBRACK] = ACTIONS(485),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(487),
    [anon_sym_DOT] = ACTIONS(485),
    [anon_sym_GT] = ACTIONS(485),
  },
  [247] = {
    [sym_expression] = STATE(120),
    [sym_type] = STATE(122),
    [sym_group] = STATE(81),
    [sym_operator] = STATE(121),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat1] = STATE(122),
    [aux_sym_sequence_repeat1] = STATE(231),
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
    [anon_sym_RBRACK] = ACTIONS(1024),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(217),
    [anon_sym_DOT] = ACTIONS(159),
  },
  [248] = {
    [anon_sym_LBRACE] = ACTIONS(498),
    [anon_sym_LPAREN] = ACTIONS(498),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(498),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(498),
    [sym_number] = ACTIONS(500),
    [anon_sym_true] = ACTIONS(500),
    [anon_sym_LBRACK] = ACTIONS(498),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(500),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(498),
    [anon_sym_DOT] = ACTIONS(500),
    [anon_sym_GT] = ACTIONS(498),
  },
  [249] = {
    [anon_sym_LBRACE] = ACTIONS(502),
    [anon_sym_LPAREN] = ACTIONS(502),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(502),
    [sym_number] = ACTIONS(504),
    [anon_sym_true] = ACTIONS(504),
    [anon_sym_LBRACK] = ACTIONS(502),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(504),
    [anon_sym_DOT] = ACTIONS(502),
    [anon_sym_GT] = ACTIONS(502),
  },
  [250] = {
    [sym_group] = STATE(312),
    [aux_sym_top_level_repeat1] = STATE(313),
    [anon_sym_LBRACE] = ACTIONS(506),
    [anon_sym_LPAREN] = ACTIONS(506),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(506),
    [sym_number] = ACTIONS(508),
    [anon_sym_true] = ACTIONS(508),
    [anon_sym_LBRACK] = ACTIONS(506),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(508),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(596),
    [anon_sym_DOT] = ACTIONS(508),
    [anon_sym_GT] = ACTIONS(506),
  },
  [251] = {
    [anon_sym_LBRACE] = ACTIONS(510),
    [anon_sym_LPAREN] = ACTIONS(510),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(510),
    [sym_number] = ACTIONS(512),
    [anon_sym_true] = ACTIONS(512),
    [anon_sym_LBRACK] = ACTIONS(510),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(512),
    [anon_sym_DOT] = ACTIONS(510),
    [anon_sym_GT] = ACTIONS(510),
  },
  [252] = {
    [sym_type] = STATE(252),
    [sym_group] = STATE(137),
    [sym_string] = STATE(137),
    [sym_boolean] = STATE(137),
    [sym_sequence] = STATE(137),
    [sym_hash] = STATE(137),
    [sym_top_level] = STATE(137),
    [sym_spec_var] = STATE(137),
    [aux_sym_as_expression_repeat2] = STATE(252),
    [anon_sym_LBRACE] = ACTIONS(1026),
    [anon_sym_LPAREN] = ACTIONS(1029),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1032),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1032),
    [sym_number] = ACTIONS(1035),
    [anon_sym_true] = ACTIONS(1038),
    [anon_sym_LBRACK] = ACTIONS(1041),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1044),
    [anon_sym_DOT] = ACTIONS(1047),
    [anon_sym_GT] = ACTIONS(906),
  },
  [253] = {
    [sym_group] = STATE(232),
    [aux_sym_top_level_repeat1] = STATE(314),
    [anon_sym_LPAREN] = ACTIONS(506),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(506),
  },
  [254] = {
    [aux_sym_top_level_repeat1] = STATE(254),
    [anon_sym_LBRACE] = ACTIONS(991),
    [anon_sym_as] = ACTIONS(993),
    [anon_sym_LPAREN] = ACTIONS(991),
    [anon_sym_using] = ACTIONS(993),
    [anon_sym_is] = ACTIONS(993),
    [anon_sym_COMMA] = ACTIONS(991),
    [anon_sym_DOT_DOT] = ACTIONS(993),
    [anon_sym_DOT_DOT_LT] = ACTIONS(991),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(991),
    [anon_sym_COLON] = ACTIONS(991),
    [anon_sym_STAR] = ACTIONS(991),
    [anon_sym_PLUS] = ACTIONS(991),
    [anon_sym_SLASH] = ACTIONS(991),
    [anon_sym_DASH] = ACTIONS(991),
    [anon_sym_PERCENT] = ACTIONS(991),
    [anon_sym_EQ_EQ] = ACTIONS(991),
    [anon_sym_BANG_EQ] = ACTIONS(991),
    [anon_sym_LT] = ACTIONS(993),
    [anon_sym_LT_EQ] = ACTIONS(991),
    [anon_sym_lt] = ACTIONS(993),
    [anon_sym_lte] = ACTIONS(993),
    [anon_sym_gt] = ACTIONS(993),
    [anon_sym_gte] = ACTIONS(993),
    [anon_sym_BANG] = ACTIONS(993),
    [anon_sym_AMP_AMP] = ACTIONS(991),
    [anon_sym_PIPE_PIPE] = ACTIONS(991),
    [anon_sym_QMARK_QMARK] = ACTIONS(991),
    [anon_sym_EQ] = ACTIONS(993),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(991),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(991),
    [sym_number] = ACTIONS(993),
    [anon_sym_true] = ACTIONS(993),
    [anon_sym_LBRACK] = ACTIONS(991),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(995),
    [anon_sym_DOT] = ACTIONS(993),
    [anon_sym_GT] = ACTIONS(991),
  },
  [255] = {
    [ts_builtin_sym_end] = ACTIONS(1050),
    [sym_comment] = ACTIONS(1050),
    [anon_sym_DOLLAR] = ACTIONS(1050),
    [anon_sym_LT_AT] = ACTIONS(1050),
    [anon_sym_LT_POUND] = ACTIONS(1052),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1050),
    [sym_break] = ACTIONS(1050),
    [sym_continue] = ACTIONS(1050),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1050),
    [anon_sym_LT_POUNDitems] = ACTIONS(1050),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1050),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1050),
    [anon_sym_LT_POUNDif] = ACTIONS(1050),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1050),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1050),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1050),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1050),
    [anon_sym_LT_POUNDcase] = ACTIONS(1050),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1050),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1050),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1050),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1050),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1050),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1050),
    [anon_sym_LT_POUNDnested] = ACTIONS(1050),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1050),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1050),
    [sym_recover] = ACTIONS(1050),
    [sym_fallback] = ACTIONS(1050),
    [sym_flush] = ACTIONS(1050),
    [anon_sym_LT_POUNDftl] = ACTIONS(1050),
    [anon_sym_LT_POUNDimport] = ACTIONS(1050),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1050),
    [sym_lt] = ACTIONS(1050),
    [sym_nt] = ACTIONS(1050),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1050),
    [sym_rt] = ACTIONS(1050),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1050),
    [sym_stop] = ACTIONS(1050),
    [sym_t] = ACTIONS(1050),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1050),
    [anon_sym_LT_POUNDassign] = ACTIONS(1050),
    [sym_end_assign] = ACTIONS(1050),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1050),
    [sym_end_global] = ACTIONS(1050),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1050),
    [sym_end_local] = ACTIONS(1050),
  },
  [256] = {
    [sym_parameter_group] = STATE(315),
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
  [257] = {
    [sym_directive] = STATE(316),
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
    [aux_sym_case_repeat1] = STATE(316),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1054),
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
  [258] = {
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1056),
    [anon_sym_LT_POUNDcase] = ACTIONS(1056),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1056),
  },
  [259] = {
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1058),
  },
  [260] = {
    [sym_case] = STATE(258),
    [sym_default] = STATE(318),
    [sym_switch_middle] = STATE(319),
    [aux_sym_switch_repeat1] = STATE(319),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1058),
    [anon_sym_LT_POUNDcase] = ACTIONS(604),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(606),
  },
  [261] = {
    [sym_type] = STATE(252),
    [sym_group] = STATE(137),
    [sym_string] = STATE(137),
    [sym_boolean] = STATE(137),
    [sym_sequence] = STATE(137),
    [sym_hash] = STATE(137),
    [sym_top_level] = STATE(137),
    [sym_spec_var] = STATE(137),
    [aux_sym_as_expression_repeat2] = STATE(252),
    [anon_sym_LBRACE] = ACTIONS(241),
    [anon_sym_LPAREN] = ACTIONS(243),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(245),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(245),
    [sym_number] = ACTIONS(247),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_LBRACK] = ACTIONS(251),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(253),
    [anon_sym_DOT] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(998),
  },
  [262] = {
    [sym_type] = STATE(252),
    [sym_group] = STATE(137),
    [sym_string] = STATE(137),
    [sym_boolean] = STATE(137),
    [sym_sequence] = STATE(137),
    [sym_hash] = STATE(137),
    [sym_top_level] = STATE(137),
    [sym_spec_var] = STATE(137),
    [aux_sym_as_expression_repeat2] = STATE(252),
    [anon_sym_LBRACE] = ACTIONS(241),
    [anon_sym_LPAREN] = ACTIONS(243),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(245),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(245),
    [sym_number] = ACTIONS(247),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_LBRACK] = ACTIONS(251),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(253),
    [anon_sym_DOT] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(1002),
  },
  [263] = {
    [anon_sym_LT_AT] = ACTIONS(1060),
    [anon_sym_LT_POUND] = ACTIONS(1062),
    [anon_sym_LT_POUNDif] = ACTIONS(1060),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1060),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1060),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1060),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1060),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1060),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1060),
    [anon_sym_LT_POUNDnested] = ACTIONS(1060),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1060),
    [sym_fallback] = ACTIONS(1060),
    [sym_flush] = ACTIONS(1060),
    [anon_sym_LT_POUNDftl] = ACTIONS(1060),
    [anon_sym_LT_POUNDimport] = ACTIONS(1060),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1060),
    [sym_lt] = ACTIONS(1060),
    [sym_nt] = ACTIONS(1060),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1060),
    [sym_rt] = ACTIONS(1060),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1060),
    [sym_stop] = ACTIONS(1060),
    [sym_t] = ACTIONS(1060),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1060),
    [anon_sym_LT_POUNDassign] = ACTIONS(1060),
    [sym_end_assign] = ACTIONS(1060),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1060),
    [sym_end_global] = ACTIONS(1060),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1060),
    [sym_end_local] = ACTIONS(1060),
  },
  [264] = {
    [anon_sym_GT] = ACTIONS(1064),
  },
  [265] = {
    [ts_builtin_sym_end] = ACTIONS(1066),
    [sym_comment] = ACTIONS(1066),
    [anon_sym_DOLLAR] = ACTIONS(1066),
    [anon_sym_LT_AT] = ACTIONS(1066),
    [anon_sym_LT_POUND] = ACTIONS(1068),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1066),
    [sym_break] = ACTIONS(1066),
    [sym_continue] = ACTIONS(1066),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1066),
    [anon_sym_LT_POUNDitems] = ACTIONS(1066),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1066),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1066),
    [anon_sym_LT_POUNDif] = ACTIONS(1066),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1066),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1066),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1066),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1066),
    [anon_sym_LT_POUNDcase] = ACTIONS(1066),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1066),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1066),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1066),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1066),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1066),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1066),
    [anon_sym_LT_POUNDnested] = ACTIONS(1066),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1066),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1066),
    [sym_recover] = ACTIONS(1066),
    [sym_fallback] = ACTIONS(1066),
    [sym_flush] = ACTIONS(1066),
    [anon_sym_LT_POUNDftl] = ACTIONS(1066),
    [anon_sym_LT_POUNDimport] = ACTIONS(1066),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1066),
    [sym_lt] = ACTIONS(1066),
    [sym_nt] = ACTIONS(1066),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1066),
    [sym_rt] = ACTIONS(1066),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1066),
    [sym_stop] = ACTIONS(1066),
    [sym_t] = ACTIONS(1066),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1066),
    [anon_sym_LT_POUNDassign] = ACTIONS(1066),
    [sym_end_assign] = ACTIONS(1066),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1066),
    [sym_end_global] = ACTIONS(1066),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1066),
    [sym_end_local] = ACTIONS(1066),
  },
  [266] = {
    [sym_directive] = STATE(153),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_function_middle] = STATE(266),
    [sym_return] = STATE(153),
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
    [aux_sym_function_repeat1] = STATE(266),
    [anon_sym_LT_AT] = ACTIONS(1070),
    [anon_sym_LT_POUND] = ACTIONS(1073),
    [anon_sym_LT_POUNDif] = ACTIONS(1076),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1079),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1082),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1085),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1087),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1090),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1093),
    [sym_fallback] = ACTIONS(1096),
    [sym_flush] = ACTIONS(1096),
    [anon_sym_LT_POUNDftl] = ACTIONS(1099),
    [anon_sym_LT_POUNDimport] = ACTIONS(1102),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1105),
    [sym_lt] = ACTIONS(1096),
    [sym_nt] = ACTIONS(1096),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1108),
    [sym_rt] = ACTIONS(1096),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1111),
    [sym_stop] = ACTIONS(1096),
    [sym_t] = ACTIONS(1096),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1114),
    [anon_sym_LT_POUNDassign] = ACTIONS(1117),
    [sym_end_assign] = ACTIONS(1120),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1123),
    [sym_end_global] = ACTIONS(1126),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1129),
    [sym_end_local] = ACTIONS(1132),
  },
  [267] = {
    [sym_directive] = STATE(153),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_function_middle] = STATE(266),
    [sym_return] = STATE(153),
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
    [aux_sym_function_repeat1] = STATE(266),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1135),
    [anon_sym_LT_POUNDreturn] = ACTIONS(265),
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
  [268] = {
    [anon_sym_LT_AT] = ACTIONS(1137),
    [anon_sym_LT_POUND] = ACTIONS(1139),
    [anon_sym_LT_POUNDif] = ACTIONS(1137),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1137),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1137),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1137),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1137),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1137),
    [anon_sym_LT_POUNDnested] = ACTIONS(1137),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1137),
    [sym_fallback] = ACTIONS(1137),
    [sym_flush] = ACTIONS(1137),
    [anon_sym_LT_POUNDftl] = ACTIONS(1137),
    [anon_sym_LT_POUNDimport] = ACTIONS(1137),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1137),
    [sym_lt] = ACTIONS(1137),
    [sym_nt] = ACTIONS(1137),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1137),
    [sym_rt] = ACTIONS(1137),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1137),
    [sym_stop] = ACTIONS(1137),
    [sym_t] = ACTIONS(1137),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1137),
    [anon_sym_LT_POUNDassign] = ACTIONS(1137),
    [sym_end_assign] = ACTIONS(1137),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1137),
    [sym_end_global] = ACTIONS(1137),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1137),
    [sym_end_local] = ACTIONS(1137),
  },
  [269] = {
    [sym_parameter_group] = STATE(133),
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
    [aux_sym_group_repeat1] = STATE(133),
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
    [anon_sym_GT] = ACTIONS(1141),
  },
  [270] = {
    [ts_builtin_sym_end] = ACTIONS(1143),
    [sym_comment] = ACTIONS(1143),
    [anon_sym_DOLLAR] = ACTIONS(1143),
    [anon_sym_LT_AT] = ACTIONS(1143),
    [anon_sym_LT_POUND] = ACTIONS(1145),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1143),
    [sym_break] = ACTIONS(1143),
    [sym_continue] = ACTIONS(1143),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1143),
    [anon_sym_LT_POUNDitems] = ACTIONS(1143),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1143),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1143),
    [anon_sym_LT_POUNDif] = ACTIONS(1143),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1143),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1143),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1143),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1143),
    [anon_sym_LT_POUNDcase] = ACTIONS(1143),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1143),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1143),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1143),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1143),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1143),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1143),
    [anon_sym_LT_POUNDnested] = ACTIONS(1143),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1143),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1143),
    [sym_recover] = ACTIONS(1143),
    [sym_fallback] = ACTIONS(1143),
    [sym_flush] = ACTIONS(1143),
    [anon_sym_LT_POUNDftl] = ACTIONS(1143),
    [anon_sym_LT_POUNDimport] = ACTIONS(1143),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1143),
    [sym_lt] = ACTIONS(1143),
    [sym_nt] = ACTIONS(1143),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1143),
    [sym_rt] = ACTIONS(1143),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1143),
    [sym_stop] = ACTIONS(1143),
    [sym_t] = ACTIONS(1143),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1143),
    [anon_sym_LT_POUNDassign] = ACTIONS(1143),
    [sym_end_assign] = ACTIONS(1143),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1143),
    [sym_end_global] = ACTIONS(1143),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1143),
    [sym_end_local] = ACTIONS(1143),
  },
  [271] = {
    [sym_directive] = STATE(158),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_return] = STATE(158),
    [sym_macro] = STATE(10),
    [sym_macro_middle] = STATE(271),
    [sym_nested] = STATE(158),
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
    [aux_sym_macro_repeat1] = STATE(271),
    [anon_sym_LT_AT] = ACTIONS(1147),
    [anon_sym_LT_POUND] = ACTIONS(1150),
    [anon_sym_LT_POUNDif] = ACTIONS(1153),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1156),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1159),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1162),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1165),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1168),
    [anon_sym_LT_POUNDnested] = ACTIONS(1170),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1173),
    [sym_fallback] = ACTIONS(1176),
    [sym_flush] = ACTIONS(1176),
    [anon_sym_LT_POUNDftl] = ACTIONS(1179),
    [anon_sym_LT_POUNDimport] = ACTIONS(1182),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1185),
    [sym_lt] = ACTIONS(1176),
    [sym_nt] = ACTIONS(1176),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1188),
    [sym_rt] = ACTIONS(1176),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1191),
    [sym_stop] = ACTIONS(1176),
    [sym_t] = ACTIONS(1176),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1194),
    [anon_sym_LT_POUNDassign] = ACTIONS(1197),
    [sym_end_assign] = ACTIONS(1200),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1203),
    [sym_end_global] = ACTIONS(1206),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1209),
    [sym_end_local] = ACTIONS(1212),
  },
  [272] = {
    [sym_directive] = STATE(158),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_switch] = STATE(10),
    [sym_function] = STATE(10),
    [sym_return] = STATE(158),
    [sym_macro] = STATE(10),
    [sym_macro_middle] = STATE(271),
    [sym_nested] = STATE(158),
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
    [aux_sym_macro_repeat1] = STATE(271),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_POUNDfunction] = ACTIONS(19),
    [anon_sym_LT_POUNDreturn] = ACTIONS(265),
    [anon_sym_LT_POUNDmacro] = ACTIONS(21),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1215),
    [anon_sym_LT_POUNDnested] = ACTIONS(271),
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
    [anon_sym_LBRACE] = ACTIONS(894),
    [anon_sym_RBRACE] = ACTIONS(894),
    [anon_sym_LPAREN] = ACTIONS(894),
    [anon_sym_using] = ACTIONS(896),
    [anon_sym_is] = ACTIONS(896),
    [anon_sym_COMMA] = ACTIONS(894),
    [anon_sym_DOT_DOT] = ACTIONS(896),
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
    [anon_sym_LT] = ACTIONS(896),
    [anon_sym_LT_EQ] = ACTIONS(894),
    [anon_sym_lt] = ACTIONS(896),
    [anon_sym_lte] = ACTIONS(896),
    [anon_sym_gt] = ACTIONS(896),
    [anon_sym_gte] = ACTIONS(896),
    [anon_sym_BANG] = ACTIONS(896),
    [anon_sym_AMP_AMP] = ACTIONS(894),
    [anon_sym_PIPE_PIPE] = ACTIONS(894),
    [anon_sym_QMARK_QMARK] = ACTIONS(894),
    [anon_sym_EQ] = ACTIONS(896),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(894),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(894),
    [sym_number] = ACTIONS(896),
    [anon_sym_true] = ACTIONS(896),
    [anon_sym_LBRACK] = ACTIONS(894),
    [anon_sym_RBRACK] = ACTIONS(894),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(896),
    [anon_sym_DOT] = ACTIONS(896),
  },
  [274] = {
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
  [275] = {
    [anon_sym_LBRACE] = ACTIONS(953),
    [anon_sym_RBRACE] = ACTIONS(953),
    [anon_sym_LPAREN] = ACTIONS(953),
    [anon_sym_using] = ACTIONS(955),
    [anon_sym_is] = ACTIONS(955),
    [anon_sym_COMMA] = ACTIONS(953),
    [anon_sym_DOT_DOT] = ACTIONS(955),
    [anon_sym_DOT_DOT_LT] = ACTIONS(953),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(953),
    [anon_sym_COLON] = ACTIONS(953),
    [anon_sym_STAR] = ACTIONS(953),
    [anon_sym_PLUS] = ACTIONS(953),
    [anon_sym_SLASH] = ACTIONS(953),
    [anon_sym_DASH] = ACTIONS(953),
    [anon_sym_PERCENT] = ACTIONS(953),
    [anon_sym_EQ_EQ] = ACTIONS(953),
    [anon_sym_BANG_EQ] = ACTIONS(953),
    [anon_sym_LT] = ACTIONS(955),
    [anon_sym_LT_EQ] = ACTIONS(953),
    [anon_sym_lt] = ACTIONS(955),
    [anon_sym_lte] = ACTIONS(955),
    [anon_sym_gt] = ACTIONS(955),
    [anon_sym_gte] = ACTIONS(955),
    [anon_sym_BANG] = ACTIONS(955),
    [anon_sym_AMP_AMP] = ACTIONS(953),
    [anon_sym_PIPE_PIPE] = ACTIONS(953),
    [anon_sym_QMARK_QMARK] = ACTIONS(953),
    [anon_sym_EQ] = ACTIONS(955),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(953),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(953),
    [sym_number] = ACTIONS(955),
    [anon_sym_true] = ACTIONS(955),
    [anon_sym_LBRACK] = ACTIONS(953),
    [anon_sym_RBRACK] = ACTIONS(953),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(955),
    [anon_sym_DOT] = ACTIONS(955),
  },
  [276] = {
    [anon_sym_LBRACE] = ACTIONS(987),
    [anon_sym_RBRACE] = ACTIONS(987),
    [anon_sym_LPAREN] = ACTIONS(987),
    [anon_sym_using] = ACTIONS(989),
    [anon_sym_is] = ACTIONS(989),
    [anon_sym_COMMA] = ACTIONS(987),
    [anon_sym_DOT_DOT] = ACTIONS(989),
    [anon_sym_DOT_DOT_LT] = ACTIONS(987),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(987),
    [anon_sym_COLON] = ACTIONS(987),
    [anon_sym_STAR] = ACTIONS(987),
    [anon_sym_PLUS] = ACTIONS(987),
    [anon_sym_SLASH] = ACTIONS(987),
    [anon_sym_DASH] = ACTIONS(987),
    [anon_sym_PERCENT] = ACTIONS(987),
    [anon_sym_EQ_EQ] = ACTIONS(987),
    [anon_sym_BANG_EQ] = ACTIONS(987),
    [anon_sym_LT] = ACTIONS(989),
    [anon_sym_LT_EQ] = ACTIONS(987),
    [anon_sym_lt] = ACTIONS(989),
    [anon_sym_lte] = ACTIONS(989),
    [anon_sym_gt] = ACTIONS(989),
    [anon_sym_gte] = ACTIONS(989),
    [anon_sym_BANG] = ACTIONS(989),
    [anon_sym_AMP_AMP] = ACTIONS(987),
    [anon_sym_PIPE_PIPE] = ACTIONS(987),
    [anon_sym_QMARK_QMARK] = ACTIONS(987),
    [anon_sym_EQ] = ACTIONS(989),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(987),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(987),
    [sym_number] = ACTIONS(989),
    [anon_sym_true] = ACTIONS(989),
    [anon_sym_LBRACK] = ACTIONS(987),
    [anon_sym_RBRACK] = ACTIONS(987),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(989),
    [anon_sym_DOT] = ACTIONS(989),
  },
  [277] = {
    [aux_sym_top_level_repeat1] = STATE(277),
    [anon_sym_LBRACE] = ACTIONS(991),
    [anon_sym_RBRACE] = ACTIONS(991),
    [anon_sym_LPAREN] = ACTIONS(991),
    [anon_sym_using] = ACTIONS(993),
    [anon_sym_is] = ACTIONS(993),
    [anon_sym_COMMA] = ACTIONS(991),
    [anon_sym_DOT_DOT] = ACTIONS(993),
    [anon_sym_DOT_DOT_LT] = ACTIONS(991),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(991),
    [anon_sym_COLON] = ACTIONS(991),
    [anon_sym_STAR] = ACTIONS(991),
    [anon_sym_PLUS] = ACTIONS(991),
    [anon_sym_SLASH] = ACTIONS(991),
    [anon_sym_DASH] = ACTIONS(991),
    [anon_sym_PERCENT] = ACTIONS(991),
    [anon_sym_EQ_EQ] = ACTIONS(991),
    [anon_sym_BANG_EQ] = ACTIONS(991),
    [anon_sym_LT] = ACTIONS(993),
    [anon_sym_LT_EQ] = ACTIONS(991),
    [anon_sym_lt] = ACTIONS(993),
    [anon_sym_lte] = ACTIONS(993),
    [anon_sym_gt] = ACTIONS(993),
    [anon_sym_gte] = ACTIONS(993),
    [anon_sym_BANG] = ACTIONS(993),
    [anon_sym_AMP_AMP] = ACTIONS(991),
    [anon_sym_PIPE_PIPE] = ACTIONS(991),
    [anon_sym_QMARK_QMARK] = ACTIONS(991),
    [anon_sym_EQ] = ACTIONS(993),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(991),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(991),
    [sym_number] = ACTIONS(993),
    [anon_sym_true] = ACTIONS(993),
    [anon_sym_LBRACK] = ACTIONS(991),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1217),
    [anon_sym_DOT] = ACTIONS(993),
  },
  [278] = {
    [sym_type] = STATE(278),
    [sym_group] = STATE(81),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat2] = STATE(278),
    [anon_sym_LBRACE] = ACTIONS(1220),
    [anon_sym_RBRACE] = ACTIONS(906),
    [anon_sym_LPAREN] = ACTIONS(1223),
    [anon_sym_using] = ACTIONS(901),
    [anon_sym_is] = ACTIONS(901),
    [anon_sym_COMMA] = ACTIONS(906),
    [anon_sym_DOT_DOT] = ACTIONS(901),
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
    [anon_sym_LT] = ACTIONS(901),
    [anon_sym_LT_EQ] = ACTIONS(906),
    [anon_sym_lt] = ACTIONS(901),
    [anon_sym_lte] = ACTIONS(901),
    [anon_sym_gt] = ACTIONS(901),
    [anon_sym_gte] = ACTIONS(901),
    [anon_sym_BANG] = ACTIONS(901),
    [anon_sym_AMP_AMP] = ACTIONS(906),
    [anon_sym_PIPE_PIPE] = ACTIONS(906),
    [anon_sym_QMARK_QMARK] = ACTIONS(906),
    [anon_sym_EQ] = ACTIONS(901),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1226),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1226),
    [sym_number] = ACTIONS(1229),
    [anon_sym_true] = ACTIONS(1232),
    [anon_sym_LBRACK] = ACTIONS(1235),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1238),
    [anon_sym_DOT] = ACTIONS(1241),
  },
  [279] = {
    [sym_type] = STATE(278),
    [sym_group] = STATE(81),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat2] = STATE(278),
    [anon_sym_LBRACE] = ACTIONS(1002),
    [anon_sym_RBRACE] = ACTIONS(1002),
    [anon_sym_LPAREN] = ACTIONS(1002),
    [anon_sym_using] = ACTIONS(1004),
    [anon_sym_is] = ACTIONS(1004),
    [anon_sym_COMMA] = ACTIONS(1002),
    [anon_sym_DOT_DOT] = ACTIONS(1004),
    [anon_sym_DOT_DOT_LT] = ACTIONS(1002),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(1002),
    [anon_sym_COLON] = ACTIONS(1002),
    [anon_sym_STAR] = ACTIONS(1002),
    [anon_sym_PLUS] = ACTIONS(1002),
    [anon_sym_SLASH] = ACTIONS(1002),
    [anon_sym_DASH] = ACTIONS(1002),
    [anon_sym_PERCENT] = ACTIONS(1002),
    [anon_sym_EQ_EQ] = ACTIONS(1002),
    [anon_sym_BANG_EQ] = ACTIONS(1002),
    [anon_sym_LT] = ACTIONS(1004),
    [anon_sym_LT_EQ] = ACTIONS(1002),
    [anon_sym_lt] = ACTIONS(1004),
    [anon_sym_lte] = ACTIONS(1004),
    [anon_sym_gt] = ACTIONS(1004),
    [anon_sym_gte] = ACTIONS(1004),
    [anon_sym_BANG] = ACTIONS(1004),
    [anon_sym_AMP_AMP] = ACTIONS(1002),
    [anon_sym_PIPE_PIPE] = ACTIONS(1002),
    [anon_sym_QMARK_QMARK] = ACTIONS(1002),
    [anon_sym_EQ] = ACTIONS(1004),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1002),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1002),
    [sym_number] = ACTIONS(1004),
    [anon_sym_true] = ACTIONS(1004),
    [anon_sym_LBRACK] = ACTIONS(1002),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1004),
    [anon_sym_DOT] = ACTIONS(1004),
  },
  [280] = {
    [anon_sym_LBRACE] = ACTIONS(894),
    [anon_sym_as] = ACTIONS(896),
    [anon_sym_QMARK] = ACTIONS(896),
    [anon_sym_LPAREN] = ACTIONS(894),
    [anon_sym_using] = ACTIONS(896),
    [anon_sym_is] = ACTIONS(896),
    [anon_sym_COMMA] = ACTIONS(894),
    [anon_sym_DOT_DOT] = ACTIONS(896),
    [anon_sym_DOT_DOT_LT] = ACTIONS(894),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(894),
    [anon_sym_COLON] = ACTIONS(894),
    [anon_sym_STAR] = ACTIONS(894),
    [anon_sym_PLUS] = ACTIONS(894),
    [anon_sym_SLASH] = ACTIONS(896),
    [anon_sym_DASH] = ACTIONS(894),
    [anon_sym_PERCENT] = ACTIONS(894),
    [anon_sym_EQ_EQ] = ACTIONS(894),
    [anon_sym_BANG_EQ] = ACTIONS(894),
    [anon_sym_LT] = ACTIONS(896),
    [anon_sym_LT_EQ] = ACTIONS(894),
    [anon_sym_lt] = ACTIONS(896),
    [anon_sym_lte] = ACTIONS(896),
    [anon_sym_gt] = ACTIONS(896),
    [anon_sym_gte] = ACTIONS(896),
    [anon_sym_BANG] = ACTIONS(896),
    [anon_sym_AMP_AMP] = ACTIONS(894),
    [anon_sym_PIPE_PIPE] = ACTIONS(894),
    [anon_sym_QMARK_QMARK] = ACTIONS(894),
    [anon_sym_EQ] = ACTIONS(896),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(894),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(894),
    [sym_number] = ACTIONS(896),
    [anon_sym_true] = ACTIONS(896),
    [anon_sym_LBRACK] = ACTIONS(894),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(896),
    [anon_sym_DOT] = ACTIONS(896),
    [anon_sym_GT] = ACTIONS(894),
    [anon_sym_SLASH_GT] = ACTIONS(894),
  },
  [281] = {
    [sym_type] = STATE(281),
    [sym_group] = STATE(95),
    [sym_string] = STATE(95),
    [sym_boolean] = STATE(95),
    [sym_sequence] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_top_level] = STATE(95),
    [sym_spec_var] = STATE(95),
    [aux_sym_as_expression_repeat2] = STATE(281),
    [anon_sym_LBRACE] = ACTIONS(1244),
    [anon_sym_as] = ACTIONS(901),
    [anon_sym_QMARK] = ACTIONS(901),
    [anon_sym_LPAREN] = ACTIONS(1247),
    [anon_sym_using] = ACTIONS(901),
    [anon_sym_is] = ACTIONS(901),
    [anon_sym_COMMA] = ACTIONS(906),
    [anon_sym_DOT_DOT] = ACTIONS(901),
    [anon_sym_DOT_DOT_LT] = ACTIONS(906),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(906),
    [anon_sym_COLON] = ACTIONS(906),
    [anon_sym_STAR] = ACTIONS(906),
    [anon_sym_PLUS] = ACTIONS(906),
    [anon_sym_SLASH] = ACTIONS(901),
    [anon_sym_DASH] = ACTIONS(906),
    [anon_sym_PERCENT] = ACTIONS(906),
    [anon_sym_EQ_EQ] = ACTIONS(906),
    [anon_sym_BANG_EQ] = ACTIONS(906),
    [anon_sym_LT] = ACTIONS(901),
    [anon_sym_LT_EQ] = ACTIONS(906),
    [anon_sym_lt] = ACTIONS(901),
    [anon_sym_lte] = ACTIONS(901),
    [anon_sym_gt] = ACTIONS(901),
    [anon_sym_gte] = ACTIONS(901),
    [anon_sym_BANG] = ACTIONS(901),
    [anon_sym_AMP_AMP] = ACTIONS(906),
    [anon_sym_PIPE_PIPE] = ACTIONS(906),
    [anon_sym_QMARK_QMARK] = ACTIONS(906),
    [anon_sym_EQ] = ACTIONS(901),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1250),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1250),
    [sym_number] = ACTIONS(1253),
    [anon_sym_true] = ACTIONS(1256),
    [anon_sym_LBRACK] = ACTIONS(1259),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1262),
    [anon_sym_DOT] = ACTIONS(1265),
    [anon_sym_GT] = ACTIONS(906),
    [anon_sym_SLASH_GT] = ACTIONS(906),
  },
  [282] = {
    [anon_sym_LBRACE] = ACTIONS(926),
    [anon_sym_as] = ACTIONS(928),
    [anon_sym_QMARK] = ACTIONS(928),
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
    [anon_sym_SLASH] = ACTIONS(928),
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
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(928),
    [anon_sym_DOT] = ACTIONS(928),
    [anon_sym_GT] = ACTIONS(926),
    [anon_sym_SLASH_GT] = ACTIONS(926),
  },
  [283] = {
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
  [284] = {
    [anon_sym_LBRACE] = ACTIONS(953),
    [anon_sym_as] = ACTIONS(955),
    [anon_sym_QMARK] = ACTIONS(955),
    [anon_sym_LPAREN] = ACTIONS(953),
    [anon_sym_using] = ACTIONS(955),
    [anon_sym_is] = ACTIONS(955),
    [anon_sym_COMMA] = ACTIONS(953),
    [anon_sym_DOT_DOT] = ACTIONS(955),
    [anon_sym_DOT_DOT_LT] = ACTIONS(953),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(953),
    [anon_sym_COLON] = ACTIONS(953),
    [anon_sym_STAR] = ACTIONS(953),
    [anon_sym_PLUS] = ACTIONS(953),
    [anon_sym_SLASH] = ACTIONS(955),
    [anon_sym_DASH] = ACTIONS(953),
    [anon_sym_PERCENT] = ACTIONS(953),
    [anon_sym_EQ_EQ] = ACTIONS(953),
    [anon_sym_BANG_EQ] = ACTIONS(953),
    [anon_sym_LT] = ACTIONS(955),
    [anon_sym_LT_EQ] = ACTIONS(953),
    [anon_sym_lt] = ACTIONS(955),
    [anon_sym_lte] = ACTIONS(955),
    [anon_sym_gt] = ACTIONS(955),
    [anon_sym_gte] = ACTIONS(955),
    [anon_sym_BANG] = ACTIONS(955),
    [anon_sym_AMP_AMP] = ACTIONS(953),
    [anon_sym_PIPE_PIPE] = ACTIONS(953),
    [anon_sym_QMARK_QMARK] = ACTIONS(953),
    [anon_sym_EQ] = ACTIONS(955),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(953),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(953),
    [sym_number] = ACTIONS(955),
    [anon_sym_true] = ACTIONS(955),
    [anon_sym_LBRACK] = ACTIONS(953),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(955),
    [anon_sym_DOT] = ACTIONS(955),
    [anon_sym_GT] = ACTIONS(953),
    [anon_sym_SLASH_GT] = ACTIONS(953),
  },
  [285] = {
    [anon_sym_LBRACE] = ACTIONS(987),
    [anon_sym_as] = ACTIONS(989),
    [anon_sym_QMARK] = ACTIONS(989),
    [anon_sym_LPAREN] = ACTIONS(987),
    [anon_sym_using] = ACTIONS(989),
    [anon_sym_is] = ACTIONS(989),
    [anon_sym_COMMA] = ACTIONS(987),
    [anon_sym_DOT_DOT] = ACTIONS(989),
    [anon_sym_DOT_DOT_LT] = ACTIONS(987),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(987),
    [anon_sym_COLON] = ACTIONS(987),
    [anon_sym_STAR] = ACTIONS(987),
    [anon_sym_PLUS] = ACTIONS(987),
    [anon_sym_SLASH] = ACTIONS(989),
    [anon_sym_DASH] = ACTIONS(987),
    [anon_sym_PERCENT] = ACTIONS(987),
    [anon_sym_EQ_EQ] = ACTIONS(987),
    [anon_sym_BANG_EQ] = ACTIONS(987),
    [anon_sym_LT] = ACTIONS(989),
    [anon_sym_LT_EQ] = ACTIONS(987),
    [anon_sym_lt] = ACTIONS(989),
    [anon_sym_lte] = ACTIONS(989),
    [anon_sym_gt] = ACTIONS(989),
    [anon_sym_gte] = ACTIONS(989),
    [anon_sym_BANG] = ACTIONS(989),
    [anon_sym_AMP_AMP] = ACTIONS(987),
    [anon_sym_PIPE_PIPE] = ACTIONS(987),
    [anon_sym_QMARK_QMARK] = ACTIONS(987),
    [anon_sym_EQ] = ACTIONS(989),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(987),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(987),
    [sym_number] = ACTIONS(989),
    [anon_sym_true] = ACTIONS(989),
    [anon_sym_LBRACK] = ACTIONS(987),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(989),
    [anon_sym_DOT] = ACTIONS(989),
    [anon_sym_GT] = ACTIONS(987),
    [anon_sym_SLASH_GT] = ACTIONS(987),
  },
  [286] = {
    [aux_sym_top_level_repeat1] = STATE(286),
    [anon_sym_LBRACE] = ACTIONS(991),
    [anon_sym_as] = ACTIONS(993),
    [anon_sym_QMARK] = ACTIONS(993),
    [anon_sym_LPAREN] = ACTIONS(991),
    [anon_sym_using] = ACTIONS(993),
    [anon_sym_is] = ACTIONS(993),
    [anon_sym_COMMA] = ACTIONS(991),
    [anon_sym_DOT_DOT] = ACTIONS(993),
    [anon_sym_DOT_DOT_LT] = ACTIONS(991),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(991),
    [anon_sym_COLON] = ACTIONS(991),
    [anon_sym_STAR] = ACTIONS(991),
    [anon_sym_PLUS] = ACTIONS(991),
    [anon_sym_SLASH] = ACTIONS(993),
    [anon_sym_DASH] = ACTIONS(991),
    [anon_sym_PERCENT] = ACTIONS(991),
    [anon_sym_EQ_EQ] = ACTIONS(991),
    [anon_sym_BANG_EQ] = ACTIONS(991),
    [anon_sym_LT] = ACTIONS(993),
    [anon_sym_LT_EQ] = ACTIONS(991),
    [anon_sym_lt] = ACTIONS(993),
    [anon_sym_lte] = ACTIONS(993),
    [anon_sym_gt] = ACTIONS(993),
    [anon_sym_gte] = ACTIONS(993),
    [anon_sym_BANG] = ACTIONS(993),
    [anon_sym_AMP_AMP] = ACTIONS(991),
    [anon_sym_PIPE_PIPE] = ACTIONS(991),
    [anon_sym_QMARK_QMARK] = ACTIONS(991),
    [anon_sym_EQ] = ACTIONS(993),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(991),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(991),
    [sym_number] = ACTIONS(993),
    [anon_sym_true] = ACTIONS(993),
    [anon_sym_LBRACK] = ACTIONS(991),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1268),
    [anon_sym_DOT] = ACTIONS(993),
    [anon_sym_GT] = ACTIONS(991),
    [anon_sym_SLASH_GT] = ACTIONS(991),
  },
  [287] = {
    [sym_type] = STATE(281),
    [sym_group] = STATE(95),
    [sym_string] = STATE(95),
    [sym_boolean] = STATE(95),
    [sym_sequence] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_top_level] = STATE(95),
    [sym_spec_var] = STATE(95),
    [aux_sym_as_expression_repeat2] = STATE(281),
    [anon_sym_LBRACE] = ACTIONS(998),
    [anon_sym_as] = ACTIONS(1000),
    [anon_sym_QMARK] = ACTIONS(1000),
    [anon_sym_LPAREN] = ACTIONS(998),
    [anon_sym_using] = ACTIONS(1000),
    [anon_sym_is] = ACTIONS(1000),
    [anon_sym_COMMA] = ACTIONS(998),
    [anon_sym_DOT_DOT] = ACTIONS(1000),
    [anon_sym_DOT_DOT_LT] = ACTIONS(998),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(998),
    [anon_sym_COLON] = ACTIONS(998),
    [anon_sym_STAR] = ACTIONS(998),
    [anon_sym_PLUS] = ACTIONS(998),
    [anon_sym_SLASH] = ACTIONS(1000),
    [anon_sym_DASH] = ACTIONS(998),
    [anon_sym_PERCENT] = ACTIONS(998),
    [anon_sym_EQ_EQ] = ACTIONS(998),
    [anon_sym_BANG_EQ] = ACTIONS(998),
    [anon_sym_LT] = ACTIONS(1000),
    [anon_sym_LT_EQ] = ACTIONS(998),
    [anon_sym_lt] = ACTIONS(1000),
    [anon_sym_lte] = ACTIONS(1000),
    [anon_sym_gt] = ACTIONS(1000),
    [anon_sym_gte] = ACTIONS(1000),
    [anon_sym_BANG] = ACTIONS(1000),
    [anon_sym_AMP_AMP] = ACTIONS(998),
    [anon_sym_PIPE_PIPE] = ACTIONS(998),
    [anon_sym_QMARK_QMARK] = ACTIONS(998),
    [anon_sym_EQ] = ACTIONS(1000),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(998),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(998),
    [sym_number] = ACTIONS(1000),
    [anon_sym_true] = ACTIONS(1000),
    [anon_sym_LBRACK] = ACTIONS(998),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1000),
    [anon_sym_DOT] = ACTIONS(1000),
    [anon_sym_GT] = ACTIONS(998),
    [anon_sym_SLASH_GT] = ACTIONS(998),
  },
  [288] = {
    [sym_type] = STATE(281),
    [sym_group] = STATE(95),
    [sym_string] = STATE(95),
    [sym_boolean] = STATE(95),
    [sym_sequence] = STATE(95),
    [sym_hash] = STATE(95),
    [sym_top_level] = STATE(95),
    [sym_spec_var] = STATE(95),
    [aux_sym_as_expression_repeat2] = STATE(281),
    [anon_sym_LBRACE] = ACTIONS(1002),
    [anon_sym_as] = ACTIONS(1004),
    [anon_sym_QMARK] = ACTIONS(1004),
    [anon_sym_LPAREN] = ACTIONS(1002),
    [anon_sym_using] = ACTIONS(1004),
    [anon_sym_is] = ACTIONS(1004),
    [anon_sym_COMMA] = ACTIONS(1002),
    [anon_sym_DOT_DOT] = ACTIONS(1004),
    [anon_sym_DOT_DOT_LT] = ACTIONS(1002),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(1002),
    [anon_sym_COLON] = ACTIONS(1002),
    [anon_sym_STAR] = ACTIONS(1002),
    [anon_sym_PLUS] = ACTIONS(1002),
    [anon_sym_SLASH] = ACTIONS(1004),
    [anon_sym_DASH] = ACTIONS(1002),
    [anon_sym_PERCENT] = ACTIONS(1002),
    [anon_sym_EQ_EQ] = ACTIONS(1002),
    [anon_sym_BANG_EQ] = ACTIONS(1002),
    [anon_sym_LT] = ACTIONS(1004),
    [anon_sym_LT_EQ] = ACTIONS(1002),
    [anon_sym_lt] = ACTIONS(1004),
    [anon_sym_lte] = ACTIONS(1004),
    [anon_sym_gt] = ACTIONS(1004),
    [anon_sym_gte] = ACTIONS(1004),
    [anon_sym_BANG] = ACTIONS(1004),
    [anon_sym_AMP_AMP] = ACTIONS(1002),
    [anon_sym_PIPE_PIPE] = ACTIONS(1002),
    [anon_sym_QMARK_QMARK] = ACTIONS(1002),
    [anon_sym_EQ] = ACTIONS(1004),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1002),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1002),
    [sym_number] = ACTIONS(1004),
    [anon_sym_true] = ACTIONS(1004),
    [anon_sym_LBRACK] = ACTIONS(1002),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1004),
    [anon_sym_DOT] = ACTIONS(1004),
    [anon_sym_GT] = ACTIONS(1002),
    [anon_sym_SLASH_GT] = ACTIONS(1002),
  },
  [289] = {
    [sym_directive] = STATE(206),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_list_middle] = STATE(324),
    [sym_items] = STATE(206),
    [sym_sep] = STATE(206),
    [sym_sep_block] = STATE(211),
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
    [aux_sym_list_repeat1] = STATE(324),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1271),
    [sym_break] = ACTIONS(451),
    [sym_continue] = ACTIONS(451),
    [anon_sym_LT_POUNDitems] = ACTIONS(455),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(457),
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
  [290] = {
    [anon_sym_GT] = ACTIONS(1273),
  },
  [291] = {
    [anon_sym_LT_AT] = ACTIONS(1275),
    [anon_sym_LT_POUND] = ACTIONS(1277),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1275),
    [sym_break] = ACTIONS(1275),
    [sym_continue] = ACTIONS(1275),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1275),
    [anon_sym_LT_POUNDitems] = ACTIONS(1275),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1275),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1275),
    [anon_sym_LT_POUNDif] = ACTIONS(1275),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1275),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1275),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1275),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1275),
    [sym_fallback] = ACTIONS(1275),
    [sym_flush] = ACTIONS(1275),
    [anon_sym_LT_POUNDftl] = ACTIONS(1275),
    [anon_sym_LT_POUNDimport] = ACTIONS(1275),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1275),
    [sym_lt] = ACTIONS(1275),
    [sym_nt] = ACTIONS(1275),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1275),
    [sym_rt] = ACTIONS(1275),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1275),
    [sym_stop] = ACTIONS(1275),
    [sym_t] = ACTIONS(1275),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1275),
    [anon_sym_LT_POUNDassign] = ACTIONS(1275),
    [sym_end_assign] = ACTIONS(1275),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1275),
    [sym_end_global] = ACTIONS(1275),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1275),
    [sym_end_local] = ACTIONS(1275),
  },
  [292] = {
    [ts_builtin_sym_end] = ACTIONS(1279),
    [sym_comment] = ACTIONS(1279),
    [anon_sym_DOLLAR] = ACTIONS(1279),
    [anon_sym_LT_AT] = ACTIONS(1279),
    [anon_sym_LT_POUND] = ACTIONS(1281),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1279),
    [sym_break] = ACTIONS(1279),
    [sym_continue] = ACTIONS(1279),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1279),
    [anon_sym_LT_POUNDitems] = ACTIONS(1279),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1279),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1279),
    [anon_sym_LT_POUNDif] = ACTIONS(1279),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1279),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1279),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1279),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1279),
    [anon_sym_LT_POUNDcase] = ACTIONS(1279),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1279),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1279),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1279),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1279),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1279),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1279),
    [anon_sym_LT_POUNDnested] = ACTIONS(1279),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1279),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1279),
    [sym_recover] = ACTIONS(1279),
    [sym_fallback] = ACTIONS(1279),
    [sym_flush] = ACTIONS(1279),
    [anon_sym_LT_POUNDftl] = ACTIONS(1279),
    [anon_sym_LT_POUNDimport] = ACTIONS(1279),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1279),
    [sym_lt] = ACTIONS(1279),
    [sym_nt] = ACTIONS(1279),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1279),
    [sym_rt] = ACTIONS(1279),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1279),
    [sym_stop] = ACTIONS(1279),
    [sym_t] = ACTIONS(1279),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1279),
    [anon_sym_LT_POUNDassign] = ACTIONS(1279),
    [sym_end_assign] = ACTIONS(1279),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1279),
    [sym_end_global] = ACTIONS(1279),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1279),
    [sym_end_local] = ACTIONS(1279),
  },
  [293] = {
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1283),
  },
  [294] = {
    [sym_directive] = STATE(206),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_list_middle] = STATE(294),
    [sym_items] = STATE(206),
    [sym_sep] = STATE(206),
    [sym_sep_block] = STATE(211),
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
    [aux_sym_list_repeat1] = STATE(294),
    [anon_sym_LT_AT] = ACTIONS(1285),
    [anon_sym_LT_POUND] = ACTIONS(1288),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1291),
    [sym_break] = ACTIONS(1293),
    [sym_continue] = ACTIONS(1293),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1291),
    [anon_sym_LT_POUNDitems] = ACTIONS(1296),
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
  [295] = {
    [sym_directive] = STATE(206),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_list_middle] = STATE(294),
    [sym_list_else] = STATE(327),
    [sym_items] = STATE(206),
    [sym_sep] = STATE(206),
    [sym_sep_block] = STATE(211),
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
    [aux_sym_list_repeat1] = STATE(294),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1283),
    [sym_break] = ACTIONS(451),
    [sym_continue] = ACTIONS(451),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(453),
    [anon_sym_LT_POUNDitems] = ACTIONS(455),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(457),
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
  [296] = {
    [sym_type] = STATE(296),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(296),
    [anon_sym_LBRACE] = ACTIONS(898),
    [anon_sym_as] = ACTIONS(901),
    [anon_sym_QMARK] = ACTIONS(901),
    [anon_sym_LPAREN] = ACTIONS(903),
    [anon_sym_RPAREN] = ACTIONS(906),
    [anon_sym_using] = ACTIONS(901),
    [anon_sym_is] = ACTIONS(901),
    [anon_sym_COMMA] = ACTIONS(906),
    [anon_sym_DOT_DOT] = ACTIONS(901),
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
    [anon_sym_LT] = ACTIONS(901),
    [anon_sym_LT_EQ] = ACTIONS(906),
    [anon_sym_lt] = ACTIONS(901),
    [anon_sym_lte] = ACTIONS(901),
    [anon_sym_gt] = ACTIONS(901),
    [anon_sym_gte] = ACTIONS(901),
    [anon_sym_BANG] = ACTIONS(901),
    [anon_sym_AMP_AMP] = ACTIONS(906),
    [anon_sym_PIPE_PIPE] = ACTIONS(906),
    [anon_sym_QMARK_QMARK] = ACTIONS(906),
    [anon_sym_EQ] = ACTIONS(901),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(908),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(908),
    [sym_number] = ACTIONS(911),
    [anon_sym_true] = ACTIONS(914),
    [anon_sym_LBRACK] = ACTIONS(917),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1356),
    [anon_sym_DOT] = ACTIONS(923),
  },
  [297] = {
    [aux_sym_top_level_repeat1] = STATE(297),
    [anon_sym_LBRACE] = ACTIONS(991),
    [anon_sym_as] = ACTIONS(993),
    [anon_sym_QMARK] = ACTIONS(993),
    [anon_sym_LPAREN] = ACTIONS(991),
    [anon_sym_RPAREN] = ACTIONS(991),
    [anon_sym_using] = ACTIONS(993),
    [anon_sym_is] = ACTIONS(993),
    [anon_sym_COMMA] = ACTIONS(991),
    [anon_sym_DOT_DOT] = ACTIONS(993),
    [anon_sym_DOT_DOT_LT] = ACTIONS(991),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(991),
    [anon_sym_COLON] = ACTIONS(991),
    [anon_sym_STAR] = ACTIONS(991),
    [anon_sym_PLUS] = ACTIONS(991),
    [anon_sym_SLASH] = ACTIONS(991),
    [anon_sym_DASH] = ACTIONS(991),
    [anon_sym_PERCENT] = ACTIONS(991),
    [anon_sym_EQ_EQ] = ACTIONS(991),
    [anon_sym_BANG_EQ] = ACTIONS(991),
    [anon_sym_LT] = ACTIONS(993),
    [anon_sym_LT_EQ] = ACTIONS(991),
    [anon_sym_lt] = ACTIONS(993),
    [anon_sym_lte] = ACTIONS(993),
    [anon_sym_gt] = ACTIONS(993),
    [anon_sym_gte] = ACTIONS(993),
    [anon_sym_BANG] = ACTIONS(993),
    [anon_sym_AMP_AMP] = ACTIONS(991),
    [anon_sym_PIPE_PIPE] = ACTIONS(991),
    [anon_sym_QMARK_QMARK] = ACTIONS(991),
    [anon_sym_EQ] = ACTIONS(993),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(991),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(991),
    [sym_number] = ACTIONS(993),
    [anon_sym_true] = ACTIONS(993),
    [anon_sym_LBRACK] = ACTIONS(991),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(995),
    [anon_sym_DOT] = ACTIONS(993),
  },
  [298] = {
    [sym_type] = STATE(296),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(296),
    [anon_sym_LBRACE] = ACTIONS(998),
    [anon_sym_as] = ACTIONS(1000),
    [anon_sym_QMARK] = ACTIONS(1000),
    [anon_sym_LPAREN] = ACTIONS(998),
    [anon_sym_RPAREN] = ACTIONS(998),
    [anon_sym_using] = ACTIONS(1000),
    [anon_sym_is] = ACTIONS(1000),
    [anon_sym_COMMA] = ACTIONS(998),
    [anon_sym_DOT_DOT] = ACTIONS(1000),
    [anon_sym_DOT_DOT_LT] = ACTIONS(998),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(998),
    [anon_sym_COLON] = ACTIONS(998),
    [anon_sym_STAR] = ACTIONS(998),
    [anon_sym_PLUS] = ACTIONS(998),
    [anon_sym_SLASH] = ACTIONS(998),
    [anon_sym_DASH] = ACTIONS(998),
    [anon_sym_PERCENT] = ACTIONS(998),
    [anon_sym_EQ_EQ] = ACTIONS(998),
    [anon_sym_BANG_EQ] = ACTIONS(998),
    [anon_sym_LT] = ACTIONS(1000),
    [anon_sym_LT_EQ] = ACTIONS(998),
    [anon_sym_lt] = ACTIONS(1000),
    [anon_sym_lte] = ACTIONS(1000),
    [anon_sym_gt] = ACTIONS(1000),
    [anon_sym_gte] = ACTIONS(1000),
    [anon_sym_BANG] = ACTIONS(1000),
    [anon_sym_AMP_AMP] = ACTIONS(998),
    [anon_sym_PIPE_PIPE] = ACTIONS(998),
    [anon_sym_QMARK_QMARK] = ACTIONS(998),
    [anon_sym_EQ] = ACTIONS(1000),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(998),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(998),
    [sym_number] = ACTIONS(1000),
    [anon_sym_true] = ACTIONS(1000),
    [anon_sym_LBRACK] = ACTIONS(998),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1000),
    [anon_sym_DOT] = ACTIONS(1000),
  },
  [299] = {
    [sym_type] = STATE(296),
    [sym_group] = STATE(34),
    [sym_string] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_hash] = STATE(34),
    [sym_top_level] = STATE(34),
    [sym_spec_var] = STATE(34),
    [aux_sym_as_expression_repeat2] = STATE(296),
    [anon_sym_LBRACE] = ACTIONS(1002),
    [anon_sym_as] = ACTIONS(1004),
    [anon_sym_QMARK] = ACTIONS(1004),
    [anon_sym_LPAREN] = ACTIONS(1002),
    [anon_sym_RPAREN] = ACTIONS(1002),
    [anon_sym_using] = ACTIONS(1004),
    [anon_sym_is] = ACTIONS(1004),
    [anon_sym_COMMA] = ACTIONS(1002),
    [anon_sym_DOT_DOT] = ACTIONS(1004),
    [anon_sym_DOT_DOT_LT] = ACTIONS(1002),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(1002),
    [anon_sym_COLON] = ACTIONS(1002),
    [anon_sym_STAR] = ACTIONS(1002),
    [anon_sym_PLUS] = ACTIONS(1002),
    [anon_sym_SLASH] = ACTIONS(1002),
    [anon_sym_DASH] = ACTIONS(1002),
    [anon_sym_PERCENT] = ACTIONS(1002),
    [anon_sym_EQ_EQ] = ACTIONS(1002),
    [anon_sym_BANG_EQ] = ACTIONS(1002),
    [anon_sym_LT] = ACTIONS(1004),
    [anon_sym_LT_EQ] = ACTIONS(1002),
    [anon_sym_lt] = ACTIONS(1004),
    [anon_sym_lte] = ACTIONS(1004),
    [anon_sym_gt] = ACTIONS(1004),
    [anon_sym_gte] = ACTIONS(1004),
    [anon_sym_BANG] = ACTIONS(1004),
    [anon_sym_AMP_AMP] = ACTIONS(1002),
    [anon_sym_PIPE_PIPE] = ACTIONS(1002),
    [anon_sym_QMARK_QMARK] = ACTIONS(1002),
    [anon_sym_EQ] = ACTIONS(1004),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1002),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1002),
    [sym_number] = ACTIONS(1004),
    [anon_sym_true] = ACTIONS(1004),
    [anon_sym_LBRACK] = ACTIONS(1002),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1004),
    [anon_sym_DOT] = ACTIONS(1004),
  },
  [300] = {
    [aux_sym_top_level_repeat1] = STATE(300),
    [anon_sym_LBRACE] = ACTIONS(991),
    [anon_sym_LPAREN] = ACTIONS(991),
    [anon_sym_using] = ACTIONS(993),
    [anon_sym_is] = ACTIONS(993),
    [anon_sym_COMMA] = ACTIONS(991),
    [anon_sym_DOT_DOT] = ACTIONS(993),
    [anon_sym_DOT_DOT_LT] = ACTIONS(991),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(991),
    [anon_sym_COLON] = ACTIONS(991),
    [anon_sym_STAR] = ACTIONS(991),
    [anon_sym_PLUS] = ACTIONS(991),
    [anon_sym_SLASH] = ACTIONS(991),
    [anon_sym_DASH] = ACTIONS(991),
    [anon_sym_PERCENT] = ACTIONS(991),
    [anon_sym_EQ_EQ] = ACTIONS(991),
    [anon_sym_BANG_EQ] = ACTIONS(991),
    [anon_sym_LT] = ACTIONS(993),
    [anon_sym_LT_EQ] = ACTIONS(991),
    [anon_sym_lt] = ACTIONS(993),
    [anon_sym_lte] = ACTIONS(993),
    [anon_sym_gt] = ACTIONS(993),
    [anon_sym_gte] = ACTIONS(993),
    [anon_sym_BANG] = ACTIONS(993),
    [anon_sym_AMP_AMP] = ACTIONS(991),
    [anon_sym_PIPE_PIPE] = ACTIONS(991),
    [anon_sym_QMARK_QMARK] = ACTIONS(991),
    [anon_sym_EQ] = ACTIONS(993),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(991),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(991),
    [sym_number] = ACTIONS(993),
    [anon_sym_true] = ACTIONS(993),
    [anon_sym_LBRACK] = ACTIONS(991),
    [anon_sym_RBRACK] = ACTIONS(991),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1217),
    [anon_sym_DOT] = ACTIONS(993),
  },
  [301] = {
    [sym_type] = STATE(301),
    [sym_group] = STATE(81),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat2] = STATE(301),
    [anon_sym_LBRACE] = ACTIONS(1220),
    [anon_sym_LPAREN] = ACTIONS(1223),
    [anon_sym_using] = ACTIONS(901),
    [anon_sym_is] = ACTIONS(901),
    [anon_sym_COMMA] = ACTIONS(906),
    [anon_sym_DOT_DOT] = ACTIONS(901),
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
    [anon_sym_LT] = ACTIONS(901),
    [anon_sym_LT_EQ] = ACTIONS(906),
    [anon_sym_lt] = ACTIONS(901),
    [anon_sym_lte] = ACTIONS(901),
    [anon_sym_gt] = ACTIONS(901),
    [anon_sym_gte] = ACTIONS(901),
    [anon_sym_BANG] = ACTIONS(901),
    [anon_sym_AMP_AMP] = ACTIONS(906),
    [anon_sym_PIPE_PIPE] = ACTIONS(906),
    [anon_sym_QMARK_QMARK] = ACTIONS(906),
    [anon_sym_EQ] = ACTIONS(901),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1226),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1226),
    [sym_number] = ACTIONS(1229),
    [anon_sym_true] = ACTIONS(1232),
    [anon_sym_LBRACK] = ACTIONS(1235),
    [anon_sym_RBRACK] = ACTIONS(906),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1359),
    [anon_sym_DOT] = ACTIONS(1241),
  },
  [302] = {
    [sym_type] = STATE(301),
    [sym_group] = STATE(81),
    [sym_string] = STATE(81),
    [sym_boolean] = STATE(81),
    [sym_sequence] = STATE(81),
    [sym_hash] = STATE(81),
    [sym_top_level] = STATE(81),
    [sym_spec_var] = STATE(81),
    [aux_sym_as_expression_repeat2] = STATE(301),
    [anon_sym_LBRACE] = ACTIONS(1002),
    [anon_sym_LPAREN] = ACTIONS(1002),
    [anon_sym_using] = ACTIONS(1004),
    [anon_sym_is] = ACTIONS(1004),
    [anon_sym_COMMA] = ACTIONS(1002),
    [anon_sym_DOT_DOT] = ACTIONS(1004),
    [anon_sym_DOT_DOT_LT] = ACTIONS(1002),
    [anon_sym_DOT_DOT_BANG] = ACTIONS(1002),
    [anon_sym_COLON] = ACTIONS(1002),
    [anon_sym_STAR] = ACTIONS(1002),
    [anon_sym_PLUS] = ACTIONS(1002),
    [anon_sym_SLASH] = ACTIONS(1002),
    [anon_sym_DASH] = ACTIONS(1002),
    [anon_sym_PERCENT] = ACTIONS(1002),
    [anon_sym_EQ_EQ] = ACTIONS(1002),
    [anon_sym_BANG_EQ] = ACTIONS(1002),
    [anon_sym_LT] = ACTIONS(1004),
    [anon_sym_LT_EQ] = ACTIONS(1002),
    [anon_sym_lt] = ACTIONS(1004),
    [anon_sym_lte] = ACTIONS(1004),
    [anon_sym_gt] = ACTIONS(1004),
    [anon_sym_gte] = ACTIONS(1004),
    [anon_sym_BANG] = ACTIONS(1004),
    [anon_sym_AMP_AMP] = ACTIONS(1002),
    [anon_sym_PIPE_PIPE] = ACTIONS(1002),
    [anon_sym_QMARK_QMARK] = ACTIONS(1002),
    [anon_sym_EQ] = ACTIONS(1004),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1002),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(1002),
    [sym_number] = ACTIONS(1004),
    [anon_sym_true] = ACTIONS(1004),
    [anon_sym_LBRACK] = ACTIONS(1002),
    [anon_sym_RBRACK] = ACTIONS(1002),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(1004),
    [anon_sym_DOT] = ACTIONS(1004),
  },
  [303] = {
    [sym_directive] = STATE(239),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_elseif] = STATE(239),
    [sym_if_middle] = STATE(328),
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
    [aux_sym_if_repeat1] = STATE(328),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1362),
    [anon_sym_LT_POUNDelseif] = ACTIONS(550),
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
    [anon_sym_LT_AT] = ACTIONS(1364),
    [anon_sym_LT_POUND] = ACTIONS(1366),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1364),
    [anon_sym_LT_POUNDif] = ACTIONS(1364),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1364),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1364),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1364),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1364),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1364),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1364),
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
  [305] = {
    [sym_parameter_group] = STATE(133),
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
    [aux_sym_group_repeat1] = STATE(133),
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
    [anon_sym_GT] = ACTIONS(1368),
  },
  [306] = {
    [ts_builtin_sym_end] = ACTIONS(1370),
    [sym_comment] = ACTIONS(1370),
    [anon_sym_DOLLAR] = ACTIONS(1370),
    [anon_sym_LT_AT] = ACTIONS(1370),
    [anon_sym_LT_POUND] = ACTIONS(1372),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1370),
    [sym_break] = ACTIONS(1370),
    [sym_continue] = ACTIONS(1370),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1370),
    [anon_sym_LT_POUNDitems] = ACTIONS(1370),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1370),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1370),
    [anon_sym_LT_POUNDif] = ACTIONS(1370),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1370),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1370),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1370),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1370),
    [anon_sym_LT_POUNDcase] = ACTIONS(1370),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1370),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1370),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1370),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1370),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1370),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1370),
    [anon_sym_LT_POUNDnested] = ACTIONS(1370),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1370),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1370),
    [sym_recover] = ACTIONS(1370),
    [sym_fallback] = ACTIONS(1370),
    [sym_flush] = ACTIONS(1370),
    [anon_sym_LT_POUNDftl] = ACTIONS(1370),
    [anon_sym_LT_POUNDimport] = ACTIONS(1370),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1370),
    [sym_lt] = ACTIONS(1370),
    [sym_nt] = ACTIONS(1370),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1370),
    [sym_rt] = ACTIONS(1370),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1370),
    [sym_stop] = ACTIONS(1370),
    [sym_t] = ACTIONS(1370),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1370),
    [anon_sym_LT_POUNDassign] = ACTIONS(1370),
    [sym_end_assign] = ACTIONS(1370),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1370),
    [sym_end_global] = ACTIONS(1370),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1370),
    [sym_end_local] = ACTIONS(1370),
  },
  [307] = {
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1374),
  },
  [308] = {
    [sym_directive] = STATE(239),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_elseif] = STATE(239),
    [sym_if_middle] = STATE(308),
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
    [aux_sym_if_repeat1] = STATE(308),
    [anon_sym_LT_AT] = ACTIONS(1376),
    [anon_sym_LT_POUND] = ACTIONS(1379),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1382),
    [anon_sym_LT_POUNDif] = ACTIONS(1384),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1382),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1387),
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
  [309] = {
    [anon_sym_LBRACE] = ACTIONS(894),
    [anon_sym_LPAREN] = ACTIONS(894),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(894),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(894),
    [sym_number] = ACTIONS(896),
    [anon_sym_true] = ACTIONS(896),
    [anon_sym_LBRACK] = ACTIONS(894),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(896),
    [anon_sym_DOT] = ACTIONS(894),
    [anon_sym_GT] = ACTIONS(894),
  },
  [310] = {
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
  [311] = {
    [anon_sym_LBRACE] = ACTIONS(953),
    [anon_sym_LPAREN] = ACTIONS(953),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(953),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(953),
    [sym_number] = ACTIONS(955),
    [anon_sym_true] = ACTIONS(955),
    [anon_sym_LBRACK] = ACTIONS(953),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(955),
    [anon_sym_DOT] = ACTIONS(953),
    [anon_sym_GT] = ACTIONS(953),
  },
  [312] = {
    [anon_sym_LBRACE] = ACTIONS(987),
    [anon_sym_LPAREN] = ACTIONS(987),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(987),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(987),
    [sym_number] = ACTIONS(989),
    [anon_sym_true] = ACTIONS(989),
    [anon_sym_LBRACK] = ACTIONS(987),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(989),
    [anon_sym_DOT] = ACTIONS(987),
    [anon_sym_GT] = ACTIONS(987),
  },
  [313] = {
    [aux_sym_top_level_repeat1] = STATE(313),
    [anon_sym_LBRACE] = ACTIONS(991),
    [anon_sym_LPAREN] = ACTIONS(991),
    [aux_sym_SLASH_BSLASH_DQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_DQUOTE_RBRACK_RPAREN_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(991),
    [aux_sym_SLASH_BSLASH_SQUOTE_LPAREN_BSLASH_BSLASH_DOT_PIPE_LBRACK_CARET_BSLASH_SQUOTE_RBRACK_RPAREN_STAR_BSLASH_SQUOTE_SLASH] = ACTIONS(991),
    [sym_number] = ACTIONS(993),
    [anon_sym_true] = ACTIONS(993),
    [anon_sym_LBRACK] = ACTIONS(991),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(993),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1441),
    [anon_sym_DOT] = ACTIONS(993),
    [anon_sym_GT] = ACTIONS(991),
  },
  [314] = {
    [aux_sym_top_level_repeat1] = STATE(314),
    [anon_sym_LPAREN] = ACTIONS(991),
    [aux_sym_SLASH_BSLASH_DOT_LPAREN_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(995),
    [anon_sym_GT] = ACTIONS(991),
  },
  [315] = {
    [anon_sym_GT] = ACTIONS(1444),
  },
  [316] = {
    [sym_directive] = STATE(332),
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
    [aux_sym_case_repeat1] = STATE(332),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1446),
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
    [ts_builtin_sym_end] = ACTIONS(1448),
    [sym_comment] = ACTIONS(1448),
    [anon_sym_DOLLAR] = ACTIONS(1448),
    [anon_sym_LT_AT] = ACTIONS(1448),
    [anon_sym_LT_POUND] = ACTIONS(1450),
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
  [318] = {
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1452),
  },
  [319] = {
    [sym_case] = STATE(258),
    [sym_switch_middle] = STATE(319),
    [aux_sym_switch_repeat1] = STATE(319),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1454),
    [anon_sym_LT_POUNDcase] = ACTIONS(1456),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1454),
  },
  [320] = {
    [anon_sym_LT_AT] = ACTIONS(1459),
    [anon_sym_LT_POUND] = ACTIONS(1461),
    [anon_sym_LT_POUNDif] = ACTIONS(1459),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1459),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1459),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1459),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1459),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1459),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1459),
    [anon_sym_LT_POUNDnested] = ACTIONS(1459),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1459),
    [sym_fallback] = ACTIONS(1459),
    [sym_flush] = ACTIONS(1459),
    [anon_sym_LT_POUNDftl] = ACTIONS(1459),
    [anon_sym_LT_POUNDimport] = ACTIONS(1459),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1459),
    [sym_lt] = ACTIONS(1459),
    [sym_nt] = ACTIONS(1459),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1459),
    [sym_rt] = ACTIONS(1459),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1459),
    [sym_stop] = ACTIONS(1459),
    [sym_t] = ACTIONS(1459),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1459),
    [anon_sym_LT_POUNDassign] = ACTIONS(1459),
    [sym_end_assign] = ACTIONS(1459),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1459),
    [sym_end_global] = ACTIONS(1459),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1459),
    [sym_end_local] = ACTIONS(1459),
  },
  [321] = {
    [ts_builtin_sym_end] = ACTIONS(1463),
    [sym_comment] = ACTIONS(1463),
    [anon_sym_DOLLAR] = ACTIONS(1463),
    [anon_sym_LT_AT] = ACTIONS(1463),
    [anon_sym_LT_POUND] = ACTIONS(1465),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1463),
    [sym_break] = ACTIONS(1463),
    [sym_continue] = ACTIONS(1463),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1463),
    [anon_sym_LT_POUNDitems] = ACTIONS(1463),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1463),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1463),
    [anon_sym_LT_POUNDif] = ACTIONS(1463),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1463),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1463),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1463),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1463),
    [anon_sym_LT_POUNDcase] = ACTIONS(1463),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1463),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1463),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1463),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1463),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1463),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1463),
    [anon_sym_LT_POUNDnested] = ACTIONS(1463),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1463),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1463),
    [sym_recover] = ACTIONS(1463),
    [sym_fallback] = ACTIONS(1463),
    [sym_flush] = ACTIONS(1463),
    [anon_sym_LT_POUNDftl] = ACTIONS(1463),
    [anon_sym_LT_POUNDimport] = ACTIONS(1463),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1463),
    [sym_lt] = ACTIONS(1463),
    [sym_nt] = ACTIONS(1463),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1463),
    [sym_rt] = ACTIONS(1463),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1463),
    [sym_stop] = ACTIONS(1463),
    [sym_t] = ACTIONS(1463),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1463),
    [anon_sym_LT_POUNDassign] = ACTIONS(1463),
    [sym_end_assign] = ACTIONS(1463),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1463),
    [sym_end_global] = ACTIONS(1463),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1463),
    [sym_end_local] = ACTIONS(1463),
  },
  [322] = {
    [anon_sym_LT_AT] = ACTIONS(1467),
    [anon_sym_LT_POUND] = ACTIONS(1469),
    [anon_sym_LT_POUNDif] = ACTIONS(1467),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1467),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1467),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1467),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1467),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1467),
    [anon_sym_LT_POUNDnested] = ACTIONS(1467),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1467),
    [sym_fallback] = ACTIONS(1467),
    [sym_flush] = ACTIONS(1467),
    [anon_sym_LT_POUNDftl] = ACTIONS(1467),
    [anon_sym_LT_POUNDimport] = ACTIONS(1467),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1467),
    [sym_lt] = ACTIONS(1467),
    [sym_nt] = ACTIONS(1467),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1467),
    [sym_rt] = ACTIONS(1467),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1467),
    [sym_stop] = ACTIONS(1467),
    [sym_t] = ACTIONS(1467),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1467),
    [anon_sym_LT_POUNDassign] = ACTIONS(1467),
    [sym_end_assign] = ACTIONS(1467),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1467),
    [sym_end_global] = ACTIONS(1467),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1467),
    [sym_end_local] = ACTIONS(1467),
  },
  [323] = {
    [ts_builtin_sym_end] = ACTIONS(1471),
    [sym_comment] = ACTIONS(1471),
    [anon_sym_DOLLAR] = ACTIONS(1471),
    [anon_sym_LT_AT] = ACTIONS(1471),
    [anon_sym_LT_POUND] = ACTIONS(1473),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1471),
    [sym_break] = ACTIONS(1471),
    [sym_continue] = ACTIONS(1471),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1471),
    [anon_sym_LT_POUNDitems] = ACTIONS(1471),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1471),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1471),
    [anon_sym_LT_POUNDif] = ACTIONS(1471),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1471),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1471),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1471),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1471),
    [anon_sym_LT_POUNDcase] = ACTIONS(1471),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1471),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1471),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1471),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1471),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1471),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1471),
    [anon_sym_LT_POUNDnested] = ACTIONS(1471),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1471),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1471),
    [sym_recover] = ACTIONS(1471),
    [sym_fallback] = ACTIONS(1471),
    [sym_flush] = ACTIONS(1471),
    [anon_sym_LT_POUNDftl] = ACTIONS(1471),
    [anon_sym_LT_POUNDimport] = ACTIONS(1471),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1471),
    [sym_lt] = ACTIONS(1471),
    [sym_nt] = ACTIONS(1471),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1471),
    [sym_rt] = ACTIONS(1471),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1471),
    [sym_stop] = ACTIONS(1471),
    [sym_t] = ACTIONS(1471),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1471),
    [anon_sym_LT_POUNDassign] = ACTIONS(1471),
    [sym_end_assign] = ACTIONS(1471),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1471),
    [sym_end_global] = ACTIONS(1471),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1471),
    [sym_end_local] = ACTIONS(1471),
  },
  [324] = {
    [sym_directive] = STATE(206),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_list_middle] = STATE(324),
    [sym_items] = STATE(206),
    [sym_sep] = STATE(206),
    [sym_sep_block] = STATE(211),
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
    [aux_sym_list_repeat1] = STATE(324),
    [anon_sym_LT_AT] = ACTIONS(1285),
    [anon_sym_LT_POUND] = ACTIONS(1288),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1291),
    [sym_break] = ACTIONS(1293),
    [sym_continue] = ACTIONS(1293),
    [anon_sym_LT_POUNDitems] = ACTIONS(1296),
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
  [325] = {
    [sym_directive] = STATE(334),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_items_middle] = STATE(336),
    [sym_sep] = STATE(334),
    [sym_sep_block] = STATE(211),
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
    [aux_sym_items_repeat1] = STATE(336),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [sym_break] = ACTIONS(1475),
    [sym_continue] = ACTIONS(1475),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1477),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(457),
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
  [326] = {
    [ts_builtin_sym_end] = ACTIONS(1479),
    [sym_comment] = ACTIONS(1479),
    [anon_sym_DOLLAR] = ACTIONS(1479),
    [anon_sym_LT_AT] = ACTIONS(1479),
    [anon_sym_LT_POUND] = ACTIONS(1481),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1479),
    [sym_break] = ACTIONS(1479),
    [sym_continue] = ACTIONS(1479),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1479),
    [anon_sym_LT_POUNDitems] = ACTIONS(1479),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1479),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1479),
    [anon_sym_LT_POUNDif] = ACTIONS(1479),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1479),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1479),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1479),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1479),
    [anon_sym_LT_POUNDcase] = ACTIONS(1479),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1479),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1479),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1479),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1479),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1479),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1479),
    [anon_sym_LT_POUNDnested] = ACTIONS(1479),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1479),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1479),
    [sym_recover] = ACTIONS(1479),
    [sym_fallback] = ACTIONS(1479),
    [sym_flush] = ACTIONS(1479),
    [anon_sym_LT_POUNDftl] = ACTIONS(1479),
    [anon_sym_LT_POUNDimport] = ACTIONS(1479),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1479),
    [sym_lt] = ACTIONS(1479),
    [sym_nt] = ACTIONS(1479),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1479),
    [sym_rt] = ACTIONS(1479),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1479),
    [sym_stop] = ACTIONS(1479),
    [sym_t] = ACTIONS(1479),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1479),
    [anon_sym_LT_POUNDassign] = ACTIONS(1479),
    [sym_end_assign] = ACTIONS(1479),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1479),
    [sym_end_global] = ACTIONS(1479),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1479),
    [sym_end_local] = ACTIONS(1479),
  },
  [327] = {
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1483),
  },
  [328] = {
    [sym_directive] = STATE(239),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_if] = STATE(10),
    [sym_elseif] = STATE(239),
    [sym_if_middle] = STATE(328),
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
    [aux_sym_if_repeat1] = STATE(328),
    [anon_sym_LT_AT] = ACTIONS(1376),
    [anon_sym_LT_POUND] = ACTIONS(1379),
    [anon_sym_LT_POUNDif] = ACTIONS(1384),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1382),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1387),
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
  [329] = {
    [anon_sym_LT_AT] = ACTIONS(1485),
    [anon_sym_LT_POUND] = ACTIONS(1487),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1485),
    [anon_sym_LT_POUNDif] = ACTIONS(1485),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1485),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1485),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1485),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1485),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1485),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1485),
    [sym_fallback] = ACTIONS(1485),
    [sym_flush] = ACTIONS(1485),
    [anon_sym_LT_POUNDftl] = ACTIONS(1485),
    [anon_sym_LT_POUNDimport] = ACTIONS(1485),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1485),
    [sym_lt] = ACTIONS(1485),
    [sym_nt] = ACTIONS(1485),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1485),
    [sym_rt] = ACTIONS(1485),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1485),
    [sym_stop] = ACTIONS(1485),
    [sym_t] = ACTIONS(1485),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1485),
    [anon_sym_LT_POUNDassign] = ACTIONS(1485),
    [sym_end_assign] = ACTIONS(1485),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1485),
    [sym_end_global] = ACTIONS(1485),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1485),
    [sym_end_local] = ACTIONS(1485),
  },
  [330] = {
    [ts_builtin_sym_end] = ACTIONS(1489),
    [sym_comment] = ACTIONS(1489),
    [anon_sym_DOLLAR] = ACTIONS(1489),
    [anon_sym_LT_AT] = ACTIONS(1489),
    [anon_sym_LT_POUND] = ACTIONS(1491),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1489),
    [sym_break] = ACTIONS(1489),
    [sym_continue] = ACTIONS(1489),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1489),
    [anon_sym_LT_POUNDitems] = ACTIONS(1489),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1489),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1489),
    [anon_sym_LT_POUNDif] = ACTIONS(1489),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1489),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1489),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1489),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1489),
    [anon_sym_LT_POUNDcase] = ACTIONS(1489),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1489),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1489),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1489),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1489),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1489),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1489),
    [anon_sym_LT_POUNDnested] = ACTIONS(1489),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1489),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1489),
    [sym_recover] = ACTIONS(1489),
    [sym_fallback] = ACTIONS(1489),
    [sym_flush] = ACTIONS(1489),
    [anon_sym_LT_POUNDftl] = ACTIONS(1489),
    [anon_sym_LT_POUNDimport] = ACTIONS(1489),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1489),
    [sym_lt] = ACTIONS(1489),
    [sym_nt] = ACTIONS(1489),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1489),
    [sym_rt] = ACTIONS(1489),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1489),
    [sym_stop] = ACTIONS(1489),
    [sym_t] = ACTIONS(1489),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1489),
    [anon_sym_LT_POUNDassign] = ACTIONS(1489),
    [sym_end_assign] = ACTIONS(1489),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1489),
    [sym_end_global] = ACTIONS(1489),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1489),
    [sym_end_local] = ACTIONS(1489),
  },
  [331] = {
    [sym_directive] = STATE(338),
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
    [aux_sym_case_repeat1] = STATE(338),
    [aux_sym_case_repeat2] = STATE(339),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [sym_break] = ACTIONS(1493),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1495),
    [anon_sym_LT_POUNDcase] = ACTIONS(1495),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1495),
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
    [sym_directive] = STATE(332),
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
    [aux_sym_case_repeat1] = STATE(332),
    [anon_sym_LT_AT] = ACTIONS(1497),
    [anon_sym_LT_POUND] = ACTIONS(1500),
    [anon_sym_LT_POUNDif] = ACTIONS(1503),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1506),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1509),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1511),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1514),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1517),
    [sym_fallback] = ACTIONS(1520),
    [sym_flush] = ACTIONS(1520),
    [anon_sym_LT_POUNDftl] = ACTIONS(1523),
    [anon_sym_LT_POUNDimport] = ACTIONS(1526),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1529),
    [sym_lt] = ACTIONS(1520),
    [sym_nt] = ACTIONS(1520),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1532),
    [sym_rt] = ACTIONS(1520),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1535),
    [sym_stop] = ACTIONS(1520),
    [sym_t] = ACTIONS(1520),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1538),
    [anon_sym_LT_POUNDassign] = ACTIONS(1541),
    [sym_end_assign] = ACTIONS(1544),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1547),
    [sym_end_global] = ACTIONS(1550),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1553),
    [sym_end_local] = ACTIONS(1556),
  },
  [333] = {
    [ts_builtin_sym_end] = ACTIONS(1559),
    [sym_comment] = ACTIONS(1559),
    [anon_sym_DOLLAR] = ACTIONS(1559),
    [anon_sym_LT_AT] = ACTIONS(1559),
    [anon_sym_LT_POUND] = ACTIONS(1561),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1559),
    [sym_break] = ACTIONS(1559),
    [sym_continue] = ACTIONS(1559),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1559),
    [anon_sym_LT_POUNDitems] = ACTIONS(1559),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1559),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1559),
    [anon_sym_LT_POUNDif] = ACTIONS(1559),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1559),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1559),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1559),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1559),
    [anon_sym_LT_POUNDcase] = ACTIONS(1559),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1559),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1559),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1559),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1559),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1559),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1559),
    [anon_sym_LT_POUNDnested] = ACTIONS(1559),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1559),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1559),
    [sym_recover] = ACTIONS(1559),
    [sym_fallback] = ACTIONS(1559),
    [sym_flush] = ACTIONS(1559),
    [anon_sym_LT_POUNDftl] = ACTIONS(1559),
    [anon_sym_LT_POUNDimport] = ACTIONS(1559),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1559),
    [sym_lt] = ACTIONS(1559),
    [sym_nt] = ACTIONS(1559),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1559),
    [sym_rt] = ACTIONS(1559),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1559),
    [sym_stop] = ACTIONS(1559),
    [sym_t] = ACTIONS(1559),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1559),
    [anon_sym_LT_POUNDassign] = ACTIONS(1559),
    [sym_end_assign] = ACTIONS(1559),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1559),
    [sym_end_global] = ACTIONS(1559),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1559),
    [sym_end_local] = ACTIONS(1559),
  },
  [334] = {
    [anon_sym_LT_AT] = ACTIONS(1563),
    [anon_sym_LT_POUND] = ACTIONS(1565),
    [sym_break] = ACTIONS(1563),
    [sym_continue] = ACTIONS(1563),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1563),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1563),
    [anon_sym_LT_POUNDif] = ACTIONS(1563),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1563),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1563),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1563),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1563),
    [sym_fallback] = ACTIONS(1563),
    [sym_flush] = ACTIONS(1563),
    [anon_sym_LT_POUNDftl] = ACTIONS(1563),
    [anon_sym_LT_POUNDimport] = ACTIONS(1563),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1563),
    [sym_lt] = ACTIONS(1563),
    [sym_nt] = ACTIONS(1563),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1563),
    [sym_rt] = ACTIONS(1563),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1563),
    [sym_stop] = ACTIONS(1563),
    [sym_t] = ACTIONS(1563),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1563),
    [anon_sym_LT_POUNDassign] = ACTIONS(1563),
    [sym_end_assign] = ACTIONS(1563),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1563),
    [sym_end_global] = ACTIONS(1563),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1563),
    [sym_end_local] = ACTIONS(1563),
  },
  [335] = {
    [anon_sym_LT_AT] = ACTIONS(1567),
    [anon_sym_LT_POUND] = ACTIONS(1569),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1567),
    [sym_break] = ACTIONS(1567),
    [sym_continue] = ACTIONS(1567),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1567),
    [anon_sym_LT_POUNDitems] = ACTIONS(1567),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1567),
    [anon_sym_LT_POUNDif] = ACTIONS(1567),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1567),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1567),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1567),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1567),
    [sym_fallback] = ACTIONS(1567),
    [sym_flush] = ACTIONS(1567),
    [anon_sym_LT_POUNDftl] = ACTIONS(1567),
    [anon_sym_LT_POUNDimport] = ACTIONS(1567),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1567),
    [sym_lt] = ACTIONS(1567),
    [sym_nt] = ACTIONS(1567),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1567),
    [sym_rt] = ACTIONS(1567),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1567),
    [sym_stop] = ACTIONS(1567),
    [sym_t] = ACTIONS(1567),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1567),
    [anon_sym_LT_POUNDassign] = ACTIONS(1567),
    [sym_end_assign] = ACTIONS(1567),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1567),
    [sym_end_global] = ACTIONS(1567),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1567),
    [sym_end_local] = ACTIONS(1567),
  },
  [336] = {
    [sym_directive] = STATE(334),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_items_middle] = STATE(341),
    [sym_sep] = STATE(334),
    [sym_sep_block] = STATE(211),
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
    [aux_sym_items_repeat1] = STATE(341),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [sym_break] = ACTIONS(1475),
    [sym_continue] = ACTIONS(1475),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1571),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(457),
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
  [337] = {
    [ts_builtin_sym_end] = ACTIONS(1573),
    [sym_comment] = ACTIONS(1573),
    [anon_sym_DOLLAR] = ACTIONS(1573),
    [anon_sym_LT_AT] = ACTIONS(1573),
    [anon_sym_LT_POUND] = ACTIONS(1575),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1573),
    [sym_break] = ACTIONS(1573),
    [sym_continue] = ACTIONS(1573),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1573),
    [anon_sym_LT_POUNDitems] = ACTIONS(1573),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1573),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1573),
    [anon_sym_LT_POUNDif] = ACTIONS(1573),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(1573),
    [anon_sym_LT_POUNDelseif] = ACTIONS(1573),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1573),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1573),
    [anon_sym_LT_POUNDcase] = ACTIONS(1573),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1573),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1573),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(1573),
    [anon_sym_LT_POUNDreturn] = ACTIONS(1573),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1573),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(1573),
    [anon_sym_LT_POUNDnested] = ACTIONS(1573),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1573),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(1573),
    [sym_recover] = ACTIONS(1573),
    [sym_fallback] = ACTIONS(1573),
    [sym_flush] = ACTIONS(1573),
    [anon_sym_LT_POUNDftl] = ACTIONS(1573),
    [anon_sym_LT_POUNDimport] = ACTIONS(1573),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1573),
    [sym_lt] = ACTIONS(1573),
    [sym_nt] = ACTIONS(1573),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1573),
    [sym_rt] = ACTIONS(1573),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1573),
    [sym_stop] = ACTIONS(1573),
    [sym_t] = ACTIONS(1573),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1573),
    [anon_sym_LT_POUNDassign] = ACTIONS(1573),
    [sym_end_assign] = ACTIONS(1573),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1573),
    [sym_end_global] = ACTIONS(1573),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1573),
    [sym_end_local] = ACTIONS(1573),
  },
  [338] = {
    [sym_directive] = STATE(342),
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
    [aux_sym_case_repeat1] = STATE(342),
    [aux_sym_case_repeat2] = STATE(343),
    [anon_sym_LT_AT] = ACTIONS(11),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [sym_break] = ACTIONS(1577),
    [anon_sym_LT_POUNDif] = ACTIONS(15),
    [anon_sym_LT_POUNDswitch] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1579),
    [anon_sym_LT_POUNDcase] = ACTIONS(1579),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1579),
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
    [aux_sym_case_repeat2] = STATE(344),
    [sym_break] = ACTIONS(1581),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1579),
    [anon_sym_LT_POUNDcase] = ACTIONS(1579),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1579),
  },
  [340] = {
    [anon_sym_LT_AT] = ACTIONS(1583),
    [anon_sym_LT_POUND] = ACTIONS(1585),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(1583),
    [sym_break] = ACTIONS(1583),
    [sym_continue] = ACTIONS(1583),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(1583),
    [anon_sym_LT_POUNDitems] = ACTIONS(1583),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1583),
    [anon_sym_LT_POUNDif] = ACTIONS(1583),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1583),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1583),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1583),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1583),
    [sym_fallback] = ACTIONS(1583),
    [sym_flush] = ACTIONS(1583),
    [anon_sym_LT_POUNDftl] = ACTIONS(1583),
    [anon_sym_LT_POUNDimport] = ACTIONS(1583),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1583),
    [sym_lt] = ACTIONS(1583),
    [sym_nt] = ACTIONS(1583),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1583),
    [sym_rt] = ACTIONS(1583),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1583),
    [sym_stop] = ACTIONS(1583),
    [sym_t] = ACTIONS(1583),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1583),
    [anon_sym_LT_POUNDassign] = ACTIONS(1583),
    [sym_end_assign] = ACTIONS(1583),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1583),
    [sym_end_global] = ACTIONS(1583),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1583),
    [sym_end_local] = ACTIONS(1583),
  },
  [341] = {
    [sym_directive] = STATE(334),
    [sym_user_defined] = STATE(10),
    [sym_list] = STATE(10),
    [sym_items_middle] = STATE(341),
    [sym_sep] = STATE(334),
    [sym_sep_block] = STATE(211),
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
    [aux_sym_items_repeat1] = STATE(341),
    [anon_sym_LT_AT] = ACTIONS(1587),
    [anon_sym_LT_POUND] = ACTIONS(1590),
    [sym_break] = ACTIONS(1593),
    [sym_continue] = ACTIONS(1593),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(1596),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(1598),
    [anon_sym_LT_POUNDif] = ACTIONS(1601),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1604),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1607),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1610),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1613),
    [sym_fallback] = ACTIONS(1616),
    [sym_flush] = ACTIONS(1616),
    [anon_sym_LT_POUNDftl] = ACTIONS(1619),
    [anon_sym_LT_POUNDimport] = ACTIONS(1622),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1625),
    [sym_lt] = ACTIONS(1616),
    [sym_nt] = ACTIONS(1616),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1628),
    [sym_rt] = ACTIONS(1616),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1631),
    [sym_stop] = ACTIONS(1616),
    [sym_t] = ACTIONS(1616),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1634),
    [anon_sym_LT_POUNDassign] = ACTIONS(1637),
    [sym_end_assign] = ACTIONS(1640),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1643),
    [sym_end_global] = ACTIONS(1646),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1649),
    [sym_end_local] = ACTIONS(1652),
  },
  [342] = {
    [sym_directive] = STATE(342),
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
    [aux_sym_case_repeat1] = STATE(342),
    [anon_sym_LT_AT] = ACTIONS(1497),
    [anon_sym_LT_POUND] = ACTIONS(1500),
    [sym_break] = ACTIONS(1509),
    [anon_sym_LT_POUNDif] = ACTIONS(1503),
    [anon_sym_LT_POUNDswitch] = ACTIONS(1506),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1509),
    [anon_sym_LT_POUNDcase] = ACTIONS(1509),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1509),
    [anon_sym_LT_POUNDfunction] = ACTIONS(1511),
    [anon_sym_LT_POUNDmacro] = ACTIONS(1514),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(1517),
    [sym_fallback] = ACTIONS(1520),
    [sym_flush] = ACTIONS(1520),
    [anon_sym_LT_POUNDftl] = ACTIONS(1523),
    [anon_sym_LT_POUNDimport] = ACTIONS(1526),
    [anon_sym_LT_POUNDinclude] = ACTIONS(1529),
    [sym_lt] = ACTIONS(1520),
    [sym_nt] = ACTIONS(1520),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(1532),
    [sym_rt] = ACTIONS(1520),
    [anon_sym_LT_POUNDsetting] = ACTIONS(1535),
    [sym_stop] = ACTIONS(1520),
    [sym_t] = ACTIONS(1520),
    [anon_sym_LT_POUNDvisit] = ACTIONS(1538),
    [anon_sym_LT_POUNDassign] = ACTIONS(1541),
    [sym_end_assign] = ACTIONS(1544),
    [anon_sym_LT_POUNDglobal] = ACTIONS(1547),
    [sym_end_global] = ACTIONS(1550),
    [anon_sym_LT_POUNDlocal] = ACTIONS(1553),
    [sym_end_local] = ACTIONS(1556),
  },
  [343] = {
    [aux_sym_case_repeat2] = STATE(344),
    [sym_break] = ACTIONS(1581),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1655),
    [anon_sym_LT_POUNDcase] = ACTIONS(1655),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1655),
  },
  [344] = {
    [aux_sym_case_repeat2] = STATE(344),
    [sym_break] = ACTIONS(1657),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(1660),
    [anon_sym_LT_POUNDcase] = ACTIONS(1660),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(1660),
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
  [187] = {.count = 1, .reusable = true}, SHIFT(105),
  [189] = {.count = 1, .reusable = true}, SHIFT(107),
  [191] = {.count = 1, .reusable = true}, SHIFT(38),
  [193] = {.count = 1, .reusable = true}, SHIFT(37),
  [195] = {.count = 1, .reusable = false}, SHIFT(111),
  [197] = {.count = 1, .reusable = false}, SHIFT(112),
  [199] = {.count = 1, .reusable = false}, SHIFT(113),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_operator, 1),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_operator, 1),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_string, 1),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [213] = {.count = 1, .reusable = true}, SHIFT(117),
  [215] = {.count = 1, .reusable = true}, SHIFT(118),
  [217] = {.count = 1, .reusable = false}, SHIFT(119),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_top_level, 1),
  [221] = {.count = 1, .reusable = false}, REDUCE(sym_top_level, 1),
  [223] = {.count = 1, .reusable = true}, SHIFT(124),
  [225] = {.count = 1, .reusable = true}, SHIFT(127),
  [227] = {.count = 1, .reusable = false}, SHIFT(127),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_group, 1),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_group, 1),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 1),
  [237] = {.count = 1, .reusable = false}, SHIFT(129),
  [239] = {.count = 1, .reusable = true}, SHIFT(132),
  [241] = {.count = 1, .reusable = true}, SHIFT(134),
  [243] = {.count = 1, .reusable = true}, SHIFT(135),
  [245] = {.count = 1, .reusable = true}, SHIFT(136),
  [247] = {.count = 1, .reusable = false}, SHIFT(137),
  [249] = {.count = 1, .reusable = false}, SHIFT(138),
  [251] = {.count = 1, .reusable = true}, SHIFT(139),
  [253] = {.count = 1, .reusable = false}, SHIFT(140),
  [255] = {.count = 1, .reusable = true}, SHIFT(141),
  [257] = {.count = 1, .reusable = true}, SHIFT(143),
  [259] = {.count = 1, .reusable = true}, SHIFT(146),
  [261] = {.count = 1, .reusable = false}, SHIFT(148),
  [263] = {.count = 1, .reusable = true}, SHIFT(151),
  [265] = {.count = 1, .reusable = true}, SHIFT(152),
  [267] = {.count = 1, .reusable = true}, SHIFT(155),
  [269] = {.count = 1, .reusable = true}, SHIFT(156),
  [271] = {.count = 1, .reusable = true}, SHIFT(157),
  [273] = {.count = 1, .reusable = true}, SHIFT(160),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_attempt, 2),
  [277] = {.count = 1, .reusable = false}, REDUCE(sym_attempt, 2),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_attempt_middle, 1),
  [281] = {.count = 1, .reusable = false}, REDUCE(sym_attempt_middle, 1),
  [283] = {.count = 1, .reusable = true}, SHIFT(161),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_ftl, 2),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym_ftl, 2),
  [289] = {.count = 1, .reusable = true}, SHIFT(163),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_import, 2),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_import, 2),
  [295] = {.count = 1, .reusable = true}, SHIFT(164),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [299] = {.count = 1, .reusable = false}, REDUCE(sym_include, 2),
  [301] = {.count = 1, .reusable = true}, SHIFT(165),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_recurse, 2),
  [305] = {.count = 1, .reusable = false}, REDUCE(sym_recurse, 2),
  [307] = {.count = 1, .reusable = true}, SHIFT(166),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_setting, 2),
  [311] = {.count = 1, .reusable = false}, REDUCE(sym_setting, 2),
  [313] = {.count = 1, .reusable = true}, SHIFT(167),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_visit, 2),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym_visit, 2),
  [319] = {.count = 1, .reusable = true}, SHIFT(168),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 2),
  [323] = {.count = 1, .reusable = false}, REDUCE(sym_assign, 2),
  [325] = {.count = 1, .reusable = true}, SHIFT(169),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_global, 2),
  [329] = {.count = 1, .reusable = false}, REDUCE(sym_global, 2),
  [331] = {.count = 1, .reusable = true}, SHIFT(170),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_local, 2),
  [335] = {.count = 1, .reusable = false}, REDUCE(sym_local, 2),
  [337] = {.count = 1, .reusable = true}, SHIFT(171),
  [339] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [341] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [344] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [347] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [350] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [353] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [356] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [359] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [362] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [365] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [368] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [371] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [374] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [377] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [380] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [383] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [386] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [389] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [392] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [395] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [398] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [401] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [404] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [407] = {.count = 1, .reusable = true}, SHIFT(172),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_interpolation, 3),
  [411] = {.count = 1, .reusable = false}, REDUCE(sym_interpolation, 3),
  [413] = {.count = 1, .reusable = true}, SHIFT(175),
  [415] = {.count = 1, .reusable = true}, SHIFT(176),
  [417] = {.count = 1, .reusable = true}, SHIFT(178),
  [419] = {.count = 1, .reusable = true}, SHIFT(181),
  [421] = {.count = 1, .reusable = false}, SHIFT(181),
  [423] = {.count = 1, .reusable = true}, SHIFT(183),
  [425] = {.count = 1, .reusable = true}, SHIFT(187),
  [427] = {.count = 1, .reusable = true}, SHIFT(99),
  [429] = {.count = 1, .reusable = true}, SHIFT(98),
  [431] = {.count = 1, .reusable = true}, SHIFT(192),
  [433] = {.count = 1, .reusable = true}, SHIFT(193),
  [435] = {.count = 1, .reusable = true}, SHIFT(195),
  [437] = {.count = 1, .reusable = true}, SHIFT(198),
  [439] = {.count = 1, .reusable = false}, SHIFT(198),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_user_defined, 3),
  [443] = {.count = 1, .reusable = false}, REDUCE(sym_user_defined, 3),
  [445] = {.count = 1, .reusable = false}, SHIFT(200),
  [447] = {.count = 1, .reusable = true}, SHIFT(203),
  [449] = {.count = 1, .reusable = true}, SHIFT(205),
  [451] = {.count = 1, .reusable = true}, SHIFT(206),
  [453] = {.count = 1, .reusable = true}, SHIFT(207),
  [455] = {.count = 1, .reusable = true}, SHIFT(208),
  [457] = {.count = 1, .reusable = true}, SHIFT(209),
  [459] = {.count = 1, .reusable = true}, SHIFT(213),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_hash, 2),
  [463] = {.count = 1, .reusable = false}, REDUCE(sym_hash, 2),
  [465] = {.count = 1, .reusable = true}, SHIFT(214),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym_as_expression, 2),
  [469] = {.count = 1, .reusable = false}, REDUCE(sym_as_expression, 2),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_built_in, 2),
  [473] = {.count = 1, .reusable = false}, REDUCE(sym_built_in, 2),
  [475] = {.count = 1, .reusable = true}, SHIFT(113),
  [477] = {.count = 1, .reusable = false}, SHIFT(220),
  [479] = {.count = 1, .reusable = true}, SHIFT(223),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 2),
  [483] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 2),
  [485] = {.count = 1, .reusable = true}, REDUCE(sym_sequence, 2),
  [487] = {.count = 1, .reusable = false}, REDUCE(sym_sequence, 2),
  [489] = {.count = 1, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 1),
  [491] = {.count = 1, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 1),
  [493] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 1), SHIFT_REPEAT(226),
  [496] = {.count = 1, .reusable = true}, SHIFT(230),
  [498] = {.count = 1, .reusable = true}, REDUCE(aux_sym_top_level_repeat1, 1),
  [500] = {.count = 1, .reusable = false}, REDUCE(aux_sym_top_level_repeat1, 1),
  [502] = {.count = 1, .reusable = true}, REDUCE(sym_top_level, 2),
  [504] = {.count = 1, .reusable = false}, REDUCE(sym_top_level, 2),
  [506] = {.count = 1, .reusable = true}, REDUCE(sym_top_level, 2, .alias_sequence_id = 1),
  [508] = {.count = 1, .reusable = false}, REDUCE(sym_top_level, 2, .alias_sequence_id = 1),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym_spec_var, 2),
  [512] = {.count = 1, .reusable = false}, REDUCE(sym_spec_var, 2),
  [514] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 2),
  [516] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 2),
  [518] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(28),
  [521] = {.count = 1, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2),
  [523] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(31),
  [526] = {.count = 1, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2),
  [528] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(33),
  [531] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(34),
  [534] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(35),
  [537] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(36),
  [540] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(37),
  [543] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(38),
  [546] = {.count = 1, .reusable = true}, SHIFT(236),
  [548] = {.count = 1, .reusable = true}, SHIFT(237),
  [550] = {.count = 1, .reusable = true}, SHIFT(238),
  [552] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(28),
  [555] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(29),
  [558] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(30),
  [561] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(31),
  [564] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(32),
  [567] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(32),
  [570] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(33),
  [573] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(34),
  [576] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(35),
  [579] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(36),
  [582] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(37),
  [585] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(38),
  [588] = {.count = 1, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2),
  [590] = {.count = 1, .reusable = true}, SHIFT(242),
  [592] = {.count = 1, .reusable = true}, SHIFT(245),
  [594] = {.count = 1, .reusable = true}, SHIFT(246),
  [596] = {.count = 1, .reusable = true}, SHIFT(248),
  [598] = {.count = 1, .reusable = true}, SHIFT(251),
  [600] = {.count = 1, .reusable = false}, SHIFT(251),
  [602] = {.count = 1, .reusable = true}, SHIFT(255),
  [604] = {.count = 1, .reusable = true}, SHIFT(256),
  [606] = {.count = 1, .reusable = true}, SHIFT(257),
  [608] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(46),
  [611] = {.count = 1, .reusable = true}, REDUCE(sym_function, 3),
  [613] = {.count = 1, .reusable = false}, REDUCE(sym_function, 3),
  [615] = {.count = 1, .reusable = true}, SHIFT(263),
  [617] = {.count = 1, .reusable = true}, REDUCE(sym_function_middle, 1),
  [619] = {.count = 1, .reusable = false}, REDUCE(sym_function_middle, 1),
  [621] = {.count = 1, .reusable = true}, SHIFT(265),
  [623] = {.count = 1, .reusable = true}, REDUCE(sym_macro, 3),
  [625] = {.count = 1, .reusable = false}, REDUCE(sym_macro, 3),
  [627] = {.count = 1, .reusable = true}, SHIFT(268),
  [629] = {.count = 1, .reusable = true}, REDUCE(sym_macro_middle, 1),
  [631] = {.count = 1, .reusable = false}, REDUCE(sym_macro_middle, 1),
  [633] = {.count = 1, .reusable = true}, SHIFT(270),
  [635] = {.count = 1, .reusable = true}, REDUCE(sym_attempt, 3),
  [637] = {.count = 1, .reusable = false}, REDUCE(sym_attempt, 3),
  [639] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(3),
  [642] = {.count = 2, .reusable = false}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(4),
  [645] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(5),
  [648] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(6),
  [651] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(7),
  [654] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(8),
  [657] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(9),
  [660] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2),
  [662] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(55),
  [665] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(10),
  [668] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(11),
  [671] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(12),
  [674] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(13),
  [677] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(14),
  [680] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(15),
  [683] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(16),
  [686] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(17),
  [689] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(18),
  [692] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(19),
  [695] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(20),
  [698] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(21),
  [701] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(22),
  [704] = {.count = 1, .reusable = true}, REDUCE(sym_ftl, 3),
  [706] = {.count = 1, .reusable = false}, REDUCE(sym_ftl, 3),
  [708] = {.count = 1, .reusable = true}, REDUCE(sym_import, 3),
  [710] = {.count = 1, .reusable = false}, REDUCE(sym_import, 3),
  [712] = {.count = 1, .reusable = true}, REDUCE(sym_include, 3),
  [714] = {.count = 1, .reusable = false}, REDUCE(sym_include, 3),
  [716] = {.count = 1, .reusable = true}, REDUCE(sym_recurse, 3),
  [718] = {.count = 1, .reusable = false}, REDUCE(sym_recurse, 3),
  [720] = {.count = 1, .reusable = true}, REDUCE(sym_setting, 3),
  [722] = {.count = 1, .reusable = false}, REDUCE(sym_setting, 3),
  [724] = {.count = 1, .reusable = true}, REDUCE(sym_visit, 3),
  [726] = {.count = 1, .reusable = false}, REDUCE(sym_visit, 3),
  [728] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 3),
  [730] = {.count = 1, .reusable = false}, REDUCE(sym_assign, 3),
  [732] = {.count = 1, .reusable = true}, REDUCE(sym_global, 3),
  [734] = {.count = 1, .reusable = false}, REDUCE(sym_global, 3),
  [736] = {.count = 1, .reusable = true}, REDUCE(sym_local, 3),
  [738] = {.count = 1, .reusable = false}, REDUCE(sym_local, 3),
  [740] = {.count = 1, .reusable = true}, SHIFT(273),
  [742] = {.count = 1, .reusable = true}, SHIFT(274),
  [744] = {.count = 1, .reusable = true}, SHIFT(275),
  [746] = {.count = 1, .reusable = true}, REDUCE(sym_interpolation, 4),
  [748] = {.count = 1, .reusable = false}, REDUCE(sym_interpolation, 4),
  [750] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(76),
  [753] = {.count = 1, .reusable = true}, REDUCE(aux_sym_interpolation_repeat1, 2),
  [755] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(78),
  [758] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(79),
  [761] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(79),
  [764] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(80),
  [767] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(81),
  [770] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(82),
  [773] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(83),
  [776] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(84),
  [779] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interpolation_repeat1, 2), SHIFT_REPEAT(85),
  [782] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(76),
  [785] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(78),
  [788] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(80),
  [791] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(81),
  [794] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(82),
  [797] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(83),
  [800] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(84),
  [803] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(85),
  [806] = {.count = 1, .reusable = true}, SHIFT(280),
  [808] = {.count = 1, .reusable = true}, SHIFT(283),
  [810] = {.count = 1, .reusable = true}, SHIFT(284),
  [812] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(89),
  [815] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(92),
  [818] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(94),
  [821] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(95),
  [824] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(96),
  [827] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(97),
  [830] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(98),
  [833] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(99),
  [836] = {.count = 1, .reusable = true}, REDUCE(sym_user_defined, 4),
  [838] = {.count = 1, .reusable = false}, REDUCE(sym_user_defined, 4),
  [840] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(89),
  [843] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(90),
  [846] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(91),
  [849] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(92),
  [852] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(93),
  [855] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(93),
  [858] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(94),
  [861] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(95),
  [864] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(96),
  [867] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(97),
  [870] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(98),
  [873] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(99),
  [876] = {.count = 1, .reusable = true}, REDUCE(sym_list, 4),
  [878] = {.count = 1, .reusable = false}, REDUCE(sym_list, 4),
  [880] = {.count = 1, .reusable = true}, REDUCE(sym_list_middle, 1),
  [882] = {.count = 1, .reusable = false}, REDUCE(sym_list_middle, 1),
  [884] = {.count = 1, .reusable = true}, REDUCE(sym_list_else, 1),
  [886] = {.count = 1, .reusable = true}, REDUCE(sym_sep, 1),
  [888] = {.count = 1, .reusable = false}, REDUCE(sym_sep, 1),
  [890] = {.count = 1, .reusable = true}, SHIFT(291),
  [892] = {.count = 1, .reusable = true}, SHIFT(292),
  [894] = {.count = 1, .reusable = true}, REDUCE(sym_hash, 3),
  [896] = {.count = 1, .reusable = false}, REDUCE(sym_hash, 3),
  [898] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(28),
  [901] = {.count = 1, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2),
  [903] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(31),
  [906] = {.count = 1, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2),
  [908] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(33),
  [911] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(34),
  [914] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(35),
  [917] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(36),
  [920] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(37),
  [923] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(38),
  [926] = {.count = 1, .reusable = true}, REDUCE(sym_built_in, 3),
  [928] = {.count = 1, .reusable = false}, REDUCE(sym_built_in, 3),
  [930] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(113),
  [933] = {.count = 1, .reusable = true}, REDUCE(sym_group, 3),
  [935] = {.count = 1, .reusable = false}, REDUCE(sym_group, 3),
  [937] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(111),
  [940] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(112),
  [943] = {.count = 2, .reusable = false}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(113),
  [946] = {.count = 1, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2),
  [948] = {.count = 1, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 2),
  [950] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat1, 2), SHIFT_REPEAT(119),
  [953] = {.count = 1, .reusable = true}, REDUCE(sym_sequence, 3),
  [955] = {.count = 1, .reusable = false}, REDUCE(sym_sequence, 3),
  [957] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(76),
  [960] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(78),
  [963] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(79),
  [966] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(79),
  [969] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(80),
  [972] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(81),
  [975] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(82),
  [978] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(83),
  [981] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(119),
  [984] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(85),
  [987] = {.count = 1, .reusable = true}, REDUCE(sym_top_level, 3, .alias_sequence_id = 1),
  [989] = {.count = 1, .reusable = false}, REDUCE(sym_top_level, 3, .alias_sequence_id = 1),
  [991] = {.count = 1, .reusable = true}, REDUCE(aux_sym_top_level_repeat1, 2),
  [993] = {.count = 1, .reusable = false}, REDUCE(aux_sym_top_level_repeat1, 2),
  [995] = {.count = 2, .reusable = true}, REDUCE(aux_sym_top_level_repeat1, 2), SHIFT_REPEAT(124),
  [998] = {.count = 1, .reusable = true}, REDUCE(sym_as_expression, 3),
  [1000] = {.count = 1, .reusable = false}, REDUCE(sym_as_expression, 3),
  [1002] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 3),
  [1004] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 3),
  [1006] = {.count = 1, .reusable = true}, REDUCE(sym_if_else, 1),
  [1008] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4),
  [1010] = {.count = 1, .reusable = false}, REDUCE(sym_if, 4),
  [1012] = {.count = 1, .reusable = true}, SHIFT(304),
  [1014] = {.count = 1, .reusable = true}, REDUCE(sym_if_middle, 1),
  [1016] = {.count = 1, .reusable = false}, REDUCE(sym_if_middle, 1),
  [1018] = {.count = 1, .reusable = true}, SHIFT(306),
  [1020] = {.count = 1, .reusable = true}, SHIFT(309),
  [1022] = {.count = 1, .reusable = true}, SHIFT(310),
  [1024] = {.count = 1, .reusable = true}, SHIFT(311),
  [1026] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(134),
  [1029] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(135),
  [1032] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(136),
  [1035] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(137),
  [1038] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(138),
  [1041] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(139),
  [1044] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(140),
  [1047] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(141),
  [1050] = {.count = 1, .reusable = true}, REDUCE(sym_switch, 4),
  [1052] = {.count = 1, .reusable = false}, REDUCE(sym_switch, 4),
  [1054] = {.count = 1, .reusable = true}, REDUCE(sym_default, 1),
  [1056] = {.count = 1, .reusable = true}, REDUCE(sym_switch_middle, 1),
  [1058] = {.count = 1, .reusable = true}, SHIFT(317),
  [1060] = {.count = 1, .reusable = true}, REDUCE(sym_return, 2),
  [1062] = {.count = 1, .reusable = false}, REDUCE(sym_return, 2),
  [1064] = {.count = 1, .reusable = true}, SHIFT(320),
  [1066] = {.count = 1, .reusable = true}, REDUCE(sym_function, 4),
  [1068] = {.count = 1, .reusable = false}, REDUCE(sym_function, 4),
  [1070] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(3),
  [1073] = {.count = 2, .reusable = false}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(4),
  [1076] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(5),
  [1079] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(6),
  [1082] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(7),
  [1085] = {.count = 1, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2),
  [1087] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(152),
  [1090] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(8),
  [1093] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(9),
  [1096] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(10),
  [1099] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(11),
  [1102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(12),
  [1105] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(13),
  [1108] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(14),
  [1111] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(15),
  [1114] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(16),
  [1117] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(17),
  [1120] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(18),
  [1123] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(19),
  [1126] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(20),
  [1129] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(21),
  [1132] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(22),
  [1135] = {.count = 1, .reusable = true}, SHIFT(321),
  [1137] = {.count = 1, .reusable = true}, REDUCE(sym_nested, 2),
  [1139] = {.count = 1, .reusable = false}, REDUCE(sym_nested, 2),
  [1141] = {.count = 1, .reusable = true}, SHIFT(322),
  [1143] = {.count = 1, .reusable = true}, REDUCE(sym_macro, 4),
  [1145] = {.count = 1, .reusable = false}, REDUCE(sym_macro, 4),
  [1147] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(3),
  [1150] = {.count = 2, .reusable = false}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(4),
  [1153] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(5),
  [1156] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(6),
  [1159] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(7),
  [1162] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(152),
  [1165] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(8),
  [1168] = {.count = 1, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2),
  [1170] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(157),
  [1173] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(9),
  [1176] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(10),
  [1179] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(11),
  [1182] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(12),
  [1185] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(13),
  [1188] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(14),
  [1191] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(15),
  [1194] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(16),
  [1197] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(17),
  [1200] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(18),
  [1203] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(19),
  [1206] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(20),
  [1209] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(21),
  [1212] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(22),
  [1215] = {.count = 1, .reusable = true}, SHIFT(323),
  [1217] = {.count = 2, .reusable = true}, REDUCE(aux_sym_top_level_repeat1, 2), SHIFT_REPEAT(178),
  [1220] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(76),
  [1223] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(78),
  [1226] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(80),
  [1229] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(81),
  [1232] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(82),
  [1235] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(83),
  [1238] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(84),
  [1241] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(85),
  [1244] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(89),
  [1247] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(92),
  [1250] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(94),
  [1253] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(95),
  [1256] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(96),
  [1259] = {.count = 2, .reusable = true}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(97),
  [1262] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(98),
  [1265] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(99),
  [1268] = {.count = 2, .reusable = true}, REDUCE(aux_sym_top_level_repeat1, 2), SHIFT_REPEAT(195),
  [1271] = {.count = 1, .reusable = true}, REDUCE(sym_list_else, 2),
  [1273] = {.count = 1, .reusable = true}, SHIFT(325),
  [1275] = {.count = 1, .reusable = true}, REDUCE(sym_sep_block, 2),
  [1277] = {.count = 1, .reusable = false}, REDUCE(sym_sep_block, 2),
  [1279] = {.count = 1, .reusable = true}, REDUCE(sym_list, 5),
  [1281] = {.count = 1, .reusable = false}, REDUCE(sym_list, 5),
  [1283] = {.count = 1, .reusable = true}, SHIFT(326),
  [1285] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(3),
  [1288] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(4),
  [1291] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2),
  [1293] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(206),
  [1296] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(208),
  [1299] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(209),
  [1302] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(5),
  [1305] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(6),
  [1308] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(7),
  [1311] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(8),
  [1314] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(9),
  [1317] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(10),
  [1320] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(11),
  [1323] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(12),
  [1326] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(13),
  [1329] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(14),
  [1332] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(15),
  [1335] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(16),
  [1338] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(17),
  [1341] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(18),
  [1344] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(19),
  [1347] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(20),
  [1350] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(21),
  [1353] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(22),
  [1356] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(113),
  [1359] = {.count = 2, .reusable = false}, REDUCE(aux_sym_as_expression_repeat2, 2), SHIFT_REPEAT(119),
  [1362] = {.count = 1, .reusable = true}, REDUCE(sym_if_else, 2),
  [1364] = {.count = 1, .reusable = true}, REDUCE(sym_elseif, 2),
  [1366] = {.count = 1, .reusable = false}, REDUCE(sym_elseif, 2),
  [1368] = {.count = 1, .reusable = true}, SHIFT(329),
  [1370] = {.count = 1, .reusable = true}, REDUCE(sym_if, 5),
  [1372] = {.count = 1, .reusable = false}, REDUCE(sym_if, 5),
  [1374] = {.count = 1, .reusable = true}, SHIFT(330),
  [1376] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(3),
  [1379] = {.count = 2, .reusable = false}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(4),
  [1382] = {.count = 1, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2),
  [1384] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(5),
  [1387] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(238),
  [1390] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(6),
  [1393] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(7),
  [1396] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(8),
  [1399] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(9),
  [1402] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(10),
  [1405] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(11),
  [1408] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(12),
  [1411] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(13),
  [1414] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(14),
  [1417] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(15),
  [1420] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(16),
  [1423] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(17),
  [1426] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(18),
  [1429] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(19),
  [1432] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(20),
  [1435] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(21),
  [1438] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(22),
  [1441] = {.count = 2, .reusable = true}, REDUCE(aux_sym_top_level_repeat1, 2), SHIFT_REPEAT(248),
  [1444] = {.count = 1, .reusable = true}, SHIFT(331),
  [1446] = {.count = 1, .reusable = true}, REDUCE(sym_default, 2),
  [1448] = {.count = 1, .reusable = true}, REDUCE(sym_switch, 5),
  [1450] = {.count = 1, .reusable = false}, REDUCE(sym_switch, 5),
  [1452] = {.count = 1, .reusable = true}, SHIFT(333),
  [1454] = {.count = 1, .reusable = true}, REDUCE(aux_sym_switch_repeat1, 2),
  [1456] = {.count = 2, .reusable = true}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(256),
  [1459] = {.count = 1, .reusable = true}, REDUCE(sym_return, 3),
  [1461] = {.count = 1, .reusable = false}, REDUCE(sym_return, 3),
  [1463] = {.count = 1, .reusable = true}, REDUCE(sym_function, 5),
  [1465] = {.count = 1, .reusable = false}, REDUCE(sym_function, 5),
  [1467] = {.count = 1, .reusable = true}, REDUCE(sym_nested, 3),
  [1469] = {.count = 1, .reusable = false}, REDUCE(sym_nested, 3),
  [1471] = {.count = 1, .reusable = true}, REDUCE(sym_macro, 5),
  [1473] = {.count = 1, .reusable = false}, REDUCE(sym_macro, 5),
  [1475] = {.count = 1, .reusable = true}, SHIFT(334),
  [1477] = {.count = 1, .reusable = true}, SHIFT(335),
  [1479] = {.count = 1, .reusable = true}, REDUCE(sym_list, 6),
  [1481] = {.count = 1, .reusable = false}, REDUCE(sym_list, 6),
  [1483] = {.count = 1, .reusable = true}, SHIFT(337),
  [1485] = {.count = 1, .reusable = true}, REDUCE(sym_elseif, 3),
  [1487] = {.count = 1, .reusable = false}, REDUCE(sym_elseif, 3),
  [1489] = {.count = 1, .reusable = true}, REDUCE(sym_if, 6),
  [1491] = {.count = 1, .reusable = false}, REDUCE(sym_if, 6),
  [1493] = {.count = 1, .reusable = true}, SHIFT(339),
  [1495] = {.count = 1, .reusable = true}, REDUCE(sym_case, 3),
  [1497] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(3),
  [1500] = {.count = 2, .reusable = false}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(4),
  [1503] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(5),
  [1506] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(6),
  [1509] = {.count = 1, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2),
  [1511] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(7),
  [1514] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(8),
  [1517] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(9),
  [1520] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(10),
  [1523] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(11),
  [1526] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(12),
  [1529] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(13),
  [1532] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(14),
  [1535] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(15),
  [1538] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(16),
  [1541] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(17),
  [1544] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(18),
  [1547] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(19),
  [1550] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(20),
  [1553] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(21),
  [1556] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(22),
  [1559] = {.count = 1, .reusable = true}, REDUCE(sym_switch, 6),
  [1561] = {.count = 1, .reusable = false}, REDUCE(sym_switch, 6),
  [1563] = {.count = 1, .reusable = true}, REDUCE(sym_items_middle, 1),
  [1565] = {.count = 1, .reusable = false}, REDUCE(sym_items_middle, 1),
  [1567] = {.count = 1, .reusable = true}, REDUCE(sym_items, 4),
  [1569] = {.count = 1, .reusable = false}, REDUCE(sym_items, 4),
  [1571] = {.count = 1, .reusable = true}, SHIFT(340),
  [1573] = {.count = 1, .reusable = true}, REDUCE(sym_list, 7),
  [1575] = {.count = 1, .reusable = false}, REDUCE(sym_list, 7),
  [1577] = {.count = 1, .reusable = true}, SHIFT(343),
  [1579] = {.count = 1, .reusable = true}, REDUCE(sym_case, 4),
  [1581] = {.count = 1, .reusable = true}, SHIFT(344),
  [1583] = {.count = 1, .reusable = true}, REDUCE(sym_items, 5),
  [1585] = {.count = 1, .reusable = false}, REDUCE(sym_items, 5),
  [1587] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(3),
  [1590] = {.count = 2, .reusable = false}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(4),
  [1593] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(334),
  [1596] = {.count = 1, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2),
  [1598] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(209),
  [1601] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(5),
  [1604] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(6),
  [1607] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(7),
  [1610] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(8),
  [1613] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(9),
  [1616] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(10),
  [1619] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(11),
  [1622] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(12),
  [1625] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(13),
  [1628] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(14),
  [1631] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(15),
  [1634] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(16),
  [1637] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(17),
  [1640] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(18),
  [1643] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(19),
  [1646] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(20),
  [1649] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(21),
  [1652] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(22),
  [1655] = {.count = 1, .reusable = true}, REDUCE(sym_case, 5),
  [1657] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat2, 2), SHIFT_REPEAT(344),
  [1660] = {.count = 1, .reusable = true}, REDUCE(aux_sym_case_repeat2, 2),
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
