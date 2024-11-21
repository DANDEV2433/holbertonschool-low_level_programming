#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - check the code
 * @n: numbers 
 * description: function that returns the sum of all its parameters
 * Return: 
 */
int sum_them_all(const unsigned int n, ...)
{	
	va_liste ap;
	int i;
	int sum;

	va_start (ap, count);
	sum = 0;
	for (i = 0; i < n; i++)
	sum += va_arg (ap, int);
	va_end (ap);
}
