#include <stdio.h>
#include "holberton.h"

/**
 * print_number - print integer
 * @n: Integer to be printed
 *
 * Return: print
 *
 */

void print_number(int n)
{
int count = 0, aux = n;
while (aux != 0)
{
aux = aux / 10;
count++;
}
if (n < 0)
{
_putchar('-');
_putchar(-(n / 10) + '0');
_putchar(-(n % 10) + '0');
}
if (count == 2 && n > 0)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
if (count == 3 && n > 0)
{
_putchar((n / 100) + '0');
_putchar((n / 100) % 10 + '0');
_putchar((n % 10) + '0');
}
if (count == 4 && n > 0)
{
_putchar((n / 1000) + '0');
_putchar((n / 100) % 10 + '0');
_putchar((n / 10) % 10 + '0');
_putchar(n % 10 + '0');
}
if (n == 0)
{
_putchar(0 + '0');
}
}
