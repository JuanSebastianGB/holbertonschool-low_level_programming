#include "holberton.h"

/**
 * print_alphabet - prints alphabet in lower case
 *
 * Description: prints
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
  char i;
  for(i = 'a'; i <= 'z'; i++){
    _putchar(i);
  }
  _putchar(10);
}
