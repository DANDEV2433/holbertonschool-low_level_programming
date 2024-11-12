#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - check
 * description: returns a pointer to a 2 dimensional array of integers
 * @width: width array
 * @height: height array
 * Return: grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int a;

	if (width <= 0)
	{
	return (NULL);
	}
	if (height <= 0)
	{
	return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
	return (NULL);
	}
	for (a = 0; a < height; a++)
	{
	grid[a] = malloc(width * sizeof(int));
	if (grid[a] == NULL)
	{
	free(grid);
	}
	return (grid);
	}
	return (0);
}
