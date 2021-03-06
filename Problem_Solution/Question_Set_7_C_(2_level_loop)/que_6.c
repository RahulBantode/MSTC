/*
  Problem Statement :- 6 (traced in notebook)
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, j, k;
  for (i = -3; i < 3; ++i)
  {
    for (j = -2; j < 2; ++j)
    {
      if ((i + j) > 0)
      {
        for (k = 1; k < 16; k <<= 2)
          printf("i = %d,j= %d,k = %d\n", i, j, k);
      }
      else if ((i + j) < 0)
      {
        for (k = 1; k < 2; ++k)
          printf("i = %d,j= %d,k = %d\n", i, j, k);
      }
      else
      {
        for (k = 5; k > 0; k = k - 2)
          printf("i = %d,j= %d,k = %d\n", i, j, k);
      }
      puts("------------------------");
    }
  }
  exit(0);
}

/* correct as traced.

D:\PRACTICE\Problem_Solution\Question_Set_7_C_(2_level_loop)>que_6.exe
i = -3,j= -2,k = 1
------------------------
i = -3,j= -1,k = 1
------------------------
i = -3,j= 0,k = 1
------------------------
i = -3,j= 1,k = 1
------------------------
i = -2,j= -2,k = 1
------------------------
i = -2,j= -1,k = 1
------------------------
i = -2,j= 0,k = 1
------------------------
i = -2,j= 1,k = 1
------------------------
i = -1,j= -2,k = 1
------------------------
i = -1,j= -1,k = 1
------------------------
i = -1,j= 0,k = 1
------------------------
i = -1,j= 1,k = 5
i = -1,j= 1,k = 3
i = -1,j= 1,k = 1
------------------------
i = 0,j= -2,k = 1
------------------------
i = 0,j= -1,k = 1
------------------------
i = 0,j= 0,k = 5
i = 0,j= 0,k = 3
i = 0,j= 0,k = 1
------------------------
i = 0,j= 1,k = 1
i = 0,j= 1,k = 4
------------------------
i = 1,j= -2,k = 1
------------------------
i = 1,j= -1,k = 5
i = 1,j= -1,k = 3
i = 1,j= -1,k = 1
------------------------
i = 1,j= 0,k = 1
i = 1,j= 0,k = 4
------------------------
i = 1,j= 1,k = 1
i = 1,j= 1,k = 4
------------------------
i = 2,j= -2,k = 5
i = 2,j= -2,k = 3
i = 2,j= -2,k = 1
------------------------
i = 2,j= -1,k = 1
i = 2,j= -1,k = 4
------------------------
i = 2,j= 0,k = 1
i = 2,j= 0,k = 4
------------------------
i = 2,j= 1,k = 1
i = 2,j= 1,k = 4
------------------------
*/