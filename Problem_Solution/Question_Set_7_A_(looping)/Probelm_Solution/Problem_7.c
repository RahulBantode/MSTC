#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for (i = 0; i < 16; i += 6)
        printf("i = %d\n", i);

    exit(0);
}

/* OUTPUT :- correct as traced on notebook
i = 0
i = 6
i = 12
*/