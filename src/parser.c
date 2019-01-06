#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 160
#define SYMBOL_COUNT 106
#define ALIAS_COUNT 0
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_COMMA = 1,
  anon_sym_EQ = 2,
  aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH = 3,
  anon_sym_as = 4,
  anon_sym_using = 5,
  anon_sym_LT_POUNDlist = 6,
  anon_sym_GT = 7,
  anon_sym_LT_SLASH_POUNDlist_GT = 8,
  sym_break = 9,
  sym_continue = 10,
  anon_sym_LT_POUNDelse_GT = 11,
  anon_sym_LT_POUNDitems = 12,
  anon_sym_LT_SLASH_POUNDitems_GT = 13,
  anon_sym_LT_POUNDsep_GT = 14,
  anon_sym_LT_SLASH_POUNDsep_GT = 15,
  anon_sym_LT_POUNDif = 16,
  anon_sym_LT_SLASH_POUNDif_GT = 17,
  anon_sym_LT_POUNDelseif = 18,
  anon_sym_LT_POUNDswitch = 19,
  anon_sym_LT_SLASH_POUNDswitch_GT = 20,
  anon_sym_LT_POUNDcase = 21,
  anon_sym_LT_POUNDdefault_GT = 22,
  anon_sym_LT_POUNDfunction = 23,
  anon_sym_LT_SLASH_POUNDfunction_GT = 24,
  anon_sym_LT_POUNDreturn = 25,
  anon_sym_LT_POUNDmacro = 26,
  anon_sym_LT_SLASH_POUNDmacro_GT = 27,
  anon_sym_LT_POUNDnested = 28,
  anon_sym_LT_POUNDattempt_GT = 29,
  anon_sym_LT_SLASH_POUNDattempt_GT = 30,
  sym_recover = 31,
  sym_fallback = 32,
  sym_flush = 33,
  anon_sym_LT_POUNDftl = 34,
  anon_sym_LT_POUNDimport = 35,
  anon_sym_LT_POUNDinclude = 36,
  sym_lt = 37,
  sym_nt = 38,
  anon_sym_LT_POUNDrecurse = 39,
  sym_rt = 40,
  anon_sym_LT_POUNDsetting = 41,
  sym_stop = 42,
  sym_t = 43,
  anon_sym_LT_POUNDvisit = 44,
  anon_sym_LT_POUNDassign = 45,
  sym_end_assign = 46,
  anon_sym_LT_POUNDglobal = 47,
  sym_end_global = 48,
  anon_sym_LT_POUNDlocal = 49,
  sym_end_local = 50,
  sym_source_file = 51,
  sym__definition = 52,
  sym_directive = 53,
  sym_parameter_pattern = 54,
  sym_paramPattern1 = 55,
  sym_paramPattern2 = 56,
  sym_paramPattern3 = 57,
  sym_unary_expression = 58,
  sym_binary_expression = 59,
  sym_expression = 60,
  sym_parameter = 61,
  sym_operator = 62,
  sym_list = 63,
  sym_list_middle = 64,
  sym_items_middle = 65,
  sym_list_else = 66,
  sym_items = 67,
  sym_sep = 68,
  sym_sep_block = 69,
  sym_if = 70,
  sym_if_else = 71,
  sym_elseif = 72,
  sym_if_middle = 73,
  sym_switch = 74,
  sym_case = 75,
  sym_default = 76,
  sym_switch_middle = 77,
  sym_function = 78,
  sym_function_middle = 79,
  sym_return = 80,
  sym_macro = 81,
  sym_macro_middle = 82,
  sym_nested = 83,
  sym_attempt = 84,
  sym_attempt_middle = 85,
  sym_ftl = 86,
  sym_import = 87,
  sym_include = 88,
  sym_recurse = 89,
  sym_setting = 90,
  sym_visit = 91,
  sym_assign = 92,
  sym_global = 93,
  sym_local = 94,
  aux_sym_source_file_repeat1 = 95,
  aux_sym_list_repeat1 = 96,
  aux_sym_items_repeat1 = 97,
  aux_sym_if_repeat1 = 98,
  aux_sym_switch_repeat1 = 99,
  aux_sym_case_repeat1 = 100,
  aux_sym_case_repeat2 = 101,
  aux_sym_function_repeat1 = 102,
  aux_sym_function_repeat2 = 103,
  aux_sym_macro_repeat1 = 104,
  aux_sym_attempt_repeat1 = 105,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ] = "=",
  [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = "/[a-zA-Z0-9\\_]+/",
  [anon_sym_as] = "as",
  [anon_sym_using] = "using",
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
  [sym_parameter_pattern] = "parameter_pattern",
  [sym_paramPattern1] = "paramPattern1",
  [sym_paramPattern2] = "paramPattern2",
  [sym_paramPattern3] = "paramPattern3",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_expression] = "expression",
  [sym_parameter] = "parameter",
  [sym_operator] = "operator",
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
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_items_repeat1] = "items_repeat1",
  [aux_sym_if_repeat1] = "if_repeat1",
  [aux_sym_switch_repeat1] = "switch_repeat1",
  [aux_sym_case_repeat1] = "case_repeat1",
  [aux_sym_case_repeat2] = "case_repeat2",
  [aux_sym_function_repeat1] = "function_repeat1",
  [aux_sym_function_repeat2] = "function_repeat2",
  [aux_sym_macro_repeat1] = "macro_repeat1",
  [aux_sym_attempt_repeat1] = "attempt_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
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
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
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
  [aux_sym_function_repeat2] = {
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
      if (lookahead == ',')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(3);
      if (lookahead == '=')
        ADVANCE(229);
      if (lookahead == '>')
        ADVANCE(230);
      if (lookahead == 'a')
        ADVANCE(231);
      if (lookahead == 'u')
        ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(233);
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
        ADVANCE(163);
      END_STATE();
    case 4:
      if (lookahead == 'a')
        ADVANCE(5);
      if (lookahead == 'b')
        ADVANCE(18);
      if (lookahead == 'c')
        ADVANCE(24);
      if (lookahead == 'd')
        ADVANCE(36);
      if (lookahead == 'e')
        ADVANCE(44);
      if (lookahead == 'f')
        ADVANCE(51);
      if (lookahead == 'g')
        ADVANCE(74);
      if (lookahead == 'i')
        ADVANCE(80);
      if (lookahead == 'l')
        ADVANCE(97);
      if (lookahead == 'm')
        ADVANCE(107);
      if (lookahead == 'n')
        ADVANCE(112);
      if (lookahead == 'r')
        ADVANCE(120);
      if (lookahead == 's')
        ADVANCE(138);
      if (lookahead == 't')
        ADVANCE(156);
      if (lookahead == 'v')
        ADVANCE(158);
      END_STATE();
    case 5:
      if (lookahead == 's')
        ADVANCE(6);
      if (lookahead == 't')
        ADVANCE(11);
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
      if (lookahead == '>')
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LT_POUNDattempt_GT);
      END_STATE();
    case 18:
      if (lookahead == 'r')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'e')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'a')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'k')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '>')
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_break);
      END_STATE();
    case 24:
      if (lookahead == 'a')
        ADVANCE(25);
      if (lookahead == 'o')
        ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 's')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'e')
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LT_POUNDcase);
      END_STATE();
    case 28:
      if (lookahead == 'n')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 't')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'i')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'n')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'u')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'e')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '>')
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_continue);
      END_STATE();
    case 36:
      if (lookahead == 'e')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'f')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'a')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'u')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'l')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 't')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == '>')
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LT_POUNDdefault_GT);
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
      ACCEPT_TOKEN(anon_sym_LT_POUNDelse_GT);
      END_STATE();
    case 49:
      if (lookahead == 'f')
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT_POUNDelseif);
      END_STATE();
    case 51:
      if (lookahead == 'a')
        ADVANCE(52);
      if (lookahead == 'l')
        ADVANCE(60);
      if (lookahead == 't')
        ADVANCE(65);
      if (lookahead == 'u')
        ADVANCE(67);
      END_STATE();
    case 52:
      if (lookahead == 'l')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'l')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'b')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'a')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'c')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'k')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == '>')
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_fallback);
      END_STATE();
    case 60:
      if (lookahead == 'u')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 's')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'h')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == '>')
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_flush);
      END_STATE();
    case 65:
      if (lookahead == 'l')
        ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LT_POUNDftl);
      END_STATE();
    case 67:
      if (lookahead == 'n')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'c')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 't')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'i')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'o')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'n')
        ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LT_POUNDfunction);
      END_STATE();
    case 74:
      if (lookahead == 'l')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 'o')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'b')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 'a')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'l')
        ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT_POUNDglobal);
      END_STATE();
    case 80:
      if (lookahead == 'f')
        ADVANCE(81);
      if (lookahead == 'm')
        ADVANCE(82);
      if (lookahead == 'n')
        ADVANCE(87);
      if (lookahead == 't')
        ADVANCE(93);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT_POUNDif);
      END_STATE();
    case 82:
      if (lookahead == 'p')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'o')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'r')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 't')
        ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LT_POUNDimport);
      END_STATE();
    case 87:
      if (lookahead == 'c')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'l')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'u')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'd')
        ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'e')
        ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT_POUNDinclude);
      END_STATE();
    case 93:
      if (lookahead == 'e')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'm')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 's')
        ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LT_POUNDitems);
      END_STATE();
    case 97:
      if (lookahead == 'i')
        ADVANCE(98);
      if (lookahead == 'o')
        ADVANCE(101);
      if (lookahead == 't')
        ADVANCE(105);
      END_STATE();
    case 98:
      if (lookahead == 's')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 't')
        ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LT_POUNDlist);
      END_STATE();
    case 101:
      if (lookahead == 'c')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'a')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'l')
        ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LT_POUNDlocal);
      END_STATE();
    case 105:
      if (lookahead == '>')
        ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_lt);
      END_STATE();
    case 107:
      if (lookahead == 'a')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'c')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'r')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'o')
        ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LT_POUNDmacro);
      END_STATE();
    case 112:
      if (lookahead == 'e')
        ADVANCE(113);
      if (lookahead == 't')
        ADVANCE(118);
      END_STATE();
    case 113:
      if (lookahead == 's')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 't')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'e')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'd')
        ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LT_POUNDnested);
      END_STATE();
    case 118:
      if (lookahead == '>')
        ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_nt);
      END_STATE();
    case 120:
      if (lookahead == 'e')
        ADVANCE(121);
      if (lookahead == 't')
        ADVANCE(136);
      END_STATE();
    case 121:
      if (lookahead == 'c')
        ADVANCE(122);
      if (lookahead == 't')
        ADVANCE(132);
      END_STATE();
    case 122:
      if (lookahead == 'o')
        ADVANCE(123);
      if (lookahead == 'u')
        ADVANCE(128);
      END_STATE();
    case 123:
      if (lookahead == 'v')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 'e')
        ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == 'r')
        ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == '>')
        ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_recover);
      END_STATE();
    case 128:
      if (lookahead == 'r')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 's')
        ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 'e')
        ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LT_POUNDrecurse);
      END_STATE();
    case 132:
      if (lookahead == 'u')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'r')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == 'n')
        ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LT_POUNDreturn);
      END_STATE();
    case 136:
      if (lookahead == '>')
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_rt);
      END_STATE();
    case 138:
      if (lookahead == 'e')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(147);
      if (lookahead == 'w')
        ADVANCE(151);
      END_STATE();
    case 139:
      if (lookahead == 'p')
        ADVANCE(140);
      if (lookahead == 't')
        ADVANCE(142);
      END_STATE();
    case 140:
      if (lookahead == '>')
        ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LT_POUNDsep_GT);
      END_STATE();
    case 142:
      if (lookahead == 't')
        ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 'i')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'n')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'g')
        ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LT_POUNDsetting);
      END_STATE();
    case 147:
      if (lookahead == 'o')
        ADVANCE(148);
      END_STATE();
    case 148:
      if (lookahead == 'p')
        ADVANCE(149);
      END_STATE();
    case 149:
      if (lookahead == '>')
        ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_stop);
      END_STATE();
    case 151:
      if (lookahead == 'i')
        ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 't')
        ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == 'c')
        ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == 'h')
        ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LT_POUNDswitch);
      END_STATE();
    case 156:
      if (lookahead == '>')
        ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_t);
      END_STATE();
    case 158:
      if (lookahead == 'i')
        ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 's')
        ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 'i')
        ADVANCE(161);
      END_STATE();
    case 161:
      if (lookahead == 't')
        ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LT_POUNDvisit);
      END_STATE();
    case 163:
      if (lookahead == '#')
        ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'a')
        ADVANCE(165);
      if (lookahead == 'f')
        ADVANCE(179);
      if (lookahead == 'g')
        ADVANCE(188);
      if (lookahead == 'i')
        ADVANCE(195);
      if (lookahead == 'l')
        ADVANCE(203);
      if (lookahead == 'm')
        ADVANCE(213);
      if (lookahead == 's')
        ADVANCE(219);
      END_STATE();
    case 165:
      if (lookahead == 's')
        ADVANCE(166);
      if (lookahead == 't')
        ADVANCE(172);
      END_STATE();
    case 166:
      if (lookahead == 's')
        ADVANCE(167);
      END_STATE();
    case 167:
      if (lookahead == 'i')
        ADVANCE(168);
      END_STATE();
    case 168:
      if (lookahead == 'g')
        ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 'n')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == '>')
        ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_end_assign);
      END_STATE();
    case 172:
      if (lookahead == 't')
        ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == 'e')
        ADVANCE(174);
      END_STATE();
    case 174:
      if (lookahead == 'm')
        ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead == 'p')
        ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 't')
        ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == '>')
        ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDattempt_GT);
      END_STATE();
    case 179:
      if (lookahead == 'u')
        ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 'n')
        ADVANCE(181);
      END_STATE();
    case 181:
      if (lookahead == 'c')
        ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == 't')
        ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == 'i')
        ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead == 'o')
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
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDfunction_GT);
      END_STATE();
    case 188:
      if (lookahead == 'l')
        ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == 'o')
        ADVANCE(190);
      END_STATE();
    case 190:
      if (lookahead == 'b')
        ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == 'a')
        ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == 'l')
        ADVANCE(193);
      END_STATE();
    case 193:
      if (lookahead == '>')
        ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_end_global);
      END_STATE();
    case 195:
      if (lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 't')
        ADVANCE(198);
      END_STATE();
    case 196:
      if (lookahead == '>')
        ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDif_GT);
      END_STATE();
    case 198:
      if (lookahead == 'e')
        ADVANCE(199);
      END_STATE();
    case 199:
      if (lookahead == 'm')
        ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead == 's')
        ADVANCE(201);
      END_STATE();
    case 201:
      if (lookahead == '>')
        ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDitems_GT);
      END_STATE();
    case 203:
      if (lookahead == 'i')
        ADVANCE(204);
      if (lookahead == 'o')
        ADVANCE(208);
      END_STATE();
    case 204:
      if (lookahead == 's')
        ADVANCE(205);
      END_STATE();
    case 205:
      if (lookahead == 't')
        ADVANCE(206);
      END_STATE();
    case 206:
      if (lookahead == '>')
        ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDlist_GT);
      END_STATE();
    case 208:
      if (lookahead == 'c')
        ADVANCE(209);
      END_STATE();
    case 209:
      if (lookahead == 'a')
        ADVANCE(210);
      END_STATE();
    case 210:
      if (lookahead == 'l')
        ADVANCE(211);
      END_STATE();
    case 211:
      if (lookahead == '>')
        ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_end_local);
      END_STATE();
    case 213:
      if (lookahead == 'a')
        ADVANCE(214);
      END_STATE();
    case 214:
      if (lookahead == 'c')
        ADVANCE(215);
      END_STATE();
    case 215:
      if (lookahead == 'r')
        ADVANCE(216);
      END_STATE();
    case 216:
      if (lookahead == 'o')
        ADVANCE(217);
      END_STATE();
    case 217:
      if (lookahead == '>')
        ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDmacro_GT);
      END_STATE();
    case 219:
      if (lookahead == 'e')
        ADVANCE(220);
      if (lookahead == 'w')
        ADVANCE(223);
      END_STATE();
    case 220:
      if (lookahead == 'p')
        ADVANCE(221);
      END_STATE();
    case 221:
      if (lookahead == '>')
        ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDsep_GT);
      END_STATE();
    case 223:
      if (lookahead == 'i')
        ADVANCE(224);
      END_STATE();
    case 224:
      if (lookahead == 't')
        ADVANCE(225);
      END_STATE();
    case 225:
      if (lookahead == 'c')
        ADVANCE(226);
      END_STATE();
    case 226:
      if (lookahead == 'h')
        ADVANCE(227);
      END_STATE();
    case 227:
      if (lookahead == '>')
        ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUNDswitch_GT);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(233);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(233);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(233);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(233);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH);
      if (lookahead == 'g')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(233);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_using);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(233);
      END_STATE();
    case 239:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(239);
      END_STATE();
    case 240:
      if (lookahead == '#')
        ADVANCE(241);
      if (lookahead == '/')
        ADVANCE(249);
      END_STATE();
    case 241:
      if (lookahead == 'a')
        ADVANCE(5);
      if (lookahead == 'f')
        ADVANCE(51);
      if (lookahead == 'g')
        ADVANCE(74);
      if (lookahead == 'i')
        ADVANCE(242);
      if (lookahead == 'l')
        ADVANCE(97);
      if (lookahead == 'm')
        ADVANCE(107);
      if (lookahead == 'n')
        ADVANCE(243);
      if (lookahead == 'r')
        ADVANCE(244);
      if (lookahead == 's')
        ADVANCE(247);
      if (lookahead == 't')
        ADVANCE(156);
      if (lookahead == 'v')
        ADVANCE(158);
      END_STATE();
    case 242:
      if (lookahead == 'f')
        ADVANCE(81);
      if (lookahead == 'm')
        ADVANCE(82);
      if (lookahead == 'n')
        ADVANCE(87);
      END_STATE();
    case 243:
      if (lookahead == 't')
        ADVANCE(118);
      END_STATE();
    case 244:
      if (lookahead == 'e')
        ADVANCE(245);
      if (lookahead == 't')
        ADVANCE(136);
      END_STATE();
    case 245:
      if (lookahead == 'c')
        ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead == 'u')
        ADVANCE(128);
      END_STATE();
    case 247:
      if (lookahead == 'e')
        ADVANCE(248);
      if (lookahead == 't')
        ADVANCE(147);
      if (lookahead == 'w')
        ADVANCE(151);
      END_STATE();
    case 248:
      if (lookahead == 't')
        ADVANCE(142);
      END_STATE();
    case 249:
      if (lookahead == '#')
        ADVANCE(250);
      END_STATE();
    case 250:
      if (lookahead == 'a')
        ADVANCE(251);
      if (lookahead == 'g')
        ADVANCE(188);
      if (lookahead == 'l')
        ADVANCE(252);
      END_STATE();
    case 251:
      if (lookahead == 's')
        ADVANCE(166);
      END_STATE();
    case 252:
      if (lookahead == 'o')
        ADVANCE(208);
      END_STATE();
    case 253:
      if (lookahead == ',')
        ADVANCE(2);
      if (lookahead == '=')
        ADVANCE(229);
      if (lookahead == '>')
        ADVANCE(230);
      if (lookahead == 'a')
        ADVANCE(231);
      if (lookahead == 'u')
        ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(233);
      END_STATE();
    case 254:
      if (lookahead == '<')
        ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(254);
      END_STATE();
    case 255:
      if (lookahead == '#')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(259);
      END_STATE();
    case 256:
      if (lookahead == 'a')
        ADVANCE(5);
      if (lookahead == 'f')
        ADVANCE(51);
      if (lookahead == 'g')
        ADVANCE(74);
      if (lookahead == 'i')
        ADVANCE(242);
      if (lookahead == 'l')
        ADVANCE(97);
      if (lookahead == 'm')
        ADVANCE(107);
      if (lookahead == 'n')
        ADVANCE(243);
      if (lookahead == 'r')
        ADVANCE(257);
      if (lookahead == 's')
        ADVANCE(247);
      if (lookahead == 't')
        ADVANCE(156);
      if (lookahead == 'v')
        ADVANCE(158);
      END_STATE();
    case 257:
      if (lookahead == 'e')
        ADVANCE(258);
      if (lookahead == 't')
        ADVANCE(136);
      END_STATE();
    case 258:
      if (lookahead == 'c')
        ADVANCE(122);
      END_STATE();
    case 259:
      if (lookahead == '#')
        ADVANCE(260);
      END_STATE();
    case 260:
      if (lookahead == 'a')
        ADVANCE(165);
      if (lookahead == 'g')
        ADVANCE(188);
      if (lookahead == 'l')
        ADVANCE(252);
      END_STATE();
    case 261:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(261);
      END_STATE();
    case 262:
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(263);
      END_STATE();
    case 263:
      if (lookahead == '#')
        ADVANCE(264);
      END_STATE();
    case 264:
      if (lookahead == 'a')
        ADVANCE(165);
      if (lookahead == 'f')
        ADVANCE(179);
      if (lookahead == 'g')
        ADVANCE(188);
      if (lookahead == 'i')
        ADVANCE(195);
      if (lookahead == 'l')
        ADVANCE(203);
      if (lookahead == 'm')
        ADVANCE(213);
      if (lookahead == 's')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 'w')
        ADVANCE(223);
      END_STATE();
    case 266:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(266);
      END_STATE();
    case 267:
      if (lookahead == ',')
        ADVANCE(2);
      if (lookahead == '=')
        ADVANCE(229);
      if (lookahead == '>')
        ADVANCE(230);
      if (lookahead == 'a')
        ADVANCE(268);
      if (lookahead == 'u')
        ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(267);
      END_STATE();
    case 268:
      if (lookahead == 's')
        ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 270:
      if (lookahead == 's')
        ADVANCE(271);
      END_STATE();
    case 271:
      if (lookahead == 'i')
        ADVANCE(272);
      END_STATE();
    case 272:
      if (lookahead == 'n')
        ADVANCE(273);
      END_STATE();
    case 273:
      if (lookahead == 'g')
        ADVANCE(274);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 275:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(233);
      END_STATE();
    case 276:
      if (lookahead == '<')
        ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(276);
      END_STATE();
    case 277:
      if (lookahead == '#')
        ADVANCE(278);
      if (lookahead == '/')
        ADVANCE(281);
      END_STATE();
    case 278:
      if (lookahead == 'a')
        ADVANCE(5);
      if (lookahead == 'f')
        ADVANCE(51);
      if (lookahead == 'g')
        ADVANCE(74);
      if (lookahead == 'i')
        ADVANCE(242);
      if (lookahead == 'l')
        ADVANCE(97);
      if (lookahead == 'm')
        ADVANCE(107);
      if (lookahead == 'n')
        ADVANCE(243);
      if (lookahead == 'r')
        ADVANCE(279);
      if (lookahead == 's')
        ADVANCE(247);
      if (lookahead == 't')
        ADVANCE(156);
      if (lookahead == 'v')
        ADVANCE(158);
      END_STATE();
    case 279:
      if (lookahead == 'e')
        ADVANCE(280);
      if (lookahead == 't')
        ADVANCE(136);
      END_STATE();
    case 280:
      if (lookahead == 'c')
        ADVANCE(246);
      if (lookahead == 't')
        ADVANCE(132);
      END_STATE();
    case 281:
      if (lookahead == '#')
        ADVANCE(282);
      END_STATE();
    case 282:
      if (lookahead == 'a')
        ADVANCE(251);
      if (lookahead == 'f')
        ADVANCE(179);
      if (lookahead == 'g')
        ADVANCE(188);
      if (lookahead == 'l')
        ADVANCE(252);
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
        ADVANCE(286);
      END_STATE();
    case 285:
      if (lookahead == 'a')
        ADVANCE(5);
      if (lookahead == 'f')
        ADVANCE(51);
      if (lookahead == 'g')
        ADVANCE(74);
      if (lookahead == 'i')
        ADVANCE(242);
      if (lookahead == 'l')
        ADVANCE(97);
      if (lookahead == 'm')
        ADVANCE(107);
      if (lookahead == 'n')
        ADVANCE(112);
      if (lookahead == 'r')
        ADVANCE(279);
      if (lookahead == 's')
        ADVANCE(247);
      if (lookahead == 't')
        ADVANCE(156);
      if (lookahead == 'v')
        ADVANCE(158);
      END_STATE();
    case 286:
      if (lookahead == '#')
        ADVANCE(287);
      END_STATE();
    case 287:
      if (lookahead == 'a')
        ADVANCE(251);
      if (lookahead == 'g')
        ADVANCE(188);
      if (lookahead == 'l')
        ADVANCE(252);
      if (lookahead == 'm')
        ADVANCE(213);
      END_STATE();
    case 288:
      if (lookahead == '<')
        ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(288);
      END_STATE();
    case 289:
      if (lookahead == '#')
        ADVANCE(290);
      if (lookahead == '/')
        ADVANCE(296);
      END_STATE();
    case 290:
      if (lookahead == 'a')
        ADVANCE(5);
      if (lookahead == 'b')
        ADVANCE(18);
      if (lookahead == 'c')
        ADVANCE(291);
      if (lookahead == 'e')
        ADVANCE(292);
      if (lookahead == 'f')
        ADVANCE(51);
      if (lookahead == 'g')
        ADVANCE(74);
      if (lookahead == 'i')
        ADVANCE(80);
      if (lookahead == 'l')
        ADVANCE(97);
      if (lookahead == 'm')
        ADVANCE(107);
      if (lookahead == 'n')
        ADVANCE(243);
      if (lookahead == 'r')
        ADVANCE(244);
      if (lookahead == 's')
        ADVANCE(138);
      if (lookahead == 't')
        ADVANCE(156);
      if (lookahead == 'v')
        ADVANCE(158);
      END_STATE();
    case 291:
      if (lookahead == 'o')
        ADVANCE(28);
      END_STATE();
    case 292:
      if (lookahead == 'l')
        ADVANCE(293);
      END_STATE();
    case 293:
      if (lookahead == 's')
        ADVANCE(294);
      END_STATE();
    case 294:
      if (lookahead == 'e')
        ADVANCE(295);
      END_STATE();
    case 295:
      if (lookahead == '>')
        ADVANCE(48);
      END_STATE();
    case 296:
      if (lookahead == '#')
        ADVANCE(297);
      END_STATE();
    case 297:
      if (lookahead == 'a')
        ADVANCE(251);
      if (lookahead == 'g')
        ADVANCE(188);
      if (lookahead == 'l')
        ADVANCE(203);
      END_STATE();
    case 298:
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
        ADVANCE(300);
      if (lookahead == '/')
        ADVANCE(301);
      END_STATE();
    case 300:
      if (lookahead == 'a')
        ADVANCE(5);
      if (lookahead == 'e')
        ADVANCE(44);
      if (lookahead == 'f')
        ADVANCE(51);
      if (lookahead == 'g')
        ADVANCE(74);
      if (lookahead == 'i')
        ADVANCE(242);
      if (lookahead == 'l')
        ADVANCE(97);
      if (lookahead == 'm')
        ADVANCE(107);
      if (lookahead == 'n')
        ADVANCE(243);
      if (lookahead == 'r')
        ADVANCE(244);
      if (lookahead == 's')
        ADVANCE(247);
      if (lookahead == 't')
        ADVANCE(156);
      if (lookahead == 'v')
        ADVANCE(158);
      END_STATE();
    case 301:
      if (lookahead == '#')
        ADVANCE(302);
      END_STATE();
    case 302:
      if (lookahead == 'a')
        ADVANCE(251);
      if (lookahead == 'g')
        ADVANCE(188);
      if (lookahead == 'i')
        ADVANCE(303);
      if (lookahead == 'l')
        ADVANCE(252);
      END_STATE();
    case 303:
      if (lookahead == 'f')
        ADVANCE(196);
      END_STATE();
    case 304:
      if (lookahead == '<')
        ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(304);
      END_STATE();
    case 305:
      if (lookahead == '#')
        ADVANCE(306);
      if (lookahead == '/')
        ADVANCE(308);
      END_STATE();
    case 306:
      if (lookahead == 'a')
        ADVANCE(5);
      if (lookahead == 'b')
        ADVANCE(18);
      if (lookahead == 'c')
        ADVANCE(307);
      if (lookahead == 'd')
        ADVANCE(36);
      if (lookahead == 'f')
        ADVANCE(51);
      if (lookahead == 'g')
        ADVANCE(74);
      if (lookahead == 'i')
        ADVANCE(242);
      if (lookahead == 'l')
        ADVANCE(97);
      if (lookahead == 'm')
        ADVANCE(107);
      if (lookahead == 'n')
        ADVANCE(243);
      if (lookahead == 'r')
        ADVANCE(244);
      if (lookahead == 's')
        ADVANCE(247);
      if (lookahead == 't')
        ADVANCE(156);
      if (lookahead == 'v')
        ADVANCE(158);
      END_STATE();
    case 307:
      if (lookahead == 'a')
        ADVANCE(25);
      END_STATE();
    case 308:
      if (lookahead == '#')
        ADVANCE(309);
      END_STATE();
    case 309:
      if (lookahead == 'a')
        ADVANCE(251);
      if (lookahead == 'g')
        ADVANCE(188);
      if (lookahead == 'l')
        ADVANCE(252);
      if (lookahead == 's')
        ADVANCE(265);
      END_STATE();
    case 310:
      if (lookahead == '<')
        ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(310);
      END_STATE();
    case 311:
      if (lookahead == '#')
        ADVANCE(290);
      if (lookahead == '/')
        ADVANCE(312);
      END_STATE();
    case 312:
      if (lookahead == '#')
        ADVANCE(313);
      END_STATE();
    case 313:
      if (lookahead == 'a')
        ADVANCE(251);
      if (lookahead == 'g')
        ADVANCE(188);
      if (lookahead == 'i')
        ADVANCE(314);
      if (lookahead == 'l')
        ADVANCE(203);
      if (lookahead == 's')
        ADVANCE(315);
      END_STATE();
    case 314:
      if (lookahead == 't')
        ADVANCE(198);
      END_STATE();
    case 315:
      if (lookahead == 'e')
        ADVANCE(220);
      END_STATE();
    case 316:
      if (lookahead == '<')
        ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(316);
      END_STATE();
    case 317:
      if (lookahead == '#')
        ADVANCE(285);
      if (lookahead == '/')
        ADVANCE(318);
      END_STATE();
    case 318:
      if (lookahead == '#')
        ADVANCE(319);
      END_STATE();
    case 319:
      if (lookahead == 'a')
        ADVANCE(251);
      if (lookahead == 'f')
        ADVANCE(179);
      if (lookahead == 'g')
        ADVANCE(188);
      if (lookahead == 'l')
        ADVANCE(252);
      if (lookahead == 'm')
        ADVANCE(213);
      END_STATE();
    case 320:
      if (lookahead == '<')
        ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(320);
      END_STATE();
    case 321:
      if (lookahead == '#')
        ADVANCE(322);
      if (lookahead == '/')
        ADVANCE(323);
      END_STATE();
    case 322:
      if (lookahead == 'a')
        ADVANCE(5);
      if (lookahead == 'b')
        ADVANCE(18);
      if (lookahead == 'c')
        ADVANCE(291);
      if (lookahead == 'f')
        ADVANCE(51);
      if (lookahead == 'g')
        ADVANCE(74);
      if (lookahead == 'i')
        ADVANCE(242);
      if (lookahead == 'l')
        ADVANCE(97);
      if (lookahead == 'm')
        ADVANCE(107);
      if (lookahead == 'n')
        ADVANCE(243);
      if (lookahead == 'r')
        ADVANCE(244);
      if (lookahead == 's')
        ADVANCE(138);
      if (lookahead == 't')
        ADVANCE(156);
      if (lookahead == 'v')
        ADVANCE(158);
      END_STATE();
    case 323:
      if (lookahead == '#')
        ADVANCE(324);
      END_STATE();
    case 324:
      if (lookahead == 'a')
        ADVANCE(251);
      if (lookahead == 'g')
        ADVANCE(188);
      if (lookahead == 'i')
        ADVANCE(314);
      if (lookahead == 'l')
        ADVANCE(252);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 239},
  [2] = {.lex_state = 253},
  [3] = {.lex_state = 253},
  [4] = {.lex_state = 253},
  [5] = {.lex_state = 253},
  [6] = {.lex_state = 253},
  [7] = {.lex_state = 254},
  [8] = {.lex_state = 261},
  [9] = {.lex_state = 253},
  [10] = {.lex_state = 253},
  [11] = {.lex_state = 253},
  [12] = {.lex_state = 253},
  [13] = {.lex_state = 253},
  [14] = {.lex_state = 253},
  [15] = {.lex_state = 253},
  [16] = {.lex_state = 261},
  [17] = {.lex_state = 253},
  [18] = {.lex_state = 261},
  [19] = {.lex_state = 253},
  [20] = {.lex_state = 261},
  [21] = {.lex_state = 266},
  [22] = {.lex_state = 239},
  [23] = {.lex_state = 267},
  [24] = {.lex_state = 275},
  [25] = {.lex_state = 253},
  [26] = {.lex_state = 253},
  [27] = {.lex_state = 267},
  [28] = {.lex_state = 253},
  [29] = {.lex_state = 275},
  [30] = {.lex_state = 253},
  [31] = {.lex_state = 253},
  [32] = {.lex_state = 253},
  [33] = {.lex_state = 276},
  [34] = {.lex_state = 253},
  [35] = {.lex_state = 283},
  [36] = {.lex_state = 253},
  [37] = {.lex_state = 261},
  [38] = {.lex_state = 254},
  [39] = {.lex_state = 254},
  [40] = {.lex_state = 261},
  [41] = {.lex_state = 253},
  [42] = {.lex_state = 261},
  [43] = {.lex_state = 253},
  [44] = {.lex_state = 261},
  [45] = {.lex_state = 253},
  [46] = {.lex_state = 261},
  [47] = {.lex_state = 253},
  [48] = {.lex_state = 261},
  [49] = {.lex_state = 253},
  [50] = {.lex_state = 261},
  [51] = {.lex_state = 253},
  [52] = {.lex_state = 261},
  [53] = {.lex_state = 253},
  [54] = {.lex_state = 261},
  [55] = {.lex_state = 253},
  [56] = {.lex_state = 261},
  [57] = {.lex_state = 253},
  [58] = {.lex_state = 239},
  [59] = {.lex_state = 288},
  [60] = {.lex_state = 275},
  [61] = {.lex_state = 253},
  [62] = {.lex_state = 275},
  [63] = {.lex_state = 253},
  [64] = {.lex_state = 253},
  [65] = {.lex_state = 298},
  [66] = {.lex_state = 304},
  [67] = {.lex_state = 261},
  [68] = {.lex_state = 253},
  [69] = {.lex_state = 276},
  [70] = {.lex_state = 276},
  [71] = {.lex_state = 276},
  [72] = {.lex_state = 253},
  [73] = {.lex_state = 261},
  [74] = {.lex_state = 253},
  [75] = {.lex_state = 283},
  [76] = {.lex_state = 283},
  [77] = {.lex_state = 283},
  [78] = {.lex_state = 261},
  [79] = {.lex_state = 254},
  [80] = {.lex_state = 261},
  [81] = {.lex_state = 261},
  [82] = {.lex_state = 261},
  [83] = {.lex_state = 261},
  [84] = {.lex_state = 261},
  [85] = {.lex_state = 261},
  [86] = {.lex_state = 261},
  [87] = {.lex_state = 261},
  [88] = {.lex_state = 261},
  [89] = {.lex_state = 261},
  [90] = {.lex_state = 288},
  [91] = {.lex_state = 288},
  [92] = {.lex_state = 253},
  [93] = {.lex_state = 310},
  [94] = {.lex_state = 288},
  [95] = {.lex_state = 310},
  [96] = {.lex_state = 288},
  [97] = {.lex_state = 253},
  [98] = {.lex_state = 253},
  [99] = {.lex_state = 298},
  [100] = {.lex_state = 261},
  [101] = {.lex_state = 253},
  [102] = {.lex_state = 298},
  [103] = {.lex_state = 298},
  [104] = {.lex_state = 298},
  [105] = {.lex_state = 261},
  [106] = {.lex_state = 253},
  [107] = {.lex_state = 304},
  [108] = {.lex_state = 304},
  [109] = {.lex_state = 304},
  [110] = {.lex_state = 304},
  [111] = {.lex_state = 316},
  [112] = {.lex_state = 253},
  [113] = {.lex_state = 261},
  [114] = {.lex_state = 276},
  [115] = {.lex_state = 276},
  [116] = {.lex_state = 283},
  [117] = {.lex_state = 253},
  [118] = {.lex_state = 261},
  [119] = {.lex_state = 283},
  [120] = {.lex_state = 283},
  [121] = {.lex_state = 288},
  [122] = {.lex_state = 253},
  [123] = {.lex_state = 310},
  [124] = {.lex_state = 261},
  [125] = {.lex_state = 288},
  [126] = {.lex_state = 288},
  [127] = {.lex_state = 298},
  [128] = {.lex_state = 253},
  [129] = {.lex_state = 261},
  [130] = {.lex_state = 298},
  [131] = {.lex_state = 298},
  [132] = {.lex_state = 253},
  [133] = {.lex_state = 304},
  [134] = {.lex_state = 261},
  [135] = {.lex_state = 304},
  [136] = {.lex_state = 304},
  [137] = {.lex_state = 316},
  [138] = {.lex_state = 261},
  [139] = {.lex_state = 283},
  [140] = {.lex_state = 261},
  [141] = {.lex_state = 288},
  [142] = {.lex_state = 320},
  [143] = {.lex_state = 261},
  [144] = {.lex_state = 298},
  [145] = {.lex_state = 298},
  [146] = {.lex_state = 261},
  [147] = {.lex_state = 304},
  [148] = {.lex_state = 304},
  [149] = {.lex_state = 261},
  [150] = {.lex_state = 320},
  [151] = {.lex_state = 288},
  [152] = {.lex_state = 320},
  [153] = {.lex_state = 304},
  [154] = {.lex_state = 304},
  [155] = {.lex_state = 288},
  [156] = {.lex_state = 320},
  [157] = {.lex_state = 304},
  [158] = {.lex_state = 304},
  [159] = {.lex_state = 304},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(3),
    [anon_sym_as] = ACTIONS(3),
    [anon_sym_using] = ACTIONS(3),
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
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
    [sym_fallback] = ACTIONS(19),
    [sym_flush] = ACTIONS(19),
    [anon_sym_LT_POUNDftl] = ACTIONS(21),
    [anon_sym_LT_POUNDimport] = ACTIONS(23),
    [anon_sym_LT_POUNDinclude] = ACTIONS(25),
    [sym_lt] = ACTIONS(19),
    [sym_nt] = ACTIONS(19),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(27),
    [sym_rt] = ACTIONS(19),
    [anon_sym_LT_POUNDsetting] = ACTIONS(29),
    [sym_stop] = ACTIONS(19),
    [sym_t] = ACTIONS(19),
    [anon_sym_LT_POUNDvisit] = ACTIONS(31),
    [anon_sym_LT_POUNDassign] = ACTIONS(33),
    [sym_end_assign] = ACTIONS(35),
    [anon_sym_LT_POUNDglobal] = ACTIONS(37),
    [sym_end_global] = ACTIONS(39),
    [anon_sym_LT_POUNDlocal] = ACTIONS(41),
    [sym_end_local] = ACTIONS(43),
  },
  [2] = {
    [sym_parameter_pattern] = STATE(25),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(45),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
  },
  [3] = {
    [sym_parameter_pattern] = STATE(30),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(45),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
  },
  [4] = {
    [sym_parameter_pattern] = STATE(31),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(45),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
  },
  [5] = {
    [sym_parameter_pattern] = STATE(34),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_function_repeat1] = STATE(34),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(49),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(51),
  },
  [6] = {
    [sym_parameter_pattern] = STATE(36),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_function_repeat1] = STATE(36),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(49),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(53),
  },
  [7] = {
    [sym_directive] = STATE(38),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_attempt_middle] = STATE(39),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_attempt_repeat1] = STATE(39),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(55),
    [sym_recover] = ACTIONS(57),
    [sym_fallback] = ACTIONS(19),
    [sym_flush] = ACTIONS(19),
    [anon_sym_LT_POUNDftl] = ACTIONS(21),
    [anon_sym_LT_POUNDimport] = ACTIONS(23),
    [anon_sym_LT_POUNDinclude] = ACTIONS(25),
    [sym_lt] = ACTIONS(19),
    [sym_nt] = ACTIONS(19),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(27),
    [sym_rt] = ACTIONS(19),
    [anon_sym_LT_POUNDsetting] = ACTIONS(29),
    [sym_stop] = ACTIONS(19),
    [sym_t] = ACTIONS(19),
    [anon_sym_LT_POUNDvisit] = ACTIONS(31),
    [anon_sym_LT_POUNDassign] = ACTIONS(33),
    [sym_end_assign] = ACTIONS(35),
    [anon_sym_LT_POUNDglobal] = ACTIONS(37),
    [sym_end_global] = ACTIONS(39),
    [anon_sym_LT_POUNDlocal] = ACTIONS(41),
    [sym_end_local] = ACTIONS(43),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_LT_POUNDlist] = ACTIONS(59),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(59),
    [sym_break] = ACTIONS(59),
    [sym_continue] = ACTIONS(59),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(59),
    [anon_sym_LT_POUNDitems] = ACTIONS(59),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(59),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(59),
    [anon_sym_LT_POUNDif] = ACTIONS(59),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(59),
    [anon_sym_LT_POUNDelseif] = ACTIONS(59),
    [anon_sym_LT_POUNDswitch] = ACTIONS(59),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(59),
    [anon_sym_LT_POUNDcase] = ACTIONS(59),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(59),
    [anon_sym_LT_POUNDfunction] = ACTIONS(59),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(59),
    [anon_sym_LT_POUNDreturn] = ACTIONS(59),
    [anon_sym_LT_POUNDmacro] = ACTIONS(59),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(59),
    [anon_sym_LT_POUNDnested] = ACTIONS(59),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(59),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(59),
    [sym_recover] = ACTIONS(59),
    [sym_fallback] = ACTIONS(59),
    [sym_flush] = ACTIONS(59),
    [anon_sym_LT_POUNDftl] = ACTIONS(59),
    [anon_sym_LT_POUNDimport] = ACTIONS(59),
    [anon_sym_LT_POUNDinclude] = ACTIONS(59),
    [sym_lt] = ACTIONS(59),
    [sym_nt] = ACTIONS(59),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(59),
    [sym_rt] = ACTIONS(59),
    [anon_sym_LT_POUNDsetting] = ACTIONS(59),
    [sym_stop] = ACTIONS(59),
    [sym_t] = ACTIONS(59),
    [anon_sym_LT_POUNDvisit] = ACTIONS(59),
    [anon_sym_LT_POUNDassign] = ACTIONS(59),
    [sym_end_assign] = ACTIONS(59),
    [anon_sym_LT_POUNDglobal] = ACTIONS(59),
    [sym_end_global] = ACTIONS(59),
    [anon_sym_LT_POUNDlocal] = ACTIONS(59),
    [sym_end_local] = ACTIONS(59),
  },
  [9] = {
    [sym_parameter_pattern] = STATE(41),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_function_repeat1] = STATE(41),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(49),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(61),
  },
  [10] = {
    [sym_parameter_pattern] = STATE(43),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_function_repeat1] = STATE(43),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(49),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(63),
  },
  [11] = {
    [sym_parameter_pattern] = STATE(45),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_function_repeat1] = STATE(45),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(49),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(65),
  },
  [12] = {
    [sym_parameter_pattern] = STATE(47),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_function_repeat1] = STATE(47),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(49),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(67),
  },
  [13] = {
    [sym_parameter_pattern] = STATE(49),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_function_repeat1] = STATE(49),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(49),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(69),
  },
  [14] = {
    [sym_parameter_pattern] = STATE(51),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_function_repeat1] = STATE(51),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(49),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(71),
  },
  [15] = {
    [sym_parameter_pattern] = STATE(53),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_function_repeat1] = STATE(53),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(49),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(73),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(75),
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
  [17] = {
    [sym_parameter_pattern] = STATE(55),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_function_repeat1] = STATE(55),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(49),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(77),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_LT_POUNDlist] = ACTIONS(79),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(79),
    [sym_break] = ACTIONS(79),
    [sym_continue] = ACTIONS(79),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(79),
    [anon_sym_LT_POUNDitems] = ACTIONS(79),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(79),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(79),
    [anon_sym_LT_POUNDif] = ACTIONS(79),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(79),
    [anon_sym_LT_POUNDelseif] = ACTIONS(79),
    [anon_sym_LT_POUNDswitch] = ACTIONS(79),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(79),
    [anon_sym_LT_POUNDcase] = ACTIONS(79),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(79),
    [anon_sym_LT_POUNDfunction] = ACTIONS(79),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(79),
    [anon_sym_LT_POUNDreturn] = ACTIONS(79),
    [anon_sym_LT_POUNDmacro] = ACTIONS(79),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(79),
    [anon_sym_LT_POUNDnested] = ACTIONS(79),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(79),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(79),
    [sym_recover] = ACTIONS(79),
    [sym_fallback] = ACTIONS(79),
    [sym_flush] = ACTIONS(79),
    [anon_sym_LT_POUNDftl] = ACTIONS(79),
    [anon_sym_LT_POUNDimport] = ACTIONS(79),
    [anon_sym_LT_POUNDinclude] = ACTIONS(79),
    [sym_lt] = ACTIONS(79),
    [sym_nt] = ACTIONS(79),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(79),
    [sym_rt] = ACTIONS(79),
    [anon_sym_LT_POUNDsetting] = ACTIONS(79),
    [sym_stop] = ACTIONS(79),
    [sym_t] = ACTIONS(79),
    [anon_sym_LT_POUNDvisit] = ACTIONS(79),
    [anon_sym_LT_POUNDassign] = ACTIONS(79),
    [sym_end_assign] = ACTIONS(79),
    [anon_sym_LT_POUNDglobal] = ACTIONS(79),
    [sym_end_global] = ACTIONS(79),
    [anon_sym_LT_POUNDlocal] = ACTIONS(79),
    [sym_end_local] = ACTIONS(79),
  },
  [19] = {
    [sym_parameter_pattern] = STATE(57),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_function_repeat1] = STATE(57),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(49),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(81),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(83),
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
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(85),
  },
  [22] = {
    [sym__definition] = STATE(58),
    [sym_directive] = STATE(58),
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
    [aux_sym_source_file_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
    [sym_fallback] = ACTIONS(19),
    [sym_flush] = ACTIONS(19),
    [anon_sym_LT_POUNDftl] = ACTIONS(21),
    [anon_sym_LT_POUNDimport] = ACTIONS(23),
    [anon_sym_LT_POUNDinclude] = ACTIONS(25),
    [sym_lt] = ACTIONS(19),
    [sym_nt] = ACTIONS(19),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(27),
    [sym_rt] = ACTIONS(19),
    [anon_sym_LT_POUNDsetting] = ACTIONS(29),
    [sym_stop] = ACTIONS(19),
    [sym_t] = ACTIONS(19),
    [anon_sym_LT_POUNDvisit] = ACTIONS(31),
    [anon_sym_LT_POUNDassign] = ACTIONS(33),
    [sym_end_assign] = ACTIONS(35),
    [anon_sym_LT_POUNDglobal] = ACTIONS(37),
    [sym_end_global] = ACTIONS(39),
    [anon_sym_LT_POUNDlocal] = ACTIONS(41),
    [sym_end_local] = ACTIONS(43),
  },
  [23] = {
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(89),
    [anon_sym_as] = ACTIONS(91),
    [anon_sym_using] = ACTIONS(91),
    [anon_sym_GT] = ACTIONS(89),
  },
  [24] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(93),
  },
  [25] = {
    [anon_sym_GT] = ACTIONS(95),
  },
  [26] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(97),
    [anon_sym_as] = ACTIONS(97),
    [anon_sym_using] = ACTIONS(97),
    [anon_sym_GT] = ACTIONS(99),
  },
  [27] = {
    [sym_operator] = STATE(60),
    [anon_sym_as] = ACTIONS(101),
    [anon_sym_using] = ACTIONS(101),
  },
  [28] = {
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_EQ] = ACTIONS(105),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(107),
    [anon_sym_as] = ACTIONS(107),
    [anon_sym_using] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(109),
  },
  [29] = {
    [sym_expression] = STATE(64),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(111),
  },
  [30] = {
    [anon_sym_GT] = ACTIONS(113),
  },
  [31] = {
    [anon_sym_GT] = ACTIONS(115),
  },
  [32] = {
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(89),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(117),
    [anon_sym_as] = ACTIONS(117),
    [anon_sym_using] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(89),
  },
  [33] = {
    [sym_directive] = STATE(69),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_function_middle] = STATE(70),
    [sym_return] = STATE(69),
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
    [aux_sym_function_repeat2] = STATE(70),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(119),
    [anon_sym_LT_POUNDreturn] = ACTIONS(121),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
    [sym_fallback] = ACTIONS(19),
    [sym_flush] = ACTIONS(19),
    [anon_sym_LT_POUNDftl] = ACTIONS(21),
    [anon_sym_LT_POUNDimport] = ACTIONS(23),
    [anon_sym_LT_POUNDinclude] = ACTIONS(25),
    [sym_lt] = ACTIONS(19),
    [sym_nt] = ACTIONS(19),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(27),
    [sym_rt] = ACTIONS(19),
    [anon_sym_LT_POUNDsetting] = ACTIONS(29),
    [sym_stop] = ACTIONS(19),
    [sym_t] = ACTIONS(19),
    [anon_sym_LT_POUNDvisit] = ACTIONS(31),
    [anon_sym_LT_POUNDassign] = ACTIONS(33),
    [sym_end_assign] = ACTIONS(35),
    [anon_sym_LT_POUNDglobal] = ACTIONS(37),
    [sym_end_global] = ACTIONS(39),
    [anon_sym_LT_POUNDlocal] = ACTIONS(41),
    [sym_end_local] = ACTIONS(43),
  },
  [34] = {
    [sym_parameter_pattern] = STATE(72),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_function_repeat1] = STATE(72),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(49),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(123),
  },
  [35] = {
    [sym_directive] = STATE(75),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_return] = STATE(75),
    [sym_macro] = STATE(8),
    [sym_macro_middle] = STATE(76),
    [sym_nested] = STATE(75),
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
    [aux_sym_macro_repeat1] = STATE(76),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDreturn] = ACTIONS(121),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(125),
    [anon_sym_LT_POUNDnested] = ACTIONS(127),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
    [sym_fallback] = ACTIONS(19),
    [sym_flush] = ACTIONS(19),
    [anon_sym_LT_POUNDftl] = ACTIONS(21),
    [anon_sym_LT_POUNDimport] = ACTIONS(23),
    [anon_sym_LT_POUNDinclude] = ACTIONS(25),
    [sym_lt] = ACTIONS(19),
    [sym_nt] = ACTIONS(19),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(27),
    [sym_rt] = ACTIONS(19),
    [anon_sym_LT_POUNDsetting] = ACTIONS(29),
    [sym_stop] = ACTIONS(19),
    [sym_t] = ACTIONS(19),
    [anon_sym_LT_POUNDvisit] = ACTIONS(31),
    [anon_sym_LT_POUNDassign] = ACTIONS(33),
    [sym_end_assign] = ACTIONS(35),
    [anon_sym_LT_POUNDglobal] = ACTIONS(37),
    [sym_end_global] = ACTIONS(39),
    [anon_sym_LT_POUNDlocal] = ACTIONS(41),
    [sym_end_local] = ACTIONS(43),
  },
  [36] = {
    [sym_parameter_pattern] = STATE(72),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_function_repeat1] = STATE(72),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(49),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(129),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_LT_POUNDlist] = ACTIONS(131),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(131),
    [sym_break] = ACTIONS(131),
    [sym_continue] = ACTIONS(131),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(131),
    [anon_sym_LT_POUNDitems] = ACTIONS(131),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(131),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(131),
    [anon_sym_LT_POUNDif] = ACTIONS(131),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(131),
    [anon_sym_LT_POUNDelseif] = ACTIONS(131),
    [anon_sym_LT_POUNDswitch] = ACTIONS(131),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(131),
    [anon_sym_LT_POUNDcase] = ACTIONS(131),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(131),
    [anon_sym_LT_POUNDfunction] = ACTIONS(131),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(131),
    [anon_sym_LT_POUNDreturn] = ACTIONS(131),
    [anon_sym_LT_POUNDmacro] = ACTIONS(131),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(131),
    [anon_sym_LT_POUNDnested] = ACTIONS(131),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(131),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(131),
    [sym_recover] = ACTIONS(131),
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
  [38] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(133),
    [anon_sym_LT_POUNDif] = ACTIONS(133),
    [anon_sym_LT_POUNDswitch] = ACTIONS(133),
    [anon_sym_LT_POUNDfunction] = ACTIONS(133),
    [anon_sym_LT_POUNDmacro] = ACTIONS(133),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(133),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(133),
    [sym_recover] = ACTIONS(133),
    [sym_fallback] = ACTIONS(133),
    [sym_flush] = ACTIONS(133),
    [anon_sym_LT_POUNDftl] = ACTIONS(133),
    [anon_sym_LT_POUNDimport] = ACTIONS(133),
    [anon_sym_LT_POUNDinclude] = ACTIONS(133),
    [sym_lt] = ACTIONS(133),
    [sym_nt] = ACTIONS(133),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(133),
    [sym_rt] = ACTIONS(133),
    [anon_sym_LT_POUNDsetting] = ACTIONS(133),
    [sym_stop] = ACTIONS(133),
    [sym_t] = ACTIONS(133),
    [anon_sym_LT_POUNDvisit] = ACTIONS(133),
    [anon_sym_LT_POUNDassign] = ACTIONS(133),
    [sym_end_assign] = ACTIONS(133),
    [anon_sym_LT_POUNDglobal] = ACTIONS(133),
    [sym_end_global] = ACTIONS(133),
    [anon_sym_LT_POUNDlocal] = ACTIONS(133),
    [sym_end_local] = ACTIONS(133),
  },
  [39] = {
    [sym_directive] = STATE(38),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_attempt_middle] = STATE(79),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_attempt_repeat1] = STATE(79),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(135),
    [sym_recover] = ACTIONS(57),
    [sym_fallback] = ACTIONS(19),
    [sym_flush] = ACTIONS(19),
    [anon_sym_LT_POUNDftl] = ACTIONS(21),
    [anon_sym_LT_POUNDimport] = ACTIONS(23),
    [anon_sym_LT_POUNDinclude] = ACTIONS(25),
    [sym_lt] = ACTIONS(19),
    [sym_nt] = ACTIONS(19),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(27),
    [sym_rt] = ACTIONS(19),
    [anon_sym_LT_POUNDsetting] = ACTIONS(29),
    [sym_stop] = ACTIONS(19),
    [sym_t] = ACTIONS(19),
    [anon_sym_LT_POUNDvisit] = ACTIONS(31),
    [anon_sym_LT_POUNDassign] = ACTIONS(33),
    [sym_end_assign] = ACTIONS(35),
    [anon_sym_LT_POUNDglobal] = ACTIONS(37),
    [sym_end_global] = ACTIONS(39),
    [anon_sym_LT_POUNDlocal] = ACTIONS(41),
    [sym_end_local] = ACTIONS(43),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_LT_POUNDlist] = ACTIONS(137),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(137),
    [sym_break] = ACTIONS(137),
    [sym_continue] = ACTIONS(137),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(137),
    [anon_sym_LT_POUNDitems] = ACTIONS(137),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(137),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(137),
    [anon_sym_LT_POUNDif] = ACTIONS(137),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(137),
    [anon_sym_LT_POUNDelseif] = ACTIONS(137),
    [anon_sym_LT_POUNDswitch] = ACTIONS(137),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(137),
    [anon_sym_LT_POUNDcase] = ACTIONS(137),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(137),
    [anon_sym_LT_POUNDfunction] = ACTIONS(137),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(137),
    [anon_sym_LT_POUNDreturn] = ACTIONS(137),
    [anon_sym_LT_POUNDmacro] = ACTIONS(137),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(137),
    [anon_sym_LT_POUNDnested] = ACTIONS(137),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(137),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(137),
    [sym_recover] = ACTIONS(137),
    [sym_fallback] = ACTIONS(137),
    [sym_flush] = ACTIONS(137),
    [anon_sym_LT_POUNDftl] = ACTIONS(137),
    [anon_sym_LT_POUNDimport] = ACTIONS(137),
    [anon_sym_LT_POUNDinclude] = ACTIONS(137),
    [sym_lt] = ACTIONS(137),
    [sym_nt] = ACTIONS(137),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(137),
    [sym_rt] = ACTIONS(137),
    [anon_sym_LT_POUNDsetting] = ACTIONS(137),
    [sym_stop] = ACTIONS(137),
    [sym_t] = ACTIONS(137),
    [anon_sym_LT_POUNDvisit] = ACTIONS(137),
    [anon_sym_LT_POUNDassign] = ACTIONS(137),
    [sym_end_assign] = ACTIONS(137),
    [anon_sym_LT_POUNDglobal] = ACTIONS(137),
    [sym_end_global] = ACTIONS(137),
    [anon_sym_LT_POUNDlocal] = ACTIONS(137),
    [sym_end_local] = ACTIONS(137),
  },
  [41] = {
    [sym_parameter_pattern] = STATE(72),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_function_repeat1] = STATE(72),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(49),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(139),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [anon_sym_LT_POUNDlist] = ACTIONS(141),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(141),
    [sym_break] = ACTIONS(141),
    [sym_continue] = ACTIONS(141),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(141),
    [anon_sym_LT_POUNDitems] = ACTIONS(141),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(141),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(141),
    [anon_sym_LT_POUNDif] = ACTIONS(141),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(141),
    [anon_sym_LT_POUNDelseif] = ACTIONS(141),
    [anon_sym_LT_POUNDswitch] = ACTIONS(141),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(141),
    [anon_sym_LT_POUNDcase] = ACTIONS(141),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(141),
    [anon_sym_LT_POUNDfunction] = ACTIONS(141),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(141),
    [anon_sym_LT_POUNDreturn] = ACTIONS(141),
    [anon_sym_LT_POUNDmacro] = ACTIONS(141),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(141),
    [anon_sym_LT_POUNDnested] = ACTIONS(141),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(141),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(141),
    [sym_recover] = ACTIONS(141),
    [sym_fallback] = ACTIONS(141),
    [sym_flush] = ACTIONS(141),
    [anon_sym_LT_POUNDftl] = ACTIONS(141),
    [anon_sym_LT_POUNDimport] = ACTIONS(141),
    [anon_sym_LT_POUNDinclude] = ACTIONS(141),
    [sym_lt] = ACTIONS(141),
    [sym_nt] = ACTIONS(141),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(141),
    [sym_rt] = ACTIONS(141),
    [anon_sym_LT_POUNDsetting] = ACTIONS(141),
    [sym_stop] = ACTIONS(141),
    [sym_t] = ACTIONS(141),
    [anon_sym_LT_POUNDvisit] = ACTIONS(141),
    [anon_sym_LT_POUNDassign] = ACTIONS(141),
    [sym_end_assign] = ACTIONS(141),
    [anon_sym_LT_POUNDglobal] = ACTIONS(141),
    [sym_end_global] = ACTIONS(141),
    [anon_sym_LT_POUNDlocal] = ACTIONS(141),
    [sym_end_local] = ACTIONS(141),
  },
  [43] = {
    [sym_parameter_pattern] = STATE(72),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_function_repeat1] = STATE(72),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(49),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(143),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [anon_sym_LT_POUNDlist] = ACTIONS(145),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(145),
    [sym_break] = ACTIONS(145),
    [sym_continue] = ACTIONS(145),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(145),
    [anon_sym_LT_POUNDitems] = ACTIONS(145),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(145),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(145),
    [anon_sym_LT_POUNDif] = ACTIONS(145),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(145),
    [anon_sym_LT_POUNDelseif] = ACTIONS(145),
    [anon_sym_LT_POUNDswitch] = ACTIONS(145),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(145),
    [anon_sym_LT_POUNDcase] = ACTIONS(145),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(145),
    [anon_sym_LT_POUNDfunction] = ACTIONS(145),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(145),
    [anon_sym_LT_POUNDreturn] = ACTIONS(145),
    [anon_sym_LT_POUNDmacro] = ACTIONS(145),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(145),
    [anon_sym_LT_POUNDnested] = ACTIONS(145),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(145),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(145),
    [sym_recover] = ACTIONS(145),
    [sym_fallback] = ACTIONS(145),
    [sym_flush] = ACTIONS(145),
    [anon_sym_LT_POUNDftl] = ACTIONS(145),
    [anon_sym_LT_POUNDimport] = ACTIONS(145),
    [anon_sym_LT_POUNDinclude] = ACTIONS(145),
    [sym_lt] = ACTIONS(145),
    [sym_nt] = ACTIONS(145),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(145),
    [sym_rt] = ACTIONS(145),
    [anon_sym_LT_POUNDsetting] = ACTIONS(145),
    [sym_stop] = ACTIONS(145),
    [sym_t] = ACTIONS(145),
    [anon_sym_LT_POUNDvisit] = ACTIONS(145),
    [anon_sym_LT_POUNDassign] = ACTIONS(145),
    [sym_end_assign] = ACTIONS(145),
    [anon_sym_LT_POUNDglobal] = ACTIONS(145),
    [sym_end_global] = ACTIONS(145),
    [anon_sym_LT_POUNDlocal] = ACTIONS(145),
    [sym_end_local] = ACTIONS(145),
  },
  [45] = {
    [sym_parameter_pattern] = STATE(72),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_function_repeat1] = STATE(72),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(49),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(147),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_LT_POUNDlist] = ACTIONS(149),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(149),
    [sym_break] = ACTIONS(149),
    [sym_continue] = ACTIONS(149),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(149),
    [anon_sym_LT_POUNDitems] = ACTIONS(149),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(149),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(149),
    [anon_sym_LT_POUNDif] = ACTIONS(149),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(149),
    [anon_sym_LT_POUNDelseif] = ACTIONS(149),
    [anon_sym_LT_POUNDswitch] = ACTIONS(149),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(149),
    [anon_sym_LT_POUNDcase] = ACTIONS(149),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(149),
    [anon_sym_LT_POUNDfunction] = ACTIONS(149),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(149),
    [anon_sym_LT_POUNDreturn] = ACTIONS(149),
    [anon_sym_LT_POUNDmacro] = ACTIONS(149),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(149),
    [anon_sym_LT_POUNDnested] = ACTIONS(149),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(149),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(149),
    [sym_recover] = ACTIONS(149),
    [sym_fallback] = ACTIONS(149),
    [sym_flush] = ACTIONS(149),
    [anon_sym_LT_POUNDftl] = ACTIONS(149),
    [anon_sym_LT_POUNDimport] = ACTIONS(149),
    [anon_sym_LT_POUNDinclude] = ACTIONS(149),
    [sym_lt] = ACTIONS(149),
    [sym_nt] = ACTIONS(149),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(149),
    [sym_rt] = ACTIONS(149),
    [anon_sym_LT_POUNDsetting] = ACTIONS(149),
    [sym_stop] = ACTIONS(149),
    [sym_t] = ACTIONS(149),
    [anon_sym_LT_POUNDvisit] = ACTIONS(149),
    [anon_sym_LT_POUNDassign] = ACTIONS(149),
    [sym_end_assign] = ACTIONS(149),
    [anon_sym_LT_POUNDglobal] = ACTIONS(149),
    [sym_end_global] = ACTIONS(149),
    [anon_sym_LT_POUNDlocal] = ACTIONS(149),
    [sym_end_local] = ACTIONS(149),
  },
  [47] = {
    [sym_parameter_pattern] = STATE(72),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_function_repeat1] = STATE(72),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(49),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(151),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(153),
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
  [49] = {
    [sym_parameter_pattern] = STATE(72),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_function_repeat1] = STATE(72),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(49),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(155),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [anon_sym_LT_POUNDlist] = ACTIONS(157),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(157),
    [sym_break] = ACTIONS(157),
    [sym_continue] = ACTIONS(157),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(157),
    [anon_sym_LT_POUNDitems] = ACTIONS(157),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(157),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(157),
    [anon_sym_LT_POUNDif] = ACTIONS(157),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(157),
    [anon_sym_LT_POUNDelseif] = ACTIONS(157),
    [anon_sym_LT_POUNDswitch] = ACTIONS(157),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(157),
    [anon_sym_LT_POUNDcase] = ACTIONS(157),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(157),
    [anon_sym_LT_POUNDfunction] = ACTIONS(157),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(157),
    [anon_sym_LT_POUNDreturn] = ACTIONS(157),
    [anon_sym_LT_POUNDmacro] = ACTIONS(157),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(157),
    [anon_sym_LT_POUNDnested] = ACTIONS(157),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(157),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(157),
    [sym_recover] = ACTIONS(157),
    [sym_fallback] = ACTIONS(157),
    [sym_flush] = ACTIONS(157),
    [anon_sym_LT_POUNDftl] = ACTIONS(157),
    [anon_sym_LT_POUNDimport] = ACTIONS(157),
    [anon_sym_LT_POUNDinclude] = ACTIONS(157),
    [sym_lt] = ACTIONS(157),
    [sym_nt] = ACTIONS(157),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(157),
    [sym_rt] = ACTIONS(157),
    [anon_sym_LT_POUNDsetting] = ACTIONS(157),
    [sym_stop] = ACTIONS(157),
    [sym_t] = ACTIONS(157),
    [anon_sym_LT_POUNDvisit] = ACTIONS(157),
    [anon_sym_LT_POUNDassign] = ACTIONS(157),
    [sym_end_assign] = ACTIONS(157),
    [anon_sym_LT_POUNDglobal] = ACTIONS(157),
    [sym_end_global] = ACTIONS(157),
    [anon_sym_LT_POUNDlocal] = ACTIONS(157),
    [sym_end_local] = ACTIONS(157),
  },
  [51] = {
    [sym_parameter_pattern] = STATE(72),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_function_repeat1] = STATE(72),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(49),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(159),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_LT_POUNDlist] = ACTIONS(161),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(161),
    [sym_break] = ACTIONS(161),
    [sym_continue] = ACTIONS(161),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(161),
    [anon_sym_LT_POUNDitems] = ACTIONS(161),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(161),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(161),
    [anon_sym_LT_POUNDif] = ACTIONS(161),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(161),
    [anon_sym_LT_POUNDelseif] = ACTIONS(161),
    [anon_sym_LT_POUNDswitch] = ACTIONS(161),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(161),
    [anon_sym_LT_POUNDcase] = ACTIONS(161),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(161),
    [anon_sym_LT_POUNDfunction] = ACTIONS(161),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(161),
    [anon_sym_LT_POUNDreturn] = ACTIONS(161),
    [anon_sym_LT_POUNDmacro] = ACTIONS(161),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(161),
    [anon_sym_LT_POUNDnested] = ACTIONS(161),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(161),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(161),
    [sym_recover] = ACTIONS(161),
    [sym_fallback] = ACTIONS(161),
    [sym_flush] = ACTIONS(161),
    [anon_sym_LT_POUNDftl] = ACTIONS(161),
    [anon_sym_LT_POUNDimport] = ACTIONS(161),
    [anon_sym_LT_POUNDinclude] = ACTIONS(161),
    [sym_lt] = ACTIONS(161),
    [sym_nt] = ACTIONS(161),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(161),
    [sym_rt] = ACTIONS(161),
    [anon_sym_LT_POUNDsetting] = ACTIONS(161),
    [sym_stop] = ACTIONS(161),
    [sym_t] = ACTIONS(161),
    [anon_sym_LT_POUNDvisit] = ACTIONS(161),
    [anon_sym_LT_POUNDassign] = ACTIONS(161),
    [sym_end_assign] = ACTIONS(161),
    [anon_sym_LT_POUNDglobal] = ACTIONS(161),
    [sym_end_global] = ACTIONS(161),
    [anon_sym_LT_POUNDlocal] = ACTIONS(161),
    [sym_end_local] = ACTIONS(161),
  },
  [53] = {
    [sym_parameter_pattern] = STATE(72),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_function_repeat1] = STATE(72),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(49),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(163),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [anon_sym_LT_POUNDlist] = ACTIONS(165),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(165),
    [sym_break] = ACTIONS(165),
    [sym_continue] = ACTIONS(165),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(165),
    [anon_sym_LT_POUNDitems] = ACTIONS(165),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(165),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(165),
    [anon_sym_LT_POUNDif] = ACTIONS(165),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(165),
    [anon_sym_LT_POUNDelseif] = ACTIONS(165),
    [anon_sym_LT_POUNDswitch] = ACTIONS(165),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(165),
    [anon_sym_LT_POUNDcase] = ACTIONS(165),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(165),
    [anon_sym_LT_POUNDfunction] = ACTIONS(165),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(165),
    [anon_sym_LT_POUNDreturn] = ACTIONS(165),
    [anon_sym_LT_POUNDmacro] = ACTIONS(165),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(165),
    [anon_sym_LT_POUNDnested] = ACTIONS(165),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(165),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(165),
    [sym_recover] = ACTIONS(165),
    [sym_fallback] = ACTIONS(165),
    [sym_flush] = ACTIONS(165),
    [anon_sym_LT_POUNDftl] = ACTIONS(165),
    [anon_sym_LT_POUNDimport] = ACTIONS(165),
    [anon_sym_LT_POUNDinclude] = ACTIONS(165),
    [sym_lt] = ACTIONS(165),
    [sym_nt] = ACTIONS(165),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(165),
    [sym_rt] = ACTIONS(165),
    [anon_sym_LT_POUNDsetting] = ACTIONS(165),
    [sym_stop] = ACTIONS(165),
    [sym_t] = ACTIONS(165),
    [anon_sym_LT_POUNDvisit] = ACTIONS(165),
    [anon_sym_LT_POUNDassign] = ACTIONS(165),
    [sym_end_assign] = ACTIONS(165),
    [anon_sym_LT_POUNDglobal] = ACTIONS(165),
    [sym_end_global] = ACTIONS(165),
    [anon_sym_LT_POUNDlocal] = ACTIONS(165),
    [sym_end_local] = ACTIONS(165),
  },
  [55] = {
    [sym_parameter_pattern] = STATE(72),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_function_repeat1] = STATE(72),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(49),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(167),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_LT_POUNDlist] = ACTIONS(169),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(169),
    [sym_break] = ACTIONS(169),
    [sym_continue] = ACTIONS(169),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(169),
    [anon_sym_LT_POUNDitems] = ACTIONS(169),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(169),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(169),
    [anon_sym_LT_POUNDif] = ACTIONS(169),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(169),
    [anon_sym_LT_POUNDelseif] = ACTIONS(169),
    [anon_sym_LT_POUNDswitch] = ACTIONS(169),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(169),
    [anon_sym_LT_POUNDcase] = ACTIONS(169),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(169),
    [anon_sym_LT_POUNDfunction] = ACTIONS(169),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(169),
    [anon_sym_LT_POUNDreturn] = ACTIONS(169),
    [anon_sym_LT_POUNDmacro] = ACTIONS(169),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(169),
    [anon_sym_LT_POUNDnested] = ACTIONS(169),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(169),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(169),
    [sym_recover] = ACTIONS(169),
    [sym_fallback] = ACTIONS(169),
    [sym_flush] = ACTIONS(169),
    [anon_sym_LT_POUNDftl] = ACTIONS(169),
    [anon_sym_LT_POUNDimport] = ACTIONS(169),
    [anon_sym_LT_POUNDinclude] = ACTIONS(169),
    [sym_lt] = ACTIONS(169),
    [sym_nt] = ACTIONS(169),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(169),
    [sym_rt] = ACTIONS(169),
    [anon_sym_LT_POUNDsetting] = ACTIONS(169),
    [sym_stop] = ACTIONS(169),
    [sym_t] = ACTIONS(169),
    [anon_sym_LT_POUNDvisit] = ACTIONS(169),
    [anon_sym_LT_POUNDassign] = ACTIONS(169),
    [sym_end_assign] = ACTIONS(169),
    [anon_sym_LT_POUNDglobal] = ACTIONS(169),
    [sym_end_global] = ACTIONS(169),
    [anon_sym_LT_POUNDlocal] = ACTIONS(169),
    [sym_end_local] = ACTIONS(169),
  },
  [57] = {
    [sym_parameter_pattern] = STATE(72),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_function_repeat1] = STATE(72),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(49),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(171),
  },
  [58] = {
    [sym__definition] = STATE(58),
    [sym_directive] = STATE(58),
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
    [aux_sym_source_file_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(173),
    [anon_sym_LT_POUNDlist] = ACTIONS(175),
    [anon_sym_LT_POUNDif] = ACTIONS(178),
    [anon_sym_LT_POUNDswitch] = ACTIONS(181),
    [anon_sym_LT_POUNDfunction] = ACTIONS(184),
    [anon_sym_LT_POUNDmacro] = ACTIONS(187),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(190),
    [sym_fallback] = ACTIONS(193),
    [sym_flush] = ACTIONS(193),
    [anon_sym_LT_POUNDftl] = ACTIONS(196),
    [anon_sym_LT_POUNDimport] = ACTIONS(199),
    [anon_sym_LT_POUNDinclude] = ACTIONS(202),
    [sym_lt] = ACTIONS(193),
    [sym_nt] = ACTIONS(193),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(205),
    [sym_rt] = ACTIONS(193),
    [anon_sym_LT_POUNDsetting] = ACTIONS(208),
    [sym_stop] = ACTIONS(193),
    [sym_t] = ACTIONS(193),
    [anon_sym_LT_POUNDvisit] = ACTIONS(211),
    [anon_sym_LT_POUNDassign] = ACTIONS(214),
    [sym_end_assign] = ACTIONS(217),
    [anon_sym_LT_POUNDglobal] = ACTIONS(220),
    [sym_end_global] = ACTIONS(223),
    [anon_sym_LT_POUNDlocal] = ACTIONS(226),
    [sym_end_local] = ACTIONS(229),
  },
  [59] = {
    [sym_directive] = STATE(90),
    [sym_list] = STATE(8),
    [sym_list_middle] = STATE(96),
    [sym_list_else] = STATE(94),
    [sym_items] = STATE(90),
    [sym_sep] = STATE(90),
    [sym_sep_block] = STATE(95),
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
    [aux_sym_list_repeat1] = STATE(96),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(232),
    [sym_break] = ACTIONS(234),
    [sym_continue] = ACTIONS(234),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(236),
    [anon_sym_LT_POUNDitems] = ACTIONS(238),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(240),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
    [sym_fallback] = ACTIONS(19),
    [sym_flush] = ACTIONS(19),
    [anon_sym_LT_POUNDftl] = ACTIONS(21),
    [anon_sym_LT_POUNDimport] = ACTIONS(23),
    [anon_sym_LT_POUNDinclude] = ACTIONS(25),
    [sym_lt] = ACTIONS(19),
    [sym_nt] = ACTIONS(19),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(27),
    [sym_rt] = ACTIONS(19),
    [anon_sym_LT_POUNDsetting] = ACTIONS(29),
    [sym_stop] = ACTIONS(19),
    [sym_t] = ACTIONS(19),
    [anon_sym_LT_POUNDvisit] = ACTIONS(31),
    [anon_sym_LT_POUNDassign] = ACTIONS(33),
    [sym_end_assign] = ACTIONS(35),
    [anon_sym_LT_POUNDglobal] = ACTIONS(37),
    [sym_end_global] = ACTIONS(39),
    [anon_sym_LT_POUNDlocal] = ACTIONS(41),
    [sym_end_local] = ACTIONS(43),
  },
  [60] = {
    [sym_expression] = STATE(97),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(111),
  },
  [61] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(242),
    [anon_sym_as] = ACTIONS(242),
    [anon_sym_using] = ACTIONS(242),
    [anon_sym_GT] = ACTIONS(244),
  },
  [62] = {
    [sym_expression] = STATE(98),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(111),
  },
  [63] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(246),
    [anon_sym_as] = ACTIONS(246),
    [anon_sym_using] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(91),
  },
  [64] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(248),
    [anon_sym_as] = ACTIONS(248),
    [anon_sym_using] = ACTIONS(248),
    [anon_sym_GT] = ACTIONS(250),
  },
  [65] = {
    [sym_directive] = STATE(102),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_if_else] = STATE(103),
    [sym_elseif] = STATE(102),
    [sym_if_middle] = STATE(104),
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
    [aux_sym_if_repeat1] = STATE(104),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(252),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(254),
    [anon_sym_LT_POUNDelseif] = ACTIONS(256),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
    [sym_fallback] = ACTIONS(19),
    [sym_flush] = ACTIONS(19),
    [anon_sym_LT_POUNDftl] = ACTIONS(21),
    [anon_sym_LT_POUNDimport] = ACTIONS(23),
    [anon_sym_LT_POUNDinclude] = ACTIONS(25),
    [sym_lt] = ACTIONS(19),
    [sym_nt] = ACTIONS(19),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(27),
    [sym_rt] = ACTIONS(19),
    [anon_sym_LT_POUNDsetting] = ACTIONS(29),
    [sym_stop] = ACTIONS(19),
    [sym_t] = ACTIONS(19),
    [anon_sym_LT_POUNDvisit] = ACTIONS(31),
    [anon_sym_LT_POUNDassign] = ACTIONS(33),
    [sym_end_assign] = ACTIONS(35),
    [anon_sym_LT_POUNDglobal] = ACTIONS(37),
    [sym_end_global] = ACTIONS(39),
    [anon_sym_LT_POUNDlocal] = ACTIONS(41),
    [sym_end_local] = ACTIONS(43),
  },
  [66] = {
    [sym_case] = STATE(108),
    [sym_default] = STATE(109),
    [sym_switch_middle] = STATE(110),
    [aux_sym_switch_repeat1] = STATE(110),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(258),
    [anon_sym_LT_POUNDcase] = ACTIONS(260),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(262),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(264),
    [anon_sym_LT_POUNDlist] = ACTIONS(264),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(264),
    [sym_break] = ACTIONS(264),
    [sym_continue] = ACTIONS(264),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(264),
    [anon_sym_LT_POUNDitems] = ACTIONS(264),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(264),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(264),
    [anon_sym_LT_POUNDif] = ACTIONS(264),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(264),
    [anon_sym_LT_POUNDelseif] = ACTIONS(264),
    [anon_sym_LT_POUNDswitch] = ACTIONS(264),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(264),
    [anon_sym_LT_POUNDcase] = ACTIONS(264),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(264),
    [anon_sym_LT_POUNDfunction] = ACTIONS(264),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(264),
    [anon_sym_LT_POUNDreturn] = ACTIONS(264),
    [anon_sym_LT_POUNDmacro] = ACTIONS(264),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(264),
    [anon_sym_LT_POUNDnested] = ACTIONS(264),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(264),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(264),
    [sym_recover] = ACTIONS(264),
    [sym_fallback] = ACTIONS(264),
    [sym_flush] = ACTIONS(264),
    [anon_sym_LT_POUNDftl] = ACTIONS(264),
    [anon_sym_LT_POUNDimport] = ACTIONS(264),
    [anon_sym_LT_POUNDinclude] = ACTIONS(264),
    [sym_lt] = ACTIONS(264),
    [sym_nt] = ACTIONS(264),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(264),
    [sym_rt] = ACTIONS(264),
    [anon_sym_LT_POUNDsetting] = ACTIONS(264),
    [sym_stop] = ACTIONS(264),
    [sym_t] = ACTIONS(264),
    [anon_sym_LT_POUNDvisit] = ACTIONS(264),
    [anon_sym_LT_POUNDassign] = ACTIONS(264),
    [sym_end_assign] = ACTIONS(264),
    [anon_sym_LT_POUNDglobal] = ACTIONS(264),
    [sym_end_global] = ACTIONS(264),
    [anon_sym_LT_POUNDlocal] = ACTIONS(264),
    [sym_end_local] = ACTIONS(264),
  },
  [68] = {
    [sym_parameter_pattern] = STATE(112),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(45),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(266),
  },
  [69] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(268),
    [anon_sym_LT_POUNDif] = ACTIONS(268),
    [anon_sym_LT_POUNDswitch] = ACTIONS(268),
    [anon_sym_LT_POUNDfunction] = ACTIONS(268),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(268),
    [anon_sym_LT_POUNDreturn] = ACTIONS(268),
    [anon_sym_LT_POUNDmacro] = ACTIONS(268),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(268),
    [sym_fallback] = ACTIONS(268),
    [sym_flush] = ACTIONS(268),
    [anon_sym_LT_POUNDftl] = ACTIONS(268),
    [anon_sym_LT_POUNDimport] = ACTIONS(268),
    [anon_sym_LT_POUNDinclude] = ACTIONS(268),
    [sym_lt] = ACTIONS(268),
    [sym_nt] = ACTIONS(268),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(268),
    [sym_rt] = ACTIONS(268),
    [anon_sym_LT_POUNDsetting] = ACTIONS(268),
    [sym_stop] = ACTIONS(268),
    [sym_t] = ACTIONS(268),
    [anon_sym_LT_POUNDvisit] = ACTIONS(268),
    [anon_sym_LT_POUNDassign] = ACTIONS(268),
    [sym_end_assign] = ACTIONS(268),
    [anon_sym_LT_POUNDglobal] = ACTIONS(268),
    [sym_end_global] = ACTIONS(268),
    [anon_sym_LT_POUNDlocal] = ACTIONS(268),
    [sym_end_local] = ACTIONS(268),
  },
  [70] = {
    [sym_directive] = STATE(69),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_function_middle] = STATE(114),
    [sym_return] = STATE(69),
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
    [aux_sym_function_repeat2] = STATE(114),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(270),
    [anon_sym_LT_POUNDreturn] = ACTIONS(121),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
    [sym_fallback] = ACTIONS(19),
    [sym_flush] = ACTIONS(19),
    [anon_sym_LT_POUNDftl] = ACTIONS(21),
    [anon_sym_LT_POUNDimport] = ACTIONS(23),
    [anon_sym_LT_POUNDinclude] = ACTIONS(25),
    [sym_lt] = ACTIONS(19),
    [sym_nt] = ACTIONS(19),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(27),
    [sym_rt] = ACTIONS(19),
    [anon_sym_LT_POUNDsetting] = ACTIONS(29),
    [sym_stop] = ACTIONS(19),
    [sym_t] = ACTIONS(19),
    [anon_sym_LT_POUNDvisit] = ACTIONS(31),
    [anon_sym_LT_POUNDassign] = ACTIONS(33),
    [sym_end_assign] = ACTIONS(35),
    [anon_sym_LT_POUNDglobal] = ACTIONS(37),
    [sym_end_global] = ACTIONS(39),
    [anon_sym_LT_POUNDlocal] = ACTIONS(41),
    [sym_end_local] = ACTIONS(43),
  },
  [71] = {
    [sym_directive] = STATE(69),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_function_middle] = STATE(115),
    [sym_return] = STATE(69),
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
    [aux_sym_function_repeat2] = STATE(115),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(270),
    [anon_sym_LT_POUNDreturn] = ACTIONS(121),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
    [sym_fallback] = ACTIONS(19),
    [sym_flush] = ACTIONS(19),
    [anon_sym_LT_POUNDftl] = ACTIONS(21),
    [anon_sym_LT_POUNDimport] = ACTIONS(23),
    [anon_sym_LT_POUNDinclude] = ACTIONS(25),
    [sym_lt] = ACTIONS(19),
    [sym_nt] = ACTIONS(19),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(27),
    [sym_rt] = ACTIONS(19),
    [anon_sym_LT_POUNDsetting] = ACTIONS(29),
    [sym_stop] = ACTIONS(19),
    [sym_t] = ACTIONS(19),
    [anon_sym_LT_POUNDvisit] = ACTIONS(31),
    [anon_sym_LT_POUNDassign] = ACTIONS(33),
    [sym_end_assign] = ACTIONS(35),
    [anon_sym_LT_POUNDglobal] = ACTIONS(37),
    [sym_end_global] = ACTIONS(39),
    [anon_sym_LT_POUNDlocal] = ACTIONS(41),
    [sym_end_local] = ACTIONS(43),
  },
  [72] = {
    [sym_parameter_pattern] = STATE(72),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_function_repeat1] = STATE(72),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(272),
    [anon_sym_as] = ACTIONS(275),
    [anon_sym_using] = ACTIONS(275),
    [anon_sym_GT] = ACTIONS(278),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(280),
    [anon_sym_LT_POUNDlist] = ACTIONS(280),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(280),
    [sym_break] = ACTIONS(280),
    [sym_continue] = ACTIONS(280),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(280),
    [anon_sym_LT_POUNDitems] = ACTIONS(280),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(280),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(280),
    [anon_sym_LT_POUNDif] = ACTIONS(280),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(280),
    [anon_sym_LT_POUNDelseif] = ACTIONS(280),
    [anon_sym_LT_POUNDswitch] = ACTIONS(280),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(280),
    [anon_sym_LT_POUNDcase] = ACTIONS(280),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(280),
    [anon_sym_LT_POUNDfunction] = ACTIONS(280),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(280),
    [anon_sym_LT_POUNDreturn] = ACTIONS(280),
    [anon_sym_LT_POUNDmacro] = ACTIONS(280),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(280),
    [anon_sym_LT_POUNDnested] = ACTIONS(280),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(280),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(280),
    [sym_recover] = ACTIONS(280),
    [sym_fallback] = ACTIONS(280),
    [sym_flush] = ACTIONS(280),
    [anon_sym_LT_POUNDftl] = ACTIONS(280),
    [anon_sym_LT_POUNDimport] = ACTIONS(280),
    [anon_sym_LT_POUNDinclude] = ACTIONS(280),
    [sym_lt] = ACTIONS(280),
    [sym_nt] = ACTIONS(280),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(280),
    [sym_rt] = ACTIONS(280),
    [anon_sym_LT_POUNDsetting] = ACTIONS(280),
    [sym_stop] = ACTIONS(280),
    [sym_t] = ACTIONS(280),
    [anon_sym_LT_POUNDvisit] = ACTIONS(280),
    [anon_sym_LT_POUNDassign] = ACTIONS(280),
    [sym_end_assign] = ACTIONS(280),
    [anon_sym_LT_POUNDglobal] = ACTIONS(280),
    [sym_end_global] = ACTIONS(280),
    [anon_sym_LT_POUNDlocal] = ACTIONS(280),
    [sym_end_local] = ACTIONS(280),
  },
  [74] = {
    [sym_parameter_pattern] = STATE(117),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_function_repeat1] = STATE(117),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(49),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(282),
  },
  [75] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(284),
    [anon_sym_LT_POUNDif] = ACTIONS(284),
    [anon_sym_LT_POUNDswitch] = ACTIONS(284),
    [anon_sym_LT_POUNDfunction] = ACTIONS(284),
    [anon_sym_LT_POUNDreturn] = ACTIONS(284),
    [anon_sym_LT_POUNDmacro] = ACTIONS(284),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(284),
    [anon_sym_LT_POUNDnested] = ACTIONS(284),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(284),
    [sym_fallback] = ACTIONS(284),
    [sym_flush] = ACTIONS(284),
    [anon_sym_LT_POUNDftl] = ACTIONS(284),
    [anon_sym_LT_POUNDimport] = ACTIONS(284),
    [anon_sym_LT_POUNDinclude] = ACTIONS(284),
    [sym_lt] = ACTIONS(284),
    [sym_nt] = ACTIONS(284),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(284),
    [sym_rt] = ACTIONS(284),
    [anon_sym_LT_POUNDsetting] = ACTIONS(284),
    [sym_stop] = ACTIONS(284),
    [sym_t] = ACTIONS(284),
    [anon_sym_LT_POUNDvisit] = ACTIONS(284),
    [anon_sym_LT_POUNDassign] = ACTIONS(284),
    [sym_end_assign] = ACTIONS(284),
    [anon_sym_LT_POUNDglobal] = ACTIONS(284),
    [sym_end_global] = ACTIONS(284),
    [anon_sym_LT_POUNDlocal] = ACTIONS(284),
    [sym_end_local] = ACTIONS(284),
  },
  [76] = {
    [sym_directive] = STATE(75),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_return] = STATE(75),
    [sym_macro] = STATE(8),
    [sym_macro_middle] = STATE(119),
    [sym_nested] = STATE(75),
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
    [aux_sym_macro_repeat1] = STATE(119),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDreturn] = ACTIONS(121),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(286),
    [anon_sym_LT_POUNDnested] = ACTIONS(127),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
    [sym_fallback] = ACTIONS(19),
    [sym_flush] = ACTIONS(19),
    [anon_sym_LT_POUNDftl] = ACTIONS(21),
    [anon_sym_LT_POUNDimport] = ACTIONS(23),
    [anon_sym_LT_POUNDinclude] = ACTIONS(25),
    [sym_lt] = ACTIONS(19),
    [sym_nt] = ACTIONS(19),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(27),
    [sym_rt] = ACTIONS(19),
    [anon_sym_LT_POUNDsetting] = ACTIONS(29),
    [sym_stop] = ACTIONS(19),
    [sym_t] = ACTIONS(19),
    [anon_sym_LT_POUNDvisit] = ACTIONS(31),
    [anon_sym_LT_POUNDassign] = ACTIONS(33),
    [sym_end_assign] = ACTIONS(35),
    [anon_sym_LT_POUNDglobal] = ACTIONS(37),
    [sym_end_global] = ACTIONS(39),
    [anon_sym_LT_POUNDlocal] = ACTIONS(41),
    [sym_end_local] = ACTIONS(43),
  },
  [77] = {
    [sym_directive] = STATE(75),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_return] = STATE(75),
    [sym_macro] = STATE(8),
    [sym_macro_middle] = STATE(120),
    [sym_nested] = STATE(75),
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
    [aux_sym_macro_repeat1] = STATE(120),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDreturn] = ACTIONS(121),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(286),
    [anon_sym_LT_POUNDnested] = ACTIONS(127),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
    [sym_fallback] = ACTIONS(19),
    [sym_flush] = ACTIONS(19),
    [anon_sym_LT_POUNDftl] = ACTIONS(21),
    [anon_sym_LT_POUNDimport] = ACTIONS(23),
    [anon_sym_LT_POUNDinclude] = ACTIONS(25),
    [sym_lt] = ACTIONS(19),
    [sym_nt] = ACTIONS(19),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(27),
    [sym_rt] = ACTIONS(19),
    [anon_sym_LT_POUNDsetting] = ACTIONS(29),
    [sym_stop] = ACTIONS(19),
    [sym_t] = ACTIONS(19),
    [anon_sym_LT_POUNDvisit] = ACTIONS(31),
    [anon_sym_LT_POUNDassign] = ACTIONS(33),
    [sym_end_assign] = ACTIONS(35),
    [anon_sym_LT_POUNDglobal] = ACTIONS(37),
    [sym_end_global] = ACTIONS(39),
    [anon_sym_LT_POUNDlocal] = ACTIONS(41),
    [sym_end_local] = ACTIONS(43),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(288),
    [anon_sym_LT_POUNDlist] = ACTIONS(288),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(288),
    [sym_break] = ACTIONS(288),
    [sym_continue] = ACTIONS(288),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(288),
    [anon_sym_LT_POUNDitems] = ACTIONS(288),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(288),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(288),
    [anon_sym_LT_POUNDif] = ACTIONS(288),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(288),
    [anon_sym_LT_POUNDelseif] = ACTIONS(288),
    [anon_sym_LT_POUNDswitch] = ACTIONS(288),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(288),
    [anon_sym_LT_POUNDcase] = ACTIONS(288),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(288),
    [anon_sym_LT_POUNDfunction] = ACTIONS(288),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(288),
    [anon_sym_LT_POUNDreturn] = ACTIONS(288),
    [anon_sym_LT_POUNDmacro] = ACTIONS(288),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(288),
    [anon_sym_LT_POUNDnested] = ACTIONS(288),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(288),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(288),
    [sym_recover] = ACTIONS(288),
    [sym_fallback] = ACTIONS(288),
    [sym_flush] = ACTIONS(288),
    [anon_sym_LT_POUNDftl] = ACTIONS(288),
    [anon_sym_LT_POUNDimport] = ACTIONS(288),
    [anon_sym_LT_POUNDinclude] = ACTIONS(288),
    [sym_lt] = ACTIONS(288),
    [sym_nt] = ACTIONS(288),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(288),
    [sym_rt] = ACTIONS(288),
    [anon_sym_LT_POUNDsetting] = ACTIONS(288),
    [sym_stop] = ACTIONS(288),
    [sym_t] = ACTIONS(288),
    [anon_sym_LT_POUNDvisit] = ACTIONS(288),
    [anon_sym_LT_POUNDassign] = ACTIONS(288),
    [sym_end_assign] = ACTIONS(288),
    [anon_sym_LT_POUNDglobal] = ACTIONS(288),
    [sym_end_global] = ACTIONS(288),
    [anon_sym_LT_POUNDlocal] = ACTIONS(288),
    [sym_end_local] = ACTIONS(288),
  },
  [79] = {
    [sym_directive] = STATE(38),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_macro] = STATE(8),
    [sym_attempt] = STATE(8),
    [sym_attempt_middle] = STATE(79),
    [sym_ftl] = STATE(8),
    [sym_import] = STATE(8),
    [sym_include] = STATE(8),
    [sym_recurse] = STATE(8),
    [sym_setting] = STATE(8),
    [sym_visit] = STATE(8),
    [sym_assign] = STATE(8),
    [sym_global] = STATE(8),
    [sym_local] = STATE(8),
    [aux_sym_attempt_repeat1] = STATE(79),
    [anon_sym_LT_POUNDlist] = ACTIONS(290),
    [anon_sym_LT_POUNDif] = ACTIONS(293),
    [anon_sym_LT_POUNDswitch] = ACTIONS(296),
    [anon_sym_LT_POUNDfunction] = ACTIONS(299),
    [anon_sym_LT_POUNDmacro] = ACTIONS(302),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(305),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(308),
    [sym_recover] = ACTIONS(310),
    [sym_fallback] = ACTIONS(313),
    [sym_flush] = ACTIONS(313),
    [anon_sym_LT_POUNDftl] = ACTIONS(316),
    [anon_sym_LT_POUNDimport] = ACTIONS(319),
    [anon_sym_LT_POUNDinclude] = ACTIONS(322),
    [sym_lt] = ACTIONS(313),
    [sym_nt] = ACTIONS(313),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(325),
    [sym_rt] = ACTIONS(313),
    [anon_sym_LT_POUNDsetting] = ACTIONS(328),
    [sym_stop] = ACTIONS(313),
    [sym_t] = ACTIONS(313),
    [anon_sym_LT_POUNDvisit] = ACTIONS(331),
    [anon_sym_LT_POUNDassign] = ACTIONS(334),
    [sym_end_assign] = ACTIONS(337),
    [anon_sym_LT_POUNDglobal] = ACTIONS(340),
    [sym_end_global] = ACTIONS(343),
    [anon_sym_LT_POUNDlocal] = ACTIONS(346),
    [sym_end_local] = ACTIONS(349),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(352),
    [anon_sym_LT_POUNDlist] = ACTIONS(352),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(352),
    [sym_break] = ACTIONS(352),
    [sym_continue] = ACTIONS(352),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(352),
    [anon_sym_LT_POUNDitems] = ACTIONS(352),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(352),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(352),
    [anon_sym_LT_POUNDif] = ACTIONS(352),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(352),
    [anon_sym_LT_POUNDelseif] = ACTIONS(352),
    [anon_sym_LT_POUNDswitch] = ACTIONS(352),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(352),
    [anon_sym_LT_POUNDcase] = ACTIONS(352),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(352),
    [anon_sym_LT_POUNDfunction] = ACTIONS(352),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(352),
    [anon_sym_LT_POUNDreturn] = ACTIONS(352),
    [anon_sym_LT_POUNDmacro] = ACTIONS(352),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(352),
    [anon_sym_LT_POUNDnested] = ACTIONS(352),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(352),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(352),
    [sym_recover] = ACTIONS(352),
    [sym_fallback] = ACTIONS(352),
    [sym_flush] = ACTIONS(352),
    [anon_sym_LT_POUNDftl] = ACTIONS(352),
    [anon_sym_LT_POUNDimport] = ACTIONS(352),
    [anon_sym_LT_POUNDinclude] = ACTIONS(352),
    [sym_lt] = ACTIONS(352),
    [sym_nt] = ACTIONS(352),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(352),
    [sym_rt] = ACTIONS(352),
    [anon_sym_LT_POUNDsetting] = ACTIONS(352),
    [sym_stop] = ACTIONS(352),
    [sym_t] = ACTIONS(352),
    [anon_sym_LT_POUNDvisit] = ACTIONS(352),
    [anon_sym_LT_POUNDassign] = ACTIONS(352),
    [sym_end_assign] = ACTIONS(352),
    [anon_sym_LT_POUNDglobal] = ACTIONS(352),
    [sym_end_global] = ACTIONS(352),
    [anon_sym_LT_POUNDlocal] = ACTIONS(352),
    [sym_end_local] = ACTIONS(352),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(354),
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
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(356),
    [anon_sym_LT_POUNDlist] = ACTIONS(356),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(356),
    [sym_break] = ACTIONS(356),
    [sym_continue] = ACTIONS(356),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(356),
    [anon_sym_LT_POUNDitems] = ACTIONS(356),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(356),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(356),
    [anon_sym_LT_POUNDif] = ACTIONS(356),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(356),
    [anon_sym_LT_POUNDelseif] = ACTIONS(356),
    [anon_sym_LT_POUNDswitch] = ACTIONS(356),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(356),
    [anon_sym_LT_POUNDcase] = ACTIONS(356),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(356),
    [anon_sym_LT_POUNDfunction] = ACTIONS(356),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(356),
    [anon_sym_LT_POUNDreturn] = ACTIONS(356),
    [anon_sym_LT_POUNDmacro] = ACTIONS(356),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(356),
    [anon_sym_LT_POUNDnested] = ACTIONS(356),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(356),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(356),
    [sym_recover] = ACTIONS(356),
    [sym_fallback] = ACTIONS(356),
    [sym_flush] = ACTIONS(356),
    [anon_sym_LT_POUNDftl] = ACTIONS(356),
    [anon_sym_LT_POUNDimport] = ACTIONS(356),
    [anon_sym_LT_POUNDinclude] = ACTIONS(356),
    [sym_lt] = ACTIONS(356),
    [sym_nt] = ACTIONS(356),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(356),
    [sym_rt] = ACTIONS(356),
    [anon_sym_LT_POUNDsetting] = ACTIONS(356),
    [sym_stop] = ACTIONS(356),
    [sym_t] = ACTIONS(356),
    [anon_sym_LT_POUNDvisit] = ACTIONS(356),
    [anon_sym_LT_POUNDassign] = ACTIONS(356),
    [sym_end_assign] = ACTIONS(356),
    [anon_sym_LT_POUNDglobal] = ACTIONS(356),
    [sym_end_global] = ACTIONS(356),
    [anon_sym_LT_POUNDlocal] = ACTIONS(356),
    [sym_end_local] = ACTIONS(356),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(358),
    [anon_sym_LT_POUNDlist] = ACTIONS(358),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(358),
    [sym_break] = ACTIONS(358),
    [sym_continue] = ACTIONS(358),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(358),
    [anon_sym_LT_POUNDitems] = ACTIONS(358),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(358),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(358),
    [anon_sym_LT_POUNDif] = ACTIONS(358),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(358),
    [anon_sym_LT_POUNDelseif] = ACTIONS(358),
    [anon_sym_LT_POUNDswitch] = ACTIONS(358),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(358),
    [anon_sym_LT_POUNDcase] = ACTIONS(358),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(358),
    [anon_sym_LT_POUNDfunction] = ACTIONS(358),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(358),
    [anon_sym_LT_POUNDreturn] = ACTIONS(358),
    [anon_sym_LT_POUNDmacro] = ACTIONS(358),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(358),
    [anon_sym_LT_POUNDnested] = ACTIONS(358),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(358),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(358),
    [sym_recover] = ACTIONS(358),
    [sym_fallback] = ACTIONS(358),
    [sym_flush] = ACTIONS(358),
    [anon_sym_LT_POUNDftl] = ACTIONS(358),
    [anon_sym_LT_POUNDimport] = ACTIONS(358),
    [anon_sym_LT_POUNDinclude] = ACTIONS(358),
    [sym_lt] = ACTIONS(358),
    [sym_nt] = ACTIONS(358),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(358),
    [sym_rt] = ACTIONS(358),
    [anon_sym_LT_POUNDsetting] = ACTIONS(358),
    [sym_stop] = ACTIONS(358),
    [sym_t] = ACTIONS(358),
    [anon_sym_LT_POUNDvisit] = ACTIONS(358),
    [anon_sym_LT_POUNDassign] = ACTIONS(358),
    [sym_end_assign] = ACTIONS(358),
    [anon_sym_LT_POUNDglobal] = ACTIONS(358),
    [sym_end_global] = ACTIONS(358),
    [anon_sym_LT_POUNDlocal] = ACTIONS(358),
    [sym_end_local] = ACTIONS(358),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(360),
    [anon_sym_LT_POUNDlist] = ACTIONS(360),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(360),
    [sym_break] = ACTIONS(360),
    [sym_continue] = ACTIONS(360),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(360),
    [anon_sym_LT_POUNDitems] = ACTIONS(360),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(360),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(360),
    [anon_sym_LT_POUNDif] = ACTIONS(360),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(360),
    [anon_sym_LT_POUNDelseif] = ACTIONS(360),
    [anon_sym_LT_POUNDswitch] = ACTIONS(360),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(360),
    [anon_sym_LT_POUNDcase] = ACTIONS(360),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(360),
    [anon_sym_LT_POUNDfunction] = ACTIONS(360),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(360),
    [anon_sym_LT_POUNDreturn] = ACTIONS(360),
    [anon_sym_LT_POUNDmacro] = ACTIONS(360),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(360),
    [anon_sym_LT_POUNDnested] = ACTIONS(360),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(360),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(360),
    [sym_recover] = ACTIONS(360),
    [sym_fallback] = ACTIONS(360),
    [sym_flush] = ACTIONS(360),
    [anon_sym_LT_POUNDftl] = ACTIONS(360),
    [anon_sym_LT_POUNDimport] = ACTIONS(360),
    [anon_sym_LT_POUNDinclude] = ACTIONS(360),
    [sym_lt] = ACTIONS(360),
    [sym_nt] = ACTIONS(360),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(360),
    [sym_rt] = ACTIONS(360),
    [anon_sym_LT_POUNDsetting] = ACTIONS(360),
    [sym_stop] = ACTIONS(360),
    [sym_t] = ACTIONS(360),
    [anon_sym_LT_POUNDvisit] = ACTIONS(360),
    [anon_sym_LT_POUNDassign] = ACTIONS(360),
    [sym_end_assign] = ACTIONS(360),
    [anon_sym_LT_POUNDglobal] = ACTIONS(360),
    [sym_end_global] = ACTIONS(360),
    [anon_sym_LT_POUNDlocal] = ACTIONS(360),
    [sym_end_local] = ACTIONS(360),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(362),
    [anon_sym_LT_POUNDlist] = ACTIONS(362),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(362),
    [sym_break] = ACTIONS(362),
    [sym_continue] = ACTIONS(362),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(362),
    [anon_sym_LT_POUNDitems] = ACTIONS(362),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(362),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(362),
    [anon_sym_LT_POUNDif] = ACTIONS(362),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(362),
    [anon_sym_LT_POUNDelseif] = ACTIONS(362),
    [anon_sym_LT_POUNDswitch] = ACTIONS(362),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(362),
    [anon_sym_LT_POUNDcase] = ACTIONS(362),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(362),
    [anon_sym_LT_POUNDfunction] = ACTIONS(362),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(362),
    [anon_sym_LT_POUNDreturn] = ACTIONS(362),
    [anon_sym_LT_POUNDmacro] = ACTIONS(362),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(362),
    [anon_sym_LT_POUNDnested] = ACTIONS(362),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(362),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(362),
    [sym_recover] = ACTIONS(362),
    [sym_fallback] = ACTIONS(362),
    [sym_flush] = ACTIONS(362),
    [anon_sym_LT_POUNDftl] = ACTIONS(362),
    [anon_sym_LT_POUNDimport] = ACTIONS(362),
    [anon_sym_LT_POUNDinclude] = ACTIONS(362),
    [sym_lt] = ACTIONS(362),
    [sym_nt] = ACTIONS(362),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(362),
    [sym_rt] = ACTIONS(362),
    [anon_sym_LT_POUNDsetting] = ACTIONS(362),
    [sym_stop] = ACTIONS(362),
    [sym_t] = ACTIONS(362),
    [anon_sym_LT_POUNDvisit] = ACTIONS(362),
    [anon_sym_LT_POUNDassign] = ACTIONS(362),
    [sym_end_assign] = ACTIONS(362),
    [anon_sym_LT_POUNDglobal] = ACTIONS(362),
    [sym_end_global] = ACTIONS(362),
    [anon_sym_LT_POUNDlocal] = ACTIONS(362),
    [sym_end_local] = ACTIONS(362),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(364),
    [anon_sym_LT_POUNDlist] = ACTIONS(364),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(364),
    [sym_break] = ACTIONS(364),
    [sym_continue] = ACTIONS(364),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(364),
    [anon_sym_LT_POUNDitems] = ACTIONS(364),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(364),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(364),
    [anon_sym_LT_POUNDif] = ACTIONS(364),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(364),
    [anon_sym_LT_POUNDelseif] = ACTIONS(364),
    [anon_sym_LT_POUNDswitch] = ACTIONS(364),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(364),
    [anon_sym_LT_POUNDcase] = ACTIONS(364),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(364),
    [anon_sym_LT_POUNDfunction] = ACTIONS(364),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(364),
    [anon_sym_LT_POUNDreturn] = ACTIONS(364),
    [anon_sym_LT_POUNDmacro] = ACTIONS(364),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(364),
    [anon_sym_LT_POUNDnested] = ACTIONS(364),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(364),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(364),
    [sym_recover] = ACTIONS(364),
    [sym_fallback] = ACTIONS(364),
    [sym_flush] = ACTIONS(364),
    [anon_sym_LT_POUNDftl] = ACTIONS(364),
    [anon_sym_LT_POUNDimport] = ACTIONS(364),
    [anon_sym_LT_POUNDinclude] = ACTIONS(364),
    [sym_lt] = ACTIONS(364),
    [sym_nt] = ACTIONS(364),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(364),
    [sym_rt] = ACTIONS(364),
    [anon_sym_LT_POUNDsetting] = ACTIONS(364),
    [sym_stop] = ACTIONS(364),
    [sym_t] = ACTIONS(364),
    [anon_sym_LT_POUNDvisit] = ACTIONS(364),
    [anon_sym_LT_POUNDassign] = ACTIONS(364),
    [sym_end_assign] = ACTIONS(364),
    [anon_sym_LT_POUNDglobal] = ACTIONS(364),
    [sym_end_global] = ACTIONS(364),
    [anon_sym_LT_POUNDlocal] = ACTIONS(364),
    [sym_end_local] = ACTIONS(364),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(366),
    [anon_sym_LT_POUNDlist] = ACTIONS(366),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(366),
    [sym_break] = ACTIONS(366),
    [sym_continue] = ACTIONS(366),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(366),
    [anon_sym_LT_POUNDitems] = ACTIONS(366),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(366),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(366),
    [anon_sym_LT_POUNDif] = ACTIONS(366),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(366),
    [anon_sym_LT_POUNDelseif] = ACTIONS(366),
    [anon_sym_LT_POUNDswitch] = ACTIONS(366),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(366),
    [anon_sym_LT_POUNDcase] = ACTIONS(366),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(366),
    [anon_sym_LT_POUNDfunction] = ACTIONS(366),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(366),
    [anon_sym_LT_POUNDreturn] = ACTIONS(366),
    [anon_sym_LT_POUNDmacro] = ACTIONS(366),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(366),
    [anon_sym_LT_POUNDnested] = ACTIONS(366),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(366),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(366),
    [sym_recover] = ACTIONS(366),
    [sym_fallback] = ACTIONS(366),
    [sym_flush] = ACTIONS(366),
    [anon_sym_LT_POUNDftl] = ACTIONS(366),
    [anon_sym_LT_POUNDimport] = ACTIONS(366),
    [anon_sym_LT_POUNDinclude] = ACTIONS(366),
    [sym_lt] = ACTIONS(366),
    [sym_nt] = ACTIONS(366),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(366),
    [sym_rt] = ACTIONS(366),
    [anon_sym_LT_POUNDsetting] = ACTIONS(366),
    [sym_stop] = ACTIONS(366),
    [sym_t] = ACTIONS(366),
    [anon_sym_LT_POUNDvisit] = ACTIONS(366),
    [anon_sym_LT_POUNDassign] = ACTIONS(366),
    [sym_end_assign] = ACTIONS(366),
    [anon_sym_LT_POUNDglobal] = ACTIONS(366),
    [sym_end_global] = ACTIONS(366),
    [anon_sym_LT_POUNDlocal] = ACTIONS(366),
    [sym_end_local] = ACTIONS(366),
  },
  [88] = {
    [ts_builtin_sym_end] = ACTIONS(368),
    [anon_sym_LT_POUNDlist] = ACTIONS(368),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(368),
    [sym_break] = ACTIONS(368),
    [sym_continue] = ACTIONS(368),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(368),
    [anon_sym_LT_POUNDitems] = ACTIONS(368),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(368),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(368),
    [anon_sym_LT_POUNDif] = ACTIONS(368),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(368),
    [anon_sym_LT_POUNDelseif] = ACTIONS(368),
    [anon_sym_LT_POUNDswitch] = ACTIONS(368),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(368),
    [anon_sym_LT_POUNDcase] = ACTIONS(368),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(368),
    [anon_sym_LT_POUNDfunction] = ACTIONS(368),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(368),
    [anon_sym_LT_POUNDreturn] = ACTIONS(368),
    [anon_sym_LT_POUNDmacro] = ACTIONS(368),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(368),
    [anon_sym_LT_POUNDnested] = ACTIONS(368),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(368),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(368),
    [sym_recover] = ACTIONS(368),
    [sym_fallback] = ACTIONS(368),
    [sym_flush] = ACTIONS(368),
    [anon_sym_LT_POUNDftl] = ACTIONS(368),
    [anon_sym_LT_POUNDimport] = ACTIONS(368),
    [anon_sym_LT_POUNDinclude] = ACTIONS(368),
    [sym_lt] = ACTIONS(368),
    [sym_nt] = ACTIONS(368),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(368),
    [sym_rt] = ACTIONS(368),
    [anon_sym_LT_POUNDsetting] = ACTIONS(368),
    [sym_stop] = ACTIONS(368),
    [sym_t] = ACTIONS(368),
    [anon_sym_LT_POUNDvisit] = ACTIONS(368),
    [anon_sym_LT_POUNDassign] = ACTIONS(368),
    [sym_end_assign] = ACTIONS(368),
    [anon_sym_LT_POUNDglobal] = ACTIONS(368),
    [sym_end_global] = ACTIONS(368),
    [anon_sym_LT_POUNDlocal] = ACTIONS(368),
    [sym_end_local] = ACTIONS(368),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(370),
    [anon_sym_LT_POUNDlist] = ACTIONS(370),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(370),
    [sym_break] = ACTIONS(370),
    [sym_continue] = ACTIONS(370),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(370),
    [anon_sym_LT_POUNDitems] = ACTIONS(370),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(370),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(370),
    [anon_sym_LT_POUNDif] = ACTIONS(370),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(370),
    [anon_sym_LT_POUNDelseif] = ACTIONS(370),
    [anon_sym_LT_POUNDswitch] = ACTIONS(370),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(370),
    [anon_sym_LT_POUNDcase] = ACTIONS(370),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(370),
    [anon_sym_LT_POUNDfunction] = ACTIONS(370),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(370),
    [anon_sym_LT_POUNDreturn] = ACTIONS(370),
    [anon_sym_LT_POUNDmacro] = ACTIONS(370),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(370),
    [anon_sym_LT_POUNDnested] = ACTIONS(370),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(370),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(370),
    [sym_recover] = ACTIONS(370),
    [sym_fallback] = ACTIONS(370),
    [sym_flush] = ACTIONS(370),
    [anon_sym_LT_POUNDftl] = ACTIONS(370),
    [anon_sym_LT_POUNDimport] = ACTIONS(370),
    [anon_sym_LT_POUNDinclude] = ACTIONS(370),
    [sym_lt] = ACTIONS(370),
    [sym_nt] = ACTIONS(370),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(370),
    [sym_rt] = ACTIONS(370),
    [anon_sym_LT_POUNDsetting] = ACTIONS(370),
    [sym_stop] = ACTIONS(370),
    [sym_t] = ACTIONS(370),
    [anon_sym_LT_POUNDvisit] = ACTIONS(370),
    [anon_sym_LT_POUNDassign] = ACTIONS(370),
    [sym_end_assign] = ACTIONS(370),
    [anon_sym_LT_POUNDglobal] = ACTIONS(370),
    [sym_end_global] = ACTIONS(370),
    [anon_sym_LT_POUNDlocal] = ACTIONS(370),
    [sym_end_local] = ACTIONS(370),
  },
  [90] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(372),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(372),
    [sym_break] = ACTIONS(372),
    [sym_continue] = ACTIONS(372),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(372),
    [anon_sym_LT_POUNDitems] = ACTIONS(372),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(372),
    [anon_sym_LT_POUNDif] = ACTIONS(372),
    [anon_sym_LT_POUNDswitch] = ACTIONS(372),
    [anon_sym_LT_POUNDfunction] = ACTIONS(372),
    [anon_sym_LT_POUNDmacro] = ACTIONS(372),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(372),
    [sym_fallback] = ACTIONS(372),
    [sym_flush] = ACTIONS(372),
    [anon_sym_LT_POUNDftl] = ACTIONS(372),
    [anon_sym_LT_POUNDimport] = ACTIONS(372),
    [anon_sym_LT_POUNDinclude] = ACTIONS(372),
    [sym_lt] = ACTIONS(372),
    [sym_nt] = ACTIONS(372),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(372),
    [sym_rt] = ACTIONS(372),
    [anon_sym_LT_POUNDsetting] = ACTIONS(372),
    [sym_stop] = ACTIONS(372),
    [sym_t] = ACTIONS(372),
    [anon_sym_LT_POUNDvisit] = ACTIONS(372),
    [anon_sym_LT_POUNDassign] = ACTIONS(372),
    [sym_end_assign] = ACTIONS(372),
    [anon_sym_LT_POUNDglobal] = ACTIONS(372),
    [sym_end_global] = ACTIONS(372),
    [anon_sym_LT_POUNDlocal] = ACTIONS(372),
    [sym_end_local] = ACTIONS(372),
  },
  [91] = {
    [sym_directive] = STATE(90),
    [sym_list] = STATE(8),
    [sym_list_middle] = STATE(121),
    [sym_items] = STATE(90),
    [sym_sep] = STATE(90),
    [sym_sep_block] = STATE(95),
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
    [aux_sym_list_repeat1] = STATE(121),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(374),
    [sym_break] = ACTIONS(234),
    [sym_continue] = ACTIONS(234),
    [anon_sym_LT_POUNDitems] = ACTIONS(238),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(240),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
    [sym_fallback] = ACTIONS(19),
    [sym_flush] = ACTIONS(19),
    [anon_sym_LT_POUNDftl] = ACTIONS(21),
    [anon_sym_LT_POUNDimport] = ACTIONS(23),
    [anon_sym_LT_POUNDinclude] = ACTIONS(25),
    [sym_lt] = ACTIONS(19),
    [sym_nt] = ACTIONS(19),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(27),
    [sym_rt] = ACTIONS(19),
    [anon_sym_LT_POUNDsetting] = ACTIONS(29),
    [sym_stop] = ACTIONS(19),
    [sym_t] = ACTIONS(19),
    [anon_sym_LT_POUNDvisit] = ACTIONS(31),
    [anon_sym_LT_POUNDassign] = ACTIONS(33),
    [sym_end_assign] = ACTIONS(35),
    [anon_sym_LT_POUNDglobal] = ACTIONS(37),
    [sym_end_global] = ACTIONS(39),
    [anon_sym_LT_POUNDlocal] = ACTIONS(41),
    [sym_end_local] = ACTIONS(43),
  },
  [92] = {
    [sym_parameter_pattern] = STATE(122),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(45),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
  },
  [93] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(376),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(376),
    [sym_break] = ACTIONS(376),
    [sym_continue] = ACTIONS(376),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(376),
    [anon_sym_LT_POUNDitems] = ACTIONS(376),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(376),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(376),
    [anon_sym_LT_SLASH_POUNDsep_GT] = ACTIONS(378),
    [anon_sym_LT_POUNDif] = ACTIONS(376),
    [anon_sym_LT_POUNDswitch] = ACTIONS(376),
    [anon_sym_LT_POUNDfunction] = ACTIONS(376),
    [anon_sym_LT_POUNDmacro] = ACTIONS(376),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(376),
    [sym_fallback] = ACTIONS(376),
    [sym_flush] = ACTIONS(376),
    [anon_sym_LT_POUNDftl] = ACTIONS(376),
    [anon_sym_LT_POUNDimport] = ACTIONS(376),
    [anon_sym_LT_POUNDinclude] = ACTIONS(376),
    [sym_lt] = ACTIONS(376),
    [sym_nt] = ACTIONS(376),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(376),
    [sym_rt] = ACTIONS(376),
    [anon_sym_LT_POUNDsetting] = ACTIONS(376),
    [sym_stop] = ACTIONS(376),
    [sym_t] = ACTIONS(376),
    [anon_sym_LT_POUNDvisit] = ACTIONS(376),
    [anon_sym_LT_POUNDassign] = ACTIONS(376),
    [sym_end_assign] = ACTIONS(376),
    [anon_sym_LT_POUNDglobal] = ACTIONS(376),
    [sym_end_global] = ACTIONS(376),
    [anon_sym_LT_POUNDlocal] = ACTIONS(376),
    [sym_end_local] = ACTIONS(376),
  },
  [94] = {
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(380),
  },
  [95] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(376),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(376),
    [sym_break] = ACTIONS(376),
    [sym_continue] = ACTIONS(376),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(376),
    [anon_sym_LT_POUNDitems] = ACTIONS(376),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(376),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(376),
    [anon_sym_LT_POUNDif] = ACTIONS(376),
    [anon_sym_LT_POUNDswitch] = ACTIONS(376),
    [anon_sym_LT_POUNDfunction] = ACTIONS(376),
    [anon_sym_LT_POUNDmacro] = ACTIONS(376),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(376),
    [sym_fallback] = ACTIONS(376),
    [sym_flush] = ACTIONS(376),
    [anon_sym_LT_POUNDftl] = ACTIONS(376),
    [anon_sym_LT_POUNDimport] = ACTIONS(376),
    [anon_sym_LT_POUNDinclude] = ACTIONS(376),
    [sym_lt] = ACTIONS(376),
    [sym_nt] = ACTIONS(376),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(376),
    [sym_rt] = ACTIONS(376),
    [anon_sym_LT_POUNDsetting] = ACTIONS(376),
    [sym_stop] = ACTIONS(376),
    [sym_t] = ACTIONS(376),
    [anon_sym_LT_POUNDvisit] = ACTIONS(376),
    [anon_sym_LT_POUNDassign] = ACTIONS(376),
    [sym_end_assign] = ACTIONS(376),
    [anon_sym_LT_POUNDglobal] = ACTIONS(376),
    [sym_end_global] = ACTIONS(376),
    [anon_sym_LT_POUNDlocal] = ACTIONS(376),
    [sym_end_local] = ACTIONS(376),
  },
  [96] = {
    [sym_directive] = STATE(90),
    [sym_list] = STATE(8),
    [sym_list_middle] = STATE(126),
    [sym_list_else] = STATE(125),
    [sym_items] = STATE(90),
    [sym_sep] = STATE(90),
    [sym_sep_block] = STATE(95),
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
    [aux_sym_list_repeat1] = STATE(126),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(380),
    [sym_break] = ACTIONS(234),
    [sym_continue] = ACTIONS(234),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(236),
    [anon_sym_LT_POUNDitems] = ACTIONS(238),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(240),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
    [sym_fallback] = ACTIONS(19),
    [sym_flush] = ACTIONS(19),
    [anon_sym_LT_POUNDftl] = ACTIONS(21),
    [anon_sym_LT_POUNDimport] = ACTIONS(23),
    [anon_sym_LT_POUNDinclude] = ACTIONS(25),
    [sym_lt] = ACTIONS(19),
    [sym_nt] = ACTIONS(19),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(27),
    [sym_rt] = ACTIONS(19),
    [anon_sym_LT_POUNDsetting] = ACTIONS(29),
    [sym_stop] = ACTIONS(19),
    [sym_t] = ACTIONS(19),
    [anon_sym_LT_POUNDvisit] = ACTIONS(31),
    [anon_sym_LT_POUNDassign] = ACTIONS(33),
    [sym_end_assign] = ACTIONS(35),
    [anon_sym_LT_POUNDglobal] = ACTIONS(37),
    [sym_end_global] = ACTIONS(39),
    [anon_sym_LT_POUNDlocal] = ACTIONS(41),
    [sym_end_local] = ACTIONS(43),
  },
  [97] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(382),
    [anon_sym_as] = ACTIONS(382),
    [anon_sym_using] = ACTIONS(382),
    [anon_sym_GT] = ACTIONS(384),
  },
  [98] = {
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(386),
    [anon_sym_as] = ACTIONS(386),
    [anon_sym_using] = ACTIONS(386),
    [anon_sym_GT] = ACTIONS(388),
  },
  [99] = {
    [sym_directive] = STATE(102),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_elseif] = STATE(102),
    [sym_if_middle] = STATE(127),
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
    [aux_sym_if_repeat1] = STATE(127),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(390),
    [anon_sym_LT_POUNDelseif] = ACTIONS(256),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
    [sym_fallback] = ACTIONS(19),
    [sym_flush] = ACTIONS(19),
    [anon_sym_LT_POUNDftl] = ACTIONS(21),
    [anon_sym_LT_POUNDimport] = ACTIONS(23),
    [anon_sym_LT_POUNDinclude] = ACTIONS(25),
    [sym_lt] = ACTIONS(19),
    [sym_nt] = ACTIONS(19),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(27),
    [sym_rt] = ACTIONS(19),
    [anon_sym_LT_POUNDsetting] = ACTIONS(29),
    [sym_stop] = ACTIONS(19),
    [sym_t] = ACTIONS(19),
    [anon_sym_LT_POUNDvisit] = ACTIONS(31),
    [anon_sym_LT_POUNDassign] = ACTIONS(33),
    [sym_end_assign] = ACTIONS(35),
    [anon_sym_LT_POUNDglobal] = ACTIONS(37),
    [sym_end_global] = ACTIONS(39),
    [anon_sym_LT_POUNDlocal] = ACTIONS(41),
    [sym_end_local] = ACTIONS(43),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(392),
    [anon_sym_LT_POUNDlist] = ACTIONS(392),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(392),
    [sym_break] = ACTIONS(392),
    [sym_continue] = ACTIONS(392),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(392),
    [anon_sym_LT_POUNDitems] = ACTIONS(392),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(392),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(392),
    [anon_sym_LT_POUNDif] = ACTIONS(392),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(392),
    [anon_sym_LT_POUNDelseif] = ACTIONS(392),
    [anon_sym_LT_POUNDswitch] = ACTIONS(392),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(392),
    [anon_sym_LT_POUNDcase] = ACTIONS(392),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(392),
    [anon_sym_LT_POUNDfunction] = ACTIONS(392),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(392),
    [anon_sym_LT_POUNDreturn] = ACTIONS(392),
    [anon_sym_LT_POUNDmacro] = ACTIONS(392),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(392),
    [anon_sym_LT_POUNDnested] = ACTIONS(392),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(392),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(392),
    [sym_recover] = ACTIONS(392),
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
  [101] = {
    [sym_parameter_pattern] = STATE(128),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(45),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
  },
  [102] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(394),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(394),
    [anon_sym_LT_POUNDif] = ACTIONS(394),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(394),
    [anon_sym_LT_POUNDelseif] = ACTIONS(394),
    [anon_sym_LT_POUNDswitch] = ACTIONS(394),
    [anon_sym_LT_POUNDfunction] = ACTIONS(394),
    [anon_sym_LT_POUNDmacro] = ACTIONS(394),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(394),
    [sym_fallback] = ACTIONS(394),
    [sym_flush] = ACTIONS(394),
    [anon_sym_LT_POUNDftl] = ACTIONS(394),
    [anon_sym_LT_POUNDimport] = ACTIONS(394),
    [anon_sym_LT_POUNDinclude] = ACTIONS(394),
    [sym_lt] = ACTIONS(394),
    [sym_nt] = ACTIONS(394),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(394),
    [sym_rt] = ACTIONS(394),
    [anon_sym_LT_POUNDsetting] = ACTIONS(394),
    [sym_stop] = ACTIONS(394),
    [sym_t] = ACTIONS(394),
    [anon_sym_LT_POUNDvisit] = ACTIONS(394),
    [anon_sym_LT_POUNDassign] = ACTIONS(394),
    [sym_end_assign] = ACTIONS(394),
    [anon_sym_LT_POUNDglobal] = ACTIONS(394),
    [sym_end_global] = ACTIONS(394),
    [anon_sym_LT_POUNDlocal] = ACTIONS(394),
    [sym_end_local] = ACTIONS(394),
  },
  [103] = {
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(396),
  },
  [104] = {
    [sym_directive] = STATE(102),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_if_else] = STATE(130),
    [sym_elseif] = STATE(102),
    [sym_if_middle] = STATE(131),
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
    [aux_sym_if_repeat1] = STATE(131),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(252),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(396),
    [anon_sym_LT_POUNDelseif] = ACTIONS(256),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
    [sym_fallback] = ACTIONS(19),
    [sym_flush] = ACTIONS(19),
    [anon_sym_LT_POUNDftl] = ACTIONS(21),
    [anon_sym_LT_POUNDimport] = ACTIONS(23),
    [anon_sym_LT_POUNDinclude] = ACTIONS(25),
    [sym_lt] = ACTIONS(19),
    [sym_nt] = ACTIONS(19),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(27),
    [sym_rt] = ACTIONS(19),
    [anon_sym_LT_POUNDsetting] = ACTIONS(29),
    [sym_stop] = ACTIONS(19),
    [sym_t] = ACTIONS(19),
    [anon_sym_LT_POUNDvisit] = ACTIONS(31),
    [anon_sym_LT_POUNDassign] = ACTIONS(33),
    [sym_end_assign] = ACTIONS(35),
    [anon_sym_LT_POUNDglobal] = ACTIONS(37),
    [sym_end_global] = ACTIONS(39),
    [anon_sym_LT_POUNDlocal] = ACTIONS(41),
    [sym_end_local] = ACTIONS(43),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(398),
    [anon_sym_LT_POUNDlist] = ACTIONS(398),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(398),
    [sym_break] = ACTIONS(398),
    [sym_continue] = ACTIONS(398),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(398),
    [anon_sym_LT_POUNDitems] = ACTIONS(398),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(398),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(398),
    [anon_sym_LT_POUNDif] = ACTIONS(398),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(398),
    [anon_sym_LT_POUNDelseif] = ACTIONS(398),
    [anon_sym_LT_POUNDswitch] = ACTIONS(398),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(398),
    [anon_sym_LT_POUNDcase] = ACTIONS(398),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(398),
    [anon_sym_LT_POUNDfunction] = ACTIONS(398),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(398),
    [anon_sym_LT_POUNDreturn] = ACTIONS(398),
    [anon_sym_LT_POUNDmacro] = ACTIONS(398),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(398),
    [anon_sym_LT_POUNDnested] = ACTIONS(398),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(398),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(398),
    [sym_recover] = ACTIONS(398),
    [sym_fallback] = ACTIONS(398),
    [sym_flush] = ACTIONS(398),
    [anon_sym_LT_POUNDftl] = ACTIONS(398),
    [anon_sym_LT_POUNDimport] = ACTIONS(398),
    [anon_sym_LT_POUNDinclude] = ACTIONS(398),
    [sym_lt] = ACTIONS(398),
    [sym_nt] = ACTIONS(398),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(398),
    [sym_rt] = ACTIONS(398),
    [anon_sym_LT_POUNDsetting] = ACTIONS(398),
    [sym_stop] = ACTIONS(398),
    [sym_t] = ACTIONS(398),
    [anon_sym_LT_POUNDvisit] = ACTIONS(398),
    [anon_sym_LT_POUNDassign] = ACTIONS(398),
    [sym_end_assign] = ACTIONS(398),
    [anon_sym_LT_POUNDglobal] = ACTIONS(398),
    [sym_end_global] = ACTIONS(398),
    [anon_sym_LT_POUNDlocal] = ACTIONS(398),
    [sym_end_local] = ACTIONS(398),
  },
  [106] = {
    [sym_parameter_pattern] = STATE(132),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(45),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
  },
  [107] = {
    [sym_directive] = STATE(133),
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
    [aux_sym_case_repeat1] = STATE(133),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(400),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
    [sym_fallback] = ACTIONS(19),
    [sym_flush] = ACTIONS(19),
    [anon_sym_LT_POUNDftl] = ACTIONS(21),
    [anon_sym_LT_POUNDimport] = ACTIONS(23),
    [anon_sym_LT_POUNDinclude] = ACTIONS(25),
    [sym_lt] = ACTIONS(19),
    [sym_nt] = ACTIONS(19),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(27),
    [sym_rt] = ACTIONS(19),
    [anon_sym_LT_POUNDsetting] = ACTIONS(29),
    [sym_stop] = ACTIONS(19),
    [sym_t] = ACTIONS(19),
    [anon_sym_LT_POUNDvisit] = ACTIONS(31),
    [anon_sym_LT_POUNDassign] = ACTIONS(33),
    [sym_end_assign] = ACTIONS(35),
    [anon_sym_LT_POUNDglobal] = ACTIONS(37),
    [sym_end_global] = ACTIONS(39),
    [anon_sym_LT_POUNDlocal] = ACTIONS(41),
    [sym_end_local] = ACTIONS(43),
  },
  [108] = {
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(402),
    [anon_sym_LT_POUNDcase] = ACTIONS(402),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(402),
  },
  [109] = {
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(404),
  },
  [110] = {
    [sym_case] = STATE(108),
    [sym_default] = STATE(135),
    [sym_switch_middle] = STATE(136),
    [aux_sym_switch_repeat1] = STATE(136),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(404),
    [anon_sym_LT_POUNDcase] = ACTIONS(260),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(262),
  },
  [111] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(406),
    [anon_sym_LT_POUNDif] = ACTIONS(406),
    [anon_sym_LT_POUNDswitch] = ACTIONS(406),
    [anon_sym_LT_POUNDfunction] = ACTIONS(406),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(406),
    [anon_sym_LT_POUNDreturn] = ACTIONS(406),
    [anon_sym_LT_POUNDmacro] = ACTIONS(406),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(406),
    [anon_sym_LT_POUNDnested] = ACTIONS(406),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(406),
    [sym_fallback] = ACTIONS(406),
    [sym_flush] = ACTIONS(406),
    [anon_sym_LT_POUNDftl] = ACTIONS(406),
    [anon_sym_LT_POUNDimport] = ACTIONS(406),
    [anon_sym_LT_POUNDinclude] = ACTIONS(406),
    [sym_lt] = ACTIONS(406),
    [sym_nt] = ACTIONS(406),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(406),
    [sym_rt] = ACTIONS(406),
    [anon_sym_LT_POUNDsetting] = ACTIONS(406),
    [sym_stop] = ACTIONS(406),
    [sym_t] = ACTIONS(406),
    [anon_sym_LT_POUNDvisit] = ACTIONS(406),
    [anon_sym_LT_POUNDassign] = ACTIONS(406),
    [sym_end_assign] = ACTIONS(406),
    [anon_sym_LT_POUNDglobal] = ACTIONS(406),
    [sym_end_global] = ACTIONS(406),
    [anon_sym_LT_POUNDlocal] = ACTIONS(406),
    [sym_end_local] = ACTIONS(406),
  },
  [112] = {
    [anon_sym_GT] = ACTIONS(408),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(410),
    [anon_sym_LT_POUNDlist] = ACTIONS(410),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(410),
    [sym_break] = ACTIONS(410),
    [sym_continue] = ACTIONS(410),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(410),
    [anon_sym_LT_POUNDitems] = ACTIONS(410),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(410),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(410),
    [anon_sym_LT_POUNDif] = ACTIONS(410),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(410),
    [anon_sym_LT_POUNDelseif] = ACTIONS(410),
    [anon_sym_LT_POUNDswitch] = ACTIONS(410),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(410),
    [anon_sym_LT_POUNDcase] = ACTIONS(410),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(410),
    [anon_sym_LT_POUNDfunction] = ACTIONS(410),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(410),
    [anon_sym_LT_POUNDreturn] = ACTIONS(410),
    [anon_sym_LT_POUNDmacro] = ACTIONS(410),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(410),
    [anon_sym_LT_POUNDnested] = ACTIONS(410),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(410),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(410),
    [sym_recover] = ACTIONS(410),
    [sym_fallback] = ACTIONS(410),
    [sym_flush] = ACTIONS(410),
    [anon_sym_LT_POUNDftl] = ACTIONS(410),
    [anon_sym_LT_POUNDimport] = ACTIONS(410),
    [anon_sym_LT_POUNDinclude] = ACTIONS(410),
    [sym_lt] = ACTIONS(410),
    [sym_nt] = ACTIONS(410),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(410),
    [sym_rt] = ACTIONS(410),
    [anon_sym_LT_POUNDsetting] = ACTIONS(410),
    [sym_stop] = ACTIONS(410),
    [sym_t] = ACTIONS(410),
    [anon_sym_LT_POUNDvisit] = ACTIONS(410),
    [anon_sym_LT_POUNDassign] = ACTIONS(410),
    [sym_end_assign] = ACTIONS(410),
    [anon_sym_LT_POUNDglobal] = ACTIONS(410),
    [sym_end_global] = ACTIONS(410),
    [anon_sym_LT_POUNDlocal] = ACTIONS(410),
    [sym_end_local] = ACTIONS(410),
  },
  [114] = {
    [sym_directive] = STATE(69),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_function_middle] = STATE(114),
    [sym_return] = STATE(69),
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
    [aux_sym_function_repeat2] = STATE(114),
    [anon_sym_LT_POUNDlist] = ACTIONS(412),
    [anon_sym_LT_POUNDif] = ACTIONS(415),
    [anon_sym_LT_POUNDswitch] = ACTIONS(418),
    [anon_sym_LT_POUNDfunction] = ACTIONS(421),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(424),
    [anon_sym_LT_POUNDreturn] = ACTIONS(426),
    [anon_sym_LT_POUNDmacro] = ACTIONS(429),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(432),
    [sym_fallback] = ACTIONS(435),
    [sym_flush] = ACTIONS(435),
    [anon_sym_LT_POUNDftl] = ACTIONS(438),
    [anon_sym_LT_POUNDimport] = ACTIONS(441),
    [anon_sym_LT_POUNDinclude] = ACTIONS(444),
    [sym_lt] = ACTIONS(435),
    [sym_nt] = ACTIONS(435),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(447),
    [sym_rt] = ACTIONS(435),
    [anon_sym_LT_POUNDsetting] = ACTIONS(450),
    [sym_stop] = ACTIONS(435),
    [sym_t] = ACTIONS(435),
    [anon_sym_LT_POUNDvisit] = ACTIONS(453),
    [anon_sym_LT_POUNDassign] = ACTIONS(456),
    [sym_end_assign] = ACTIONS(459),
    [anon_sym_LT_POUNDglobal] = ACTIONS(462),
    [sym_end_global] = ACTIONS(465),
    [anon_sym_LT_POUNDlocal] = ACTIONS(468),
    [sym_end_local] = ACTIONS(471),
  },
  [115] = {
    [sym_directive] = STATE(69),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_function_middle] = STATE(114),
    [sym_return] = STATE(69),
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
    [aux_sym_function_repeat2] = STATE(114),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(474),
    [anon_sym_LT_POUNDreturn] = ACTIONS(121),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
    [sym_fallback] = ACTIONS(19),
    [sym_flush] = ACTIONS(19),
    [anon_sym_LT_POUNDftl] = ACTIONS(21),
    [anon_sym_LT_POUNDimport] = ACTIONS(23),
    [anon_sym_LT_POUNDinclude] = ACTIONS(25),
    [sym_lt] = ACTIONS(19),
    [sym_nt] = ACTIONS(19),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(27),
    [sym_rt] = ACTIONS(19),
    [anon_sym_LT_POUNDsetting] = ACTIONS(29),
    [sym_stop] = ACTIONS(19),
    [sym_t] = ACTIONS(19),
    [anon_sym_LT_POUNDvisit] = ACTIONS(31),
    [anon_sym_LT_POUNDassign] = ACTIONS(33),
    [sym_end_assign] = ACTIONS(35),
    [anon_sym_LT_POUNDglobal] = ACTIONS(37),
    [sym_end_global] = ACTIONS(39),
    [anon_sym_LT_POUNDlocal] = ACTIONS(41),
    [sym_end_local] = ACTIONS(43),
  },
  [116] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(476),
    [anon_sym_LT_POUNDif] = ACTIONS(476),
    [anon_sym_LT_POUNDswitch] = ACTIONS(476),
    [anon_sym_LT_POUNDfunction] = ACTIONS(476),
    [anon_sym_LT_POUNDreturn] = ACTIONS(476),
    [anon_sym_LT_POUNDmacro] = ACTIONS(476),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(476),
    [anon_sym_LT_POUNDnested] = ACTIONS(476),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(476),
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
  [117] = {
    [sym_parameter_pattern] = STATE(72),
    [sym_paramPattern1] = STATE(26),
    [sym_paramPattern2] = STATE(26),
    [sym_paramPattern3] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym_expression] = STATE(27),
    [sym_parameter] = STATE(28),
    [sym_operator] = STATE(29),
    [aux_sym_function_repeat1] = STATE(72),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_RBRACK_PLUS_SLASH] = ACTIONS(49),
    [anon_sym_as] = ACTIONS(47),
    [anon_sym_using] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(478),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(480),
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
  [119] = {
    [sym_directive] = STATE(75),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_return] = STATE(75),
    [sym_macro] = STATE(8),
    [sym_macro_middle] = STATE(119),
    [sym_nested] = STATE(75),
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
    [aux_sym_macro_repeat1] = STATE(119),
    [anon_sym_LT_POUNDlist] = ACTIONS(482),
    [anon_sym_LT_POUNDif] = ACTIONS(485),
    [anon_sym_LT_POUNDswitch] = ACTIONS(488),
    [anon_sym_LT_POUNDfunction] = ACTIONS(491),
    [anon_sym_LT_POUNDreturn] = ACTIONS(494),
    [anon_sym_LT_POUNDmacro] = ACTIONS(497),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(500),
    [anon_sym_LT_POUNDnested] = ACTIONS(502),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(505),
    [sym_fallback] = ACTIONS(508),
    [sym_flush] = ACTIONS(508),
    [anon_sym_LT_POUNDftl] = ACTIONS(511),
    [anon_sym_LT_POUNDimport] = ACTIONS(514),
    [anon_sym_LT_POUNDinclude] = ACTIONS(517),
    [sym_lt] = ACTIONS(508),
    [sym_nt] = ACTIONS(508),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(520),
    [sym_rt] = ACTIONS(508),
    [anon_sym_LT_POUNDsetting] = ACTIONS(523),
    [sym_stop] = ACTIONS(508),
    [sym_t] = ACTIONS(508),
    [anon_sym_LT_POUNDvisit] = ACTIONS(526),
    [anon_sym_LT_POUNDassign] = ACTIONS(529),
    [sym_end_assign] = ACTIONS(532),
    [anon_sym_LT_POUNDglobal] = ACTIONS(535),
    [sym_end_global] = ACTIONS(538),
    [anon_sym_LT_POUNDlocal] = ACTIONS(541),
    [sym_end_local] = ACTIONS(544),
  },
  [120] = {
    [sym_directive] = STATE(75),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_switch] = STATE(8),
    [sym_function] = STATE(8),
    [sym_return] = STATE(75),
    [sym_macro] = STATE(8),
    [sym_macro_middle] = STATE(119),
    [sym_nested] = STATE(75),
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
    [aux_sym_macro_repeat1] = STATE(119),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDreturn] = ACTIONS(121),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(547),
    [anon_sym_LT_POUNDnested] = ACTIONS(127),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
    [sym_fallback] = ACTIONS(19),
    [sym_flush] = ACTIONS(19),
    [anon_sym_LT_POUNDftl] = ACTIONS(21),
    [anon_sym_LT_POUNDimport] = ACTIONS(23),
    [anon_sym_LT_POUNDinclude] = ACTIONS(25),
    [sym_lt] = ACTIONS(19),
    [sym_nt] = ACTIONS(19),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(27),
    [sym_rt] = ACTIONS(19),
    [anon_sym_LT_POUNDsetting] = ACTIONS(29),
    [sym_stop] = ACTIONS(19),
    [sym_t] = ACTIONS(19),
    [anon_sym_LT_POUNDvisit] = ACTIONS(31),
    [anon_sym_LT_POUNDassign] = ACTIONS(33),
    [sym_end_assign] = ACTIONS(35),
    [anon_sym_LT_POUNDglobal] = ACTIONS(37),
    [sym_end_global] = ACTIONS(39),
    [anon_sym_LT_POUNDlocal] = ACTIONS(41),
    [sym_end_local] = ACTIONS(43),
  },
  [121] = {
    [sym_directive] = STATE(90),
    [sym_list] = STATE(8),
    [sym_list_middle] = STATE(141),
    [sym_items] = STATE(90),
    [sym_sep] = STATE(90),
    [sym_sep_block] = STATE(95),
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
    [aux_sym_list_repeat1] = STATE(141),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(549),
    [sym_break] = ACTIONS(234),
    [sym_continue] = ACTIONS(234),
    [anon_sym_LT_POUNDitems] = ACTIONS(238),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(240),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
    [sym_fallback] = ACTIONS(19),
    [sym_flush] = ACTIONS(19),
    [anon_sym_LT_POUNDftl] = ACTIONS(21),
    [anon_sym_LT_POUNDimport] = ACTIONS(23),
    [anon_sym_LT_POUNDinclude] = ACTIONS(25),
    [sym_lt] = ACTIONS(19),
    [sym_nt] = ACTIONS(19),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(27),
    [sym_rt] = ACTIONS(19),
    [anon_sym_LT_POUNDsetting] = ACTIONS(29),
    [sym_stop] = ACTIONS(19),
    [sym_t] = ACTIONS(19),
    [anon_sym_LT_POUNDvisit] = ACTIONS(31),
    [anon_sym_LT_POUNDassign] = ACTIONS(33),
    [sym_end_assign] = ACTIONS(35),
    [anon_sym_LT_POUNDglobal] = ACTIONS(37),
    [sym_end_global] = ACTIONS(39),
    [anon_sym_LT_POUNDlocal] = ACTIONS(41),
    [sym_end_local] = ACTIONS(43),
  },
  [122] = {
    [anon_sym_GT] = ACTIONS(551),
  },
  [123] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(553),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(553),
    [sym_break] = ACTIONS(553),
    [sym_continue] = ACTIONS(553),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(553),
    [anon_sym_LT_POUNDitems] = ACTIONS(553),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(553),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(553),
    [anon_sym_LT_POUNDif] = ACTIONS(553),
    [anon_sym_LT_POUNDswitch] = ACTIONS(553),
    [anon_sym_LT_POUNDfunction] = ACTIONS(553),
    [anon_sym_LT_POUNDmacro] = ACTIONS(553),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(553),
    [sym_fallback] = ACTIONS(553),
    [sym_flush] = ACTIONS(553),
    [anon_sym_LT_POUNDftl] = ACTIONS(553),
    [anon_sym_LT_POUNDimport] = ACTIONS(553),
    [anon_sym_LT_POUNDinclude] = ACTIONS(553),
    [sym_lt] = ACTIONS(553),
    [sym_nt] = ACTIONS(553),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(553),
    [sym_rt] = ACTIONS(553),
    [anon_sym_LT_POUNDsetting] = ACTIONS(553),
    [sym_stop] = ACTIONS(553),
    [sym_t] = ACTIONS(553),
    [anon_sym_LT_POUNDvisit] = ACTIONS(553),
    [anon_sym_LT_POUNDassign] = ACTIONS(553),
    [sym_end_assign] = ACTIONS(553),
    [anon_sym_LT_POUNDglobal] = ACTIONS(553),
    [sym_end_global] = ACTIONS(553),
    [anon_sym_LT_POUNDlocal] = ACTIONS(553),
    [sym_end_local] = ACTIONS(553),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(555),
    [anon_sym_LT_POUNDlist] = ACTIONS(555),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(555),
    [sym_break] = ACTIONS(555),
    [sym_continue] = ACTIONS(555),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(555),
    [anon_sym_LT_POUNDitems] = ACTIONS(555),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(555),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(555),
    [anon_sym_LT_POUNDif] = ACTIONS(555),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(555),
    [anon_sym_LT_POUNDelseif] = ACTIONS(555),
    [anon_sym_LT_POUNDswitch] = ACTIONS(555),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(555),
    [anon_sym_LT_POUNDcase] = ACTIONS(555),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(555),
    [anon_sym_LT_POUNDfunction] = ACTIONS(555),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(555),
    [anon_sym_LT_POUNDreturn] = ACTIONS(555),
    [anon_sym_LT_POUNDmacro] = ACTIONS(555),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(555),
    [anon_sym_LT_POUNDnested] = ACTIONS(555),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(555),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(555),
    [sym_recover] = ACTIONS(555),
    [sym_fallback] = ACTIONS(555),
    [sym_flush] = ACTIONS(555),
    [anon_sym_LT_POUNDftl] = ACTIONS(555),
    [anon_sym_LT_POUNDimport] = ACTIONS(555),
    [anon_sym_LT_POUNDinclude] = ACTIONS(555),
    [sym_lt] = ACTIONS(555),
    [sym_nt] = ACTIONS(555),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(555),
    [sym_rt] = ACTIONS(555),
    [anon_sym_LT_POUNDsetting] = ACTIONS(555),
    [sym_stop] = ACTIONS(555),
    [sym_t] = ACTIONS(555),
    [anon_sym_LT_POUNDvisit] = ACTIONS(555),
    [anon_sym_LT_POUNDassign] = ACTIONS(555),
    [sym_end_assign] = ACTIONS(555),
    [anon_sym_LT_POUNDglobal] = ACTIONS(555),
    [sym_end_global] = ACTIONS(555),
    [anon_sym_LT_POUNDlocal] = ACTIONS(555),
    [sym_end_local] = ACTIONS(555),
  },
  [125] = {
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(557),
  },
  [126] = {
    [sym_directive] = STATE(90),
    [sym_list] = STATE(8),
    [sym_list_middle] = STATE(126),
    [sym_items] = STATE(90),
    [sym_sep] = STATE(90),
    [sym_sep_block] = STATE(95),
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
    [aux_sym_list_repeat1] = STATE(126),
    [anon_sym_LT_POUNDlist] = ACTIONS(559),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(562),
    [sym_break] = ACTIONS(564),
    [sym_continue] = ACTIONS(564),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(562),
    [anon_sym_LT_POUNDitems] = ACTIONS(567),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(570),
    [anon_sym_LT_POUNDif] = ACTIONS(573),
    [anon_sym_LT_POUNDswitch] = ACTIONS(576),
    [anon_sym_LT_POUNDfunction] = ACTIONS(579),
    [anon_sym_LT_POUNDmacro] = ACTIONS(582),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(585),
    [sym_fallback] = ACTIONS(588),
    [sym_flush] = ACTIONS(588),
    [anon_sym_LT_POUNDftl] = ACTIONS(591),
    [anon_sym_LT_POUNDimport] = ACTIONS(594),
    [anon_sym_LT_POUNDinclude] = ACTIONS(597),
    [sym_lt] = ACTIONS(588),
    [sym_nt] = ACTIONS(588),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(600),
    [sym_rt] = ACTIONS(588),
    [anon_sym_LT_POUNDsetting] = ACTIONS(603),
    [sym_stop] = ACTIONS(588),
    [sym_t] = ACTIONS(588),
    [anon_sym_LT_POUNDvisit] = ACTIONS(606),
    [anon_sym_LT_POUNDassign] = ACTIONS(609),
    [sym_end_assign] = ACTIONS(612),
    [anon_sym_LT_POUNDglobal] = ACTIONS(615),
    [sym_end_global] = ACTIONS(618),
    [anon_sym_LT_POUNDlocal] = ACTIONS(621),
    [sym_end_local] = ACTIONS(624),
  },
  [127] = {
    [sym_directive] = STATE(102),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_elseif] = STATE(102),
    [sym_if_middle] = STATE(144),
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
    [aux_sym_if_repeat1] = STATE(144),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(627),
    [anon_sym_LT_POUNDelseif] = ACTIONS(256),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
    [sym_fallback] = ACTIONS(19),
    [sym_flush] = ACTIONS(19),
    [anon_sym_LT_POUNDftl] = ACTIONS(21),
    [anon_sym_LT_POUNDimport] = ACTIONS(23),
    [anon_sym_LT_POUNDinclude] = ACTIONS(25),
    [sym_lt] = ACTIONS(19),
    [sym_nt] = ACTIONS(19),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(27),
    [sym_rt] = ACTIONS(19),
    [anon_sym_LT_POUNDsetting] = ACTIONS(29),
    [sym_stop] = ACTIONS(19),
    [sym_t] = ACTIONS(19),
    [anon_sym_LT_POUNDvisit] = ACTIONS(31),
    [anon_sym_LT_POUNDassign] = ACTIONS(33),
    [sym_end_assign] = ACTIONS(35),
    [anon_sym_LT_POUNDglobal] = ACTIONS(37),
    [sym_end_global] = ACTIONS(39),
    [anon_sym_LT_POUNDlocal] = ACTIONS(41),
    [sym_end_local] = ACTIONS(43),
  },
  [128] = {
    [anon_sym_GT] = ACTIONS(629),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(631),
    [anon_sym_LT_POUNDlist] = ACTIONS(631),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(631),
    [sym_break] = ACTIONS(631),
    [sym_continue] = ACTIONS(631),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(631),
    [anon_sym_LT_POUNDitems] = ACTIONS(631),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(631),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(631),
    [anon_sym_LT_POUNDif] = ACTIONS(631),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(631),
    [anon_sym_LT_POUNDelseif] = ACTIONS(631),
    [anon_sym_LT_POUNDswitch] = ACTIONS(631),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(631),
    [anon_sym_LT_POUNDcase] = ACTIONS(631),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(631),
    [anon_sym_LT_POUNDfunction] = ACTIONS(631),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(631),
    [anon_sym_LT_POUNDreturn] = ACTIONS(631),
    [anon_sym_LT_POUNDmacro] = ACTIONS(631),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(631),
    [anon_sym_LT_POUNDnested] = ACTIONS(631),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(631),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(631),
    [sym_recover] = ACTIONS(631),
    [sym_fallback] = ACTIONS(631),
    [sym_flush] = ACTIONS(631),
    [anon_sym_LT_POUNDftl] = ACTIONS(631),
    [anon_sym_LT_POUNDimport] = ACTIONS(631),
    [anon_sym_LT_POUNDinclude] = ACTIONS(631),
    [sym_lt] = ACTIONS(631),
    [sym_nt] = ACTIONS(631),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(631),
    [sym_rt] = ACTIONS(631),
    [anon_sym_LT_POUNDsetting] = ACTIONS(631),
    [sym_stop] = ACTIONS(631),
    [sym_t] = ACTIONS(631),
    [anon_sym_LT_POUNDvisit] = ACTIONS(631),
    [anon_sym_LT_POUNDassign] = ACTIONS(631),
    [sym_end_assign] = ACTIONS(631),
    [anon_sym_LT_POUNDglobal] = ACTIONS(631),
    [sym_end_global] = ACTIONS(631),
    [anon_sym_LT_POUNDlocal] = ACTIONS(631),
    [sym_end_local] = ACTIONS(631),
  },
  [130] = {
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(633),
  },
  [131] = {
    [sym_directive] = STATE(102),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_elseif] = STATE(102),
    [sym_if_middle] = STATE(131),
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
    [aux_sym_if_repeat1] = STATE(131),
    [anon_sym_LT_POUNDlist] = ACTIONS(635),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(638),
    [anon_sym_LT_POUNDif] = ACTIONS(640),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(638),
    [anon_sym_LT_POUNDelseif] = ACTIONS(643),
    [anon_sym_LT_POUNDswitch] = ACTIONS(646),
    [anon_sym_LT_POUNDfunction] = ACTIONS(649),
    [anon_sym_LT_POUNDmacro] = ACTIONS(652),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(655),
    [sym_fallback] = ACTIONS(658),
    [sym_flush] = ACTIONS(658),
    [anon_sym_LT_POUNDftl] = ACTIONS(661),
    [anon_sym_LT_POUNDimport] = ACTIONS(664),
    [anon_sym_LT_POUNDinclude] = ACTIONS(667),
    [sym_lt] = ACTIONS(658),
    [sym_nt] = ACTIONS(658),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(670),
    [sym_rt] = ACTIONS(658),
    [anon_sym_LT_POUNDsetting] = ACTIONS(673),
    [sym_stop] = ACTIONS(658),
    [sym_t] = ACTIONS(658),
    [anon_sym_LT_POUNDvisit] = ACTIONS(676),
    [anon_sym_LT_POUNDassign] = ACTIONS(679),
    [sym_end_assign] = ACTIONS(682),
    [anon_sym_LT_POUNDglobal] = ACTIONS(685),
    [sym_end_global] = ACTIONS(688),
    [anon_sym_LT_POUNDlocal] = ACTIONS(691),
    [sym_end_local] = ACTIONS(694),
  },
  [132] = {
    [anon_sym_GT] = ACTIONS(697),
  },
  [133] = {
    [sym_directive] = STATE(148),
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
    [aux_sym_case_repeat1] = STATE(148),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(699),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
    [sym_fallback] = ACTIONS(19),
    [sym_flush] = ACTIONS(19),
    [anon_sym_LT_POUNDftl] = ACTIONS(21),
    [anon_sym_LT_POUNDimport] = ACTIONS(23),
    [anon_sym_LT_POUNDinclude] = ACTIONS(25),
    [sym_lt] = ACTIONS(19),
    [sym_nt] = ACTIONS(19),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(27),
    [sym_rt] = ACTIONS(19),
    [anon_sym_LT_POUNDsetting] = ACTIONS(29),
    [sym_stop] = ACTIONS(19),
    [sym_t] = ACTIONS(19),
    [anon_sym_LT_POUNDvisit] = ACTIONS(31),
    [anon_sym_LT_POUNDassign] = ACTIONS(33),
    [sym_end_assign] = ACTIONS(35),
    [anon_sym_LT_POUNDglobal] = ACTIONS(37),
    [sym_end_global] = ACTIONS(39),
    [anon_sym_LT_POUNDlocal] = ACTIONS(41),
    [sym_end_local] = ACTIONS(43),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(701),
    [anon_sym_LT_POUNDlist] = ACTIONS(701),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(701),
    [sym_break] = ACTIONS(701),
    [sym_continue] = ACTIONS(701),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(701),
    [anon_sym_LT_POUNDitems] = ACTIONS(701),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(701),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(701),
    [anon_sym_LT_POUNDif] = ACTIONS(701),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(701),
    [anon_sym_LT_POUNDelseif] = ACTIONS(701),
    [anon_sym_LT_POUNDswitch] = ACTIONS(701),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(701),
    [anon_sym_LT_POUNDcase] = ACTIONS(701),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(701),
    [anon_sym_LT_POUNDfunction] = ACTIONS(701),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(701),
    [anon_sym_LT_POUNDreturn] = ACTIONS(701),
    [anon_sym_LT_POUNDmacro] = ACTIONS(701),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(701),
    [anon_sym_LT_POUNDnested] = ACTIONS(701),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(701),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(701),
    [sym_recover] = ACTIONS(701),
    [sym_fallback] = ACTIONS(701),
    [sym_flush] = ACTIONS(701),
    [anon_sym_LT_POUNDftl] = ACTIONS(701),
    [anon_sym_LT_POUNDimport] = ACTIONS(701),
    [anon_sym_LT_POUNDinclude] = ACTIONS(701),
    [sym_lt] = ACTIONS(701),
    [sym_nt] = ACTIONS(701),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(701),
    [sym_rt] = ACTIONS(701),
    [anon_sym_LT_POUNDsetting] = ACTIONS(701),
    [sym_stop] = ACTIONS(701),
    [sym_t] = ACTIONS(701),
    [anon_sym_LT_POUNDvisit] = ACTIONS(701),
    [anon_sym_LT_POUNDassign] = ACTIONS(701),
    [sym_end_assign] = ACTIONS(701),
    [anon_sym_LT_POUNDglobal] = ACTIONS(701),
    [sym_end_global] = ACTIONS(701),
    [anon_sym_LT_POUNDlocal] = ACTIONS(701),
    [sym_end_local] = ACTIONS(701),
  },
  [135] = {
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(703),
  },
  [136] = {
    [sym_case] = STATE(108),
    [sym_switch_middle] = STATE(136),
    [aux_sym_switch_repeat1] = STATE(136),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(705),
    [anon_sym_LT_POUNDcase] = ACTIONS(707),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(705),
  },
  [137] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(710),
    [anon_sym_LT_POUNDif] = ACTIONS(710),
    [anon_sym_LT_POUNDswitch] = ACTIONS(710),
    [anon_sym_LT_POUNDfunction] = ACTIONS(710),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(710),
    [anon_sym_LT_POUNDreturn] = ACTIONS(710),
    [anon_sym_LT_POUNDmacro] = ACTIONS(710),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(710),
    [anon_sym_LT_POUNDnested] = ACTIONS(710),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(710),
    [sym_fallback] = ACTIONS(710),
    [sym_flush] = ACTIONS(710),
    [anon_sym_LT_POUNDftl] = ACTIONS(710),
    [anon_sym_LT_POUNDimport] = ACTIONS(710),
    [anon_sym_LT_POUNDinclude] = ACTIONS(710),
    [sym_lt] = ACTIONS(710),
    [sym_nt] = ACTIONS(710),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(710),
    [sym_rt] = ACTIONS(710),
    [anon_sym_LT_POUNDsetting] = ACTIONS(710),
    [sym_stop] = ACTIONS(710),
    [sym_t] = ACTIONS(710),
    [anon_sym_LT_POUNDvisit] = ACTIONS(710),
    [anon_sym_LT_POUNDassign] = ACTIONS(710),
    [sym_end_assign] = ACTIONS(710),
    [anon_sym_LT_POUNDglobal] = ACTIONS(710),
    [sym_end_global] = ACTIONS(710),
    [anon_sym_LT_POUNDlocal] = ACTIONS(710),
    [sym_end_local] = ACTIONS(710),
  },
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(712),
    [anon_sym_LT_POUNDlist] = ACTIONS(712),
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
  [139] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(714),
    [anon_sym_LT_POUNDif] = ACTIONS(714),
    [anon_sym_LT_POUNDswitch] = ACTIONS(714),
    [anon_sym_LT_POUNDfunction] = ACTIONS(714),
    [anon_sym_LT_POUNDreturn] = ACTIONS(714),
    [anon_sym_LT_POUNDmacro] = ACTIONS(714),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(714),
    [anon_sym_LT_POUNDnested] = ACTIONS(714),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(714),
    [sym_fallback] = ACTIONS(714),
    [sym_flush] = ACTIONS(714),
    [anon_sym_LT_POUNDftl] = ACTIONS(714),
    [anon_sym_LT_POUNDimport] = ACTIONS(714),
    [anon_sym_LT_POUNDinclude] = ACTIONS(714),
    [sym_lt] = ACTIONS(714),
    [sym_nt] = ACTIONS(714),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(714),
    [sym_rt] = ACTIONS(714),
    [anon_sym_LT_POUNDsetting] = ACTIONS(714),
    [sym_stop] = ACTIONS(714),
    [sym_t] = ACTIONS(714),
    [anon_sym_LT_POUNDvisit] = ACTIONS(714),
    [anon_sym_LT_POUNDassign] = ACTIONS(714),
    [sym_end_assign] = ACTIONS(714),
    [anon_sym_LT_POUNDglobal] = ACTIONS(714),
    [sym_end_global] = ACTIONS(714),
    [anon_sym_LT_POUNDlocal] = ACTIONS(714),
    [sym_end_local] = ACTIONS(714),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(716),
    [anon_sym_LT_POUNDlist] = ACTIONS(716),
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
  [141] = {
    [sym_directive] = STATE(90),
    [sym_list] = STATE(8),
    [sym_list_middle] = STATE(141),
    [sym_items] = STATE(90),
    [sym_sep] = STATE(90),
    [sym_sep_block] = STATE(95),
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
    [aux_sym_list_repeat1] = STATE(141),
    [anon_sym_LT_POUNDlist] = ACTIONS(559),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(562),
    [sym_break] = ACTIONS(564),
    [sym_continue] = ACTIONS(564),
    [anon_sym_LT_POUNDitems] = ACTIONS(567),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(570),
    [anon_sym_LT_POUNDif] = ACTIONS(573),
    [anon_sym_LT_POUNDswitch] = ACTIONS(576),
    [anon_sym_LT_POUNDfunction] = ACTIONS(579),
    [anon_sym_LT_POUNDmacro] = ACTIONS(582),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(585),
    [sym_fallback] = ACTIONS(588),
    [sym_flush] = ACTIONS(588),
    [anon_sym_LT_POUNDftl] = ACTIONS(591),
    [anon_sym_LT_POUNDimport] = ACTIONS(594),
    [anon_sym_LT_POUNDinclude] = ACTIONS(597),
    [sym_lt] = ACTIONS(588),
    [sym_nt] = ACTIONS(588),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(600),
    [sym_rt] = ACTIONS(588),
    [anon_sym_LT_POUNDsetting] = ACTIONS(603),
    [sym_stop] = ACTIONS(588),
    [sym_t] = ACTIONS(588),
    [anon_sym_LT_POUNDvisit] = ACTIONS(606),
    [anon_sym_LT_POUNDassign] = ACTIONS(609),
    [sym_end_assign] = ACTIONS(612),
    [anon_sym_LT_POUNDglobal] = ACTIONS(615),
    [sym_end_global] = ACTIONS(618),
    [anon_sym_LT_POUNDlocal] = ACTIONS(621),
    [sym_end_local] = ACTIONS(624),
  },
  [142] = {
    [sym_directive] = STATE(150),
    [sym_list] = STATE(8),
    [sym_items_middle] = STATE(152),
    [sym_sep] = STATE(150),
    [sym_sep_block] = STATE(95),
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
    [aux_sym_items_repeat1] = STATE(152),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [sym_break] = ACTIONS(718),
    [sym_continue] = ACTIONS(718),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(720),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(240),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
    [sym_fallback] = ACTIONS(19),
    [sym_flush] = ACTIONS(19),
    [anon_sym_LT_POUNDftl] = ACTIONS(21),
    [anon_sym_LT_POUNDimport] = ACTIONS(23),
    [anon_sym_LT_POUNDinclude] = ACTIONS(25),
    [sym_lt] = ACTIONS(19),
    [sym_nt] = ACTIONS(19),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(27),
    [sym_rt] = ACTIONS(19),
    [anon_sym_LT_POUNDsetting] = ACTIONS(29),
    [sym_stop] = ACTIONS(19),
    [sym_t] = ACTIONS(19),
    [anon_sym_LT_POUNDvisit] = ACTIONS(31),
    [anon_sym_LT_POUNDassign] = ACTIONS(33),
    [sym_end_assign] = ACTIONS(35),
    [anon_sym_LT_POUNDglobal] = ACTIONS(37),
    [sym_end_global] = ACTIONS(39),
    [anon_sym_LT_POUNDlocal] = ACTIONS(41),
    [sym_end_local] = ACTIONS(43),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(722),
    [anon_sym_LT_POUNDlist] = ACTIONS(722),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(722),
    [sym_break] = ACTIONS(722),
    [sym_continue] = ACTIONS(722),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(722),
    [anon_sym_LT_POUNDitems] = ACTIONS(722),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(722),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(722),
    [anon_sym_LT_POUNDif] = ACTIONS(722),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(722),
    [anon_sym_LT_POUNDelseif] = ACTIONS(722),
    [anon_sym_LT_POUNDswitch] = ACTIONS(722),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(722),
    [anon_sym_LT_POUNDcase] = ACTIONS(722),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(722),
    [anon_sym_LT_POUNDfunction] = ACTIONS(722),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(722),
    [anon_sym_LT_POUNDreturn] = ACTIONS(722),
    [anon_sym_LT_POUNDmacro] = ACTIONS(722),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(722),
    [anon_sym_LT_POUNDnested] = ACTIONS(722),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(722),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(722),
    [sym_recover] = ACTIONS(722),
    [sym_fallback] = ACTIONS(722),
    [sym_flush] = ACTIONS(722),
    [anon_sym_LT_POUNDftl] = ACTIONS(722),
    [anon_sym_LT_POUNDimport] = ACTIONS(722),
    [anon_sym_LT_POUNDinclude] = ACTIONS(722),
    [sym_lt] = ACTIONS(722),
    [sym_nt] = ACTIONS(722),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(722),
    [sym_rt] = ACTIONS(722),
    [anon_sym_LT_POUNDsetting] = ACTIONS(722),
    [sym_stop] = ACTIONS(722),
    [sym_t] = ACTIONS(722),
    [anon_sym_LT_POUNDvisit] = ACTIONS(722),
    [anon_sym_LT_POUNDassign] = ACTIONS(722),
    [sym_end_assign] = ACTIONS(722),
    [anon_sym_LT_POUNDglobal] = ACTIONS(722),
    [sym_end_global] = ACTIONS(722),
    [anon_sym_LT_POUNDlocal] = ACTIONS(722),
    [sym_end_local] = ACTIONS(722),
  },
  [144] = {
    [sym_directive] = STATE(102),
    [sym_list] = STATE(8),
    [sym_if] = STATE(8),
    [sym_elseif] = STATE(102),
    [sym_if_middle] = STATE(144),
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
    [aux_sym_if_repeat1] = STATE(144),
    [anon_sym_LT_POUNDlist] = ACTIONS(635),
    [anon_sym_LT_POUNDif] = ACTIONS(640),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(638),
    [anon_sym_LT_POUNDelseif] = ACTIONS(643),
    [anon_sym_LT_POUNDswitch] = ACTIONS(646),
    [anon_sym_LT_POUNDfunction] = ACTIONS(649),
    [anon_sym_LT_POUNDmacro] = ACTIONS(652),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(655),
    [sym_fallback] = ACTIONS(658),
    [sym_flush] = ACTIONS(658),
    [anon_sym_LT_POUNDftl] = ACTIONS(661),
    [anon_sym_LT_POUNDimport] = ACTIONS(664),
    [anon_sym_LT_POUNDinclude] = ACTIONS(667),
    [sym_lt] = ACTIONS(658),
    [sym_nt] = ACTIONS(658),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(670),
    [sym_rt] = ACTIONS(658),
    [anon_sym_LT_POUNDsetting] = ACTIONS(673),
    [sym_stop] = ACTIONS(658),
    [sym_t] = ACTIONS(658),
    [anon_sym_LT_POUNDvisit] = ACTIONS(676),
    [anon_sym_LT_POUNDassign] = ACTIONS(679),
    [sym_end_assign] = ACTIONS(682),
    [anon_sym_LT_POUNDglobal] = ACTIONS(685),
    [sym_end_global] = ACTIONS(688),
    [anon_sym_LT_POUNDlocal] = ACTIONS(691),
    [sym_end_local] = ACTIONS(694),
  },
  [145] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(724),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(724),
    [anon_sym_LT_POUNDif] = ACTIONS(724),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(724),
    [anon_sym_LT_POUNDelseif] = ACTIONS(724),
    [anon_sym_LT_POUNDswitch] = ACTIONS(724),
    [anon_sym_LT_POUNDfunction] = ACTIONS(724),
    [anon_sym_LT_POUNDmacro] = ACTIONS(724),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(724),
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
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(726),
    [anon_sym_LT_POUNDlist] = ACTIONS(726),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(726),
    [sym_break] = ACTIONS(726),
    [sym_continue] = ACTIONS(726),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(726),
    [anon_sym_LT_POUNDitems] = ACTIONS(726),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(726),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(726),
    [anon_sym_LT_POUNDif] = ACTIONS(726),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(726),
    [anon_sym_LT_POUNDelseif] = ACTIONS(726),
    [anon_sym_LT_POUNDswitch] = ACTIONS(726),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(726),
    [anon_sym_LT_POUNDcase] = ACTIONS(726),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(726),
    [anon_sym_LT_POUNDfunction] = ACTIONS(726),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(726),
    [anon_sym_LT_POUNDreturn] = ACTIONS(726),
    [anon_sym_LT_POUNDmacro] = ACTIONS(726),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(726),
    [anon_sym_LT_POUNDnested] = ACTIONS(726),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(726),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(726),
    [sym_recover] = ACTIONS(726),
    [sym_fallback] = ACTIONS(726),
    [sym_flush] = ACTIONS(726),
    [anon_sym_LT_POUNDftl] = ACTIONS(726),
    [anon_sym_LT_POUNDimport] = ACTIONS(726),
    [anon_sym_LT_POUNDinclude] = ACTIONS(726),
    [sym_lt] = ACTIONS(726),
    [sym_nt] = ACTIONS(726),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(726),
    [sym_rt] = ACTIONS(726),
    [anon_sym_LT_POUNDsetting] = ACTIONS(726),
    [sym_stop] = ACTIONS(726),
    [sym_t] = ACTIONS(726),
    [anon_sym_LT_POUNDvisit] = ACTIONS(726),
    [anon_sym_LT_POUNDassign] = ACTIONS(726),
    [sym_end_assign] = ACTIONS(726),
    [anon_sym_LT_POUNDglobal] = ACTIONS(726),
    [sym_end_global] = ACTIONS(726),
    [anon_sym_LT_POUNDlocal] = ACTIONS(726),
    [sym_end_local] = ACTIONS(726),
  },
  [147] = {
    [sym_directive] = STATE(153),
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
    [aux_sym_case_repeat1] = STATE(153),
    [aux_sym_case_repeat2] = STATE(154),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [sym_break] = ACTIONS(728),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(730),
    [anon_sym_LT_POUNDcase] = ACTIONS(730),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(730),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
    [sym_fallback] = ACTIONS(19),
    [sym_flush] = ACTIONS(19),
    [anon_sym_LT_POUNDftl] = ACTIONS(21),
    [anon_sym_LT_POUNDimport] = ACTIONS(23),
    [anon_sym_LT_POUNDinclude] = ACTIONS(25),
    [sym_lt] = ACTIONS(19),
    [sym_nt] = ACTIONS(19),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(27),
    [sym_rt] = ACTIONS(19),
    [anon_sym_LT_POUNDsetting] = ACTIONS(29),
    [sym_stop] = ACTIONS(19),
    [sym_t] = ACTIONS(19),
    [anon_sym_LT_POUNDvisit] = ACTIONS(31),
    [anon_sym_LT_POUNDassign] = ACTIONS(33),
    [sym_end_assign] = ACTIONS(35),
    [anon_sym_LT_POUNDglobal] = ACTIONS(37),
    [sym_end_global] = ACTIONS(39),
    [anon_sym_LT_POUNDlocal] = ACTIONS(41),
    [sym_end_local] = ACTIONS(43),
  },
  [148] = {
    [sym_directive] = STATE(148),
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
    [aux_sym_case_repeat1] = STATE(148),
    [anon_sym_LT_POUNDlist] = ACTIONS(732),
    [anon_sym_LT_POUNDif] = ACTIONS(735),
    [anon_sym_LT_POUNDswitch] = ACTIONS(738),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(741),
    [anon_sym_LT_POUNDfunction] = ACTIONS(743),
    [anon_sym_LT_POUNDmacro] = ACTIONS(746),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(749),
    [sym_fallback] = ACTIONS(752),
    [sym_flush] = ACTIONS(752),
    [anon_sym_LT_POUNDftl] = ACTIONS(755),
    [anon_sym_LT_POUNDimport] = ACTIONS(758),
    [anon_sym_LT_POUNDinclude] = ACTIONS(761),
    [sym_lt] = ACTIONS(752),
    [sym_nt] = ACTIONS(752),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(764),
    [sym_rt] = ACTIONS(752),
    [anon_sym_LT_POUNDsetting] = ACTIONS(767),
    [sym_stop] = ACTIONS(752),
    [sym_t] = ACTIONS(752),
    [anon_sym_LT_POUNDvisit] = ACTIONS(770),
    [anon_sym_LT_POUNDassign] = ACTIONS(773),
    [sym_end_assign] = ACTIONS(776),
    [anon_sym_LT_POUNDglobal] = ACTIONS(779),
    [sym_end_global] = ACTIONS(782),
    [anon_sym_LT_POUNDlocal] = ACTIONS(785),
    [sym_end_local] = ACTIONS(788),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(791),
    [anon_sym_LT_POUNDlist] = ACTIONS(791),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(791),
    [sym_break] = ACTIONS(791),
    [sym_continue] = ACTIONS(791),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(791),
    [anon_sym_LT_POUNDitems] = ACTIONS(791),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(791),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(791),
    [anon_sym_LT_POUNDif] = ACTIONS(791),
    [anon_sym_LT_SLASH_POUNDif_GT] = ACTIONS(791),
    [anon_sym_LT_POUNDelseif] = ACTIONS(791),
    [anon_sym_LT_POUNDswitch] = ACTIONS(791),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(791),
    [anon_sym_LT_POUNDcase] = ACTIONS(791),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(791),
    [anon_sym_LT_POUNDfunction] = ACTIONS(791),
    [anon_sym_LT_SLASH_POUNDfunction_GT] = ACTIONS(791),
    [anon_sym_LT_POUNDreturn] = ACTIONS(791),
    [anon_sym_LT_POUNDmacro] = ACTIONS(791),
    [anon_sym_LT_SLASH_POUNDmacro_GT] = ACTIONS(791),
    [anon_sym_LT_POUNDnested] = ACTIONS(791),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(791),
    [anon_sym_LT_SLASH_POUNDattempt_GT] = ACTIONS(791),
    [sym_recover] = ACTIONS(791),
    [sym_fallback] = ACTIONS(791),
    [sym_flush] = ACTIONS(791),
    [anon_sym_LT_POUNDftl] = ACTIONS(791),
    [anon_sym_LT_POUNDimport] = ACTIONS(791),
    [anon_sym_LT_POUNDinclude] = ACTIONS(791),
    [sym_lt] = ACTIONS(791),
    [sym_nt] = ACTIONS(791),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(791),
    [sym_rt] = ACTIONS(791),
    [anon_sym_LT_POUNDsetting] = ACTIONS(791),
    [sym_stop] = ACTIONS(791),
    [sym_t] = ACTIONS(791),
    [anon_sym_LT_POUNDvisit] = ACTIONS(791),
    [anon_sym_LT_POUNDassign] = ACTIONS(791),
    [sym_end_assign] = ACTIONS(791),
    [anon_sym_LT_POUNDglobal] = ACTIONS(791),
    [sym_end_global] = ACTIONS(791),
    [anon_sym_LT_POUNDlocal] = ACTIONS(791),
    [sym_end_local] = ACTIONS(791),
  },
  [150] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(793),
    [sym_break] = ACTIONS(793),
    [sym_continue] = ACTIONS(793),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(793),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(793),
    [anon_sym_LT_POUNDif] = ACTIONS(793),
    [anon_sym_LT_POUNDswitch] = ACTIONS(793),
    [anon_sym_LT_POUNDfunction] = ACTIONS(793),
    [anon_sym_LT_POUNDmacro] = ACTIONS(793),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(793),
    [sym_fallback] = ACTIONS(793),
    [sym_flush] = ACTIONS(793),
    [anon_sym_LT_POUNDftl] = ACTIONS(793),
    [anon_sym_LT_POUNDimport] = ACTIONS(793),
    [anon_sym_LT_POUNDinclude] = ACTIONS(793),
    [sym_lt] = ACTIONS(793),
    [sym_nt] = ACTIONS(793),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(793),
    [sym_rt] = ACTIONS(793),
    [anon_sym_LT_POUNDsetting] = ACTIONS(793),
    [sym_stop] = ACTIONS(793),
    [sym_t] = ACTIONS(793),
    [anon_sym_LT_POUNDvisit] = ACTIONS(793),
    [anon_sym_LT_POUNDassign] = ACTIONS(793),
    [sym_end_assign] = ACTIONS(793),
    [anon_sym_LT_POUNDglobal] = ACTIONS(793),
    [sym_end_global] = ACTIONS(793),
    [anon_sym_LT_POUNDlocal] = ACTIONS(793),
    [sym_end_local] = ACTIONS(793),
  },
  [151] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(795),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(795),
    [sym_break] = ACTIONS(795),
    [sym_continue] = ACTIONS(795),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(795),
    [anon_sym_LT_POUNDitems] = ACTIONS(795),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(795),
    [anon_sym_LT_POUNDif] = ACTIONS(795),
    [anon_sym_LT_POUNDswitch] = ACTIONS(795),
    [anon_sym_LT_POUNDfunction] = ACTIONS(795),
    [anon_sym_LT_POUNDmacro] = ACTIONS(795),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(795),
    [sym_fallback] = ACTIONS(795),
    [sym_flush] = ACTIONS(795),
    [anon_sym_LT_POUNDftl] = ACTIONS(795),
    [anon_sym_LT_POUNDimport] = ACTIONS(795),
    [anon_sym_LT_POUNDinclude] = ACTIONS(795),
    [sym_lt] = ACTIONS(795),
    [sym_nt] = ACTIONS(795),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(795),
    [sym_rt] = ACTIONS(795),
    [anon_sym_LT_POUNDsetting] = ACTIONS(795),
    [sym_stop] = ACTIONS(795),
    [sym_t] = ACTIONS(795),
    [anon_sym_LT_POUNDvisit] = ACTIONS(795),
    [anon_sym_LT_POUNDassign] = ACTIONS(795),
    [sym_end_assign] = ACTIONS(795),
    [anon_sym_LT_POUNDglobal] = ACTIONS(795),
    [sym_end_global] = ACTIONS(795),
    [anon_sym_LT_POUNDlocal] = ACTIONS(795),
    [sym_end_local] = ACTIONS(795),
  },
  [152] = {
    [sym_directive] = STATE(150),
    [sym_list] = STATE(8),
    [sym_items_middle] = STATE(156),
    [sym_sep] = STATE(150),
    [sym_sep_block] = STATE(95),
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
    [aux_sym_items_repeat1] = STATE(156),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [sym_break] = ACTIONS(718),
    [sym_continue] = ACTIONS(718),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(797),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(240),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
    [sym_fallback] = ACTIONS(19),
    [sym_flush] = ACTIONS(19),
    [anon_sym_LT_POUNDftl] = ACTIONS(21),
    [anon_sym_LT_POUNDimport] = ACTIONS(23),
    [anon_sym_LT_POUNDinclude] = ACTIONS(25),
    [sym_lt] = ACTIONS(19),
    [sym_nt] = ACTIONS(19),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(27),
    [sym_rt] = ACTIONS(19),
    [anon_sym_LT_POUNDsetting] = ACTIONS(29),
    [sym_stop] = ACTIONS(19),
    [sym_t] = ACTIONS(19),
    [anon_sym_LT_POUNDvisit] = ACTIONS(31),
    [anon_sym_LT_POUNDassign] = ACTIONS(33),
    [sym_end_assign] = ACTIONS(35),
    [anon_sym_LT_POUNDglobal] = ACTIONS(37),
    [sym_end_global] = ACTIONS(39),
    [anon_sym_LT_POUNDlocal] = ACTIONS(41),
    [sym_end_local] = ACTIONS(43),
  },
  [153] = {
    [sym_directive] = STATE(157),
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
    [aux_sym_case_repeat1] = STATE(157),
    [aux_sym_case_repeat2] = STATE(158),
    [anon_sym_LT_POUNDlist] = ACTIONS(7),
    [sym_break] = ACTIONS(799),
    [anon_sym_LT_POUNDif] = ACTIONS(9),
    [anon_sym_LT_POUNDswitch] = ACTIONS(11),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(801),
    [anon_sym_LT_POUNDcase] = ACTIONS(801),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(801),
    [anon_sym_LT_POUNDfunction] = ACTIONS(13),
    [anon_sym_LT_POUNDmacro] = ACTIONS(15),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(17),
    [sym_fallback] = ACTIONS(19),
    [sym_flush] = ACTIONS(19),
    [anon_sym_LT_POUNDftl] = ACTIONS(21),
    [anon_sym_LT_POUNDimport] = ACTIONS(23),
    [anon_sym_LT_POUNDinclude] = ACTIONS(25),
    [sym_lt] = ACTIONS(19),
    [sym_nt] = ACTIONS(19),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(27),
    [sym_rt] = ACTIONS(19),
    [anon_sym_LT_POUNDsetting] = ACTIONS(29),
    [sym_stop] = ACTIONS(19),
    [sym_t] = ACTIONS(19),
    [anon_sym_LT_POUNDvisit] = ACTIONS(31),
    [anon_sym_LT_POUNDassign] = ACTIONS(33),
    [sym_end_assign] = ACTIONS(35),
    [anon_sym_LT_POUNDglobal] = ACTIONS(37),
    [sym_end_global] = ACTIONS(39),
    [anon_sym_LT_POUNDlocal] = ACTIONS(41),
    [sym_end_local] = ACTIONS(43),
  },
  [154] = {
    [aux_sym_case_repeat2] = STATE(159),
    [sym_break] = ACTIONS(803),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(801),
    [anon_sym_LT_POUNDcase] = ACTIONS(801),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(801),
  },
  [155] = {
    [anon_sym_LT_POUNDlist] = ACTIONS(805),
    [anon_sym_LT_SLASH_POUNDlist_GT] = ACTIONS(805),
    [sym_break] = ACTIONS(805),
    [sym_continue] = ACTIONS(805),
    [anon_sym_LT_POUNDelse_GT] = ACTIONS(805),
    [anon_sym_LT_POUNDitems] = ACTIONS(805),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(805),
    [anon_sym_LT_POUNDif] = ACTIONS(805),
    [anon_sym_LT_POUNDswitch] = ACTIONS(805),
    [anon_sym_LT_POUNDfunction] = ACTIONS(805),
    [anon_sym_LT_POUNDmacro] = ACTIONS(805),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(805),
    [sym_fallback] = ACTIONS(805),
    [sym_flush] = ACTIONS(805),
    [anon_sym_LT_POUNDftl] = ACTIONS(805),
    [anon_sym_LT_POUNDimport] = ACTIONS(805),
    [anon_sym_LT_POUNDinclude] = ACTIONS(805),
    [sym_lt] = ACTIONS(805),
    [sym_nt] = ACTIONS(805),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(805),
    [sym_rt] = ACTIONS(805),
    [anon_sym_LT_POUNDsetting] = ACTIONS(805),
    [sym_stop] = ACTIONS(805),
    [sym_t] = ACTIONS(805),
    [anon_sym_LT_POUNDvisit] = ACTIONS(805),
    [anon_sym_LT_POUNDassign] = ACTIONS(805),
    [sym_end_assign] = ACTIONS(805),
    [anon_sym_LT_POUNDglobal] = ACTIONS(805),
    [sym_end_global] = ACTIONS(805),
    [anon_sym_LT_POUNDlocal] = ACTIONS(805),
    [sym_end_local] = ACTIONS(805),
  },
  [156] = {
    [sym_directive] = STATE(150),
    [sym_list] = STATE(8),
    [sym_items_middle] = STATE(156),
    [sym_sep] = STATE(150),
    [sym_sep_block] = STATE(95),
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
    [aux_sym_items_repeat1] = STATE(156),
    [anon_sym_LT_POUNDlist] = ACTIONS(807),
    [sym_break] = ACTIONS(810),
    [sym_continue] = ACTIONS(810),
    [anon_sym_LT_SLASH_POUNDitems_GT] = ACTIONS(813),
    [anon_sym_LT_POUNDsep_GT] = ACTIONS(815),
    [anon_sym_LT_POUNDif] = ACTIONS(818),
    [anon_sym_LT_POUNDswitch] = ACTIONS(821),
    [anon_sym_LT_POUNDfunction] = ACTIONS(824),
    [anon_sym_LT_POUNDmacro] = ACTIONS(827),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(830),
    [sym_fallback] = ACTIONS(833),
    [sym_flush] = ACTIONS(833),
    [anon_sym_LT_POUNDftl] = ACTIONS(836),
    [anon_sym_LT_POUNDimport] = ACTIONS(839),
    [anon_sym_LT_POUNDinclude] = ACTIONS(842),
    [sym_lt] = ACTIONS(833),
    [sym_nt] = ACTIONS(833),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(845),
    [sym_rt] = ACTIONS(833),
    [anon_sym_LT_POUNDsetting] = ACTIONS(848),
    [sym_stop] = ACTIONS(833),
    [sym_t] = ACTIONS(833),
    [anon_sym_LT_POUNDvisit] = ACTIONS(851),
    [anon_sym_LT_POUNDassign] = ACTIONS(854),
    [sym_end_assign] = ACTIONS(857),
    [anon_sym_LT_POUNDglobal] = ACTIONS(860),
    [sym_end_global] = ACTIONS(863),
    [anon_sym_LT_POUNDlocal] = ACTIONS(866),
    [sym_end_local] = ACTIONS(869),
  },
  [157] = {
    [sym_directive] = STATE(157),
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
    [aux_sym_case_repeat1] = STATE(157),
    [anon_sym_LT_POUNDlist] = ACTIONS(732),
    [sym_break] = ACTIONS(741),
    [anon_sym_LT_POUNDif] = ACTIONS(735),
    [anon_sym_LT_POUNDswitch] = ACTIONS(738),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(741),
    [anon_sym_LT_POUNDcase] = ACTIONS(741),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(741),
    [anon_sym_LT_POUNDfunction] = ACTIONS(743),
    [anon_sym_LT_POUNDmacro] = ACTIONS(746),
    [anon_sym_LT_POUNDattempt_GT] = ACTIONS(749),
    [sym_fallback] = ACTIONS(752),
    [sym_flush] = ACTIONS(752),
    [anon_sym_LT_POUNDftl] = ACTIONS(755),
    [anon_sym_LT_POUNDimport] = ACTIONS(758),
    [anon_sym_LT_POUNDinclude] = ACTIONS(761),
    [sym_lt] = ACTIONS(752),
    [sym_nt] = ACTIONS(752),
    [anon_sym_LT_POUNDrecurse] = ACTIONS(764),
    [sym_rt] = ACTIONS(752),
    [anon_sym_LT_POUNDsetting] = ACTIONS(767),
    [sym_stop] = ACTIONS(752),
    [sym_t] = ACTIONS(752),
    [anon_sym_LT_POUNDvisit] = ACTIONS(770),
    [anon_sym_LT_POUNDassign] = ACTIONS(773),
    [sym_end_assign] = ACTIONS(776),
    [anon_sym_LT_POUNDglobal] = ACTIONS(779),
    [sym_end_global] = ACTIONS(782),
    [anon_sym_LT_POUNDlocal] = ACTIONS(785),
    [sym_end_local] = ACTIONS(788),
  },
  [158] = {
    [aux_sym_case_repeat2] = STATE(159),
    [sym_break] = ACTIONS(803),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(872),
    [anon_sym_LT_POUNDcase] = ACTIONS(872),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(872),
  },
  [159] = {
    [aux_sym_case_repeat2] = STATE(159),
    [sym_break] = ACTIONS(874),
    [anon_sym_LT_SLASH_POUNDswitch_GT] = ACTIONS(877),
    [anon_sym_LT_POUNDcase] = ACTIONS(877),
    [anon_sym_LT_POUNDdefault_GT] = ACTIONS(877),
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
  [45] = {.count = 1, .reusable = false}, SHIFT(23),
  [47] = {.count = 1, .reusable = false}, SHIFT(24),
  [49] = {.count = 1, .reusable = false}, SHIFT(32),
  [51] = {.count = 1, .reusable = true}, SHIFT(33),
  [53] = {.count = 1, .reusable = true}, SHIFT(35),
  [55] = {.count = 1, .reusable = true}, SHIFT(37),
  [57] = {.count = 1, .reusable = true}, SHIFT(38),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_directive, 1),
  [61] = {.count = 1, .reusable = true}, SHIFT(40),
  [63] = {.count = 1, .reusable = true}, SHIFT(42),
  [65] = {.count = 1, .reusable = true}, SHIFT(44),
  [67] = {.count = 1, .reusable = true}, SHIFT(46),
  [69] = {.count = 1, .reusable = true}, SHIFT(48),
  [71] = {.count = 1, .reusable = true}, SHIFT(50),
  [73] = {.count = 1, .reusable = true}, SHIFT(52),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 1),
  [77] = {.count = 1, .reusable = true}, SHIFT(54),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_global, 1),
  [81] = {.count = 1, .reusable = true}, SHIFT(56),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_local, 1),
  [85] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 1),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_operator, 1),
  [95] = {.count = 1, .reusable = true}, SHIFT(59),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_pattern, 1),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_pattern, 1),
  [101] = {.count = 1, .reusable = true}, SHIFT(24),
  [103] = {.count = 1, .reusable = true}, SHIFT(61),
  [105] = {.count = 1, .reusable = true}, SHIFT(62),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym_paramPattern1, 1),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_paramPattern1, 1),
  [111] = {.count = 1, .reusable = true}, SHIFT(63),
  [113] = {.count = 1, .reusable = true}, SHIFT(65),
  [115] = {.count = 1, .reusable = true}, SHIFT(66),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym_parameter, 1),
  [119] = {.count = 1, .reusable = true}, SHIFT(67),
  [121] = {.count = 1, .reusable = true}, SHIFT(68),
  [123] = {.count = 1, .reusable = true}, SHIFT(71),
  [125] = {.count = 1, .reusable = true}, SHIFT(73),
  [127] = {.count = 1, .reusable = true}, SHIFT(74),
  [129] = {.count = 1, .reusable = true}, SHIFT(77),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_attempt, 2),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_attempt_middle, 1),
  [135] = {.count = 1, .reusable = true}, SHIFT(78),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_ftl, 2),
  [139] = {.count = 1, .reusable = true}, SHIFT(80),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_import, 2),
  [143] = {.count = 1, .reusable = true}, SHIFT(81),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [147] = {.count = 1, .reusable = true}, SHIFT(82),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_recurse, 2),
  [151] = {.count = 1, .reusable = true}, SHIFT(83),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_setting, 2),
  [155] = {.count = 1, .reusable = true}, SHIFT(84),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_visit, 2),
  [159] = {.count = 1, .reusable = true}, SHIFT(85),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 2),
  [163] = {.count = 1, .reusable = true}, SHIFT(86),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_global, 2),
  [167] = {.count = 1, .reusable = true}, SHIFT(87),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_local, 2),
  [171] = {.count = 1, .reusable = true}, SHIFT(88),
  [173] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [175] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [178] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [181] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [184] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [187] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [190] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [193] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [196] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [199] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [202] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [205] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [208] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [211] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [214] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [217] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [220] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [223] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [226] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [229] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [232] = {.count = 1, .reusable = true}, SHIFT(89),
  [234] = {.count = 1, .reusable = true}, SHIFT(90),
  [236] = {.count = 1, .reusable = true}, SHIFT(91),
  [238] = {.count = 1, .reusable = true}, SHIFT(92),
  [240] = {.count = 1, .reusable = true}, SHIFT(93),
  [242] = {.count = 1, .reusable = false}, REDUCE(sym_paramPattern2, 2),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_paramPattern2, 2),
  [246] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 1),
  [248] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2),
  [252] = {.count = 1, .reusable = true}, SHIFT(99),
  [254] = {.count = 1, .reusable = true}, SHIFT(100),
  [256] = {.count = 1, .reusable = true}, SHIFT(101),
  [258] = {.count = 1, .reusable = true}, SHIFT(105),
  [260] = {.count = 1, .reusable = true}, SHIFT(106),
  [262] = {.count = 1, .reusable = true}, SHIFT(107),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_function, 3),
  [266] = {.count = 1, .reusable = true}, SHIFT(111),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym_function_middle, 1),
  [270] = {.count = 1, .reusable = true}, SHIFT(113),
  [272] = {.count = 2, .reusable = false}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(32),
  [275] = {.count = 2, .reusable = false}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(24),
  [278] = {.count = 1, .reusable = true}, REDUCE(aux_sym_function_repeat1, 2),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym_macro, 3),
  [282] = {.count = 1, .reusable = true}, SHIFT(116),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym_macro_middle, 1),
  [286] = {.count = 1, .reusable = true}, SHIFT(118),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym_attempt, 3),
  [290] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(2),
  [293] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(3),
  [296] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(4),
  [299] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(5),
  [302] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(6),
  [305] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(7),
  [308] = {.count = 1, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2),
  [310] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(38),
  [313] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(8),
  [316] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(9),
  [319] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(10),
  [322] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(11),
  [325] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(12),
  [328] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(13),
  [331] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(14),
  [334] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(15),
  [337] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(16),
  [340] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(17),
  [343] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(18),
  [346] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(19),
  [349] = {.count = 2, .reusable = true}, REDUCE(aux_sym_attempt_repeat1, 2), SHIFT_REPEAT(20),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_ftl, 3),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_import, 3),
  [356] = {.count = 1, .reusable = true}, REDUCE(sym_include, 3),
  [358] = {.count = 1, .reusable = true}, REDUCE(sym_recurse, 3),
  [360] = {.count = 1, .reusable = true}, REDUCE(sym_setting, 3),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_visit, 3),
  [364] = {.count = 1, .reusable = true}, REDUCE(sym_assign, 3),
  [366] = {.count = 1, .reusable = true}, REDUCE(sym_global, 3),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym_local, 3),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym_list, 4),
  [372] = {.count = 1, .reusable = true}, REDUCE(sym_list_middle, 1),
  [374] = {.count = 1, .reusable = true}, REDUCE(sym_list_else, 1),
  [376] = {.count = 1, .reusable = true}, REDUCE(sym_sep, 1),
  [378] = {.count = 1, .reusable = true}, SHIFT(123),
  [380] = {.count = 1, .reusable = true}, SHIFT(124),
  [382] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [384] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [386] = {.count = 1, .reusable = false}, REDUCE(sym_paramPattern3, 3),
  [388] = {.count = 1, .reusable = true}, REDUCE(sym_paramPattern3, 3),
  [390] = {.count = 1, .reusable = true}, REDUCE(sym_if_else, 1),
  [392] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4),
  [394] = {.count = 1, .reusable = true}, REDUCE(sym_if_middle, 1),
  [396] = {.count = 1, .reusable = true}, SHIFT(129),
  [398] = {.count = 1, .reusable = true}, REDUCE(sym_switch, 4),
  [400] = {.count = 1, .reusable = true}, REDUCE(sym_default, 1),
  [402] = {.count = 1, .reusable = true}, REDUCE(sym_switch_middle, 1),
  [404] = {.count = 1, .reusable = true}, SHIFT(134),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym_return, 2),
  [408] = {.count = 1, .reusable = true}, SHIFT(137),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym_function, 4),
  [412] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat2, 2), SHIFT_REPEAT(2),
  [415] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat2, 2), SHIFT_REPEAT(3),
  [418] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat2, 2), SHIFT_REPEAT(4),
  [421] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat2, 2), SHIFT_REPEAT(5),
  [424] = {.count = 1, .reusable = true}, REDUCE(aux_sym_function_repeat2, 2),
  [426] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat2, 2), SHIFT_REPEAT(68),
  [429] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat2, 2), SHIFT_REPEAT(6),
  [432] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat2, 2), SHIFT_REPEAT(7),
  [435] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat2, 2), SHIFT_REPEAT(8),
  [438] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat2, 2), SHIFT_REPEAT(9),
  [441] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat2, 2), SHIFT_REPEAT(10),
  [444] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat2, 2), SHIFT_REPEAT(11),
  [447] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat2, 2), SHIFT_REPEAT(12),
  [450] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat2, 2), SHIFT_REPEAT(13),
  [453] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat2, 2), SHIFT_REPEAT(14),
  [456] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat2, 2), SHIFT_REPEAT(15),
  [459] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat2, 2), SHIFT_REPEAT(16),
  [462] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat2, 2), SHIFT_REPEAT(17),
  [465] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat2, 2), SHIFT_REPEAT(18),
  [468] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat2, 2), SHIFT_REPEAT(19),
  [471] = {.count = 2, .reusable = true}, REDUCE(aux_sym_function_repeat2, 2), SHIFT_REPEAT(20),
  [474] = {.count = 1, .reusable = true}, SHIFT(138),
  [476] = {.count = 1, .reusable = true}, REDUCE(sym_nested, 2),
  [478] = {.count = 1, .reusable = true}, SHIFT(139),
  [480] = {.count = 1, .reusable = true}, REDUCE(sym_macro, 4),
  [482] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(2),
  [485] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(3),
  [488] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(4),
  [491] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(5),
  [494] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(68),
  [497] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(6),
  [500] = {.count = 1, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2),
  [502] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(74),
  [505] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(7),
  [508] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(8),
  [511] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(9),
  [514] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(10),
  [517] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(11),
  [520] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(12),
  [523] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(13),
  [526] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(14),
  [529] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(15),
  [532] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(16),
  [535] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(17),
  [538] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(18),
  [541] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(19),
  [544] = {.count = 2, .reusable = true}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(20),
  [547] = {.count = 1, .reusable = true}, SHIFT(140),
  [549] = {.count = 1, .reusable = true}, REDUCE(sym_list_else, 2),
  [551] = {.count = 1, .reusable = true}, SHIFT(142),
  [553] = {.count = 1, .reusable = true}, REDUCE(sym_sep_block, 2),
  [555] = {.count = 1, .reusable = true}, REDUCE(sym_list, 5),
  [557] = {.count = 1, .reusable = true}, SHIFT(143),
  [559] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [562] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2),
  [564] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(90),
  [567] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(92),
  [570] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(93),
  [573] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(3),
  [576] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(4),
  [579] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(5),
  [582] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(6),
  [585] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(7),
  [588] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(8),
  [591] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(9),
  [594] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(10),
  [597] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(11),
  [600] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(12),
  [603] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(13),
  [606] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(14),
  [609] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(15),
  [612] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(16),
  [615] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(17),
  [618] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(18),
  [621] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(19),
  [624] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(20),
  [627] = {.count = 1, .reusable = true}, REDUCE(sym_if_else, 2),
  [629] = {.count = 1, .reusable = true}, SHIFT(145),
  [631] = {.count = 1, .reusable = true}, REDUCE(sym_if, 5),
  [633] = {.count = 1, .reusable = true}, SHIFT(146),
  [635] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(2),
  [638] = {.count = 1, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2),
  [640] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(3),
  [643] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(101),
  [646] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(4),
  [649] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(5),
  [652] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(6),
  [655] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(7),
  [658] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(8),
  [661] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(9),
  [664] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(10),
  [667] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(11),
  [670] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(12),
  [673] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(13),
  [676] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(14),
  [679] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(15),
  [682] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(16),
  [685] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(17),
  [688] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(18),
  [691] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(19),
  [694] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(20),
  [697] = {.count = 1, .reusable = true}, SHIFT(147),
  [699] = {.count = 1, .reusable = true}, REDUCE(sym_default, 2),
  [701] = {.count = 1, .reusable = true}, REDUCE(sym_switch, 5),
  [703] = {.count = 1, .reusable = true}, SHIFT(149),
  [705] = {.count = 1, .reusable = true}, REDUCE(aux_sym_switch_repeat1, 2),
  [707] = {.count = 2, .reusable = true}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(106),
  [710] = {.count = 1, .reusable = true}, REDUCE(sym_return, 3),
  [712] = {.count = 1, .reusable = true}, REDUCE(sym_function, 5),
  [714] = {.count = 1, .reusable = true}, REDUCE(sym_nested, 3),
  [716] = {.count = 1, .reusable = true}, REDUCE(sym_macro, 5),
  [718] = {.count = 1, .reusable = true}, SHIFT(150),
  [720] = {.count = 1, .reusable = true}, SHIFT(151),
  [722] = {.count = 1, .reusable = true}, REDUCE(sym_list, 6),
  [724] = {.count = 1, .reusable = true}, REDUCE(sym_elseif, 3),
  [726] = {.count = 1, .reusable = true}, REDUCE(sym_if, 6),
  [728] = {.count = 1, .reusable = true}, SHIFT(154),
  [730] = {.count = 1, .reusable = true}, REDUCE(sym_case, 3),
  [732] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(2),
  [735] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(3),
  [738] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(4),
  [741] = {.count = 1, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2),
  [743] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(5),
  [746] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(6),
  [749] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(7),
  [752] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(8),
  [755] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(9),
  [758] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(10),
  [761] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(11),
  [764] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(12),
  [767] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(13),
  [770] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(14),
  [773] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(15),
  [776] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(16),
  [779] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(17),
  [782] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(18),
  [785] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(19),
  [788] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(20),
  [791] = {.count = 1, .reusable = true}, REDUCE(sym_switch, 6),
  [793] = {.count = 1, .reusable = true}, REDUCE(sym_items_middle, 1),
  [795] = {.count = 1, .reusable = true}, REDUCE(sym_items, 4),
  [797] = {.count = 1, .reusable = true}, SHIFT(155),
  [799] = {.count = 1, .reusable = true}, SHIFT(158),
  [801] = {.count = 1, .reusable = true}, REDUCE(sym_case, 4),
  [803] = {.count = 1, .reusable = true}, SHIFT(159),
  [805] = {.count = 1, .reusable = true}, REDUCE(sym_items, 5),
  [807] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(2),
  [810] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(150),
  [813] = {.count = 1, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2),
  [815] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(93),
  [818] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(3),
  [821] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(4),
  [824] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(5),
  [827] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(6),
  [830] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(7),
  [833] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(8),
  [836] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(9),
  [839] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(10),
  [842] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(11),
  [845] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(12),
  [848] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(13),
  [851] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(14),
  [854] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(15),
  [857] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(16),
  [860] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(17),
  [863] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(18),
  [866] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(19),
  [869] = {.count = 2, .reusable = true}, REDUCE(aux_sym_items_repeat1, 2), SHIFT_REPEAT(20),
  [872] = {.count = 1, .reusable = true}, REDUCE(sym_case, 5),
  [874] = {.count = 2, .reusable = true}, REDUCE(aux_sym_case_repeat2, 2), SHIFT_REPEAT(159),
  [877] = {.count = 1, .reusable = true}, REDUCE(aux_sym_case_repeat2, 2),
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
