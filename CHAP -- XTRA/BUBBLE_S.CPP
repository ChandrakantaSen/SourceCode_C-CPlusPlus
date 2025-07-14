#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[100],i,j,l,temp;
cout<<"\nEnter length of array:";
cin>>l;
for(i=0;i<l;i++)
{
cout<<"\nEnter nos in array:";
cin>>a[i];
}
cout<<"\nOriginal array:\n";
for(i=0;i<l;i++)
{
cout<<a[i]<<"\t";
}
for(i=0;i<l;i++)
{
for(j=i;j<l;j++)
{
if(a[i]<a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
cout<<"\nSorted array\n";
for(i=0;i<l;i++)
{
cout<<a[i]<<"\t";
}
getch();
}

































