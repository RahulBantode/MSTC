#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for (i = 5; i > 1; i = i - 1)
        printf("i = %d\n", i);

    exit(0);
}

/* OUTPUT :- correct as predicted
i = 5
i = 4
i = 3
i = 2
*/