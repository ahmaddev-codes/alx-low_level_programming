#include "main.h"
#include <stdio.h>

/**
  * reverse_array - Reverses the content of an array of integers
  *
  * @a: An array of integers
  * @n: Number of elements to swap
  *
  * Return: empty
  */

void reverse_array(int *a, int n)
{
	int *pointer, i, aux, k;

	pointer = a;

	for (i = 1; i < n; i++)
	{
		pointer++;
	}

	for (k = 0; k < i / 2; k++)
	{
		aux = a[k];
		a[k] = *pointer;
		*pointer = aux;
		pointer--;
	}
}
