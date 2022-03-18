/*
    Quadratic Equation Solver :

    Quadratic equation of single variable is stated as follows
    ax^2 + bx + c = 0 , where a,b,c  are real numbers and a != 0

    The roots of the equation are governed by following formula,

    r1 = (-b + undrRoot of b^2 - 4*a*c) / 2 * a

    r2 = (-b - undrRoot of b^2 - 4*a*c) / 2 * a

    Write a program which will,

    1. accept the a,b,c from the user.
    2. print the roots of the equation.
    3. do the validity check :-
       condition 1 : a != 0
       condition 2 : b^2 - 4ac >= 0
       (if those conditions are not met then print the messege  as follows
       'the equation ax^2 + bx + c = 0 does not have the roots in real'
       and exit from the code)
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int a, b, c;                    // a,b,c are the variable for equation
    int r1, r2;                     // r1,r2 are the variables for saving the roots in it
    int result_b_square_minus_4_ac; // storing the result of b^2 - 4 ac;

    printf("Enter the value for a : ");
    scanf("%d", &a);
    printf("Enter the value for b : ");
    scanf("%d", &b);
    printf("Enter the value for c : ");
    scanf("%d", &c);

    result_b_square_minus_4_ac = (b * b) - (4 * a * c);

    // validity check that
    // condition 1 : a!=0
    // condition 2 : b^2 - 4ac >= 0
    if ((a == 0) || (result_b_square_minus_4_ac <= 0))
    {
        printf("The equation %dx^2 + %dx + %d = 0  does not have the roots in real\n", a, b, c);
        exit(0);
    }

    // finding the roots of the equation.
    r1 = (-b + sqrt(result_b_square_minus_4_ac)) / 2 * a;
    r2 = (-b - sqrt(result_b_square_minus_4_ac)) / 2 * a;

    printf("The roots (r1) of equation %dx^2 + %dx + %d = 0 is | %d\n", a, b, c, r1);
    printf("The roots (r2) of equation %dx^2 + %dx + %d = 0 is | %d\n", a, b, c, r2);

    exit(0);
}

/* OUTPUT :-
Enter the value for a : 2
Enter the value for b : 8
Enter the value for c : 3
----------------------------------------------------------------
result_b_square_minus_4_ac : 40
The roots (r1) of equation 2x^2 + 8x + 3 = 0 is | -1
The roots (r2) of equation 2x^2 + 8x + 3 = 0 is | -14
-----------------------------------------------------------------
*/