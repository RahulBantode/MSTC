/*
    let ABCD be any quadrilateral
    let l(AB)=a, l(BC)=b, l(CD)=c, l(DA)=d -- l = length

    perimeter of square ABCD = a + b + c + d
    Area of square ABCD = square root of ((s-a) * (s-b) * (s-c) * (s-d))

    where s = sub_perimeter = (a + b + c + d) / 2

    write a program which will compute following :-
    1.accept the length of the square from user where variable name is a,b,c,d
    2.print the perimeter of quadrilateral
    3.print the area of quadrilateral

    validity check :-
        condition 1 : a>0,b>0,c>0,d>0.
        condition 2 : sum of any three side of quadrilateral is greater than forth

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int a, b, c, d;
    double perimeter_of_quadrilateral;
    double sub_perimeter;
    double area_of_quadrilateral;

    printf("Enter the value for a : ");
    scanf("%d", &a);
    printf("Enter the value for b : ");
    scanf("%d", &b);
    printf("Enter the value for c : ");
    scanf("%d", &c);
    printf("Enter the value for d : ");
    scanf("%d", &d);

    if ((a < 0) || (b < 0) || (c < 0) || (d < 0))
    {
        puts("Unable to compute the perimeter,area of traignle because the input of a,b,c are less than 0");
        printf("a = %d | b = %d | c = %d | d = %d\n", a, b, c, d);
        exit(0);
    }

    if ((a + b + c) > d)
    {
        if ((b + c + d) > a)
        {
            if ((c + d + a) > b)
            {
                if ((d + a + b) > c)
                {
                    perimeter_of_quadrilateral = a + b + c + d;
                    sub_perimeter = (a + b + c + d) / 2;
                    area_of_quadrilateral = sqrt((sub_perimeter - a) *
                                                 (sub_perimeter - b) *
                                                 (sub_perimeter - c) *
                                                 (sub_perimeter - d));

                    puts("--------------------------------------------------------------------------------");
                    printf("The perimeter of quadrilateral : %lf\n", perimeter_of_quadrilateral);
                    printf("The area of quadrilateral : %lf\n", area_of_quadrilateral);
                    puts("--------------------------------------------------------------------------------");
                }
                else
                {
                    puts("The sum of d+a+b is less than c which are not valid,so unable to calculate all the functionaliy of quadrilateral");
                    exit(0);
                }
            }
            else
            {
                puts("The sum of c+d+a is less than b which are not valid,so unable to calculate all the functionaliy of quadrilateral");
                exit(0);
            }
        }
        else
        {
            puts("The sum of b+c+d is less than a which are not valid,so unable to calculate all the functionaliy of quadrilateral");
            exit(0);
        }
    }
    else
    {
        puts("The sum of a+b+c is less than d which are not valid,so unable to calculate all the functionaliy of quadrilateral");
        exit(0);
    }

    exit(0);
}

/* OUTPUT :-
Enter the value for a : 1
Enter the value for b : 2
Enter the value for c : 3
Enter the value for d : 4
--------------------------------------------------------------------------------
The perimeter of quadrilateral : 10.000000
The area of quadrilateral : 4.898979
--------------------------------------------------------------------------------
*/