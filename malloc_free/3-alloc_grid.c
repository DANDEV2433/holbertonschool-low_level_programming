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
	int i, j;

	if (width <= 0)
	return (NULL);
	if (height <= 0)
	return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	return (NULL);
	for (i = 0; i < height; i++)
	{
	grid[i] = malloc(width * sizeof(int));
	if (grid[i] == NULL)
	{
	for (j = 0; j < i; j++)
	free(grid[j]);
	free(grid);
	return (NULL);
	}
	}
	return (grid);
}
