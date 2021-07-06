#include <stdio.h>
#include "holberton.h"

/**
 * set_string - sets the value of a pointer to a char.
 *@s: pointer of pointer
 *@to: size of arraypointer to
 *
 *Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
