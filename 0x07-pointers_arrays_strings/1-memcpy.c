#include <stdio.h>
#include "holberton.h"

/**
 * *_memcpy - function that copies memory area.
 *@dest: pointer to be changed
 *@src: porint to be copy
 *@n: n bytes to be copied
 *Return: char pointer copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	/* dest has already an offset of 50 */
	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
