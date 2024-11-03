#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* *string_toupper - check the code
* @str: the string to convert
* description: changes all lowercase letters of a string to uppercase
* Return: pointer to the converted string
*/
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
	str[i] = str[i] - 32;
	}
	i++;
	}
	return (str);
}
