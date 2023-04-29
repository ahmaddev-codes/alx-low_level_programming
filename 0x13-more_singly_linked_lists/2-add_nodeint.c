#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - A function that adds a new node at the beginning
 * of a listint_t list.
 *
 * @head: A pointer to the head of the lists
 * @n: The data to add to each node
 *
 * Return: The data passed into the list,
 * from the last to the first
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
