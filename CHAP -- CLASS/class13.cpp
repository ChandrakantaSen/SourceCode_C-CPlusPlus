#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
class flight
{
int flightnumber,destination;
float distance,fuel;
public:
void Feed_info()
{
cout<<"\n\t enter the number of the flight "<<endl;
cin>>flightnumber;
cout<<"\n\t enter the destination of travel"<<endl;
cin>>destination;
cout<<"\n\t enter the total distance travelled"<<endl;
cin>>distance;
cout<<"\n\t enter the fuel used "<<endl;
cin>>fuel;
}
void calfuel()
if(distance<=1000)
cout<<"\n\t fuel used 500"<<endl;
else if(distance>=1500)&&(distance>=3000)
cout<<"\n\t fuel used 1100"<<endl;
else if(distance>2000)
cout<<"\n\t the fuel used is 2200"<<endl;
}
void Show_Fuel()
cout<<"\n\t the number of the flight is"<<flightnumber<<endl;
cout<<"\n\t the destination upto travel"<<destination<<endl;
cout<<"\n\t the total distance travelled is"<<destination<<endl;
cout<<"\n\t enter the fuel used "<<fuel;
}
};
void main()
{ flight ob;
ob.flightumber;
ob.destination;
ob.distance;
ob.fuel;
getch();
}

