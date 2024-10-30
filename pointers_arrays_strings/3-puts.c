#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* _puts - check the code
* @str: Write a function that returns the length of a string
* Return: void
*/
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
