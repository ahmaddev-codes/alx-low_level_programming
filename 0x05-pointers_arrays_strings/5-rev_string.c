#include "main.h"

/**
 * rev_string - Write a function that reverses a string.
 *
 * @s: parameter that holds the string to reverse.
 *
 * Return: returns the reverse of the string in parameter
 */

void rev_string(char *s)
{
	int a, len;
	char *i = s, *j;

	for (a = 0; s[a] != '\0' && s[a + 1] != '\0'; a++)
	{
		i++;
	}

	len = a + 1;
	j = s;

	for (a = 0; a < len / 2; a++)
	{
		char x;

		x = *i;
		*i = *j;
		*j = x;
		j++;
		i--;
	}

	i[len + 1] = '\0';
}
