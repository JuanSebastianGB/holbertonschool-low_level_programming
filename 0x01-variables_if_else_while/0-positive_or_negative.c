#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Main function : print a msj depending on the input n
 * More here
 * return 0
 */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if (n > 0)
    {
      printf("is positive\n");
    } else if (n == 0)
    {
      printf("is zero\n");
    } else
    {
      printf("is negative\n");
    }
  return (0);
}
