#include <stdio.h>

/**
* _strcpy- copies the string pointed to by src
*
* @dest: pointer to destination where string will be copied
* @src: pointer to source where string is copied from
* Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i; /*loop counter*/

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
