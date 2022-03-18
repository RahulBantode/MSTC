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

    // how to negative compound operation ?
    int p = 1;
    int q = 0;
    compound_negative_1(p, q);
    compound_negative_2(p, q);
    puts("=================================================");

    rs = (a > b) && (c > d);
    /*prediction :- a = 10, b = 20, c = 30, d = 25
        a > b = 10 > 20 = 0
        c > d = 30 > 25 = 1
        (a > b) && (c > d) = 0 && 1 = 0

        answer is = 0
    */
    printf("rs = %d\n", rs);

    rs = !((a > b) && (c > d));
    /* prediction :- a = 10, b = 20 , c= 30 , d= 25
        a > b = 10 > 20 = 0
        c > d = 30 > 25 = 1
        (a > b) && (c > d) = 0 && 1 = 0
        !((a > b) && (c > d)) = !(0) = 1

        answer is = 1
    */
    printf("rs = %d\n", rs);

    rs = !(a > b) || !(c > d);
    /* prediction :- a = 10, b = 20, c = 30 , d = 25
        a > b = 10 > 20 = 0
        c > d = 30 > 25 = 1
        !(a > b) = !(0) = 1
        !(c > d) = !(1) = 0
        !(a > b) || !(c > d) = 1 || 0 = 1

        answer is = 1
    */
    printf("rs = %d\n", rs);

    rs = !(a > b) && !(c > d);
    /* prediction :- a = 10 , b = 20 , c = 30 , d = 25
        a > b = 10 > 20 = 0
        c > d = 30 > 25 = 1
        !(a > b) = !(0) = 1
        !(c > d) = !(1) = 0
        !(a > b) && !(c > d) = 1 && 0 = 0

        answer is = 0
    */
    printf("rs = %d\n", rs);

    rs = (a <= b) && (c <= d);
    /*prediction :- a = 10 , b = 20 , c = 30 , d = 25
        a <= b : 10 <= 20 : 1
        c <= d : 30 <= 25 : 0
        (a <= b) && (c <= d) : 1 & 0 : 0

        answer is = 0
    */
    printf("rs = %d\n", rs);

    exit(0);
}

void compound_negative_1(int p, int q)
{
    // not(p and q) = (not p) or (not q)
    // let try to solve above equation :
    // not(p and q) = !(p && q)
    // (not p) or (not q) = (!p) || (!q)
    int lhs, rhs;

    lhs = !(p && q);
    /*prediction :- p=1,q=0
        p && q : 1 && 0 : 0
        !(0) : 1
    */

    rhs = (!p) || (!q);
    /*prediction :- p=1,q=0
        !p = !1 = 0
        !q = !0 = 1
        (!p) || (!q) = 0 || 1 = 1
    */

    if (lhs == rhs)
        puts("Hence prove that ------------- !(p && q) = (!p) || (!q) ");
}

void compound_negative_2(int p, int q)
{
    // not(p or q) = (not p) or (not q);
    //      not(p or q) = !(p || q)
    //      (not p) or (not q) = (!p) || (!q)

    int lhs, rhs;

    lhs = !(p || q);
    /* prediction :- p = 1 , q = 0
        (p || q) = 1 || 0 = 1
        !(p || q) = !(1) = 0
    */

    rhs = (!p) || (!q);
    /* prediction :- p = 1, q = 0
        !p = !1 = 0
        !q = !0 = 1
        (!p) || (!q) = 0 || 1 = 1
    */

    if (lhs == rhs)
    {
        puts("Hence is proved the property");
        puts(" !(p || q) = (!p) || (!q)");
    }
    else
    {
        puts("lhs and rhs are not same : so property not satisfied");
        puts("!(p || q) != (!p) || (!q)");
    }
}

/* OUTPUT :-
Hence prove that ------------- !(p && q) = (!p) || (!q)
lhs and rhs are not same : so property not satisfied
!(p || q) != (!p) || (!q)
=================================================
rs = 0
rs = 1
rs = 1
rs = 0
rs = 0
*/