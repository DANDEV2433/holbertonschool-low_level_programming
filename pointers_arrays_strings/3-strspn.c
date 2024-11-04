#include "main.h"
/**
* _strspn - check the code
* @s: the initial segment
* @accept: number bytes
* description: Write a function that gets the length of a prefix substring
* Return: s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int lt;
	unsigned int result = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (lt = 0; accept[lt] != '\0'; lt++)
	{
	if (s[i] == accept[lt])
	{
	result++;
	}
	}
	if (s[i] != accept[lt])
	return (0);
	}
	return (result);
}
