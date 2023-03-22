#include "monty.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head of a doubly linked list
 * Return: number of nodes
 */

size_t print_dlistint(const stack_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}

	return (n);
}

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the head of a dlistint_t list
 * @n: n member of added node
 * Return: pointer to added node
 */

stack_t *add_dnodeint(stack_t **head, const int n)
{
	stack_t *node, *tmp = *head;

	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	*head = node;
	node->next = tmp;
	node->prev = NULL;
	node->n = n;
	if (tmp)
		tmp->prev = node;

	return (node);
}

/**
 * delete_dnodeint_at_index - deletes the node at index index of
 *                            a dlistint_t linked list
 * @head: pointer to pointer to the head of a dlistint_t linked list
 * @index: index at which to delete
 * Return: 1 if successful
 *         -1 otherwise
 */

int delete_dnodeint_at_index(stack_t **head, unsigned int index)
{
	unsigned int i = 0;
	stack_t *tmp = *head;

	while (tmp)
	{
		if (i == index)
		{
			if (tmp->prev)
				tmp->prev->next = tmp->next;
			else
				*head = tmp->next;
			if (tmp->next)
				tmp->next->prev = tmp->prev;
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
		i++;
	}

	return (-1);
}
