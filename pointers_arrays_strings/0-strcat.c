#include "main.h"
/**
* *_strcat - check the code
* @dest: the buffer where the string will be copied
* @src: the string to copy
* description: Write a function that concatenates two strings
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';

	return (dest);
}
