#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a specific index
 * of a listint_t linked list
 *
 * @head: A pointer to the nodes in a listint_t linked list
 * @index: The index of the node to be removed,
 * index starts at 0
 *
 * Return: 1 if successful, else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *prev;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	prev = *head;
	for (i = 0; i < index - 1 && prev->next; i++)
		prev = prev->next;

	if (i < index - 1)
		return (-1);

	temp = prev->next;
	prev->next = temp->next;
	free(temp);
	return (1);
}
