/*
	step : 1 - Acceept array size from user,
	step : 2 - and then validate that size

	step : 3 - Allocate the array of integer with user
	entered array size

	step : 4 - Take the every value from the user,
			   for all array elements

	step : 5 - Display the array

	step : 6 - write the logic to calculate the sum of all the element of array
			   and display the sum. (Beginners)

	step : 7 - write a logic to sort the array and display the sorted array. (Experienced)

*/

#include <stdio.h>
#include <stdlib.h>

void summation_of_array(int *p_arr, int size_of_array, int *summation);
void accept_data(int *p_arr, int size_of_array);
void display_summation(int *summation);
void display_accepted_array(int *p_arr, int size_of_array);

int main(void)
{
	int *p_arr = 0;
	int size_of_array = 0;
	int sum = 0;

	printf("Enter the size of array : ");
	scanf("%d", &size_of_array);

	if (size_of_array <= 0)
	{
		puts("Invalid size of array");
		exit(-1);
	}

	p_arr = malloc(size_of_array * sizeof(int));

	if (p_arr == 0)
	{
		puts("Failed to allocate the memory");
		exit(-1);
	}

	accept_data(p_arr, size_of_array);
	display_accepted_array(p_arr, size_of_array);
	summation_of_array(p_arr, size_of_array, &sum);
	display_summation(&sum);

	free(p_arr);
	p_arr = 0;

	exit(0);
}

void accept_data(int *p_arr, int size_of_array)
{
	int i;
	for (i = 0; i < size_of_array; ++i)
	{
		printf("Enter the %d (element) : ", i + 1);
		scanf("%d", (p_arr + i));
	}
}

void display_accepted_array(int *p_arr, int size_of_array)
{
	int i;
	puts("Accepted array are as follow : ");
	for (i = 0; i < size_of_array; ++i)
	{
		printf("*(p_arr + %d) : %d\n", i, *(p_arr + i));
	}
}

void display_summation(int *summation)
{
	printf("The summation of array elements are : %d\n", *summation);
}

void summation_of_array(int *p_arr, int size_of_array, int *summation)
{
	int i;
	for (i = 0; i < size_of_array; ++i)
	{
		*summation = *summation + *(p_arr + i);
	}
}

/* OUTPUT :-

Enter the size of array : 5

Enter the 1 (element) : 10
Enter the 2 (element) : 20
Enter the 3 (element) : 30
Enter the 4 (element) : 40
Enter the 5 (element) : 50

Accepted array are as follow :

*(p_arr + 0) : 10
*(p_arr + 1) : 20
*(p_arr + 2) : 30
*(p_arr + 3) : 40
*(p_arr + 4) : 50

The summation of array elements are : 150

*/