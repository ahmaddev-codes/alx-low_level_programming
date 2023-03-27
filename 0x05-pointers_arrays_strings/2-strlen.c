#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: the function parameter for the length to count
 *
 * Return: always return the length (count) of a string.
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
	{
		count++;
	}

	return (count);
}
