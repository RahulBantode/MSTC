/*
  Demonstration return the integer by address.
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// reading :- create_int is function which accept a int parameter. and return the address of integer
//            whoom return type is int*

int *create_int(int init_n);

int main(void)
{
  int *p = 0;

  p = create_int(100);
  printf("*p = %d\n", *p);

  free(p);
  p = 0;

  exit(0);
}

int *create_int(int init_n)
{
  int *p_int = 0;
  p_int = malloc(sizeof(int));
  assert(p_int != 0);
  *p_int = init_n;
  return (p_int);
}

/* Prediction :-

  *p = 100;

  Output :-

  *p = 100
*/