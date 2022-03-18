/*
    pointer excercise on double data type
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Read :- double_variable is the name of the variable which data type is double and assigned the value 1500
    double double_variable = 1500;

    // Read :- pointer_double_variable is the variable name of type double* which is stored the address of
    //         double_variable variable which type is double.
    double *pointer_double_variable = &double_variable;

    printf("The sizeof (double_variable) : %zu\n", sizeof(double_variable));
    printf("The sizeof (pointer_double_variable) : %zu\n", sizeof(pointer_double_variable));
    puts("-----------------");
    printf("The value of (double_variable) : %lf\n", double_variable);
    printf("The address of the (&double_variable) : %llu\n", (unsigned long long int)&double_variable);
    puts("-----------------");
    printf("The address in (pointer_double_variable) : %llu\n", (unsigned long long int)pointer_double_variable);
    printf("The value of address in (*pointer_double_variable) : %lf\n", *pointer_double_variable);
    puts("-----------------");
    *pointer_double_variable = 3500;
    printf("The address of the (&pointer_double_variable) : %llu\n", (unsigned long long int)&pointer_double_variable);
    printf("The modified value of address in (*pointer_double_variable) : %lf\n", *pointer_double_variable);
    printf("The modified value of (double_variable) : %lf\n", double_variable);

    exit(0);
}

/* OUTPUT :-
The sizeof (double_variable) : 8
The sizeof (pointer_double_variable) : 8
-----------------
The value of (double_variable) : 1500.000000
The address of the (&double_variable) : 752345939512
-----------------
The address in (pointer_double_variable) : 752345939512
The value of address in (*pointer_double_variable) : 1500.000000
-----------------
The address of the (&pointer_double_variable) : 752345939504
The modified value of address in (*pointer_double_variable) : 3500.000000
The modified value of (double_variable) : 3500.000000
*/