#include "dog.h"
#include <stdio.h>
/**
 * dog_t *new_dog - new dog
 * @d: pointer to dog
 * @name: char
 * @age: float
 * @owner: char
 * description: Write a function that creates a new dog
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));
	if (d == NULL)
	return (NULL);

	typedef struct dog_t;
	d->name = name;
	d->age = age;
	d->owner = owner;
}new_dog;
