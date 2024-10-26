#include "main.h"
/**
 * _isalpha - a function that checks if a character is an alphabetic letter
 * @c: lowercase and uppercase
 * Return: 1 if c is lowercase and uppercase.
 */

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 67 && c <= 90))
{
return (1);
}
else
{
return (0);
}
return (0);
}
