// correct as traced.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, j;
  for (i = 0; i <= 8; ++i)
  {
    for (j = 8; j > i; --j)
      printf("i = %d, j = %d\n", i, j);
    puts("--------------");
  }
  exit(0);
}

/* OUTPUT :-
correct as traced

D:\PRACTICE\Problem_Solution\Question_Set_7_B_(nestedLooping)>Question_23.exe
i = 0, j = 8
i = 0, j = 7
i = 0, j = 6
i = 0, j = 5
i = 0, j = 4
i = 0, j = 3
i = 0, j = 2
i = 0, j = 1
--------------
i = 1, j = 8
i = 1, j = 7
i = 1, j = 6
i = 1, j = 5
i = 1, j = 4
i = 1, j = 3
i = 1, j = 2
--------------
i = 2, j = 8
i = 2, j = 7
i = 2, j = 6
i = 2, j = 5
i = 2, j = 4
i = 2, j = 3
--------------
i = 3, j = 8
i = 3, j = 7
i = 3, j = 6
i = 3, j = 5
i = 3, j = 4
--------------
i = 4, j = 8
i = 4, j = 7
i = 4, j = 6
i = 4, j = 5
--------------
i = 5, j = 8
i = 5, j = 7
i = 5, j = 6
--------------
i = 6, j = 8
i = 6, j = 7
--------------
i = 7, j = 8
--------------
*/