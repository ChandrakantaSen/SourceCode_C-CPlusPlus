#include<iostream.h>
#include<conio.h>
class Date
{
int d,m,y;
public:
void logic()
{
cout<<"\nEnter date:";
cin>>d;
cout<<"\nEnter month:";
cin>>m;
cout<<"\nEnter year:";
cin>>y;
if(m==1)
cout<<d<<"th January, "<<y;
if(m==2)
cout<<d<<"th Febuary, "<<y;
if(m==3)
cout<<d<<"th March, "<<y;
if(m==4)
cout<<d<<"th April, "<<y;
if(m==5)
cout<<d<<"nd May, "<<y;
else if(m==6)
cout<<d<<"th June, "<<y;
else if(m==7)
cout<<d<<"th July, "<<y;
else if(m==8)
cout<<d<<"th August, "<<y;
else if(m==9)
cout<<d<<"th September, "<<y;
else if(m==10)
cout<<d<<"th October, "<<y;
else if(m==11)
cout<<d<<"th November, "<<y;
else if(m==12)
cout<<d<<"th December, "<<y;
}
};
void main()
{
clrscr();
Date d;
d.logic();
getch();
}




