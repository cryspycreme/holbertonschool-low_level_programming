#include "main.h"

/**
* _strcat- concatenates two strings
*
* @dest: pointer to resulting string
* @src: pointer to source string
* Return: character string
*/

char *_strcat(char *dest, char *src)
{
	int i, j;/*loop counter*/

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
