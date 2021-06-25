#include <stdio.h>
#include "holberton.h"

/**
 * print_line - print lines
 * @n: is the number of times to be printed
 *
 * Return: print
 *
 */

void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
