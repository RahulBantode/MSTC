/*
    wear_type                   char*
    wash_type                   char*
    size                        char*
    material                    char*
    sleeve_type                 char*
   
    All above fields comes in one structure name as Cloth
    
    item_model_number           int
    department                  char*
    price                       int
    Date                        struct date
    manufacturer                char*
*/

#include <stdio.h>
#include <stdlib.h>

struct Date
{
    int day;
    char *month;
    int year;
};

struct Cloth
{
    char *wear_type;
    char *wash_type;
    char *size;
    char *material;
    char *sleeve_type;
};

struct Cloth_Specification
{
    int item_model_number;
    char *department;
    int price;
    struct Date date;
    char *manufacturer;
    struct Cloth cloth;
};

int main(void)
{
    struct Cloth_Specification clspec;

    clspec.item_model_number = 948343;
    clspec.department = "Women";
    clspec.price = 899;
    clspec.date.day = 6;
    clspec.date.month = "August";
    clspec.date.year = 2021;
    clspec.manufacturer = "perter england";
    clspec.cloth.wear_type = "Regular";
    clspec.cloth.wash_type = "Machine wash";
    clspec.cloth.material = "polyster";
    clspec.cloth.sleeve_type = "Full";
    clspec.cloth.size = "medium";

    printf("------------ Cloth Specification ------------\n");
    printf("Model Number : %d\n", clspec.item_model_number);
    printf("Department : %s\n", clspec.department);
    printf("price : %d\n", clspec.price);
    printf("Date : %s %d, %d\n",
           clspec.date.month,
           clspec.date.day,
           clspec.date.year);
    printf("Manufacturer : %s\n", clspec.manufacturer);
    printf("Wear Type : %s\n", clspec.cloth.wear_type);
    printf("Wash Type : %s\n", clspec.cloth.wash_type);
    printf("Material : %s\n", clspec.cloth.material);
    printf("Sleeve type : %s\n", clspec.cloth.sleeve_type);
    printf("Size : %s\n", clspec.cloth.size);

    exit(0);
}

/* OUTPUT :-
------------ Cloth Specification ------------
Model Number : 948343
Department : Women
price : 899
Date : August 6, 2021
Manufacturer : perter england
Wear Type : Regular
Wash Type : Machine wash
Material : polyster
Sleeve type : Full
Size : medium
*/