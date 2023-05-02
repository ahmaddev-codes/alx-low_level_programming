#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t looped_listint_len(const listint_t *head);

/**
 * print_listint_safe - Prints a listint_t linked list
 *
 * @head: A pointer to the first node of the linked list
 *
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		while (head != NULL)
		{
			nodes++;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 *
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *current, *next;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	current = head->next;
	next = (head->next)->next;

	while (next)
	{
		if (current == next)
		{
			current = head;

			while (current != next)
			{
				count++;
				current = current->next;
				next = next->next;
			}

			current = current->next;

			while (current != next)
			{
				count++;
				current = current->next;
			}

			return (count);
		}

		current = current->next;
		next = (next->next)->next;
	}

	return (0);
}
