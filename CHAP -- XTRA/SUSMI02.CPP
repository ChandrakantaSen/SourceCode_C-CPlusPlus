#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdio.h>
void main()
{
clrscr();
int len,b=0,i,r=0,k,code,d=0,A[50];
char string[100];
cout<<"Input a string:-";
gets(string);
len=strlen(string);
cout<<"\n";
for(i=0;i<=len;i++)
{
code=string[i];
if(code=='C')
{
d=d+1;
A[d]=i;
}
if(d>1)
{
for(k=A[d-1]+1;k<A[d];k++)
{
code=string[k];
if(code== ')')
{
r=0;
break;
}
else
{
r=r+1;
}
}
if(r>0)
{
cout<<"Nested Brackets,hence not valid\n";
exit(0);
}
}
}
i=0;
do
{
b=0;
code=string[i];
if(code=='(')
{
b=b+1;
for(int y=i+1;y<=len;y++)
{
i++;
code=string[y];
if(code==')')
{
i++;
break;
}
}
}
if(b==0)
{
cout<<string[i];
i++;
}
}
while(i<=len);
cout<<"\n";
getch();
}
