/* NO ARGUMENT NO RETURN*/
#include<stdio.h>
#include<conio.h>
void ADD();
void SUB();
void MULTI();
void DIV();
void main()
{
ADD();
SUB();
MULTI();
DIV();
getch();
}
void ADD()
{
int a,b,c;
a=10;
b=5;
c=a+b;
printf("\n The addition of a & b is =%d",c);
}
void SUB()
{
int a,b,c;
a=10;
b=5;
c=a-b;
printf("\n The subtraction of a & b is =%d",c);
}
void MULTI()
{
int a,b,c;
a=10;
b=5;
c=a*b;
printf("\n The multiplication of a & b is =%d",c);
}
void DIV()
{
int a,b,c;
a=10;
b=5;
c=a/b;
printf("\n The division of a & b is =%d",c);
}
