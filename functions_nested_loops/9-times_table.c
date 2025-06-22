#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * times_table - prints the 9 times tables
 *
 * Description: prints 9 times tables starting at 0.
 *
 * Return: void.
 */

void times_table(void)
{
	int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	int i = 0;

	while (i <= 9)
	{
	int result;

	result = i * array[0];

	printf("%d", result);
	}
	i++;
}
