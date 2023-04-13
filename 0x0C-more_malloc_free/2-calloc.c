#include "main.h"
#include <stdlib.h>

char *_memset(char *string, char bytes, unsigned int n);

/**
 * _calloc - A function that allocates memory for an array,
 * using malloc
 *
 * @nmemb: Number of members or elements
 * @size: Size of Array
 *
 * Return: A pointer to the allocated memory,
 * if nmemeb or size = 0, returns NULL
 * if malloc fails, returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *string;

	if (nmemb == 0 || size == 0)
		return (NULL);

	string = malloc(nmemb * size);

	if (string == NULL)
		return (NULL);

	_memset(string, 0, nmemb * size);

	return (string);
}

/**
 * *_memset - fills memory with a constant byte
 *
 * @string: memory area to be filled
 * @bytes: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area string
 */

char *_memset(char *string, char bytes, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		string[i] = bytes;
	}

	return (string);
}
