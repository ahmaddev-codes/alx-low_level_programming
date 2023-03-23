#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * Description: Write a function that draws a diagonal line on the terminal
 *
 * @n: number of lines to print
 *
 * Return: prints number of lines if greater than o
 *
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
