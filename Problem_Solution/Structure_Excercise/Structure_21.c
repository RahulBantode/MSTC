/*
    IPHONE Specification
*/

#include <stdio.h>
#include <stdlib.h>

struct Iphone
{
    char *model_name;
    char *wireless_carrier;
    char *brand;
    char *color;
    int cellular_technology;
    float price;

    struct technical
    {
        char *OS;
        int RAM;
        int memory_storage;
        char *wireless_communication;
        char *included_componenet;
        char *sim;
        char *camera;
    } tech;
};

int main(void)
{
    struct Iphone ip;

    ip.model_name = "Iphone 11 pro";
    ip.wireless_carrier = "Unlocked for all carriers";
    ip.brand = "Apple";
    ip.color = "Mindnight green";
    ip.cellular_technology = 4;
    ip.price = 239.23;
    ip.tech.OS = "IOS 12";
    ip.tech.RAM = 8;
    ip.tech.memory_storage = 256;
    ip.tech.wireless_communication = "Wifi / bluetooth";
    ip.tech.included_componenet = "Charging cable and component block";
    ip.tech.sim = "Dual sim";
    ip.tech.camera = "13.5 MP front camera 33.4 MP back camera";

    puts("========= Iphone Specification ========= \n");
    printf("Model Name : %s\n", ip.model_name);
    printf("Wireless Carrier : %s\n", ip.wireless_carrier);
    printf("Brand : %s\n", ip.brand);
    printf("Color : %s\n", ip.color);
    printf("Cellular Technology : %d G\n", ip.cellular_technology);
    printf("Price : %f $\n", ip.price);
    printf("OS : %s\n", ip.tech.OS);
    printf("RAM : %d GB\n", ip.tech.RAM);
    printf("Memory Storage : %d GB\n", ip.tech.memory_storage);
    printf("Wireless Communication : %s\n", ip.tech.wireless_communication);
    printf("Included Componenets : %s\n", ip.tech.included_componenet);
    printf("SIM : %s\n", ip.tech.sim);
    printf("Camera : %s\n", ip.tech.camera);

    exit(0);
}

/* OUTPUT :-
========= Iphone Specification =========

Model Name : Iphone 11 pro
Wireless Carrier : Unlocked for all carriers
Brand : Apple
Color : Mindnight green
Cellular Technology : 4 G
Price : 239.229996 $
OS : IOS 12
RAM : 8 GB
Memory Storage : 256 GB
Wireless Communication : Wifi / bluetooth
Included Componenets : Charging cable and component block
SIM : Dual sim
Camera : 13.5 MP front camera 33.4 MP back camera

*/