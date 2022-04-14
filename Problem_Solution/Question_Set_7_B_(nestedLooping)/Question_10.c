// Traced in notebook

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, j;
  for (i = 0; i < 8; ++i)
  {
    for (j = 8; j > 8; --j)
      printf("i = %d , j = %d\n", i, j);
  }
  exit(0);
}

/* OUTPUT :-
Correct As traced.

Inner loop condition get false so it doenst print anything on
console.
*/