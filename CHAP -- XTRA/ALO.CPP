#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	clrscr();
	char a[100];
	int i;
	cout<<"\nEnter a sentence:";
	gets(a);
	for(i=0;a[i];i++)
	{
	   if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
	   {
	       a[i]=' ';
	   }
	}
	cout<<"\nAfter removing vowels:\n";
	cout<<a;
	getch();
}
