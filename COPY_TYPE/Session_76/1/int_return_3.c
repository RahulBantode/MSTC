/*
  Demonstration of parameter as return values.
*/

#include <stdio.h>
#include <stdlib.h>

// Reading :- create_int_1 is the function which accept two paratmeter.
//            1. int **pp :- pointer to pointer to int
//            2. int init_n :- init_n is store the integer value.
//            which return nothing as it's return value is void.
void create_int_1(int **pp, int init_n);

// Reading :-  create_ini_2 is the function which accept two parameter.
//             1. int **pp :- pointer to pointer to int.
//             2. int init_n :- init_n is store the integer value.
//             which return nothing as it's return value is void.
void create_int_2(int **pp, int init_n);

int main(void)
{
  int *ptr1 = 0;
  int *ptr2 = 0;

  create_int_1(&ptr1, 100);
  create_int_2(&ptr2, 200);

  printf("*ptr1 = %d, *ptr2 = %d\n", *ptr1, *ptr2);

  free(ptr1);
  ptr1 = 0;

  free(ptr2);
  ptr2 = 0;

  exit(0);
}

void create_int_1(int **pp, int init_n)
{
  *pp = malloc(sizeof(int));
  if (*pp == 0)
  {
    puts("Erro : Memory Allocation Fails");
    exit(-1);
  }
  **pp = init_n;
}

void create_int_2(int **pp, int init_n)
{
  int *p = 0;
  p = malloc(sizeof(int));
  if (p == 0)
  {
    puts("Error : Memory allocation fails");
    exit(-1);
  }

  *p = init_n;
  *pp = p;
}

/* Prediction :-

  *ptr1 = 100 , *ptr2 = 200

  OUTPUT :-

  *ptr1 = 100 , *ptr2 = 200

*/