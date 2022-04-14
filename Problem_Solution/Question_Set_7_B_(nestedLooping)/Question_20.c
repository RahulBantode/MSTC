// Traced in Notebook

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, j;
  for (i = 0; i < 8; ++i)
  {
    for (j = 0; j <= i; ++j)
      printf("i = %d , j = %d\n", i, j);
  }
  exit(0);
}

/* OUTPUT :-
Correct as traced.

i = 0 , j = 0
i = 1 , j = 0
i = 1 , j = 1
i = 2 , j = 0
i = 2 , j = 1
i = 2 , j = 2
i = 3 , j = 0
i = 3 , j = 1
i = 3 , j = 2
i = 3 , j = 3
i = 4 , j = 0
i = 4 , j = 1
i = 4 , j = 2
i = 4 , j = 3
i = 4 , j = 4
i = 5 , j = 0
i = 5 , j = 1
i = 5 , j = 2
i = 5 , j = 3
i = 5 , j = 4
i = 5 , j = 5
i = 6 , j = 0
i = 6 , j = 1
i = 6 , j = 2
i = 6 , j = 3
i = 6 , j = 4
i = 6 , j = 5
i = 6 , j = 6
i = 7 , j = 0
i = 7 , j = 1
i = 7 , j = 2
i = 7 , j = 3
i = 7 , j = 4
i = 7 , j = 5
i = 7 , j = 6
i = 7 , j = 7
*/