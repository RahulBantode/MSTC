#include<stdio.h>
#include<stdio.h>

int a_arr[] = {100,200,300,400,500};
int *a;
int tmp;

int main(void)
{
	a = &a_arr[0];
	int i=0;

	puts("The array element using a_arr[i]");
	while(i<5)
	{
		printf("Index of i = %d | Address in the i : %llu\n",i,(unsigned long long int)&a_arr[i]);
		i++;
	}

	puts("The array element (a+i)");
	i=0;
	while(i<5)
	{
		printf("Index of i = %d | Address in the i :%llu\n",i,(unsigned long long int)(a+i));
		i++;
	}

	puts("The array element using *(a+i)");
	
	i=0;
	while(i<5)
	{
		printf("Index of i = %d | Value of the i : %d\n",i,*(a+i));
		i++;
	}

	puts("After modification : ");
	i=0;
	while(i<5)
	{
		*(a+i) = *(a+i) + 5;
		i++;
	}

	puts("Access the elements after modification : ");
	i=0;
	while(i<5)
	{
		tmp = *(a+i);
		printf("Index : %d | Value : %d\n",i,tmp);
		i++;
	}

	exit(0);
}

/* OUTPUT :-

The array element using a_arr[i]
Index of i = 0 | Address in the i : 6258688
Index of i = 1 | Address in the i : 6258692
Index of i = 2 | Address in the i : 6258696
Index of i = 3 | Address in the i : 6258700
Index of i = 4 | Address in the i : 6258704
The array element (a+i)
Index of i = 0 | Address in the i :6258688
Index of i = 1 | Address in the i :6258692
Index of i = 2 | Address in the i :6258696
Index of i = 3 | Address in the i :6258700
Index of i = 4 | Address in the i :6258704
The array element using *(a+i)
Index of i = 0 | Value of the i : 100
Index of i = 1 | Value of the i : 200
Index of i = 2 | Value of the i : 300
Index of i = 3 | Value of the i : 400
Index of i = 4 | Value of the i : 500
After modification :
Access the elements after modification :
Index : 0 | Value : 105
Index : 1 | Value : 205
Index : 2 | Value : 305
Index : 3 | Value : 405
Index : 4 | Value : 505

*/