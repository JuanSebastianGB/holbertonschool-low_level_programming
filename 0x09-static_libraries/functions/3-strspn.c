#include <stdio.h>
#include "holberton.h"

/**
 * *_strspn - function that gets the length of a prefix substring.
 *@s: string in which we are going to look at
 *@accept: chart that content all the coincidences
 *
 *Return: int with the number of coincidences
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
				break;
		}
		/* 1 - If not found out of for, j = 0 */
		/* 2 - If break before, it is enough to move round all array? */
		/* 3 - All array = all the coincidences */
		if (!*(accept + j)) /* if take null char take all the coincidences */
			break;

	}
	return (i);
}
