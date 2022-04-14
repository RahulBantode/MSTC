/*
  Trace the Output of the program
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, j;
  for (i = 0; i < 8; ++i)
    for (j = 0; j < 8; ++j)
      printf("i = %d , j = %d\n", i, j);

  exit(0);
}

/*  Prediction :-

  let i , j is the variable .

  i = 0 , 0 < 8 -- true

    j = 0; 0 < 8 -- true
      pf- i = 0, j = 0
      j = 0 + 1 = 1
    j = 1; 1 < 8 -- true
      pf- i = 0, j = 1
      j = 1 + 1 = 2
    j = 2; 2 < 8 -- true
      pf- i = 0, j = 2;
      j = 2 + 1 = 3
    j = 3; 3 < * -- true
      pf- i = 0, j = 3;
      j = 3 + 1 = 4
    j = 4; 4 < 8 -- true
      pf- i = 0, j = 4;
      j = 4 + 1 = 5
    j = 5; 5 < 8 -- true
      pf- i = 0, j = 5
      j = 5 + 1 = 6
    j = 6; 6 < 8; -- true
      pf- i = 0, j = 6
      j = 6 + 1 = 7
    j = 7; 7 < 8; -- true
      pf- i = 0, j = 7
      j = 7 + 1 - 8
    j = 8; 8 < 8 -- false

  i = 0 + 1 = 1
  i = 1; 1 < 8; -- true

    j = 0; 0 < 8; -- true
      pf- i = 1, j = 0
      j = 0 + 1 = 1
    j = 1; 1 < 8 -- true
      pf- i = 1, j = 1
      j = 1 + 1 = 2
    j = 2; 2 < 8 -- true
      pf- i = 1, j = 2
      j = 2 + 1 = 3
    j = 3; 3 < 8 -- true
      pf- i = 1, j = 3
      j = 3 + 1 = 4
    j = 4; 4 < 8 -- true
      pf- i = 1, j = 4
      j = 4 + 1 = 5
    j = 5; 5 < 8; -- true
      pf- i = 1, j = 5
      j = 5 + 1 = 6
    j = 6; 6 < 8; -- true
      pf- i = 1, j = 6
      j = 6 + 1 = 7
    j = 7; 7 < 8; -- true
      pf- i = 1; j = 7
      j = 7 + 1 = 8
    j = 8; 8 < 8; -- false

  i = 1 + 1 = 2
  i = 2; 2 < 8 -- true

    j = 0; 0 < 8; -- true
      pf i = 2, j = 0
      j = 0 + 1 = 1
    j = 1; 1 < 8; -- true
      pf i = 2, j = 1
      j = 1 + 1 = 2
    j = 2; 2 < 8; -- true
      pf i = 2, j = 2
      j = 2 + 1 = 3
    j = 3; 3 < 8; -- true
      pf i = 2, j = 3
      j = 3 + 1 = 4
    j = 4; 4 < 8; -- true
      pf i = 2, j = 4
      j = 4 + 1 = 5
    j = 5; 5 < 8; -- true
      pf i = 2, j = 5
      j = 5 + 1 = 6
    j = 6; 6 < 8; -- true
      pf i = 2, j = 6
      j = 6 + 1 = 7
    j = 7; 7 < 8; -- true
      pf i = 2, j = 7
      j = 7 + 1 = 8
    j = 8; 8 < 8 -- false

  i = 2 + 1 = 3
  i = 3; 3 < 8; -- true

    j = 0; 0 < 8; -- true
      pf i = 3, j = 0
      j = 0 + 1 = 1
    j = 1; 1 < 8; -- true
      pf i = 3, j = 1
      j = 1 + 1 = 2
    j = 2; 2 < 8; -- true
      pf i = 3; j = 2
      j = 2 + 1 = 3
    j = 3; 3 < 8; -- true
      pf i = 3; j = 3
      j = 3 + 1 = 4
    j = 4; 4 < 8; -- true
      pf i = 3; j = 4
      j = 4 + 1 = 5
    j = 5; 5 < 8; -- true
      pf i = 3, j = 5
      j = 5 + 1 = 6
    j = 6; 6 < 8; -- true
      pf i = 3, j = 6
      j = 6 + 1 = 7
    j = 7; 7 < 8; -- true
      pf i = 3, j = 7
      j = 7 + 1 = 8
    j = 8; 8 < 8 -- false

  i = 4; 4 < 8 -- true

    j = 0, 0 < 8; --true
      pf i = 4, j = 0
      j = 0 + 1 = 1
    j = 1, 1 < 8; -- true
      pf i = 4, j = 1
      j = 1 + 1 = 2
    j = 2, 2 < 8 -- true
      pf i = 4, j = 2
      j = 2 + 1 = 3
    j = 3, 3 < 8 -- true
      pf i = 4, j = 3
      j = 3 + 1 = 4
    j = 4, 4 < 8 -- true
      pf i = 4, j = 4
      j = 4 + 1 = 5
    j = 5, 5 < 8 -- true
      pf i = 4, j = 5
      j = 5 + 1 = 6
    j = 6, 6 < 8 -- true
      pf i = 4, j = 6
      j = 6 + 1 = 7
    j = 7, 7 < 8 -- true
      pf i = 4, j = 7
      j = 7 + 1 = 8
    j = 8, 8 < 8 -- false

  i = 4 + 1 = 5
  i = 5; 5 < 8 -- true

    j = 0, 0 < 8 -- true
      pf i = 5, j = 0
      j = 0 + 1 = 1
    j = 1, 1 < 8 -- true
      pf i = 5, j = 1
      j = 1 + 1 = 2
    j = 2, 2 < 8 -- true
      pf i = 5, j = 2
      j = 2 + 1 = 3
    j = 3, 3 < 8, -- true
      pf i = 5, j = 3
      j = 3 + 1 = 4
    j = 4, 4 < 8, -- true
      pf i = 5, j = 4
      j = 4 + 1 = 5
    j = 5, 5 < 8, -- true
      pf i = 5, j = 5
      j = 5 + 1 = 6
    j = 6, 6 < 8, -- true
      pf i = 5, j = 6
      j = 6 + 1 = 7
    j = 7, 7 < 8, -- true
      pf i = 5, j = 7
      j = 7 + 1 = 8
    j = 8, 8 < 8 -- false

  i = 5 + 1 = 6
  i = 6, 6 < 8 -- true

    j = 0, 0 < 8 -- true
      pf i = 6, j = 0
      j = 0 + 1 =1
    j = 1, 1 < 8 -- true
      pf i = 6, j = 1
      j = 1 + 1 =2
    j = 2, 2 < 8 -- true
      pf i = 6, j = 2
      j = 2 + 1=3
    j = 3, 3 < 8 -- true
      pf i = 6, j = 3
      j = 3 + 1 = 4
    j = 4, 4 < 8 -- true
      pf i = 6, j = 4
      j = 4 + 1 = 5
    j = 5, 5 < 8 -- true
      pf i = 6, j = 5
      j = 5 + 1 = 6
    j = 6, 6 < 8 -- true
      pf i = 6, j = 6
      j = 6 + 1 =7
    j = 7, 7 < 8 -- true
      pf i = 6, j = 7
      j = 7 + 1 = 8
    j = 8, 8 < 8 -- false

  i = 6 + 1 = 7
  i = 7, 7 < 8, -- true

    j = 0, 0 < 8 -- true
      pf i = 7, j = 0
      j = 0 + 1 =1
    j = 1, 1 < 8 -- true
      pf i = 7, j = 1
      j = 1 + 1=2
    j = 2, 2 < 8, -- true
      pf i = 7, j = 2
      j = 2 + 1=3
    j = 3, 3 < 8, -- true
      pf i = 7, j = 3
      j = 3 + 1 = 4
    j = 4, 4 < 8, -- true
      pf i = 7, j = 4
      j = 4 + 1 = 5
    j = 5, 5 < 8, -- true
      pf i = 7, j = 5
      j = 5 + 1 =6
    j = 6, 6 < 8, -- true
      pf i = 7, j = 6
      j = 6 + 1 = 7
    j = 7, 7 < 8, -- true
      pf i = 7, j = 7
      j = 7 + 1 =8
    j = 8, 8 < 8 -- false

  i = 7 + 1 = 8
  i = 8, 8 < 8 -- false

  loop terminates

  OUTPUT :-
  i = 0 , j = 0
i = 0 , j = 1
i = 0 , j = 2
i = 0 , j = 3
i = 0 , j = 4
i = 0 , j = 5
i = 0 , j = 6
i = 0 , j = 7
i = 1 , j = 0
i = 1 , j = 1
i = 1 , j = 2
i = 1 , j = 3
i = 1 , j = 4
i = 1 , j = 5
i = 1 , j = 6
i = 1 , j = 7
i = 2 , j = 0
i = 2 , j = 1
i = 2 , j = 2
i = 2 , j = 3
i = 2 , j = 4
i = 2 , j = 5
i = 2 , j = 6
i = 2 , j = 7
i = 3 , j = 0
i = 3 , j = 1
i = 3 , j = 2
i = 3 , j = 3
i = 3 , j = 4
i = 3 , j = 5
i = 3 , j = 6
i = 3 , j = 7
i = 4 , j = 0
i = 4 , j = 1
i = 4 , j = 2
i = 4 , j = 3
i = 4 , j = 4
i = 4 , j = 5
i = 4 , j = 6
i = 4 , j = 7
i = 5 , j = 0
i = 5 , j = 1
i = 5 , j = 2
i = 5 , j = 3
i = 5 , j = 4
i = 5 , j = 5
i = 5 , j = 6
i = 5 , j = 7
i = 6 , j = 0
i = 6 , j = 1
i = 6 , j = 2
i = 6 , j = 3
i = 6 , j = 4
i = 6 , j = 5
i = 6 , j = 6
i = 6 , j = 7
i = 7 , j = 0
i = 7 , j = 1
i = 7 , j = 2
i = 7 , j = 3
i = 7 , j = 4
i = 7 , j = 5
i = 7 , j = 6
i = 7 , j = 7
*/