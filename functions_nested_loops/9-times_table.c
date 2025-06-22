#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * times_table - prints the 9 times tables
 *
 * Description: prints 9 times tables starting at 0.
 * Return: void.
 */

void times_table(void)
{

	int x;
	int y;
	
	while (y <= 9)
	{
		x = 0;
		while (x <= 9)
	{
		int result;

	result = (x * y);
	
	if (result <= 9)
	{
		if (x != 0)
		{
			_putchar(' ');
		}
		_putchar(result + 48);
	}
	else
	{
	_putchar((result / 10) + 48);
	_putchar((result % 10) + 48);
	}
	
	if (x != 9)
	{
	_putchar(',');
	_putchar(' ');
	}
	x++;
	}	
	_putchar('\n');
	y++;
	}
}

