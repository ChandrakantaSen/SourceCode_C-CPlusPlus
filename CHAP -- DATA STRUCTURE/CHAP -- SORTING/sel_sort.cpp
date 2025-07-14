#include<iostream.h>
#include<conio.h>
void main()
{
int a[100],i,j;
int t,s;
clrscr();
cout<<"Enter the size of the array "<<endl;
cin>>s;
cout<<"Enter the values in the array :"<<endl;
for(i=0;i<s;i++)
{
cin>>a[i];
}
for(i=0;i<s;i++)
{
for(j=i+1;j<s;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
cout<<"\n The values after sorting are :"<<endl;
for(i=0;i<s;i++)
{
cout<<a[i]<<endl;
}
getch();
}

