#include <stdio.h>
#include "holberton.h"


/**
 * *cap_string - Function that capitalize
 *@n: Char to change
 *
 *Return: char changed
 */

char *cap_string(char *n)
{
	int i = 0, j, aux2 = 0, aux3 = 0;
	int aux[] = {10, 32, 9, 44, 59, 46, 33, 63, 34, 41, 42, 123, 125 };
	int size = sizeof(aux) / sizeof(int);

	while (*(n + i))
	{
		if (i > 0)
		{
			for (j = 0; j < size; j++)
			{
				if (*(n + i - 1) == aux[j])
					aux2++;
				if (*(n + i) != aux[j])
					aux3++;
			}
			if (*(n + i) >= 'a' && *(n + i) <= 'z' && aux2 > 0 && aux3 > 0)
				*(n + i) = *(n + i) - 32;
			aux2 = 0;
			aux3 = 0;
		}
		i++;
	}

	return (n);
}
