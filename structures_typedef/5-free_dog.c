#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that free dogs.
 * description: Write a function that frees dogs
 * @d: pointeur
 * Return: struct dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	return;
	free(d->name);
	free(d->owner);
	free(d);
}
