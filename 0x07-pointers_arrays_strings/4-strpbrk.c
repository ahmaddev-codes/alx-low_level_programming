#include "main.h"

/**
  * _strpbrk - A function that searches a string for any of a set of bytes
  *
  * @s: source string
  * @accept: accepted characters
  *
  * Return: A pointer to the byte s,
  * that matches one of the bytes in accept,
  * or NULL if no such byte is found
  */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
		}
	}

	return ('\0');
}
