#include <stdio.h>
#include "main.h"
/**
 * more_numbers - check the code
 * description: a function that prints 10 times the numbers, from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
int i = 0, j;
for (j = 0; j < 10; j++)
{
for (i = 0; i <= 14; i++)
{
_putchar(i / 10 + '0');
}
{
_putchar(i % 10 + 'o');
}
_putchar('\n');
}
}
