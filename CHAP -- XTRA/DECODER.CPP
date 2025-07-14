#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	clrscr();
	char str[200];
	cout<<"\nEnter the value:";
	gets(str);
	int p,l=0;
	char b[2];
	for(p=0;str[p];p++)
	{
	 b[0]=str[p];
	 b[1]='\0';
	 l=l*10+ atoi(b);
	 if((l>=65 && l<=90)||(l>=97 && l<=122)||(l==32))
	 {
		cout<<(char)l;
		l=0;
	 }
	}
getch();
}










