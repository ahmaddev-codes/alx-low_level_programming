#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * Description: A function that draws a straight line in the terminal
 *
 * @n: number of lines to print
 *
 * Return: returns 0
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
