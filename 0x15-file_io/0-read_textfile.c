#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it
 * to the posix standard output
 *
 * @filename: Name of the text file to read
 * @letters: Number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print,
 * if the file can not be opened or read, return 0,
 * if filename is NULL, return 0,
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_read;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters * sizeof(char));

	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);

	if (bytes_read == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	write(STDOUT_FILENO, buffer, bytes_read);
	close(fd);
	free(buffer);

	return (bytes_read);
}
