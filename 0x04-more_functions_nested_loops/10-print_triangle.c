#include <stdio.h>
#include "holberton.h"

/**
 * print_triangle - print several times rows of rows
 * @size : Size of the tringle
 *
 * Return: print
 *
 */

void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
if (i + j <= size)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
}
