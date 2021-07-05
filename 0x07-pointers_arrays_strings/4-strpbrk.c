#include <stdio.h>
#include "holberton.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 *@s: string in which we are going to look at
 *@accept: chart that content all the coincidences
 *
 *Return: int with the number of coincidences
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return (NULL);
}
