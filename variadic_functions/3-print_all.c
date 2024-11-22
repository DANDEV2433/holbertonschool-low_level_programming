#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - print character
 * @arg: argument
 * @sep: character before string
 */
void print_char(va_list arg, char *sep)
{
	printf("%s%c", sep, va_arg(arg, int));
}

/**
 * print_int - print integer
 * @arg: argument
 * @sep: character before string
 */
void print_int(va_list arg, char *sep)
{
	printf("%s%d", sep, va_arg(arg, int));
}

/**
 * print_float - print float
 * @arg: argument
 * @sep: character before string
 */
void print_float(va_list arg, char *sep)
{
	printf("%s%f", sep, va_arg(arg, double));
}

/**
 * print_string - print string
 * @arg: argument
 * @sep: character before string
 */
void print_string(va_list arg, char *sep)
{
char *string = va_arg(arg, char*);

	if (string == NULL)
	string = "(nil)";
	{
	printf("%s%s", sep, string);
	}
}

/**
 * print_all - prints anything
 * @format: arguments list
 * description: function that prints anything
 */

void print_all(const char * const format, ...)
{
	print_t print_element[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
};
va_list arg;
int i = 0, j;
char *sep = "";

	va_start(arg, format);

	while (format && format[i])
	{
	j = 0;
	while (print_element[j].type != '\0')
	{
	if (format[i] == print_element[j].type)
	{
	print_element[j].f(arg, sep);
	sep = ", ";
	break;
	}
	j++;
	}
	i++;
	}

	va_end(arg);
	printf("\n");
}
