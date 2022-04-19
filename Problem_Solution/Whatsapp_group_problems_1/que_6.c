/*
  Problem Statement :- For given integer n, determine the highest numbered on bit.

  example if .  number is 5 then the number represented in bit like.
  00000000  00000000 00000000 00000101
  then highest bit on of this representation is 4.
*/

#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_BYTES 8

int calculate_highest_bit_ON(int number);

int main(void)
{
  int number;
  unsigned int highest_bit_of_integer = 0;
  printf("Enter the numbe : ");
  scanf("%d", &number);

  highest_bit_of_integer = calculate_highest_bit_ON(number);
  printf("Highest Bit of integer : %u\n", highest_bit_of_integer);

  exit(0);
}

int calculate_highest_bit_ON(int number)
{
  unsigned int highest_bit = 0;

  for (int i = 0; i < NUMBER_OF_BYTES * sizeof(int); --i)
  {
    highest_bit = (number >> i) | number;
    break;
  }
  return highest_bit;
}