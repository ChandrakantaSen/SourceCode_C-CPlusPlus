#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class search
{
	char str[100];
	char ser[100];
	char pos[100];
	void logic()
	{
		int k=0,fou=0,a=0;
		while(a<=strlen(str))
		{
		   int m=0,f=0;
		   if(str[a]==ser[m])
		   {
		    m++;
		    for(b=a+1;b<strlen(str);b++)
		   {
		    if(str[b]!=ser[m])
		    {
		      f=1;
		      break;
		    }
		     m++;
		   }
		   if(f==0)
		   {
		      pos[k]=a;
		      a--;
		      k++;
		      fou++;
		   }
		}
		a++;
		m=0;
		f=0;




