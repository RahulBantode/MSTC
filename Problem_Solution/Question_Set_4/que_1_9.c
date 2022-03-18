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

    rs = (f && g) || (!f && !g);
    /* prediction :- f = 0 , g = 1
        (f && g) = 0 && 1 = 0
        !f = !0 = 1
        !g = !1 = 0
        (!f && !g) = 1 && 0 = 0
        (f && g) || (!f && !g) = 0 || 0
        
        =========== answer is 0 ===========
    */
    printf("rs = %d\n", rs);

    rs = (f || g) && (f || g);
    /* prediction :- f = 0 , g = 1
        f || g = 0 || 1 = 1
        (f || g) && (f || g) = (1) && (1)
        
        =========== answer is 1 ============
    */
    printf("rs = %d\n", rs);

    rs = (f && !g) || (!f && g);
    /* prediction :- f = 0 , g = 1
        !g = !1 = 0
        !f = !0 = 1
        (f && !g) = 0 && 0 = 0
        (!f && g) = 1 && 1 = 1
        (f && !g) || (!f && g) = 0 || 1
        
        ============ answer is 1 =============
    */
    printf("rs = %d\n", rs);

    rs = (f || !g) && (!f || g);
    /* prediction :- f = 0 , g = 1
        !g = !1 = 0
        !f = !0 = 1
        (f || !g) = 0 || 0 = 0
        (!f || g) = 1 || 1 = 1
        (f || !g) && (!f || g) = 0 && 1
        
        ============ answer is 0 =============
    */
    printf("rs = %d\n", rs);

    exit(0);
}

/* OUTPUT :-
rs = 0
rs = 1
rs = 1
rs = 0
*/