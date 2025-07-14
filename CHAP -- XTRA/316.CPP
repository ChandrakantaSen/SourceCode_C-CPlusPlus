//Suvo's Multimedia
#include<iostream.h>
#include<conio.h>
enum gamer
  {
     win,lose,cancel,draw,shootout
  };
void main()
  {
     clrscr();
     gamer result;
     gamer omit=cancel;
     int display;
     for(display=win;display<=shootout;display++)
     {
	result=(gamer)display;
	if(result==omit)
	{
	   cout<<"The game has been cancelled"<<endl;
	}
	else
	{
	   cout<<"The game has been played"<<endl;
	   if(result==win)
	   {
	      cout<<"and won !"<<endl;
	   }
	   if(result==lose)
	   {
	      cout<<"and lose !"<<endl;
	   }
	   if(result==shootout)
	   {
	      cout<<"and won by shootout !"<<endl;
	   }
	}
     }
     getch();
  }
