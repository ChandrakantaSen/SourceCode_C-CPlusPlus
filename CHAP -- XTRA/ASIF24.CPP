#include<iostream.h>
#include<conio.h>
void main()
{
int n,i,k,j;
clrscr();
cout<<"enter number of stars";
cin>>n;
for(i=n;i>=0;i--)
{
for(k=n-i;k>=0;k--)
{
cout<<"      ";
}
for(j=i;j>0;j--)
{
cout<<" *    ";
}
cout<<"\n";
}
getch();
}