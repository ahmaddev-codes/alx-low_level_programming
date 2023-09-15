#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * size_dlistint - The size of the doubly linked list
 *
 * @head: The address of the head to the doubly linked list
 *
 * Return: The size of the singly linked list
 */
unsigned int size_dlistint(dlistint_t **head)
{
	unsigned int size = 0;
	dlistint_t *current = *head;

	while (current != NULL)
	{
		current = current->next;
		size++;
	}
	return (size);
}

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
	unsigned int position = 0, size;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	size = size_dlistint(&current);

	if (idx < size)
	{
		while (position < idx)
		{
			current = current->next;
			position++;
		}

		if (current->prev != NULL)
			current->prev->next = new_node;
		else
			*h = new_node;
		new_node->prev = current->prev;
		new_node->next = current;
		current->prev = new_node;
	}
	return (*h);
}
