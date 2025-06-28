#include "main.h"
#include <stdio.h>

/**
* _strcmp- compares the value of 1st non-matching character between two strings
*
*@s1: pointer to first string
*@s2: pointer to second string
* Return: result (difference between s1 and s2)
*/

int _strcmp(char *s1, char *s2)
{
	int i;
	int result;

	i = 0;

	if (s1[i] == s2[i])
	{
		result = 0;
	}
	else
	{
		result = (s1[i] - s2[i]);
	}
	return (result);
}
