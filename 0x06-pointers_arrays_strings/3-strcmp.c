#include "holberton.h"

/**
 * *_strcmp - compare two strings
 *@s1: pointer 1
 *@s2: pointer 2
 *Return: An integer + - or 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) && *(s2 + i))
	{
		if (s1[i] != s2[i])
			break;
		i++;
	}
	return (s1[i] - s2[i]);
}
