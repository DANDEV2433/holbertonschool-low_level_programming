#include <stdio.h>
#include "main.h"
/**
* _puts - check the code
* @s: Write a function that returns the length of a string
* Return: void
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
	putchar(*str);
	str++;
	}
	putchar('\n');
}
