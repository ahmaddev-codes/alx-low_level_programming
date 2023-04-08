#include "main.h"

/**
  * _pow_recursion - Returns the value of x raised to the power of y
  *
  * @x: the main value
  * @y: the power
  *
  * Return: result of y raised to the power of x
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}