#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize struct dog
 * @d: pointer to dog
 * @name: char
 * @age: float
 * @owner: char
 * description: Write a function that initialize a variable of type struct dog
 * Return: pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	return;
	d ->name = name;
	d ->age = age;
	d ->owner = owner;
}
