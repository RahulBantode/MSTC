/*
  Problem Statement :- Implementation of left shift and rotate
*/

#define NUMBER_OF_BYTES 8

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int nr_bytes = NUMBER_OF_BYTES * sizeof(int);
  unsigned int n = 1 << (nr_bytes - 1);
  int i = 1;

  while (i < NUMBER_OF_BYTES * sizeof(int))
  {
    printf("i>>%d : %u\n", i, n >> i);
    i += 1;
  }
  exit(0);
}