/*
    WebCam specification Excercise
*/

#include <stdio.h>
#include <stdlib.h>

struct Webcam
{
    char *video_type;
    char *smart_detection;
    char *smart_alerts;
    char *microphone;
    char *privacy_mode;
    char *night_vision;
    char *storage_otions;
    char *supported_app;
    char *placement;
    struct date
    {
        int day;
        char *month;
        int year;
    };

    struct date date_of_first_available;
    char *manufacture;
    float price;
    char *brand;
};

int main(void)
{
    struct Webcam wm;
    wm.video_type = "3MP UHD, 107 FOV";
    wm.smart_detection = "Motion,Tracking Human motion,sound detection";
    wm.smart_alerts = "Human/Motion/Sound Alert";
    wm.microphone = "Two-way audio,3D noise,Reduction";
    wm.privacy_mode = "Turn Off the device remotely on the app";
    wm.night_vision = "color night vision";
    wm.storage_otions = "Cloud & Micro SD card";
    wm.supported_app = "Mobile:App for android or iOS PC";
    wm.placement = "outdoor / IP66 weatherproof";
    wm.date_of_first_available.day = 24;
    wm.date_of_first_available.month = "Septemeber";
    wm.date_of_first_available.year = 2019;
    wm.brand = "phillips";
    wm.price = 72.782;

    puts("========== WebCam Specification ===========\n");
    printf("Video Type : %s\n", wm.video_type);
    printf("Smart Detection : %s\n", wm.smart_detection);
    printf("Smart Alerts : %s\n", wm.smart_alerts);
    printf("Microphone : %s\n", wm.microphone);
    printf("Privacy mode : %s\n", wm.privacy_mode);
    printf("Night Vision : %s\n", wm.night_vision);
    printf("Storage Options : %s\n", wm.storage_otions);
    printf("Supported App : %s\n", wm.supported_app);
    printf("Placement : %s\n", wm.placement);
    printf("Date of first available : %s %d , %d\n",
           wm.date_of_first_available.month,
           wm.date_of_first_available.day,
           wm.date_of_first_available.year);
    printf("Brand : %s\n", wm.brand);
    printf("price : %f $\n", wm.price);

    exit(0);
}

/* OUTPUT :-
========== WebCam Specification ===========

Video Type : 3MP UHD, 107 FOV
Smart Detection : Motion,Tracking Human motion,sound detection
Smart Alerts : Human/Motion/Sound Alert
Microphone : Two-way audio,3D noise,Reduction
Privacy mode : Turn Off the device remotely on the app
Night Vision : color night vision
Storage Options : Cloud & Micro SD card
Supported App : Mobile:App for android or iOS PC
Placement : outdoor / IP66 weatherproof
Date of first available : Septemeber 24 , 2019
Brand : phillips
price : 72.781998 $
*/