#include <stdio.h>
#include <stdlib.h>

void swap(int m, int n);

int main(void)
{
    int m = 100, n = 200;
    printf("main: before call to swap : m=%d, n=%d\n", m, n);
    swap(m, n);
    printf("main: After call to swap: m=%d, n=%d\n", m, n);
    return (0);
}

void swap(int m, int n)
{
    int temp;
    printf("swap: start: m=%d, n=%d\n", m, n);
    temp = m;
    m = n;
    n = temp;
    printf("swap: end: m=%d, n=%d\n", m, n);
    return;
}

/* OUTPUT :-
main: before call to swap : m=100, n=200
swap: start: m=100, n=200
swap: end: m=200, n=100
main: After call to swap: m=100, n=200
*/