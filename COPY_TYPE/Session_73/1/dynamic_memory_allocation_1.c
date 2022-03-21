#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = 0;
    int m = 0;

    p = malloc(sizeof(int)); // dynamically memory allocation on heap of type int

    if (p == 0)
    {
        puts("Memory Allocation Failed");
        exit(-1);
    }
    printf("p = %llu\n", (unsigned long long int)p);

    /* Write 500 on address in p
       address in p = address of integer
       allocated using malloc
    */
    *p = 500;

    /*  read four byte from address in p
        and write on m
    */

    m = *p;
    printf("m = %d\n", m);

    /*  Mark address in p as free.
        i.e address in p will be
        in mapped but not in use state
        OR will be unmapped
    */
    free(p);
    p = 0;

    exit(0);
}

/*  OUTPUT :-
    p = 9525320
    m = 500
*/