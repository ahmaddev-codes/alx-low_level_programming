#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list
 *
 * @h: The head of the doubly linked list
 *
 * Return: Number of elements in the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
