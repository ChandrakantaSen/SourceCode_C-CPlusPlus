#include<iostream.h>
#include<conio.h>
void main()
{
int n,i,c,j,a[100];
cout<<"Enter the size of the array find out prime numbers in that array : - "<<endl;
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
cout<<"The prime numbers in the array are as follows : - "<<endl;
for(i=0;i<n;i++)
{
c=0;
for(j=1;j<=a[i];j++)
{
if(a[i]%j==0)
{
c++;
}
}
if(c==2)
{
cout<<i<<endl;
}
}
getch();
}