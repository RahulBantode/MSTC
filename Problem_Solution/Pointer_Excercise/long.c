/*
    Pointer excercise on long
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Read :- long_variable is the name of variable which type has long and assigned to 500
    long long_variable = 500;
    // Read :- pointer_long_variable is the name of the variable which type is long* and which going to stored
    //         the address of the long_variable variable whose type is long.
    long *pointer_long_variable = &long_variable;

    printf("The sizeof (long_variable) : %d\n", (int)sizeof(long_variable));
    printf("The sizeof pointer_long_variable : %d\n", (int)sizeof(pointer_long_variable));
    puts("-----------------");
    printf("The value of (long_variable) : %ld\n", long_variable);
    printf("The address of (&long_variable) : %llu\n", (unsigned long long int)&long_variable);
    puts("-----------------");
    printf("The address in (pointer_loang_varaible) : %llu\n", (unsigned long long int)pointer_long_variable);
    printf("The value of address in (*pointer_long_variable) : %ld\n", *pointer_long_variable);
    puts("-----------------");
    *pointer_long_variable = 1000;
    printf("The address of (&pointer_long_variable) : %llu\n", (unsigned long long int)&pointer_long_variable);
    printf("The modified value of address in (*pointer_long_variable) : %ld\n", *pointer_long_variable);
    printf("The value of (long_variable) : %ld\n", long_variable);
    exit(0);
}

/* OUTPUT :-
The sizeof (long_variable) : 4
The sizeof pointer_long_variable : 8
-----------------
The value of (long_variable) : 500
The address of (&long_variable) : 352114964848
-----------------
The address in (pointer_loang_varaible) : 352114964848
The value of address in (*pointer_long_variable) : 500
-----------------
The address of (&pointer_long_variable) : 352114964856
The modified value of address in (*pointer_long_variable) : 1000
The value of (long_variable) : 1000

*/