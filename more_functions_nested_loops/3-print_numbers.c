#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 *  print_numbers - a function that multiplies two integers
 *  Return: void
 */
void print_numbers(void)
{
char ch = 0;
	while (ch <= 9)
	{
		write(1, &ch, 1);
		ch++;
	}
	write(1, "\n", 1);
}
