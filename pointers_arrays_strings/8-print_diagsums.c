#include "main.h"
#include <stdio.h>
/**
* print_diagsums - check the code
* @a: matrix
* @size: size of array
* description: prints the sum of the two diagonals
* Return: void
*/
void print_diagsums(int *a, int size)
{
	int first_diag = 0;
	int second_diag = 0;
	int i;

	for (i = 0; i < size ; i++)
	{
	first_diag += a[i * size + i];
	second_diag += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", first_diag, second_diag);
}
