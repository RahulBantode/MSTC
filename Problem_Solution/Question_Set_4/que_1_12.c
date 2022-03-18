/*
    Evaluate the value in rs variables
*/

#include <stdio.h>
#include <stdlib.h>

void compound_negative_1(int p, int q);
void compound_negative_2(int p, int q);

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

    // Complex Conditions

    rs = (a > b) || (c <= d) || (d == e);
    /* prediction :- a = 10, b = 20 , c = 30 , d = 25 , e = 50
        a > b  : 10 > 20  : 0
        c <= d : 30 <= 25 : 0
        d == e : 25 == 50 : 0
        (a > b) || (c <= d) || (d == e) : 0 || 0 || 0 = 0 || 0 = 0

        answer is = 0
    */
    printf("rs = %d\n", rs);

    rs = (a < b) && (c > d) && (d == e);
    /* prediction :-  a = 10, b = 20 , c = 30 , d = 25 , e = 50
        a < b  : 10 < 20  : 1
        c > d  : 30 > 25  : 1
        d == e : 25 == 50 : 0
        (a < b) && (c > d) && (d == e) : 1 && 1 && 0 : 1 && 0 : 0

        answer is 0
    */
    printf("rs = %d\n", rs);

    rs = !(a < b) && !(c > d) && !(d == e);
    /* prediction :-  a = 10, b = 20 , c = 30 , d = 25 , e = 50
        a < b  : 10 < 20  : 1
        !(a < b): !(1)    : 0
        c > d  : 30 > 25  : 1
        !(c > d): !(1)    : 0
        d == e : 25 == 50 : 0
        !(d == e): !(0)   : 1
        !(a < b) && !(c > d) && !(d == e) : 0 && 0 && 1 : 0 && 1 : 0

        answer is 0
    */
    printf("rs = %d\n", rs);

    rs = !(a < b) || !(c > d) || !(d == e);
    /*  prediction :-  a = 10, b = 20 , c = 30 , d = 25 , e = 50
        a < b  : 10 < 20  : 1
        !(a < b): !(1)    : 0
        c > d  : 30 > 25  : 1
        !(c > d): !(1)    : 0
        d == e : 25 == 50 : 0
        !(d == e): !(0)   : 1
        !(a < b) || !(c > d) || !(d == e) : 0 || 0 || 1 : 0 || 1 : 1

        answer is 1
    */
    printf("rs = %d\n", rs);

    rs = (a == b) || (b == c) || (c == d) || (d == e);
    /* prediction :- a = 10, b = 20 , c = 30 , d = 25 , e = 50
        a == b : 10 == 20 : 0
        b == c : 20 == 30 : 0
        c == d : 30 == 25 : 0
        d == e : 25 == 50 : 0
        (a == b) || (b == c) : 0 || 0 = 0
        (c == d) || (d == e) : 0 || 0 = 0
        (a == b) || (b == c) || (c == d) || (d == e) : 0 || 0 = 0

        answer is 0
    */
    printf("rs = %d\n", rs);

    rs = (a == b) && (b == c) && (c == d) && (d == e);
    /* prediction :- a = 10, b = 20 , c = 30 , d = 25 , e = 50
         a == b : 10 == 20 : 0
         b == c : 20 == 30 : 0
         c == d : 30 == 25 : 0
         d == e : 25 == 50 : 0
         (a == b) && (b == c) : 0 && 0 : 0
         (c == d) && (d == e) : 0 && 0 : 0
         (a == b) && (b == c) && (c == d) && (d == e) : 0 && 0 : 0

         answer is 0
     */
    printf("rs = %d\n", rs);

    exit(0);
}

/* OUTPUT :-
rs = 0
rs = 0
rs = 0
rs = 1
rs = 0
rs = 0
*/
