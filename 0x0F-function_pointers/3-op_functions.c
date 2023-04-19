#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - A function that adds two numbers
 *
 * @a: first number
 * @b: secnd number
 *
 * Return: The addition of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - A function that subtracts two numbers
 *
 * @a: first number
 * @b: secnd number
 *
 * Return: The difference of two numbers
 */
int op_sub(int a, int b)
{
        return (a - b);
}

/**
 * op_mul - A function that multiplies two numbers
 *
 * @a: first number
 * @b: secnd number
 *
 * Return: The product of two numbers
 */
int op_mul(int a, int b)
{
        return (a * b);
}

/**
 * op_div - A function that divides two numbers
 *
 * @a: first number
 * @b: secnd number
 *
 * Return: The quotient of two numbers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

        return (a / b);
}

/**
 * op_mod - A function that returns the modulus
 * of two numbers
 *
 * @a: first number
 * @b: secnd number
 *
 * Return: The modulus of two numbers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

        return (a % b);
}
