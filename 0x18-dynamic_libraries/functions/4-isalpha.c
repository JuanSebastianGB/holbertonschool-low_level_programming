#include "holberton.h"

/**
 * _isalpha - identify if is a letter, lowercase or uppercase
 * @c: input
 *
 * Return: 1 if is lowercase uppercase letter
 */

int _isalpha(int c)
{
	int i = 65, aux = 0;
	while (i <= 122)
	{
		if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122))
		{
			if (i == c)
			{
				aux++;
			}
		}
		i++;
	}
	if  (aux > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
