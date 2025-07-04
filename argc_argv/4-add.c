#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main- Entry point
 *
 * @argc: no. of arguments
 * @argv: string of arguments passed
 * Return: 0 if success, 1 if not success.
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc <= 1)
	{
		printf("%d\n", 0);
	}

	while (i < argc)
	{
		if (!isdigit[argv[i])
		{
			printf("Error\n");
                        return (1);
		}
		else
		{
			sum = atoi(argv[i]) + sum;
		}
	i++;
	}
printf("%d\n", sum);
return (0);
}
