#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees 2 dimensional greed created by alloc_grid function
 * @grid: grid to free
 * @height: height.
 *
 *Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height < 0)
		return;
	while (grid[i])
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
