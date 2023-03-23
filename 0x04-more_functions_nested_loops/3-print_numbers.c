#include "main.h"

/**
 * Prints numbers, from 0 to 9, followed by a new line
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar("%d", i);

	_putchar("\n");
}
