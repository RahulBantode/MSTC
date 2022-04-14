/*
  Goal :- User parameter as return value.
          we destory the drawback of before two application as int_return1 or 2
          we are passing the address of pointer variable from caller function.
          and memory get allocated dynamically inside the callee function.
          interger value also stored inside that memory and after the function
          returns to the caller function we simly free that memory too.
          in create_int_1 function body we not declare any local variable for
          the function we just do single dereference the variable ... allocate the memory
          to it and by ** dereference we are store the value into it. and in main free that varible.
          so the chances of memory leak is too less.

          In the create_int_2 function we use or create local pointer variable.
          It's for understanding with how to deal with double pointer. internally.

*/

#include <stdio.h>
#include <stdlib.h>

// create_int_1 :- Accept two paramter
//                   a. one type is int ** (pointer to pointer to int)
//                   b. one type is int .
//                 returns nothing (void)
void create_int_1(int **pp, int init_n);

// create_int_2 :- Accept two paramter
//                   a. one type is int ** (pointer to pointer to int)
//                   b. one type is int .
//                 returns nothing (void)
void create_int_2(int **pp, int init_n);

int main(void)
{
  int *ptr1 = 0;
  int *ptr2 = 0;

  create_int_1(&ptr1, 2500); // here we are passintg the address of pointer variable. and one integer
  create_int_2(&ptr2, 5900); // here we are passintg the address of pointer variable. and one integer

  printf("*ptr1 = %d | *ptr2 = %d\n", *ptr1, *ptr2);

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
    printf("Memory Allocation Failed\n");
    exit(-1);
  }

  **pp = init_n; // to store the address we have dereference by **
                 // Because after first derefernce of address we got the address
                 // of pointer variable .
                 // And we have store that integer inside that pointer variable
                 // so we need to **
}

// another version to deal with. create_int_1 .
void create_int_2(int **pp, int init_n)
{
  int *ptr = 0;
  ptr = malloc(sizeof(int));
  if (ptr == 0)
  {
    printf("Memory Allocation Failed\n");
    exit(-1);
  }

  *ptr = init_n;
  *pp = ptr;

  // In this function we handle by single dereference ...
  //  working.
  /* we are simply allocate dynamic memroy by creting pointer variable in it.
    and dereference that pointer variable like *ptr = init_n .. awe store interger init.
    But now we have to store this into the variable which are comes in parameter.
    so do it like *pp = p;
  */
}

// output :- *ptr1 = 2500 | *ptr2 = 5900