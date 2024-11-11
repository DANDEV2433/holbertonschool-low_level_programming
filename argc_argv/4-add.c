#include <stdio.h>
#include <stdlib.h>
/**
 * main - name program
 * @argc: number of arguments int
 * @argv: array of arguments char
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int i, j;


	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}
	if (argc == 0)
	{
	printf("Error\n");
	return (1);
	}
	for (i = 1; i < argc; i++)
	for (j = 0; argv[i][j] != '\0'; j++)
	{
	result += atoi(argv[i]);
	printf("%d\n", result);
	}
	return (0);
}
