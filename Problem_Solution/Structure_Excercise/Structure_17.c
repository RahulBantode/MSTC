/*
    Array inside structure Demonstration
*/

#include <stdio.h>
#include <stdlib.h>

struct Information
{
    int integer[5];
    char string[5][20]; // declaration of array of string
    float fraction[5];
};

int main(void)
{
    struct Information INF;
    int counter;

    puts("Input for INTEGER :-");
    for (counter = 0; counter < 5; ++counter)
    {
        printf("  Enter the Integer : %d : ", counter + 1);
        scanf("%d", &INF.integer[counter]);
    }
    puts("input for STRING :-");
    for (counter = 0; counter < 5; ++counter)
    {
        printf("  Enter the STRING : %d : ", counter + 1);
        scanf("%s", INF.string[counter]);
    }
    puts("input for FRACTION :-");
    for (counter = 0; counter < 5; ++counter)
    {
        printf("  Enter the Fraction : %d :", counter + 1);
        scanf("%f", &INF.fraction[counter]);
    }

    puts("----------------- STRUCTURE INFORMATION --------------------");
    for (counter = 0; counter < 5; ++counter)
    {
        printf(" Integer %d :- %d\n", counter + 1, INF.integer[counter]);
        printf("    String %d : %s\n", counter + 1, INF.string[counter]);
        printf("      Fraction %d : %f\n", counter + 1, INF.fraction[counter]);
        puts("----------------------------------------------------------------");
    }

    exit(0);
}

/* OUTPUT :-
Input for INTEGER :-
  Enter the Integer : 1 : 1
  Enter the Integer : 2 : 2
  Enter the Integer : 3 : 3
  Enter the Integer : 4 : 4
  Enter the Integer : 5 : 5
input for STRING :-
  Enter the STRING : 1 : Rahul
  Enter the STRING : 2 : kunal
  Enter the STRING : 3 : Anuja
  Enter the STRING : 4 : Bhagi
  Enter the STRING : 5 : Nikita
input for FRACTION :-
  Enter the Fraction : 1 :9.0
  Enter the Fraction : 2 :2.3
  Enter the Fraction : 3 :9.11
  Enter the Fraction : 4 :9.1
  Enter the Fraction : 5 :2.1
----------------- STRUCTURE INFORMATION --------------------
 Integer 1 :- 1
    String 1 : Rahul
      Fraction 1 : 9.000000
----------------------------------------------------------------
 Integer 2 :- 2
    String 2 : kunal
      Fraction 2 : 2.300000
----------------------------------------------------------------
 Integer 3 :- 3
    String 3 : Anuja
      Fraction 3 : 9.110000
----------------------------------------------------------------
 Integer 4 :- 4
    String 4 : Bhagi
      Fraction 4 : 9.100000
----------------------------------------------------------------
 Integer 5 :- 5
    String 5 : Nikita
      Fraction 5 : 2.100000
----------------------------------------------------------------
*/