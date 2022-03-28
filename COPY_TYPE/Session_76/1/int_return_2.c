/*
  Demonstration of parameter as return value.
*/

#include <stdio.h>
#include <stdlib.h>

// reading :-  create_int is function which accept the two paramyter
//             int *p = pointer to int
//             int init_n = init_n assing to integer value
//             which return nothing as return type is void.
void create_int(int *p, int init_n);

int main(void)
{
  int n;
  int *ptr = 0;

  create_int(&n, 500);
  printf("n = %d\n", n);

  ptr = malloc(sizeof(int)); // function allocate the memory dynamically for 1 integer
  if (ptr == 0)
  {
    puts("Error in memory allocation");
    exit(-1);
  }

  create_int(ptr, 1000);
  printf("*ptr = %d\n", *ptr);
}

void create_int(int *p, int init_n)
{
  *p = init_n;
}

/*  prediction :-
    n = 500;
    *ptr = 1000;

    output :-
    n = 500
    *ptr = 1000
*/