#include "main.h"
/**
* puts2 - check the code
* @str: Write a function that prints every other character of a string
* Return: void
*/
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');
}
