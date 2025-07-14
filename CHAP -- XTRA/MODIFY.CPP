#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	clrscr();
	char a[100],b;
	int pos;
	cout<<"\nEnter the string";
	gets(a);
	cout<<"\nEnter position to insert a letter:";
	cin>>pos;
	cout<<"\nEnter letter to be inserted:";
	cin>>b;
	for(int i=0;a[i];i++)
	{
	   a[pos]=b;
	   a[pos+1]=
	}
	cout<<endl;
	cout<<a;
	getch();
}
