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
	unsigned int i = 0;

	while (*s != '\0')
	{
	for (i = 0; i < accept; i++)
	{
	if (*s == accept)
	return (s);
	}
}
