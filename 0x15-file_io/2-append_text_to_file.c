#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * 
 * @filename: The name of the file
 * @text_content: The NULL terminated string to
 * add at the end of the file
 *
 * Return: 1 on success, -1 on failure,
 * if filename is NULL, return -1;
 * if text_content is NULL, do not add anything.
 * Return 1 if file exists, -1 if it does not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, char_count = 0;
	char *ptr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		ptr = text_content;
		
		while (*ptr != '\0')
		{
			char_count++;
			ptr++;
		}

		if (char_count > 0)
			write(fd, text_content, char_count);
	}

	close(fd);

	return (1);
}
