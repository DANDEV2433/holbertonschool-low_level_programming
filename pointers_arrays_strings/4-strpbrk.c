#include "main.h"
/**
* *_strpbrk - check the code
* @s: the initial segment
* @accept: number bytes
* description: function that searches a string for any of a set of bytes
* Return: s
*/
char *_strpbrk(char *s, char *accept)
{
	char *a = accept;

	while (*s)
	{
	while (*a)
	{
	if (*s == *a)
	{
	return (s);
	}
	a++;
	}
	s++;
	}
	return (0);
}
