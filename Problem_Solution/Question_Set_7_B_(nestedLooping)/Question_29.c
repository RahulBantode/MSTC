// Traced in notebook

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, j;
  for (i = -5; i < 5; ++i)
  {
    for (j = -4; j <= 4; ++j)
    {
      if ((i * j) < 0)
        puts("i * j is less than 0");
      else if ((i * j) == 0)
        puts("i * j is equal to 0");
      else
        puts("i * j is greater than 0");
    }
    puts("--------------------");
  }
}

/* OUTPUT:-
correct


D:\PRACTICE\Problem_Solution\Question_Set_7_B_(nestedLooping)>Question_29.exe
i * j is greater than 0
i * j is greater than 0
i * j is greater than 0
i * j is greater than 0
i * j is equal to 0
i * j is less than 0
i * j is less than 0
i * j is less than 0
i * j is less than 0
--------------------
i * j is greater than 0
i * j is greater than 0
i * j is greater than 0
i * j is greater than 0
i * j is equal to 0
i * j is less than 0
i * j is less than 0
i * j is less than 0
i * j is less than 0
--------------------
i * j is greater than 0
i * j is greater than 0
i * j is greater than 0
i * j is greater than 0
i * j is equal to 0
i * j is less than 0
i * j is less than 0
i * j is less than 0
i * j is less than 0
--------------------
i * j is greater than 0
i * j is greater than 0
i * j is greater than 0
i * j is greater than 0
i * j is equal to 0
i * j is less than 0
i * j is less than 0
i * j is less than 0
i * j is less than 0
--------------------
i * j is greater than 0
i * j is greater than 0
i * j is greater than 0
i * j is greater than 0
i * j is equal to 0
i * j is less than 0
i * j is less than 0
i * j is less than 0
i * j is less than 0
--------------------
i * j is equal to 0
i * j is equal to 0
i * j is equal to 0
i * j is equal to 0
i * j is equal to 0
i * j is equal to 0
i * j is equal to 0
i * j is equal to 0
i * j is equal to 0
--------------------
i * j is less than 0
i * j is less than 0
i * j is less than 0
i * j is less than 0
i * j is equal to 0
i * j is greater than 0
i * j is greater than 0
i * j is greater than 0
i * j is greater than 0
--------------------
i * j is less than 0
i * j is less than 0
i * j is less than 0
i * j is less than 0
i * j is equal to 0
i * j is greater than 0
i * j is greater than 0
i * j is greater than 0
i * j is greater than 0
--------------------
i * j is less than 0
i * j is less than 0
i * j is less than 0
i * j is less than 0
i * j is equal to 0
i * j is greater than 0
i * j is greater than 0
i * j is greater than 0
i * j is greater than 0
--------------------
i * j is less than 0
i * j is less than 0
i * j is less than 0
i * j is less than 0
i * j is equal to 0
i * j is greater than 0
i * j is greater than 0
i * j is greater than 0
i * j is greater than 0
--------------------

*/
