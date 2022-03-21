/*
    Allocate the memory for array dynamically,
    And accept the sizeof array from user
    And then display the accepted array on standard device
    And then make the sum of all the elments inside the
    array
    And display on the console.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size_of_array = 0;
    int *p_arr = 0;
    int i;
    int sum = 0;

    printf("Enter the size of array :");
    scanf("%d", &size_of_array);

    if (size_of_array <= 0)
    {
        puts("Invalid array size . Exiting.");
        exit(-1);
    }

    p_arr = malloc(size_of_array * sizeof(int));

    if (p_arr == 0)
    {
        puts("memmory allocation failed");
        exit(-1);
    }

    for (i = 0; i < size_of_array; ++i)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", (p_arr + i));
    }

    for (i = 0; i < size_of_array; ++i)
        sum += *(p_arr + i);

    printf("The sum of array : %d\n", sum);

    free(p_arr);
    p_arr = 0;
}

/* OUTPUT :-
Enter the size of array :5
Enter the element 1 : 10
Enter the element 2 : 20
Enter the element 3 : 30
Enter the element 4 : 40
Enter the element 5 : 50
The sum of array : 150

*/