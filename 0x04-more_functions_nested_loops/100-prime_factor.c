#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 *
 * Description: Prints the largest prime factor of the number 612852475143,
 * followed by a new line.
 *
 * Return: always returns 0
 */

int main(void)
{
	long i, lpf;
	long number = 612852475143;
	double squart = sqrt(number);

	for (i = 1; i <= squart; i++)
	{
		if (number % i == 0)
		{
			lpf = number / i;
		}
	}

	printf("%ld\n", lpf);

	return (0);
}
