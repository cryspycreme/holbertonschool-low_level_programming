#include "main.h"

/**
* _isdigit - checks whether the value passed is a digit
* @c: the integer to be checked
* Return: 1 if c is a digit, 0 if else.
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
