#include<stdio.h>
#include<conio.h>
void main()
{
int x,f1,f2;
clrscr();
printf("enter the value of x:");
scanf("%d",&x);
poly(x,&f1,&f2);
printf("\n value of f1=%d",f1);
printf("\n value of f2=%d",f2);
}
poly(x,f1,f2)
int x;
int *f1,*f2;
{
*f1=3*x*x+2*x+1;
*f2=5*x*x+4*x+3;
getch();
}
