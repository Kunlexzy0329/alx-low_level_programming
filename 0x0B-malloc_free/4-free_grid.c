#include "main.h"

/**
 *free_grid - function to free the allocated space
 *@grid: grid to free
 *@height:the rows
 *Return: null
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
