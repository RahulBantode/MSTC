// Traced in notebook

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, j;
  for (i = 8; i > 0; --i)
  {
    for (j = 0; j < 8; ++j)
    {
      if (i > j)
        printf("i=%d is greater than j=%d\n", i, j);
      else if (i < j)
        printf("i=%d is less than j=%d\n", i, j);
      else
        printf("i=%d is equal to j=%d\n", i, j);
    }
    puts("--------------------------");
  }
}

/* OUTPTUT :-
correct as traced


D:\PRACTICE\Problem_Solution\Question_Set_7_B_(nestedLooping)>Question_32.exe
i=8 is greater than j=0
i=8 is greater than j=1
i=8 is greater than j=2
i=8 is greater than j=3
i=8 is greater than j=4
i=8 is greater than j=5
i=8 is greater than j=6
i=8 is greater than j=7
--------------------------
i=7 is greater than j=0
i=7 is greater than j=1
i=7 is greater than j=2
i=7 is greater than j=3
i=7 is greater than j=4
i=7 is greater than j=5
i=7 is greater than j=6
i=7 is equal to j=7
--------------------------
i=6 is greater than j=0
i=6 is greater than j=1
i=6 is greater than j=2
i=6 is greater than j=3
i=6 is greater than j=4
i=6 is greater than j=5
i=6 is equal to j=6
i=6 is less than j=7
--------------------------
i=5 is greater than j=0
i=5 is greater than j=1
i=5 is greater than j=2
i=5 is greater than j=3
i=5 is greater than j=4
i=5 is equal to j=5
i=5 is less than j=6
i=5 is less than j=7
--------------------------
i=4 is greater than j=0
i=4 is greater than j=1
i=4 is greater than j=2
i=4 is greater than j=3
i=4 is equal to j=4
i=4 is less than j=5
i=4 is less than j=6
i=4 is less than j=7
--------------------------
i=3 is greater than j=0
i=3 is greater than j=1
i=3 is greater than j=2
i=3 is equal to j=3
i=3 is less than j=4
i=3 is less than j=5
i=3 is less than j=6
i=3 is less than j=7
--------------------------
i=2 is greater than j=0
i=2 is greater than j=1
i=2 is equal to j=2
i=2 is less than j=3
i=2 is less than j=4
i=2 is less than j=5
i=2 is less than j=6
i=2 is less than j=7
--------------------------
i=1 is greater than j=0
i=1 is equal to j=1
i=1 is less than j=2
i=1 is less than j=3
i=1 is less than j=4
i=1 is less than j=5
i=1 is less than j=6
i=1 is less than j=7
--------------------------
*/