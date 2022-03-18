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
	int *p_arr = 0;
	int size_of_array = 5;


	p_arr = malloc(size_of_array*sizeof(int));

	if(p_arr == 0)
	{
		puts("Failed to allocate memory");
		exit(-1);
	}

	for(int i=0; i < size_of_array; i++)
	{
		*(p_arr + i) = (i+1)*100;
	}

	for(int i=0; i < size_of_array; i++)
	{
		printf("*(p_arr + %d) : %d\n",i,*(p_arr + i));
	}

	free(p_arr);
	p_arr = 0;

	exit(0);
}

/* OUTPUT :-

*(p_arr + 0) : 100
*(p_arr + 1) : 200
*(p_arr + 2) : 300
*(p_arr + 3) : 400
*(p_arr + 4) : 500
*/