#include <stdio.h>
#include "holberton.h"

/**
 * print_diagonal - print diagonal lines
 * @n: is the number of times to be printed
 *
 * Return: print
 *
 */

void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (i == j)
{
_putchar(92);
}
else
{
_putchar(32);
}
}
_putchar('\n');
}
}
}
