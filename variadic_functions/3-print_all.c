#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char- prints a character
 * @args: argument pointer.
 */

void print_char(va_list args)
{
	printf("%c", (char)va_arg(args, int));
}

/**
 * print_int- prints an integer
 * @args: argument pointer.
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float- prints a float
 * @args: argument pointer.
 */

void print_float(va_list args)
{
	printf("%f", (float)va_arg(args, double));
}

/**
 * print_string- prints a string
 * @args: argument pointer.
 */

void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all- prints anything
 *
 * @format: list of types of arguments passed to the function.
 */

void print_all(const char *const format, ...)
{
	print_type types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}};

	va_list args;
	int i = 0, j = 0, first = 1;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;

		while (types[j].type != NULL)
		{
			if (types[j].type[0] == format[i])
			{
				if (first != 1)
				{
					printf(", ");
				}
				types[j].f(args);
				first = 0;
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
