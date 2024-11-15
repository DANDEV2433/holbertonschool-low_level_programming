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
	int owner_lgr = 0;
	int name_lgr = 0;
	dog_t *d;

	while (name[name_lgr])
	name_lgr++;

	while (owner[owner_lgr])
	owner_lgr++;


	d = malloc(sizeof(dog_t));

	if (d == NULL)
	return (NULL);

	d->name = malloc(name_lgr + 1);
	if (d->name == NULL)
	{
	free(d);
	return (NULL);
	}
	strcpy(d->name, name);

	d->owner = malloc(owner_lgr + 1);
	if (d->owner == NULL)
	{
	free(d->name);
	free(d);
	return (NULL);
	}
	strcpy(d->owner, owner);

	d->age = age;

	return (d);
}
