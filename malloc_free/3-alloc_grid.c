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
int **alloc_grid(int width, int height);
{
	int **grid;
	int i;
	int j;

	if (width <= 0)
	return (0);
	if (height <= 0)
	return (0);



	for( a = 0; a < 0; a++)
	for( b = 0; b < 0; b++°
	grid = malloc((	width[a] + height[b] + 1) * sizeof(int));
	if (grid == NULL)
	{
	return (NULL);
	}
	return (grid);
}
