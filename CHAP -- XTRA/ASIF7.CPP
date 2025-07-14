#include<iostream.h>
#include<conio.h>
void main()
{
int n,d1,d2,d3,d4,d5,sum;
clrscr();
cout<<"enter the 5 digit number";
cin>>n;
d1=n%10;
n=n/10;
d2=n%10;
n=n/10;
d3=n%10;
n=n/10;
d4=n%10;
n=n/10;
d5=n%10;
n=n/10;
sum=d1+d2+d3+d4+d5;
cout<<"the sum is"<<sum;
getch();
}