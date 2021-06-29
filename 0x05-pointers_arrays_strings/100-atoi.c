#include "holberton.h"

/**
 *_atoi - convert a string to an integer.
 *@s: string to be converted
 *
 *Return: integer
 */

int _atoi(char *s)
{
	int i = 0, j = 0, output = 0, sign = 1;

	/* Working with the sign */
	while ((s[j] < '0' || s[j] > '9') && (s[j] != '\0')) /*not number*/
	{
		if (s[j] == '-')
			sign = sign * -1;
		j++;
	}

	i = j; /* Saving the loop position */

	while ((s[i] >= '0') && (s[i] <= '9'))/*output depends of itself*/
	{
		output = 10 * output + (s[i] - '0') * sign;
		i++;
	}
	return (output);
}
