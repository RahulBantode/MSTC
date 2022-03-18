#include <stdio.h>
#include <stdlib.h>

void swap(int x, int y);

int main(void)
{
    int m = 100, n = 200;
    printf("main:before call to swap:m=%d,n=%d\n", m, n);
    swap(m, n);
    printf("main:after call to swap:m=%d,n=%d\n", m, n);
    return (0);
}

void swap(int x, int y)
{
    int temp;
    printf("swap: start : x=%d, y=%d\n", x, y);
    temp = x;
    y = x;
    y = temp;
    printf("swap: end : x=%d, y=%d\n", x, y);
    return;
}

/* OUTPUT :-
main:before call to swap:m=100,n=200
swap: start : x=100, y=200
swap: end : x=100, y=100
main:after call to swap:m=100,n=200
*/