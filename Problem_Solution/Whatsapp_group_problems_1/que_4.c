/*
  Problem Statement :- Implementation of left shift and rotate
*/

#define NUMBER_OF_BYTES 8

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i = 0;
  while (i < NUMBER_OF_BYTES * sizeof(int))
  {
    printf("1 << %d : %u\n", i, (unsigned int)1 << i);
    i += 1;
  }
  exit(0);
}