#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 1;
    while (i < 16)
    {
        printf("i = %d\n", i);
        i *= 3;
    }

    exit(0);
}

/* OUTPUT :- correct as traced
i = 1
i = 3
i = 9
*/