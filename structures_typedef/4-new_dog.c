#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * dog_t *new_dog - check
 * @name: char
 * @age: float
 * @owner: char
 * description: function that creates a new dog
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
	return (NULL);

	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
	{
	free(d);
	return (NULL);
	}
	strcpy(d->name, name);

	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
	{
	free(d);
	return (NULL);
	}
	strcpy(d->owner, owner);

	d->age = age;

	return (d);
}
