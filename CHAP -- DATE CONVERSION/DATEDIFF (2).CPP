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
day=day+mon[i];
if(m>2)
day=day+leap(y)+d;
else
day=day+d;
return day;
}
long countdate(int d,int m,int y,int dd,int mm,int yy)
{
long i,td=0;
if(y==yy)
{
 td=count(d,m,y)-count(dd,mm,yy);
 if(td<0)
 td=td*-1;
}
else if(y>yy)
{
for(i=yy+1;i<y;i++)
td=td+365+leap(i);
td=td+(365+leap(yy))+count(d,m,y)-count(dd,mm,yy);
}
else
{
for(i=y+1;i<yy;i++)
td=td+365+leap(i);
td=td+(365+leap(y))+count(dd,mm,yy)-count(d,m,y);
}
return td;
}
};
void main()
{
 clrscr();
 date obj;
 int d,m,y,dd,mm,yy;
 cout<<"\nEnter a date:";
 scanf("%d/%d/%d",&d,&m,&y);
 cout<<"\nEnter another date:";
 scanf("%d/%d/%d",&dd,&mm,&yy);
 cout<<obj.countdate(d,m,y,dd,mm,yy);
 getch();
}



