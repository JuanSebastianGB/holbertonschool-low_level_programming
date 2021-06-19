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
int i;

for (i = 48; i <= 57 ; i++)
{
putchar(i);
if (i == 57)
{
putchar('\n');
}
}
return (0);
}
