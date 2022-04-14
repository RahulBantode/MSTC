/* Tracing done in notebook */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, j;
  for (i = 0; i < 16; i += 3)
    for (j = 0; j < 128; j *= 3)
      printf("i = %d , j = %d\n", i, j);
  exit(0);
}

/* OUTPUT :-
  Infinite loop
*/