#include "main.h"

/**
 * _strchr - Locates a character in a string
 *
 * @s: The string to search
 * @c: The character to search for
 *
 * Return: The first occurence of character or NULL if not
 */

char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i])
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		if (c == s[j])
		{
			s += j;
			return (s);
		}
	}

	return ('\0');
}
