#include <stdio.h>
#include "holberton.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 *@x: integer base of the operation
 *@y: integer to be the power of
 *Return: The pow
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (!y)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
