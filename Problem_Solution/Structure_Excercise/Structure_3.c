/*
    color               char*
    Ean                 long int
    Fabric_type         char*
    model_number        char*
    number_of_item      int
    size                int
    special_feature     char*
    style               char*
    unsspc_code         int
*/

#include <stdio.h>
#include <stdlib.h>

struct Mask
{
    char *color;
    long int Ean;
    char *fabric_type;
    char *model_number;
    int number_of_item;
    int size;
    int price;
    char *special_feature;
    char *style;
    int unspsc_code;
};

int main(void)
{
    struct Mask mask;

    mask.color = "Blue";
    mask.Ean = 9412063405721;
    mask.fabric_type = "non_woven";
    mask.model_number = "K4";
    mask.number_of_item = 1;
    mask.size = 50;
    mask.price = 70;
    mask.special_feature = "face mask";
    mask.style = "Regular";
    mask.unspsc_code = 46182001;

    printf("-------------Mask Specification ----------- \n");

    printf("Color : %s\n", mask.color);
    printf("Ean : %lu\n", mask.Ean);
    printf("Fabric type : %s\n", mask.fabric_type);
    printf("Model Number : %s\n", mask.model_number);
    printf("Number of item : %d\n", mask.number_of_item);
    printf("Special Feature : %s\n", mask.special_feature);
    printf("Style : %s\n", mask.style);
    printf("UNSPCS code : %d\n", mask.unspsc_code);

    exit(0);
}

/* OUTPUT :- 
-------------Mask Specification -----------
Color : Blue
Ean : 1790060185
Fabric type : non_woven
Model Number : K4
Number of item : 1
Special Feature : face mask
Style : Regular
UNSPCS code : 46182001
*/