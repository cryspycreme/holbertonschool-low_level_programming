#include "main.h"

/**
* print_square - prints a square followed by a line
*
* @size: size of the square
* Return: void
*/

void print_square(int size)
{
	int i = 0, k;

	while (i < size)
	{
		k = 0;

		while (k < size)
		{
			_putchar('#');
			k++;
		}
		_putchar('\n');
		i++;
	}
}

