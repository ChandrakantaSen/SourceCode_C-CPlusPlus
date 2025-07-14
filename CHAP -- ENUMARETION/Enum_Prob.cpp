#include<iostream.h>
#include<conio.h>
enum conics
  {
     rose=1,lily,zinnia,merrigold,jasmine,tulip
  };
void main()
  {
     clrscr();
     int flw1,flw2,diff,sum,prod,total;
     char reply;
     do
     {
	cout<<"Choose two flower"<<endl;
	cout<<"rose=1,lily-2,zinnia-3,merrigold-4,jasmine-5,tulip-6"<<endl;
	cin>>flw1>>flw2;
	if((flw1>=rose&&flw1<=tulip)&&(flw2>=rose&&flw2<=tulip))
	{
	   diff=flw1-flw2;
	   sum=flw1+flw2;
	   prod=flw1*flw2;
	   total=diff+sum+prod;
	   if(total==20)
	   {
	      cout<<"JACKPOT"<<endl;
	      break;
	   }
	   else
	   {
	      cout<<"Sorry! want to try again"<<endl;
	      cout<<"To try again press y"<<endl;
	      cout<<"To exit press any other number"<<endl;
	      cin>>reply;
	   }
	}
     }
     while(reply=='y');
     getch();
  }

