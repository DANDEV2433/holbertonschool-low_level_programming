#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print_element - associates type with function
 * @f: pointer to the function print element
 */
typedef struct print_element
{
	char type;
	void (*f)(va_list arg, char *sep);
}print_t;

#endif
