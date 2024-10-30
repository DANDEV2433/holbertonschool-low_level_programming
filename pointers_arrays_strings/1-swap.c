#include <stdio.h>
#include "main.h"
/**
* swap_int - check the code
* @a: Write a function that swaps the values of two integers
* @b: Write a function that swaps the values of two integers
* Return: void
*/
void swap_int(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}
