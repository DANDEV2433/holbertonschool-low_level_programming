#include <stdio.h>
#include <unistd.h>
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

for (i = 0; i < n ; i++)
{
_putchar('\\');
_putchar('\n)
}

for (j = 0; j < i ; j++)
{	
_putchar(' ');
}

else

_putchar('\n');
}
