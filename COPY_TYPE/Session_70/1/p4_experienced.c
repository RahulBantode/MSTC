#include <stdio.h>
#include <stdlib.h>

int calculate_sum(int (*p)[10],
                  int n);

int main(void)
{
    int arr[10] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    int S;
    puts("Summation of array - experienced");
    S = calculate_sum(&arr, 10);
    printf("S = %d\n", S);
    return (0);
}

int calculate_sum(int (*p)[10], int n)
{
    int i, sum;

    sum = 0;

    for (i = 0; i < n; ++i)
    {
        sum = sum + (*p)[i];
    }

    return (sum);
}

/* OUTPUT :-
Summation of array - experienced
S = 5500
*/