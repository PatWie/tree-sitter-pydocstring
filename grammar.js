module.exports = grammar({
  name: 'python_docstring',

  rules: {
    docstring: $ => seq(
      '"""',
      $.top_summary,
      optional($.summary),
      optional($.args_section),
      optional($.return_section),
      optional($.raises_section),
      optional($.examples_section),
      optional($.notes_section),
      optional($.attributes_section),
      '"""\n'
    ),
    top_summary: $ => /[^\n]+\./,
    summary: $ => seq($.summary_line, repeat($.summary_line)),
    summary_line: $ => /[^\n]+/,

    args_section: $ => seq(
      'Args:\n',
      repeat($.arg)
    ),
    arg: $ => seq(
      $.arg_name,
      optional($.type_annotation),
      ':',
      $.element_description
    ),
    arg_name: $ => /\s{4}(\*{0,2}[a-zA-Z_][a-zA-Z_0-9]*)/,

    type_annotation: $ => seq(
      ' (',
      $.type_name,
      ')'
    ),
    type_name: $ => seq(/[a-zA-Z_][a-zA-Z_0-9\.]*/, optional(", optional")),
    //
    element_description: $ => seq(
      seq(/[^\n]+/, '\n'),
      optional(repeat(seq(
        /\s{8}[^\n]+\n/,
      )))

    ),
    element_description_start: $ => seq(/[^\n]+/, '\n'),
    element_description_continuation: $ => seq(
      /\s{8}/,
      /[^\n]+/,
      '\n',
    ),

    ////////////////
    return_section: $ => seq(
      'Returns:\n',
      repeat($.return_line)
    ),
    return_line: $ => choice(
      /\s{4}[^\n]+\n/,
      '\n'),

    raises_section: $ => seq(
      'Raises:\n',
      repeat($.raise_info)
    ),
    raise_info: $ => seq(
      seq($.type_name,
        ':'),
      $.raise_description
    ),
    raise_description: $ => seq(
      seq(/[^\n]+/, '\n'),
      optional(repeat(seq(
        /\s{8}/,
        /[^\n]+/,
        '\n',
      )))

    ),
    examples_section: $ => seq(
      'Examples:\n',
      repeat($.example_line)
    ),
    example_line: $ => seq(/\s{4,}/, /[^\n]+/, '\n'),


    notes_section: $ => seq(
      'Notes:\n',
      repeat($.note_line)
    ),
    note_line: $ => seq(/\s{4,}/, /[^\n]+/, '\n'),

    attributes_section: $ => seq(
      'Attributes:\n',
      repeat($.attribute_line)
    ),
    attribute_line: $ => seq(/\s{4,}/, /[^\n]+/, '\n'),

  }
});

