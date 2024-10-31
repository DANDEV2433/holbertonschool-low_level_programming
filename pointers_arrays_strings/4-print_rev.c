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
int i;
for (i = 0; s[i] != '\0'; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
