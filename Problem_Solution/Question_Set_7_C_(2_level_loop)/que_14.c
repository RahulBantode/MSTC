/*
  Problem Statement :- 14 (traced in notebook)
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, j, k;
  for (i = 0; i <= 5; ++i)
  {
    for (j = i + 1; j <= 5; ++j)
    {
      for (k = j + 1; k <= 4; ++k)
      {
        printf("i = %d, j = %d, k = %d\n", i, j, k);
      }
      puts("-----------------");
    }
  }
  exit(0);
}

/* correct as traced

D:\PRACTICE\Problem_Solution\Question_Set_7_C_(2_level_loop)>que_14.exe
i = 0, j = 1, k = 2
i = 0, j = 1, k = 3
i = 0, j = 1, k = 4
-----------------
i = 0, j = 2, k = 3
i = 0, j = 2, k = 4
-----------------
i = 0, j = 3, k = 4
-----------------
-----------------
-----------------
i = 1, j = 2, k = 3
i = 1, j = 2, k = 4
-----------------
i = 1, j = 3, k = 4
-----------------
-----------------
-----------------
i = 2, j = 3, k = 4
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------

*/