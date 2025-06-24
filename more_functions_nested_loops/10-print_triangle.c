#include "main.h"

/**
* print_triangle - prints a triangle
*
* @size: size of the triangle
* Return: void
*/

void print_triangle(int size)
{
	if (size > 0)
	{
		int row = 1, num_spaces, num_hashes = 1;

		while (row <= size)
		{
			num_spaces = 0;

			while (num_spaces < size - num_hashes)
			{
				_putchar(' ');
				num_spaces++;
			}

			num_hashes = 1;

			while (num_hashes <= size - num_spaces)
			{
				_putchar('#');
				num_hashes++;
			}
		_putchar('\n');
		row++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
