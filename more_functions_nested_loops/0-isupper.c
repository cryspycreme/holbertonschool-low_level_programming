#include "main.h"
#include <stdio.h>

/**
*_isupper - checks for uppercase character
*
*@c: the character to be checked
*Return: 1 if character is an uppercase, 0 if else.
*/


int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
