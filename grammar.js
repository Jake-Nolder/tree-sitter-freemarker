module.exports = grammar({
  name: 'freemarker',

  rules: {
    // The production rules of the context-free grammar
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.directive
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
      $.visit
    ),

    parameter_pattern: $ => choice(
      $.paramPattern1,
      $.paramPattern2,
      $.paramPattern3,
      $.binary_expression,
      $.unary_expression
    ),

    paramPattern1: $ => seq(
      $.parameter
    ),

    paramPattern2: $ => seq(
      $.parameter,
      ','
    ),

    paramPattern3: $ => seq(
      $.parameter,
      '=',
      $.expression
    ),

    unary_expression: $ => choice(
      prec.left(1, seq($.operator, $.expression))
    ),

    binary_expression: $ => choice(
      prec.left(1, seq($.expression, $.operator, $.expression))
    ),

    expression: $ => /[a-zA-Z0-9\_]+/,

    identifier: $ => prec(1, /[a-zA-Z0-9\_]+/),

    name: $ => $.identifier,

    parameter: $ => prec(1, /[a-zA-Z0-9\_]+/),

    operator: $ => choice(
      'as',
      'using'
    ),

    /********** LIST EXPRESSION **************/

    list: $ => seq(
      seq('<#list', $.parameter_pattern, '>'),
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
      seq('<#items', $.parameter_pattern, '>'),
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
      seq('<#if', $.parameter_pattern, '>'),
      repeat($.if_middle),
      optional($.if_else),
      seq('</#if>')
    ),

    if_else: $ => seq(
      '<#else>',
      repeat($.if_middle)
    ),

    elseif: $ => seq(
      seq('<#elseif', $.parameter_pattern, '>')
    ),

    if_middle: $ => choice(
      $.elseif,
      $.directive
    ),

    /********** END IF EXPRESSION ***********/

    /********** SWITCH EXPRESSION ***********/

    switch: $ => seq(
      seq('<#switch', $.parameter_pattern, '>'),
      repeat($.switch_middle),
      optional($.default),
      seq('</#switch>')
    ),

    case: $ => seq(
      seq('<#case', $.parameter_pattern, '>'),
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
      seq('<#function', repeat($.parameter_pattern), '>'),
      repeat($.function_middle),
      seq('</#function>')
    ),

    function_middle: $ => choice(
      $.return,
      $.directive
    ),

    return: $ => seq(
      seq('<#return', optional($.parameter_pattern), '>')
    ),

    /*********** END FUNCTION EXPRESSION  ***********/

    /*********** MACRO EXPRESSION  ***********/

    macro: $ => seq(
      seq('<#macro', repeat($.parameter_pattern), '>'),
      repeat($.macro_middle),
      seq('</#macro>')
    ),

    macro_middle: $ => choice(
      $.nested,
      $.return,
      $.directive
    ),

    nested: $ => seq(
      seq('<#nested', repeat($.parameter_pattern), '>')
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
      '<#ftl',
      repeat($.parameter_pattern),
      '>'
    ),

    import: $ => seq(
      '<#import',
      repeat($.parameter_pattern),
      '>'
    ),

    include: $ => seq(
      '<#include',
      repeat($.parameter_pattern),
      '>'
    ),

    lt: $ => seq(
      '<#lt>'
    ),

    nt: $ => seq(
      '<#nt>'
    ),

    recurse: $ => seq(
      '<#recurse',
      repeat($.parameter_pattern),
      '>'
    ),

    rt: $ => seq(
      '<#rt>'
    ),

    setting: $ => seq(
      '<#setting',
      repeat($.parameter_pattern),
      '>'
    ),

    stop: $ => seq(
      '<#stop>'
    ),

    t: $ => seq(
      '<#t>'
    ),

    visit: $ => seq(
      '<#visit',
      repeat($.parameter_pattern),
      '>'
    ),

    /*********** END SINGLE EXPRESSIONS  ***********/

    /*********** BLOCK EXPRESSIONS  ***********/

    assign: $ => choice(
      seq('<#assign', repeat($.parameter_pattern), '>'),
      $.end_assign
    ),

    end_assign: $ => seq('</#assign>'),

    global: $ => choice(
      seq('<#global', repeat($.parameter_pattern), '>'),
      $.end_global
    ),

    end_global: $ => seq('</#global>'),

    local: $ => choice(
      seq('<#local', repeat($.parameter_pattern), '>'),
      $.end_local
    ),

    end_local: $ => seq('</#local>')

    /*********** END BLOCK EXPRESSIONS  ***********/
  }

});
