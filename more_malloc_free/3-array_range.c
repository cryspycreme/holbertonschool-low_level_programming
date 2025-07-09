#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_range- creates an array of integers
*
* @min: minimum value to be incl. in array
* @max: max value to be incl. in array
* Return: pointer to new array
*/

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);

	i = 0;

	while (i < (max - min + 1))
	{
		array[i] = i + min;
		i++;
	}
return (array);
}
