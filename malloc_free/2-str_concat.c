#include "main.h"
#include <stdlib.h>

/**
 * str_concat- concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new space in memory containing concat string, or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	concat = malloc(sizeof(char) * (i + j + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	else
	{
		while (s1[k] != '\0')
		{
			concat[k] = s1[k];
			k++;
		}
		while (s2[l] != '\0')
		{
			concat[k + l] = s2[l];
			l++;
		}
	concat[k + l] = '\0';
		return (concat);
	}
}
