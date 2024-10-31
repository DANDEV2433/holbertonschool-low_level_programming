#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* print_rev - check the code
* @s: Write a function that prints a string, in reverse, followed by a new line
* Return: void
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	i++;
	}
	while (i > 0)
	{
	i--;
	write(1, &s[i], 1);
	}
	write(1, "\n", 1);
}
