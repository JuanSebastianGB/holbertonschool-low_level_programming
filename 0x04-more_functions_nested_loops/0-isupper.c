#include <stdio.h>
#include "holberton.h"

/**
 * _isupper - Recognize whe the char is a upper letter
 * @c: Integer to be evaluated
 * Return: 1 if is uppercase
 *
 */


int _isupper(int c)
{
int i, aux = 0;
for (i = 65; i <= 90; i++)
{
if (c == i)
{
aux = 1;
}
}
if (aux == 0)
{
return (0);
}
else
{
return (1);
}
}
