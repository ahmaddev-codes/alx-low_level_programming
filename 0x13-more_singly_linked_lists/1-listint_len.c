#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - A function that returns the number of elements
 * in a linked listint_t list
 *
 * @h: The elements in the list
 *
 * Return: The number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
