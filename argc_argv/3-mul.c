#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main- Entry point
 *
 * @argc: no. of arguments passed
 * @argv: string of arguments passed
 * Return: 0 (Success) is two arguments received, 1 if no arguments received
 */

int main(int argc, char *argv[])
{
	int result = 1;
	int i = 1;

	if (argc > 1)
	{
		while (i < argc)
		{
		result = atoi(argv[i]) * result;
		i++;
		}
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
return (0);
}
