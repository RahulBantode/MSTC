/*
    Material                char*
    Brand                   char*
    Theme                   char*
    Item_dimension          struct dimension
    Age Range               int
    item_weight             float
    country_of_origin       char*
    ASIN                    char*
    Manufacturer            char*
    mfg_Date                struct date
*/

#include <stdio.h>
#include <stdlib.h>

struct dimension
{
    float length;
    float width;
    float height;
};

struct date
{
    int day;
    char *month;
    int year;
};

struct Transformer
{
    char *material;
    char *brand;
    char *theme;
    struct dimension item_dimesion;
    int age_range;
    float item_weight;
    char *country_of_origin;
    char *asin;
    char *manufacturer;
    struct date mfg_date;
};

int main(void)
{
    struct Transformer trm;

    trm.material = "Plastic";
    trm.brand = "Transformer";
    trm.theme = "Movies";
    trm.item_dimesion.length = 2.5;
    trm.item_dimesion.width = 7.99;
    trm.item_dimesion.height = 5.88;
    trm.age_range = 8;
    trm.item_weight = 8.4;
    trm.country_of_origin = "Vietnam";
    trm.asin = "BASJ75464";
    trm.manufacturer = "Hasbro";
    trm.mfg_date.day = 1;
    trm.mfg_date.month = "Decemeber";
    trm.mfg_date.year = 2021;

    printf("-------------- Transformer Specification--------------\n");
    printf("Material : %s\n", trm.material);
    printf("Brand : %s\n", trm.brand);
    printf("Theme : %s\n", trm.theme);
    printf("Item Dimension : %f X %f X %f inches\n",
           trm.item_dimesion.length,
           trm.item_dimesion.width,
           trm.item_dimesion.height);
    printf("Age range : %d\n", trm.age_range);
    printf("Item Weight : %f\n", trm.item_weight);
    printf("Country of Origin :%s\n", trm.country_of_origin);
    printf("ASIN : %s\n", trm.asin);
    printf("Manufacturer : %s\n", trm.manufacturer);
    printf("MFG_Date : %s %d,%d\n",
           trm.mfg_date.month,
           trm.mfg_date.day,
           trm.mfg_date.year);

    exit(0);
}

/* OUTPUT :-
-------------- Transformer Specification--------------
Material : Plastic
Brand : Transformer
Theme : Movies
Item Dimension : 2.500000 X 7.990000 X 5.880000 inches
Age range : 8
Item Weight : 8.400000
Country of Origin :Vietnam
ASIN : BASJ75464
Manufacturer : Hasbro
MFG_Date : Decemeber 1,2021
*/
