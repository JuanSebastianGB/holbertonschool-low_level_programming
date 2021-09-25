#include "holberton.h"

/**
 * _abs - find an always possitive number
 * @n: input
 *
 * Return: possitive number
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
