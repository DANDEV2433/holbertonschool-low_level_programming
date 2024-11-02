#include "main.h"
/**
* _atoi - check the code
* @s: the string to converted
* description: Write a function that convert a string to an integer
* Return: (0)
*/
int _atoi(char *s)
{
	int i = 0;

	if (*s == '-')
	{
	i++;
	}
	else if (*s == '+')
	{
	i++;
	}
	while (*s >= '0' && *s <= '9')
	{
	i++;
	}
	return (0);
}
