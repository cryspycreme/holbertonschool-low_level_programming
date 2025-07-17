#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all- returns the sum of all its parameters
 *
 * @n: count of parameters passed.
 * Return: sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list num_args;

	va_start(num_args, n);

	while (i < n)
	{
		sum = sum + va_arg(num_args, int);
		i++;
	}
	va_end(num_args);
	return (sum);
}
