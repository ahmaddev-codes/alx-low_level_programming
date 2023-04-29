#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - A function that prints all elements of a listint_t list.
 * @h: The lists to print
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	}

	return (count);
}
