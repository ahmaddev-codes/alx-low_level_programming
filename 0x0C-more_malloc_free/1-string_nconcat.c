#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - A function that concatenates two strings
 *
 * @s1: The first string to concat
 * @s2: The second string to concat
 * @n: The number of bytes
 *
 * Return: NULL if failed
 * empty string if NULL is passed
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i = 0, j = 0, str1 = 0, str2 = 0;

	while (s1 && s1[str1])
		str1++;

	while (s2 && s2[str2])
		str2++;

	if (n < str2)
		concat = malloc(sizeof(char) * (str1 + n + 1));

	else
		concat = malloc(sizeof(char) * (str1 + str2 + 1));

	if (!concat)
		return (NULL);

	while (i < str1)
	{
		concat[i] = s1[i];
		i++;
	}

	while (n < str2 && i < (str1 + n))
		concat[i++] = s2[j++];

	while (n >= str2 && i < (str1 + str2))
		concat[i++] = s2[j++];

	concat[i] = '\0';

	return (concat);
}
