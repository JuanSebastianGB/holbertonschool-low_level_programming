#include "holberton.h"

/**
 *_strcpy - copy content of one pointer to another
 *@src: pointer destiny
 *@dest: pointer origin
 *Return: string copied
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
