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
			$.autoesc,
			$.compress,
			$.flush,
			$.ftl,
			$.function,
			$.global,
			$.import,
			$.include,
			$.list,
			$.local,
			$.lt,
			$.macro,
			$.noautoesc,
			$.noparse,
			$.nt,
			$.outputformat,
			$.rt,
			$.setting,
			$.stop,
			$.t
		),

		directiveType: $ => choice(
			prec(1, $.single),
			$.block
		),

		single: $ => seq(
			$.start
		),

		block: $ => seq(
			$.start,
			repeat($.middle),
			$._end
		),

		start: $ => seq(
			optional($.name),
			repeat($.parameter_pattern),
			$._end
		),

		middle: $ => choice(
			$.continue,
			$.items,
			$.nested,
			$.sep,
			$.recover,
			$.return
		),

		_end: $ => choice(
			$.end_single,
			$.end_block
		),

		end_single: $ => />/,

		end_block: $ => /\<\/\#.*\>/,

		parameter_pattern: $ => choice(
			$.paramPattern1,
			$.paramPattern2,
			$.paramPattern3,
			$.binary_expression
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

		binary_expression: $ => choice(
			prec.left(1, seq($.expression, $.operator, $.expression))
		),

		// list: $ => choice(
		// 	prec.left(1, seq($.collection, $.operator, $.parameters))
		// ),

		// collection: $ => seq(
		// 	$._identifier
		// ),

		expression: $ => /[a-zA-Z0-9\_]+/,

		identifier: $ => prec(1, /[a-zA-Z0-9\_]+/),

		name: $ => $.identifier,

		parameter: $ => /[a-zA-Z0-9\_]+/,

		operator: $ => choice(
			'as'
		),

		assign: $ => seq(
			'<#assign',
			$.directiveType
		),

		attempt: $ => seq(
			'<#attempt',
			$.single
		),

		autoesc: $ => seq(
			'<#autoesc',
			$.block
		),

		break: $ => seq(
			'<#break>'
		),

		compress: $ => seq(
			'<#compress',
			$.block
		),

		continue: $ => seq(
			'<#continue>'
		),

		else: $ => seq(
			'<#else>'
		),

		flush: $ => seq(
			'<#flush',
			$.single
		),

		ftl: $ => seq(
			'<#ftl',
			$.single
		),

		function: $ => seq(
			'<#function',
			$.block
		),

		global: $ => seq(
			'<#global',
			$.directiveType
		),

		//if, else, else

		import: $ => seq(
			'<#import',
			$.single
		),

		include: $ => seq(
			'<#include',
			$.single
		),

		items: $ => seq(
			'<#items',
			$.block
		),

		//list, else, items, sep,break, continue

		list: $ => seq(
			'<#list',
			$.block
		),

		local: $ => seq(
			'<#local',
			$.directiveType
		),

		macro: $ => seq(
			'<#macro',
			$.block
		),
		//marco, nested, return

		nested: $ => seq(
			'<#nested',
			$.single
		),

		noautoesc: $ => seq(
			'<#noautoesc',
			$.block
		),

		noparse: $ => seq(
			'<#noparse',
			$.block
		),

		nt: $ => seq(
			'<#nt',
			$.single
		),

		outputformat: $ => seq(
			'<#outputformat',
			$.block
		),

		recover: $ => seq(
			'<#recover>'
		),

		return: $ => seq(
			'<#return',
			optional($.expression),
			'>'
		),

		seq: $ => seq(
			'<#sep',
			$.directiveType
		),

		setting: $ => seq( //NEW
			'<#setting',
			$.single
		),

		stop: $ => seq( //NEW
			'<#stop',
			$.single
		),

		//switch, case, default, break

		t: $ => seq( //NEW
			'<#t',
			$.single
		),

		lt: $ => seq( //NEW
			'<#lt',
			$.single
		),

		rt: $ => seq( //NEW
			'<#rt',
			$.single
		),

		//visit, recurse, fallback

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
