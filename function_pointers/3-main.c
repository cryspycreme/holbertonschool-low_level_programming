#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: count of arguments
 * @argv: vector count
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int num1, num2, calc;
	int (*operator)(int, int);

	if (argc != 4)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = get_op_func(argv[2]);
	if (operator == NULL)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(99);
	}
	if (((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0) || argv[2][1] != '\0')
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(100);
	}
	calc = operator(num1, num2);
	printf("%d\n", calc);
	return (0);
}
