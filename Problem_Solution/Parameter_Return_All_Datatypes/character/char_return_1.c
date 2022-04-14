/*
  Goal :- Define function which return the address of character to the caller function.
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// create_char() - function which accept the character variable and return the pointer to character.
char *create_char(char chr);

int main(void)
{
  char *c_char = 0;
  c_char = create_char('R');

  printf("c_char : %c\n", *c_char);

  free(c_char);
  c_char = 0;

  exit(0);
}

char *create_char(char chr)
{
  char *c_ptr = 0;
  c_ptr = malloc(sizeof(char));

  assert(c_ptr != 0);

  *c_ptr = chr;

  return (c_ptr);
}

// output - c_char = R