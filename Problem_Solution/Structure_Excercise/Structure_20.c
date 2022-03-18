#include <stdio.h>
#include <stdlib.h>

struct Corelle
{
    char *shape;
    char *color;
    char *material;
    char *brand;
    char *collection_name;
    float price;
    struct dimension
    {
        float x;
        float y;
        float z;
    } dm;
    float item_weight;
    char *manufacturer;
    char *ASIN;
    char *country;
    float volume;
    char *warranty;
};

int main(void)
{
    struct Corelle crl;

    crl.shape = "Round";
    crl.color = "white";
    crl.material = "glass";
    crl.brand = "corelle";
    crl.collection_name = "18 pieces";
    crl.price = 56.89;
    crl.dm.x = 11.0;
    crl.dm.y = 10.5;
    crl.dm.z = 13.1;
    crl.item_weight = 9.99;
    crl.manufacturer = "Corelle";
    crl.ASIN = "B03483MYM";
    crl.country = "USA";
    crl.volume = 0.53;
    crl.warranty = "3 years";

    puts("=========== Specification ============= \n");
    printf("Shape : %s\n", crl.shape);
    printf("Color : %s\n", crl.color);
    printf("Material : %s\n", crl.material);
    printf("Brand : %s\n", crl.brand);
    printf("Collection Name : %s\n", crl.collection_name);
    printf("Price : %f\n", crl.price);
    printf("Dimesion : %f X %f X %f inches\n",
           crl.dm.x,
           crl.dm.y,
           crl.dm.z);
    printf("Item weight : %f\n", crl.item_weight);
    printf("Manufacturer : %s\n", crl.manufacturer);
    printf("ASIN : %s\n", crl.ASIN);
    printf("Country : %s\n", crl.country);
    printf("Volume : %f cubic feet\n", crl.volume);
    printf("warranty : %s\n", crl.warranty);

    exit(0);
}

/* OUTPUT :-
=========== Specification =============

Shape : Round
Color : white
Material : glass
Brand : corelle
Collection Name : 18 pieces
Price : 56.889999
Dimesion : 11.000000 X 10.500000 X 13.100000 inches
Item weight : 9.990000
Manufacturer : Corelle
ASIN : B03483MYM
Country : USA
Volume : 0.530000 cubic feet
warranty : 3 years
*/