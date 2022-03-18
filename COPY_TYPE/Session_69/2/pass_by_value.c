#include <stdio.h>
#include <stdlib.h>

void test_function(int x, int y);

int main(void)
{
    int m = 10, n = 20;

    printf("Address of local variable (m) = %llu\n", (unsigned long long int)&m);
    printf("Address of local variable (n) = %llu\n", (unsigned long long int)&n);

    puts("Before call to test_function() : ");
    printf("m=%d, n=%d\n", m, n);
    test_function(m, n);
    printf("After call to test_function():");
    printf("m = %d,n=%d\n", m, n);
    exit(0);
}

void test_function(int x, int y)
{
    puts("inside the test_function");
    printf("Address of formal parameter (m) : %llu\n", (unsigned long long int)&x);
    printf("Address of formal parameter (y) : %llu\n", (unsigned long long int)&y);

    printf("Before assing to x,y | x=%d,y=%d\n", x, y);

    x = 300;
    y = 400;

    printf("After assign to x,y | x=%d,y=%d\n", x, y);
    puts("Returning to main");
    return;
}
/* OUTPUT :-

Address of local variable (m) = 9435692
Address of local variable (n) = 9435696
Before call to test_function() :
m=10, n=20
inside the test_function
Address of formal parameter (m) : 9435684
Address of formal parameter (y) : 9435688
Before assing to x,y | x=10,y=20
After assign to x,y | x=300,y=400
Returning to main
After call to test_function():m = 10,n=20
*/