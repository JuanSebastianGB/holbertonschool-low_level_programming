#include "holberton.h"

/**
 *print_rev - Prints a string in reverse mode
 *@s: string to print
 *
 *Return: nothing
 */

void print_rev(char *s)
{
int i = 0;

while (*(s + i))
i++; /* This finish with the length value */
i = i - 1; /* knowing that first postion is 0 and then last one is final - 1 */
while (i >= 0)
{
_putchar(s[i]);
i--;
}
}
