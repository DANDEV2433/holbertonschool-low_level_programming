#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* *cap_string - check the code
* @str: the string to convert
* description: capitalizes all words of a string
* Return: str
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
	capitalize_next = (str[i] == ' ' || str[i] == ',' ||
	str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
	str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' ||
	str[i] == '}');
	i++;
	}
	return (str);
}
