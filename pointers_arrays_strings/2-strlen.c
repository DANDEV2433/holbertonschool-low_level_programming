#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* _strlen - check the code
* @s: Write a function that returns the length of a string
* Return: void
*/
int _strlen(char *s)
{
int len;

while (s[len] != '\0')
len++;

return (len);
}
