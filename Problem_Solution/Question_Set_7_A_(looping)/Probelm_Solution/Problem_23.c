#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for (i = 1; i < 16; ++i)
        printf("i = %d\n", i);

    exit(0);
}

/* OUTPUT :- correct as predicted
i = 1
i = 2
i = 3
i = 4
i = 5
i = 6
i = 7
i = 8
i = 9
i = 10
i = 11
i = 12
i = 13
i = 14
i = 15
*/