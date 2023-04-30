#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 *
 * @head: A pointer to the list of nodes in the linked list
 * @idx: The index of the list where the new node should be added,
 * index starts at 0
 * @n: The data to store in the index
 *
 * Return: The address of the new node,
 * or NULL if failed,
 * if it is impossible to add new node at index idx;
 * do not add the node and return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *current_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0 || *head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	current_node = *head;

	while (current_node)
	{
		if (i == idx - 1)
		{
			new_node->next = current_node->next;
			current_node->next = new_node;
			return (new_node);
		}

		current_node = current_node->next;
		i++;
	}

	free(new_node);

	return (NULL);
}
