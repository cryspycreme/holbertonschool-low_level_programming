#include "main.h"
#include <stdlib.h>

/**
*free_grid - frees 2D grid previously created
*
*@grid: the array
*@height: height of the grid
*Return: void
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
