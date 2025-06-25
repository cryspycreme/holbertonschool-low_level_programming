#include "main.h"
#include <stdio.h>

/**
* _strlen- returns the length of a string
*
* @s: pointer to the value stored at address s
* Return: integer
*/

int _strlen(char *s)
{
	int lngth = 0;

	while (*s != '\0')
	{
		s++;
		lngth++;
	}
	return (lngth);
}
