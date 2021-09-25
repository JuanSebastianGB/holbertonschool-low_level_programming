#include "holberton.h"

/**
 **_strncat - append two strings
 *@dest: string that get the operation
 *@src: String to copy
 *@n: max char allowed from src
 *Return: A pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	while (src[j] && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);
}
