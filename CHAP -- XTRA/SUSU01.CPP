#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
	clrscr();
	char a[100];
	char b[100];
	int i,shift;
	cout<<"\nEnter a sentence:";
	gets(a);
	cout<<"shift";
	cin>>shift;
	for(i=0;i<strlen(a);i++)
	{
	      if(a[i]=='Q')
		{

		 a[i]=' ';

	       }
	       if(a[i]!=' ' && a[i]!='Q')
	       {
	       a[i]=a[i]+shift;
	       }
	       if(a[i]=='[')
	       {
	       a[i]=char(65);
		}



	    }
			cout<<"\nRequired sentence:\n";
	       cout<<a;
		getch();

}
