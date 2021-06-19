#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char aux = 48;
char aux2;

while (aux <= 57)
{
putchar(aux);
aux++;
}
for (aux2 = 'a'; aux2 <= 'f'; aux2++)
{
putchar(aux2);
if (aux2 == 'f')
{
putchar('\n');
}
}
return (0);
}
