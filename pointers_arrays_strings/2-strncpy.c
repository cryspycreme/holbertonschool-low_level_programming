#include "main.h"
#include <stdio.h>

/**
* _strncpy- copies a string
*
* @src: pointer to source string
* @dest: pointer to dest string
* @n:number of characters to copy
* Return: string stored at destination pointer
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
