#include <stdio.h>

/**
 * main - print fibonacci numbers
 *
 * Return: First 50 fibonacci numbers
 */

int main(void)
{
long int i = 0, j = 1, result, aux = 0;
while (aux < 49)
{
result = i + j;
printf("%li, ", result);
i = j; /* i assum j's before value */
j = result; /* j becomes the before result */
aux++;
}
printf("%li\n", i + j);
return (0);
}
