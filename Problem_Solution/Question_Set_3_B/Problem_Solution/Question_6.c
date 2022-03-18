/*
    consider circle with radius r
    its circumference is given by formula = 2 * pi * r
    where pi = 3.14

    Its area is given by formula = pi * r^2

    1. Accept the r from user
    2. print the circumference
    3. print the area

    validity check :-
        condition : r > 0

*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int r;
    float pi = 3.14f;
    double circumference_of_circle;
    double area_of_circle;

    printf("Enter in input value for radius : ");
    scanf("%d", &r);

    if (r < 0)
    {
        printf("The value of r : %d is less than zero, which should be greater than zero please enter correct value\n", r);
        exit(0);
    }

    circumference_of_circle = 2 * pi * r;
    area_of_circle = pi * (r * r);

    puts("-------------------------------------------------------------------------");
    printf("The Circumference of circle : %lf\n", circumference_of_circle);
    printf("The Area of circle : %lf\n", area_of_circle);
    puts("-------------------------------------------------------------------------");

    exit(0);
}

/* OUTPUT :-
Enter in input value for radius : 4
-------------------------------------------------------------------------
The Circumference of circle : 25.120001
The Area of circle : 50.240002
-------------------------------------------------------------------------
*/