#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: The head of the doubly linked list
 * @idx: The index to put the node in
 * @n: The data to insert in the new node
 *
 * Return: the address of the new node, or NULL if it failed;
 * if it is not possible to add the new node at index idx, NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int position = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = current;
		if (current != NULL)
			current->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (current != NULL && position < idx - 1)
	{
		current = current->next;
		position++;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
