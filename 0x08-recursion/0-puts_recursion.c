#include <stdio.h>
#include "holberton.h"
/**
 * _puts_recursion - function that prints a string, followed by a new line.
 *@s: Char to print
 *Return: print
 */

void _puts_recursion(char *s)
{
	if (!*s)/* End function */
	{
		_putchar('\n');/* new line required*/
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
