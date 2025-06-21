#include "main.h"

/**
 * _islower - checks for lowercase characters
 *
 * Description: checks for lowercase characters
 * @c: c is the input ie. an alphabetical character
 *
 * Return: int - 1 if character is lowercase, 0 if else.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
