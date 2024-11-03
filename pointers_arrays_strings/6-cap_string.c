#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* *cap_string - check the code
* @str: the string to convert
* description: function that capitalizes all words of a string
* Return: pointer to the converted string
*/
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;

	while (str[i] != '\0')
	{
	if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
	{
	str[i] -= 32;
	}
	capitalize_next = " \t\n,;.!?\"(){}";
	i++;
	}
	return (str);
}
