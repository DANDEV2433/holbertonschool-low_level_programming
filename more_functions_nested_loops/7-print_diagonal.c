#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - check the code
 * @n: write a function that draws a diagonal line on the terminal
 * Return: void
 */
void print_diagonal(int n)
{
int i;
int j;
if (n > 0)
{
for (i = 0; i < n ; i++)
_putchar(' ');
_putchar('\\');
}
{
for (j = 0; j < i ; j++)
print_diagonal(0);
print_diagonal(2);
print_diagonal(3);
print_diagonal(4);
}
_putchar('\n');
}
