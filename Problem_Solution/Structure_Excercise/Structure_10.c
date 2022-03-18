/*
    Brand           char*
    Active          char*
    Ingredients     char*
    Specific_use_for char*
    use_for         char*
    item_form       char*
    price           int
    package_quntity int
    date_of_available struct date
*/

#include <stdio.h>
#include <stdlib.h>

struct date
{
    int day;
    char *month;
    int year;
};

struct Anbesol
{
    char *brand;
    char *active;
    char *ingredients;
    char *specific_use_for;
    char *item_form;
    char *liquid_form;
    char *use_for;
    int price;
    int package_quantity;
    struct date date_of_available;
};

int main(void)
{
    struct Anbesol anb;

    anb.brand = "Anbesol";
    anb.active = "Allantoin, Benzacoaine,Camphor";
    anb.specific_use_for = "Unflavored";
    anb.use_for = "Face";
    anb.liquid_form = "Liquid";
    anb.price = 458;
    anb.package_quantity = 2;
    anb.date_of_available.day = 3;
    anb.date_of_available.month = "December";
    anb.date_of_available.year = 2021;

    printf("--------- Anbesol -----------\n");
    printf("Brand : %s\n", anb.brand);
    printf("Acive : %s\n", anb.active);
    printf("Specifice use for : %s\n", anb.specific_use_for);
    printf("Use for :%s\n", anb.use_for);
    printf("Liquid Form : %s\n", anb.liquid_form);
    printf("Price : %s\n", anb.liquid_form);
    printf("Price : %d\n", anb.price);
    printf("Package Quantity : %d\n", anb.package_quantity);
    printf("Date of first Available : %s %d,%d\n",
           anb.date_of_available.month,
           anb.date_of_available.day,
           anb.date_of_available.year);

    exit(0);
}

/* OUTPUT :-
--------- Anbesol -----------
Brand : Anbesol
Acive : Allantoin, Benzacoaine,Camphor
Specifice use for : Unflavored
Use for :Face
Liquid Form : Liquid
Price : Liquid
Price : 458
Package Quantity : 2
Date of first Available : December 3,2021
*/