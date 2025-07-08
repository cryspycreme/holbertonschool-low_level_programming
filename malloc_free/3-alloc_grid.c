#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid- returns a pointer to a 2D array of int
 *
 * @width: no. columns in array
 * @height: no. rows in array
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	/*allocate memory for row pointers (height)*/
	arr = malloc(sizeof(int *) * (height));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	/*for each row, allocate memory for the columns*/
	i = 0;

	while (i < height)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			free(arr[i]);
			return (NULL);
		}
		i++;
	}
	/*create array*/
	if (arr == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (j < height)
	{
		k = 0;
		while (k < width)
		{
			arr[i] = 0;
			k++;
		}
		j++;
	}
	return (arr);
}
