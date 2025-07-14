#include<iostream.h>
#include<conio.h>
void main()
{
int n,i,fact,j,a[100];
cout<<"Enter the size of the array find out factorials of each numbers in that array : - "<<endl;
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
fact=1;
for(j=1;j<=a[i];j++)
{
fact=fact*j;
}
cout<<"The factorial of "<<a[i]<<" is : - "<<fact<<endl;
}
getch();
}