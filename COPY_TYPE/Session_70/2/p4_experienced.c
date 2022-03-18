#include <stdio.h>
#include <stdlib.h>

int calculate_sum(int (*p)[4], int n);

int main(void)
{
    int arr[4] = {1, 2, 3, 4};
    int size = 4;
    int summation = 0;

    summation = calculate_sum(&arr, size);
    printf("Summation := %d\n", summation);

    exit(0);
}

int calculate_sum(int (*p)[4], int n)
{
    int cnt = 0, sum = 0;

    while (cnt < n)
    {
        sum += (*p)[cnt];
        ++cnt;
    }

    return (sum);
}

/* OUTPUT :-
Summation := 10
*/
