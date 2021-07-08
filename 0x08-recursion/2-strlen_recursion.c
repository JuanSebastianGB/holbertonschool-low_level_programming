#include <stdio.h>
#include "holberton.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 *@s: Char to analize
 *Return: integer with length
 */

int _strlen_recursion(char *s)
{
	if (!*s) /*Excluding condition*/
		return (0);
	/* +1 min expression*/
	/* The key is look the function like a number */
	return (_strlen_recursion(s + 1) + 1);

}
