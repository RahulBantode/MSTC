/*
  Structure on Social Media
*/
#include <stdio.h>
#include <stdlib.h>

struct Date
{
  int day;
  char *month;
  int year;
};

struct PersonalInformation
{
  char *name;
  char *city;
  int zipCode;
  char *password;
  int age;
  char *state;
  char *profession;
};

struct BankAccount
{
  struct PersonalInformation PI;
  struct Date acc_opening;
  int TotalBalance;
};

int main(void)
{
  struct BankAccount bank;
  bank.PI.name = "Dennis Ritchie";
  bank.PI.city = "pune";
  bank.PI.zipCode = 411035;
  bank.PI.password = "dennis#123";
  bank.PI.age = 59;
  bank.PI.state = "Maharashtra";
  bank.PI.profession = "coder";
  bank.acc_opening.day = 17;
  bank.acc_opening.month = "January";
  bank.acc_opening.year = 1980;
  bank.TotalBalance = 1200540010;

  puts("---------------Bank Account---------------------");
  printf("Account holder Name : %s\n", bank.PI.name);
  printf("zipCode : %d\n", bank.PI.zipCode);
  printf("city : %s\n", bank.PI.city);
  printf("state : %s\n", bank.PI.state);
  printf("age : %d\n", bank.PI.age);
  printf("profession : %s\n", bank.PI.profession);
  printf("Date of account opening : %d %s,%d\n",
         bank.acc_opening.day,
         bank.acc_opening.month,
         bank.acc_opening.year);
  printf("Balanced Amount : %d\n", bank.TotalBalance);

  exit(0);
}

/* OUTPUT :-
---------------Bank Account---------------------
Account holder Name : Dennis Ritchie
zipCode : 411035
city : pune
state : Maharashtra
age : 59
profession : coder
Date of account opening : 17 January,1980
Balanced Amount : 1200540010

*/