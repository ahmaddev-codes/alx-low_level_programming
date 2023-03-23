#include "main.h"

/**
 * print_square - prints a square
 *
 * Description: Write a function that prints a square,
 * followed by a new line
 *
 * @size: size of squares to print
 *
 * Return: prints number of squares
 *
 */

void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
