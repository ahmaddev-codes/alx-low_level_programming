#include "main.h"

/**
 * factorial - A function that returns the factorial of a given number
 *
 * @n: The number to return its factorial
 *
 * Return: The factorial of number in argument
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (1);
	}

	return (n * factorial(n -1));
}
