#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for (i = 1; i < 16; i *= 5)
        printf("i = %d\n", i);

    exit(0);
}

/* OUTPUT :- correct as traced
i = 1
i = 5
*/