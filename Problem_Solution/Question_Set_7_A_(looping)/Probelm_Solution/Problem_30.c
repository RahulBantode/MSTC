#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for (i = 16; i > 0; i = i - 2)
        printf("i = %d\n", i);

    exit(0);
}

/* OUTPUT :- correct as predicted
i = 16
i = 14
i = 12
i = 10
i = 8
i = 6
i = 4
i = 2

*/
