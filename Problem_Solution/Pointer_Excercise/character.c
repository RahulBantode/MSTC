/*
    Pointer Excercise on Character data type
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Read :- character_variable is variable name which is the type of char assigned by 'R';
    char character_variable = 'R';
    // Read :- pointer_character_variable is variable name of type char * which is going to store the
    //         address of the char type variable.
    char *pointer_character_variable = &character_variable;

    printf("The size of (character_variable) : %d\n", (int)sizeof(character_variable));
    printf("The size of pointer_character_variable : %d\n", (int)sizeof(pointer_character_variable));
    puts("--------------");
    printf("The value of character_variable : %c\n", character_variable);
    printf("The Address of the (&character_variable) : %llu\n", (unsigned long long int)&character_variable);
    puts("--------------");
    printf("The Address in (pointer_character_variable) : %llu\n", (unsigned long long int)pointer_character_variable);
    printf("The value of address in (pointer_character_variable) : %c\n", *pointer_character_variable);
    puts("--------------");
    printf("The Address of (&pointer_character_variable) : %llu\n", (unsigned long long int)&pointer_character_variable);
    *pointer_character_variable = 'B';
    printf("The modified value of address in (*pointer_character_variable) : %c\n", *pointer_character_variable);
    printf("The modifed value of character_varaiable : %c\n", character_variable);
    exit(0);
}

/* OUTPUT :-
The size of (character_variable) : 1
The size of pointer_character_variable : 8
--------------
The value of character_variable : R
The Address of the (&character_variable) : 62565383616
--------------
The Address in (pointer_character_variable) : 62565383616
The value of address in (pointer_character_variable) : R
--------------
The Address of (&pointer_character_variable) : 62565383624
The modified value of address in (*pointer_character_variable) : B
The modifed value of character_varaiable : B
*/