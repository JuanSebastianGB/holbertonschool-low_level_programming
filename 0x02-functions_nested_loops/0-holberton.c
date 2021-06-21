#include "holberton.h"

/**
 * main - prints Holberton
 *
 * Description: prints
 *
 * Return: 0 (Success)
 */

int main(void)
{
char word[9] = "Holberton";
int aux = 0;
do {
_putchar(word[aux]);
aux++;
} while (aux < 9);
_putchar(10); /* \n */
return (0);
}
