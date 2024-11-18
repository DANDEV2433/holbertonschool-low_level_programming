#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - execute fonction
 * @array: array
 * @size: size of the array
 * @action: pointer function use
 * description: function given as a parameter on each element of an array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	return;
	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
