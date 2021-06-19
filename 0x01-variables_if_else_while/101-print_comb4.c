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
  int j;
  int z = 49;
  int k;
  int y = 50;

  i=48;
  while(i <= 55)
    {

      for (j = z ; j <= 56; j++)
	{
	  for (k = y; k <= 57; k++)
	    {
	      putchar(i);
	      putchar(j);
	      putchar(k);
  	      if (i != 55  &&  z != 56  && y != 57)
		{
		  putchar(44);
		  putchar(32);
		}
	    }
	  y++;
	}
      
      i++;
      z++;
      
    }
  putchar(10);
  return (0);
}
