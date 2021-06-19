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
int j;
int z = 49;
for (i = 48; i <= 56; i++)
{

for (j = z ; j <= 57; j++)
{
if (i != j)
{
putchar(i);
putchar(j);
if (i != 56 && z != 57)
{
putchar(44);
putchar(32);
}
}
}
z++;
}
putchar(10);
return (0);
}
