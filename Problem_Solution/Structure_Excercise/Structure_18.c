/*
    Structure Excercise
*/

#include <stdio.h>
#include <stdlib.h>

struct Dimension
{
    float x;
    float y;
    float z;
};

struct Keyboard
{
    double item_weight;
    struct Dimension dms;
    char *Manufacturer;
    char *ASIN;
    char *country_of_origin;
    struct Date
    {
        int day;
        char *month;
        int year;
    } date;
};

int main(void)
{
    struct Keyboard key;

    key.item_weight = 1.08;
    key.dms.x = 12.64;
    key.dms.y = 5.16;
    key.dms.z = 2.05;
    key.Manufacturer = "SnpurTech";
    key.ASIN = "B097T276QL";
    key.country_of_origin = "China";
    key.date.day = 7;
    key.date.month = "June";
    key.date.year = 2021;

    puts("=================== Keyboard Specification ==================");
    printf("Package Dimension :- %f X %f X %f X\n", key.dms.x,
           key.dms.y,
           key.dms.z);
    printf("Item Weight :- %lf\n", key.item_weight);
    printf("Manufacturer :- %s\n", key.Manufacturer);
    printf("ASIN :- %s\n", key.ASIN);
    printf("Country of origin : %s\n", key.country_of_origin);
    printf("Date : %s %d , %d\n", key.date.month,
           key.date.day,
           key.date.year);

    exit(0);
}

/* OUTPUT :-
=================== Keyboard Specification ==================
Package Dimension :- 12.640000 X 5.160000 X 2.050000 X
Item Weight :- 1.080000
Manufacturer :- SnpurTech
ASIN :- B097T276QL
Country of origin : China
Date : June 7 , 2021


*/
