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
    char i;
    for (i = 'a'; i <= 'z'; i++)
    {
        putchar(i);
        if (i == 'z')
        {
            putchar('\n');
        }
    }
    return (0);
}
