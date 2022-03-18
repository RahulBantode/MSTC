#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int *p = NULL;
	int n = 10;
	p = &n;
	printf("addr p : %llu",(unsigned long long int)p);
	free(p);
	printf("%d\n",*p);
	// puts("Hey-------");
	exit(0);
}