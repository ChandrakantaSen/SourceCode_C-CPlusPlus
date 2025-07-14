		     /* testing enum for gamer*/
#include<iostream.h>
#include<conio.h>
void main()
{
enum gamer{WIN,LOSE,DRAWN,CANCEL,SHOOTOUT};
gamer result;
gamer omit=CANCEL;
int display;
clrscr();
for(display=WIN;display<=SHOOTOUT;display++)
{
result=(gamer)display;
if(result==omit)
cout<<"the game has been cancalled !\n";
else
{
cout<<"the game has been played\n";
if(result==WIN)
cout<<"and won!\n";
if(result==LOSE)
cout<<"and lost!\n";
if(result==SHOOTOUT)
cout<<"and won by shootout!\n"<<endl;
}
}
getch();
}
