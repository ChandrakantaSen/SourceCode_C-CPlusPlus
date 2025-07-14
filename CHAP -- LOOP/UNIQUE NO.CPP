#include<iostream.h>
#include<conio.h>
void UniqueDigit(int);
void main()
{        clrscr();
int n;
cout<<"\n enter a no.";
cin>>n;
UniqueDigit(n);
getch();
}
void UniqueDigit(int y)
{
int a,z,x,d=0,d1=0,d2=0,c,p;
p=y;c=y;
while(y>0)
{
a=y%10;
while(c>0)
{
z=c%10;
if(z==a)
{
d=d+1;
}
c=c/10;
}
c=p;
y=y/10;
if(d>1)
{
d2=d;
}
d=0;
}
if(d2>1)
{
cout<<"\n  not    Unique    no";
}
else
{
cout<<"\n  Unique      no.";
     }
     }



