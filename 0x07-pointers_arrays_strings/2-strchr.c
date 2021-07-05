#include <stdio.h>
#include "holberton.h"

/**
 * *_strchr - function that locates a character in a string.
 *@s: string in which one we are going to search
 *@c: char to be shearch
 *
 *Return: char pointer to the first ocurrence of c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	return (0);
}
