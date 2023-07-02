#include "main.h"

/**
 *alloc_grid - function to allocate memory
 *@width: the rows
 *@height:the column
 *Return: return grid to the main
 */

int **alloc_grid(int width, int height)
{
	int j, k;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);
	for (j = 0; j < height; j++)
	{
		grid[j] = malloc(width * sizeof(int));
		if (grid[j] == NULL)
		{
			for (k = 0; k < j; k++)
				free(grid[k]);
			free(grid);
			return (NULL);
		}
	for (k = 0; k < width; k++)
		grid[j][k] = 0;
	}
	return (grid);
}
