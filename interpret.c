#include "monty.h"

/**
 * interpret_file - interprets the file line by line
 * @file: monty file to be interpreted
 * Return: void
 */

void interpret_file(FILE *file)
{
	char *op, *line = NULL;
	size_t n = 0;
	int line_no = 1;
	void (*f)(stack_t **, unsigned int);
	stack_t *stack = NULL;

	while (getline(&line, &n, file) != -1)
	{
		op = strtok(line, " \n");
		if (op == NULL)
		{
			line_no++;
			continue;
		}
		f = get_op_func(op);
		if (f == NULL)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_no, op);
			exit(EXIT_FAILURE);
		}
		f(&stack, line_no);
		line_no++;
	}
}
