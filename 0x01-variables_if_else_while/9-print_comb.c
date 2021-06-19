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

int aux2;

for (aux2 = 48; aux2 <= 57; aux2++)
{
putchar(aux2);
if (aux2 != 57)
{

putchar(44);
putchar(32);
}
}

putchar(10);
return (0);
}
