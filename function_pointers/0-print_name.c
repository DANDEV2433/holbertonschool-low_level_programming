#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - print name
 * @name: pointer string
 * @f: pointer function for prints name
 * description: write a function that prints a name
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;
	f(name);
}
