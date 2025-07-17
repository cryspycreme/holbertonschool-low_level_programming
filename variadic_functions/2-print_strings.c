#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings- prints strings, followed by \n
 *
 * @separator: string separator to be printed between strings
 * @n: no. of strings passed to the function
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *names;

	va_list strings;

	va_start(strings, n);

	while (i < n)
	{
		names = va_arg(strings, char*);

		if (names == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", names);
		}
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(strings);
	printf("\n");
}
