#include "main.h"
#include <stdio.h>
/**
* int print_sign- a function that prints the sign of a number
* @c: number to check
* Return: 1 if n is greater-1 if n is less
*/
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
return (-1);
}
}
