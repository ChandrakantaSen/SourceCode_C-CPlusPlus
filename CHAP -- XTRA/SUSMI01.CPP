#include<iostream.h>
#include<conio.h>
class Account
{
protected:

int ac_no;
double principle;
public:
{
Account(int a,double p)
ac_no=a;
principle=p;
}
void read();
void display();
};
class Simple:private Account
{
double rate;
int time;
public:
{
Simple(int c,double s,double r,int t)
{
a=c;
p=s;
rate=r;
time=t;
}
double interest();
};
class Compound:private Simple
{
Compound(int x,double y,double z,int w)
{
ac_no=x;
p=y;
r=z;
t=w;
}
double interest();
};
void Account::read()
{
cout<<"\n enter account number";
cin>>ac_no;
cout<<"\n enter the principle";
cin>>p;
}
void Account::display()
{
cout<<"\n entered account number is"<<ac_no;
cout<<"\n enterd principal is"<<principal;
}
void Simple::interest()
{
read();
int SI=p*r*t;
}
void Simple::show()
{
display();
cout<<"simple interest is"<<SI;
}
void Compound::interest()
{
interest();
int CI=p(pow,[1+r/100],t);
}
void Compound::dis()
{
show();
cout<<"\n entered compond interest is";
}
void main();
{
Compound c;
c.interest();
c.dis();
getch();
}



