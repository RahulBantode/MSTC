int main(void);
int puts(const char *s);
//int printf(const char *format, ...);
#include<stdio.h>
void myFunction(void);
int myFunction2(void);

int main(void)
{
	puts("Hello World");
	myFunction();	
	int n = myFunction2();
	printf("N : %d\n",n);
	puts("end");
	exit(0);
}

void myFunction(void)
{
	puts("inside myFunction");
}

int myFunction2(void)
{
	return ;
}