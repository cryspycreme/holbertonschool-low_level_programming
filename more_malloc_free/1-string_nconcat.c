#include <stdlib.h>
#include "main.h"

/**
* string_nconcat- concatenates two strings
*
* @s1: string 1
* @s2: string 2
* @n: no. of bytes of s2 to be concat
* Return: pointer to new concat string in memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_string;
	unsigned int i, j, length = 0; /*loop count for s1*/

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
	if (n >= j)
		length = i + j + 1;
	else
		length = i + n + 1;
	concat_string = malloc(sizeof(char) * length);
	if (concat_string == NULL)
	{
		free(concat_string);
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		concat_string[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < n)
	{
		concat_string[i + j] = s2[j];
		j++;
	}
	concat_string[i + j] = '\0';
	return (concat_string);
}
