#include "main.h"
#include <stdio.h>

/**
* _puts - prints a string followed by a new line
*
* @str: pointer to a string
* Return: void
*/

void _puts(char *str)
{
	int i;

	for (i = 0; i < 63; i++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
