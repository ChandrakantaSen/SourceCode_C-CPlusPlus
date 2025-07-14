#include<iostream.h>
#include<conio.h>
class prime
{
int num[100];
int size;
int rn;
public:
void getdata();
void array();
void cprime(int);
void printprime();
};
void prime::getdata()
{
cout<<"\nEnter a number:";
cin>>rn;
}
void prime::array()
{
int t=rn;
int s=0;
int j=0;
while(t>0)
{
s=s*10+t%10;
t=t/10;
}
while(s>0)
{
num[j]=s%10;
j++;
s=s/10;
}
size=j;
}
void prime::cprime(int x)
{
int y;
for(y=2;y<x;y++)
{
if(x%y==0)
break;
}
if(x==y)
cout<<"\n"<<x;
}
void prime::printprime()
{
int i,j;
for(i=0;i<=size;i++)
{
	int s=0;
	for(j=i;j<=size;j++)
	{
		s=s*10+num[j];
		cprime(s);
	}
}
}
void main()
{
prime p;
clrscr();
p.getdata();
p.array();
p.printprime();
getch();
}