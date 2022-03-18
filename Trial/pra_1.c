#include<stdio.h>
#include<stdlib.h>

int size = 100;

struct Table
{
	int roll_no;
	char *name;
};

int main(void)
{
	struct Table tbl[] = {
							{101,"Rahul Bantode   "},
							{102,"Anuj  kothawade "},
							{103,"Kunal Chinchole "},
							{104,"Nitin Chaudhary "}
						 };

	puts("--------------------------");
	for(int i=0; i < 4; ++i)
	{
		printf("| %d | %s |\n",tbl[i].roll_no,tbl[i].name);
		puts("--------------------------");
	}
	exit(0);
}