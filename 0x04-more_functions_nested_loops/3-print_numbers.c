#include <stdio.h>
#include "holberton.h"

/**
 * print_numbers - multiplication between 2 numbers
 * @a: Integer to be evaluated
 * @b: Integer to be evaluated
 * Return: print
 *
 */


void print_numbers(void)
{
int i = '0';
while(i <= '9')
{
putchar(i);
i++;
}
putchar('\n');
}
