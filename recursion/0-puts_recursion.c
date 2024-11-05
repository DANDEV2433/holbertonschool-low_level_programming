#include "main.h"
#include <stdio.h>
/**
* _puts_recursion - check the code
* @s: a string caracter
* description: Write a function that prints a string, followed by a new line
* Return: void
*/
void _puts_recursion(char *s)
{
	while (*s != '\0')
	s++;
	_puts_recursion(s + 1);
}
