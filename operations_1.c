#include "monty.h"

/**
 * _nop - This function do nothing
 * @stack: pointer to pointer to the head of the stack
 * @line_number: line  number in the file
 * Return: void
 */
void _nop(__attribute__((unused))stack_t **stack,
	   __attribute__((unused))unsigned int line_number)
{
}

/**
 * _add - Adds the top two elements of the stack
 * @stack: pointer to pointer to the head of the stack
 * @line_number: line  number in the file
 * Return: void
 */
void _add(stack_t **stack, unsigned int line_number)
{
	stack_t *first_top, *second_top;
	int sum;

	if ((*stack)->next == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%i: can't add, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}

	first_top = *stack;
	second_top = (*stack)->next;
	sum = (first_top->n) + (second_top->n);

	*stack = (*stack)->next;
	(*stack)->n = sum;
	free(first_top);
	first_top = NULL;
}

/**
 * _sub - Subtracts the top element from the second top element of the stack.
 * @stack: pointer to pointer to the head of the stack
 * @line_number: line  number in the file
 * Return: void
 */
void _sub(stack_t **stack, unsigned int line_number)
{
	stack_t *first_top, *second_top;
	int difference;

	if ((*stack)->next == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%i: can't sub, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}

	first_top = *stack;
	second_top = (*stack)->next;
	difference = (second_top->n) - (first_top->n);

	*stack = (*stack)->next;
	(*stack)->n = difference;
	free(first_top);
	first_top = NULL;
}
