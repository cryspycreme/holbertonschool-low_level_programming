#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _calloc- allocates memory for an array and initialises memory to 0.
*
* @nmemb: no. of elements in array
* @size: byte size of each element
* Return: pointer to allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	return (NULL);

	/*allocate size in memory for array*/
	array = malloc(nmemb * size);
	if (array == NULL)
	{	
		return (NULL);
	}
	/*initialises everything in array to 0*/
	while (i < nmemb * size)
	{
		array[i] = 0;
		i++;
	}
return (array);
}
