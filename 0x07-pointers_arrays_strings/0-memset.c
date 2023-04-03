#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 *
 * @s: memory area
 * @b: constant byte
 * @n: bytes of the memory area
 *
 * Return: returns the memory area s filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
