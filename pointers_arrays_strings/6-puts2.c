#include "main.h"

/**
* puts2- prints every other character of a string
*
* @str: pointer that prints to a location which stores a string of characters
* Return: void
*/

void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
		}
		else
		{

		}
	}
	_putchar('\n');
}
