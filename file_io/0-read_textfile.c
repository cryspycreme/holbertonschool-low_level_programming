#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters)
{
    int file_desc;
    char buf[BUF_SIZE];
    ssize_t bytesRead, bytesW;

    /*open the file*/
    int file_desc = open(filename, O_RDWR) // open returns a file descriptor
        if (file_desc == -1) return (0);

    if (file_desc != -1)
    {
        /*if filename is empty*/
        if (filename == NULL)
            return (0);

        /*read the file*/
        bytesRead = read(file_desc, buf, sizeof(buf) - 1);
        
	/*if read fails*/
        if (bytesRead == -1)
            return (0);

        /*print the file to output*/
        bytesW = write(fd, wbuf, bytesRead);

        /*if write fails*/
        if (bytesW == -1)
            return (0);       
    }
    close(file_desc);
    return (0);
}
