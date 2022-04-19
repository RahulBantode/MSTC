/*
  Problem Statement :- 9 (traced in notebook)
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, j, k;
  for (i = 0; i < 5; ++i)
  {
    for (j = 5; j > 0; --j)
    {
      if (i < j)
      {
        for (k = 0; k < 4; ++k)
        {
          printf("i = %d, j = %d, k = %d\n", i, j, k);
        }
      }
      else
      {
        printf("i = %d is greater than or equal to j = %d\n", i, j);
      }
      puts("----------------------------");
    }
  }
  exit(0);
}

/* correct as traced


D:\PRACTICE\Problem_Solution\Question_Set_7_C_(2_level_loop)>que_9.exe
i = 0, j = 5, k = 0
i = 0, j = 5, k = 1
i = 0, j = 5, k = 2
i = 0, j = 5, k = 3
----------------------------
i = 0, j = 4, k = 0
i = 0, j = 4, k = 1
i = 0, j = 4, k = 2
i = 0, j = 4, k = 3
----------------------------
i = 0, j = 3, k = 0
i = 0, j = 3, k = 1
i = 0, j = 3, k = 2
i = 0, j = 3, k = 3
----------------------------
i = 0, j = 2, k = 0
i = 0, j = 2, k = 1
i = 0, j = 2, k = 2
i = 0, j = 2, k = 3
----------------------------
i = 0, j = 1, k = 0
i = 0, j = 1, k = 1
i = 0, j = 1, k = 2
i = 0, j = 1, k = 3
----------------------------
i = 1, j = 5, k = 0
i = 1, j = 5, k = 1
i = 1, j = 5, k = 2
i = 1, j = 5, k = 3
----------------------------
i = 1, j = 4, k = 0
i = 1, j = 4, k = 1
i = 1, j = 4, k = 2
i = 1, j = 4, k = 3
----------------------------
i = 1, j = 3, k = 0
i = 1, j = 3, k = 1
i = 1, j = 3, k = 2
i = 1, j = 3, k = 3
----------------------------
i = 1, j = 2, k = 0
i = 1, j = 2, k = 1
i = 1, j = 2, k = 2
i = 1, j = 2, k = 3
----------------------------
i = 1 is greater than or equal to j = 1
----------------------------
i = 2, j = 5, k = 0
i = 2, j = 5, k = 1
i = 2, j = 5, k = 2
i = 2, j = 5, k = 3
----------------------------
i = 2, j = 4, k = 0
i = 2, j = 4, k = 1
i = 2, j = 4, k = 2
i = 2, j = 4, k = 3
----------------------------
i = 2, j = 3, k = 0
i = 2, j = 3, k = 1
i = 2, j = 3, k = 2
i = 2, j = 3, k = 3
----------------------------
i = 2 is greater than or equal to j = 2
----------------------------
i = 2 is greater than or equal to j = 1
----------------------------
i = 3, j = 5, k = 0
i = 3, j = 5, k = 1
i = 3, j = 5, k = 2
i = 3, j = 5, k = 3
----------------------------
i = 3, j = 4, k = 0
i = 3, j = 4, k = 1
i = 3, j = 4, k = 2
i = 3, j = 4, k = 3
----------------------------
i = 3 is greater than or equal to j = 3
----------------------------
i = 3 is greater than or equal to j = 2
----------------------------
i = 3 is greater than or equal to j = 1
----------------------------
i = 4, j = 5, k = 0
i = 4, j = 5, k = 1
i = 4, j = 5, k = 2
i = 4, j = 5, k = 3
----------------------------
i = 4 is greater than or equal to j = 4
----------------------------
i = 4 is greater than or equal to j = 3
----------------------------
i = 4 is greater than or equal to j = 2
----------------------------
i = 4 is greater than or equal to j = 1
----------------------------
*/