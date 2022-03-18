/*
    SET :- 1
    Solve the problem below with following values of a, b, c, d, e, f
    Also write the each of the equation in words
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 10;
    int b = 25;
    int c = 300;
    int d = 20;
    int e = 200;
    int f = 205;
    int rs;

    rs = (a > b) && (c < d);
    /* prediction :- a = 10, b = 25, c = 300, d = 20
        a > b = 10 > 25 : 0
        c < d = 300 < 20 : 0
        (a > b) && (c < d) : 0 && 0 : 0

        answer is 0
    */
    printf("rs = %d\n", rs);
    /*  (a is greater than b)
        AND
        (c is less than d)
    */

    rs = (a > b) && !(c < d);
    /* prediction :- a = 10, b = 25, c = 300, d = 20
        a > b = 10 > 25 : 0
        c < d = 300 < 20 : 0
        !(c < d) = (!0) : 1
        (a > b) && !(c < d) : 0 && 1 : 0

        answer is 0
    */
    printf("rs = %d\n", rs);
    /*  (a is greater than b)
        AND
        not (c is less than d)
    */

    rs = !(a > b) && (c < d);
    /* prediction :- a = 10, b = 25, c = 300, d = 20
        a > b = 10 > 25 : 0
        c < d = 300 < 20 : 0
        !(a > b) : !(0) : 1
        !(a > b) && (c < d) : 1 && 0 : 0

        answer is 0
    */
    printf("rs = %d\n", rs);
    /*  not(a is greater than b)
        AND
        (c is less than d)
    */

    rs = !(a > b) && !(c < d);
    /* prediction :- a = 10, b = 25, c = 300, d = 20
         a > b = 10 > 25 : 0
         c < d = 300 < 20 : 0
         !(a > b) = !(0) : 1
         !(c < d) = !(0) : 1
         !(a > b) && !(c < d) : 1 && 1 : 1

         answer is 1
     */
    printf("rs = %d\n", rs);
    /*  not(a is greater than b)
        AND
        not(c is less than d)
    */

    rs = !((a > b) && (c < d));
    /* prediction :- a = 10, b = 25, c = 300, d = 20
        a > b = 10 > 25 : 0
        c < d = 300 < 20 : 0
        ((a > b) && (c < d)) : 0 && 0 : 0
        !((a>b) && (c < d)) : !(0) : 1

        answer is 1
    */
    printf("rs = %d\n", rs);
    /*   not(
             (a is greater than b)
             AND
             (c is less than d)
            )
    */

    rs = !((a > b) && !(c < d));
    /* prediction :- a = 10, b = 25, c = 300, d = 20
        a > b = 10 > 25 : 0
        c < d = 300 < 20 : 0
        !(c < d) : !(0) : 1
        ((a > b) && !(c < d))  : 0 && 1 : 0
        !((a > b) && !(c < d)) : !(0) : 1

        answer is 1
    */
    printf("rs = %d\n", rs);
    /*
        not(
              (
                  (a is greater than b)
                  AND
                  not( c is less than d)
              )
           )
    */

    rs = !(!(a > b) && (c < d));
    /* prediction :- a = 10, b = 25, c = 300, d = 20
        a > b = 10 > 25 : 0
        c < d = 300 < 20 : 0
        !(a > b) : !(0) : 1
        !(a > b) && (c < d) : 1 && 0 : 0
        !(!(a > b) && (c < d)) : !(0) : 1

        answer is 1
    */
    printf("rs = %d\n", rs);
    /*
        not(
                (
                    not(a is greater than b)
                    AND
                    (c is less than d)
                )
           )
    */

    rs = (a > b) || (c < d);
    /* prediction :- a = 10, b = 25, c = 300, d = 20
        a > b = 10 > 25 : 0
        c < d = 300 < 20 : 0
        (a > b) || (c < d) : 0 || 0 : 0

        answer is 0
    */
    printf("rs = %d\n", rs);
    /*
        (a is greater than b)
        OR
        (c is less than d)
    */

    rs = (a > b) || !(c < d);
    /* prediction :- a = 10, b = 25, c = 300, d = 20
        a > b = 10 > 25 : 0
        c < d = 300 < 20 : 0
        !(c < d) : !(0) : 1
        (a > b) || !(c < d) : 0 || 1 : 1

        answer is 1
    */
    printf("rs = %d\n", rs);
    /*
        (a is greater than b)
        OR
        not (c is less than d)
    */

    rs = !(a > b) || (c < d);
    /* prediction :- a = 10, b = 25, c = 300, d = 20
        a > b = 10 > 25 : 0
        c < d = 300 < 20 : 0
        !(a > b) : !(0) : 1
        !(a > b) || (c < d) : 1 || 0 : 1

        answer is 1
    */
    printf("rs = %d\n", rs);
    /*
        not(a is greater than b)
        OR
        (c is less than d)
    */

    rs = !(a > b) || !(c < d);
    /* prediction :- a = 10, b = 25, c = 300, d = 20
        a > b = 10 > 25 : 0
        c < d = 300 < 20 : 0
        !(a > b) : !(0) : 1
        !(c < d) : !(0) : 1
        !(a > b) || !(c < d) : 1 || 1 : 1

        answer is 1
    */
    printf("rs = %d\n", rs);
    /*
        not(a is greater than b)
        OR
        not(c is less than d)
    */

    rs = (a > b) && (c < d) && ((e == f));
    /* prediction :- a = 10, b = 25, c = 300, d = 20, e = 200, f = 205
        a > b : 10 > 25 : 0
        c < d : 300 < 20 : 0
        e == f: 200 == 205 : 0
        (a > b) && (c < d) : 0 && 0 : 0
        (a > b) && (c < d) && ((e == f)) : 0 && 0 : 0

        answer is 0
    */
    printf("rs = %d\n", rs);
    /*
        (a is greater than b)
        AND
        (c is less than d)
        AND
        (e is equal to f)
    */

    rs = !(a > b) && (c < d) && !(e == f);
    /* prediction :- a = 10, b = 25, c = 300, d = 20, e = 200, f = 205
         a > b : 10 > 25 : 0
         c < d : 300 < 20 : 0
         e == f: 200 == 205 : 0
         !(a > b) : !(0) : 1
         !(e == f): !(0) : 1
         !(a > b) && (c < d) : 1 && 0 : 0
         !(a > b) && (c < d) && !(e == f) : 0 && 1 : 0

         answer is 0
     */
    printf("rs = %d\n", rs);
    /*
        not(a is greater than b)
        AND
        (c is less than d)
        AND
        not(e is equal to f)
    */

    rs = ((a > b) || (c < d)) && (e == f);
    /* prediction :- a = 10, b = 25, c = 300, d = 20, e = 200, f = 205
        a > b : 10 > 25 : 0
        c < d : 300 < 20 : 0
        e == f: 200 == 205 : 0
        ((a > b) || (c < d)) : 0 || 0 : 0
        ((a > b) || (c < d)) && (e == f) : 0 && 0 : 0

        answr is 0
    */
    printf("rs = %d\n", rs);
    /*
        (
            (a is greater than b)
            OR
            (c is less than d)
        )
        AND
        (e is equal to f)
    */

    rs = (a > b) && ((c < d) || (e == f));
    /* prediction :- a = 10, b = 25, c = 300, d = 20, e = 200, f = 205
        a > b : 10 > 25 : 0
        c < d : 300 < 20 : 0
        e == f: 200 == 205 : 0
        ((c < d) || (e == f)) : 0 || 0 : 0
        (a > b) && ((c < d) || (e == f)) : 0  &&  0 : 0

        answer is 0
    */
    printf("rs = %d\n", rs);
    /*
        (a is greater than b)
        AND
        (
            (c is less than d)
            OR
            (e is equal to f)
        )
    */

    rs = !(a > b) || (c < d) && !(e == f);
    /* prediction :- a = 10, b = 25, c = 300, d = 20, e = 200, f = 205
        a > b : 10 > 25 : 0
        c < d : 300 < 20 : 0
        e == f: 200 == 205 : 0
        !(a > b) : !(0) : 1
        !(e == f) : !(0) : 1
        !(a > b) || (c < d) : 1 || 0 : 1
        !(a > b) || (c < d) && !(e == f) : 1 && 1 : 1

        answer is 1
    */
    printf("rs = %d\n", rs);
    /*
        not( a is greater than b)
        OR
        (c is less than d)
        AND
        not(e is equal to f)
    */

    rs = !(a > b) || !(c < d) || (e == f);
    /* prediction :- a = 10, b = 25, c = 300, d = 20, e = 200, f = 205
        a > b : 10 > 25 : 0
        c < d : 300 < 20 : 0
        e == f: 200 == 205 : 0
        !(a > b) : !(0) : 1
        !(c < d) : !(0) : 1
        !(a > b) || !(c < d) : 1 || 1 : 1
        !(a > b) || !(c < d) || (e == f) : 1 || 0 : 1

        answer is 1
    */
    printf("rs = %d\n", rs);
    /*
        not(a is greater than b)
        OR
        not(c is less than d)
        OR
        (e is equal to f)
    */

    rs = !(a > b) && ((c < d) && (e == f)) || ((a > b) && (c < d));
    /* prediction :- a = 10, b = 25, c = 300, d = 20, e = 200, f = 205
        a > b : 10 > 25 : 0
        c < d : 300 < 20 : 0
        e == f: 200 == 205 : 0
        !(a > b) : !(0) : 1
        ((c < d) && (e == f)) : 0 && 0 : 0
        ((a > b) && (c < d))  : 0 && 0 : 0
        !(a > b) && ((c < d) && (e == f)) : 1 && 0 : 0
        !(a > b) && ((c < d) && (e == f)) || ((a > b) && (c < d)) : 0 || 0 : 0

        answer is 0
    */
    printf("rs = %d\n", rs);
    /*
        not(a is greater than b)
        AND
        (
            (c is less than d)
            AND
            (e is equal to f)
        )
        OR
        (
            (a is greater than b)
            AND
            (c is less than d)
        )
    */

    rs = ((a > b) && (c < d)) || ((c < d) && (e == f)) || ((e == f) && (a > b));
    /* prediction :- a = 10, b = 25, c = 300, d = 20, e = 200, f = 205
        a > b : 10 > 25 : 0
        c < d : 300 < 20 : 0
        e == f: 200 == 205 : 0
        ((a > b) && (c < d)) : 0 && 0 : 0
        ((c < d) && (e == f)): 0 && 0 : 0
        ((e == f)) && (a > b): 0 && 0 : 0
        ((a > b) && (c < d)) || ((c < d) && (e == f)) : 0 || 0 : 0
        ((a > b) && (c < d)) || ((c < d) && (e == f)) || ((e == f)) && (a > b) : 0 || 0 : 0

        answer is 0
    */
    printf("rs = %d\n", rs);
    /*
        (
            (a is greater than b)
            AND
            (c is less than d)
        )
        OR
        (
            (c is less than d)
            AND
            (e is equal to f)
        )
        OR
        (
            (e is equal to f)
            AND
            (a is greater than b)
        )
    */

    rs = ((a > b) || (c < d)) && ((c < d) || (e == f)) && ((e == f) || (a > b));
    /* prediction :- a = 10, b = 25, c = 300, d = 20, e = 200, f = 205
        a > b : 10 > 25 : 0
        c < d : 300 < 20 : 0
        e == f: 200 == 205 : 0
        ((a > b) || (c < d)) : 0 || 0 : 0
        ((c < d) || (e == f)): 0 || 0 : 0
        ((e == f)) || (a > b): 0 || 0 : 0
        ((a > b) || (c < d)) && ((c < d) || (e == f)) : 0 && 0 : 0
        ((a > b) || (c < d)) && ((c < d) || (e == f)) && ((e == f)) || (a > b) : 0 && 0 : 0

        answer is 0
    */
    printf("rs = %d\n", rs);
    /*
        (
            (a is greater than b)
            OR
            (c is less than d)
        )
        AND
        (
            (c is less than d)
            OR
            (e is equal to f)
        )
        AND
        (
            (e is equal to f)
            OR
            (a is greater than b)
        )
    */
    exit(0);
}
/* OUTPUT :-
rs = 0
rs = 0
rs = 0
rs = 1
rs = 1
rs = 1
rs = 1
rs = 0
rs = 1
rs = 1
rs = 1
rs = 0
rs = 0
rs = 0
rs = 0
rs = 1
rs = 1
rs = 0
rs = 0
rs = 0
*/