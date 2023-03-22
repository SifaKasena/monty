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
		error(*stack);
	}

	first_top = *stack;
	second_top = (*stack)->next;
	sum = (first_top->n) + (second_top->n);
	second_top->n = sum;

	delete_dnodeint_at_index(stack, 0);
}

/**
 * _sub - Subtracts the top element from the second top element of
 * the stack.
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
		error(*stack);
	}

	first_top = *stack;
	second_top = (*stack)->next;
	difference = (second_top->n) - (first_top->n);
	second_top->n = difference;

	delete_dnodeint_at_index(stack, 0);
}

/**
 * _div - Divides the second top element of the stack by the top element
 * of the stack
 * @stack: pointer to pointer to the head of the stack
 * @line_number: line  number in the file
 * Return: void
 */
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *first_top, *second_top;
	int quotient;

	if ((*stack)->next == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%i: can't div, stack too short\n",
			line_number);
		error(*stack);
	}

	first_top = *stack;
	second_top = (*stack)->next;

	if (first_top == 0)
	{
		fprintf(stderr, "L%i: division by zero\n", line_number);
		error(*stack);
	}
	quotient = (second_top->n) / (first_top->n);
	second_top->n = quotient;
	delete_dnodeint_at_index(stack, 0);
}

/**
 * _mul - Multiplies the second top element with the top element of the stack
 * @stack: pointer to pointer to the head of the stack
 * @line_number: line  number in the file
 * Return: void
 */
void _mul(stack_t **stack, unsigned int line_number)
{
	stack_t *first_top, *second_top;
	int product;

	if ((*stack)->next == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%i: can't mul, stack too short\n",
			line_number);
		error(*stack);
	}

	first_top = *stack;
	second_top = (*stack)->next;
	product = (second_top->n) * (first_top->n);
	second_top->n = product;
	delete_dnodeint_at_index(stack, 0);
}
