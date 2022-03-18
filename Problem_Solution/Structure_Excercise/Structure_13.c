/*
    Specification Watch
*/

#include <stdio.h>
#include <stdlib.h>

struct Watch
{
    char *waranty;
    char *delivery;
    char *color[5];
    char *highlight;
    struct General
    {
        char *sales_package;
        int model_no;
        char *model_name;
        char *dial_color;
        char *dial_shape;
        char *strap_material;
        char *size;
    } general;
    struct Product
    {
        char *notification;
        char *battery_type;
        int charge_time;
        int stand_by_time;
    } product;
    struct connectivity
    {
        char *call_function;
        char *bluetooth;
        char *wifi;
        char *gps;
    } connectivity;
    int price;
};

int main(void)
{
    struct Watch ws;
    int counter;

    ws.waranty = "1 years";
    ws.color[0] = "Red";
    ws.color[1] = "Black";
    ws.color[2] = "yellow";
    ws.color[3] = "pink";
    ws.color[4] = "blue";
    ws.delivery = "A.B.C pune";
    ws.highlight = "1.6 Large Color LCD Full Touch Screen with 2.5D Curved Glass and 240*288 pixel Resolution";
    ws.general.sales_package = "1 Smartwatch,1 Charging Cable, 1 Manual ";
    ws.general.model_no = 1834812;
    ws.general.model_name = "Ninja pro max";
    ws.general.dial_color = "black";
    ws.general.dial_shape = "Square";
    ws.general.size = "free size";
    ws.general.strap_material = "silicon";
    ws.product.battery_type = "lithium";
    ws.product.charge_time = 4;
    ws.product.notification = "vibration/Rigtone";
    ws.product.stand_by_time = 6;
    ws.connectivity.call_function = "No";
    ws.connectivity.bluetooth = "Yes";
    ws.connectivity.wifi = "Yes";
    ws.connectivity.gps = "No";
    ws.price = 16599;

    puts("---------------------Watch Specification--------------------------");
    printf("Waranty : %s \n", ws.waranty);
    for (counter = 0; counter < 5; ++counter)
    {
        printf("Color[%d] : %s\n", counter, ws.color[counter]);
    }
    printf("Delivery : %s\n", ws.delivery);
    printf("Highlight : %s\n", ws.highlight);
    puts("---General---");
    printf("Sales Package : %s\n", ws.general.sales_package);
    printf("Model No : %d\n", ws.general.model_no);
    printf("Model Name : %s\n", ws.general.model_name);
    printf("Dial Color : %s\n", ws.general.dial_color);
    printf("Dial Shape : %s\n", ws.general.dial_shape);
    printf("Size : %s\n", ws.general.size);
    printf("Strap Material : %s\n", ws.general.strap_material);
    puts("---Product---");
    printf("Battery Type : %s\n", ws.product.battery_type);
    printf("Charge Time : %d\n", ws.product.charge_time);
    printf("Stand by time : %d\n", ws.product.stand_by_time);
    printf("Notification : %s\n", ws.product.notification);
    puts("---Connectivity---");
    printf("Call Function : %s\n", ws.connectivity.call_function);
    printf("Wifi : %s\n", ws.connectivity.wifi);
    printf("GPS : %s\n", ws.connectivity.wifi);
    printf("Bluetooth : %s\n", ws.connectivity.bluetooth);
    printf("Price : %d\n", ws.price);

    exit(0);
}

/* OUTPUT :-
---------------------Watch Specification--------------------------
Waranty : 1 years
Color[0] : Red
Color[1] : Black
Color[2] : yellow
Color[3] : pink
Color[4] : blue
Delivery : A.B.C pune
Highlight : 1.6 Large Color LCD Full Touch Screen with 2.5D Curved Glass and 240*288 pixel Resolution
---General---
Sales Package : 1 Smartwatch,1 Charging Cable, 1 Manual
Model No : 1834812
Model Name : Ninja pro max
Dial Color : black
Dial Shape : Square
Size : free size
Strap Material : silicon
---Product---
Battery Type : lithium
Charge Time : 4
Stand by time : 6
Notification : vibration/Rigtone
---Connectivity---
Call Function : No
Wifi : Yes
GPS : Yes
Bluetooth : Yes
Price : 16599
*/