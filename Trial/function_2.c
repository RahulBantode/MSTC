/* Function tracing convention considered by me,
   0 :	outside call
   1 :	inside call ani active
   2 :	inside call ani suspended

  Note :- program control starts from data manipulation statement not from the data defination statement.

          data defination statement :- means which can give the memory to the data ]
          data manipulation statement :- means to process that data by performing some operations on it.
*/

#include<stdio.h>
#include<stdlib.h>

void fun_1(void);
void fun_2(void);
void fun_3(void);
void fun_4(void);

int main(void)
{
   int a;
   int b;
   int result;

   puts("start::main()");       //pc :- main()=1 | fun_1(),fun_2(),fun_3(),fun_4()=0  --1
   fun_1();                     //pc :- main()=1 | fun_1(),fun_2(),fun_3(),fun_4()=0  --2       
   puts("Hello from ::main()"); //pc :- main()=1 | fun_1(),fun_2(),fun_3(),fun_4()=0  --18 
   exit(0);                     //pc :- main()=1 | fun_1(),fun_2(),fun_3(),fun_4()=0  --19 
}

void fun_1(void)
{
   puts("start::fun_1");   //pc :- main()=2 | fun_1()=1 | fun_2(),fun_3(),fun_3()=0   --3
   fun_2();                //pc :- main()=2 | fun_1()=1 | fun_2(),fun_3(),fun_3()=0   --4
   puts("end::fun_1");     //pc :- main()=2 | fun_1()=1 | fun_2(),fun_3(),fun_3()=0   --16   
   return;                 //pc :- main()=2 | fun_1()=1 | fun_2(),fun_3(),fun_3()=0   --17
}

void fun_2(void)
{
   puts("start::fun_2");  //pc :- main(),fun_1()=2 | fun_2()=1 | fun_3(),fun_4()=0   --5  
   fun_3();               //pc :- main(),fun_1()=2 | fun_2()=1 | fun_3(),fun_4()=0   --6
   puts("end::fun_2");    //pc :- main(),fun_1()=2 | fun_2()=1 | fun_3(),fun_4()=0   --14
   return;                //pc :- main(),fun_1()=2 | fun_2()=1 | fun_3(),fun_4()=0   --15
}

void fun_3(void)
{
   puts("start::fun_3");  //pc :- main(),fun_1(),fun_2()=2 | fun_3()=1 | fun_4()=0   --7
   fun_4();               //pc :- main(),fun_1(),fun_2()=2 | fun_3()=1 | fun_4()=0   --8  
   puts("end::fun_3");    //pc :- main(),fun_1(),fun_2()=2 | fun_3()=1 | fun_4()=0   --12 
   return;                //pc :- main(),fun_1(),fun_2()=2 | fun_3()=1 | fun_4()=0   --13
}

void fun_4(void)
{
   puts("start::fun_4");  //pc :- main(),fun_1(),fun_2(),fun_3()=2 | fun_4()=1  --9 
   puts("end::fun_4");    //pc :- main(),fun_1(),fun_2(),fun_3()=2 | fun_4()=1  --10
   return;                //pc :- main(),fun_1(),fun_2(),fun_3()=2 | fun_4()=1  --11 
}
