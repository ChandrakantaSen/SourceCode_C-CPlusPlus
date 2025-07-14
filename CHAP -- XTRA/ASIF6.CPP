#include<iostream.h>
#include<conio.h>
void main()
{
float x,x2,x4,x6,x8,x10,sum;
clrscr();
cout<<"enter the  x= ";
cin>>x;
x2=x*x;
x4=x2*x2/24.0;
x6=x4*x2/30.0;
x8=x6*x2/56.0;
x10=x8*x2/90.0;
sum=(1.0-0.5*x2+x4-x6+x8-x10);
cout<<"enter the sum"<<sum;
getch();
}