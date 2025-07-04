#include "main.h"
#include <stdio.h>

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
	int v_ind = 1;

	if (argc > 1)
	{
		while (v_ind < argc)
		result = atoi(argv[v_ind]) * result;
		v_ind++;
		return (result);
	}
	else
	(
		printf("Error\n");
		return (1);
	)
}
