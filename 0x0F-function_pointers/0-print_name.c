#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 *
 * @name: Name to change to uppercase
 * @f: A pointer to a function that changes names to uppercase
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	
	if (name != NULL && f != NULL)
		f(name);
}
