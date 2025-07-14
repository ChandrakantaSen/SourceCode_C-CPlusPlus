#include<iostream.h>
#include<conio.h>
void main()
{
int n,i,k,j;
clrscr();
cout<<"enter number if stars:";
cin>>n;
for(i=n;i>=0;i--)
{
for(k=n-1;k>=0;k--)
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