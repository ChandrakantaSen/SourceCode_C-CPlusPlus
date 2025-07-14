#include<iostream.h>
#include<conio.h>
#include<math.h>
main()
{
int m1,m2,m3,m4,m5;
float avg;
clrscr();
cout<<"enter the marks= ";
cin>>m1>>m2>>m3>>m4>>m5;
avg=(m1+m2+m3+m4+m5)/5;
cout<<"\n The avg is",avg;
if (avg>=60)
cout<<"\n First division";
else if
(avg>=50)((avg>=50)&&(avg<60))
cout<<"\n Second division";
else if
(avg>=40/((avg>=40)&&avg<50))
cout<<"\n Third div";
else
cout<<"\n failed";
getch();
}