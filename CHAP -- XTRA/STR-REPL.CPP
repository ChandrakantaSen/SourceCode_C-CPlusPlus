#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
void main(){
	   clrscr();
	   char line[80];
	   char temp[20];
	   char *new1;
	   new1=(char *)new[80];
	   cout<<"\n** ENTER A LINE :\n\n";
	   fflush(stdin); gets(line);
	   int n=strlen(line);
	   char find[20];
	   cout<<"\n\n** ENTER THE WORD TO BE REPLACED : ";
	   cin>>find;
	   char replace[20];
	   cout<<"\n\n** ENTER NEW WORD : ";
	   cin>>replace;
	   //for(int i=0;i<80;i++)
	     new1[0]='\0';
	     for(int i=0;i<n;i++)
	    {
	     int d=0;
	      do{
		 temp[d++]=line[i++];
		}while(line[i]!=' ');
	      temp[d]='\0';
	    if(strcmpi(temp,find)==0)
	       { strcat(new1, replace); strcat(new1," "); }
	    else
	       { strcat(new1,temp); strcat(new1," "); }
	    }
	   cout<<"\n\n** AFTER REPLACEMENT :\n\n";
	   cout<<new1;
	   getch();
	 }

