#include<iostream.h>
#include<conio.h>
#include<math.h>
float main()
{
float a,b,c,r1,r2,d;
clrscr();
cout<<"enter the value of a,b,c=";
cin>>a>>b>>c;
d=(b*b-4*a*c);
if(d<0)
cout<<"roots are imaginer";
else
r1=-b+(sqrt(d))/(2*a);
r2=-b-(sqrt(d))/(2*a);
cout<<"the value of root1 and root2"<<r1<<r2;
getch();
return(0);
}
