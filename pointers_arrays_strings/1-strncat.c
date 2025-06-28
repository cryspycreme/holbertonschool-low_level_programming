#include "main.h"

/**
* _strncat- concatenates two strings
*
* @dest: pointer to resulting string (Hello_)
* @src: pointer to source string (World!)
* @n: no. of bytes to be transferred
* Return: character string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;/*loop count*/
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;/*second loop count*/

	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
