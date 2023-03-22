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
		{"pint", _pint},
		{NULL, NULL}
	};

	while (strcmp(op, ops[i].opcode) != 0)
	{
		i++;
		if (i > 2)
			return (NULL);
	}

	return (ops[i].f);
}
