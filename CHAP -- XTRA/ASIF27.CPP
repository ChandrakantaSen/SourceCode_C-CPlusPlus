#include<iostream.h>
#include<conio.h>
void main()
{
int ch;
float a,b,c,d;
do{
clrscr();
cout<<"\n1. addition";
cout<<"\t\n2....subtraction";
cout<<"\t\n3....multiplication";
cout<<"\t\n4....division";
cout<<"\t\n5....termination";
cout<<"\t\n your choice please.....[1,2,3,4]:";
cin>>ch;
if(ch==5)
break;
if(ch<1||ch>6)
{
cout<<"invalid input";
getch();
continue;
}
cout<<"\n enter two value:="<<endl;
cin>>a>>b;
switch(ch)
{
case 1:
c=a+b;
break;
case 2:
c=a-b;
break;
case 3:
c=a*b;
break;
case 4:
c=a/b;
break;
default:
cout<<"invalid input.";
getch();
}
cout<<"the result is="<<c;
getch();
}
while(1);
}