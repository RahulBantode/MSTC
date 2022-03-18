/*
    Nested Structure
*/

#include <stdio.h>
#include <stdlib.h>

struct Main_Structure
{
    char *string;
    int array[4];

    struct Second_Structure
    {
        float f_var;
        double d_var;
        struct Third_Structure
        {
            short s_var;
        } Ts;
    } Ss;

    struct Another_Structure
    {
        int z;
        int f;
    } As;
};

int main(void)
{
    struct Main_Structure Ms;
    int i;
    Ms.string = "------------------------Rahul Bantode-------------------------";
    for (i = 0; i < 4; i++)
    {
        Ms.array[i] = 100 + i;
    }

    Ms.Ss.f_var = 3.14f;
    Ms.Ss.d_var = 59843;
    Ms.Ss.Ts.s_var = 2;
    Ms.As.z = 98;
    Ms.As.f = 29;

    printf("%s\n", Ms.string);
    for (i = 0; i < 4; i++)
        printf("array[%d] : %d\n", i, Ms.array[i]);
    printf("Float value : %f\n", Ms.Ss.f_var);
    printf("Double Value : %lf\n", Ms.Ss.d_var);
    printf("Short value : %hu\n", Ms.Ss.Ts.s_var);
    printf("Int value : %d\n", Ms.As.z);
    printf("Int value : %d\n", Ms.As.f);

    exit(0);
}

/* OUTPUT :-
------------------------Rahul Bantode-------------------------
array[0] : 100
array[1] : 101
array[2] : 102
array[3] : 103
Float value : 3.140000
Double Value : 59843.000000
Short value : 2
Int value : 98
Int value : 29
*/