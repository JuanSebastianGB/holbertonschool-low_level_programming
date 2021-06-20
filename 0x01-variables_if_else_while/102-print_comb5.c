
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 48;
int j = 48;
int k = i;
int l = 49;
while (i <= 57) /* First digit*/
{
while (j <= 57) /* Second digit */
{
while (k <= 57) /* Third digit*/
{
while (l <= 57) /* Fourth digit*/
{
if (!(i == k && j == l)) /* Deleting case when repeat pairs 1 and 2*/
{
putchar(i);
putchar(j);
putchar(32);
putchar(k);
putchar(l);
if (!(i == 57 && j == 56 && k == 57 && l == 57))
{ putchar(44); }
l++;
}
} /*End loop of fourth digit*/
if (l == 58 && k == 57)
{ l = j + 2; }
else
{
l = 49; /* min value by default is 49 */
} /*End if*/
k++;
} /*End loop of third digit*/
k = i; /* Min value of third digit is equal i*/
j++;
} /*End loop of second digit */
i++;
j = 48; /* Min value of second digit is 1 */
} /*End loop of first digit*/
putchar('\n');
return (0);
}
