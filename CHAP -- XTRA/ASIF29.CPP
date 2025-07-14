#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int n,i;
char str[100];
clrscr();
cout<<"enter your full name";
gets(str);
cout<<"enter number of time";
cin>>n;
if(n==0)
{
cout<<"=================";
}
else
{
for(i=1;i<=n;i++)
{
puts(str);
}
}
getch();
}