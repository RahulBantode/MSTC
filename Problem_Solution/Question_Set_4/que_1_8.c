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

    rs = f && g || e;
    /* prediction :- f=0,g=1,e=50
        f && g = 0 && 1 = 0
        f && g || e = 0 || 50
        answer is 1
    */
    printf("rs = %d\n", rs);

    rs = f && (!g || e);
    /* prediction :- f=0,g=1,e=50
        !g = !1 =0 |
        (!g || e) = 1 || 50 = 1
        f && (!g || e) = 0 && 1
        answer is 0
    */
    printf("rs = %d\n", rs);

    rs = f || g && e;
    /* prediction :- f=0,g=1,e=50
        f || g = 0 || 1 = 1
        f || g && e = 1 && 50
        answer is 1
    */
    printf("rs = %d\n", rs);

    rs = (f || g) && e;
    /* prediction :- f=0,g=1,e=50
        (f || g) = 0 || 1 =  1
        (f || g) && e = 1 && 50
        answer is 1
    */
    printf("rs = %d\n", rs);

    exit(0);
}

/* OUTPUT :-
rs = 1
rs = 0
rs = 1
rs = 1
*/