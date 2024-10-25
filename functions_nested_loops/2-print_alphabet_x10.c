#include "main.h"
/**
 * void print_alphabet_x10(void); - check the code.
 * @ch: The character to print
 * Return: Always 0.
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
