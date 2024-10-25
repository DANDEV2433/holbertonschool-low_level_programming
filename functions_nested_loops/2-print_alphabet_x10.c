#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @ch: The character to print 10 times
 *
 * Return: ch
 */
void print_alphabet_x10(void)
{
char ch;
int i;
for (i = 0; i < 10; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
