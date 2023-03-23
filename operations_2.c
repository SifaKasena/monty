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
		error(*stack);
	}

	second = first->next;
	if (first->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		error(*stack);
	}
	second->n = second->n % first->n;
	delete_dnodeint_at_index(stack, 0);
}

/**
 * _pchar - prints the top most element of a stack as a character
 * @stack: pointer to pointer to the head of the stack
 * @line_number: line  number in the file
 * Return: void
 */
void _pchar(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		error(*stack);
	}
	if ((*stack)->n > 127 || (*stack)->n < 0)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		error(*stack);
	}

	printf("%c\n", (*stack)->n);
}

/**
 * _pstr - prints a string formed by the elements of the stack
 * @stack: pointer to pointer to the head of the stack
 * @line_number: line  number in the file
 * Return: void
 */
void _pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;

	if (head == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		error(*stack);
	}

	while (head)
	{
		if (head->n > 127 || head->n < 0 || head->n == 0)
			break;
		printf("%c", head->n);
		head = head->next;
	}

	printf("\n");
}

/**
 * _rotl - rotates the stack to the top
 * @stack: pointer to pointer to the head of the stack
 * @line_number: line  number in the file
 * Return: void
 */
void _rotl(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	stack_t *last, *first;

	last = first = *stack;
	while (last && last->next)
		last = last->next;

	if (last && last->prev)
	{
		*stack = first->next;
		(*stack)->prev = NULL;
		last->next = first;
		first->prev = last;
		first->next = NULL;
	}
}

/**
 * _rotr - rotates the stack to the bottom
 * @stack: pointer to pointer to the head of the stack
 * @line_number: line  number in the file
 * Return: void
 */
void _rotr(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	stack_t *last, *first;

	last = first = *stack;
	while (last && last->next)
		last = last->next;

	if (last && last->prev)
	{
		first->prev = last;
		last->prev->next = NULL;
		*stack = last;
		(*stack)->prev = NULL;
		(*stack)->next = first;
	}
}
