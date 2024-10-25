#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Description: This function prints the letters from 'a' to 'z'
 * followed by a newline.
 */
void print_alphabet(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
