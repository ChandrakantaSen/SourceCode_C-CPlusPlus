//Suvo's Multimedia**********************************************************
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
#include<stdio.h>
struct country
   {
      char name[15],capital[15];
      short literacy;
   };
void main()
   {
      char pname[15],pcapital[15];
      short pliteracy;
      int choice,i;
      clrscr();
      country x[]={
		      "Argentina","Buenos Airas",95,
		      "Bangladesh","Dhaka",35,
		      "Egypt","Cairo",48,
		      "India","New Delhi",52,
		      "Saudi Arabia","Riyadh",62,
		      "Swizerland","Bern",99,
		      "Zimbabwe","Harare",67,
		 };
		 cout<<"********************************************"<<endl;
		 cout<<"\n";
		 cout<<"\n";
		 cout<<"1.For country name"<<endl;
		 cout<<"\n";
		 cout<<"\n";
		 cout<<"***************-------------****************"<<endl;
		 cout<<"\n";
		 cout<<"\n";
		 cout<<"2.For capital"<<endl;
		 cout<<"\n";
		 cout<<"\n";
		 cout<<"***************-------------****************"<<endl;
		 cout<<"\n";
		 cout<<"\n";
		 cout<<"3.For literacy %"<<endl;
		 cout<<"\n";
		 cout<<"\n";
		 cout<<"***************-------------****************"<<endl;
		 cout<<"\n";
		 cout<<"\n";
		 cout<<"Enter your choice : - "<<endl;
		 cin>>choice;
		 if(choice==1)
		 {
		    cout<<"Which country ? :-"<<endl;
		    cout<<"\n";
		    cout<<"\n";
		    cout<<"***************-------------****************"<<endl;
		    cout<<"\n";
		    cout<<"\n";
		    gets(pname);
		    for(i=1;i<=7;i++)
		    {
		       if(strcmp(pname,x[i].name)==0)
		       {
			  cout<<"***************---output---*****************"<<endl;
			  cout<<"\n";
			  cout<<"\n";
			  cout<<"Name"<<x[i].name<<endl;
			  cout<<"\n";
			  cout<<"\n";
			  cout<<"********************************************"<<endl;
			  cout<<"\n";
			  cout<<"\n";
			  cout<<"Capital"<<x[i].capital<<endl;
			  cout<<"\n";
			  cout<<"\n";
			  cout<<"********************************************"<<endl;
			  cout<<"\n";
			  cout<<"\n";
			  cout<<"Literacy %"<<x[i].literacy<<endl;
			  cout<<"\n";
			  cout<<"\n";
			  cout<<"********************************************"<<endl;
			  cout<<"\n";
			  cout<<"\n";
		       }
		    }
		 }
		 if(choice==2)
		 {
		    cout<<"What is the capital ? :-"<<endl;
		    cout<<"\n";
		    cout<<"\n";
		    cout<<"***************-------------****************"<<endl;
		    cout<<"\n";
		    cout<<"\n";
		    cin>>pcapital;
		    for(i=1;i<=7;i++)
		    {
		       if(strcmp(pcapital,x[i].capital)==0)
		       {
			  cout<<"***************---output---*****************"<<endl;
			  cout<<"\n";
			  cout<<"\n";
			  cout<<"Name"<<x[i].name<<endl;
			  cout<<"\n";
			  cout<<"\n";
			  cout<<"********************************************"<<endl;
			  cout<<"\n";
			  cout<<"\n";
			  cout<<"Capital"<<x[i].capital<<endl;
			  cout<<"\n";
			  cout<<"\n";
			  cout<<"********************************************"<<endl;
			  cout<<"\n";
			  cout<<"\n";
			  cout<<"Literacy %"<<x[i].literacy<<endl;
			  cout<<"\n";
			  cout<<"\n";
			  cout<<"********************************************"<<endl;
			  cout<<"\n";
			  cout<<"\n";
		       }
		    }
		 }
		 if(choice==3)
		 {
		    cout<<"What is literacy % ? :-"<<endl;
		    cout<<"\n";
		    cout<<"\n";
		    cout<<"***************-------------****************"<<endl;
		    cout<<"\n";
		    cout<<"\n";
		    cin>>pliteracy;
		    for(i=1;i<=7;i++)
		    {
		       if(x[i].literacy==pliteracy)
		       {
			  cout<<"***************---output---*****************"<<endl;
			  cout<<"\n";
			  cout<<"\n";
			  cout<<"Name"<<x[i].name<<endl;
			  cout<<"\n";
			  cout<<"\n";
			  cout<<"********************************************"<<endl;
			  cout<<"\n";
			  cout<<"\n";
			  cout<<"Capital"<<x[i].capital<<endl;
			  cout<<"\n";
			  cout<<"\n";
			  cout<<"********************************************"<<endl;
			  cout<<"\n";
			  cout<<"\n";
			  cout<<"Literacy %"<<x[i].literacy<<endl;
			  cout<<"\n";
			  cout<<"\n";
			  cout<<"********************************************"<<endl;
		       }
		    }
		 }
		 getch();
       }
/************************-------------------------**************************/