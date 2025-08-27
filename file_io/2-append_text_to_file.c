#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <string.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: name of file to append to
 * @text_content: null terminated string to append to the file
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, bytesW;

	if (filename != NULL)
	{
		file_desc = open(filename, O_RDWR | O_CREAT | O_EXCL | O_APPEND, 0664);

		if (file_desc == -1)
			return (-1);
	}
	else
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bytesW = write(file_desc, text_content, strlen(text_content));
		if (bytesW == -1)
			return (-1);
	}
	close(file_desc);
	return (1);
}
