#include "holberton.h"

/**
 **_strcat - append two strings
 *@dest: string that get the operation
 *@src: String to copy
 *Return: A pointer
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	src[j] = '\0';
	return (dest);
}
