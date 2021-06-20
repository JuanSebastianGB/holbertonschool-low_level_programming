
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 48, j = i, k, l;

while (i <= 57) /* First digit*/
{
j = 48;
while (j <= 57) /* Second digit */
{
k = i;
l = j + 1;
while (k <= 57) /* Third digit*/
{
while (l <= 57) /* Fourth digit*/
{
putchar(i);
putchar(j);
putchar(32);
putchar(k);
putchar(l);
if (!(i == 57 && j == 56 && k == 57 && l == 57))
{
putchar(44);
putchar(32);
}
l++;
} /*End loop of fourth digit*/
l = 48;
k++;
} /*End loop of third digit*/
j++;
} /*End loop of second digit */
i++;
} /*End loop of first digit*/
putchar(10);
return (0);
}
