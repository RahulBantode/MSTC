/*
    Pointer Excercise on float data type
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Read :- float_variable is the name of variable of type float which is assigned to the value 3.14
    float float_variable = 3.14f;

    // Read :- pointer_float_variable is the name of variable of type float* which is store the address of
    //         variable float_variable the address of this variable is float.
    float *pointer_float_variable = &float_variable;

    printf("The sizeof (float_variable) : %d\n", (int)sizeof(float_variable));
    printf("The sizeof pointer_float_variable : %d\n", (int)sizeof(pointer_float_variable));
    puts("--------------");
    printf("The value of (float_variable) : %f\n", float_variable);
    printf("The address of (&float_variable) : %llu\n", (unsigned long long int)&float_variable);
    puts("--------------");
    printf("The address in (pointer_float_variable) : %llu\n", (unsigned long long int)pointer_float_variable);
    printf("The value of address in (*pointer_float_varialble) : %f\n", *pointer_float_variable);
    puts("--------------");
    printf("The address of (&pointer_float_variable) : %llu\n", (unsigned long long int)&pointer_float_variable);
    *pointer_float_variable = 22.7f;
    printf("The modified value of address in(pointer_float_variable) : %f\n", *pointer_float_variable);
    printf("The modified value of (float_variable) : %f\n", float_variable);

    exit(0);
}

/* OUTPUT
The sizeof (float_variable) : 4
The sizeof pointer_float_variable : 8
--------------
The value of (float_variable) : 3.140000
The address of (&float_variable) : 737210793216
--------------
The address in (pointer_float_variable) : 737210793216
The value of address in (*pointer_float_varialble) : 3.140000
--------------
The address of (&pointer_float_variable) : 737210793224
The modified value of address in(pointer_float_variable) : 22.700001
The modified value of (float_variable) : 22.700001
*/