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
    int b = 20;
    int c = 300;
    int d = 200;
    int e = 200;
    int f = 200;
    int rs;

    rs = (a > b) && (c < d);
    /* prediction :- a = 10, b = 20, c = 300 , d = 200
        a > b : 10 > 20 : 0
        c < d : 300 < 200 : 0
        (a > b) && (c < d) : 0 && 0 : 0

        answer is 0
    */
    puts("(a is greater than b) AND (c is less than d)");
    printf("rs = %d\n\n", rs);

    rs = (a > b) && !(c < d);
    /*  prediction :- a = 10, b = 20, c = 300 , d = 200
        a > b : 10 > 20 : 0
        c < d : 300 < 200 : 0
        !(c < d) : !(0) : 1
        (a > b) && !(c < d) : 0 && 1 : 0

        answer is 0
    */
    puts("(a is greater than b) AND not(c is less than d)");
    printf("rs = %d\n\n", rs);

    rs = !(a > b) && (c < d);
    /*  prediction :- a = 10, b = 20, c = 300 , d = 200
        a > b : 10 > 20 : 0
        c < d : 300 < 200 : 0
        !(a > b) : !(0) : 1
        !(a > b) && (c < d) : 0 && 1 : 0

        answer is 0
    */
    puts("not(a is greater than b) AND (c is less than d)");
    printf("rs = %d\n\n", rs);

    rs = !(a > b) && !(c < d);
    /*  prediction :- a = 10, b = 20, c = 300 , d = 200
        a > b : 10 > 20 : 0
        c < d : 300 < 200 : 0
        !(a > b) : !(0) : 1
        !(c < d) : !(0) : 1
        !(a > b) && !(c < d) : 1 && 1 : 1

        answer is 1
    */
    puts("not(a is greater than b) AND not(c is less than d)");
    printf("rs = %d\n\n", rs);

    rs = !((a > b) && (c < d));
    /*  prediction :- a = 10, b = 20, c = 300 , d = 200
        a > b : 10 > 20 : 0
        c < d : 300 < 200 : 0
        ((a>b) && (c<d)) : 0 && 0 : 0
        !((a>b) && (c<d)) : !(0) : 1

        answer is 1
    */
    puts("not( (a is greater than b) AND (c is less than d) )");
    printf("rs = %d\n\n", rs);

    rs = (a > b) || !(c < d);
    /*  prediction :- a = 10, b = 20, c = 300 , d = 200
        a > b : 10 > 20 : 0
        c < d : 300 < 200 : 0
        !(c < d) : !(0) : 1
        (a > b) || !(c < d) : 0 || 1 : 1

        answer is 1
    */
    puts("(a is greater than b) OR not(c is less than d)");
    printf("rs = %d\n\n", rs);

    rs = !(a > b) || (c < d);
    /*  prediction :- a = 10, b = 20, c = 300 , d = 200
        a > b : 10 > 20 : 0
        c < d : 300 < 200 : 0
        !(a > b) : !(0) : 1
        !(a > b) || (c < d) : 1 || 0 : 1

        answer is 1
    */
    puts("not(a is greater than b) OR (c is less than d)");
    printf("rs = %d\n\n", rs);

    rs = !(a > b) || !(c < d);
    /*  prediction :- a = 10, b = 20, c = 300 , d = 200
        a > b : 10 > 20 : 0
        c < d : 300 < 200 : 0
        !(a > b) : !(0) : 1
        !(c < d) : !(0) : 1
        !(a > b) || !(c < d) : 1 || 1 : 1

        answer is 1
    */
    puts("not(a is greater than b) OR not(c is less than d)");
    printf("rs = %d\n\n", rs);

    rs = (a > b) && (c < d) && ((e == f));
    /* prediction :- a = 10, b = 20, c = 300, d = 200, e = 200, f = 200
        a > b : 10 > 20 : 0
        c < d : 300 < 200 : 0
        e == f : 200 == 200 : 1
        (a > b) && (c < d) : 0 && 0 : 0
        (a > b) && (c < d) && ((e == f)) : 0 && 1 : 0

        answer is 0
    */
    puts("(a is greater than b) AND (c is less than d) AND (e is equal to equal to f)");
    printf("rs = %d\n\n", rs);

    rs = !(a > b) && (c < d) && !(e == f);
    /* prediction :- a = 10, b = 20, c = 300, d = 200, e = 200, f = 200
       a > b : 10 > 20 : 0
       c < d : 300 < 200 : 0
       e == f : 200 == 200 : 1
       !(a > b) : !(0) : 1
       !(e == f): !(1) : 0
       !(a > b) && (c < d) : 1 && 0 : 0
       !(a > b) && (c < d) && !(e == f) : 0 && 0 = 0

       answer is 0
   */
    puts("not(a is greater than b) AND (c is less than d) AND not(e is equal to equal to f)");
    printf("rs = %d\n\n", rs);

    rs = ((a > b) || (c < d)) && (e == f);
    /* prediction :- a = 10, b = 20, c = 300, d = 200, e = 200, f = 200
       a > b : 10 > 20 : 0
       c < d : 300 < 200 : 0
       e == f : 200 == 200 : 1
       ((a > b) || (c < d)) : 0 || 0 : 0
       ((a > b) || (c < d)) && (e == f) : 0 && 1 : 0

       answer is 0
   */
    puts("( (a is greater than b) OR (c is less than d) AND (e is equal to equal to f))");
    printf("rs = %d\n\n", rs);

    rs = (a > b) && ((c < d) || (e == f));
    /* prediction :- a = 10, b = 20, c = 300, d = 200, e = 200, f = 200
       a > b : 10 > 20 : 0
       c < d : 300 < 200 : 0
       e == f : 200 == 200 : 1
       ((c < d) || (e == f)) : 0 || 1 : 1
       (a > b) && ((c < d) || (e == f)) : 0 && 1 : 0

       answer is 0
    */
    puts("(a is greater than b)\n AND\n ((c is less than d) OR (e is equal to equal to f))");
    printf("rs = %d\n\n", rs);

    rs = !(a > b) || (c < d) && !(e == f);
    /* prediction :- a = 10, b = 20, c = 300, d = 200, e = 200, f = 200
       a > b : 10 > 20 : 0
       c < d : 300 < 200 : 0
       e == f : 200 == 200 : 1
       !(a > b) : !(0) : 1
       !(e == f): !(1) : 0
       !(a > b) || (c < d) : 1 || 0 : 1
       !(a > b) || (c < d) && !(e == f) : 1 && 0 : 0

       answer is 0
    */
    puts("not(a is greater than b) OR (c is less than d) AND not(e is equal to equal to f)");
    printf("rs = %d\n\n", rs);

    rs = !(a > b) || !(c < d) || (e == f);
    /* prediction :- a = 10, b = 20, c = 300, d = 200, e = 200, f = 200
       a > b : 10 > 20 : 0
       c < d : 300 < 200 : 0
       e == f : 200 == 200 : 1
       !(a > b) : !(0) : 1
       !(c < d) : !(0) : 1
       !(a > b) || !(c < d) : 1 || 1 : 1
       !(a > b) || !(c < d) || ( e == f) : 1 || 1 : 1

       answer is 1
    */
    puts("not(a is greater than b)\n OR\n not(c is less than d)\n OR\n (e is equal to equal to f)");
    printf("rs = %d\n\n", rs);

    rs = !(a > b) && ((c < d) && (e == f)) || ((a > b) && (c < d));
    /* prediction :- a = 10, b = 20, c = 300, d = 200, e = 200, f = 200
       a > b : 10 > 20 : 0
       c < d : 300 < 200 : 0
       e == f : 200 == 200 : 1
       !(a > b) : !(0) : 1
       ((c < d) && (e == f)) : 0 && 1 : 0
       !(a > b) && ((c < d) && (e == f)) : 1 && 0 : 0
       ((a > b) && (c < d)) : 0 && 0 : 0
       !(a > b) && ((c < d) && (e == f)) || ((a > b) && (c < d)) : 0 || 0 : 0

        answer is 0
    */
    puts("not(a is greater than b) AND ((c is less than d) AND (e is equal to equal to f))\n OR\n ((a is greater than b) AND (c is less than d))");
    printf("rs = %d\n\n", rs);

    rs = ((a > b) && (c < d)) || ((c < d) && (e == f)) || ((e == f) && (a > b));
    /* prediction :- a = 10, b = 20, c = 300, d = 200, e = 200, f = 200
       a > b : 10 > 20 : 0
       c < d : 300 < 200 : 0
       e == f : 200 == 200 : 1
       ((a > b) && (c < d)) : 0 && 0 : 0
       ((c < d) && (e == f)): 0 && 1 : 0
       ((e == f) && (a > b)): 1 && 0 : 0
       ((a > b) && (c < d)) || ((c < d) && (e == f)) : 0 || 0 : 0
       ((a > b) && (c < d)) || ((c < d) && (e == f)) || ((e == f) && (a > b)) : 0 || 0 : 0

       answer is 0
    */
    puts("( ((a is greater than b) AND (c is less than d))\n OR\n ((c is less than d) AND (e is equal to equal to f))\n OR\n ((e is equal to equal to f) AND (a is greater than b)) )");
    printf("rs = %d\n\n", rs);

    rs = ((a > b) || (c < d)) && ((c < d) || (e == f)) && ((e == f) || (a > b));
    /* prediction :- a = 10, b = 20, c = 300, d = 200, e = 200, f = 200
      a > b : 10 > 20 : 0
      c < d : 300 < 200 : 0
      e == f : 200 == 200 : 1
      ((a > b) || (c < d)) : 0 || 0 : 0
      ((c < d) || (e == f)): 0 || 1 : 1
      ((e == f) || (a > b)): 1 || 0 : 1
      ((a > b) || (c < d)) && ((c < d) || (e == f)) : 0 && 1 : 0
      ((a > b) || (c < d)) && ((c < d) || (e == f)) && ((e == f) || (a > b)) : 0 && 1 : 0

      answer is 0
   */
    puts("( ((a is greater than b) OR (c is less than d))\n AND\n ((c is less than d) OR (e is equal to equal to f))\n AND\n ((e is equal to equal to f) OR (a is greater than b)) )");
    printf("rs = %d\n\n", rs);

    exit(0);
}