#include "main.h"
#include <stdio.h>

/**
* rev_string: reverses the string
*
* @s: pointer to a location that stores a string of characters
* Return: void
*/

void rev_string(char *s)
{
	/*temp array to store elements in reverse order*/
	int temp[10];

	int i; /*loop counter*/
	
	/*Copy elements from original array to temp in reverse order*/
	for (i = 0; i < 10; i++)
	{
		temp[i] = s[10 - i - 1];
	}

	/*Copy elements back to original array*/
	for (i = 0; i < 10; i++)
	{
		s[i] = temp[i];
	}
}
