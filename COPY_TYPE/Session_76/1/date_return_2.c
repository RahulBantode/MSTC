#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct Date
{
  int day;
  int month;
  int year;
};

/* The first formal parameter is an 'in' parameter */

void create_date(struct Date *p_date, int dd, int mm, int yy);

int main(void)
{
  struct Date cpa_birth_date;
  struct Date *p_my_birth_date = 0;
  struct Date *p_test_date = 0;

  create_date(&cpa_birth_date, 1, 12, 2009);
  printf("CPA Birthdate :- %d-%d-%d\n", cpa_birth_date.day,
         cpa_birth_date.month,
         cpa_birth_date.year);

  p_my_birth_date = malloc(sizeof(struct Date));
  assert(p_my_birth_date != 0);

  create_date(p_my_birth_date, 07, 04, 1997);
  printf("My Birthdate :- %d-%d-%d\n", p_my_birth_date->day,
         p_my_birth_date->month,
         p_my_birth_date->year);

  free(p_my_birth_date);
  p_my_birth_date = 0;

  return (0);
}

void create_date(struct Date *p_date, int dd, int mm, int yy)
{
  p_date->day = dd;
  p_date->month = mm;
  p_date->year = yy;
}

/* Prediction :-
  CPA Birthdate :- 1-12-2009
  My Birthdate :- 07-04-1997

  Output:-
  CPA Birthdate :- 1-12-2009
  My Birthdate :- 7-4-1997
*/