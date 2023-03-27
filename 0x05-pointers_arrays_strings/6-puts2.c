#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: Parameter for the string to modify
 *
 * Return: returns modified string
 */

void puts2(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
