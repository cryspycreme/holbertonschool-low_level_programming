#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

#define BUF_SIZE 10000

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


ssize_t read_textfile(const char *filename, size_t letters)
{
    int file_desc;
    char buf[BUF_SIZE];
    ssize_t bytesRead, bytesW;

    /*open the file*/
    if (filename == NULL)
            return (0);
    
    file_desc = open(filename, O_RDONLY, S_IRUSR);
        if (file_desc == -1)
	      return (0);

    if (file_desc != -1)
    {
	/*read the file*/
	    bytesRead = read(file_desc, buf, letters);

        /*if read fails*/
        if (bytesRead == -1)
            return (0);

        /*print the file to output*/
        bytesW = write(STDOUT_FILENO, buf, bytesRead);

        /*if write fails*/
        if (bytesW == -1)
            return (0);
    }
   close (file_desc);
    return (bytesW); 
}
