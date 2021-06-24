#include <stdio.h>

/**
 * main - print fibonacci numbers
 *
 * Return: First 98 fibonacci numbers
 */

int main(void)
{
unsigned long i = 0, j = 1, result, aux = 0, limite = 1000000000;
unsigned long il, ir, jl, jr, r, l;
/* i is n-2  and j is n-1*/
while (aux < 91) /*Limit of numbers without carry */
{
result = i + j;
printf("%li, ", result);
i = j; /* i assum j's before value */
j = result; /* j becomes the before result */
aux++;
}
il = i / limite;
ir = i % limite;
jl = j / limite;
jr = j % limite;
for (aux = 92; aux <= 98; aux++)
{
r = ir + jr; /* right */
l = il + jl; /* left */
if (r > limite - 1) /* split the number and work with both sides */
{
l = l + 1; /* Carry */
r = r % limite;
}
printf("%lu%lu", l, r); /*Print (paste) the result*/
if (aux < 98)
{
printf(", ");
}
ir = jr;
jr = r;
il = jl;
jl = l;
}
printf("\n");
return (0);
}
