#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - check
 * description:  returns a pointer to a newly allocated space in memory
 * @str: the string to be duplicated
 * Return: s
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0;
	int lgr = 0;

	if (str == NULL)
	{
	return (NULL);
	}
	while (str[lgr] != '\0')
	{
	lgr++;
	}
	s = malloc((lgr + 1) * sizeof(char));
	if (s == NULL)
	{
	return (NULL);
	}
	for (i = 0; i <= lgr; i++)
	{
	s[i] = str[i];
	}
	return (s);
}
