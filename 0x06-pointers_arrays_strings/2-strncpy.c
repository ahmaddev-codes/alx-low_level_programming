#include "main.h"

/**
 * _strncpy - A function that copies a string.
 *
 * @dest: The destination string
 * @src: The string to copy
 * @n: Number of times to copy
 *
 * Return: The copy of the src and append it to the dest
 * n number of times.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int join = 0, i = 0;

	while (src[i])
	{
		i++;
	}

	while (join < n && src[join])
	{
		dest[join] = src[join];
		join++;
	}

	while (join < n)
	{
		dest[join] = '\0';
		join++;
	}

	return (dest);
}
