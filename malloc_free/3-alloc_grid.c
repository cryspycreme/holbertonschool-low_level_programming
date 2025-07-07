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

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	/*allocate memory for row pointers (height)*/
	arr = malloc(sizeof(arr) * (height));

	/*for each row, allocate memory for the columns*/
	i = 0;

	while (i < height)
	{
		arr[i] = malloc(sizeof(arr) * width);
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
