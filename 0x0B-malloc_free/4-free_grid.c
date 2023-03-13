#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free the grid.
 * @grid: 2 arrays of integers.
 * @height: height.
 *
 * Return: grid
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
