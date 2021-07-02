#include "holberton.h"

/**
 * *_strncpy - copy string form src to dest
 *@dest: string that get the operation
 *@src: String to copy
 *@n: max char allowed from src
 *Return: A pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(src + i) && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
