#include "main.h"
/**
* *_memset - check the code
* @s: memory area pointed to by s
* @b: constant byte b
* @n: first n bytes
* description: Write a function that fills memory with a constant byte
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
