/*
Goal:   To demonstrate parameter as return value
        technique for built-in data types, arrays
        and structure
*/

#include <stdio.h>
#include <stdlib.h>

struct A
{
  int a;
  char b;
  float c;
};

void input_integer(int *ptr_to_int);
void input_double(double *ptr_to_double);
void input_array_of_integers(int *p_arr, int size);
void input_structure_A(struct A *ptr_to_struct);

int main(void)
{
  int num = 0;
  double d_num = 0.0;
  int arr[5] = {0, 0, 0, 0, 0};
  struct A inA;
  inA.a = 0;
  inA.b = '\0';
  inA.c = 0.0;

  int i;

  puts("Displaying integer before input function");
  printf("num = %d\n", num);
  puts("----------------------------------------------");
  puts("Displaying double before input function");
  printf("d_num = %lf\n", d_num);
  puts("----------------------------------------------");
  puts("Displaying array before input function");
  for (i = 0; i < 5; ++i)
    printf("arr[%d] : %d\n", i, arr[i]);
  puts("----------------------------------------------");
  printf("Displaying structure before input function");
  printf("a = %d | b = %c | c = %f\n", inA.a, inA.b, inA.c);
  puts("----------------------------------------------");

  input_integer(&num);
  input_double(&d_num);
  input_array_of_integers(&arr[0], 5);
  input_structure_A(&inA);

  puts("----------------------------------------------");
  puts("Displaying integer after input function");
  printf("num = %d\n", num);
  puts("----------------------------------------------");
  puts("Displaying double after input function");
  printf("d_num = %lf\n", d_num);
  puts("----------------------------------------------");
  puts("Displaying array after input function");
  for (i = 0; i < 5; ++i)
    printf("arr[%d] : %d\n", i, arr[i]);
  puts("----------------------------------------------");
  printf("Displaying structure after input function");
  printf("a = %d | b = %c | c = %f\n", inA.a, inA.b, inA.c);

  exit(0);
}

void input_integer(int *ptr_to_int)
{
  printf("Enter the number : ");
  scanf("%d", ptr_to_int);
}

void input_double(double *ptr_to_double)
{
  *ptr_to_double = 398473897.3094834;
}

void input_array_of_integers(int *p_arr, int size)
{
  int i;
  for (i = 0; i < size; i++)
  {
    *(p_arr + i) = (*(p_arr + i) + 10) + i;
  }
}

void input_structure_A(struct A *ptr_to_struct)
{
  ptr_to_struct->a = 3928;
  ptr_to_struct->b = 'R';
  ptr_to_struct->c = 34.3498;
}

/* OUTPUT :-
Displaying double before input function
d_num = 0.000000
----------------------------------------------
Displaying array before input function
arr[0] : 0
arr[1] : 0
arr[2] : 0
arr[3] : 0
arr[4] : 0
----------------------------------------------
Displaying structure before input functiona = 0 | b =   | c = 0.000000
----------------------------------------------
Enter the number : 12
----------------------------------------------
Displaying integer after input function
num = 12
----------------------------------------------
Displaying double after input function
d_num = 398473897.309483
----------------------------------------------
Displaying array after input function
arr[0] : 10
arr[1] : 11
arr[2] : 12
arr[3] : 13
arr[4] : 14
----------------------------------------------
Displaying structure after input functiona = 3928 | b = R | c = 34.349800
*/