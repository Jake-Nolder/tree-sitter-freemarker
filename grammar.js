module.exports = grammar({
  name: 'freemarker',

  rules: {
    // The production rules of the context-free grammar
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.comment,
      $.directive,
      $.interpolation
    ),

    comment: $ => /(\<\#\-\-).+(\-\-\>)/,

    interpolation: $ => seq(
      prec.left(1, seq('$', alias('{', $.bracket), repeat($.expression), alias('}', $.bracket)) )
    ),

    directive: $ => choice(
      $.assign,
      $.attempt,
      $.fallback,
      $.flush,
      $.ftl,
      $.global,
      $.if,
      $.import,
      $.include,
      $.function,
      $.list,
      $.local,
      $.lt,
      $.macro,
      $.nt,
      $.recurse,
      $.rt,
      $.setting,
      $.stop,
      $.switch,
      $.t,
      $.user_defined,
      $.visit
    ),

    parameter_group: $ => choice(
      $.as_expression,
      $.expression,
      $.built_in
    ),

    as_expression: $ => seq(
      prec.right(1, seq( repeat(prec(2, $.type)), alias(seq('as'), $.as), repeat1($.type) ))
    ),

    expression: $ => choice(
      prec.right(1, seq( repeat1(prec(2, $.type)), optional($.operator), optional(repeat1($.type)) )),
      prec.left(1, seq($.operator, repeat($.type)))
    ),

    type: $ => choice(
      $.boolean,
      $.hash,
      $.number,
      $.sequence,
      $.spec_var,
      $.string,
      $.top_level
    ),

    built_in: $ => prec.left(1, seq('?', $.top_level, optional($.group) )),

    group: $ => seq(
      alias('(', $.bracket),
      repeat($.parameter_group),
      alias(')', $.bracket)
    ),

    bracket: $ => choice(
      '<#',
      '</#',
      '>'
    ),

    operator: $ => choice(
      'using',
      'is'
      ',',

      //SEQUENCE OPERATIONS
      '..',
      '..<',
      '..!',

      //HASH OPERATIONS
      ':',

      //ARITHMETICAL OPERATIONS
      '*',
      '+',
      '/',
      '-',
      '%',

      //COPARISON OPERATIONS
      '==',
      '!=',
      '<',
      '<=',
      'lt',
      'lte',
      'gt',
      'gte',

      //LOGICAL OPERATIONS
      '!',
      '&&',
      '||',
      '??',

      //ASSIGNMENT OPERATIONS
      '='
    ),

    //DIRECT Values
    string: $ => choice(
      token(/\"(\\.|[^\"])*\"/),
      token(/\'(\\.|[^\'])*\'/)
    ),

    number: $ => /[0-9]/,

    boolean: $ => seq(
      'true',
      'false'
    ),

    sequence: $ => seq(
      alias('[', $.bracket),
      repeat(seq($.expression, optional(',') )),
      alias(']', $.bracket)
    ),

    hash: $ => seq(
      alias('{', $.bracket),
      repeat($.expression),
      alias('}', $.bracket)
    ),

    //RETRIEVE Values
    top_level: $ => choice(
      token(/\w+/),
      prec.left(1, seq(token(/\w+/), $.group)),
      prec.left(1, seq(token(/\w+/), alias(repeat(token(/\.([a-zA-Z0-9\_]+)/)), $.sub_level), optional($.group)) )
    ),

    spec_var: $ => seq(
      prec.left(1, seq('.', $._spec_var_name) )
    ),

    _spec_var_name: $ => choice(
      'hello',
      'auto_esc',
      'caller_template_name',
      'current_template_name',
      'data_model',
      'error',
      'globals',
      'incompatible_improvements',
      'lang',
      'locale',
      'locale_object',
      'locals',
      'main',
      'main_template_name',
      'namespace',
      'node',
      'output_encoding',
      'get_optional_template',
      'pass',
      'template_name',
      'url_escaping_charset',
      'output_format',
      'vars',
      'version'
    ),

    //METHOD Call
    // method: $ => seq(
    //   $.group
    // ),

    /********** USER DEFINED DIRECTIVES ***********/

    user_defined: $ => seq(
      prec.left(1, seq('<@', token(/\w+/), repeat($.parameter_group), choice('>', '/>') ))
    ),

    /********** END USER DEFINED DIRECTIVES ***********/

    /********** LIST EXPRESSION **************/

    list: $ => seq(
      seq(prec.left(1, seq(alias('<#', $.bracket), 'list')), $.parameter_group, alias('>', $.bracket)),
      repeat($.list_middle),
      optional($.list_else),
      seq('</#list>')
    ),

    list_middle: $ => choice(
      $.break,
      $.continue,
      $.directive,
      $.items,
      $.sep
    ),

    items_middle: $ => choice(
      $.break,
      $.continue,
      $.directive,
      $.sep
    ),

    break: $ => seq(
      '<#break>'
    ),

    continue: $ => seq(
      '<#continue>'
    ),

    list_else: $ => seq(
      '<#else>',
      repeat($.list_middle)
    ),

    items: $ => seq(
      seq('<#items', $.parameter_group, '>'),
      repeat($.items_middle),
      seq('</#items>')
    ),

    sep: $ => choice(
      '<#sep>',
      $.sep_block
    ),

    sep_block: $ => seq(
      '<#sep>',
      '</#sep>'
    ),

    /********** END LIST EXPRESSION **************/

    /********** IF EXPRESSION ***********/

    if: $ => seq(
      prec.left(1, seq('<#if', repeat1($.parameter_group), '>') ),
      repeat($.if_middle),
      optional($.if_else),
      seq('</#if>')
    ),

    if_else: $ => seq(
      '<#else>',
      repeat($.if_middle)
    ),

    elseif: $ => seq(
      prec.left(1, seq('<#elseif', repeat($.parameter_group), '>') )
    ),

    if_middle: $ => choice(
      $.elseif,
      $.directive
    ),

    /********** END IF EXPRESSION ***********/

    /********** SWITCH EXPRESSION ***********/

    switch: $ => seq(
      prec.left(1, seq('<#switch', $.parameter_group, '>') ),
      repeat($.switch_middle),
      optional($.default),
      seq('</#switch>')
    ),

    case: $ => seq(
      prec.left(1, seq('<#case', $.parameter_group, '>') ),
      repeat($.directive),
      repeat($.break)
    ),

    default: $ => seq(
      '<#default>',
      repeat($.directive)
    ),

    switch_middle: $ => choice(
      $.case
      //$.directive
    ),

    /********** END SWITCH EXPRESSION ***********/

    /*********** FUNCTION EXPRESSION  ***********/

    function: $ => seq(
      prec.left(1, seq('<#function', repeat($.parameter_group), '>') ),
      repeat($.function_middle),
      seq('</#function>')
    ),

    function_middle: $ => choice(
      $.return,
      $.directive
    ),

    return: $ => seq(
      prec.left(1, seq('<#return', optional($.parameter_group), '>') )
    ),

    /*********** END FUNCTION EXPRESSION  ***********/

    /*********** MACRO EXPRESSION  ***********/

    macro: $ => seq(
      prec.left(1, seq('<#macro', repeat($.parameter_group), '>') ),
      repeat($.macro_middle),
      seq('</#macro>')
    ),

    macro_middle: $ => choice(
      $.nested,
      $.return,
      $.directive
    ),

    nested: $ => seq(
      prec.left(1, seq('<#nested', repeat($.parameter_group), '>') )
    ),

    /*********** END MACRO EXPRESSION  ***********/

    /*********** ATTEMPT EXPRESSION  ***********/

    attempt: $ => seq(
      seq('<#attempt>'),
      repeat($.attempt_middle),
      seq('</#attempt>')
    ),

    attempt_middle: $ => choice(
      $.recover,
      $.directive
    ),

    recover: $ => seq(
      seq('<#recover>')
    ),

    /*********** END ATTEMPT EXPRESSION  ***********/

    /*********** SINGLE EXPRESSIONS  ***********/

    fallback: $ => seq(
      '<#fallback>'
    ),

    flush: $ => seq(
      '<#flush>'
    ),

    ftl: $ => seq(
      prec.left(1, seq('<#ftl', repeat($.parameter_group), '>') )
    ),

    import: $ => seq(
      prec.left(1, seq('<#import', repeat($.parameter_group), '>') )
    ),

    include: $ => seq(
      prec.left(1, seq('<#include', repeat($.parameter_group), '>') )
    ),

    lt: $ => seq(
      '<#lt>'
    ),

    nt: $ => seq(
      '<#nt>'
    ),

    recurse: $ => seq(
      prec.left(1, seq('<#recurse', repeat($.parameter_group), '>') )
    ),

    rt: $ => seq(
      '<#rt>'
    ),

    setting: $ => seq(
      prec.left(1, seq('<#setting', repeat($.parameter_group), '>') )
    ),

    stop: $ => seq(
      '<#stop>'
    ),

    t: $ => seq(
      '<#t>'
    ),

    visit: $ => seq(
      prec.left(1, seq('<#visit', repeat($.parameter_group), '>') )
    ),

    /*********** END SINGLE EXPRESSIONS  ***********/

    /*********** BLOCK EXPRESSIONS  ***********/

    assign: $ => choice(
      prec.left(1, seq('<#assign', repeat($.parameter_group), '>') ),
      $.end_assign
    ),

    end_assign: $ => seq('</#assign>'),

    global: $ => choice(
      prec.left(1, seq('<#global', repeat($.parameter_group), '>') ),
      $.end_global
    ),

    end_global: $ => seq('</#global>'),

    local: $ => choice(
      prec.left(1, seq('<#local', repeat($.parameter_group), '>') ),
      $.end_local
    ),

    end_local: $ => seq('</#local>')

    /*********** END BLOCK EXPRESSIONS  ***********/
  }

});
