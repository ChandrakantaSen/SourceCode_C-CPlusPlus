#include<iostream.h>
#include<conio.h>
void main()
{
int i=1,j,k=0,a=1;
clrscr();
cout<<"\n\n";
while(i>=0)
{
for(j=i;j<5;j++)
cout<<"  ";
for(a=(i*2)-1;a>0;a--)
cout<<" *";
if(i==5)
k++;
if(k==0)
i++;
else
i--;
cout<<"\n";
}
getch();
}