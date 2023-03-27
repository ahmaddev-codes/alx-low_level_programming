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
	int i, j, k;
	char *a, aux;

	a = s;

	while (s[i] != '\0')
	{
		i++;
	}

	for (k = 1; k < i; k++)
	{
		a++;
	}

	for (j = 0; j < (i / 2); j++)
	{
		aux = s[j];
		s[j] = *a;
		*a = aux;
		a--;
	}
}
