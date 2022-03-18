/* 
    cm_brand                       char*
    cm_item_model_number           int
    cm_item_weight                 float
    cm_product_dimenstion          struct Dimension
    cm_item_dimension              struct Dimension
    cm_color                       char*
    cm_manufacturer                char*
    cm_asin                        char*
    cm_date_first_available        struct Date

*/

#include <stdio.h>
#include <stdlib.h>

struct Dimension
{
    int length;
    int width;
    int height;
};

struct Date
{
    int day;
    char *month;
    int year;
};

struct Computer_Specification
{
    char *cm_brand;
    int cm_item_model_number;
    float cm_item_weight;
    struct Dimension cm_product_dimension;
    struct Dimension cm_item_dimension;
    char *cm_color;
    char *cm_manufacturer;
    char *cm_asin;
    struct Date cm_date_first_available;
};

int main(void)
{
    struct Computer_Specification computer;

    computer.cm_brand = "HP";
    computer.cm_item_model_number = 1235323;
    computer.cm_item_weight = 9.94;
    computer.cm_product_dimension.length = 22;
    computer.cm_product_dimension.width = 8;
    computer.cm_product_dimension.height = 18;
    computer.cm_item_dimension.length = 24;
    computer.cm_item_dimension.width = 7;
    computer.cm_item_dimension.height = 18;
    computer.cm_color = "Jet Black";
    computer.cm_manufacturer = "Hewlett Packard";
    computer.cm_asin = "BO8BF4CZSV";
    computer.cm_date_first_available.day = 6;
    computer.cm_date_first_available.month = "September";
    computer.cm_date_first_available.year = 2020;

    printf("------------Computer Specification-------------\n");
    printf("Brand Name : %s\n", computer.cm_brand);
    printf("Item Model Number : %d\n", computer.cm_item_model_number);
    printf("Item Weight : %f\n", computer.cm_item_weight);
    printf("Product Dimension : %d x %d x %d \n",
           computer.cm_product_dimension.length,
           computer.cm_product_dimension.width,
           computer.cm_product_dimension.height);
    printf("Item Dimension : %d x %d x %d \n",
           computer.cm_item_dimension.length,
           computer.cm_item_dimension.width,
           computer.cm_item_dimension.height);
    printf("Color : %s\n", computer.cm_color);
    printf("Manufacturer : %s\n", computer.cm_manufacturer);
    printf("ASIN : %s\n", computer.cm_asin);
    printf("Date of first Available : %s %d, %d\n",
           computer.cm_date_first_available.month,
           computer.cm_date_first_available.day,
           computer.cm_date_first_available.year);

    exit(0);
}

/* OUTPUT :-
------------Computer Specification-------------
Brand Name : HP
Item Model Number : 1235323
Item Weight : 9.940000
Product Dimension : 22 x 8 x 18
Item Dimension : 24 x 7 x 18
Color : Jet Black
Manufacturer : Hewlett Packard
ASIN : BO8BF4CZSV
Date of first Available : September 6, 2020
*/