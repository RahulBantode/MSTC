/*
  Goal :-
    In this program we return the address of the dynamically allocated integer
    from calle function to caller. (its like traditional return type)

  Drawback :-
    as we dynamically allocate the memory in create function. the local pointer
    variable are return the address. but this address are not freed which may leads
    to memory leak.
*/
#include <stdio.h>
#include <stdlib.h>

int *create_int(int init_n); // create function accept integer and returns the address
                             //  of integer.

int main(void)
{
  int *p = 0;

  p = create_int(100);
  printf("p = %d\n", *p);

  free(p);
  p = 0;

  exit(0);
}

int *create_int(int init_n)
{
  int *p_int = 0;
  p_int = malloc(sizeof(int));
  if (p_int == 0)
  {
    printf("Failed to allocate the memory\n");
    exit(0);
  }

  *p_int = init_n;
  return (p_int);
}

// output - p = 100
