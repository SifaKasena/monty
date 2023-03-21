#include "monty.h"

/**
 * is_number - checks if a string is a number
 * @str: character string
 * Return: 1 if True otherwise 0
 */

int is_number(char *str)
{
	while (*str != 0)
	{
		if (*str > '9' || *str < '0')
			return (0);
		str++;
	}

	return (1);
}
