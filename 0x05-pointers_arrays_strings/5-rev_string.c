#include "main.h"

/**
 * rev_string - Write a function that reverses a string.
 *
 * @s: parameter that holds the string to reverse.
 *
 * Return: returns the reverse of the string in parameter
 */

void rev_string(char *s)
{
	char rev = s[0];
	int i, counter = 0;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
