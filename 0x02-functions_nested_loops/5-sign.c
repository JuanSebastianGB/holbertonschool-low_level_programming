#include "holberton.h"

/**
 * print_sign - identify if n is possitive, negative or 0
 * @n: input
 *
 * Return: 1 if possitive, 0 if zero and -1 if negative
 */

int print_sign(int n)
{
if (n < 0)
{
_putchar(45);
return (-1);
}
else if (n > 0)
{
_putchar(43);
return (1);
}
else
{
_putchar(48);
return (0);
}
}
