#include <stdio.h>
/**
 * main - name program
 * @argc: number of arguments int
 * @argv: array of arguments char
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc - 1);
	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
