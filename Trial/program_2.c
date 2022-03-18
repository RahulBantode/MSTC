#include<stdio.h>
#include<stdlib.h>

struct A
{
	int a;
	int b;
	struct B
	{
		double p;
		struct C
		{
			int x;
			int y;
			short s_arr[4];
			int z;
		}inC;
		double q;
	}inB;
	int c;
};

int main(void)
{
	struct A inA;
	printf("The sizeOf Struct A = %llu\n",(unsigned long long int)sizeof(inA));
	printf("The sizeof struct B = %llu\n",(unsigned long long int)sizeof(inA.inB));
	printf("The sizeof struct C = %llu\n",(unsigned long long int)sizeof(inA.inB.inC));
	double a;
	printf("Size of double : %llu\n",(unsigned long long int)sizeof(a));
	exit(0);
}