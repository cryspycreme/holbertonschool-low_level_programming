#include "main.h"

/**
 * _isalpha- main function.
 *
 * Description: checks for alphabetic character.
 *
 * @c: checks whether c falls into a certain character class.
 *
 * Return: 1 if alphabetic character, 0 if else.
 */

int _isalpha(int c)
{
	int spcl[] = {91, 92, 93, 94, 95, 96};

	if (c >= 65 && c <= 122 && c != spcl[0])
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
