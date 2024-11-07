#include "main.h"
/**
* _sqrt_recursion - check the code
* @n: number
* description: function that returns the natural square root of a number
* Return: 0
*/
int _sqrt_recursion(int n)
{
	int sqr = 0;

	if (n < 0)
	return (-1);
	else if (n == 1)
	return (1);
	else if (sqr * sqr == n)
	sqr++;
	return (sqr);
	return (sqr * _sqrt_recursion(n - 1));
}
