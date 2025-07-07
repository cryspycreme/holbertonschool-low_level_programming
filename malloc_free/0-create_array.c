#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of characters
 *
 * @size: the size of the array
 * @c: the character to be passed in
 * Return: pointer to the array, or NULL if failed
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;
	
	/*return null is size is 0*/
	if (size == 0)
	{
		return (NULL);
	}

	/*allocate size for array*/
	arr = malloc(sizeof(char) * 98);

	/*create array*/

	i = 0;

	while (i <= size)
	{
		arr[i] = c;
		i++;
	}

	/*returns pointer to array*/
	return (arr);
}
