#include "main.h"
/**
 *free_grid - function that free a two dimentional grid
 *			previously created by alloc_grid
 * @grid: the grid
 * @height: height of the grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
