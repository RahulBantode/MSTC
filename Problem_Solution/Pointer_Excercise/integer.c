/*
    Pointer Excercise on the Integer
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Read :- int is datatype of integer_variable variable which is assigned to 100 value.
    int integer_variable = 100;
    // Read :- pointer_integer_variable is the name of pointer variable which is going to store the address
    //          of type of int and this is pointer variable for that it will be int* .
    int *pointer_intger_variable = &integer_variable;

    // %zu :- z is the length of modifier and u is unsigned type
    printf("The size of (integer_variable) : %zu\n", sizeof(integer_variable));
    printf("The size of (pointer_integer_variable) : %zu\n", sizeof(pointer_intger_variable));
    puts("--------------");
    printf("The value in integer variable : %d\n", integer_variable);
    printf("The address in pointer_integer_variable : %llu\n", (unsigned long long int)pointer_intger_variable);
    puts("--------------");
    printf("The address of integer variable (&integer_variable) : %llu\n", (unsigned long long int)&integer_variable);
    printf("The value in *pointer_integer_variable : %d\n", *pointer_intger_variable);
    puts("--------------");
    printf("The address of (&pointer_integer_variable) : %llu\n", (unsigned long long int)&pointer_intger_variable);
    *pointer_intger_variable = 200;
    printf("The value of address in (*pointer_integer_variable) : %d\n", *pointer_intger_variable);
    printf("The value of integer_variable : %d\n", integer_variable);
    exit(0);
}

/* OUTPUT :-
The size of (integer_variable) : 4
The size of (pointer_integer_variable) : 8
--------------
The value in integer variable : 100
The address in pointer_integer_variable : 921682573056
--------------
The address of integer variable (&integer_variable) : 921682573056
The value in *pointer_integer_variable : 100
--------------
The address of (&pointer_integer_variable) : 921682573064
The value of address in (*pointer_integer_variable) : 200
The value of integer_variable : 200

*/