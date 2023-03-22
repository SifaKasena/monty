#include "monty.h"

stack_t *top_element; /* Definition of the top element variable */

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
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	add_dnodeint(stack, atoi(arg));
	top_element = *stack;
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

/**
 * _pint - Prints the value at the top of the stack, followed by a new line
 * @stack: pointer to pointer to the head of the stack
 * @line_number: line  number in the file
 * Return: void
 */
void _pint(__attribute__((unused))stack_t **stack, unsigned int line_number)
{
	if (top_element == NULL)
	{
		fprintf(stderr, "L%i: can't pint, dtack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%i\n", top_element->n);
}
