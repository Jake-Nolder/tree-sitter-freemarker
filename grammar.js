module.exports = grammar({
  name: 'freemarker',

  rules: {
    // The production rules of the context-free grammar
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.directive_definition
    ),

    directive_definition: $ => seq(
      '#import'
    ),
  }
});
