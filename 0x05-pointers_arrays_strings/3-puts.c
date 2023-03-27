#include "main.h"

/**
 * _puts - prints a string followed by a new line
 *
 * @str: Parameter to check for string
 *
 * Return: The string read
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
