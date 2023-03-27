#include "main.h"

/**
 * print_array -  prints n elements of an array of integers,
 * followed by a new line.
 *
 * @a: Pointer to the array of elements of int data type to print
 * @n: Number of elements of the array to be printed
  *
  * Return: void
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
