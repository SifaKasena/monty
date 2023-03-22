#include "monty.h"

/**
 * _mod - gets the remainder of the division of the second element
 *        on the stack by the first.
 * @stack: pointer to pointer to the head of the stack
 * @line_number: line  number in the file
 * Return: void
 */

void _mod(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;

	first = *stack;
	if (!first || !first->next)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	second = first->next;
	if (first->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	second->n = second->n % first->n;
	delete_dnodeint_at_index(stack, 0);
}
