#include<iostream.h>
#include<conio.h>
void main()
{
int n,b=1,d=0,s=0;
clrscr();
cout<<"Enter any no.:"<<endl;
cin>>n;
while(b!=0)
{
b=n/10;
d=n%10;
s=s*10+d;
n=b;
}
cout<<"The reverse of that number is: "<< s <<endl;
getch();
}
