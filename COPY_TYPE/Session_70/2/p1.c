/* Take two local variables in main.
   assign them some value
   Write function which will multiply
   current values in the variables by
   10 and store the result in the variables
*/

#include <stdio.h>
#include <stdlib.h>

void mult_by_10(int *p_num1, int *p_num2);

int main(void)
{
    int num1 = 23, num2 = 45;
    printf("Before :  num1 = %d | num2 = %d\n", num1, num2);
    mult_by_10(&num1, &num2);
    printf("After :  num1 = %d | num2 = %d\n", num1, num2);

    exit(0);
}

void mult_by_10(int *p_num1, int *p_num2)
{
    *p_num1 = *p_num1 * 10;
    *p_num2 = *p_num2 * 10;
}

/* OUTPUT :-
Before :  num1 = 23 | num2 = 45
After :  num1 = 230 | num2 = 450
*/