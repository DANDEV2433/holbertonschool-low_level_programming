#include "main.h"
/**
* puts2 - check the code
* @str: Write a function that prints every other character of a string
* Return: void
*/
void puts2(char *str)
{
int i = 0;
str = "Holberton!";

	while (str[i] != '\0')
	{
	i += 2;
	}
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
