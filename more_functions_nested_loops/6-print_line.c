#include "main.h"

/**
* print_line - draws a straight line in the terminal 'n' number of times
* @n: number of times '_' is to be printed
* Return: void
*/

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n = n - 1;
	}
	_putchar('\n');
}
