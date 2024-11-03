#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* *_strcmp - check the code
* @s1: first string
* @s2: second string
* description: Write a function that compares two strings
* Return: dest
*/
int _strcmp(char *s1, char *s2)
{

	while (*s1 == *s2)
	{
	if (*s1 == '\0')
	{
	return (0);
	}
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
