#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments
 * @*: 
 * description: function that prints anything
 * Return: 
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *str;
	unsigned int i;
	int len;
	char *separator;

	va_start(ap, format);
	while (i = 0, i < format)
	i++;
	while (len = 0, len < format)
	len++;
	
	if (separator != NULL && i < n - 1)
	{
	printf("%s", separator);
	}
	if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
	{
	if (format[i] == 'c')
	printf("%c", va_arg(ap, int));
	else if (format[i] == 'i')
	printf("%d", va_arg(ap, int));
	else if (format[i] == 'f')
	printf("%f", va_arg(ap, double));
	else if (format[i] == 's')
	{
	str = va_arg(ap, char*);
	if (str == NULL)
        str = "(nil)";
	printf("%s", str);
	}
	va_end(ap);
	printf("\n");
	}
}
