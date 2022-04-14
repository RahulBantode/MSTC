// Traced in Noteboook

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, j;
  for (i = 0; i < 100; i = i * 2)
  {
    for (j = 100; j >= 0; --j)
      printf("i = %d , j = %d\n", i, j);
    puts("-----------------------------------");
  }
  exit(0);
}

/* OUTPUT :-
Correct as traced.
Loop in infinite iterations.
*/