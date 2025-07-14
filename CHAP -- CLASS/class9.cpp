#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
class HOUSING
{
char NAME[100],TYPE;
float COST;
public:
 int REG_NO;
 int v,v1;
void Read_Data()
{
cout<<"\n\tEnter the name "<<endl;
gets(NAME);
cout<<"Enter the type of Housing  : -"<<endl;
cin>>TYPE;
cout<<"Enter the cost of the house: -"<<endl;
cin>>COST;
cout<<"\n\tEnter the registration number:"<<endl;
cin>>REG_NO;
while((REG_NO<10)&&(REG_NO>1000))
{
cout<<"Inavalid Registration Number ..."<<endl;
cout<<"\n\tEnter the registration number:"<<endl;
cin>>REG_NO;
}
}
void Display()
{
cout<<"The name is : - "<<NAME<<endl;
cout<<"The type : - "<<TYPE<<endl;
cout<<"The cost  : - "<<COST<<endl;
cout<<"The registration :-"<<REG_NO<<endl;
}
void Draw_Nos()
{
v=rand()%2+0;
v1=rand()%2+0;
}
};
void main()
{
clrscr();
HOUSING ob[3],ob1;
int i;
cout<<"Enter the registration number   : - "<<endl;
for(i=0;i<3;i++)
{
ob[i].Read_Data();
}
cout<<"The registration number is  : - "<<endl;
for(i=0;i<3;i++)
{
ob[i].Display();
}
ob1.Draw_Nos();
for(i=0;i<3;i++)
{
cout<<ob1.v<<endl;
if(ob1.v==ob[i].REG_NO)
{
ob[i].Display();
}
}
for(i=0;i<3;i++)
{
if(ob1.v1==ob[i].REG_NO)
{
ob[i].Display();
}
}
getch();
}
