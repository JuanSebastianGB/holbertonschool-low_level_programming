#include <stdio.h>
#include "holberton.h"
/**
 * _print_rev_recursion - function that prints a string, inverse
 *@s: Char to print
 *Return: print
 */

void _print_rev_recursion(char *s)
{
	if (!*s)/* End function */
	{
		_putchar('\n');/* new line required*/
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
