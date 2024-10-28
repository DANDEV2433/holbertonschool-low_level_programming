#include "main.h"
#include <stdio.h>
/**
 *  print_most_numbers - a function that prints the numbers, from 0 to 9, followed by a new line
 *  description: prints the numbers, from 0 to 9 and not print 2 and 4
 *  Return: void
 */
void print_most_numbers(void)
{
char ch;

for (ch = '0'; ch <= '9'; ch++)
{	
if (ch != '2' && ch != '4')
{
putchar(ch);
}
putchar('\n');
}
}
