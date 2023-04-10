#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - A function that addition of positive numbers
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: always returns 0
 */

int main(int argc, char **argv)
{
	int i, j, sum = 0;
	char *fizzbuzz;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		j = strtol(argv[i], &fizzbuzz, 10);

		if (*fizzbuzz)
		{
			printf("Error\n");
			return (1);
		}

		else
		{
			sum += j;
		}
	}

	printf("%d\n", sum);

	return (0);
}
