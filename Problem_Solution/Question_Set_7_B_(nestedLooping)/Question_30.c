// Traced in notebook

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, j;
  for (i = 8; i > 0; --i)
  {
    for (j = i - 1; j > 0; --j)
      printf("i = %d , j = %d\n", i, j);
    puts("------------------------");
  }
  exit(0);
}

/* OUTPUT :-
correct


D:\PRACTICE\Problem_Solution\Question_Set_7_B_(nestedLooping)>Question_30.exe
i = 8 , j = 7
i = 8 , j = 6
i = 8 , j = 5
i = 8 , j = 4
i = 8 , j = 3
i = 8 , j = 2
i = 8 , j = 1
------------------------
i = 7 , j = 6
i = 7 , j = 5
i = 7 , j = 4
i = 7 , j = 3
i = 7 , j = 2
i = 7 , j = 1
------------------------
i = 6 , j = 5
i = 6 , j = 4
i = 6 , j = 3
i = 6 , j = 2
i = 6 , j = 1
------------------------
i = 5 , j = 4
i = 5 , j = 3
i = 5 , j = 2
i = 5 , j = 1
------------------------
i = 4 , j = 3
i = 4 , j = 2
i = 4 , j = 1
------------------------
i = 3 , j = 2
i = 3 , j = 1
------------------------
i = 2 , j = 1
------------------------
*/