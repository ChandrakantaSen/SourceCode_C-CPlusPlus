// Program for date difference with date validation checking.
#include<iostream.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
//****************************************************
class date
{
private:
 int days;
 int months;
 int years;
public:
 date() { days=months=years=0;}
 void getdate();
 void show()
      { cout<<years<<" Years "<<months<<" Months "<<days<<" Days"; }
 date operator-(date);
};
//****************************************************
void date::getdate()
{
 int valid_date(int,int,int);
 char dt[12];
 cin>>dt;
  char dd[3]={dt[0],dt[1]}; dd[2]='\0';
  char mm[3]={dt[3],dt[4]}; mm[2]='\0';
  char yy[5]={dt[6],dt[7],dt[8],dt[9]}; yy[4]='\0';
  days=atoi(dd);  months=atoi(mm);  years=atoi(yy);
  if(!valid_date(days,months,years))
   { cout<<"Invalid Date"; getch(); exit(0);}
}
//*****************************************************
date date::operator-(date d)
{
  date temp;
  temp.days=days-d.days;
  temp.months=months-d.months;
  temp.years=years-d.years;
  return temp;
}
//*****************************************
int valid_date(int d,int m,int y)
{
 int is_leapyear(int);
 if(m>12) return 0;
 if((m==2 &&  is_leapyear(y) && d>29)) return 0;
 if((m==2 && !is_leapyear(y) && d>28)) return 0;
 if((m%2==1 && m<=7)||(m%2==0 && m>7))
   { if(d>31) return 0; }
 else
   { if(d>30) return 0; }
 return 1;
}
//***********************************************
// Returns 1 if y is a leap year , 0 otherwise.
int is_leapyear(int yr)
{
 return yr%4==0 && yr%100!=0 || yr%400==0;
}
//***********************************************
void main()
{
date date1,date2,date3;
clrscr();
cout<<"Enter 1st Date : "; date1.getdate();
cout<<"Enter 2nd Date : "; date2.getdate();
cout<<"=========================== "<<endl;
date3=date2-date1;    // operator overloading.
date3.show();
getch();
}
//***********************************************