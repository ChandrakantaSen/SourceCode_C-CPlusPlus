// program to implement basic arithmetic operation using user defined
// function- ADD(),SUB(),MULTI(),DIV().

//user_defined_function: declaration, definition, calling.

// step1:no argument-no return
// step2:argument but no return
// step3:no argument but return
// step4:argument with return

//step-1:
/*
#include<stdio.h>

void ADD();
void SUB();
void MULTI();
void DIV();
int a=10,b=5,c;



void ADD()
{

c=a+b;
printf("\nThe addition of A and B is =%d",c);

}

void SUB()
{

c=a-b;
printf("\nThe subtraction of A and B is =%d",c);

}

void MULTI()
{

c=a*b;
printf("\nThe multiplication of A and B is =%d",c);
}

void DIV()
{

c=a/b;
printf("\nThe divition of A and B is =%d",c);
}



void main()
{
DIV();
ADD();
MULTI();
SUB();

}
*/

/*
//step-2


#include<stdio.h>

void ADD(int a, int b);
void SUB(int a, int b);
void MULTI(int a, int b);
void DIV(int a, int b);



void ADD(int a, int b)
{
int c;
c=a+b;
printf("\nThe addition of A and B is =%d",c);

}

void SUB(int a, int b)
{
int c;
c=a-b;
printf("\nThe subtraction of A and B is =%d",c);

}

void MULTI(int a, int b)
{
int c;
c=a*b;
printf("\nThe multiplication of A and B is =%d",c);
}

void DIV(int a, int b)
{
int c;
c=a/b;
printf("\nThe divition of A and B is =%d",c);
}






void main()
{
 ADD(12,6);
 SUB(15,3);

 MULTI(7,3);
 DIV(45,3);
}

*/


//step3:


#include<stdio.h>

void ADD();
void SUB();
void MULTI();
int DIV();
int a=10,b=5,c;



void ADD()
{

c=a+b;
printf("\nThe addition of A and B is =%d",c);

}

void SUB()
{

c=a-b;
printf("\nThe subtraction of A and B is =%d",c);

}

void MULTI()
{

c=a*b;

}

int DIV()
{

c=a/b;
return(c);
}



void main()
{
int x;
x=DIV();
printf("\nThe division of A and B is =%d",x);




}
