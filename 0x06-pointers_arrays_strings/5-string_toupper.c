#include "main.h"

/**
  * string_toupper - Changes all lowercase letters to uppercase
  *
  * @s: The string will be modified
  *
  * Return: char var
  */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
	}

	return (s);
}
