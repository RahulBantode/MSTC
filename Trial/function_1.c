/* Function tracing convention considered by me,
   0 :	outside call
   1 :	inside call ani active
   2 :	inside call ani suspended
*/

#include<stdio.h>
#include<stdlib.h>

void function_1(void);
void function_2(void);
void function_3(void);

int main(void)
{
	puts("Inside the main::function");   //pc :- main() = 1 | function_1,function_2,function_3 = 0
	function_1();                        //pc :- main() = 1 | function_1,function_2,function_3 = 0
	puts("Exiting from main::function");
	exit(0);
}

void function_1(void)
{
	puts("Inside the function_1:: func");  //pc :- main() = 2 | function_1 = 1 | function_2,function_3 = 0
	function_2();                          //pc :- main() = 2 | function_1 = 1 | function_2,function_3 = 0
	puts("Exiting the function_1:: func"); //pc :- main() = 2 | function_1 = 1 | function_2,function_3 = 0
	return;								   //pc :- main() = 2 | function_1 = 1 | function_2,function_3 = 0			
}

void function_2(void)
{
	puts("Inside the function_2:: func");  //pc :- main() , function_1 = 2 | function_2 = 1 | function_3 = 0
	function_3();						   //pc :- main() , function_1 = 2 | function_2 = 1 | function_3 = 0
	puts("Exiting the function_2:: func"); //pc :- main() , function_1 = 2 | function_2 = 1 | function_3 = 0	
	return;								   //pc :- main() , function_1 = 2 | function_2 = 1 | function_3 = 0	
}

void function_3(void)
{
	puts("Inside the function_3:: func");  //pc :- main(),function_1,function_2 = 2 | function_3 = 1 
	puts("Exiting the function_3:: func"); //pc :- main(),function_1,function_2 = 2 | function_3 = 1
	return;                                //pc :- main(),function_1,function_2 = 2 | function_3 = 1
}