#include <stdio.h>
#include <stdlib.h>

void swap(int m, int n);

int main(void)
{
    int m = 10, n = 20;
    printf("main: before : m = %d | n = %d\n", m, n);
    swap(m, n);
    printf("main: before : m = %d | n = %d\n", m, n);
    exit(0);
}

void swap(int m, int n)
{
    int temp;
    printf("swap : start : m=%d n=%d\n", m, n);
    temp = m;
    m = n;
    n = temp;
    printf("swap : end : m=%d n=%d\n", m, n);
    return;
}

/* OUTPUT :-
main: before : m = 10 | n = 20
swap : start : m=10 n=20
swap : end : m=20 n=10
main: before : m = 10 | n = 20
*/