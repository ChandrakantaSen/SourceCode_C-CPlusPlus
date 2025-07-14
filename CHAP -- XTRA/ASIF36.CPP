#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20],b[20];
clrscr();
cout<<"enter first string";
gets(a);
cout<<"\n enter 2nd string";
gets(b);
strcat(a," ");
strcat(a,b);
cout<<"\n concatenated string is: "<<a;
getch();
}