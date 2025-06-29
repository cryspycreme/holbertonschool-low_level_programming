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

	i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		/*else
		{
			return (0);
		}*/
	i++;
	}
	return (0);
}
