/*
  Goal :- use parameter as return value.
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* create_char_1(char **,char) :- accept two paramter
            1. pointer to pointer to char - char **pp_char,
            2. char variable.
          returns nothing (void);
*/
void create_char_1(char **pp_char, char init_c);

/* create_char_2(char **,char) :- accept two paramter
            1. pointer to pointer to char - char **pp_char,
            2. char variable.
          returns nothing (void);
*/
void create_char_2(char **pp_char, char init_c);

int main(void)
{
  char *c_char1 = 0;
  char *c_char2 = 0;

  create_char_1(&c_char1, 'G');
  create_char_2(&c_char2, 'B');

  printf("*c_char1 : %c | *c_char2 : %c\n", *c_char1, *c_char2);

  free(c_char1);
  c_char1 = 0;

  free(c_char2);
  c_char2 = 0;

  exit(0);
}

void create_char_1(char **pp_char, char init_c)
{
  *pp_char = malloc(sizeof(char));
  assert(*pp_char != 0);

  **pp_char = init_c;
}

void create_char_2(char **pp_char, char init_c)
{
  char *c_ptr = 0;
  c_ptr = malloc(sizeof(char));
  assert(c_ptr != 0);

  *c_ptr = init_c;
  *pp_char = c_ptr;
}

// OUTPUT :-
// *c_char1 : G | *c_char2 : B