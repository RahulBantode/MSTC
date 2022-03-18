/*  Define and initialize array of 10 integers in
    main()

    Send array and its size to a function namned
    calculate_sum()

    The function should return the summation of
    all elements in the array
*/

#include <stdio.h>
#include <stdlib.h>

int calculate_sum(int *ptr_to_first_array_elm, int size);

int main(void)
{
    int arr[4] = {1, 2, 3, 4};
    int size = 4;
    int sum_of_array = 0;

    sum_of_array = calculate_sum(&arr[0], size);
    printf("Summation of array elements are : %d\n", sum_of_array);

    exit(0);
}

int calculate_sum(int *ptr_to_first_array_elm, int size)
{
    int counter;
    int sum = 0;

    for (counter = 0; counter < size; ++counter)
    {
        sum = sum + *(ptr_to_first_array_elm + counter);
    }

    return sum;
}

/* OUTPUT :-
Summation of array elements are : 10
*/