#include "main.h"

/**
* more_numbers - prints the numbers 0 to 14, ten times
*
* Return: void
*/

void more_numbers(void)
{
	int i = 1, k;

	while (i <= 10)
	{
		k = 0;

		while (k <= 14)
		{
			if (k >= 10)
			{
				_putchar((k / 10) + '0'); /*prints only if k >= 10*/
			}
			_putchar((k % 10) + '0'); /*prints while k <= 14 and k < 10*/
			k = k + 1;
		}
		_putchar('\n');
		i = i + 1;
	}
}
