/*
  Goal :- return the address of first element of string
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char *create_string(char *string, int size);

int main(void)
{
  char *c_ptr = 0;
  c_ptr = create_string("Rahul Bantode", 20);
  printf("c_ptr : %s\n", c_ptr);
  free(c_ptr);
  c_ptr = 0;

  exit(0);
}

char *create_string(char *string, int size)
{
  char *c_ptr = 0;
  c_ptr = malloc(size * sizeof(char));
  assert(c_ptr != 0);
  c_ptr = string;
  return (c_ptr);
}

// output :- c_ptr = Rahul Bantode
