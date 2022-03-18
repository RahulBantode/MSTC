/*
    pointer excercise on int array
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int counter;
    int array[] =
        {
            10,
            20,
            30,
            40,
            50,
        };

    int *pointer_array = &array;

    printf("The sizeof array : %d\n", (int)sizeof(array));
    printf("The size of pointer_array : %d\n", (int)sizeof(pointer_array));
    puts("-----------");
    printf("The address of (&array) : %llu\n", (unsigned long long int)&array);
    printf("The address in (pointer_array) : %llu\n", (unsigned long long int)pointer_array);
    printf("The address of (&array[0] : %llu\n", (unsigned long long int)&array[0]);
    printf("The address of (&pointer_array) : %llu\n", (unsigned long long int)&pointer_array);
    puts("-----------");
    for (counter = 0; counter < 5; ++counter)
    {
        printf("The value of array[%d] : %d\n", counter + 1, array[counter]);
        printf("The value of address in (pointer_array):%d : %d\n", counter + 1, *(pointer_array + counter));
    }
    exit(0);
}

/* Conclusion :-
    The base address of array is equal to the first element address of the array
*/

/* OUTPUT :-
The sizeof array : 20
The size of pointer_array : 8
-----------
The address of (&array) : 41070623360
The address in (pointer_array) : 41070623360
The address of (&array[0] : 41070623360
The address of (&pointer_array) : 41070623352
-----------
The value of array[1] : 10
The value of address in (pointer_array):1 : 10
The value of array[2] : 20
The value of address in (pointer_array):2 : 20
The value of array[3] : 30
The value of address in (pointer_array):3 : 30
The value of array[4] : 40
The value of address in (pointer_array):4 : 40
The value of array[5] : 50
The value of address in (pointer_array):5 : 50
*/