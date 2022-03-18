/* Problem Statement :-
    let     m1      be the mass of object1,
    let     m2      be the mass of object2

    And let r   be the distance between them,

    The gravitational force of attraction is given by,
    (formula)
                F = G.m1.m2/r^2

    where G is universal contant of gravitation,
                G = 6.67 * 10 ^-11

    Write a program which will accept the m1,m2 and r
    from the user and calculate the gravitational force
    and print it on the console.

    Do the validity check for m1,m2,and r
    (hint:- m1,m2,and r should be positive)

    variables are :-
    m1  mass_1,
    m2  mass_2,
    r   distance_between
    F   gravitation_force
    G   constant_of_gravitation
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float mass_1;
    float mass_2;
    float distance_between;
    float gravitation_force;
    float constant_of_gravitation;

    printf("Enter the mass for object 1 : ");
    scanf("%f", &mass_1);
    printf("Enter the mass for object 2 : ");
    scanf("%f", &mass_2);
    printf("Enter the distance between mass of object_1 and object_2 : ");
    scanf("%f", &distance_between);

    if ((mass_1 < 0) && (mass_2 < 0) && (distance_between < 0))
    {
        puts("please enter the positive integers");
        exit(0);
    }

    constant_of_gravitation = pow((6.66 * 10), 11);
    printf("Constant of gravitation : %f", constant_of_gravitation);
    // gravitation_force = (constant_of_gravitation * mass_1 * mass_2) / distance_between * distance_between;
    // printf("Gravitational force of attraction between 2 objects are : %f\n", gravitation_force);
    exit(0);
}