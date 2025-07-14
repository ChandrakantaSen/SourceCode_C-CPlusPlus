//Suvo's Multimedia
#include<iostream.h>
#include<conio.h>
struct date
   {
      int day,month,year;
   }f,s;
earlier(date d1,date d2); //STRUCTURE PARAMETER PASSING
void main()
   {
   clrscr();
      cout<<"Enter day(dd),month(mm),year(yyyy)"<<endl;
      cin>>f.day>>f.month>>f.year;
      cout<<"Enter the next day(dd),month(mm),year(yyyy)"<<endl;
      cin>>s.day>>s.month>>s.year;
      cout<<earlier(f,s);
      cout<<"\n";
      getch();
   }
       earlier(date d1,date d2)
   {
      if(d1.year<d2.year)
      {
      cout<<d1.day<<"/"<<d1.month<<"/";
      return d1.year;
      }
     else if(d1.year==d2.year)
     {
     if(d1.month<d2.month)
      {
      cout<<d1.day<<"/"<<d1.month<<"/";
      }
      else if(d1.month==d2.month)
      {
      if(d1.day<d2.day)
      {
      cout<<d1.day<<"/"<<d1.month<<"/";
      }
      else
      {
      cout<<d2.day<<"/"<<d1.month<<"/";
      }
      return (d1.year);
      }
      else
      {
      cout<<d2.day<<"/"<<d2.month<<"/";
      }
      return d1.year;
     }
      else
      {
      cout<<d2.day<<"/"<<d2.month<<"/";
      return d2.year;
      }
      }
