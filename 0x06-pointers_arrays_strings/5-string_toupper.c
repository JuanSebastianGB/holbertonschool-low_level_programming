#include <stdio.h>
#include "holberton.h"


/**
 * *string_toupper - change lower case for upper case
 *@n: Char to change
 *
 *Return: char changed
 */

char *string_toupper(char *n)
{
int i = 0;
while (*(n + i))
{
if (*(n + i) >= 'a' && *(n + i) <= 'z')
*(n + i) = *(n + i) - 32;
i++;
}
return (n);
}
