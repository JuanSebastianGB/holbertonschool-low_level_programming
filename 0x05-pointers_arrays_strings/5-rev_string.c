#include "holberton.h"

/**
 *rev_string - Function that reverse an string
 *@s: string to print reverse
 *
 *Return: string reversed
 */

void rev_string(char *s)
{
	int i = 0, j = 0;
	char bu[20];

	while (*(s + i))
	{
		bu[i] = s[i];
		i++;
	}
	while (i - 1 >= 0)
	{
		*(s + j) = *(bu + i - 1);
		i--;
		j++;
	}



}
