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
for (int i = 0; str[i] != '\0'; i++)
{
write(1, &str[i], 1);
}
write(1, "\n", 1);
}
