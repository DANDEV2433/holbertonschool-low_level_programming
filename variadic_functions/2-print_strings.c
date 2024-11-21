#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - numb of arguments
 * @n: number of string
 * @separator: string to be printed between the strings
 * description: function that prints strings, followed by a new line
 * Return: numb of arguments with separator
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
	str = va_arg(ap, char*);
	if (str == NULL)
	str = "(nil)";
	{
	printf("%s", str);
	}
	if (separator != NULL && i < n - 1)
	{
	printf("%s", separator);
	}
	}
	va_end(ap);
	printf("\n");
}
