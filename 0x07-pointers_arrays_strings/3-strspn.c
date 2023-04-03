#include "main.h"

/**
  * _strspn - A function that gets the length of a prefix substring
  *
  * @s: Initial segment
  * @accept: Accepted strings
  *
  * Return: Number of bytes in the initial segment
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k = 0;

	for (i = 0; accept[i]; i++)
	{
		for (j = 0; s[j] != 32;  j++)
		{
			if (accept[i] == s[j])
			{
				k++;
			}
		}
	}

	return (k);
}
