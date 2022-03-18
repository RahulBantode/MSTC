/*
    Pointer excercise on string (char *) data type
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Read :- string_variable is variable name of type char* which is assigned the value as "core code academy"
    //         in char* string_variable store the starting character address in it and then all remaining will
    //         be accessed by pointer arithmetic technique.(internal mechanism of this.)
    char *string_variable = "core code academy";

    // Read :- pointer_string_variable is variable name of type char* which going to store the address of type
    //         char** which is logically string type.
    char **pointer_string_variable = &string_variable;

    printf("The sizeof string_variable : %d\n", (int)sizeof(string_variable));
    printf("The sizeof pointer_string_variable : %d\n", (int)sizeof(pointer_string_variable));
    puts("--------------");
    printf("The value of (string_variable) : %s\n", string_variable);
    printf("The address of the (&string_variable) : %llu\n", (unsigned long long int)&string_variable);
    puts("--------------");
    printf("The address in (pointer_string_variable) : %llu\n", (unsigned long long int)pointer_string_variable);
    printf("The value of address in (*pointer_string_variable) : %s\n", *pointer_string_variable);
    puts("--------------");
    printf("The addrerss of (&pointer_string_variable) : %llu\n", (unsigned long long int)&pointer_string_variable);
    *pointer_string_variable = "Mr. Yogeshwar Shukl";
    printf("The modified value of address in (*pointer_string_variable) : %s\n", *pointer_string_variable);
    printf("The value of (string_variable) : %s\n", string_variable);
    exit(0);
}

/* OURPUT :-
The sizeof string_variable : 8
The sizeof pointer_string_variable : 8
--------------
The value of (string_variable) : core code academy
The address of the (&string_variable) : 249035749272
--------------
The address in (pointer_string_variable) : 249035749272
The value of address in (*pointer_string_variable) : core code academy
--------------
The addrerss of (&pointer_string_variable) : 249035749264
The modified value of address in (*pointer_string_variable) : Mr. Yogeshwar Shukl
The value of (string_variable) : Mr. Yogeshwar Shukl
*/