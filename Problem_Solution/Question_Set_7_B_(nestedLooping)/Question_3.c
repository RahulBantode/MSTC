/*
  Traced in notebook
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, j;
  for (i = 0; i < 8; i += 3)
  {
    for (j = 0; j < 8; j += 2)
      printf("i = %d , j = %d\n", i, j);

    puts("----------------------------------");
  }
  exit(0);
}

/* OUTPUT :-
Correct as traced.

i = 0 , j = 0
i = 0 , j = 2
i = 0 , j = 4
i = 0 , j = 6
----------------------------------
i = 3 , j = 0
i = 3 , j = 2
i = 3 , j = 4
i = 3 , j = 6
----------------------------------
i = 6 , j = 0
i = 6 , j = 2
i = 6 , j = 4
i = 6 , j = 6
----------------------------------
*/