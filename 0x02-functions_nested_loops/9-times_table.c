#include "holberton.h"

/**
 * times_table -  Prints the 9 time table
 *
 *
 * Return: Print
 */

void times_table(void)
{
int y, x, xy;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
xy = x * y; /* This is the pattern */
if (xy < 10)
{
_putchar(xy + '0');
if (y < 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
else
{
_putchar(xy / 10 + '0'); /* result is int part (first digit) */
_putchar(xy % 10 + '0'); /* result is second digit */
if (y < 9)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
}
