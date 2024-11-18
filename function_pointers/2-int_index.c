#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - execute fonction
 * @array: array
 * @size: size of the array
 * @cmp: pointer to the function
 * description: function that searches for an integer
 * Return: i
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	return (-1);
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]))
	return (i);
	}
	return (-1);
}
