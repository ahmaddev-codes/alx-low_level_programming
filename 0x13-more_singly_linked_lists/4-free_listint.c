#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - A function that frees a listint_t
 *
 * @head: The pointer to the list to free
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
