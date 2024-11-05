#include "main.h"
#include <stdio.h>
/**
* _print_rev_recursion - check the code
* @s: a string caracter
* description: Write a function that prints a string in reverse
* Return: void
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
