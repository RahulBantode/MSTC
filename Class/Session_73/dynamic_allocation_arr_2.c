/*
    S1 :- Define structure with following members
          n (int)
          s (short)
          m (long)

    S2 :- Allocate the structure instance dynamically using malloc.

    S3 :- write 100 on n, 200 on s, and 300 on m.

    S4 :- display n,s,m resply.

    S% :- free the instance of struct
*/

#include <stdio.h>
#include <stdlib.h>

struct A
{
    int n;
    short s;
    long m;
};

int main(void)
{
    struct A *p_struct = 0;

    p_struct = malloc(sizeof(struct A));

    if (p_struct == 0)
    {
        puts("Failed to allocate the memory");
        exit(-1);
    }

    p_struct->n = 100;
    p_struct->s = 200;
    p_struct->m = 300;

    printf("p_struct->n = %d\n", p_struct->n);
    printf("p_struct->s = %hd\n", p_struct->s);
    printf("p_struct->m = %ld\n", p_struct->m);

    free(p_struct);
    p_struct = 0;

    exit(0);
}

/* OUTPUT :-

p_struct->n = 100
p_struct->s = 200
p_struct->m = 300

*/