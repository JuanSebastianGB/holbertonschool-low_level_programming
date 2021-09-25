#include "holberton.h"

/**
 * _islower - function to identify is lower case
 * @c: input
 *
 * Return: 1 if lowercase and 0 anything else
 */

int _islower(int c)
{
	int i, aux = 0;
	for (i = 97; i <= 122; i++)
	{
		if (i == c)
		{
			aux++;
		}
	}
	if (aux > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
