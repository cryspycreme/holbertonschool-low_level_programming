#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int file_desc, bytesW;
	
	if (filename == NULL)
		return (-1);
		
	file_desc = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0666);
	if (file_desc == -1)
		return (0);
		
	/*write to file*/
	if (text_content != NULL)
	{
		bytesW = write(file_desc, filename, (strlen(text_content) + 1));
		if (bytesW == -1)
			return (0);
	}
	close(file_desc);
	return (0);
}
