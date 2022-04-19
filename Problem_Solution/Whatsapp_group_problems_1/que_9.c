/*
  Problem Statment :-
      In given integer determine the total number of ON bits
      and total number of OFF bits

*/

#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_BITS 8

int total_ON_bits(int number);
int total_OFF_bits(int number);

int main(void)
{
  int number;
  int on_bits = 0;
  int off_bits = 0;

  printf("Enter the number : ");
  scanf("%d", &number);

  on_bits = total_ON_bits(number);
  printf("The number - %d are having total ON bits are : %d\n", number, on_bits);

  off_bits = total_OFF_bits(number);
  printf("The number - %d are having total OFF bits are : %d\n", number, on_bits);

  exit(0);
}

int total_ON_bits(number)
{
  int i;
  int counter = 0;
  for (i = 0; i < NUMBER_OF_BITS * sizeof(int); ++i)
  {
    if ((1 << i) & number)
      counter++;
  }
  return counter;
}

int total_OFF_bits(number)
{
  int i;
  int counter = 0;
  for (i = 0; i < NUMBER_OF_BITS * sizeof(int); ++i)
  {
    if (((1 << i) & number) == 0)
      counter++;
  }
  return counter;
}