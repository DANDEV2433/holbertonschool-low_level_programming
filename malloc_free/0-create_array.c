#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - check the code
 * description: array of chars, and initializes it with a specific char
 * @c: caracter array
 * @size: the size of the array
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	array[i] = c;
	}
	return (array);
}
