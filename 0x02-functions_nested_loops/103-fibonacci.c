#include <stdio.h>

/**
 * main - print fibonacci numbers sum of the even-valued terms
 *
 * Return: long int
 */

int main(void)
{
long int i = 0, j = 1, result, aux = 0, aux2 = 0;
while (aux < 20)
{
result = i + j;
if (result <= 4000000 && (result % 2) == 0)
{
aux2 = aux2 + result;
}
i = j; /* i assum j's before value */
j = result; /* j becomes the before result */
aux++;
}
printf("%li\n", aux2);
return (0);
}
