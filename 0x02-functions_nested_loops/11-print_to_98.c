#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer number
 *
 * Return: print
 */

void print_to_98(int n)
{
int i;

if (n < 98)
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
}
else if (n > 98)
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
}
else
{
printf("%d", n);
}
printf("\n");
}
