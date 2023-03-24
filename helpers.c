#include "monty.h"

/**
 * is_number - checks if a string is a number
 * @str: character string
 * Return: 1 if True otherwise 0
 */

int is_number(char *str)
{
	if (str[0] == '-' && str[1])
		str++;
	while (*str != 0)
	{
		if (*str > '9' || *str < '0')
			return (0);
		str++;
	}

	return (1);
}

/**
 * error - exits the program if an error occurs
 * @stack: head of stack for freeing
 * Return: void
 */

void error(stack_t *stack)
{
	if (stack)
		free_dlistint(stack);
	exit(EXIT_FAILURE);
}

/**
 * free_dlistint - frees a stack
 * @head: pointer to the head of a dlistint_t list
 * Return: void
 */

void free_dlistint(stack_t *head)
{
	if (head)
		free_dlistint(head->next);
	free(head);
}
