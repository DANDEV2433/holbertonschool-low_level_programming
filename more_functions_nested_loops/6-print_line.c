#include <stdio.h>
#include "main.h"
/**
 * print_line - check the code
 * @n: a function that draws a straight line in the terminal
 * Return: void
 */
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n ; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
