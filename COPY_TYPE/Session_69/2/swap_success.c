#include <stdio.h>
#include <stdlib.h>

void swap(int *pa, int *pb);

int main(void)
{
    int m = 100;
    int n = 200;

    printf("main: addr(m)=%llu, addr(n)=%llu\n",
           (unsigned long long int)&m,
           (unsigned long long int)&n);
    printf("Berfore swap: m=%d n=%d\n", m, n);
    swap(&m, &n);
    printf("After swap: m=%d n=%d\n", m, n);

    exit(0);
}

void swap(int *pa, int *pb)
{
    int temp;
    printf("Inside the swap\n");
    printf("Address of pa = %llu\n", (unsigned long long int)&pa);
    printf("Address of pb = %llu\n", (unsigned long long int)&pb);
    printf("Address in pa = %llu\n", (unsigned long long int)pa);
    printf("Address in pb = %llu\n", (unsigned long long int)pb);

    temp = *pa;
    *pa = *pb;
    *pb = temp;

    return;
}

/* OUTPUT :-
main: addr(m)=20183568, addr(n)=20183572
Berfore swap: m=100 n=200
Inside the swap
Address of pa = 20183560
Address of pb = 20183564
Address in pa = 20183568
Address in pb = 20183572
After swap: m=200 n=100
*/