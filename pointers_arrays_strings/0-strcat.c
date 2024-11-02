#include "main.h"
/**
* *_strcat - concatenates two strings
* @dest: destination string
* @src: the string source add
* description: Write a function that concatenates two strings
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
	dest++;
	}
	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	*dest = '\0';

	return (dest);
}
