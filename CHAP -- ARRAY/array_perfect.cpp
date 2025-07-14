#include<iostream.h>
#include<conio.h>
void main()
{
int n,i,s,j,a[100];
cout<<"Enter the size of the array find out perfect numbers in that array : - "<<endl;
cin>>n;
cout<<"Enter the values in the array : - "<<endl;
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"The values in the array are as follows : - "<<endl;
for(i=0;i<n;i++)
{
cout<<a[i]<<endl;
}
cout<<"The perfect numbers in the array are as follows : - "<<endl;
for(i=0;i<n;i++)
{
s=0;
for(j=1;j<a[i];j++)
{
if(a[i]%j==0)
{
s=s+j;
}
}
if(s==a[i])
{
cout<<i<<endl;
}
}
getch();
}