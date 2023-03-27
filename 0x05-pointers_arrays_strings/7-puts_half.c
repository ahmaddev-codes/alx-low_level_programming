#include "main.h"

/**
 * puts_half - print the second half of the string;
 *
 * Description: If the number of characters is odd,
 * the function should print the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 *
 * @str: parameter contanining the string to modify
 *
 * Return: return half of the string
 */

void puts_half(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 1)
	{
		j = (i - 1) / 2;
		j += 1;
	}
	else
	{
		j = i / 2;
	}

	for (; j < i; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
