#include <stdio.h>
#include "holberton.h"

/**
 * aux_function - returns sqrt result
 * @n: integer to get de sqrt
 * @start: value to verify and which incerement
 * Return: sqrt result and - 1 if n doesn´t have.
 */
int aux_function(int n, int start)
{
	if (start * start == n)
		return (start);
	if (start * start > n) /* break condition */
		return (-1);
	return (aux_function(n, start + 1));
}


/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 *@n: integer to get the root
 *
 *Return: sqrt result in an integer
 */

int _sqrt_recursion(int n)
{
	/* I need to find 2 same numbers that mult = n */
	return (aux_function(n, 0));
}
