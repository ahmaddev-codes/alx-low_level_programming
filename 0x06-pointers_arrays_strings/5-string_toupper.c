#include "holberton.h"

/**
  * string_toupper - Changes all lowercase letters to uppercase
  *
  * @p: The string will be modified
  *
  * Return: char var
  */

char *string_toupper(char *x)
{
	int length;

	length = 0;

	while (x[length] != '\0')
	{
		if (x[length] >= 97 && x[length] <= 122)
		{
			x[length] = x[length] - 32;
		}
		length++;
	}
	return (x);
}
