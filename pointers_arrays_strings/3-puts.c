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

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]); /*NOTE: you do not need to add an increment to str here (str++), as the location of string is implicitly increased by i*/
	}
	_putchar('\n');
}
