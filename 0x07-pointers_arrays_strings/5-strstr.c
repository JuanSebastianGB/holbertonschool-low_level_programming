#include <stdio.h>
#include "holberton.h"

/**
 * *_strstr - finds the first occurrence of the substring needle in the string haystack
 *@s1: input string
 *@s2: input substring
 *
 *Return: char with origin in the coincidence
 */

char *_strstr(char *s1, char *s2)
{
	int i, j;

	for (i = 0; *(s1 + i);)
	{
		for (j = 0; *(s2 + j) == *(s1 + i + j);)
		{
			if (*(s2 + j) == *(s1 + i + j))
				j++;
			else
				break;
		}
		if (*(s2 + j))
			i++;
		else
			return (s1 + i);

	}
	return (NULL);
}
