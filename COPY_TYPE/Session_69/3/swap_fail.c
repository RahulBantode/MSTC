#include <stdio.h>
#include <stdlib.h>

void swap(int x, int y);

int main(void)
{
    int p = 100;
    int q = 300;

    printf("Main: before : p = %d | q = %d\n", p, q);
    swap(p, q);
    printf("Main: After : p = %d | q = %d\n", p, q);
    exit(0);
}

void swap(int x, int y)
{
    int temp;
    printf("swap : before : x = %d | y = %d\n", x, y);
    temp = x;
    x = y;
    y = temp;
    printf("swap : before : x = %d | y = %d\n", x, y);
    return;
}

/* OUTPUT :-
Main: before : p = 100 | q = 300
swap : before : x = 100 | y = 300
swap : before : x = 300 | y = 100
Main: After : p = 100 | q = 300
*/