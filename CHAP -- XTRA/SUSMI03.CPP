#include<iostream.h>
#include<string.h>
#include<math.h>
#include<process.h>
#include<conio.h>
void main()
{
double func(char str[100],int a,int b,int d);
int i,c=0,len,code,p1,p2;
double r1,r2;
char string[100];
cout<<"enter the expression";
cin.get(string,100);
len=strlen(string);
for(i=0;i<=(len-1);i++)
{
code=string[i];
if(code=='*'||code=='+'||code=='-'||code=='/')
{
c=i;
break;
}
}
p1=c-1;
r1=func(string,0,c,p1);
p2=(len-1)-(c+1);
r2=func(string,c+1,len,p2);
if(string[c]=='+')
cout<<r1<<string[c]<<r2<<"="<<r1+r2<<"\n";
else
if(string[c]=='-')
cout<<r1<<string[c]<<r2<<"="<<r1-r2<<"\n";
else
if(string[c]=='*')
cout<<r1<<string[c]<<r2<<"="<<r1*r2<<"\n";
else
if(string[c]=='/')
cout<<r1<<string[c]<<r2<<"="<<r1/r2<<"\n";
getch();
}
void function(char str[100],int a,int b,int d)
{
int x;
double r=0,cd,n;
for(x=a;x<=(b-1);x++)
{
cd=str[x];
if(cd<'0'||cd>'9')
{
cout<<"expression entered is invalid.\n ";
exit(0);
}
n=cd-48;
r=r+(n*(pow(10,d)));
d=d-1;
}

}