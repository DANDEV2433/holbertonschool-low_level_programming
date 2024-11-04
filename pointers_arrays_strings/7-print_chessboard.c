#include "main.h"
#include <stdio.h>
/**
* print_chessboard - check the code
* @a: an array 8x8
* description: Write a function that prints the chessboard.
* Return: void
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
	for (j = 0; j < 8; j++)
	{
	putchar(a[i][j]);
	}
	putchar('\n');
	}
}
