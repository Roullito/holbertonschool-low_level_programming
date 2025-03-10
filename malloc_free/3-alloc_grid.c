#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2D grid created by alloc_grid.
 * @grid: The 2D grid.
 * @height: The number of rows.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

/**
 * alloc_grid - Allocates a 2D grid of integers.
 * @width: Number of columns.
 * @height: Number of rows.
 *
 * Return: Pointer to the allocated grid, or NULL if failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{

	grid[i] = malloc(width * sizeof(int));

	if (grid[i] == NULL)
	{
		free_grid(grid, i);
		return (NULL);
	}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
