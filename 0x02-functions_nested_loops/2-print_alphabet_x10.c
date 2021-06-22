#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabet in lower case
 *
 * Description: prints
 *
 * Return: 0 (Success)
 */

void print_alphabet_x10(void)
{
char i;
int l;
for (l = 0; l <= 9; l++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar(10);
}
}
