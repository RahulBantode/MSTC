/* 

Define and initialize array of size 4 of struct A
and print all members of array.

*/
#include<stdio.h>
#include<stdlib.h>

struct A
{
	int m;
	struct B
	{
		short s1;
		short s2;
		int a[4];
	}inB;
	int n;
};

int main(void)
{
	struct A inA[4];

	for(int i=0; i<4; i++)
	{
		inA[i].m = 10;
		inA[i].inB.s1 = 2;
		inA[i].inB.s2 = 5;
		for(int j=0; j<4; j++)
		{
			inA[i].inB.a[j] = j;
		}
		inA[i].n = 20;
	}

	puts("All the data of structure of array");

	for(int i = 0; i<4; i++)
	{
		printf("m  = %d\n",inA[i].m);
		printf("s1 = %hu\n",inA[i].inB.s1);
		printf("s2 = %hu\n",inA[i].inB.s2);
		for(int j=0; j<4; j++)
		{
			printf("  inner array : %d\n",inA[i].inB.a[j]);
		}
		printf("n = %d\n",inA[i].n);
		puts("-------------------------------------\n");
	}

	exit(0);
}

/* OUTPUT :_

All the data of structure of array
m  = 10
s1 = 2
s2 = 5
  inner array : 0
  inner array : 1
  inner array : 2
  inner array : 3
n = 20
-------------------------------------

m  = 10
s1 = 2
s2 = 5
  inner array : 0
  inner array : 1
  inner array : 2
  inner array : 3
n = 20
-------------------------------------

m  = 10
s1 = 2
s2 = 5
  inner array : 0
  inner array : 1
  inner array : 2
  inner array : 3
n = 20
-------------------------------------

m  = 10
s1 = 2
s2 = 5
  inner array : 0
  inner array : 1
  inner array : 2
  inner array : 3
n = 20
-------------------------------------

*/