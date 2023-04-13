#include "main.h"

/**
 * alloc_grid - funtion that returns a pointer to a 2 dimensional array
 * @width: the width of the vector
 * @height: the height
 * Return: grid
 */

int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
		return (NULL);
	int x, y;
	int **grid;

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		grid[x] = malloc((sizeof(int) * width));
		if (grid[x] == NULL)
		{
			for (y = 0; y < x; y++)
			{
				free(grid[y]);
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
