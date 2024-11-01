#include "main.h"
/**
* puts_half - check the code
* @str: function that prints half of a string, followed by a new line.
* Return: void
*/
void puts_half(char *str)
{
int a;
int i = 0;
{
	while (str[i] != '\0')
	{
	i ++;
	}
	a = (i + 1) / 2;

	while (str[a] != '\0')
	{
	_putchar(str[a]);
	a++;
	}
	_putchar('\n');
}
