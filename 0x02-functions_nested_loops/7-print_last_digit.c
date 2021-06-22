#include "holberton.h"

/**
 * print_last_digit - Show in console the last number´s digit
 * @n: input
 *
 * Return: integer
 */

int print_last_digit(int n)
{
int last_digit = n % 10;
if (n < 0)
{
last_digit = last_digit * -1;
}
_putchar(last_digit + 48);
return (last_digit);
}
