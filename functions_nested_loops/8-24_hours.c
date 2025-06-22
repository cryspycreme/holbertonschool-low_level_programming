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
	int hr = 0, min = 0;

	while (hr < 24)
	{
		min = 0;

		while (min < 60)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		hr++;
	}
}
