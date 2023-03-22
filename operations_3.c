#include "monty.h"

/**
 * _stack - sets the format of the data to a stack (LIFO)
 * @stack: pointer to pointer to the stack head
 * @line_number: line number in file where opcode is found
 * Return: void
 */

void _stack(__attribute__((unused)) stack_t **stack,
	    __attribute__((unused)) unsigned int line_number)
{
	flag_stack = 0;
}

/**
 * _queue - sets the format of the data to a queue (FIFO)
 * @stack: pointer to pointer to the stack head
 * @line_number: line number in file where opcode is found
 * Return: void
 */

void _queue(__attribute__((unused)) stack_t **stack,
	    __attribute__((unused)) unsigned int line_number)
{
	flag_stack = 1;
}
