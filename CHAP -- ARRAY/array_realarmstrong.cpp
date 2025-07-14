#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,i,s,m,d,a[100],c;
clrscr();
cout<<"Enter the size of the array find out real armstrong numbers in that array : - "<<endl;
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
cout<<"The real armstrong numbers in the array are as follows : - "<<endl;
for(i=0;i<n;i++)
{
c=0;
s=0;
m=a[i];
while(m>0)
{
c++;
m=m/10;
}
m=a[i];
while(m>0)
{
d=m%10;
s=s+pow(d,c);
m=m/10;
}
if(s==a[i])
{
cout<<a[i]<<endl;
}
}
getch();
}