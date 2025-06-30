#include "main.h"
#include <stdio.h>

/**
* _strpbrk- searches a string for a any in a set of bytes
*
* @s: pointer to a string
* @accept: pointer to a string of characters to be accepted
* Return: pointer to byte in s that matches accept
*/

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		j++;
		}
	i++;
	}
	return (s);
}
