#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - numb of araguments
 * @n: numbers parameters
 * @separator: char separator
 * description: function that prints numbers
 * Return: numb of arguments with separator
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(ap, int));
	if (separator != NULL && i < n - 1)
	{
	printf("%s", separator);
	}
	}
	va_end(ap);
	printf("\n");
}
