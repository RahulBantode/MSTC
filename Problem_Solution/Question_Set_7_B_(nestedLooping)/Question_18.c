// Traced in notebook

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, j;
  for (i = 0; i < 8; ++i)
  {
    for (j = i + 1; j < 8; ++j)
      printf("i = %d , j = %d \n", i, j);
    puts("-----------------");
  }
  exit(0);
}

/* OUTPUT :-
Correct as traced.

*/