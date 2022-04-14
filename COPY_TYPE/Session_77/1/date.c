/*
  Goal :- To demonstrate the implementation of data type date using
          dynamic memory allocation functions
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct Date
{
  int day;
  int month;
  int year;
};

struct Date *create_date(int init_day, int init_month, int init_year);
int get_day(struct Date *p_date);
int get_month(struct Date *p_date);
int get_year(struct Date *p_date);
int set_day(struct Date *p_date, int new_day);
int set_month(struct Date *p_date, int new_month);
int set_year(struct Date *p_date, int new_year);
int is_date_valid(int day, int month, int year);
int is_year_leap(int year);
void destroy_date(struct Date **pp_date);

int main(void)
{
  int dd, mm, yy;
  int ret;
  struct Date *p_cpa_birth_date = 0;
  struct Date *p_test_date = 0;

  p_cpa_birth_date = create_date(1, 12, 2009);
  dd = get_day(p_cpa_birth_date);
  mm = get_month(p_cpa_birth_date);
  yy = get_year(p_cpa_birth_date);
  printf("CPA Birthday :- %d-%d-%d\n", dd, mm, yy);

  destroy_date(&p_cpa_birth_date);

  puts("--------------------------------------------");

  p_test_date = create_date(43, 145, 2000);
  if (p_test_date == 0)
    puts("Date data sent to create_date() is invalid");
  p_test_date = create_date(18, 3, 2022);
  dd = get_day(p_test_date);
  mm = get_month(p_test_date);
  yy = get_month(p_test_date);
  printf("Test Date : %d-%d-%d\n", dd, mm, yy);

  ret = set_day(p_test_date, 35);
  if (ret == 0)
    puts("Day of the month field is invalid");

  ret = set_month(p_test_date, 56);
  if (ret == 0)
    puts("Month of data is invalid");

  ret = set_month(p_test_date, 2);
  assert(ret == 1);

  ret = set_day(p_test_date, 29);
  assert(ret == 1);
  dd = get_day(p_test_date);
  mm = get_month(p_test_date);
  yy = get_year(p_test_date);
  printf("Test Date : %d-%d-%d\n", dd, mm, yy);

  ret = set_year(p_test_date, 2021);
  if (ret == 0)
    puts("2021 - year is not leap !");

  /*
       TODO Exercise
       Put date 31 for any month with 30 days
       and check whether the return value is expected 0
   */

  destroy_date(&p_test_date);
  exit(0);
}

struct Date *create_date(int init_day, int init_month, int init_year)
{
  struct Date *p_new
}

int get_day(struct Date *p_date);
int get_month(struct Date *p_date);
int get_year(struct Date *p_date);
int set_day(struct Date *p_date, int new_day);
int set_month(struct Date *p_date, int new_month);
int set_year(struct Date *p_date, int new_year);
int is_date_valid(int day, int month, int year);
int is_year_leap(int year);
void destroy_date(struct Date **pp_date);
