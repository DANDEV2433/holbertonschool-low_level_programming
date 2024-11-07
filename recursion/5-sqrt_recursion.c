#include "main.h"
/**
* _sqrt_recursion - check the code
* @n: number
* description: returns the natural square root of a number
* Return: x or -1
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return (square(0, n));
}
/**
* square - check the code
* @n: number
* @x: square
* description: check the natural square root of a number
* Return: x or -1
*/

int square(int x, int n)
{
	if (x * x > n)
	{
	return (-1);
	}
	if (x * x == n)
	{
	return (x);
	}
	return (square(x + 1, n));
}
