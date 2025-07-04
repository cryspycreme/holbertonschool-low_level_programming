#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * @argc: no. of arguments passed into function
 * @argv: strings of arguments passed into function
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
