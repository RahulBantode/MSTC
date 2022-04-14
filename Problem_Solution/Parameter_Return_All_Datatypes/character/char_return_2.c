/*
  Goal :- use parameter as return value.
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* create_char(char *,char) - function accept two the parameter as following,
              1. pointer to char
              2. char variable.
          And returns nothing (void)
*/
void create_char(char *c_ptr, char init_c);

int main(void)
{
  char *c_char = 0;
  c_char = malloc(sizeof(char));
  assert(c_char != 0);
  create_char(c_char, 'B');
  printf("c_char : %c \n", *c_char);

  free(c_char);
  c_char = 0;
  exit(0);
}

void create_char(char *c_ptr, char init_c)
{
  *c_ptr = init_c;
}

// output :- c_char = B