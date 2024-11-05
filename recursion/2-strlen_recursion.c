#include "main.h"
#include <stdio.h>
/**
* _strlen_recursion - check the code
* @s: a string caracter
* description: Write a function that returns the length of a string
* Return: 0
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	return (((1) + _strlen_recursion(s + 1)));
}
