#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - check the code
 * description: function that concatenates two strings
 * @n: number bytes
 * @s1: string 1
 * @s2: string 2
 * Return: dest
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dest;
	unsigned int lgr1 = 0, lgr2 = 0, i, j;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while ((s1[lgr1]) != '\0')
	{
	lgr1++;
	}

	while ((s2[lgr2]) != '\0')
	{
	lgr2++;
	}

	if (n > lgr2)
	n = lgr2;

	dest = malloc((lgr1 + n + 1) * sizeof(char));
	if (dest == NULL)
	return (NULL);

	for (i = 0; i < lgr1; i++)
	dest[i] = s1[i];

	for (j = 0; j < n; j++, i++)
	dest[i] = s2[j];

	dest[i] = '\0';

	return (dest);
}
