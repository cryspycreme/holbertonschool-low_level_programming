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
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * (height));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	i = 0;

	while (i < height)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			while (i >= 0)
			{
				free(arr[i]);
				i--;
			}
			free(arr);

			return (NULL);
		}

		j = 0;

		while (j < width)
		{
			arr[i][j] = 0;
			j++;
		}
	i++;
	}
return (arr);
}
