#include <stdio.h>
/**
 *main - main function
 *
 *Return: Prints
 */

int main(void)
{
int i, aux = 0;
for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0) /* % is the condition for multiple */
{
aux = aux + i;
}
}
printf("%d\n", aux);
return (0);
}
