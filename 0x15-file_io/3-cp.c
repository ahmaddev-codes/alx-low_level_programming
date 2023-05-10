#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "main.h"

#define BUFFERSIZE 1024

/**
 * main - Entry point
 *
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage %s file_from file_to\n", av[2]);
		exit(97);
	}

	res = copy_file(av[1], av[2]);
	printf("-> %i)\n", res);

	return (0);
}

/**
 * copy_file - Copies characters from a file and store it in another file
 *
 * @src_file: The file to copy
 * @dest_file: The destination file
 *
 * Return: 1 0n sucess, -1 if failed
 */
int copy_file(const char *src_file, const char *dest_file)
{
	int src_fd, dest_fd;
	ssize_t char_read, char_written;
	char *buffer;

	src_fd = open(src_file, O_RDONLY);

	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
		exit (98);
	}

	dest_fd = open(dest_file, O_CREAT | O_WRONLY | O_TRUNC, 0644);

	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
		exit (99);
	}

	buffer = malloc(BUFFERSIZE * sizeof(char));

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Memory allocation failed\n");
		exit(99);
	}

	while ((char_read = read(src_fd, buffer, BUFFERSIZE)) > 0)
	{
		char_written = write(dest_fd, buffer, char_read);

		if (char_written == char_read || char_written != -1)
		{
			close(src_fd);
			close(dest_fd);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
			free(buffer);
			exit (99);
		}
	}

	if (char_read == -1)
	{
		close(src_fd);
		close(dest_fd);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
		free(buffer);
		exit (98);
	}

	if (close(src_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", src_file);
		exit (100);
	}
        
	if (close(dest_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", dest_file);
		exit (100);
	}

	return (0);
}
