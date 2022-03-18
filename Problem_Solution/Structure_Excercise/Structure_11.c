/*
    struct symptoms
    struct precaution
    struct treatment
*/

#include <stdio.h>
#include <stdlib.h>

struct symptoms
{
    char *sym;
};

struct precaution
{
    char *pre;
};

struct treatment
{
    char *tre;
};

struct Covid
{
    int india_infected_count;
    int india_vaccinated_count;
    struct symptoms SYM;
    struct precaution PRE;
    struct treatment TRE;
};

int main(void)
{
    struct Covid covid;

    covid.india_infected_count = 423;
    covid.india_vaccinated_count = 102;
    covid.SYM.sym = "Fever,Cough,Shortnesss of breath,Headache";
    covid.PRE.pre = "1.Use mask,2.Use Santizor,3.make social distancing";
    covid.TRE.tre = "1.Drink Kadha,2.Take Vapor,3.Go to hospital";

    printf("---------- COVID ------------ \n");
    printf("Inidia Infected Count : %d M\n", covid.india_infected_count);
    printf("India Vaccinated Count : %d B\n", covid.india_vaccinated_count);
    printf("Symptoms : %s\n", covid.SYM.sym);
    printf("Precaution :%s\n", covid.PRE.pre);
    printf("Treatment :%s\n", covid.TRE.tre);

    exit(0);
}

/*OUTPUT :-
---------- COVID ------------
Inidia Infected Count : 423 M
India Vaccinated Count : 102 B
Symptoms : Fever,Cough,Shortnesss of breath,Headache
Precaution :1.Use mask,2.Use Santizor,3.make social distancing
Treatment :1.Drink Kadha,2.Take Vapor,3.Go to hospital
*/