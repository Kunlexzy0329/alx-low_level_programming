#include "main.h"

/**
 *free_grid- function to free an array
 *@grid: the array
 *@height: the rows
 *Return: grid to the main function
 */

void free_grid(int **grid, int height)
{
	int j;

	if (grid == NULL)
		return;
	for (j = 0; j < height; j++)
		free(grid[j]);
	free(grid);
}
