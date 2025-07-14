#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	clrscr();
	char a[100];
	int i,j;
	cout<<"\nEnter a sentence:";
	gets(a);
	int l=strlen(a);
	int count=0;
	for(i=0;i<=l;i++)
	{
		if(a[i]==' ')
		{
			count++;
		}
	}
	cout<<"\nNumber of words="<<count+1;
	getch();
}