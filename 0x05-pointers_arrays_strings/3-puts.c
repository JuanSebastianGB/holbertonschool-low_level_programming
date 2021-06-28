#include "holberton.h"

/**
 *_puts - Prints a string followed by a new line
 *@str: string to print
 *
 *Return: nothing
 */

void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(*(str + i));
i++;
}
_putchar('\n');
}
