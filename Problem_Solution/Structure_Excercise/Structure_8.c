/*
    Home theatre strucutre
*/

#include <stdio.h>
#include <stdlib.h>

struct HomeTheatre
{
    char *usage;
    char *brand;
    char *connectivity;
    char *connectivity_protocol;
    char *power_source;
    struct date
    {
        int day;
        char *month;
        int year;
    };

    struct date delivery_date;
    char *delivery_location;
    float price;
    char *return_policy;
};

int main(void)
{
    struct HomeTheatre HT;
    HT.usage = "Indoor / Outdoor";
    HT.brand = "Eufy";
    HT.connectivity = "wireless";
    HT.connectivity_protocol = "Wi-Fi";
    HT.power_source = "Battery Powered";
    HT.delivery_date.day = 16;
    HT.delivery_date.month = "March";
    HT.delivery_date.year = 2022;
    HT.delivery_location = "Ganesh colony, pune, MH, India";
    HT.price = 124423;
    HT.return_policy = "Yes applicable, 30 days returns policy with 100 percent refund";

    puts("========= Home Theatre Specification ===========\n");
    printf("Usage : %s\n", HT.usage);
    printf("Brand :- %s\n", HT.brand);
    printf("Connectivity :- %s\n", HT.connectivity);
    printf("Connectivity Protocol : %s\n", HT.connectivity_protocol);
    printf("Power Source :- %s\n", HT.power_source);
    printf("Date of delivery :- %s %d,%d\n", HT.delivery_date.month,
           HT.delivery_date.day,
           HT.delivery_date.year);
    printf("Delivery Location : %s\n", HT.delivery_location);
    printf("Price : %f $\n", HT.price);
    printf("Return Policy : %s\n", HT.return_policy);

    exit(0);
}

/* OUTPUT :-
========= Home Theatre Specification ===========

Usage : Indoor / Outdoor
Brand :- Eufy
Connectivity :- wireless
Connectivity Protocol : Wi-Fi
Power Source :- Battery Powered
Date of delivery :- March 16,2022
Delivery Location : Ganesh colony, pune, MH, India
Price : 124423.000000 $
Return Policy : Yes applicable, 30 days returns policy with 100 percent refund
*/