#include "main.h"
/**
* _pow_recursion - check the code
* @x: value
* @y: power
* description: returns the value of x raised to the power of y
* Return: 0
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	else if (x == 0)
	return (0);
	else
	return ((x * _pow_recursion(x, y - 1)));
}
