/*
  Goal :- return parameter as string
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

void create_string(char *s_ptr, char *string, int size);

int main(void)
{
  char *s_ptr = 0;
  int size = 10;
  s_ptr = malloc(size * sizeof(char));
  create_string(s_ptr, "Rahul", size);
  printf("*s_ptr : %s\n", *s_ptr);
  free(s_ptr);
  s_ptr = 0;

  exit(0);
}

void create_string(char *s_ptr, char *string, int size)
{
  strcpy(string, s_ptr);
}