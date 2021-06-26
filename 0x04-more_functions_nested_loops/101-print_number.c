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
char ch;
int val;
char ch2;

if (n < 0)
{
_putchar('-');
ch = ('0' - (n % 10));
n /= -10;
}
else
{
ch = ((n % 10) + '0');
n /= 10;
}
val = 0;
while (n > 0)
{
val = val * 10 + (n % 10);
n /= 10;
}
while (val > 0)
{
ch2 = ((val % 10) + '0');
_putchar (ch2);
val /= 10;
}
_putchar(ch);
}
