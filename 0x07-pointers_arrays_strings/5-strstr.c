#include "main.h"

/**
  * _strstr - A finction that locates a substring
  *
  * @haystack: the string to search
  * @needle: the string to find
  *
  * Return: char value
  */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}

	return ('\0');
}
