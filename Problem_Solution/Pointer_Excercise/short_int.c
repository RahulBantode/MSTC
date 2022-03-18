/*
    pointer excercise on short_int
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Read :- short_int_variable is the name of the variable which type is short int which assigned by 31.
    short int short_int_variable = 31;
    // Read :- pointer_short_int_variable is name of variable of type short int * which is going to stored
    //         the address of short_int_variable whose type is short int
    short int *pointer_short_int_variable = &short_int_variable;

    printf("The size of short_int_variable : %d\n", (int)sizeof(short_int_variable));
    printf("The size of pointer_short_int_variable : %d\n", (int)sizeof(pointer_short_int_variable));
    puts("---------------");
    printf("The value of (short_int_variable) : %hu\n", short_int_variable);
    printf("The address of (&short_int_variable) : %llu\n", (unsigned long long int)&short_int_variable);
    puts("-------------");
    printf("The address in (pointer_short_int_variable) : %llu\n", (unsigned long long int)pointer_short_int_variable);
    printf("The value of address in (*pointer_short_int_variable) : %hu\n", *pointer_short_int_variable);
    puts("-------------");
    printf("The address of (&pointer_short_int_variable) : %llu\n", (unsigned long long int)&pointer_short_int_variable);
    *pointer_short_int_variable = 61;
    printf("The modified value of address in(*pointer_short_int_variable) : %hu\n", *pointer_short_int_variable);
    printf("The modified value of (short_int_variable) : %hu\n", short_int_variable);

    exit(0);
}

/* OUTPUT :-
The size of short_int_variable : 2
The size of pointer_short_int_variable : 8
---------------
The value of (short_int_variable) : 31
The address of (&short_int_variable) : 227523164992
-------------
The address in (pointer_short_int_variable) : 227523164992
The value of address in (*pointer_short_int_variable) : 31
-------------
The address of (&pointer_short_int_variable) : 227523165000
The modified value of address in(*pointer_short_int_variable) : 61
The modified value of (short_int_variable) : 61

*/