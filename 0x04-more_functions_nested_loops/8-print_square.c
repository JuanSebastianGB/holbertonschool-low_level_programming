#include <stdio.h>
#include "holberton.h"

/**
 * print_square - print squares
 * @size: is the size of the square
 *
 * Return: print
 *
 */

void print_square(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
