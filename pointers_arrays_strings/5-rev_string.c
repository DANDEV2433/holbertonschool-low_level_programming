#include "main.h"
/**
* rev_string - check the code
* @s: Write a function that reverses a string
* Return: void
*/
void rev_string(char *s)
{
	int start = 0;
	int end = 0;
	char temp;

	while (s[end] != '\0')
	{
	end++;
	}
	end--;
	while (start < end)
	{
	temp = s[start];
	s[start] = s[end];
	s[end] = temp;
	start++;
	end--;
	}
}
