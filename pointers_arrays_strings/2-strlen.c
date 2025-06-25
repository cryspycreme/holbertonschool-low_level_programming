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
	int i = 0; /* loop counter*/

	while (s[i] != '\0') /*a string is the same as an array of characters*/
	{
		i++;
	}
	return (i);
}
