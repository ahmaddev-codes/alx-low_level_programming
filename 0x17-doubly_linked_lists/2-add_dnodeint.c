#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 *
 * @head: Address to the header of the linked list
 * @n: The data to add to the link
 *
 * Return: Address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return NULL;

	new_node->n = n;
	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
		new_node->prev = (*head)->prev;
	}

	else
		new_node->prev = NULL;

	*head = new_node;
	return *head;
}
