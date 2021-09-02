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
    for (i = 0; i <= 9; i++)
    {
        printf("%i", i);
        if (i == 9)
        {
            printf("\n");
        }
    }
    return (0);
}
