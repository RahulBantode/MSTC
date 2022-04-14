/*
  Goal :- In this program we use parameter as return value.
          i.e - we are passing the address of dynamically allocated memory
                and integer which assign to this value.
                so in create_int function we derefference the address and
                assign the integer to it.

  drawback :- The previous drawaback of freeing memory were solved here.
              but we are allocating the dynamically memory in main function.
              and incase main function not call to create_int function then
              it may leads to forcefully allocation of memory.. so technically
              dynamic memory allocation will done at runtime as user will so
              the dynamic allocation statememnt should be in create_int function.

*/

#include <stdio.h>
#include <stdlib.h>

// create_int function - accept 2 parameter as one is type int * and second is int
// which returns nothing. (void)
void create_int(int *p, int init_n);

int main(void)
{
  int *ptr = 0;

  ptr = malloc(sizeof(int));
  if (ptr == 0)
  {
    printf("Memory allocation failed\n");
    exit(-1);
  }

  create_int(ptr, 200);
  printf("*ptr = %d\n", *ptr);

  free(ptr);
  ptr = 0;

  exit(0);
}

void create_int(int *p, int init_n)
{
  *p = init_n;
}

// output - *ptr = 200