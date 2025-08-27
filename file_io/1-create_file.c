#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

/**
 * create_file - function that creates a file
 * 
 * @filename: name of file to create
 * @text_content: null terminated string to write to the file
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file_desc, bytesW;

	if (filename == NULL)
		return (-1);
	
	file_desc = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file_desc == -1)
		return (-1);
	
	/*write to file*/
	if (text_content != NULL)
	{
		bytesW = write(file_desc, filename, (strlen(text_content) + 1));
		if (bytesW == -1)
			return (-1);
	}
	close(file_desc);
	return (1);
}
