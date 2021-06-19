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

char aux2;

for (aux2 = 48; aux2 <= 56; aux2++)
{
putchar(aux2);
putchar(',');
putchar(' ');
}
putchar(57);
putchar('$');
putchar('\n');
return (0);
}
