#include<stdio.h>
#include<stdlib.h>

int* create_array(int arr[],int size);

int main(void)
{
	int *arr = 0;
	int i;
	int *p_arr = 0;

	arr = malloc(5*sizeof(int));
	// puts("Before function call : arr");
	// for(i = 0; i < 5; ++i)
	// 	printf("arr[%d] = %d\n",i,arr[i]);

	puts("After function call : p_arr");
	p_arr = create_array(arr,5);
	for(i = 0; i < 5; ++i)
		printf("*(p_arr + %d) : %d\n",i,*(p_arr + i));

	puts("After function call : arr");
	for(i = 0; i < 5; ++i)
		printf("arr[%d] = %d\n",i,*(arr+i));

	free(p_arr);
	p_arr = 0;
}

int* create_array(int arr[],int size)
{
	int i;
	arr = malloc(size * sizeof(int));
	if(arr == 0)
	{
		puts("memory allocation failed");
		exit(-1);
	}
	for(i = 0; i < size; ++i)
		*(arr + i) = (i + 1)*100;

	return (arr);
}