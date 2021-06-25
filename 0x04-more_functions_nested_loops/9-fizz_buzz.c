#include <stdio.h>

/**
 * main - print fuzz logic
 *
 *
 * Return: always 0
 *
 */

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
{
printf("Fizz");
}
if (i % 5 == 0)
{
printf("Buzz");
}
if (i % 3 != 0 && i % 5 != 0)
{
printf("%i", i);
}
if (i <= 99)
{
printf(" ");
}
}
putchar('\n');
return (0);
}
