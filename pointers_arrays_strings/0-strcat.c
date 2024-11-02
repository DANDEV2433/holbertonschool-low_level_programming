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
	char *ptr = dest;

	while (*ptr != '\0')
	{
	ptr++;
	}
	while (*src != '\0')
	{
	*ptr = *src;
	ptr++;
	src++;
	}
	*ptr = '\0';

	return (dest);
}
