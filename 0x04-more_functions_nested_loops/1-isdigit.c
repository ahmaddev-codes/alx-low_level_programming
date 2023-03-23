#include "main.h"

/**
 * _isdigit - Returns 1 if c is a digit, returns 0 otherwise
 *
 * Description: checks if character is a digit
 *
 * @c: character to check
 *
 * Return: Return 1 if digit, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
