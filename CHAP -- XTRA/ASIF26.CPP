#include<iostream.h>
#include<conio.h>
void main()
{
int n,i,j,flag=0;
clrscr();
cout<<"enter the value of n:";
cin>>n;
cout<<"\n\n\n out put .... \n\n\n";
for(i=0;i<=n;i++)
{
for(j=0;j<=(n-i);j++)
cout<<j;
if(flag==0)
{
cout<<"\b";
flag=1;
}
for(j=0;j<i*2-1;j++)
cout<<" ";
for(j=(n-i);j>=0;j--)
{
cout<<j;
}
cout<<"\n";
}
getch();
}