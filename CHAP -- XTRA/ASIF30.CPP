#include<stdio.h>
#include<iostream.h>
#include<conio.h>
void main()
{
int n,i;
char str[100];
clrscr();
cout<<"enter your full name ";
gets(str);
cout<<"enter number of time";
cin>>n;
if(n==0)
{
cout<<"=======================";
}
else
{
i=1;
while(i<=n)
{
i++;
puts(str);
}
}
getch();
}