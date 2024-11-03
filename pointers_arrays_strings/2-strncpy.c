#include "main.h"
#include <stddef.h>
#include <string.h>
/**
* *_strncpy - check the code
* @dest: destination string
* @src: the string source add
* @n: number of bytes to concatenate
* description: Write a function that copies a string.
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
	dest[i] = src[i];
	}
	for ( ; i < n ; i++)
	{
	dest[i] = '\0';
	}
	return (dest);
}
