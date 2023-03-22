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
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		error(*stack);
	}

	if (flag_stack == 0)
		add_dnodeint(stack, atoi(arg));
	else
		add_dnodeint_end(stack, atoi(arg));
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
void _pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%i: can't pint, stack empty\n", line_number);
		error(*stack);
	}
	printf("%i\n", (*stack)->n);
}

/**
 * _pop - Removes the top element of the stack
 * @stack: pointer to pointer to the head of the stack
 * @line_number: line  number in the file
 * Return: void
 */
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%i: can't pop an empty stack\n", line_number);
		error(*stack);
	}

	ptr = *stack;
	*stack = (*stack)->next;
	free(ptr);
	ptr = NULL;
}

/**
 * _swap - Swaps the top two elements of the stack
 * @stack: pointer to pointer to the head of the stack
 * @line_number: line  number in the file
 * Return: void
 */
void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *new_top, *old_top;
	int temp;

	if ((*stack)->next == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%i: can't swap, stack too short\n",
			line_number);
		error(*stack);
	}

	old_top = *stack;
	new_top = (*stack)->next;
	/*Set the prev ptr node after new_top to that of old_top*
	(((*stack)->next)->next)->prev = old_top;
	old_top->next = new_top->next;
	old_top->prev = new_top;
	new_top->prev = NULL;
	new_top->next = old_top;

	*stack = new_top;*/
	temp = old_top->n;
	old_top->n = new_top->n;
	new_top->n = temp;
}
