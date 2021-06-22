#include "holberton.h"

/**
 * jack_bauer - prints from 00:00 to 23:59
 *
 *
 * Return: Print
 */

void jack_bauer(void)
{
int i = '0', j = '0', k = '0', l, aux = 0;
while (i <= '2')
{
while (j <= '9')
{
while
(k <= '5')
{
for (l = '0'; l <= '9'; l++)
{
if (aux == 0)
{
_putchar(i);
_putchar(j);
_putchar(':');
_putchar(k);
_putchar(l);
_putchar(10);
}
if (i == '2' && j == '3' && k == '5' && l == '9')
{
aux++;
}
}
k++;
l = '0';
}
j++;
k = '0';
l = '0';
}
k = '0';
l = '0';
j = '0';
i++;
}
}
