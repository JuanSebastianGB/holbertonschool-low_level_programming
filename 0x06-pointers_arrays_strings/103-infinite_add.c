#include <stdio.h>
#include "holberton.h"


/**
 * *infinite_add - Function that add two numbers
 *@n1: number one
 *@n2: number two
 *@r: buffer the function uses to store the result
 *@size_r: buffer size
 *Return: char whith the sum result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, aux, temp1 = 0, temp2 = 0;
	/* aux is counter for buffer r */

	while (*(n1 + i)) /* Getting size of n1*/
		i++;
	while (*(n2 + j)) /* Getting size of n2*/
		j++;
	if (i == 0 || j == 0 || i >= size_r || j >= size_r)
		return (0);
	for (i = i - 1, j = j - 1, aux = 0; aux < size_r - 1; i--, j--, aux++)
	{

		if (i >= 0)
			temp1 = n1[i] + temp1 - '0';
		if (j >= 0)
			temp1 = n2[j] + temp1 - '0';
		if (temp2 == 0 && i < 0 && j < 0) /* sum finished */
			break; /* finishing for */
		temp1 = temp1 + temp2;
		r[aux] = (temp1 % 10) + '0';
		temp2 = temp1 / 10; /* saving + 1*/
		temp1 = 0;
	}
	r[aux] = '\0';
	if (i > 0 || j > 0 || temp2 > 0)/* buffer shorter than numbers  */
		return (0);
	/*Rotating back*/
	i = 0;
	aux = aux - 1;
	while (i < aux)
	{
		j = r[aux];
		r[aux] = r[i];
		r[i] = j;
		i++;
		aux--;
	}
	return (r);

}
