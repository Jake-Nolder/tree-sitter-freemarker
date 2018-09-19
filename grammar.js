module.exports = grammar({
	name: 'freemarker',

	rules: {
		// The production rules of the context-free grammar
		source_file: $ => repeat($._definition),

		_definition: $ => choice(
			$.directive_definition,
			$.function_definition
		),

		function_definition: $ => seq(
			'<#function',
			// TODO: function parameters
			'>',
			// TODO: function block
			'</#function>'
		),

		directive_definition: $ => seq(
			choice('<#', '</#'),
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
			'function',
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
