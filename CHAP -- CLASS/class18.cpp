#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
class  train
{ int trainnumber;
char destination[10];
float distance,fuel;
public:
void FEEDINFO()
cout<<"\n\t enter the train number :-"<<endl;
cin>>trainnumber;
cout<<"\n\t enter the destination :-"<<endl;
gets(destination);
cout<<"n\t enter the total distance of travel :-"<<endl;
cin>>distance;
cout<<"\n\t enter the total fuel used :-"<<endl;
cin>>fuel;
}
void CALFUEL()
{
if(distance<=1500)
cout<<"\n\t the fuel used is 250 :-"<<endl;
esle if(distance>=1500&&(distance<=3000)
cout<<"\n\t the fuel used is 1000 :-"<<endl;
else if(distance>=3000)
cout<<"\n\t the fuel used is 2500 :-"<<endl;
}
void SHOWINFO()
{
cout<<"\n\t the train number is :-"<<trainnumber<<endl;
cout<"\n\t the destinbation :-"<<destination<<endl;
cout<<"\n\t the total distance travel is :-"<<distance<<endl;
cout<<"\n\t the fuel used is :-"<<fuel;
}
void main()
[ train ob;
ob.trainnumber;
ob.destination;
ob.distance;
ob.fuel;
getch();
}



