#include "function_pointers.h"

/**
 * array_iterator -
 *
 * @array: The array to iterate
 * @size: Size of the array
 * @action - Pointer to the function to use
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
