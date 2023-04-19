#include "function_pointers.h"

/**
 * int_index - A function that returns the index of a key
 *
 * @array: The array to search
 * @size: The number of elements in the array
 * @cmp: pointer to the function to be used to
 * compare values
 *
 * Return: index of array if found
 * or -1 if no element matches
 * or -1 if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}

	return (-1);
}
