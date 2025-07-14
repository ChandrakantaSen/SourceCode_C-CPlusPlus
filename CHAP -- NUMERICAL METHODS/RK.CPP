#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x,y) ((x*x)+(y*y))

void main()
{
int i;
float y,x0,y0,h,n,x;
float k1,k2,k3,k4,d;
clrscr();
printf("\nEnter the initial value of x0 : ");
scanf("%f",&x0);
printf("\nEnter the initial value of y0 : ");
scanf("%f",&y0);
printf("\nEnter the step size of h : ");
scanf("%f",&h);
printf("\nEnter the initial value of x : ");
scanf("%f",&x);
n=(x-x0)/h;
x=x0;
y=y0;
for(i=0;i<n;i++)
 {
 k1=h*f(x,y);
 k2=h*f(x+h/2,y+k1/2);
 k3=h*f(x+h/2,y+k2/2);
 k4=h*f(x+h,y+k3);
 d=(k1+2*k2+2*k3+k4)/6;
 y=y+d;
 x=x+h;
 }
 printf("\nThe output of %f",y);
 getch();
 }
