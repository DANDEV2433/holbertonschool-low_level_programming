#include "main.h"
/**
* _atoi - check the code
* @s:
* description: Write a function that convert a string to an integer
* Return: (0)
*/
int _atoi(char *s)
{
	int i;

	if (*s =='-')
	{
	s++;
	}
	else if (*s =='+')
	{
	s++;
	}
	while (*s >= '0' && *s <= '9')
	{
	s++;
	}
	for (i = 0; i <= -1 ; i++)
	return (i);
}
