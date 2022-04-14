/*
  Tracing done in notebook
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, j;
  for (i = 0; i < 8; i += 2)
    for (j = 0; j < 8; j += 1)
      printf("i = %d , j = %d\n", i, j);
  exit(0);
}

/* OUTPUT :-
Correct as traced

i = 0 , j = 0
i = 0 , j = 1
i = 0 , j = 2
i = 0 , j = 3
i = 0 , j = 4
i = 0 , j = 5
i = 0 , j = 6
i = 0 , j = 7
i = 2 , j = 0
i = 2 , j = 1
i = 2 , j = 2
i = 2 , j = 3
i = 2 , j = 4
i = 2 , j = 5
i = 2 , j = 6
i = 2 , j = 7
i = 4 , j = 0
i = 4 , j = 1
i = 4 , j = 2
i = 4 , j = 3
i = 4 , j = 4
i = 4 , j = 5
i = 4 , j = 6
i = 4 , j = 7
i = 6 , j = 0
i = 6 , j = 1
i = 6 , j = 2
i = 6 , j = 3
i = 6 , j = 4
i = 6 , j = 5
i = 6 , j = 6
i = 6 , j = 7

*/