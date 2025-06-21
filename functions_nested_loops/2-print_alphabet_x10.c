#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times consecutively
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		char ch = 97;

		while (ch <= 122)
		{
		_putchar(ch);
		ch++;
		}
		i++;
		_putchar('\n');
	}
}
