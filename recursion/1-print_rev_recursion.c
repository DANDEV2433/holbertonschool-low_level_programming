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
	int lgt = 0;
	int i;

	while (s[lgt] != '\0')
	{
	lgt++;
	}
	for (i = lgt - 1; i >= 0; i--)
	{
	_putchar(s[i]);
	}
}
