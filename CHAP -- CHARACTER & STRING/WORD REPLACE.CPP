#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	clrscr();
	char a[100],ser[100],rep[100];
	cout<<"\nEnter a sentence:";
	gets(a);
	cout<<"\nEnter a word to search:";
	cin>>ser;
	cout<<"\nEnter a word to replace:";
	cin>>rep;
	int i,j=0,k=0;
	  for(i=0;i<strlen(a);i++)
	  {
		if(a[i]==ser[k])
		{
		    a[i]=rep[k];
		    k++;
		}
	   }

	cout<<"\nSentence after replacement:\n";
	cout<<a;
	getch();
}
