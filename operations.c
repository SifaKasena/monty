#include "monty.h"

/**
 * _push - implements push opcode
 * @stack: pointer to pointer to the head of the stack
 * @line_number: line  number in the file
 * Return: void
 */

void _push(stack_t **stack, unsigned int line_number)
{
	char *arg = strtok(NULL, " \n");

	if (arg == NULL || !is_number(arg))
	{
		dprintf(STDERR_FILENO, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	add_dnodeint(stack, atoi(arg));
}

/**
 * _pall- implements pall opcode
 * @stack: pointer to pointer to the head of the stack
 * @line_number: line  number in the file
 * Return: void
 */

void _pall(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	print_dlistint(*stack);
}
