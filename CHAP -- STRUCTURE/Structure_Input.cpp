#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct result
{
    char name[30],index[10];
    float pcent;
}publish;

void announce(result)
{
 cout<<"Name :-"<<publish.name<<endl;
 cout<<"Index no :- "<<publish.index<<endl;
 cout<<"Marks :- "<<publish.pcent<<" %"<<endl;
}

void main()
{
 clrscr();
 cout<<"Enter the name of the candidate :- "<<endl;
 gets(publish.name);

 cout<<"Enter the index number :- "<<endl;
 cin>>publish.index;

 cout<<"Enter the percent marks awarded :- "<<endl;
 cin>>publish.pcent;

 announce(publish);
 getch();
}
