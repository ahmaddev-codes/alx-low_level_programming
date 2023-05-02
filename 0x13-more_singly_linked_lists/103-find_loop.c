#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 * a listint_t linked list.
 *
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL,
 * or the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current, *next;

	if (head == NULL || head->next == NULL)
		return (NULL);

	current = head->next;
	next = (head->next)->next;

	while (next)
	{
		if (current == next)
		{
			current = head;

			while (current != next)
			{
				current = current->next;
				next = next->next;
			}

			return (current);
		}

		current = current->next;
		next = (next->next)->next;
	}

	return (NULL);
}
