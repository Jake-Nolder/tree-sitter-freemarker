module.exports = grammar({
	name: 'freemarker',

	rules: {
		// The production rules of the context-free grammar
		source_file: $ => repeat($._definition),

		_definition: $ => choice(
			$.function_definition,
			$.directive_definition
		),

		_block: $ => seq(
			$.directive_definition
		),

		_expression: $ => choice(
      $.identifier,
      $.number
      // TODO: other kinds of expressions
    ),

		function_definition: $ => seq(
			$.functionStart,
			// TODO: function block
			repeat($._block),
			$.functionEnd
		),

		functionStart: $ => seq(
			'<#function',
			repeat($.parameter_list),
			'>'
		),

		functionEnd: $ => seq(
			'</#function>'
		),

		parameter_list: $ => seq(
			$._expression
		),

    identifier: $ => /[a-zA-Z]+/,

    number: $ => /\d+/,

		directive_definition: $ => seq(
			choice('<#'),
			repeat($._name),
			// TODO: Directive Parameters
			choice('>', '/>')
		),

		_name: $ => choice(
			'assign',
			'attempt',
			'autoesc',
			'break',
			'case',
			'compress',
			'continue',
			'default',
			'else',
			'elseif',
			'escape',
			'fallback',
			'flush',
			'ftl',
			'global',
			'if',
			'import',
			'include',
			'items',
			'list',
			'local',
			'lt',
			'macro',
			'nested',
			'noautoesc',
			'noescape',
			'noparse',
			'nt',
			'outputformat',
			'recover',
			'recurse',
			'return',
			'rt',
			'sep',
			'setting',
			'stop',
			'switch',
			't',
			'visit'
		)

	}
});
