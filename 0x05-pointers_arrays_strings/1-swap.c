#include "holberton.h"

/**
 *swap_int - change values
 *@a: input pointer
 *@b: input pointer
 *Return: Not return
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
