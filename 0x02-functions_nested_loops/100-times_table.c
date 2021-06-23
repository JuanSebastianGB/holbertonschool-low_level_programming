#include "holberton.h"

/**
 * print_times_table -  Prints the n time table
 * @size: nsize input
 *
 * Return: Print
 */

void print_times_table(int size)
{
int y, x, xy;
if (size < 15 && size > 0)
{
for (x = 0; x <= size; x++)
{
for (y = 0; y <= size; y++)
{
xy = x * y; /* This is the pattern */
if (y == 0)
_putchar('0');
else if (xy < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(xy + '0');
}
else if (xy >= 10 && xy <= 99)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((xy / 10) + '0');
_putchar((xy % 10) + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(xy / 100 + '0');
_putchar((xy / 10) % 10 + '0');
_putchar((xy % 10) + '0');
}
}
_putchar('\n');
}
}
}
