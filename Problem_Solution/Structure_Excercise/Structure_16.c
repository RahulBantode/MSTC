/*
    Array of strucutes Implementation
*/

#include <stdio.h>
#include <stdlib.h>

struct Voter_Information
{
    int ward_number;
    char *voter_name;
    char *nationality;
    int age;
    char *address;
    char *state;
};

int main(void)
{
    int counter;
    struct Voter_Information VI[4] =
        {
            {23, "Bengium Grhman", "American", 45, "new york city", "Us"},
            {7, "P.L.Deshpande", "Indian", 78, "Kasba Peth", "Maharashtra"},
            {8, "Mahrshee Karve", "Indian", 77, "Ganesh Colony", "Maharashtriyan"},
            {3, "Mahatma Gandhi", "Indian", 89, "Nehru Chowk", "Union Terretory (delhi)"},
        };

    puts("---------------- Structure Information -----------------");
    for (counter = 0; counter < 4; ++counter)
    {
        printf("Voter No : %d\n", counter + 1);
        printf("  Ward Number : %d\n", VI[counter].ward_number);
        printf("  Voter Name  : %s\n", VI[counter].voter_name);
        printf("  Nationality : %s\n", VI[counter].nationality);
        printf("  Age         : %d\n", VI[counter].age);
        printf("  Address     : %s\n", VI[counter].address);
        printf("  State       : %s\n", VI[counter].state);
        puts("--------------------------------------------------------");
    }

    exit(0);
}

/* OUTPUT :-

---------------- Structure Information -----------------
Voter No : 1
  Ward Number : 23
  Voter Name  : Bengium Grhman
  Nationality : American
  Age         : 45
  Address     : new york city
  State       : Us
--------------------------------------------------------
Voter No : 2
  Ward Number : 7
  Voter Name  : P.L.Deshpande
  Nationality : Indian
  Age         : 78
  Address     : Kasba Peth
  State       : Maharashtra
--------------------------------------------------------
Voter No : 3
  Ward Number : 8
  Voter Name  : Mahrshee Karve
  Nationality : Indian
  Age         : 77
  Address     : Ganesh Colony
  State       : Maharashtriyan
--------------------------------------------------------
Voter No : 4
  Ward Number : 3
  Voter Name  : Mahatma Gandhi
  Nationality : Indian
  Age         : 89
  Address     : Nehru Chowk
  State       : Union Terretory (delhi)
--------------------------------------------------------
*/