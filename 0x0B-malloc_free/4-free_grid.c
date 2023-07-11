#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a two dimensional array
 * @grid: array to gree
 * @height: number of rows to free
 *
 * Return: null
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
