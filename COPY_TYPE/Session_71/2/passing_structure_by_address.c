#include <stdio.h>
#include <stdlib.h>

struct TEST
{
    int num;
    char c;
    float f;
};

/*
    The function show accepts an address of
    instance of struct Test as actual parameter
    and catches the address in pointer to struct Test
    in formal parameter.

    Role of the function is to show the contents of
    the input struct Test instance
*/
void show(struct TEST *p_instance_of_struct_test);

int main(void)
{
    struct TEST t;

    t.num = 1000;
    t.c = 'R';
    t.f = 3.14;

    show(&t);

    exit(0);
}

void show(struct TEST *p_instance_of_struct_test)
{
    printf("Member (num) = %d\n", p_instance_of_struct_test->num);
    printf("Member (c) = %c\n", p_instance_of_struct_test->c);
    printf("Member (f) = %f\n", p_instance_of_struct_test->f);
}

/* OUTPUT :-
Member (num) = 1000
Member (c) = R
Member (f) = 3.140000

*/