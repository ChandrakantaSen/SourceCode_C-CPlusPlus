#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
class worker
{
char wname[25];
float hrwk,wgrate,totwage;
clacwg();
}
public:
void in_data()
{
cout<<"\n\t enter the worker name"<<endl;
gets(wname);
cout<<"\n\t enter the total hours worked by the worker"<<endl;
cin>>hrwk;
cout<"\n\t enter the amount of wage grae per hour"<<endl;
cin>>wgrate;
cout<<"\n\t the total wage of the worker"<<endl;
totwage=hrwk*wgrate;
cin>>totwage;
}
void out_data()
{
cout<<"\n\t the worker name"<<wname<<endl;
cout<<"\n\t total hours worked"<<hrwk<<endl;
cout<<"\n\t total wage per hour "<<wgrate<<endl;
cout<<"\n\t total wage"<<totwage"<<endl;

};
void main()
{ worker ob;
ob.wname;
ob.hrwk;
ob.totwage;
getch();
}

