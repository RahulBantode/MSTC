/*
    structure pointer excercise
*/

#include <stdio.h>
#include <stdlib.h>

struct structure
{
    int number;
    char c;
};

int main(void)
{
    // Read :- SV is the variable name of type structure which have int number variable in it assigned the 100
    //         and it has c variable of type char which is assigned R.
    struct structure SV;
    SV.number = 100;
    SV.c = 'R';
    // Read :-  pointer_strucutre_variable is the name of variable of type structure which store the address of struture
    struct structure *pointer_structure_variable;
    pointer_structure_variable = &SV;

    printf("The size of Strucute SV : %d\n", (int)sizeof(SV));
    printf("The sizeof pointer_structure_variable : %zu\n", sizeof(pointer_structure_variable));
    puts("--------------------");
    printf("The address of (SV) : %llu\n", (unsigned long long int)&SV);
    printf("The address in (pointer_structure_variable) : %llu\n", (unsigned long long int)pointer_structure_variable);
    puts("--------------------");
    printf("The address of (SV.number) : %llu\n", (unsigned long long int)&SV.number);
    printf("The address of (SV.c) : %llu\n", (unsigned long long int)&SV.c);
    puts("--------------------");
    printf("The address of (&pointer_structure_variable->number) : %llu\n", (unsigned long long int)&pointer_structure_variable->number);
    printf("The address of (&pointer_structure_variable->c) : %llu\n", (unsigned long long int)&pointer_structure_variable->c);
    puts("--------------------");
    printf("The value of (SV.number) : %d\n", SV.number);
    printf("The value of (SV.c) : %c\n", SV.c);
    puts("--------------------");
    printf("The value of address in(*pointer_structure_variable->number) : %d\n", (*pointer_structure_variable).number);
    printf("The value of address in(*pointer_structure_variable->c) : %c\n", (*pointer_structure_variable).c);
    puts("--------------------");
    printf("The address of (&pointer_structure_variable) : %llu\n", (unsigned long long int)&pointer_structure_variable);
    exit(0);
}

/*conculusion :-
    The address of strucure is equal to the address of the first element of struture
*/

/* OUTPUT :-
The size of Strucute SV : 8
The sizeof pointer_structure_variable : 8
--------------------
The address of (SV) : 433749621248
The address in (pointer_structure_variable) : 433749621248
--------------------
The address of (SV.number) : 433749621248
The address of (SV.c) : 433749621252
--------------------
The address of (&pointer_structure_variable->number) : 433749621248
The address of (&pointer_structure_variable->c) : 433749621252
--------------------
The value of (SV.number) : 100
The value of (SV.c) : R
--------------------
The value of address in(*pointer_structure_variable->number) : 100
The value of address in(*pointer_structure_variable->c) : R
--------------------
The address of (&pointer_structure_variable) : 433749621256

*/
