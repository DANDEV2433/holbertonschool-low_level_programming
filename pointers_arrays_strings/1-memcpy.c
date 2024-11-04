#include "main.h"
/**
* *_memcpy - check the code
* @dest: memory area pointed to by s
* @src: constant byte b
* @n: first n bytes
* description: Write a function that copies memory area
* Return: s
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = *src;
	}
	return (dest);
}
