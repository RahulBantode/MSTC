/*
  Problem Statement :- 15 (traced in notebook)
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, j, k;
  for (i = 0; i < 5; ++i)
  {
    for (j = 3; j > 0; --j)
    {
      for (k = 0; k < 4; ++k)
      {
        if ((i + j) > k)
          printf("i = %d + j = %d > k = %d\n", i, j, k);
        else if ((j + k) > i)
          printf("j = %d + k = %d > i = %d\n", j, k, i);
        else if ((k + i) > j)
          printf("k = %d + i = %d > j = %d\n", k, i, j);
      }
      puts("------------------------");
    }
  }
  exit(0);
}

/* correct as traced .


D:\PRACTICE\Problem_Solution\Question_Set_7_C_(2_level_loop)>que_15.exe
i = 0 + j = 3 > k = 0
i = 0 + j = 3 > k = 1
i = 0 + j = 3 > k = 2
j = 3 + k = 3 > i = 0
------------------------
i = 0 + j = 2 > k = 0
i = 0 + j = 2 > k = 1
j = 2 + k = 2 > i = 0
j = 2 + k = 3 > i = 0
------------------------
i = 0 + j = 1 > k = 0
j = 1 + k = 1 > i = 0
j = 1 + k = 2 > i = 0
j = 1 + k = 3 > i = 0
------------------------
i = 1 + j = 3 > k = 0
i = 1 + j = 3 > k = 1
i = 1 + j = 3 > k = 2
i = 1 + j = 3 > k = 3
------------------------
i = 1 + j = 2 > k = 0
i = 1 + j = 2 > k = 1
i = 1 + j = 2 > k = 2
j = 2 + k = 3 > i = 1
------------------------
i = 1 + j = 1 > k = 0
i = 1 + j = 1 > k = 1
j = 1 + k = 2 > i = 1
j = 1 + k = 3 > i = 1
------------------------
i = 2 + j = 3 > k = 0
i = 2 + j = 3 > k = 1
i = 2 + j = 3 > k = 2
i = 2 + j = 3 > k = 3
------------------------
i = 2 + j = 2 > k = 0
i = 2 + j = 2 > k = 1
i = 2 + j = 2 > k = 2
i = 2 + j = 2 > k = 3
------------------------
i = 2 + j = 1 > k = 0
i = 2 + j = 1 > k = 1
i = 2 + j = 1 > k = 2
j = 1 + k = 3 > i = 2
------------------------
i = 3 + j = 3 > k = 0
i = 3 + j = 3 > k = 1
i = 3 + j = 3 > k = 2
i = 3 + j = 3 > k = 3
------------------------
i = 3 + j = 2 > k = 0
i = 3 + j = 2 > k = 1
i = 3 + j = 2 > k = 2
i = 3 + j = 2 > k = 3
------------------------
i = 3 + j = 1 > k = 0
i = 3 + j = 1 > k = 1
i = 3 + j = 1 > k = 2
i = 3 + j = 1 > k = 3
------------------------
i = 4 + j = 3 > k = 0
i = 4 + j = 3 > k = 1
i = 4 + j = 3 > k = 2
i = 4 + j = 3 > k = 3
------------------------
i = 4 + j = 2 > k = 0
i = 4 + j = 2 > k = 1
i = 4 + j = 2 > k = 2
i = 4 + j = 2 > k = 3
------------------------
i = 4 + j = 1 > k = 0
i = 4 + j = 1 > k = 1
i = 4 + j = 1 > k = 2
i = 4 + j = 1 > k = 3
------------------------
*/