#include "main.h"

/**
  * _strncat - A function that concatenates two strings
  *
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int concat = 0, i = 0;

	while (dest[concat])
	{
		concat++;
	}

	while (i < n && src[i])
	{
		dest[concat] = src[i];
		concat++;
		i++;
	}

	dest[concat + n + 1] = '\0';

	return (dest);
}
