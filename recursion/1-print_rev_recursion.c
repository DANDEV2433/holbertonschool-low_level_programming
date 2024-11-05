#include "main.h"
#include <stdio.h>
/**
* _print_rev_recursion - check the code
* @s:
* description: Write a function that prints a string in reverse
* Return: void
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	putchar(*s);
	_puts_recursion(s + 1);
	}
	else if (*s == '\0')
	{
	putchar('\n');
	}
}
