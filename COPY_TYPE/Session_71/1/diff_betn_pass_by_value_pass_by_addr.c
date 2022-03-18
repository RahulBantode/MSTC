#include <stdio.h>
#include <stdlib.h>

void f1(int num);
void f2(int *p_num);

int main(void)
{
    int m = 1919;

    f1(m);  // pass integer m  by value
    f2(&m); // pass integer m by address

    exit(0);
}

void f1(int num)
{
    num = 300; /*local variable (m) in main will NOT BE AFFECTED */
}

void f2(int *p_num)
{
    *p_num = 394; /*local variable (m) in main will BE AFFECTED */
}

/* OUTPUT :-
    It doesn't display any output on console because
    in program there is no display function written
*/