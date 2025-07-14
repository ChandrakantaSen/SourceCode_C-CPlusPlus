#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class date
{
public:
int leap(int y)
{
if(y%4==0 && y%100!=0)
return 1;
else if(y%400==0)
return 1;
else
return 0;
}
int count(int d, int m, int y)
{
int i,day=0;
int mon[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=0;i<m;i++)
	{
		day=day+mon[i];
		if(m>2)
      {
			day=day+leap(y)+d;
				}
					else
               {
					day=day+d;
							}
                     }
return day;
}
};
void main()
{
 clrscr();
 date obj;
 int d,m,y;
 cout<<"\nEnter a date:";
cin>>d>>m>>y;
 cout<<obj.count(d,m,y);
 getch();
}


