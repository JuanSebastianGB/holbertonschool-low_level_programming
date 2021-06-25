#include <stdio.h>
#include "holberton.h"

/**
 * _isdigit - Recognize whe the char is a upper letter
 * @c: Integer to be evaluated
 * Return: 1 if is a number between 0 and 9
 *
 */


int _isdigit(int c)
{
int i, aux = 0;
for (i = '0'; i <= '9' ; i++)
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
