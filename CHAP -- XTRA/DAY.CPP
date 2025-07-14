//TO PRINT THE DAY OF THE MONTH OF A PARTICULAR YEAR//
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
char m[25];
int day,year,r,n,d;
clrscr();
cout<<"enter the year";
cin>>year;
r=year%4;
if(r==0)
{
cout<<"The year is a leap year"<<endl;
cout<<"\nEnter the number from the day(1 to 366)"<<endl;
cin>>day;
n=1;
}
else
{
cout<<"\nThis is not a leap year"<<endl;
cout<<"Enter the number for the day(1 to 365)"<<endl;
cin>>day;
n=0;
}
if(day>=0 && day<=31)
{d=day;
strcpy(m,"JANUARY");
}
else if(day>=32 && day<=(59+n))
{
 d=day-31;
 strcpy(m,"FEBRUARY");
}
else if(day>=(60+n) && day<=(90+n))
{
 d=day-(59+n);
 strcpy(m,"MARCH");
}
else if(day>=(91+n) && day<=(120+n))
{
 d=day-(90+n);
 strcpy(m,"APRIL");
}
else if(day>=(121+n) && day<=(151+n))
{
 d=day-(120+n);
 strcpy(m,"MAY");
}
else if(day>=(152+n) && day<=(181+n))
{
 d=day-(151+n);
 strcpy(m,"JUNE");
}
else if(day>=(182+n) && day<=(212+n))
{
  d=day-(181+n);
  strcpy(m,"JULY");
}
else if(day>=(213+n) && day<=(243+n))
{
  d=day-(212+n);
  strcpy(m,"AUGUST");
}
else if(day>=(244+n) && day<=(273+n))
{
 d=day-(243+n);
 strcpy(m,"SEPTEMBER");
}
else if(day>=(274+n) && day<=(304+n))
{
 d=day-(273+n);
 strcpy(m,"OCTOBER");
}
else if(day>=(305+n) && day<=(334+n))
{
d=day-(304+n);
strcpy(m,"NOVEMBER");
}
else if(day>=(335+n) && day<=(365+n))
{
 d=day-(334+n);
 strcpy(m,"DECEMBER");
}
cout<<d<<"TH"<<m<<year<<"\n";
getch();
}