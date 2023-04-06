#include "main.h"

/* Prototype for natural square root */
int _sqrt(int n, int i);

/**
  * _sqrt_recursion - A function that prints the natural square root of a number
  *
  * @n: The number to calculate the natural square root of
  *
  * Return: the natural square root
  */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  * _sqrt - Calculates natural square root
  *
  * @n: number to calculate the square root of
  * @i: iterate number
  *
  * Return: the natural square root
  */

int _sqrt(int n, int i)
{
	int sqrt;
	
	sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
