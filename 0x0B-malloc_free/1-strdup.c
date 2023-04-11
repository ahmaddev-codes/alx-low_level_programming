#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - A function that returns a pointer to a
 * that contains the string given as a parameter.
 *
 * @str: The string given as a parameter
 *
 * Return: A pointer to a new string;
 * returns NULL if str = NULL
 * returns NULL if insufficient memory
 */

char *_strdup(char *str)
{
	char *string;
	int i = 0, output;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	string = malloc(sizeof(char) * (i + 1));

	if (string == NULL)
	{
		return (NULL);
	}

	for (output = 0; str[output]; output++)
	{
		string[output] = str[output];
	}

	return (string);
}
