#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: string of caracter
 * @char *: pointer to const char 
 * description: function that prints anything
 * Return: 
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *s;
	int i= 0;
	char separator=",";

	va_start(ap, format);

	if (format != NULL)
	{
		while (format[i] != '\0')
		{
		i++;
		}
	
	if (separator != NULL && format[i] - 1)
		printf("%s", separator);
	if (format[i] == 'c')
		printf("%c", va_arg(ap, char));
	else if (format[i] == 'i')
		printf("%d", va_arg(ap, int));
	else if (format[i] == 'f')
		printf("%f", va_arg(ap, double));
	else if (format[i] == 's')
		printf("%c", va_arg(ap, char*));
	}
	va_end(ap);
	printf("\n");
	}
}
