/*
	allocate array of integer using malloc()
	function.

	write,
	100 on index 0 element
	200 on index 1 element
	300 on index 2 element
	400 on index 3 element
	500 on index 4 element

	print the output
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int arr[5];
	int *p = 0;
	int num = 100;

	for(int i=0; i < 5; i++)
	{
		*p = malloc(sizeof(int));
		*p = num;
		arr[i] = *p;
		num += 100;
	}

	for(int i=0; i < 5; i++)
	{
		printf("arr[%d] : %d",i,arr[i]);
	}

	exit(0);
}