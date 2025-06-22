#include "main.h"
#include <stdio.h>

/**
* jack_bauer - prints time
*
* Description: prints every minute of the day in 24 hour format
*
* Return: void
*/

void jack_bauer(void)
{
	int hr, min;

	hr = 0;

	while (hr <= 23)
	{
		min = 0;
		while (min <= 59)
		{
			if (min < 10)
			{
				if (hr < 10)
				{
					_putchar('0');
					_putchar(hr);
					_putchar(':');
					_putchar('0');
					_putchar(min);
				}
				else
				{
					_putchar(hr);
					_putchar(':');
					_putchar('0');
					_putchar(min);
				}
			}
			else
			{
				if (hr < 10)
				{
					_putchar('0');
					_putchar(hr);
					_putchar(':');
					_putchar(min);
				}
				else
				{
					_putchar(hr);
					_putchar(':');
					_putchar(min);
				}
			}
			min++;
			_putchar('\n');
		}
		hr++;
	}
}
