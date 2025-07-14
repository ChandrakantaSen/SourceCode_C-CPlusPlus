//Suvo's Multimedia**********************************************************
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdio.h>
struct dob
   {
      int day,month,year;
   }  date[3];
      enum sex{male,female};
struct interact
   {
      int slno,age;
      char name[30],email[25];
      int stat;
   }  member[2];
void main()
   {
      char ch;
      int i;
      clrscr();
      for(i=0;i<2;i++)
      {
	 cout<<"Serial No :-"<<endl;
	 cin>>ch;
	 cout<<"Enter name :-"<<endl;
	 gets(member[i].name);
	 cout<<"Enter e-mail :-"<<endl;
	 gets(member[i].email);
	 cout<<"Enter age :-"<<endl;
	 cin>>member[i].age;
	 cout<<"Enter sex :-"<<endl;
	 cin>>member[i].stat;
	 cout<<"Enter date of birth (dd/mm/yyyy)"<<endl;
	 cin>>date[i].day>>date[i].month>>date[i].year;
      }
	 cout<<"LIST OF FEMALE INTERACTORS"<<endl;
	 for(i=0;i<2;i++)
	 {
	    cout<<"="<<endl;
	    for(i=0;i<2;i++)
	    {
	       if(member[i].stat==female)
	       {
		  cout<<"Serial No"<<i+1<<endl;
		  cout<<"Name"<<member[i].name<<endl;
		  cout<<"Date of birth"<<date[i].day<<"/"<<date[i].month<<"/"<<date[i].year<<endl;
	       }
	    }
	 }
      getch();
}
//************************-------------------------**************************