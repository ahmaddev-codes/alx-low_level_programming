#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - A function that prints all the elements of a list_t list.
 * @h: The elements in the linked list.
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		i++;
		h = h->next;
	}

	return (i);
}
