#include "main.h"

/**
* puts_half - prints second half of a string
*
* @str: character pointer that points to location storing a string
* Return: void
*/

void puts_half(char *str)
{
	int i;
	int n;
	int d;
	int l_o_string;

	for (l_o_string = 0; str[l_o_string] != '\0'; l_o_string++)
	{

	}

	n = (l_o_string + 1) / 2; /*if no. characters is odd*/
	d = (l_o_string) / 2; /*if no. character is even*/

	if (l_o_string % 2 != 0)
	{
		for (i = n; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = d; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

