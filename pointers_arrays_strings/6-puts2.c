#include "main.h"
/**
* puts2 - check the code
* @str: Write a function that prints every other character of a string
* Return: void
*/
void puts2(char *str)
{
	int len = 0;
	int i = 0;

	while (str[i] != '\0')
	{
	i++;
	}
	for (i = 0; i < len; i += 2)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
