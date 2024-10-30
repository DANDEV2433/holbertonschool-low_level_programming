#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* _strlen - check the code
* @s: Write a function that returns the length of a string
* Return: i
*/
int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
	i++;
	}
	return (i);
}
