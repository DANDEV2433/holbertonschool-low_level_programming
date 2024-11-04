#include "main.h"
/**
* *_strchr - check the code
* @s: string
* @c: the first occurrence of the character c in the string
* description: Write a function that locates a character in a string
* Return: s
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	return (s);
	s++;
	}
	if (*s == c)
	{
	return (s);
	}
	return (0);
}
