#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - A function that prints strings
 *
 * @separator: The string to be printed between the strings
 * @n: The number of strings passed to be printed
 * @...: The rest of the strings
 *
 * Return: all the strings printed to the screen
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *string;

	if (n > 0)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			string = va_arg(args, char*);

			if (string == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", string);

			if (separator != NULL && i != n - 1)
				printf("%s", separator);
		}

		va_end(args);
	}

	printf("\n");
}
