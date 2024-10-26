#include "main.h"
#include <unistd.h>
/**
* print_sign - a function that prints the sign of a number
* @n: the number to check
* Return:1 if n is greater than zero,0 if n is zero,-1 if n is less than zero
**/
int print_sign(int n)
{
char sign;

if (n > 0)
{
sign = '+';
write(1, &sign, 1);
return (1);
}
else if (n == 0)
{
sign = '0';
write(1, &sign, 1);
return (0);
}
else
{
sign = '-';
write(1, &sign, 1);
return (-1);
}
}
