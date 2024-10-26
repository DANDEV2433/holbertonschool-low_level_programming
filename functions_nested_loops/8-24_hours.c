#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 *@
 * Description: This function prints every hour and minute of jack
 * Return: value void
 */
void jack_bauer(void)
int hour, minute;
{
for (int hour = 0; hour < 24; hour++)
{
for (int minute = 0; minute < 59; minute++)
putchar("%02d %02d\n", hour, minute);
}
