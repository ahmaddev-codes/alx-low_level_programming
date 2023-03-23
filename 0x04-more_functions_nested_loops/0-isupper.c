#include "main.h"

/**
 * _isupper - returns 1 if character is uppercase, 0 otherwise
 *
 * Description: A function that checks for uppercase character
 *
 * @c: character to check
 *
 * Return: always 1 (success)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	return (0);
}
