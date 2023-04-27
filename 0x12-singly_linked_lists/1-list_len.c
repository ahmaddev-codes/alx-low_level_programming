#include "lists.h"

/**
 * list_len - A function that returns the number of elements
 * in a linked list_t list.
 * @h: The elements in the linked list.
 *
 * Return: The number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t count = 1;

	while (h->next != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
