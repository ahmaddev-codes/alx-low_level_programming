#include "lists.h"
#include <string.h>

/**
 * add_node - A function that adds new node at thr beginning
 * of a list_t list.
 *
 * @head: The new node to create
 * @str: The data to store
 *
 * Return: The address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (head != NULL && str != NULL)
	{
		if (new_node == NULL)
			return (NULL);

		new_node->str = strdup(str);
		new_node->len = _strlen(str);

		printf("[%d] %s\n", new_node->len, new_node->str);

		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	return (0);
}

/**
  * _strlen - Returns the length of a string
  * @count: characters to count
  *
  * Return: Length of string
  */
int _strlen(const char *string)
{
	int count = 0;

	while (*string)
	{
		string++;
		count++;
	}

	return (count);
}
