#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: prints numbers 1 to 100,
 * For multiples of three, print Fizz instead of the number
 * For the multiples of five print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz.
 *
 * Return: always returns 0
 *
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{

		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
