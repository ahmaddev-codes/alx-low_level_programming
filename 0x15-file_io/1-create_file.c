#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - Creates a file
 *
 * @filename: The name of the file to create
 * @text_content: A NULL teminated string to write into the file
 *
 * Return: 1 on sucess,
 * -1 on failure,
 * if filename is NULL, return -1,
 * if text_content is NULL, create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, text_len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_len])
			text_len++;

		bytes_written = write(fd, text_content, text_len);

		if (bytes_written == -1 || bytes_written != text_len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
