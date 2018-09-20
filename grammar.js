module.exports = grammar({
	name: 'freemarker',

	rules: {
		// The production rules of the context-free grammar
		source_file: $ => repeat($._definition),

		_definition: $ => choice(
			$.interpolation_definition,
			$.ftlTag_definition,
			$.comments_definition,
			$._expression
		),

		interpolation_definition: $ => seq(
			'${',
			repeat($.ftlTag_definition),
			'}'
		),

		comments_definition: $ => seq(
			'<#--',
			repeat($._expression),
			'-->'
		),

		ftlTag_definition: $ => seq(
			$.ftlTag_start,
			repeat($._block),
			$.ftlTag_end
		),

		ftlTag_start: $ => seq(
			choice('<#', '</#'),
			repeat($._name),
			repeat($._parameters)
		),

		ftlTag_end: $ => choice(
			'>',
			'/>'
		),

		_parameters: $ => seq(
			$._expression
		),

		_expression: $ => choice(
			$.identifier,
      $.unary_expression,
      $.binary_expression,
			$.number,
			$.alphnumerical,
			$.asciiSymbol
			// TODO: other kinds of expressions
		),

		binary_expression: $ => choice(
			prec.left(1, seq($._expression, '=', $._expression)),
			prec.left(2, seq($._expression, 'as', $._expression)),
			prec.left(3, seq($._expression, 'using', $._expression))
				// ...
		),

		unary_expression: $ => choice(
			prec.left(2, seq('in', $._expression)),
			prec.left(2, seq(',', $._expression))
			// ...
		),

		identifier: $ => /[a-z]+/,

		alphnumerical: $ => /[a-zA-Z0-9]+/,

		asciiSymbol: $ => /[\!-\@\[-\`\{-\~]/,

		number: $ => /\d+/,

		_block: $ => seq(
			$.directive_definition
		),

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
