#include <stdio.h>
#include "holberton.h"

/**
 * divisible - Funcntion that define if has divisible numbers
 * @n: integer that we need to verify if is prime
 * @start: start variable to verify if n if divisible
 * Return: 0 if not, 1 if is divisible
 */

int divisible(int n, int start)
{
	if (!(n % start))
		return (1);
	if (start > n)
		return (0);
	return (divisible(n, start + 1));
}

/**
 * is_prime_number - returns 1 if is a prime number, otherwise return 0.
 *@n: integer number to be evaluated
 *
 *Return: 1  or 0
 */

int is_prime_number(int n)
{

	return (divisible(n, 2));
}
