/*
    brand_name;                     char*
    model_number;                   int
    part_number;                    int
    model_year;                     int
    item_shape;                     char*
    dial_window_material_type;      char*
    display_type                    char*
    clasp                           char*
    case_material                   char*
    case_diameter                   int
    case_thickness                  int
    brand_material                  char*
    brand_size                      char*
    bezel_function                  char*
    calender                        char*
    special_feature                 char*
    item_weight                     int
    movement                        char*
    water_resistent_depth           int
    price                           int

*/

#include <stdio.h>
#include <stdlib.h>

struct Watch_Specification
{
    char *brand_name;
    int model_number;
    int part_number;
    int model_year;
    char *item_shape;
    char *dial_window_material_type;
    char *display_type;
    char *clasp;
    char *case_material;
    int case_diameter;
    int case_thickness;
    char *brand_material;
    char *brand_size;
    int brand_width;
    char *brand_color;
    char *dial_color;
    char *bezel_function;
    char *calender;
    char *special_feature;
    float item_weight;
    char *movement;
    int water_resistent_depth;
    int price;
};

int main(void)
{
    struct Watch_Specification watch;

    watch.brand_name = "SEIKO";
    watch.model_number = 12354;
    watch.part_number = 938;
    watch.model_year = 2016;
    watch.item_shape = "Round";
    watch.dial_window_material_type = "Hardlex";
    watch.display_type = "Analog";
    watch.clasp = "Buckle";
    watch.case_material = "Stainless Steel";
    watch.case_diameter = 39;
    watch.case_thickness = 10;
    watch.brand_material = "Calfskin";
    watch.brand_size = "Men's Standard";
    watch.brand_width = 20;
    watch.brand_color = "Brown";
    watch.dial_color = "Multicolor";
    watch.bezel_function = "Stationary";
    watch.calender = "Day-Date";
    watch.special_feature = "Luminous";
    watch.item_weight = 7.2;
    watch.movement = "Japanese Quartz";
    watch.water_resistent_depth = 330;
    watch.price = 4500;

    printf("---------------- Watch Specification --------------- \n");

    printf("Brand Name : %s\n", watch.brand_name);
    printf("Model Number : %d\n", watch.model_number);
    printf("Part number : %d\n", watch.part_number);
    printf("model_year : %d\n", watch.model_year);
    printf("Item Shape : %s\n", watch.item_shape);
    printf("Dial window material : %s\n", watch.dial_window_material_type);
    printf("Display Type : %s\n", watch.display_type);
    printf("Clasp : %s\n", watch.clasp);
    printf("Case Material : %s\n", watch.case_material);
    printf("Case Diameter : %d\n", watch.case_diameter);
    printf("Case Thickness : %d\n", watch.case_thickness);
    printf("Brand Material : %s\n", watch.brand_material);
    printf("Brand Size : %s\n", watch.brand_size);
    printf("Brand Width : %d\n", watch.brand_width);
    printf("Brand Color : %s\n", watch.brand_color);
    printf("Bezel Function : %s\n", watch.bezel_function);
    printf("Calender : %s\n", watch.calender);
    printf("Special Feature : %s\n", watch.special_feature);
    printf("Item Weight : %f\n", watch.item_weight);
    printf("Movement : %s\n", watch.movement);
    printf("Water Resistent Depth : %d\n", watch.water_resistent_depth);
    printf("Price : $ %d\n", watch.price);

    exit(0);
}

/* OUTPUT :-
---------------- Watch Specification ---------------
Brand Name : SEIKO
Model Number : 12354
Part number : 938
model_year : 2016
Item Shape : Round
Dial window material : Hardlex
Display Type : Analog
Clasp : Buckle
Case Material : Stainless Steel
Case Diameter : 39
Case Thickness : 10
Brand Material : Calfskin
Brand Size : Men's Standard
Brand Width : 20
Brand Color : Brown
Bezel Function : Stationary
Calender : Day-Date
Special Feature : Luminous
Item Weight : 7.200000
Movement : Japanese Quartz
Water Resistent Depth : 330
Price : $ 4500
*/