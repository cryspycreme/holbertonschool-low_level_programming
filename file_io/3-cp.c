#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

#define BUF_SIZE 2000

/**
 * print_error- prints error on error
 *
 * @exit_code: code no. to exit with
 * @file_buffer: name of the file
 * @fd_value: value fo the file descriptor
 * Return: nothing.
 */

void print_error(int exit_code, char *file_buffer, int fd_value)
{
	if (exit_code == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(exit_code);
	}

	if (exit_code == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_buffer);
		exit(exit_code);
	}

	if (exit_code == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_buffer);
		exit(exit_code);
	}

	if (exit_code == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_value);
		exit(exit_code);
	}
}

/**
 * main- main entry point
 *
 * @argc: argument count
 * @argv: argument vectors
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	char *file_from = argv[1];
	char *file_to = argv[2];
	int fd_file_from, bytesR, bytesW, fd_file_to, close_ff, close_ft;
	char cp_ff[BUF_SIZE];

	if (argc != 3)
		print_error(97, NULL, 0);

	if (file_from == NULL)
		print_error(98, file_from, 0);

	fd_file_from = open(file_from, O_RDONLY);
	if (fd_file_from == -1)
		print_error(98, file_from, 0);

	fd_file_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	
	if (fd_file_to == -1)
	{
		close(fd_file_from);
		print_error(99, file_to, 0);
	}
	while ((bytesR = read(fd_file_from, cp_ff, 1024))> 0)
	{
		if (bytesR == -1)
			print_error(98, file_from, 0);
		bytesW = write(fd_file_to, cp_ff, bytesR);
		if (bytesW == -1)
			print_error(99, file_to, 0);
	}
	if (bytesR == -1)
               	print_error(98, file_from, 0);
		
	close_ff = close(fd_file_from);
	if (close_ff == -1)
		print_error(100, NULL, fd_file_from);

	close_ft = close(fd_file_to);
	if (close_ft == -1)
		print_error(100, NULL, fd_file_to);
	return (0);
}
