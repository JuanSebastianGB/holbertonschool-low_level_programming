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
int k;
int y = 50;

i = 48;
while (i <= 55)
{ /*Start of while */

for (j = z ; j <= 56; j++)
{ /*Start of j for*/
for (k = y; k <= 57; k++)
{ /*star of k for*/
putchar(i);
putchar(j);
putchar(k);
if (i != 55  &&  z != 56  && y != 57)
{
putchar(44);
putchar(32);
}
} /*End of k for*/
} /*End of j for*/
i++;
z++;
y++;
} /*End of while*/
putchar(10);
return (0);
}
