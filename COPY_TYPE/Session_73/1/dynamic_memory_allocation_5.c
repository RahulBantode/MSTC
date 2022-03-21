/*
    Demonstration of allocate the dynamic memory for
    Structure
*/

#include <stdio.h>
#include <stdlib.h>

/*
    S1: Define information structure A with following members.
        n of the type int.
        s of the type short.
        m of the type long.

    S2: Allocate structure instance dynamically using malloc.

    S3: Write 100 on n, 200 on s and 300 on m.

    S4: Display n, s, and m members of dynamically allocated
        instance of struct A.

    S5: Free dynamically allocated instance of struct A.
*/

struct A
{
    int n;
    short s;
    long int m;
};

int main(void)
{
    struct A *ptr;

    ptr = malloc(sizeof(struct A));

    if (ptr == 0)
    {
        puts("Failed to Allocate Memory");
        exit(-1);
    }

    ptr->n = 100;
    ptr->s = 2;
    ptr->m = 3423;

    printf("ptr->n = %d | ptr->s = %hd | ptr->m = %ld\n",
           ptr->n, ptr->s, ptr->m);

    exit(0);
}

/* OUTPUT :-
ptr->n = 100 | ptr->s = 2 | ptr->m = 3423
*/