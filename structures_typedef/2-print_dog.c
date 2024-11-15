#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints struc dog
 * @d: pointer to dog
 * description: Write a function that prints a struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	return;

	if (d->name == NULL)
	printf("Name: (nil)\n");
	else
	printf("Name: %s\n", d->name);
	printf("age: %.1f\n", d->age);
	if (d->owner == NULL)
	printf("Owner: (nil)\n");
	else
	printf("owner: %s\n", d->owner);
}
