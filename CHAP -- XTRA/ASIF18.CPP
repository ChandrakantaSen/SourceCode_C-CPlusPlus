#include<iostream.h>
#include<conio.h>
void main()
{
int i,sev=0,sod=0;
clrscr();
for(i=1;i<=10;i++)
{
if(i%2==0)
sev=sev+1;
else
sod=sod+1;
cout<<"\nsum of even no. is "<<sev;
cout<<"\nsum odd on.is "<<sod;
getch();
}
}
