#include "main.h"
#include <unistd.h>
/**
 * print_numbers - Write a function that prints the numbers
 * description: prints the numbers,from 0 to 9,followed by a new line
 * Return: void
 */
void print_numbers(void)
{
char ch = '0';
	while (ch <= '9')
	{
		write(1, &ch, 1);
		ch++;
	}
	write(1, "\n", 1);
}
