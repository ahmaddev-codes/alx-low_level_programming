#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 *
 * @head: The linked list to search for the data at index
 * @index: The index of the node to return, starting at 0
 *
 * Return: The nth fo the listint_t linked it,
 * or return NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head; i++)
		head = head->next;

	if (i == index)
		return (head);

	else
		return (NULL);
}
