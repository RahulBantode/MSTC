#include <stdio.h>
#include <stdlib.h>

void swap(int *pa, int *pb);

int main(void)
{
    int m = 200;
    int n = 300;

    printf("main: addr(m) : %llu | addr(n) : %llu\n",
           (unsigned long long int)&m,
           (unsigned long long int)&n);

    printf("Before :  m = %d , n = %d\n", m, n);
    swap(&m, &n);
    printf("After :  m = %d , n = %d\n", m, n);
    exit(0);
}

void swap(int *pa, int *pb)
{
    int tmp;
    printf("Inside the swap\n");
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;

    return;
}

/* OUTPUT :-
main: addr(m) : 20183956 | addr(n) : 20183960
Before :  m = 200 , n = 300
Inside the swap
After :  m = 300 , n = 200
*/