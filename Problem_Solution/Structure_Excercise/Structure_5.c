/*
    product_name                    char*
    item_package_dimension          struct Dimension
    package_weight                  float
    item_weight                     float
    brand_name                      char*
    waranty_period                  char*
    model_name                      char*
    color                           char*
    material                        char*
    suggested_users                 char*
    number_of_item                  int
    manufacturer                    char*
    part_number                     char*
    included_components             char*
    size                            struct Size 
*/
#include <stdio.h>
#include <stdlib.h>

struct Dimension
{
    float length;
    float width;
    float height;
};

struct Size
{
    int feet;
    int inches;
};

struct Bicycle
{
    char *product_name;
    struct Dimension item_package_dimension;
    float package_weight;
    float item_weight;
    char *brand_name;
    char *warranty_period;
    char *model_name;
    char *color;
    char *material;
    char *suggested_users;
    int number_of_items;
    char *manufacturer;
    char *part_number;
    char *included_components;
    struct Size size;
};

int main(void)
{
    struct Bicycle byc;

    byc.product_name = "BICYCLE";
    byc.item_package_dimension.length = 52.5;
    byc.item_package_dimension.width = 27.0;
    byc.item_package_dimension.height = 8.6;
    byc.package_weight = 22.57;
    byc.brand_name = "Dynacraft";
    byc.warranty_period = "1 year warranty period";
    byc.model_name = "Dynacraft Slick Rock Trails Bike";
    byc.color = "Black";
    byc.material = "Steel";
    byc.suggested_users = "Womens";
    byc.number_of_items = 1;
    byc.manufacturer = "Dynacraft BSC Inc. (Dropship)";
    byc.part_number = "8210-49TJ";
    byc.included_components = "Bike(1)";
    byc.size.feet = 7;
    byc.size.inches = 23;

    printf("---------- Bicycle Specification ----------- \n");
    printf("Product Name : %s\n", byc.product_name);
    printf("Package Dimension : %f X %f X %f\n",
           byc.item_package_dimension.length,
           byc.item_package_dimension.width,
           byc.item_package_dimension.height);
    printf("package weight : %f\n", byc.package_weight);
    printf("Brand Name : %s\n", byc.brand_name);
    printf("Warranty Perido : %s\n", byc.warranty_period);
    printf("Model Name : %s\n", byc.model_name);
    printf("Color : %s\n", byc.color);
    printf("Material : %s\n", byc.material);
    printf("Suggested Users : %s\n", byc.suggested_users);
    printf("Number of Items : %d\n", byc.number_of_items);
    printf("Manufacturer : %s\n", byc.manufacturer);
    printf("Part Number : %s\n", byc.part_number);
    printf("Included Components : %s\n", byc.included_components);
    printf("Size : %d ' %d \"\n ", byc.size.feet, byc.size.inches);

    exit(0);
}

/* OUTPUT :-
---------- Bicycle Specification -----------
Product Name : BICYCLE
Package Dimension : 52.500000 X 27.000000 X 8.600000
package weight : 22.570000
Brand Name : Dynacraft
Warranty Perido : 1 year warranty period
Model Name : Dynacraft Slick Rock Trails Bike
Color : Black
Material : Steel
Suggested Users : Womens
Number of Items : 1
Manufacturer : Dynacraft BSC Inc. (Dropship)
Part Number : 8210-49TJ
Included Components : Bike(1)
Size : 7 ' 23 "
*/