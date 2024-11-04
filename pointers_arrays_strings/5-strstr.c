#include "main.h"
/**
* *_strstr - check the code
* @haystack: the string haystack
* @needle: number substring needle
* description: Write a function that locates a substring
* Return: h
*/
char *_strstr(char *haystack, char *needle)
{

	char *h = haystack;
	char *n = needle;

	while (*h)
	{
	while (*n)
	{
	if (*h == *n)
	h++;
	n++;
	}
	if (*n == '\0')
	return (h);
	}
	return (0);
}
