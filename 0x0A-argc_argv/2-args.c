#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: always returns 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
