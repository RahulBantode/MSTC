/*  Define and initialize array of 10 integers in
    main()

    Send array and its size to a function namned
    calculate_sum()

    The function should return the summation of
    all elements in the array
*/

#include <stdio.h>
#include <stdlib.h>

int calculate_sum(int *ptr_to_first_array_element, int size);

int main(void)
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int summation_of_array_element;

    summation_of_array_element = 0;
    summation_of_array_element = calculate_sum(&arr[0], 10);
    printf("Summation of array elements = %d\n", summation_of_array_element);

    exit(0);
}

int calculate_sum(int *ptr_to_first_array_element, int size)
{
    int counter;
    int sum = 0;

    counter = 0;
    while (counter < size)
    {
        sum = sum + *(ptr_to_first_array_element + counter);
        counter = counter + 1;
    }

    return (sum);
}

/* OUTPUT :-
Summation of array elements = 550
*/