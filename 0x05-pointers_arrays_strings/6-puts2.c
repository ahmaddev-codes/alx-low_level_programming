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
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
