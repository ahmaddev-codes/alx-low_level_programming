#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 *
 * @head: The head of the doubly linked list
 * @index:  index of the node, starting from 0
 *
 * Return: The nth node of a doubly linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int position = 0;
	dlistint_t *temp;
	dlistint_t *current = head;

	while (position < index)
	{
		current = current->next;
		position++;
	}

	if (current != NULL)
		temp = current;
	else
		return (NULL);

	return (temp);
}
