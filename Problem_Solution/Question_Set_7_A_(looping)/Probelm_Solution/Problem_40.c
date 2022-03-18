#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for (i = 16; i > 0; i = i >> 3)
        printf("i = %d\n", i);

    exit(0);
}

/* OUTPUT :- correct as traced on notebook 
i = 16
i = 2
*/