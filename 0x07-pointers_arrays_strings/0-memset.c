#include <stdio.h>
#include "holberton.h"

/**
 * *_memset - fills the first n bytes of the memory area pointed to by s
 *@s: pointer to fill
 *@b: constant byte
 *@n: n bytes to fill
 *Return: char pointer filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
