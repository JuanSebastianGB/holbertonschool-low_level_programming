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
    char i, j;
    for (i = 'a'; i <= 'z'; i++)
    {
        putchar(i);
    }
    for (j = 'A'; j <= 'Z'; j++)
    {
        putchar(j);
        if (j == 'Z')
        {
            putchar('\n');
        }
    }
    return (0);
}
