#include "main.h"
#include <stdio.h>
/**
* factorial - check the code
* @n: number
* description: Write a function that returns the factorial of a given number
* Return: 0
*/
int factorial(int n)
{
	if (n < 0)
	return (-1);
	else if (n == 0 || n == 1)
	return (1);
	return ((n * factorial(n - 1)));
}
