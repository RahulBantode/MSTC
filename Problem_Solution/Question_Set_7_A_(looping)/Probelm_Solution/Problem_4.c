#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 0;
    while (i < 16)
    {
        printf("i = %d\n", i);
        i += 3;
    }
    exit(0);
}

/* OUTPUT :-  correct as traced on notebook
i = 0
i = 3
i = 6
i = 9
i = 12
i = 15
*/