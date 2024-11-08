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
	int a = 0;
	int b = 0;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	if (argc == 3)
	{
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	}
	return (0);
}
