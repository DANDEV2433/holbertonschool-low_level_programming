#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - check the code
 * description: function that allocates memory for an array
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	return (NULL);

	ptr = calloc(nmemb, size);
	if (ptr == NULL)
	return (NULL);

	return (ptr);
}
