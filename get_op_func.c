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
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"mod", _mod},
		{"pchar", _pchar},
		{"rotl", _rotl},
		{"rotr", _rotr},
		{"pstr", _pstr},
		{"stack", _stack},
		{"queue", _queue},
		{NULL, NULL}
	};

	while (ops[i].opcode && strcmp(op, ops[i].opcode) != 0)
	{
		i++;
		if (i > 14)
			return (NULL);
	}

	return (ops[i].f);
}
