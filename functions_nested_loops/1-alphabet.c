#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * Return: always 0 (Success)
 */

void print_alphabet(void)
{
	char ch = 97;

	while (ch <= 122)
	{
		_putchar(ch);
		ch++;
	}
	_putchar ('\n');
}
