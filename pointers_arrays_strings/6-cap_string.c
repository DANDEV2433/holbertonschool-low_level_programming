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
	int i;
	char tab[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
	if ((i == 0 || strchr(tab, str[i - 1])) && (str[i] >= 'a' && str[i] <= 'z'))
	{
	str[i] -= 32;
	}
	}
	return (str);
}