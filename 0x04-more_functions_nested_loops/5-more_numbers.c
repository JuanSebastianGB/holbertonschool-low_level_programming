#include <stdio.h>
#include "holberton.h"

/**
 * more_numbers - print several times rows of rows
 *
 *
 * Return: print
 *
 */

void more_numbers(void)
{
int i, j;
for (i = 0; i <= 10; i++)
{
j = 0;
for (j = 0; j <= 14; j++)
{
if (j >= 10)
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
}
_putchar('\n');
}
}
