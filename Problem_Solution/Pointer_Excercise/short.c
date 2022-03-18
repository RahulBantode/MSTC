/*
    Pointer excercise on short data type
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Read :- short_variable is the variable name of type short which is assigned to 10;
    short short_variable = 10;

    // Read :- pointer_short_variable is the variable name of type short * which is assigned the
    //         address of short_variable of type short
    short *pointer_short_variable = &short_variable;

    printf("The sizeof (short_variable) : %d\n", (int)sizeof(short_variable));
    printf("The sizeof (pointer_short_variable) : %d\n", (int)sizeof(pointer_short_variable));
    puts("-------------");
    printf("The value of (short_variable) : %hu\n", short_variable);
    printf("The address of (&short_variable) : %llu\n", (unsigned long long int)&short_variable);
    puts("-------------");
    printf("The address in (pointer_short_variable) : %llu\n", (unsigned long long int)pointer_short_variable);
    printf("The value of address in (*pointer_short_variable) : %hu\n", *pointer_short_variable);
    puts("-------------");
    printf("The address of (&pointer_short_variable) : %llu\n", (unsigned long long int)&pointer_short_variable);
    *pointer_short_variable = 20;
    printf("The modified value of address in(*pointer_short_variable) : %hu\n", *pointer_short_variable);
    printf("The modified value of (short_variable) : %hu\n", short_variable);

    exit(0);
}

/* OUTPUT :-
The sizeof (short_variable) : 2
The sizeof (pointer_short_variable) : 8
-------------
The value of (short_variable) : 10
The address of (&short_variable) : 1036287735744
-------------
The address in (pointer_short_variable) : 1036287735744
The value of address in (*pointer_short_variable) : 10
-------------
The address of (&pointer_short_variable) : 1036287735752
The modified value of address in(*pointer_short_variable) : 20
The modified value of (short_variable) : 20
*/