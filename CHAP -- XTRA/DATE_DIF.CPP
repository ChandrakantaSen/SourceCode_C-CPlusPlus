#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int leap(int y)
{
	 if(y%100==0 && y%400)
	 return 1;
	 else if(y%4==0 && y%100!=0)
	 return 1;
	 else
	 return 0;
}
long cal(int y,int m,int d,int y2,int m2,int d2)
{
	int day=0;
	int i;
	for(i=y+1;i<y2;i++)
	{
		day=day+365;
		day=day+leap(i);
	}
cout<<"\n"<<day<<"\n";
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=m;i<=11;i++)
	{
	day=day+month[i];
		if(i==1)               //checking leap year and counting the days
		day=day+leap(y);       //counting month of previous year
	}
	day=day+(month[m-1]-d);
	for(i=0;i<m2-2;i++)
	{
	day=day+month[i];
		if(i==1)
		day=day+leap(i);
	}
	day=day+d2;
return day;
}
void main()
{
clrscr();
int dd,mm,yy,dd2,mm2,yy2;
cout<<"\nEnter first date:";
scanf("%d\/%d\/%d",&dd,&mm,&yy);
cout<<"\nEnter second date:";
scanf("%d\/%d\/%d",&dd2,&mm2,&yy2);
long s=cal(dd,mm,yy,dd2,mm2,yy2)-1;
cout<<"\nDate difference="<<s;
getch();
}



























































































































































































