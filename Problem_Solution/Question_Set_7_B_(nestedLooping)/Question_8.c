/* Traced in notebook */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, j;
  for (i = 0; i < 16; ++i)
  {
    for (j = 1; j < 200; j <<= 3)
      printf("i = %d , j = %d\n", i, j);
    puts("---------------------------------------");
  }
  exit(0);
}

/* OUTPUT :-
correct as traced

i = 0 , j = 1
i = 0 , j = 8
i = 0 , j = 64
---------------------------------------
i = 1 , j = 1
i = 1 , j = 8
i = 1 , j = 64
---------------------------------------
i = 2 , j = 1
i = 2 , j = 8
i = 2 , j = 64
---------------------------------------
i = 3 , j = 1
i = 3 , j = 8
i = 3 , j = 64
---------------------------------------
i = 4 , j = 1
i = 4 , j = 8
i = 4 , j = 64
---------------------------------------
i = 5 , j = 1
i = 5 , j = 8
i = 5 , j = 64
---------------------------------------
i = 6 , j = 1
i = 6 , j = 8
i = 6 , j = 64
---------------------------------------
i = 7 , j = 1
i = 7 , j = 8
i = 7 , j = 64
---------------------------------------
i = 8 , j = 1
i = 8 , j = 8
i = 8 , j = 64
---------------------------------------
i = 9 , j = 1
i = 9 , j = 8
i = 9 , j = 64
---------------------------------------
i = 10 , j = 1
i = 10 , j = 8
i = 10 , j = 64
---------------------------------------
i = 11 , j = 1
i = 11 , j = 8
i = 11 , j = 64
---------------------------------------
i = 12 , j = 1
i = 12 , j = 8
i = 12 , j = 64
---------------------------------------
i = 13 , j = 1
i = 13 , j = 8
i = 13 , j = 64
---------------------------------------
i = 14 , j = 1
i = 14 , j = 8
i = 14 , j = 64
---------------------------------------
i = 15 , j = 1
i = 15 , j = 8
i = 15 , j = 64
---------------------------------------
*/