#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - return code.
 *
 * Description: prints all natural numbers from n to 98.
 * @n: the number to be passed to the function
 *
 * Return: void.
 */


void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
	{
		printf("%d, ", n++);
	}
	printf("%d\n", n);
	}
	else
	{
		while (n > 98)
	{
		printf("%d, ", n--);
	}
	printf("%d\n", n);
	}
}
