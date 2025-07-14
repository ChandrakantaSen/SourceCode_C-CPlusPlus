#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,i;
clrscr();
cout<<"enter any no:-";
cin>>a;
for(i=1;i<=a;i++)
{
for(b=1;b<=i;b++)
cout<<"0";
cout<<"\n";
}
getch();
}