#include "main.h"

/**
* more_numbers - prints the numbers 0 to 14, ten times
*
* Return: void
*/

void more_numbers(void)
{
	int i = 1, k; /* i = outer loop (ie. the rows) */

	while (i <= 10)
	{
		k = 0; /*k = inner loop (ie. the columns)*/

		while (k <= 14)
		{
			if (k > 9)
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			else
			{
				_putchar(k + '0');
			}
			k = k + 1;
		}
		_putchar('\n');
		i = i + 1;
	}
}
