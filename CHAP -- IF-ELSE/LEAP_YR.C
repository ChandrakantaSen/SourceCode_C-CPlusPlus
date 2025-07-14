#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int year,i,j,k,d_month,yr,x=10,y=5;
long total_days=0,days;
clrscr();
printf("enter the year between (1900-2050):");
scanf("%d",&year);
if(year<1900||year>2050)
{
printf("invalid input");
main();
}
clrscr();
for(yr=1900;yr<year;yr++)
{
if(isleap_year(yr))
days=366;
else
days=365;
total_days=total_days+days;
 }
x=(int)(total_days%7);
x=18+x*8;
for(i=1;i<=12;i++)
{
y=8; clrscr();
switch(i)
{
case 1:
printf("\n\n\n\t\t\t  January ----%d",year);
d_month=31;
break;
case 2:
printf("\n\n\n\t\t\t February ----%d",year);
if(isleap_year(year))
d_month=29;
else
d_month=28;
break;
case 3:
printf("\n\n\n\t\t\t March ----%d",year);
d_month=31;
break;
case 4:
printf("\n\n\n\t\t\t April ----%d",year);
d_month=30;
break;
case 5:
printf("\n\n\n\t\t\t May ----%d",year);
d_month=31;
break;
case 6:
printf("\n\n\n\t\t\t June ----%d",year);
d_month=30;
break;
case 7:
printf("\n\n\n\t\t\t July ----%d",year);
d_month=31;
break;
case 8:
printf("\n\n\n\t\t\t August ----%d",year);
d_month=31;
break;
case 9:
printf("\n\n\n\t\t\t September ----",year);
d_month=30;
break;
case 10:
printf("\n\n\n\t\t\t October ----%d",year);
d_month=31;
break;
case 11:
printf("\n\n\n\t\t\t November ----%d",year);
d_month=30;
break;
case 12:
printf("\n\n\n\t\t\t December ----%d",year);
d_month=31;
break;
}
heading();
for(k=1;k<=d_month;k++)
{
gotoxy(x,y);
printf("%2d",k); x+=8;
if(x>64){ x=10;y++;}
}
printf("\n=========================================================== \n");
getch();
}
}
heading()
{
printf("\n\n	Sun     Mon     Tue     Wed     Thu     Fri     Sat");
printf("\n    =======================================================\n");
}
isleap_year(int year)  //checking for leap year//
{
return(year%4==0&&year%100!=0||year%400==0);
getch();
}
