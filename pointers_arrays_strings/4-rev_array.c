#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* reverse_array - check the code
* @a: array integer
* @n: elements in the array
* description: function that reverses the content of an array of integers
* Return: void
*/
void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
	tmp = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = tmp;
	}
}
