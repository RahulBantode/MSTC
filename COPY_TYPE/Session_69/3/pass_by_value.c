#include <stdio.h>
#include <stdlib.h>

void test_function(int formal_1, int formal_2);

int main(void)
{
    int actual_1_local = 10, actual_2_local = 20;

    puts("Before call to test_function");
    printf("actual_1_local = %d | actual_2_local = %d", actual_1_local, actual_2_local);
    test_function(actual_1_local, actual_2_local);
    puts("After call to test_function");
    printf("actual_1_local = %d | actual_2_local = %d", actual_1_local, actual_2_local);

    exit(0);
}

void test_function(int formal_1, int formal_2)
{
    puts("Inside the test_function");

    printf("Before Assigning value");
    printf("Formal_1 : %d | Formal_2 : %d\n", formal_1, formal_2);

    formal_1 = 1031;
    formal_2 = 5093;

    printf("After assinging value");
    printf("Formal_1 : %d | Formal_2 : %d\n", formal_1, formal_2);

    puts("Returning from test_function");

    return;
}

/* OUTPUT :-
Before call to test_function
actual_1_local = 10 | actual_2_local = 20Inside the test_function
Before Assigning valueFormal_1 : 10 | Formal_2 : 20
After assinging valueFormal_1 : 1031 | Formal_2 : 5093
Returning from test_function
After call to test_function
actual_1_local = 10 | actual_2_local = 20
*/