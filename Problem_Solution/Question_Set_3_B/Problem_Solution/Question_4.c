/*
    Let ABC be any triangle by convention the length of the side opposite to
    angle A is denoted by a, that of angle B is denoted as b, and angle C is
    denoted as c,

    The perimeter of the triangle is govrened by the formula :-
    perimeter of triabngle abc = a + b + c

    The Area of traignel is govenred by the formula :-
    Area of triangle abc = square root of (s * (s-a) * (s-b) * (s-c))
    where s = semi perimeter of triangle = formula = (a+b+c)/2

    measure of angle A (in radians) = cos^-1 (b^2+c^2-a^2) / 2*b*c

    measure of angle B (in radians) = cos^-1 (c^2+a^2-b^2) / 2*c*a

    measure of angle C (in radians) = cos^-1 (a^2+b^2-c^2) / 3*a*b

    Write the prgram which will do follwing task :-
    1. accept the a,b,c from the user.
    2. calculate the perimeter of the traingle and print it.
    3. calculate the Ara of traingle and print it.
    4. calculate and print the measures of all angle of traigle in radians in degrees.

    Validity check :
    1. a > 0, b > 0 , c > 0
    2. sum of two side should not greater than third side.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int a, b, c;
    double perimeter_of_triangle;
    double sub_perimeter_of_triangle;
    double area_of_triangle;
    double measure_angle_of_A;
    double measure_angle_of_B;
    double measure_angle_of_C;
    float pi = 3.14f;
    double measure_angle_in_degree_A;
    double measure_angle_in_degree_B;
    double measure_angle_in_degree_C;

    printf("Enter the value for a : ");
    scanf("%d", &a);
    printf("Enter the value for b : ");
    scanf("%d", &b);
    printf("Enter the value for c : ");
    scanf("%d", &c);

    if ((a < 0) || (b < 0) || (c < 0))
    {
        puts("Unable to compute the perimeter,area of traignle because the input of a,b,c are less than 0");
        printf("a = %d | b = %d | c = %d\n", a, b, c);
        exit(0);
    }

    if ((a + b) > c)
    {
        if ((b + c) > a)
        {
            if ((c + a) > b)
            {
                perimeter_of_triangle = a + b + c;
                sub_perimeter_of_triangle = (a + b + c) / 2;
                area_of_triangle = sqrt(sub_perimeter_of_triangle *
                                        (sub_perimeter_of_triangle - a) *
                                        (sub_perimeter_of_triangle - b) *
                                        (sub_perimeter_of_triangle - c));

                measure_angle_of_A = acos(((b * b) + (c * c) - (a * a)) / (2 * b * c));
                measure_angle_of_B = acos(((c * c) + (a * a) - (b * b)) / (2 * c * a));
                measure_angle_of_C = acos(((a * a) + (b * b) - (c * c)) / (2 * a * b));

                measure_angle_in_degree_A = measure_angle_of_A * (180 / pi);
                measure_angle_in_degree_B = measure_angle_of_B * (100 / pi);
                measure_angle_in_degree_C = measure_angle_of_C * (100 / pi);

                puts("---------------------------------------------------------------------------");
                printf("The perimeter of triangle : %lf\n", perimeter_of_triangle);
                printf("Area of triangle : %lf\n", area_of_triangle);
                printf("measure_angle_of_A : %lf radians\n", measure_angle_of_A);
                printf("measure_angle_of_B : %lf radians\n", measure_angle_of_B);
                printf("measure_angle_of_C : %lf radians\n", measure_angle_of_C);
                printf("measure_angle_of_A : %lf degree\n", measure_angle_in_degree_A);
                printf("measure_angle_of_B : %lf degree\n", measure_angle_in_degree_B);
                printf("measure_angle_of_C : %lf degree\n", measure_angle_in_degree_C);
                puts("---------------------------------------------------------------------------");
            }
            else
            {
                puts("Sum of c+a is grater than b so unable to computer area and perimeter of triangle");
                exit(0);
            }
        }
        else
        {
            puts("Sum of b+c is grater than a so unable to computer area and perimeter of triangle");
            exit(0);
        }
    }
    else
    {
        puts("Sum of a+b is grater than c so unable to computer area and perimeter of triangle");
        exit(0);
    }

    exit(0);
}

/* OUTPUT :-
Enter the value for a : 10
Enter the value for b : 20
Enter the value for c : 25
---------------------------------------------------------------------------
The perimeter of triangle : 55.000000
Area of triangle : 80.162335
measure_angle_of_A : 1.570796 radians
measure_angle_of_B : 1.570796 radians
measure_angle_of_C : 1.570796 radians
measure_angle_of_A : 90.045649 degree
measure_angle_of_B : 50.025361 degree
measure_angle_of_C : 50.025361 degree
---------------------------------------------------------------------------

*/