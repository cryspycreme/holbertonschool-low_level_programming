#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal
*
* @n: number of times '\' is to be printed
* Return: void
*/

void print_diagonal(int n)
{
	int i = 0; /*the current line*/
	int k = 0; /*number of spaces*/

	if (n > 0)
	{
		while (i < n) /*for as long as i is less than n, print '\' on a new line*/
		{
			k = 0;

			while (k < i)
			{
				_putchar(' ');
				k++;
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
