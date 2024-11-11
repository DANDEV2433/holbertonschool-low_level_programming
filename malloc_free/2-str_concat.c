#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - check
 * description: oncatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: s
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0;
	int j = 0;
	int lgr1 = 0;
	int lgr2 = 0;

	if (s1 == NULL)
	s1 = " ";
	if (s2 == NULL)
	s2 = " ";
	while ((s1[lgr1]) != '\0')
	{
	lgr1++;
	}
	while ((s2[lgr2]) != '\0')
	{
	lgr2++;
	}
	s = malloc((lgr1 + lgr2 + 1) * sizeof(char));
	if (s == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < lgr1; i++)
	{
	s[i] = s1[i];
	}
	for (j = 0; j < lgr2; j++)
	{
	s[i + j] = s2[j];
	s[i + j] = '\0';
	}
	return (s);
}
