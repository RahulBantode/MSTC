/*
  Problem Statement :- toggle the kth bit
  // XOR
  // 1 ^ 0 = 0
  // 0 ^ 1 = 0
  // 1 ^ 1 = 1
  // 0 ^ 0 = 1
*/

#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_BYTES 64

void toggle_bit(unsigned int *n, unsigned int k);
int main(void)
{
  int n, k;
  printf("Enter the n :- ");
  scanf("%d", &n);
  printf("Enter the k :- ");
  scanf("%d", &k);

  if (!(k >= 1 && k <= NUMBER_OF_BYTES))
  {
    printf("The k = %d value is not valid \n", k);
    exit(-1);
  }

  printf("N before the k %d th bit :- %d\n", k, n);
  toggle_bit(&n, k);
  printf("N after the k %d th bit :- %d\n", k, n);

  exit(-1);
}

void toggle_bit(unsigned int *n, unsigned int k)
{
  // XOR
  // 1 ^ 0 = 0
  // 0 ^ 1 = 0
  // 1 ^ 1 = 1
  // 0 ^ 0 = 1
  *n = (1 << (k - 1) ^ *n);
}