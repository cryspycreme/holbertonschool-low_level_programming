#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers- prints numbers, followed by \n
 *
 * @separator: string separator to be printed between no.s
 * @n: no. of integers passed to the function
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list nums;

	va_start(nums, n);

	while (i < n)
	{
		if (i != n - 1 && separator != NULL)
		{
			printf("%d%s", va_arg(nums, int), separator);
		}
		else
		{
			printf("%d", va_arg(nums, int));
		}
		i++;
	}
	va_end(nums);

	printf("\n");
}
