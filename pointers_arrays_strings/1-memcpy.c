#include "main.h"

/**
*_memcpy - copies memory area
*
* @dest: pointer to dest location which stores a string
* @src: pointer to src location which stores a string
* @n: no. bytes to be copied
* Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
