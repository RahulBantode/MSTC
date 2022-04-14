/*
  Traced in notebook
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, j;
  for (i = 0; i < 8; i += 4)
  {
    for (j = 0; j < 8; j += 5)
      printf("i = %d , j = %d\n", i, j);

    puts("--------------------------------------------");
  }
  exit(0);
}

/* OUTPUT :-
Correct as traced

i = 0 , j = 0
i = 0 , j = 5
--------------------------------------------
i = 4 , j = 0
i = 4 , j = 5
--------------------------------------------
*/