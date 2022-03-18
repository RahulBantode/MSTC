#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for (i = 16; i > 0; i = i >> 2)
        printf("i =%d\n", i);

    exit(0);
}

/* OUTPUT :- correct
i = 16
i = 4
i = 1
*/