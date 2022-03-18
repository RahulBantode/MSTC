/*

Define and initialize array of size 4 of struct A
and print all members of array.

*/
#include <stdio.h>
#include <stdlib.h>

struct A
{
	int m;
	struct B
	{
		short s1;
		short s2;
		int a[4];
	} inB;
	int n;
};

int main(void)
{
	struct A inA[4] = {
		{10,
		 {2, 3, {1, 2, 3, 4}},
		 1000},
		{20,
		 {4, 5, {4, 5, 6, 7}},
		 2000},
		{30,
		 {6, 7, {8, 9, 10, 12}},
		 3000},
		{40,
		 {8, 9, {13, 14, 15, 16}},
		 4000}};

	puts("All the data of structure of array");

	for (int i = 0; i < 4; i++)
	{
		printf("m  = %d\n", inA[i].m);
		printf("s1 = %hu\n", inA[i].inB.s1);
		printf("s2 = %hu\n", inA[i].inB.s2);
		for (int j = 0; j < 4; j++)
		{
			printf("  inner array : %d\n", inA[i].inB.a[j]);
		}
		printf("n = %d\n", inA[i].n);
		puts("------------------------------------------------\n");
	}

	exit(0);
}

/* OUTPUT :_

All the data of structure of array
m  = 10
s1 = 2
s2 = 3
  inner array : 1
  inner array : 2
  inner array : 3
  inner array : 4
n = 1000
-------------------------------------

m  = 20
s1 = 4
s2 = 5
  inner array : 4
  inner array : 5
  inner array : 6
  inner array : 7
n = 2000
-------------------------------------

m  = 30
s1 = 6
s2 = 7
  inner array : 8
  inner array : 9
  inner array : 10
  inner array : 12
n = 3000
-------------------------------------

m  = 40
s1 = 8
s2 = 9
  inner array : 13
  inner array : 14
  inner array : 15
  inner array : 16
n = 4000
-------------------------------------

*/