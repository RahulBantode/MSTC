#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct Date
{
  int day;
  int month;
  int year;
};

void create_date(struct Date **pp_date, int dd, int mm, int yy);
void create_date_alternate(struct Date **pp_date, int dd, int mm, int yy);

int main(void)
{
  struct Date *p_date = 0;

  printf("Befre create_date() the address in p_date = %llu\n", (unsigned long long int)p_date);
  create_date(&p_date, 10, 4, 2022);
  printf("After create_date() the address in p_date : %llu\n", (unsigned long long int)p_date);
  printf("%d-%d-%d\n", p_date->day, p_date->month, p_date->year);
  free(p_date);
  p_date = 0;

  return (0);
}

void create_date(struct Date **pp_date, int dd, int mm, int yy)
{
  *pp_date = malloc(sizeof(struct Date));
  assert(*pp_date != 0);
  (*pp_date)->day = dd;
  (*pp_date)->month = mm;
  (*pp_date)->year = yy;
}

void create_date_alternate(struct Date **pp_date, int dd, int mm, int yy)
{
  struct Date *p_date = 0;
  p_date = malloc(sizeof(struct Date));
  p_date->day = dd;
  p_date->month = mm;
  p_date->year = yy;

  *pp_date = p_date;
}

/* Prediction :-
  10-4-2022

  output :-
  Befre create_date() the address in p_date = 0
  After create_date() the address in p_date : 20735520
*/