#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
char a[100];
int i,count=0;
cout<<"\nEnter a name:";
gets(a);
for(i=0;a[i];i++)
{
	if(a[i]==' ')
	count++;
}
if(count!=0)
cout<<a[0]<<".";
for(i=0;a[i];i++)
{
	if(count==0)
	cout<<a[i];
	if(a[i]==' ')
	{
		if(count>1)
		cout<<a[i+1]<<".";
	count--;
	}
}
getch();
}




































































































































































































