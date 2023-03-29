#include "main.h"

/**
 * _strcat - A function that concatenates two strings
 *
 * @dest: The string to be appended to
 * @src: The string to append
 *
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int concat = 0, i;

	while (dest[concat])
	{
		concat++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[concat] = src[i];
		concat++;
	}

	dest[concat] = '\0';

	return (dest);
}
