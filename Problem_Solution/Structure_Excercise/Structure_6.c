/*
    number_description          char*
    first_number                struct first_number;
    second_number               struct second_number;
    third_number                struct third_number;
    forth_number                struct forth_number;
*/

#include <stdio.h>
#include <stdlib.h>

struct forth_number
{
    int number;
    char *series;
};

struct third_number
{
    int number;
    char *series;
    struct forth_number forth_number;
};

struct second_number
{
    int number;
    char *series;
    struct third_number third_number;
};

struct first_number
{
    int number;
    char *series;
    struct second_number second_number;
};

int main(void)
{
    struct first_number NUM;

    NUM.number = 11;
    NUM.series = "----#----";

    NUM.second_number.number = 22;
    NUM.second_number.series = "----#----";

    NUM.second_number.third_number.number = 33;
    NUM.second_number.third_number.series = "----#----";

    NUM.second_number.third_number.forth_number.number = 44;
    NUM.second_number.third_number.forth_number.series = "----#----";

    printf("-------------- Nested Structure ------------- \n");
    printf("%d %s \n", NUM.number, NUM.series);
    printf("   %d %s \n", NUM.second_number.number, NUM.second_number.series);

    printf("      %d %s \n",
           NUM.second_number.third_number.number,
           NUM.second_number.third_number.series);

    printf("         %d %s \n",
           NUM.second_number.third_number.forth_number.number,
           NUM.second_number.third_number.forth_number.series);

    exit(0);
}

/* OUTPUT -
-------------- Nested Structure -------------
11 ----#----
   22 ----#----
      33 ----#----
         44 ----#----
*/