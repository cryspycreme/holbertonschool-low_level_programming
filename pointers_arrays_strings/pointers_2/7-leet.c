#include "main.h"
#include <stdio.h>

/**
* leet - encodes a string into 1347
*
* @s: pointer to string
* Return: pointer to s
*/

char *leet(char *s)
{
	char chr_array[] = "aeotl";
	char num_array[] = {'4', '3', '0', '7', '1'};
	int i, j;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (chr_array[j] != '\0')
		{
			if (s[i] == chr_array[j] || s[i] == (chr_array[j] - 32))
			{
				s[i] = num_array[j];
			}
		j++;
		}
	i++;
	}
	return (s);
}
