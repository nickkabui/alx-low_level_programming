#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  allocates a grid, make space and free space
 * @width: takes in width of grid
 * @height: height of grid
 * Return: grid with freed space
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
	return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < height; i++)

	grid[i] = malloc(sizeof(int) * width);
	if (grid[i] == NULL)
	{
		for (i = i - 1; i >= 0; i--)
		{
		free(grid[i]);
	}
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
		grid[i][j] = 0;
	}
	}
	return (grid);
}
