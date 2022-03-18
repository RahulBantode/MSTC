/*
    console calculator.
*/

#include <stdio.h>
#include <stdlib.h>

struct Number
{
    int number_1;
    int number_2;
};

struct Result
{
    int ADDITION;
    int SUBSTRACTION;
    int DIVISION;
    int MODULUS;
    int MULTIPLICATION;
};

int main(void)
{
    struct Number NUM;
    struct Result RES;

    printf("------------------------------------- \n");
    printf("Enter the Number_1 : ");
    scanf("%d", &NUM.number_1);
    printf("Enter the Number_2 : ");
    scanf("%d", &NUM.number_2);

    RES.ADDITION = NUM.number_1 + NUM.number_2;
    RES.SUBSTRACTION = NUM.number_1 - NUM.number_2;
    RES.DIVISION = NUM.number_1 / NUM.number_2;
    RES.MODULUS = NUM.number_1 % NUM.number_2;
    RES.MULTIPLICATION = NUM.number_1 * NUM.number_2;

    printf("-------- console calculator ---------- \n");
    printf("ADDITION : %d\n", RES.ADDITION);
    printf("SUBSTRACTION : %d\n", RES.SUBSTRACTION);
    printf("DIVISION : %d\n", RES.DIVISION);
    printf("MODULUS : %d\n", RES.MODULUS);
    printf("MULTIPLICATION : %d\n", RES.MULTIPLICATION);
    printf("------------------------------------- \n");
    exit(0);
}

/* OUTPUT :-
-------------------------------------
Enter the Number_1 : 55
Enter the Number_2 : 28
-------- console calculator ----------
ADDITION : 83
SUBSTRACTION : 27
DIVISION : 1
MODULUS : 27
MULTIPLICATION : 1540
-------------------------------------
*/