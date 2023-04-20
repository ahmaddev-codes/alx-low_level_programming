#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - A function that prints numbers
 *
 * @separator: The sring to print between numbers
 * @n: Number of integers passed to the function
 * @...: Other arguments passed
 *
 * Return: Numbers with separators
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (n > 0)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
					
			if (separator != NULL && i != n -1)
				printf("%s", separator);
		}

		va_end(args);
	}

	printf("\n");
}
