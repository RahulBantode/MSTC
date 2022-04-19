/*
  Problem Statement :-
    Write a function to turn on the k'th bit of the 64 bit integer.

  Goal :-
  if n = 4 then binary of 4 is
  00000000 00000000 00000000 00000100

  if k = 3 then we need to turn on the 4th bit
  answer is like
  00000000 00000000 00000000 00001100 = 12

*/
#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_BYTES 64

void turn_on_kth_bit(unsigned int k, unsigned int *n);

int main(void)
{
  int n, k;
  printf("Enter the n :- ");
  scanf("%d", &n);
  printf("Enter the k :- ");
  scanf("%d", &k);

  if (!(k >= 1 && k <= NUMBER_OF_BYTES))
  {
    printf("k %d value is not valid\n", k);
    exit(-1);
  }

  printf("n before the bit shift by %d is :- %d\n", k, n);
  turn_on_kth_bit(k, &n);
  printf("n after the bit shift by %d is :- %d\n", k, n);
  exit(0);
}

void turn_on_kth_bit(unsigned int k, unsigned int *n)
{
  *n = 1 << (k - 1) | *n;
}