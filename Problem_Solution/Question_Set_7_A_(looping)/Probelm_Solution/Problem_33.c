#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 16;
    while (i >= 0)
    {
        printf("i = %d\n", i);
        i = i - 4;
    }
    exit(0);
}

/* OUTPUT :- correct as predicted
i = 16
i = 12
i = 8
i = 4
i = 0
*/