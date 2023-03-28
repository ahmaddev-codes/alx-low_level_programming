#include "main.h"

/**
 * _atoi - A function that converts a string to an integer.
 *
 * @s: The pointer to convert
 *
 * Return: A integer
 */

int _atoi(char *s)
{
	int c = 0, i = 0, min = 1;
	unsigned int j = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			i = 1;
			j = (j * 10) + (s[c] - '0');
			c++;
		}

		if (i == 1)
		{
			break;
		}

		c++;
	}

	j *= min;
	return (j);
}
