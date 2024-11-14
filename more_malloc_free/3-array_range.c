#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range - check the code
 * description: Write a function that creates an array of integers
 * @min: value min
 * @max: value max
 * Return: array
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
	return (NULL);
	size = max - min + 1;
	array = malloc(size * sizeof(int));
	if (array == NULL)
	return (NULL);
	for (i = 0; i < size; i++)
	array[i] = min + i;
	return (array);
}
