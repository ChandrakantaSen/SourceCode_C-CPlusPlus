//Suvo's Multimedia**********************************************************
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdio.h>
struct class_list
   {
      int slno,rollno;
      char name[30];
   }Twelve[39];
void main()
{
   clrscr();
   cout<<"***********************************************************"<<endl;
   cout<<"\n";
   cout<<"\n";
   cout<<"Input serial number"<<endl;
   cout<<"\n";
   cout<<"\n";
   cout<<"***********************************************************"<<endl;
   cout<<"\n";
   cout<<"\n";
   cin>>Twelve[0].slno;
   cout<<"\n";
   cout<<"\n";
   cout<<"***********************************************************"<<endl;
   cout<<"\n";
   cout<<"\n";
   cout<<"Input roll number"<<endl;
   cout<<"\n";
   cout<<"\n";
   cout<<"***********************************************************"<<endl;
   cout<<"\n";
   cout<<"\n";
   cin>>Twelve[0].rollno;
   cout<<"\n";
   cout<<"\n";
   cout<<"**********************----------------*********************"<<endl;
   cout<<"\n";
   cout<<"\n";
   cout<<"Input name"<<endl;
   cout<<"\n";
   cout<<"\n";
   cout<<"**********************----------------*********************"<<endl;
   cout<<"\n";
   cout<<"\n";
   gets(Twelve[0].name);
   cout<<"\n";
   cout<<"\n";
   cout<<"**********************----------------*********************"<<endl;
   cout<<"\n";
   cout<<"\n";
   cout<<"Input serial number"<<endl;
   cout<<"\n";
   cout<<"\n";
   cout<<"**********************----------------*********************"<<endl;
   cout<<"\n";
   cout<<"\n";
   cin>>Twelve[1].slno;
   cout<<"\n";
   cout<<"\n";
   cout<<"**********************----------------*********************"<<endl;
   cout<<"\n";
   cout<<"\n";
   cout<<"Input roll number"<<endl;
   cout<<"\n";
   cout<<"\n";
   cout<<"**********************----------------*********************"<<endl;
   cout<<"\n";
   cout<<"\n";
   cin>>Twelve[1].rollno;
   cout<<"\n";
   cout<<"\n";
   cout<<"**********************----------------*********************"<<endl;
   cout<<"\n";
   cout<<"\n";
   cout<<"Input name"<<endl;
   cout<<"\n";
   cout<<"\n";
   cout<<"**********************----------------*********************"<<endl;
   cout<<"\n";
   cout<<"\n";
   gets(Twelve[1].name);
   cout<<"\n";
   cout<<"\n";
   cout<<"**********************----Output------*********************"<<endl;
   cout<<"\n";
   cout<<"\n";
   cout<<"First student in class Twelve list"<<endl;
   cout<<"\n";
   cout<<"\n";
   cout<<"Serial Number"<<Twelve[0].slno<<endl;
   cout<<"\n";
   cout<<"\n";
   cout<<"Roll Number"<<Twelve[0].rollno<<endl;
   cout<<"\n";
   cout<<"\n";
   cout<<"Name"<<Twelve[0].name<<endl;
   cout<<"\n";
   cout<<"\n";
   cout<<"**********************----------------*********************"<<endl;
   cout<<"\n";
   cout<<"\n";
   cout<<"Second student in class Twelve list"<<endl;
   cout<<"\n";
   cout<<"\n";
   cout<<"Serial Number"<<Twelve[1].slno<<endl;
   cout<<"\n";
   cout<<"\n";
   cout<<"Roll Number"<<Twelve[1].rollno<<endl;
   cout<<"\n";
   cout<<"\n";
   cout<<"Name"<<Twelve[1].name<<endl;
   getch();
}
//************************-------------------------**************************