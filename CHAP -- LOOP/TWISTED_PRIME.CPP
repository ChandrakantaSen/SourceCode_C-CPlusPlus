#include<iostream.h>
#include<conio.h>
void TwistedPrime(int);
void main()
{ clrscr();
int a;
cout<<"\n Enter A No.-> ";
cin>>a;
TwistedPrime(a);
getch();
}
void TwistedPrime(int x)
{
int c=0;
for(int i=2;i<x;i++)
{
if(x%i==0)
{
c=c+1;
}
}
if(c==0)
{
int b,n=0;
while(x!=0)
{
b=x%10;
n=b+(n*10);
x=x/10;
}
for(int j=2;j<n;j++)
{
if(n%j==0)
{
c=c+1;
}
}
}
if(c==0)
{
cout<<"\n it is a TWISTED PRIME NUMBER";
}
else{
cout<<"not a twisted prime";
}
}



