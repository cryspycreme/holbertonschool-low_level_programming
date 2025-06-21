#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_last_digit - return code.
 *
 * Description: prints the last digit of a number
 * @i: number to be checked
 *
 * Return: v - last digit of number
 */

int print_last_digit(int i)
{
	int v = abs(i % 10);

	_putchar(v + '0');
	return (v);
}
