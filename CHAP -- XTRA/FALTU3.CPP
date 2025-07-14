#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
	clrscr();
	char a[100];
	int i;
	cout<<"\nEnter a sentence:";
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]==' ' && a[i+1]!=' ')
		{
		  a[i+1]=a[i+1]+32;
		}
		if(a[i]!=' ' && a[i+1]==' ')
		{
		  a[i]=a[i]+32;
		}
	}
	cout<<"\nRequired sentence:\n";
	cout<<a;
	getch();
}











