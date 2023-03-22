#include "monty.h"

/**
 * get_op_func - get the respective function for the opcode
 * @op: opcode to get function for
 * Return: function pointer to the respective function
 */

void (*get_op_func(char *op))(stack_t **stack, unsigned int line_number)
{
	int i = 0;
	instruction_t ops[] = {
		{"push", _push},
		{"pall", _pall},
		{"mod", _mod},
		{"pchar", _pchar},
		{NULL, NULL}
	};

	while (ops[i].opcode && strcmp(op, ops[i].opcode) != 0)
		i++;

	return (ops[i].f);
}
