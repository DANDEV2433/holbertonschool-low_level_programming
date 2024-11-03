#include "main.h"
#include <stddef.h>
#include <string.h>
/**
* *_strncat - concatenates two strings
* @dest: destination string
* @src: the string source add
* @n: number of bytes to concatenate
* description: Write a function that concatenates two strings
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
	dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
