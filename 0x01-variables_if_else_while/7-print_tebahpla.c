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
    char aux = 'z';

    while (aux >= 'a')
    {
        putchar(aux);
        if (aux == 'a')
        {
            putchar('\n');
        }
        aux--;
    }
    return (0);
}
