#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: value of first parameter
 * @b: value of second parameter
 *
 * return: always returns 0
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
