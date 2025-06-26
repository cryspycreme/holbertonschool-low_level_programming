#include "main.h"
#include <stdio.h>

/**
* print_rev- print string in reverse
*
* @s: pointer that points to an address which stores a character/string
* Return: void
*/

void print_rev(char *s)
{
	int i;
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
		/*length increases until it hits the end of the string*/
		/*do not reset value of length as this will be used in next for loop*/
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
