/*
    Evaluate the value in rs variables
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 25;
    int e = 50;
    int f = 0;
    int g = 1;
    int rs;

    rs = a > b; // prediction :- a = 10 , b = 20 , a > b : 10 > 20 answer is 0;
    printf("rs = %d\n", rs);

    rs = a < b; // prediction :- a = 10, b = 20 , a < b : 10 < 20 answer is 1;
    printf("rs = %d\n", rs);

    rs = a >= b; // prediction :- a=10, b=20, a>=b : 10>=20 answer is 0;
    printf("rs = %d\n", rs);

    rs = a <= b; // prediction :- a=10,b=20, a<=b : 10<=20 answer is 1;
    printf("rs = %d\n", rs);

    rs = a == b; // prediction :- a=10,b=20, a==b : 10 == 20 answer is 0;
    printf("rs = %d\n", rs);

    rs = a != b; // prediction :- a=10,b=20, a!=b : 10 != 20 answer is 1;
    printf("rs = %d\n", rs);

    exit(0);
}

/* OUTPUT :-
rs = 0
rs = 1
rs = 0
rs = 1
rs = 0
rs = 1
*/