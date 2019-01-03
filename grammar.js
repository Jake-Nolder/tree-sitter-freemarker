module.exports = grammar({
  name: 'freemarker',

  rules: {
    // The production rules of the context-free grammar
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.directive
    ),

    directive: $ => choice(
      $.if,
      $.list,
      $.switch
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

    parameter: $ => /[a-zA-Z0-9\_]+/,

    operator: $ => choice(
      'as'
    ),

    /********** LIST EXPRESSION **************/

    list: $ => seq(
      seq('<#list', $.parameter_pattern, '>'),
      repeat($.list_middle),
      optional($.else),
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

    else: $ => seq(
      '<#else>',
      repeat($.directive)
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
      optional($.else),
      seq('</#if>')
    ),

    elseif: $ => seq(
      seq('<#elseif', $.parameter_pattern, '>'),
      repeat($.directive)
    ),

    if_middle: $ => choice(
      $.elseif,
      //$.directive
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
      $.case,
      //$.directive
    )

    /********** END SWITCH EXPRESSION ***********/

  }

});
